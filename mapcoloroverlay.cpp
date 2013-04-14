#include "mapcoloroverlay.h"
#include <QXmlStreamReader>
#include <QFile>
#include <QString>
#include <QDebug>

MapColorOverlay::MapColorOverlay()
{

}

PolygonObject* MapColorOverlay::PaintCountryToWidget()
{
    QFile *xmlFile = new QFile("world.xml");
            if (!xmlFile->open(QIODevice::ReadOnly | QIODevice::Text)) {
                qDebug("error open file");
            }
    QXmlStreamReader *xmlReader = new QXmlStreamReader(xmlFile);


    //Parse the XML until we reach end of it
    QPolygonF polygon;

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

                    if(xmlReader->name() == "point") {
                        qreal xpos = xmlReader->attributes().value("lng").toString().toDouble();
                        qreal ypos = xmlReader->attributes().value("lat").toString().toDouble();
                        QPointF point(xpos, ypos);
                        //qDebug() << xmlReader->attributes().value("lat").toString();
                        polygon << point;
                    }
            }
    }

    if(xmlReader->hasError()) {
        qDebug("error parse file");
    }

    //close reader and flush file
    xmlReader->clear();
    xmlFile->close();
    PolygonObject *polygonObj = new PolygonObject(polygon);

    return polygonObj;

}
