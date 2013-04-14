/****************************************************************************
** Meta object code from reading C++ file 'PrivateQGraphicsObject.h'
**
** Created: Sun Apr 14 06:25:58 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MapGraphics/guts/PrivateQGraphicsObject.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PrivateQGraphicsObject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PrivateQGraphicsObject[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x0a,
      49,   23,   23,   23, 0x08,
      72,   23,   23,   23, 0x08,
      95,   23,   23,   23, 0x08,
     117,   23,   23,   23, 0x08,
     136,   23,   23,   23, 0x08,
     160,   23,   23,   23, 0x08,
     183,   23,   23,   23, 0x08,
     205,   23,   23,   23, 0x08,
     231,   23,   23,   23, 0x08,
     254,   23,   23,   23, 0x08,
     272,   23,   23,   23, 0x08,
     296,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PrivateQGraphicsObject[] = {
    "PrivateQGraphicsObject\0\0"
    "handleZoomLevelChanged()\0"
    "handleEnabledChanged()\0handleOpacityChanged()\0"
    "handleParentChanged()\0handlePosChanged()\0"
    "handleRotationChanged()\0handleVisibleChanged()\0"
    "handleZValueChanged()\0handleMGSelectedChanged()\0"
    "handleMGFlagsChanged()\0updateAllFromMG()\0"
    "handleRedrawRequested()\0"
    "handleKeyFocusRequested()\0"
};

void PrivateQGraphicsObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PrivateQGraphicsObject *_t = static_cast<PrivateQGraphicsObject *>(_o);
        switch (_id) {
        case 0: _t->handleZoomLevelChanged(); break;
        case 1: _t->handleEnabledChanged(); break;
        case 2: _t->handleOpacityChanged(); break;
        case 3: _t->handleParentChanged(); break;
        case 4: _t->handlePosChanged(); break;
        case 5: _t->handleRotationChanged(); break;
        case 6: _t->handleVisibleChanged(); break;
        case 7: _t->handleZValueChanged(); break;
        case 8: _t->handleMGSelectedChanged(); break;
        case 9: _t->handleMGFlagsChanged(); break;
        case 10: _t->updateAllFromMG(); break;
        case 11: _t->handleRedrawRequested(); break;
        case 12: _t->handleKeyFocusRequested(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PrivateQGraphicsObject::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PrivateQGraphicsObject::staticMetaObject = {
    { &QGraphicsObject::staticMetaObject, qt_meta_stringdata_PrivateQGraphicsObject,
      qt_meta_data_PrivateQGraphicsObject, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PrivateQGraphicsObject::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PrivateQGraphicsObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PrivateQGraphicsObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PrivateQGraphicsObject))
        return static_cast<void*>(const_cast< PrivateQGraphicsObject*>(this));
    return QGraphicsObject::qt_metacast(_clname);
}

int PrivateQGraphicsObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
