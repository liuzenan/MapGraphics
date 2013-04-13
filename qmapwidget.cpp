#include "qmapwidget.h"

#include "tileSources/OSMTileSource.h"
#include "CircleObject.h"
#include "PolygonObject.h"
#include "mapcoloroverlay.h"

#include <QSharedPointer>
#include <QtDebug>
#include <QThread>
#include <QImage>


QMapWidget::QMapWidget(MapGraphicsScene *scene, QWidget *parent)
{
    setParent(parent);

    setScene(scene);

    MapColorOverlay overlay;
    PolygonObject * polygon = overlay.PaintCountryToWidget();

    //Setup some tile sources
    QSharedPointer<OSMTileSource> osmTiles(new OSMTileSource(OSMTileSource::OSMTiles), &QObject::deleteLater);
    this->setTileSource(osmTiles);
    scene->addObject(polygon);
    this->setZoomLevel(1);
    this->centerOn(103.7500, 1.3667);
}

QMapWidget::QMapWidget(QWidget *parent)
{
    setParent(parent);

    MapGraphicsScene *scene = new MapGraphicsScene(parent);
    setScene(scene);

    MapColorOverlay overlay;
    PolygonObject * polygon = overlay.PaintCountryToWidget();

    //Setup some tile sources
    QSharedPointer<OSMTileSource> osmTiles(new OSMTileSource(OSMTileSource::OSMTiles), &QObject::deleteLater);
    this->setTileSource(osmTiles);
    scene->addObject(polygon);
    this->setZoomLevel(1);
    this->centerOn(103.7500, 1.3667);
}

QMapWidget::QMapWidget(QWidget *parent, qreal centerX, qreal centerY, int zoom)
{
    setParent(parent);

    MapGraphicsScene *scene = new MapGraphicsScene(parent);
    setScene(scene);

    MapColorOverlay overlay;
    PolygonObject * polygon = overlay.PaintCountryToWidget();

    //Setup some tile sources
    QSharedPointer<OSMTileSource> osmTiles(new OSMTileSource(OSMTileSource::OSMTiles), &QObject::deleteLater);
    this->setTileSource(osmTiles);
    scene->addObject(polygon);
    this->setZoomLevel(zoom);
    this->centerOn(centerX, centerY);
}

