/****************************************************************************
** Meta object code from reading C++ file 'LineObject.h'
**
** Created: Sat Apr 13 21:55:39 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MapGraphics/LineObject.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LineObject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LineObject[] = {

 // content:
       6,       // revision
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

void LineObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LineObject *_t = static_cast<LineObject *>(_o);
        switch (_id) {
        case 0: _t->setEndPointA((*reinterpret_cast< const Position(*)>(_a[1]))); break;
        case 1: _t->setEndPointB((*reinterpret_cast< const Position(*)>(_a[1]))); break;
        case 2: _t->setEndPoints((*reinterpret_cast< const Position(*)>(_a[1])),(*reinterpret_cast< const Position(*)>(_a[2]))); break;
        case 3: _t->updatePositionFromEndPoints(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LineObject::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LineObject::staticMetaObject = {
    { &MapGraphicsObject::staticMetaObject, qt_meta_stringdata_LineObject,
      qt_meta_data_LineObject, &staticMetaObjectExtraData }
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
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
