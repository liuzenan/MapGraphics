#ifndef QMAPWIDGET_H
#define QMAPWIDGET_H

#include "MapGraphicsView.h"
#include <QString>

class QMapWidget : public MapGraphicsView
{
public:
    explicit QMapWidget(MapGraphicsScene *scene, QWidget *parent);
    explicit QMapWidget(QWidget *parent);
    explicit QMapWidget(QWidget *parent, qreal centerX, qreal centerY, int zoom);
    void locateCity(QString cityName);
    void locateCountry(QString countryName);
    void addCountryOverlay(QString countryName, QColor color);
    void addRegionOverlay(QPolygonF regionPolygon, QColor color);
protected:
    void geocodingCountry(QString countryName);
private slots:
    void handleNetworkRequestFinished();

};

#endif // QMAPWIDGET_H
