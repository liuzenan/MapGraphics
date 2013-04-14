/****************************************************************************
** Meta object code from reading C++ file 'MapTileSource.h'
**
** Created: Mon Apr 15 00:04:33 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MapGraphics/MapTileSource.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MapTileSource.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MapTileSource[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   15,   14,   14, 0x05,
      59,   15,   14,   14, 0x05,
      97,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     119,   15,   14,   14, 0x08,
     160,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MapTileSource[] = {
    "MapTileSource\0\0x,y,z\0"
    "tileRetrieved(quint32,quint32,quint8)\0"
    "tileRequested(quint32,quint32,quint8)\0"
    "allTilesInvalidated()\0"
    "startTileRequest(quint32,quint32,quint8)\0"
    "clearTempCache()\0"
};

const QMetaObject MapTileSource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MapTileSource,
      qt_meta_data_MapTileSource, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MapTileSource::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MapTileSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MapTileSource::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MapTileSource))
        return static_cast<void*>(const_cast< MapTileSource*>(this));
    return QObject::qt_metacast(_clname);
}

int MapTileSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: tileRetrieved((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3]))); break;
        case 1: tileRequested((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3]))); break;
        case 2: allTilesInvalidated(); break;
        case 3: startTileRequest((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3]))); break;
        case 4: clearTempCache(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void MapTileSource::tileRetrieved(quint32 _t1, quint32 _t2, quint8 _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MapTileSource::tileRequested(quint32 _t1, quint32 _t2, quint8 _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MapTileSource::allTilesInvalidated()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
