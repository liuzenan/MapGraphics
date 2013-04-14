/****************************************************************************
** Meta object code from reading C++ file 'PolygonObject.h'
**
** Created: Sun Apr 14 19:54:05 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MapGraphics/PolygonObject.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PolygonObject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PolygonObject[] = {

 // content:
       5,       // revision
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

const QMetaObject PolygonObject::staticMetaObject = {
    { &MapGraphicsObject::staticMetaObject, qt_meta_stringdata_PolygonObject,
      qt_meta_data_PolygonObject, 0 }
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
        switch (_id) {
        case 0: polygonChanged((*reinterpret_cast< const QPolygonF(*)>(_a[1]))); break;
        case 1: handleEditCirclePosChanged(); break;
        case 2: handleAddVertexCircleSelected(); break;
        case 3: handleEditCircleDestroyed(); break;
        default: ;
        }
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
