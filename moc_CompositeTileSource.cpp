/****************************************************************************
** Meta object code from reading C++ file 'CompositeTileSource.h'
**
** Created: Mon Apr 15 00:04:58 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MapGraphics/tileSources/CompositeTileSource.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CompositeTileSource.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CompositeTileSource[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,
      44,   38,   20,   20, 0x05,
      61,   38,   20,   20, 0x05,
      80,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
     105,   99,   20,   20, 0x08,
     149,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CompositeTileSource[] = {
    "CompositeTileSource\0\0sourcesChanged()\0"
    "index\0sourceAdded(int)\0sourceRemoved(int)\0"
    "sourcesReordered()\0x,y,z\0"
    "handleTileRetrieved(quint32,quint32,quint8)\0"
    "clearPendingTiles()\0"
};

const QMetaObject CompositeTileSource::staticMetaObject = {
    { &MapTileSource::staticMetaObject, qt_meta_stringdata_CompositeTileSource,
      qt_meta_data_CompositeTileSource, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CompositeTileSource::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CompositeTileSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CompositeTileSource::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CompositeTileSource))
        return static_cast<void*>(const_cast< CompositeTileSource*>(this));
    return MapTileSource::qt_metacast(_clname);
}

int CompositeTileSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MapTileSource::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: sourcesChanged(); break;
        case 1: sourceAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: sourceRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: sourcesReordered(); break;
        case 4: handleTileRetrieved((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3]))); break;
        case 5: clearPendingTiles(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void CompositeTileSource::sourcesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CompositeTileSource::sourceAdded(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CompositeTileSource::sourceRemoved(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CompositeTileSource::sourcesReordered()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
