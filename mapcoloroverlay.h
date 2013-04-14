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
    PolygonObject* PaintCountryToWidget();
private:
    QColor overlayColor;
    QString countryName;
};

#endif // MAPCOLOROVERLAY_H
