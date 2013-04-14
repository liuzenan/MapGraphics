/****************************************************************************
** Meta object code from reading C++ file 'MapGraphicsView.h'
**
** Created: Sun Apr 14 19:53:55 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MapGraphics/MapGraphicsView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MapGraphicsView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MapGraphicsView[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      54,   48,   16,   16, 0x09,
      96,   48,   16,   16, 0x09,
     131,   48,   16,   16, 0x09,
     167,   48,   16,   16, 0x09,
     205,   48,   16,   16, 0x09,
     252,   48,   16,   16, 0x09,
     293,   16,   16,   16, 0x09,
     324,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MapGraphicsView[] = {
    "MapGraphicsView\0\0nZoom\0zoomLevelChanged(quint8)\0"
    "event\0handleChildMouseDoubleClick(QMouseEvent*)\0"
    "handleChildMouseMove(QMouseEvent*)\0"
    "handleChildMousePress(QMouseEvent*)\0"
    "handleChildMouseRelease(QMouseEvent*)\0"
    "handleChildViewContextMenu(QContextMenuEvent*)\0"
    "handleChildViewScrollWheel(QWheelEvent*)\0"
    "handleNetworkRequestFinished()\0"
    "renderTiles()\0"
};

const QMetaObject MapGraphicsView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MapGraphicsView,
      qt_meta_data_MapGraphicsView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MapGraphicsView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MapGraphicsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MapGraphicsView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MapGraphicsView))
        return static_cast<void*>(const_cast< MapGraphicsView*>(this));
    if (!strcmp(_clname, "PrivateQGraphicsInfoSource"))
        return static_cast< PrivateQGraphicsInfoSource*>(const_cast< MapGraphicsView*>(this));
    return QWidget::qt_metacast(_clname);
}

int MapGraphicsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: zoomLevelChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 1: handleChildMouseDoubleClick((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: handleChildMouseMove((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: handleChildMousePress((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: handleChildMouseRelease((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 5: handleChildViewContextMenu((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        case 6: handleChildViewScrollWheel((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        case 7: handleNetworkRequestFinished(); break;
        case 8: renderTiles(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void MapGraphicsView::zoomLevelChanged(quint8 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
