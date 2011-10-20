/****************************************************************************
** Meta object code from reading C++ file 'GLWidget.hpp'
**
** Created: Thu 20. Oct 10:26:22 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/cutsim/GLWidget.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GLWidget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cutsim__GLWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      40,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_cutsim__GLWidget[] = {
    "cutsim::GLWidget\0\0slotWriteScreenshot()\0"
    "slotNewDataWaiting()\0"
};

const QMetaObject cutsim::GLWidget::staticMetaObject = {
    { &QGLViewer::staticMetaObject, qt_meta_stringdata_cutsim__GLWidget,
      qt_meta_data_cutsim__GLWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cutsim::GLWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cutsim::GLWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cutsim::GLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cutsim__GLWidget))
        return static_cast<void*>(const_cast< GLWidget*>(this));
    return QGLViewer::qt_metacast(_clname);
}

int cutsim::GLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLViewer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotWriteScreenshot(); break;
        case 1: slotNewDataWaiting(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
