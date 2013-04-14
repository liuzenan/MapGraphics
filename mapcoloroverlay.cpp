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

QList<PolygonObject*> MapColorOverlay::PaintCountryToWidget()
{
    QFile *xmlFile = new QFile("WorldBorders.xml");
            if (!xmlFile->open(QIODevice::ReadOnly | QIODevice::Text)) {
                qDebug("error open file");
            }
    QXmlStreamReader *xmlReader = new QXmlStreamReader(xmlFile);

    //Parse the XML until we reach end of it
    QPolygonF polygon;
    bool match = false;
    bool multi = false;

    while(!xmlReader->atEnd() && !xmlReader->hasError()) {
        // Read next element
        QXmlStreamReader::TokenType token = xmlReader->readNext();
        //If token is just StartDocument - go to next
        if(token == QXmlStreamReader::StartDocument) {
                continue;
        }

        //If token is StartElement - read it
        if(token == QXmlStreamReader::StartElement) {
            if (xmlReader->name() == "area"){
                multi = false;
                if (xmlReader->attributes().value("name").toString() == countryName){
                    match = true;
                } else {
                    match = false;
                }
                continue;
            } else if (xmlReader->name() == "shapes") {
               continue;
            } else if (xmlReader->name() == "shape") {
                if (match) {
                    multi = true;
                }
                continue;
            } else if (xmlReader->name() == "points") {
                continue;
            } else if (xmlReader->name() == "point") {
                if (match) {
                    qreal xpos = xmlReader->attributes().value("lng").toString().toDouble();
                    qreal ypos = xmlReader->attributes().value("lat").toString().toDouble();
                    QPointF point(xpos, ypos);
                    polygon << point;
                }
                continue;
            }
        } else if (token == QXmlStreamReader::EndElement) {
            qDebug() << "End Element" << xmlReader->name().toString();
            if (xmlReader->name() == "shape") {
                if (multi) {
                    polygonList.append(polygon);
                    polygon.clear();
                }
                continue;
            }
            continue;
        }
    }

    if(xmlReader->hasError()) {
        qDebug("error parse file");
    }

    //close reader and flush file
    xmlReader->clear();
    xmlFile->close();
    for (int i = 0; i < polygonList.count(); i++) {
        polygonObjectList.append(new PolygonObject(polygonList.at(i), overlayColor));
    }
    // PolygonObject *polygonObj = new PolygonObject(polygon);

    //return polygonObj;
    return polygonObjectList;

}
