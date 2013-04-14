#ifndef POLYGONOBJECT_H
#define POLYGONOBJECT_H

#include <QPolygonF>
#include <QList>

#include "MapGraphicsObject.h"
#include "MapGraphics_global.h"
class CircleObject;

class MAPGRAPHICSSHARED_EXPORT PolygonObject : public MapGraphicsObject
{
    Q_OBJECT
public:
    explicit PolygonObject(QPolygonF geoPoly, QColor fillColor = QColor(200,200,200,200), QObject *parent = 0);
    virtual ~PolygonObject();

    //pure-virtual from MapGraphicsObject
    QRectF boundingRect() const;

    //virtual from MapGraphicsObject
    bool contains(const QPointF &geoPos) const;

    //pure-virtual from MapGraphicsObject
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    void updateObjectData(QString country, int value);

    //virtual from MapGraphicsObject
    virtual void setPos(const QPointF &);

    QPolygonF geoPoly() const;

    virtual void setGeoPoly(const QPolygonF& newPoly);

    void setFillColor(const QColor& color);
    void setTextColor(const QColor& color);
    void setTextBackgroundColor(const QColor& color);
    void setText(const QString string);
    QString getCountry();
    void setCountry(QString country);

signals:
    void polygonChanged(const QPolygonF& poly);

public slots:

protected:
    //virtual from MapGraphicsObject
    virtual void mousePressEvent(QGraphicsSceneMouseEvent * event);
    virtual void keyReleaseEvent(QKeyEvent *event);

private slots:
    void handleEditCirclePosChanged();
    void handleAddVertexCircleSelected();
    void handleEditCircleDestroyed();
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);

private:
    void fixAddVertexCirclePos();

    CircleObject * constructEditCircle();
    void destroyEditCircle(MapGraphicsObject * obj);

    CircleObject * constructAddVertexCircle();
    void destroyAddVertexCircle(MapGraphicsObject * obj);

    CircleObject * constructTextCircle(int size);
    void destroyTextCircle(MapGraphicsObject * obj);

    QPolygonF _geoPoly;
    QColor _fillColor;
    QColor _textColor;
    QColor _textBackgroundColor;
    QString _dataText;
    qreal _opacity;

    QString _country;

    QList<MapGraphicsObject *> _editCircles;
    QList<MapGraphicsObject *> _addVertexCircles;

};

#endif // POLYGONOBJECT_H
