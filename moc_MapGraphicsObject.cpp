/****************************************************************************
** Meta object code from reading C++ file 'MapGraphicsObject.h'
**
** Created: Sun Apr 14 19:53:46 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MapGraphics/MapGraphicsObject.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MapGraphicsObject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MapGraphicsObject[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      36,   18,   18,   18, 0x05,
      53,   18,   18,   18, 0x05,
      69,   18,   18,   18, 0x05,
      82,   18,   18,   18, 0x05,
     100,   18,   18,   18, 0x05,
     117,   18,   18,   18, 0x05,
     133,   18,   18,   18, 0x05,
     148,   18,   18,   18, 0x05,
     166,   18,   18,   18, 0x05,
     205,   18,   18,   18, 0x05,
     223,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     243,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MapGraphicsObject[] = {
    "MapGraphicsObject\0\0enabledChanged()\0"
    "opacityChanged()\0parentChanged()\0"
    "posChanged()\0rotationChanged()\0"
    "visibleChanged()\0zValueChanged()\0"
    "flagsChanged()\0selectedChanged()\0"
    "newObjectGenerated(MapGraphicsObject*)\0"
    "redrawRequested()\0keyFocusRequested()\0"
    "setConstructed()\0"
};

const QMetaObject MapGraphicsObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MapGraphicsObject,
      qt_meta_data_MapGraphicsObject, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MapGraphicsObject::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MapGraphicsObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MapGraphicsObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MapGraphicsObject))
        return static_cast<void*>(const_cast< MapGraphicsObject*>(this));
    return QObject::qt_metacast(_clname);
}

int MapGraphicsObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: enabledChanged(); break;
        case 1: opacityChanged(); break;
        case 2: parentChanged(); break;
        case 3: posChanged(); break;
        case 4: rotationChanged(); break;
        case 5: visibleChanged(); break;
        case 6: zValueChanged(); break;
        case 7: flagsChanged(); break;
        case 8: selectedChanged(); break;
        case 9: newObjectGenerated((*reinterpret_cast< MapGraphicsObject*(*)>(_a[1]))); break;
        case 10: redrawRequested(); break;
        case 11: keyFocusRequested(); break;
        case 12: setConstructed(); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void MapGraphicsObject::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void MapGraphicsObject::opacityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void MapGraphicsObject::parentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void MapGraphicsObject::posChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void MapGraphicsObject::rotationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void MapGraphicsObject::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void MapGraphicsObject::zValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void MapGraphicsObject::flagsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void MapGraphicsObject::selectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void MapGraphicsObject::newObjectGenerated(MapGraphicsObject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MapGraphicsObject::redrawRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void MapGraphicsObject::keyFocusRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}
QT_END_MOC_NAMESPACE
