/****************************************************************************
** Meta object code from reading C++ file 'MapGraphicsScene.h'
**
** Created: Sun Apr 14 21:58:45 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MapGraphics/MapGraphicsScene.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MapGraphicsScene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MapGraphicsScene[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      50,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      94,   84,   17,   17, 0x08,
     146,  139,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MapGraphicsScene[] = {
    "MapGraphicsScene\0\0objectAdded(MapGraphicsObject*)\0"
    "objectRemoved(MapGraphicsObject*)\0"
    "newObject\0handleNewObjectGenerated(MapGraphicsObject*)\0"
    "object\0handleObjectDestroyed(QObject*)\0"
};

void MapGraphicsScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MapGraphicsScene *_t = static_cast<MapGraphicsScene *>(_o);
        switch (_id) {
        case 0: _t->objectAdded((*reinterpret_cast< MapGraphicsObject*(*)>(_a[1]))); break;
        case 1: _t->objectRemoved((*reinterpret_cast< MapGraphicsObject*(*)>(_a[1]))); break;
        case 2: _t->handleNewObjectGenerated((*reinterpret_cast< MapGraphicsObject*(*)>(_a[1]))); break;
        case 3: _t->handleObjectDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MapGraphicsScene::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MapGraphicsScene::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MapGraphicsScene,
      qt_meta_data_MapGraphicsScene, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MapGraphicsScene::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MapGraphicsScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MapGraphicsScene::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MapGraphicsScene))
        return static_cast<void*>(const_cast< MapGraphicsScene*>(this));
    return QObject::qt_metacast(_clname);
}

int MapGraphicsScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void MapGraphicsScene::objectAdded(MapGraphicsObject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MapGraphicsScene::objectRemoved(MapGraphicsObject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
