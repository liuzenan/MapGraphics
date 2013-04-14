#include "qmapwidget.h"

#include "tileSources/OSMTileSource.h"
#include "CircleObject.h"
#include "PolygonObject.h"
#include "mapcoloroverlay.h"
#include "MapGraphicsNetwork.h"
#include <QUrl>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QSharedPointer>
#include <QtDebug>
#include <QThread>
#include <QImage>
#include <QTemporaryFile>
#include <QXmlStreamReader>


QMapWidget::QMapWidget(MapGraphicsScene *scene, QWidget *parent):MapGraphicsView(scene,parent)
{

    MapColorOverlay overlay;
    PolygonObject * polygon = overlay.PaintCountryToWidget();

    //Setup some tile sources
    QSharedPointer<OSMTileSource> osmTiles(new OSMTileSource(OSMTileSource::OSMTiles), &QObject::deleteLater);
    this->setTileSource(osmTiles);

    this->setZoomLevel(1);
    this->centerOn(103.7500, 1.3667);

    scene->addObject(polygon);
}

QMapWidget::QMapWidget(MapGraphicsScene *scene, QWidget *parent, qreal centerX, qreal centerY, int zoom):MapGraphicsView(scene,parent)
{
    MapColorOverlay overlay;
    PolygonObject * polygon = overlay.PaintCountryToWidget();

    //Setup some tile sources
    QSharedPointer<OSMTileSource> osmTiles(new OSMTileSource(OSMTileSource::OSMTiles), &QObject::deleteLater);

    this->setTileSource(osmTiles);
    this->setZoomLevel(zoom);
    this->centerOn(centerX, centerY);

    scene->addObject(polygon);

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


    QPointF geoLocation;
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
                        qreal xpos = xmlReader->attributes().value("lat").toString().toDouble();
                        qreal ypos = xmlReader->attributes().value("lng").toString().toDouble();
                        qDebug() << "lng: " << xpos << "lat: " <<ypos;
                        geoLocation = QPointF(xpos, ypos);
                        break;
                    }
            }
    }


    if(xmlReader->hasError()) {
        qDebug("error parse file");
    }

    if(!geoLocation.isNull()) {
        centerOn(geoLocation);
        this->setZoomLevel(9);
    }

    //close reader and flush file
    xmlReader->clear();
}



void QMapWidget::addCountryOverlay(QString countryName, QColor color)
{

}
void QMapWidget::addRegionOverlay(QPolygonF regionPolygon, QColor color)
{

}


