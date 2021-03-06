#include "qmapwidget.h"

#include "tileSources/OSMTileSource.h"
#include "CircleObject.h"
#include "mapcoloroverlay.h"
#include "MapGraphicsNetwork.h"
#include <QUrl>
#include <QFile>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QSharedPointer>
#include <QtDebug>
#include <QThread>
#include <QImage>
#include <QTemporaryFile>
#include <QXmlStreamReader>
#include <limits>

// currently not in use
QMapWidget::QMapWidget(MapGraphicsScene *scene, QWidget *parent):MapGraphicsView(scene,parent)
{
    this->setMouseTracking(true);   // required for tracking mouse movement with mousepress
    this->scene = scene;

    //Setup some tile sources
    QSharedPointer<OSMTileSource> osmTiles(new OSMTileSource(OSMTileSource::OSMTiles), &QObject::deleteLater);
    this->setTileSource(osmTiles);

    this->setZoomLevel(1);
    this->centerOn(103.7500, 1.3667);
    addCountryOverlay("United States of America", QColor(Qt::red));
}

QMapWidget::QMapWidget(MapGraphicsScene *scene, QWidget *parent, qreal centerX, qreal centerY, int zoom):MapGraphicsView(scene,parent)
{
    // get the MapGraphicsScene object (required to add overlays)
    this->scene = scene;

    //Setup some tile sources
    QSharedPointer<OSMTileSource> osmTiles(new OSMTileSource(OSMTileSource::OSMTiles), &QObject::deleteLater);

    this->setTileSource(osmTiles);
    this->setZoomLevel(zoom);
    this->centerOn(centerX, centerY);

//    QList<PolygonObject *> polygons = addCountryOverlay("United States of America", QColor(Qt::darkRed));
//    PolygonObject *polygon = polygons.first();
//    polygon->setCountry(QString("USA"));
//    polygon->updateObjectData(QString("USA"), 12345);
//    addCountryOverlay("China", QColor(Qt::red));
//    addCountryOverlay("Canada", QColor(Qt::red));
//    addCountryOverlay("Australia", QColor(Qt::red));
//    //addCountryOverlay("Brasil", QColor(Qt::red));
//    //addCountryOverlay("Russia", QColor(Qt::red));
//    addCountryOverlay("India", QColor(Qt::red));
//    addCountryOverlay("United Kingdom", QColor(Qt::red));
}

void QMapWidget::locateCity(QString cityName)
{
    currentZoomLevel = 12;
    geocodingCountry(cityName);

}

void QMapWidget::locateCountry(QString countryName)
{
    currentZoomLevel = 5;
    geocodingCountry(countryName);
}

// protected
void QMapWidget::geocodingCountry(QString countryName)
{
    MapGraphicsNetwork * network = MapGraphicsNetwork::getInstance();

    QString host;
    QString url;

    qDebug() << "start";
    //Figure out which server to request from based on our desired tile type

    host = "http://nominatim.openstreetmap.org/";
    url = "/search?q=%1&format=xml&addressdetails=1";

    //Build the request
    const QString fetchURL = url.arg(QString::fromAscii(QUrl::toPercentEncoding(countryName)));
    QNetworkRequest request(QUrl(host + fetchURL));

    //Send the request and setupd a signal to ensure we're notified when it finishes
    QNetworkReply * reply = network->get(request);

    connect(reply,
            SIGNAL(finished()),
            this,
            SLOT(handleNetworkRequestFinished()));
}

// private slots
void QMapWidget::handleNetworkRequestFinished()
{
    QObject * sender = QObject::sender();
    QNetworkReply * reply = qobject_cast<QNetworkReply *>(sender);
    qDebug() << "response";

    if (reply == 0)
    {
        qWarning() << "QNetworkReply cast failure";
        return;
    }

    /*
      We can do this here and use reply later in the function because the reply
      won't be deleted until execution returns to the event loop.
    */
    reply->deleteLater();

    //If there was a network error, ignore the reply
    if (reply->error() != QNetworkReply::NoError)
    {
        qDebug() << "Network Error:" << reply->errorString();
        return;
    }

    //qDebug() << reply->readAll();

    QXmlStreamReader *xmlReader = new QXmlStreamReader(reply->readAll());


    qreal xpos, ypos;
    while(!xmlReader->atEnd() && !xmlReader->hasError()) {
            // Read next element
            QXmlStreamReader::TokenType token = xmlReader->readNext();
            //If token is just StartDocument - go to next
            if(token == QXmlStreamReader::StartDocument) {
                    continue;
            }
            //If token is StartElement - read it
            if(token == QXmlStreamReader::StartElement) {

                    if(xmlReader->name() == "place") {
                        xpos = xmlReader->attributes().value("lon").toString().toDouble();
                        ypos = xmlReader->attributes().value("lat").toString().toDouble();
                        qDebug() << "lng: " << xpos << "lat: " <<ypos;
                        break;
                    }
            }
    }


    if(xmlReader->hasError()) {
        qDebug("error parse file");
    }

    if(xpos>-180 && xpos<180 && ypos>-90 && ypos<90) {
        setZoomLevel(currentZoomLevel);
        this->centerOn(xpos, ypos);
    }

    //close reader and flush file
    xmlReader->clear();
}



QList<PolygonObject *> QMapWidget::addCountryOverlay(QString countryName, QColor color)
{
    MapColorOverlay *overlay = new MapColorOverlay(countryName, color);
    QList<PolygonObject *> polygons = overlay->PaintCountryToWidget();
    for (int i = 0; i < polygons.count(); i++) {
        scene->addObject(polygons.at(i));   // add a list of object (some countries has multiple shape entries)
    }

    // scene->addObject(polygon);
    return polygons;
}

void QMapWidget::addRegionOverlay(QPolygonF regionPolygon, QColor color)
{

}

QString QMapWidget::getItemName()
{
    return itemName;
}

void QMapWidget::loadHistoryData(const QString fileName, HistoryDataType datatype)
{
    Q_UNUSED(datatype)
    QFile *xmlFile = new QFile(fileName);
    if (!xmlFile->open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug("error open file");
        return;
    }

    qDebug()<<"load history data";

    QXmlStreamReader *xmlReader = new QXmlStreamReader(xmlFile);

    historyData = QHash< QString, QHash<QString, int> >();
    QHash<QString, int> hashValue;

    QString countryName;
    QString year;
    _firstYear = QString("9999");
    _lastYear = QString("-9999");
    maxDataValue = std::numeric_limits<int>::min();
    minDataValue = std::numeric_limits<int>::max();

    while(!xmlReader->atEnd() && !xmlReader->hasError()) {

        // Read next element
        QXmlStreamReader::TokenType token = xmlReader->readNext();
        //If token is just StartDocument - go to next
        //qDebug() << "xml text: " << xmlReader->name();
        if(token == QXmlStreamReader::StartDocument) {
                continue;
        }
        //If token is StartElement - read it
        if(token == QXmlStreamReader::StartElement) {

            if(xmlReader->name() == "field") {
                QString nameValue = xmlReader->attributes().value("name").toString();

                if(!nameValue.compare(QString("Country or Area"))){
                    QString newCountryName = QString(xmlReader->readElementText());
                    if(newCountryName.compare(countryName)){
                        hashValue = QHash<QString, int>();
                        countryName = newCountryName;
                    }
                    qDebug() << "country name: " << countryName;
                } else if (!nameValue.compare(QString("Item"))){
                    itemName = QString(xmlReader->readElementText());
                    qDebug() << "item name: "  << itemName;

                } else if (!nameValue.compare(QString("Year"))){
                    year = QString(xmlReader->readElementText());
                    int yearValue = year.toInt();
                    qDebug() << "year: " << year;
                    if (yearValue < _firstYear.toInt()){
                        _firstYear = year;
                    }
                    if (yearValue > _lastYear.toInt()){
                        _lastYear = year;
                    }

                } else if (!nameValue.compare(QString("Value"))) {
                    hashValue[year] = static_cast<int>(xmlReader->readElementText().toDouble());
                    historyData[countryName] = hashValue;
                    //qDebug() << "Value: " << hashValue[year];
                    if(hashValue[year]>maxDataValue){
                        maxDataValue = hashValue[year];
                    }
                    if(hashValue[year]<minDataValue && hashValue[year]>=0){
                        minDataValue = hashValue[year];
                    }
                }
            }
        }
    }

}

// private
void QMapWidget::displayHistoryData()
{
    qDebug() << "start history data";
    MapGraphicsScene *scene = this->getScene();
    QHash< QString, QHash<QString, int> >::iterator i;
    for (i = historyData.begin(); i != historyData.end(); ++i){

        QString countryName = i.key();
        qDebug() << "get country name: " << countryName;

        QHash<QString, int> v = i.value();
        QHash<QString, int>::iterator j;
        for (j = v.begin(); j != v.end(); ++j){
            QString currentYear = j.key();
            int currentValue = j.value();
            qDebug() << "country:" << countryName << "year: " << currentYear << "value: " << currentValue;
            if (!currentYear.compare(_firstYear)){
                //qDebug() << "current value: " << currentValue;
                if (!countryName.compare(QString("China"))){
                    QList<PolygonObject *> polygons = this->addCountryOverlay(countryName, QColor(Qt::red));

                    if(polygons.isEmpty()){
                        continue;
                    }

                    PolygonObject *polygon = polygons.first();
                    polygon->setCountry(countryName);
                    qDebug() << "add country" << countryName << "population: " << currentValue;
                    polygon->updateObjectData(countryName, currentValue, maxDataValue, minDataValue);
                    for (int k = 0; k < polygons.count(); k++) {
                        scene->addObject(polygons.at(k));
                    }
                    scene->addObject(polygon);
                }
            }
        }
    }

}

void QMapWidget::getDataForDate(QDate date)
{

}


int QMapWidget::firstYear()
{
    return _firstYear.toInt();
}

int QMapWidget::lastYear()
{
    return _lastYear.toInt();
}

void QMapWidget::displayHistoryDataForCountry(QString country)
{
    QHash<QString, int> currentCountryData = historyData[country];
    int firstValue = currentCountryData[_firstYear];

    QList<PolygonObject *> polygons = this->addCountryOverlay(country, QColor(Qt::red));

    if(polygons.isEmpty()){
        return;
    }

    PolygonObject *polygon = polygons.first();
    polygon->setMajorRegion(true);
    qDebug() << "add country" << country << "population: " << firstValue;

    for (int k = 0; k < polygons.count(); k++) {
        polygons.at(k)->setCountry(country);
        polygon->updateObjectData(country, firstValue, maxDataValue, minDataValue);
        polygons.at(k)->updateColor(firstValue, maxDataValue, minDataValue);
        qDebug() << "draw canada";
        //scene->addObject(polygons.at(k));
    }

    //scene->addObject(polygon);
}

void QMapWidget::displayHistoryDataForCountries(QList<QString> countries)
{
    QList<QString>::iterator i;
    for (i = countries.begin(); i!=countries.end(); ++i) {
        QString country = *i;

        QHash<QString, int> currentCountryData = historyData[country];
        int firstValue = currentCountryData[_firstYear];

        QList<PolygonObject *> polygons = this->addCountryOverlay(country, QColor(Qt::red));

        if(polygons.isEmpty()){
            return;
        }

        PolygonObject *polygon = polygons.first();
        polygon->setMajorRegion(true);
        qDebug() << "add country" << country << "population: " << firstValue;


        for (int k = 0; k < polygons.count(); k++) {
            polygons.at(k)->setCountry(country);
            polygon->updateObjectData(country, firstValue, maxDataValue, minDataValue);
            polygons.at(k)->updateColor(firstValue, maxDataValue, minDataValue);
            //scene->addObject(polygons.at(k));
        }

        //scene->addObject(polygon);
    }
}

void QMapWidget::updateDataForCountry(QString country, int year)
{
    MapGraphicsScene *scene = this->getScene();
    QHash<QString, int> currentCountryData = historyData[country];

    int firstValue = currentCountryData[QString::number(year)];

    scene->updateObjectsData(country, firstValue, maxDataValue, minDataValue);
}

void QMapWidget::updateDataForCountries(QList<QString> countries, int year)
{

    MapGraphicsScene *scene = this->getScene();
    QList<QString>::iterator i;
    for (i = countries.begin(); i!=countries.end(); ++i) {
        QString country = *i;

        QHash<QString, int> currentCountryData = historyData[country];
        int firstValue = currentCountryData[QString::number(year)];

        scene->updateObjectsData(country, firstValue, maxDataValue, minDataValue);

    }
}

void QMapWidget::removeAllCountryOverlay()
{
    MapGraphicsScene *scene = this->getScene();
    scene->removeAllCountries();
}
