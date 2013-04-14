#include "mapcoloroverlay.h"
#include <QXmlStreamReader>
#include <QFile>
#include <QString>
#include <QDebug>

MapColorOverlay::MapColorOverlay()
{

}

MapColorOverlay::MapColorOverlay(QString countryName, QColor color)
{
    this->countryName = countryName;
    this->overlayColor = color;
}

PolygonObject* MapColorOverlay::PaintCountryToWidget()
{
    QFile *xmlFile = new QFile("WorldBorders.xml");
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
                if (xmlReader->name() == "area"){
                    if (xmlReader->attributes().value("name").toString() == countryName){
                        while (!((xmlReader->readNext() == QXmlStreamReader::StartElement) && xmlReader->name() == "points")){
                            qDebug() << xmlReader->name();
                        };
                        qDebug() << xmlReader->name();
                        while(true) {
                            if((token = xmlReader->readNext()) == QXmlStreamReader::StartElement && xmlReader->name() == "point") {
                                qDebug() << xmlReader->name();
                                qreal xpos = xmlReader->attributes().value("lng").toString().toDouble();
                                qreal ypos = xmlReader->attributes().value("lat").toString().toDouble();
                                QPointF point(xpos, ypos);
                                polygon << point;
                            } else if (token == QXmlStreamReader::StartElement && xmlReader->name() != "point"){
                                break;
                            } else {
                                continue;
                            }
                        }
                     }
                } else {
                   continue;
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
