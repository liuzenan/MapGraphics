#ifndef QMAPWIDGET_H
#define QMAPWIDGET_H

#include "MapGraphicsView.h"
#include "PolygonObject.h"
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
    QList<PolygonObject *> addCountryOverlay(QString countryName, QColor color);
    void addRegionOverlay(QPolygonF regionPolygon, QColor color);
    void loadHistoryData(const QString fileName, HistoryDataType datatype=QMapWidgetHistoryIntegerData);
    void displayHistoryData();
    void displayHistoryDataForCountry(QString country);
    void displayHistoryDataForCountries(QList<QString> countries);
    void updateDataForCountry(QString country, int year);
    void updateDataForCountries(QList<QString> countries, int year);
    void removeAllCountryOverlay();
    int firstYear();
    int lastYear();


protected:
    void geocodingCountry(QString countryName);

private:
    QHash< QString, QHash<QString, int> > historyData;
    void getDataForDate(QDate date);
    QString _firstYear;
    QString _lastYear;
    int maxDataValue;
    int minDataValue;
    int currentZoomLevel;
    QList<QString> currentCountries;
private slots:
    void handleNetworkRequestFinished();
private:
    MapGraphicsScene * scene;
};

#endif // QMAPWIDGET_H
