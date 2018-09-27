/****************************************************************************
** Meta object code from reading C++ file 'HTForm.h'
**
** Created: Fri Dec 14 19:22:35 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Olio/HT/HTForm.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HTForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HTForm[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      16,    7,    7,    7, 0x08,
      25,    7,    7,    7, 0x08,
      36,    7,    7,    7, 0x08,
      48,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_HTForm[] = {
    "HTForm\0\0cChar()\0crChar()\0printAll()\0"
    "showStats()\0fight()\0"
};

void HTForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HTForm *_t = static_cast<HTForm *>(_o);
        switch (_id) {
        case 0: _t->cChar(); break;
        case 1: _t->crChar(); break;
        case 2: _t->printAll(); break;
        case 3: _t->showStats(); break;
        case 4: _t->fight(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData HTForm::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HTForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_HTForm,
      qt_meta_data_HTForm, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HTForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HTForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HTForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HTForm))
        return static_cast<void*>(const_cast< HTForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int HTForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
