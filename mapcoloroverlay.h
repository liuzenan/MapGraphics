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
    PolygonObject* PaintCountryToWidget();
};

#endif // MAPCOLOROVERLAY_H
