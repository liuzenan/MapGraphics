/****************************************************************************
** Meta object code from reading C++ file 'MapGraphicsObject.h'
**
** Created: Sat Apr 13 23:34:25 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MapGraphics/MapGraphicsObject.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MapGraphicsObject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MapGraphicsObject[] = {

 // content:
       6,       // revision
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

void MapGraphicsObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MapGraphicsObject *_t = static_cast<MapGraphicsObject *>(_o);
        switch (_id) {
        case 0: _t->enabledChanged(); break;
        case 1: _t->opacityChanged(); break;
        case 2: _t->parentChanged(); break;
        case 3: _t->posChanged(); break;
        case 4: _t->rotationChanged(); break;
        case 5: _t->visibleChanged(); break;
        case 6: _t->zValueChanged(); break;
        case 7: _t->flagsChanged(); break;
        case 8: _t->selectedChanged(); break;
        case 9: _t->newObjectGenerated((*reinterpret_cast< MapGraphicsObject*(*)>(_a[1]))); break;
        case 10: _t->redrawRequested(); break;
        case 11: _t->keyFocusRequested(); break;
        case 12: _t->setConstructed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MapGraphicsObject::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MapGraphicsObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MapGraphicsObject,
      qt_meta_data_MapGraphicsObject, &staticMetaObjectExtraData }
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
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
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
