/****************************************************************************
** Meta object code from reading C++ file 'cutsim.hpp'
**
** Created: Thu 20. Oct 10:26:22 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/cutsim/cutsim.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cutsim.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cutsim__DiffTask[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_cutsim__DiffTask[] = {
    "cutsim::DiffTask\0\0signalDone()\0"
};

const QMetaObject cutsim::DiffTask::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cutsim__DiffTask,
      qt_meta_data_cutsim__DiffTask, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cutsim::DiffTask::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cutsim::DiffTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cutsim::DiffTask::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cutsim__DiffTask))
        return static_cast<void*>(const_cast< DiffTask*>(this));
    if (!strcmp(_clname, "QRunnable"))
        return static_cast< QRunnable*>(const_cast< DiffTask*>(this));
    return QObject::qt_metacast(_clname);
}

int cutsim::DiffTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: signalDone(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void cutsim::DiffTask::signalDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_cutsim__UpdateGLTask[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_cutsim__UpdateGLTask[] = {
    "cutsim::UpdateGLTask\0\0signalDone()\0"
};

const QMetaObject cutsim::UpdateGLTask::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cutsim__UpdateGLTask,
      qt_meta_data_cutsim__UpdateGLTask, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cutsim::UpdateGLTask::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cutsim::UpdateGLTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cutsim::UpdateGLTask::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cutsim__UpdateGLTask))
        return static_cast<void*>(const_cast< UpdateGLTask*>(this));
    if (!strcmp(_clname, "QRunnable"))
        return static_cast< QRunnable*>(const_cast< UpdateGLTask*>(this));
    return QObject::qt_metacast(_clname);
}

int cutsim::UpdateGLTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: signalDone(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void cutsim::UpdateGLTask::signalDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_cutsim__Cutsim[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      33,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,   15,   15,   15, 0x0a,
      63,   15,   15,   15, 0x0a,
      80,   76,   15,   15, 0x0a,
     115,   76,   15,   15, 0x0a,
     153,   15,   15,   15, 0x0a,
     168,   76,   15,   15, 0x0a,
     202,   76,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_cutsim__Cutsim[] = {
    "cutsim::Cutsim\0\0signalDiffDone()\0"
    "signalGLDone()\0slotDiffDone()\0"
    "slotGLDone()\0vol\0slot_diff_volume(const OCTVolume*)\0"
    "slot_diff_volume_mt(const OCTVolume*)\0"
    "update_gl_mt()\0slot_sum_volume(const OCTVolume*)\0"
    "slot_int_volume(const OCTVolume*)\0"
};

const QMetaObject cutsim::Cutsim::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cutsim__Cutsim,
      qt_meta_data_cutsim__Cutsim, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cutsim::Cutsim::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cutsim::Cutsim::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cutsim::Cutsim::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cutsim__Cutsim))
        return static_cast<void*>(const_cast< Cutsim*>(this));
    return QObject::qt_metacast(_clname);
}

int cutsim::Cutsim::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: signalDiffDone(); break;
        case 1: signalGLDone(); break;
        case 2: slotDiffDone(); break;
        case 3: slotGLDone(); break;
        case 4: slot_diff_volume((*reinterpret_cast< const OCTVolume*(*)>(_a[1]))); break;
        case 5: slot_diff_volume_mt((*reinterpret_cast< const OCTVolume*(*)>(_a[1]))); break;
        case 6: update_gl_mt(); break;
        case 7: slot_sum_volume((*reinterpret_cast< const OCTVolume*(*)>(_a[1]))); break;
        case 8: slot_int_volume((*reinterpret_cast< const OCTVolume*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void cutsim::Cutsim::signalDiffDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void cutsim::Cutsim::signalGLDone()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
