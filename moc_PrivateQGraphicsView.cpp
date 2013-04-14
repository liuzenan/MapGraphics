/****************************************************************************
** Meta object code from reading C++ file 'PrivateQGraphicsView.h'
**
** Created: Mon Apr 15 03:30:29 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MapGraphics/guts/PrivateQGraphicsView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PrivateQGraphicsView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PrivateQGraphicsView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   22,   21,   21, 0x05,
      67,   22,   21,   21, 0x05,
      99,   22,   21,   21, 0x05,
     132,   22,   21,   21, 0x05,
     167,   21,   21,   21, 0x05,
     207,   21,   21,   21, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_PrivateQGraphicsView[] = {
    "PrivateQGraphicsView\0\0event\0"
    "hadMouseDoubleClickEvent(QMouseEvent*)\0"
    "hadMouseMoveEvent(QMouseEvent*)\0"
    "hadMousePressEvent(QMouseEvent*)\0"
    "hadMouseReleaseEvent(QMouseEvent*)\0"
    "hadContextMenuEvent(QContextMenuEvent*)\0"
    "hadWheelEvent(QWheelEvent*)\0"
};

void PrivateQGraphicsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PrivateQGraphicsView *_t = static_cast<PrivateQGraphicsView *>(_o);
        switch (_id) {
        case 0: _t->hadMouseDoubleClickEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: _t->hadMouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: _t->hadMousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->hadMouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->hadContextMenuEvent((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        case 5: _t->hadWheelEvent((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PrivateQGraphicsView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PrivateQGraphicsView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_PrivateQGraphicsView,
      qt_meta_data_PrivateQGraphicsView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PrivateQGraphicsView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PrivateQGraphicsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PrivateQGraphicsView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PrivateQGraphicsView))
        return static_cast<void*>(const_cast< PrivateQGraphicsView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int PrivateQGraphicsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void PrivateQGraphicsView::hadMouseDoubleClickEvent(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PrivateQGraphicsView::hadMouseMoveEvent(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PrivateQGraphicsView::hadMousePressEvent(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PrivateQGraphicsView::hadMouseReleaseEvent(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PrivateQGraphicsView::hadContextMenuEvent(QContextMenuEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PrivateQGraphicsView::hadWheelEvent(QWheelEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
