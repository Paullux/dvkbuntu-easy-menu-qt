/****************************************************************************
** Meta object code from reading C++ file 'controlmenumail.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/controlmenumail.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controlmenumail.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ControlMenuMail_t {
    QByteArrayData data[15];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ControlMenuMail_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ControlMenuMail_t qt_meta_stringdata_ControlMenuMail = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ControlMenuMail"
QT_MOC_LITERAL(1, 16, 20), // "on_Fermeture_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 15), // "on_Home_clicked"
QT_MOC_LITERAL(4, 54, 18), // "on_Options_clicked"
QT_MOC_LITERAL(5, 73, 16), // "on_Gmail_clicked"
QT_MOC_LITERAL(6, 90, 18), // "on_Outlook_clicked"
QT_MOC_LITERAL(7, 109, 16), // "on_Yahoo_clicked"
QT_MOC_LITERAL(8, 126, 17), // "on_Orange_clicked"
QT_MOC_LITERAL(9, 144, 14), // "on_SFR_clicked"
QT_MOC_LITERAL(10, 159, 15), // "on_Free_clicked"
QT_MOC_LITERAL(11, 175, 19), // "on_Bouygues_clicked"
QT_MOC_LITERAL(12, 195, 18), // "on_LaPoste_clicked"
QT_MOC_LITERAL(13, 214, 8), // "showTime"
QT_MOC_LITERAL(14, 223, 9) // "ExecuteJS"

    },
    "ControlMenuMail\0on_Fermeture_clicked\0"
    "\0on_Home_clicked\0on_Options_clicked\0"
    "on_Gmail_clicked\0on_Outlook_clicked\0"
    "on_Yahoo_clicked\0on_Orange_clicked\0"
    "on_SFR_clicked\0on_Free_clicked\0"
    "on_Bouygues_clicked\0on_LaPoste_clicked\0"
    "showTime\0ExecuteJS"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ControlMenuMail[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    1,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void ControlMenuMail::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ControlMenuMail *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Fermeture_clicked(); break;
        case 1: _t->on_Home_clicked(); break;
        case 2: _t->on_Options_clicked(); break;
        case 3: _t->on_Gmail_clicked(); break;
        case 4: _t->on_Outlook_clicked(); break;
        case 5: _t->on_Yahoo_clicked(); break;
        case 6: _t->on_Orange_clicked(); break;
        case 7: _t->on_SFR_clicked(); break;
        case 8: _t->on_Free_clicked(); break;
        case 9: _t->on_Bouygues_clicked(); break;
        case 10: _t->on_LaPoste_clicked(); break;
        case 11: _t->showTime(); break;
        case 12: _t->ExecuteJS((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ControlMenuMail::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ControlMenuMail.data,
    qt_meta_data_ControlMenuMail,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ControlMenuMail::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ControlMenuMail::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ControlMenuMail.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ControlMenuMail::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
