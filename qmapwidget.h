#ifndef QMAPWIDGET_H
#define QMAPWIDGET_H

#include "MapGraphicsView.h"
#include <QString>
#include <QDate>
#include <QHash>

typedef enum{
    QMapWidgetHistoryIntegerData,
    QMapWidgetHistoryDoubleData,
    QMapWidgetHistoryPercentData
} HistoryDataType;

class QMapWidget : public MapGraphicsView
{
public:
    explicit QMapWidget(MapGraphicsScene *scene, QWidget *parent);
    explicit QMapWidget(MapGraphicsScene *scene, QWidget *parent, qreal centerX, qreal centerY, int zoom);
    void locateCity(QString cityName);
    void locateCountry(QString countryName);
    void addCountryOverlay(QString countryName, QColor color);
    void addRegionOverlay(QPolygonF regionPolygon, QColor color);
    void loadHistoryData(const QString fileName, HistoryDataType datatype=QMapWidgetHistoryIntegerData);
    void getDataForDate(QDate date);
protected:
    void geocodingCountry(QString countryName);
private:
    QHash< QString, QHash<QString, int> > historyData;
    void displayHistoryData();
private slots:
    void handleNetworkRequestFinished();

};

#endif // QMAPWIDGET_H
