/****************************************************************************
** Meta object code from reading C++ file 'MapTileGraphicsObject.h'
**
** Created: Mon Apr 15 03:30:27 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MapGraphics/guts/MapTileGraphicsObject.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MapTileGraphicsObject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MapTileGraphicsObject[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   23,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      67,   23,   22,   22, 0x08,
     111,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MapTileGraphicsObject[] = {
    "MapTileGraphicsObject\0\0x,y,z\0"
    "tileRequested(quint32,quint32,quint8)\0"
    "handleTileRetrieved(quint32,quint32,quint8)\0"
    "handleTileInvalidation()\0"
};

void MapTileGraphicsObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MapTileGraphicsObject *_t = static_cast<MapTileGraphicsObject *>(_o);
        switch (_id) {
        case 0: _t->tileRequested((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3]))); break;
        case 1: _t->handleTileRetrieved((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3]))); break;
        case 2: _t->handleTileInvalidation(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MapTileGraphicsObject::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MapTileGraphicsObject::staticMetaObject = {
    { &QGraphicsObject::staticMetaObject, qt_meta_stringdata_MapTileGraphicsObject,
      qt_meta_data_MapTileGraphicsObject, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MapTileGraphicsObject::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MapTileGraphicsObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MapTileGraphicsObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MapTileGraphicsObject))
        return static_cast<void*>(const_cast< MapTileGraphicsObject*>(this));
    return QGraphicsObject::qt_metacast(_clname);
}

int MapTileGraphicsObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void MapTileGraphicsObject::tileRequested(quint32 _t1, quint32 _t2, quint8 _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
