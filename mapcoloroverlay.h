#ifndef MAPCOLOROVERLAY_H
#define MAPCOLOROVERLAY_H

#include <PolygonObject.h>
#include "MapGraphicsObject.h"
#include "MapGraphics_global.h"
class CircleObject;


class MapColorOverlay : public QObject
{
    Q_OBJECT
public:
    MapColorOverlay();
    MapColorOverlay(QString countryName, QColor color);
    QList<PolygonObject*> PaintCountryToWidget();
private:
    QColor overlayColor;
    QString countryName;
    QList<QPolygonF> polygonList;
    QList<PolygonObject *> polygonObjectList;
};

#endif // MAPCOLOROVERLAY_H
