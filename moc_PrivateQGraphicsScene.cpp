/****************************************************************************
** Meta object code from reading C++ file 'PrivateQGraphicsScene.h'
**
** Created: Mon Apr 15 00:49:45 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MapGraphics/guts/PrivateQGraphicsScene.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PrivateQGraphicsScene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PrivateQGraphicsScene[] = {

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
      23,   22,   22,   22, 0x08,
      63,   22,   22,   22, 0x08,
     105,   22,   22,   22, 0x08,
     130,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PrivateQGraphicsScene[] = {
    "PrivateQGraphicsScene\0\0"
    "handleMGObjectAdded(MapGraphicsObject*)\0"
    "handleMGObjectRemoved(MapGraphicsObject*)\0"
    "handleZoomLevelChanged()\0"
    "handleSelectionChanged()\0"
};

void PrivateQGraphicsScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PrivateQGraphicsScene *_t = static_cast<PrivateQGraphicsScene *>(_o);
        switch (_id) {
        case 0: _t->handleMGObjectAdded((*reinterpret_cast< MapGraphicsObject*(*)>(_a[1]))); break;
        case 1: _t->handleMGObjectRemoved((*reinterpret_cast< MapGraphicsObject*(*)>(_a[1]))); break;
        case 2: _t->handleZoomLevelChanged(); break;
        case 3: _t->handleSelectionChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PrivateQGraphicsScene::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PrivateQGraphicsScene::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_PrivateQGraphicsScene,
      qt_meta_data_PrivateQGraphicsScene, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PrivateQGraphicsScene::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PrivateQGraphicsScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PrivateQGraphicsScene::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PrivateQGraphicsScene))
        return static_cast<void*>(const_cast< PrivateQGraphicsScene*>(this));
    return QGraphicsScene::qt_metacast(_clname);
}

int PrivateQGraphicsScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
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
