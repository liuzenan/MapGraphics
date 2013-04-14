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

    QList<PolygonObject *> polygons = addCountryOverlay("United States of America", QColor(Qt::darkRed));
    PolygonObject *polygon = polygons.first();
    polygon->setCountry(QString("USA"));
    polygon->updateObjectData(QString("USA"), 12345);
    addCountryOverlay("China", QColor(Qt::red));
    //addCountryOverlay("Canada", QColor(Qt::red));
    //addCountryOverlay("Australia", QColor(Qt::red));
    //addCountryOverlay("Brasil", QColor(Qt::red));
    //addCountryOverlay("Russia", QColor(Qt::red));
    //addCountryOverlay("New Zealand", QColor(Qt::red));
    addCountryOverlay("United Kingdom", QColor(Qt::red));
}

void QMapWidget::locateCity(QString cityName)
{
    geocodingCountry(cityName);
    //setZoomLevel(9);
}

void QMapWidget::locateCountry(QString countryName)
{
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
        this->setZoomLevel(12);
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

    historyData = QHash< QString, QHash<int, int> >();
    QHash<int, int> hashValue;

    QString countryName;
    QString itemName;
    int year;
    firstYear = 9999;
    lastYear = -9999;

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

            if(xmlReader->name() == "record") {
                hashValue = QHash<int, int>();
            }
            if(xmlReader->name() == "field") {
                QString nameValue = xmlReader->attributes().value("name").toString();

                if(!nameValue.compare(QString("Country or Area"))){
                    countryName = QString(xmlReader->readElementText());
                    qDebug() << "country name: " << countryName;
                } else if (!nameValue.compare(QString("Item"))){
                    itemName = QString(xmlReader->readElementText());
                    qDebug() << "item name: "  << itemName;

                } else if (!nameValue.compare(QString("Year"))){
                    year = xmlReader->readElementText().toInt();
                    qDebug() << "year: " << year;
                    if (year < firstYear){
                        firstYear = year;
                    }
                    if (year > lastYear){
                        lastYear = year;
                    }

                } else if (!nameValue.compare(QString("Value"))) {
                    hashValue[year] = static_cast<int>(xmlReader->readElementText().toDouble());
                    historyData[countryName] = hashValue;
                    qDebug() << "Value: " << hashValue[year];
                }
            }
        }
    }
}

// private
void QMapWidget::displayHistoryData()
{
    qDebug() << "start history data";
    QHash< QString, QHash<int, int> >::iterator i;
    for (i = historyData.begin(); i != historyData.end(); ++i){
        MapGraphicsScene *scene = this->getScene();
        QString countryName = i.key();
        qDebug() << "get country name: " << countryName;
        QList<PolygonObject *> polygons = this->addCountryOverlay(countryName, QColor(Qt::red));

        if(polygons.isEmpty()){
            continue;
        }

        PolygonObject *polygon = polygons.first();
        polygon->setCountry(countryName);
        for (int k = 0; k < polygons.count(); k++) {
            scene->addObject(polygons.at(k));
        }
        QHash<int, int> v = i.value();
        QHash<int, int>::iterator j;
        for (j = v.begin(); j != v.end(); ++j){
            int currentYear = j.key();
            int currentValue = j.value();
            if (currentYear = firstYear){
                if (!countryName.compare(QString("China"))){
                    polygon->updateObjectData(countryName, currentValue);
                }
            }
        }
    }

}

void QMapWidget::getDataForDate(QDate date)
{

}

