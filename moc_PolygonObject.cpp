/****************************************************************************
** Meta object code from reading C++ file 'PolygonObject.h'
**
** Created: Mon Apr 15 00:49:43 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MapGraphics/PolygonObject.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PolygonObject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PolygonObject[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   14,   14,   14, 0x08,
      75,   14,   14,   14, 0x08,
     107,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PolygonObject[] = {
    "PolygonObject\0\0poly\0polygonChanged(QPolygonF)\0"
    "handleEditCirclePosChanged()\0"
    "handleAddVertexCircleSelected()\0"
    "handleEditCircleDestroyed()\0"
};

void PolygonObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PolygonObject *_t = static_cast<PolygonObject *>(_o);
        switch (_id) {
        case 0: _t->polygonChanged((*reinterpret_cast< const QPolygonF(*)>(_a[1]))); break;
        case 1: _t->handleEditCirclePosChanged(); break;
        case 2: _t->handleAddVertexCircleSelected(); break;
        case 3: _t->handleEditCircleDestroyed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PolygonObject::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PolygonObject::staticMetaObject = {
    { &MapGraphicsObject::staticMetaObject, qt_meta_stringdata_PolygonObject,
      qt_meta_data_PolygonObject, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PolygonObject::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PolygonObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PolygonObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PolygonObject))
        return static_cast<void*>(const_cast< PolygonObject*>(this));
    return MapGraphicsObject::qt_metacast(_clname);
}

int PolygonObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MapGraphicsObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void PolygonObject::polygonChanged(const QPolygonF & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
