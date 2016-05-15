/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Proj2_2/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[284];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 7), // "OP_Move"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 7), // "OP_fade"
QT_MOC_LITERAL(4, 28, 6), // "OP_Vol"
QT_MOC_LITERAL(5, 35, 9), // "mode_fade"
QT_MOC_LITERAL(6, 45, 10), // "mode_fade2"
QT_MOC_LITERAL(7, 56, 9), // "game_fade"
QT_MOC_LITERAL(8, 66, 10), // "game_ready"
QT_MOC_LITERAL(9, 77, 10), // "game_shoot"
QT_MOC_LITERAL(10, 88, 11), // "game_shoot2"
QT_MOC_LITERAL(11, 100, 10), // "game_right"
QT_MOC_LITERAL(12, 111, 9), // "game_left"
QT_MOC_LITERAL(13, 121, 10), // "game_fade2"
QT_MOC_LITERAL(14, 132, 9), // "game_time"
QT_MOC_LITERAL(15, 142, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(16, 164, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(17, 188, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(18, 212, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(19, 236, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(20, 260, 23) // "on_pushButton_6_clicked"

    },
    "MainWindow\0OP_Move\0\0OP_fade\0OP_Vol\0"
    "mode_fade\0mode_fade2\0game_fade\0"
    "game_ready\0game_shoot\0game_shoot2\0"
    "game_right\0game_left\0game_fade2\0"
    "game_time\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked\0"
    "on_pushButton_4_clicked\0on_pushButton_5_clicked\0"
    "on_pushButton_6_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x0a /* Public */,
       3,    0,  110,    2, 0x0a /* Public */,
       4,    0,  111,    2, 0x0a /* Public */,
       5,    0,  112,    2, 0x0a /* Public */,
       6,    0,  113,    2, 0x0a /* Public */,
       7,    0,  114,    2, 0x0a /* Public */,
       8,    0,  115,    2, 0x0a /* Public */,
       9,    0,  116,    2, 0x0a /* Public */,
      10,    0,  117,    2, 0x0a /* Public */,
      11,    0,  118,    2, 0x0a /* Public */,
      12,    0,  119,    2, 0x0a /* Public */,
      13,    0,  120,    2, 0x0a /* Public */,
      14,    0,  121,    2, 0x0a /* Public */,
      15,    0,  122,    2, 0x08 /* Private */,
      16,    0,  123,    2, 0x08 /* Private */,
      17,    0,  124,    2, 0x08 /* Private */,
      18,    0,  125,    2, 0x08 /* Private */,
      19,    0,  126,    2, 0x08 /* Private */,
      20,    0,  127,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OP_Move(); break;
        case 1: _t->OP_fade(); break;
        case 2: _t->OP_Vol(); break;
        case 3: _t->mode_fade(); break;
        case 4: _t->mode_fade2(); break;
        case 5: _t->game_fade(); break;
        case 6: _t->game_ready(); break;
        case 7: _t->game_shoot(); break;
        case 8: _t->game_shoot2(); break;
        case 9: _t->game_right(); break;
        case 10: _t->game_left(); break;
        case 11: _t->game_fade2(); break;
        case 12: _t->game_time(); break;
        case 13: _t->on_pushButton_clicked(); break;
        case 14: _t->on_pushButton_2_clicked(); break;
        case 15: _t->on_pushButton_3_clicked(); break;
        case 16: _t->on_pushButton_4_clicked(); break;
        case 17: _t->on_pushButton_5_clicked(); break;
        case 18: _t->on_pushButton_6_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
