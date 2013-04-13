#ifndef QMAPWIDGET_H
#define QMAPWIDGET_H

#include "MapGraphicsView.h"
#include <QString>

class QMapWidget : public MapGraphicsView
{
public:
    QMapWidget(MapGraphicsScene *scene, QWidget *parent);
    QMapWidget(QWidget *parent);
    QMapWidget(QWidget *parent, qreal centerX, qreal centerY, int zoom);
    void locateCity(QString *cityName);
    void locateCountry(QString *countryName);
    void addCountryOverlay(QString *countryName, QColor color);
    void addRegionOverlay(QPolygonF regionPolygon, QColor color);
};

#endif // QMAPWIDGET_H
