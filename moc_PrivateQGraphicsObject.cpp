/****************************************************************************
** Meta object code from reading C++ file 'PrivateQGraphicsObject.h'
**
** Created: Sun Apr 14 22:06:30 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MapGraphics/guts/PrivateQGraphicsObject.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PrivateQGraphicsObject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PrivateQGraphicsObject[] = {

 // content:
       5,       // revision
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

const QMetaObject PrivateQGraphicsObject::staticMetaObject = {
    { &QGraphicsObject::staticMetaObject, qt_meta_stringdata_PrivateQGraphicsObject,
      qt_meta_data_PrivateQGraphicsObject, 0 }
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
        switch (_id) {
        case 0: handleZoomLevelChanged(); break;
        case 1: handleEnabledChanged(); break;
        case 2: handleOpacityChanged(); break;
        case 3: handleParentChanged(); break;
        case 4: handlePosChanged(); break;
        case 5: handleRotationChanged(); break;
        case 6: handleVisibleChanged(); break;
        case 7: handleZValueChanged(); break;
        case 8: handleMGSelectedChanged(); break;
        case 9: handleMGFlagsChanged(); break;
        case 10: updateAllFromMG(); break;
        case 11: handleRedrawRequested(); break;
        case 12: handleKeyFocusRequested(); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
