/****************************************************************************
** Meta object code from reading C++ file 'LineObject.h'
**
** Created: Mon Apr 15 00:04:16 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MapGraphics/LineObject.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LineObject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LineObject[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   12,   11,   11, 0x0a,
      39,   12,   11,   11, 0x0a,
      66,   62,   11,   11, 0x0a,
      98,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LineObject[] = {
    "LineObject\0\0pos\0setEndPointA(Position)\0"
    "setEndPointB(Position)\0a,b\0"
    "setEndPoints(Position,Position)\0"
    "updatePositionFromEndPoints()\0"
};

const QMetaObject LineObject::staticMetaObject = {
    { &MapGraphicsObject::staticMetaObject, qt_meta_stringdata_LineObject,
      qt_meta_data_LineObject, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LineObject::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LineObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LineObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LineObject))
        return static_cast<void*>(const_cast< LineObject*>(this));
    return MapGraphicsObject::qt_metacast(_clname);
}

int LineObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MapGraphicsObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setEndPointA((*reinterpret_cast< const Position(*)>(_a[1]))); break;
        case 1: setEndPointB((*reinterpret_cast< const Position(*)>(_a[1]))); break;
        case 2: setEndPoints((*reinterpret_cast< const Position(*)>(_a[1])),(*reinterpret_cast< const Position(*)>(_a[2]))); break;
        case 3: updatePositionFromEndPoints(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
