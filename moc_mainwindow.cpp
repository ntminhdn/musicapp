/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[26];
    char stringdata0[540];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 29), // "on_pushButton_browser_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 26), // "on_pushButton_play_clicked"
QT_MOC_LITERAL(4, 69, 30), // "on_pushButton_previous_clicked"
QT_MOC_LITERAL(5, 100, 26), // "on_pushButton_next_clicked"
QT_MOC_LITERAL(6, 127, 25), // "on_listWidget_itemClicked"
QT_MOC_LITERAL(7, 153, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(8, 170, 4), // "item"
QT_MOC_LITERAL(9, 175, 40), // "on_horizontalSlider_duration_..."
QT_MOC_LITERAL(10, 216, 8), // "position"
QT_MOC_LITERAL(11, 225, 42), // "on_horizontalSlider_duration_..."
QT_MOC_LITERAL(12, 268, 15), // "durationChanged"
QT_MOC_LITERAL(13, 284, 8), // "duration"
QT_MOC_LITERAL(14, 293, 15), // "positionChanged"
QT_MOC_LITERAL(15, 309, 18), // "mediaStatusChanged"
QT_MOC_LITERAL(16, 328, 25), // "QMediaPlayer::MediaStatus"
QT_MOC_LITERAL(17, 354, 6), // "status"
QT_MOC_LITERAL(18, 361, 18), // "updateDurationInfo"
QT_MOC_LITERAL(19, 380, 11), // "currentInfo"
QT_MOC_LITERAL(20, 392, 26), // "on_pushButton_stop_clicked"
QT_MOC_LITERAL(21, 419, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(22, 443, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(23, 467, 23), // "on_actionSlow_triggered"
QT_MOC_LITERAL(24, 491, 23), // "on_actionFast_triggered"
QT_MOC_LITERAL(25, 515, 24) // "on_actionAbout_triggered"

    },
    "MainWindow\0on_pushButton_browser_clicked\0"
    "\0on_pushButton_play_clicked\0"
    "on_pushButton_previous_clicked\0"
    "on_pushButton_next_clicked\0"
    "on_listWidget_itemClicked\0QListWidgetItem*\0"
    "item\0on_horizontalSlider_duration_sliderMoved\0"
    "position\0on_horizontalSlider_duration_sliderPressed\0"
    "durationChanged\0duration\0positionChanged\0"
    "mediaStatusChanged\0QMediaPlayer::MediaStatus\0"
    "status\0updateDurationInfo\0currentInfo\0"
    "on_pushButton_stop_clicked\0"
    "on_actionOpen_triggered\0on_actionExit_triggered\0"
    "on_actionSlow_triggered\0on_actionFast_triggered\0"
    "on_actionAbout_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    0,  100,    2, 0x08 /* Private */,
       4,    0,  101,    2, 0x08 /* Private */,
       5,    0,  102,    2, 0x08 /* Private */,
       6,    1,  103,    2, 0x08 /* Private */,
       9,    1,  106,    2, 0x08 /* Private */,
      11,    0,  109,    2, 0x08 /* Private */,
      12,    1,  110,    2, 0x08 /* Private */,
      14,    1,  113,    2, 0x08 /* Private */,
      15,    1,  116,    2, 0x08 /* Private */,
      18,    1,  119,    2, 0x08 /* Private */,
      20,    0,  122,    2, 0x08 /* Private */,
      21,    0,  123,    2, 0x08 /* Private */,
      22,    0,  124,    2, 0x08 /* Private */,
      23,    0,  125,    2, 0x08 /* Private */,
      24,    0,  126,    2, 0x08 /* Private */,
      25,    0,  127,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   13,
    QMetaType::Void, QMetaType::LongLong,   10,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::LongLong,   19,
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
        case 0: _t->on_pushButton_browser_clicked(); break;
        case 1: _t->on_pushButton_play_clicked(); break;
        case 2: _t->on_pushButton_previous_clicked(); break;
        case 3: _t->on_pushButton_next_clicked(); break;
        case 4: _t->on_listWidget_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->on_horizontalSlider_duration_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_horizontalSlider_duration_sliderPressed(); break;
        case 7: _t->durationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 8: _t->positionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 9: _t->mediaStatusChanged((*reinterpret_cast< QMediaPlayer::MediaStatus(*)>(_a[1]))); break;
        case 10: _t->updateDurationInfo((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 11: _t->on_pushButton_stop_clicked(); break;
        case 12: _t->on_actionOpen_triggered(); break;
        case 13: _t->on_actionExit_triggered(); break;
        case 14: _t->on_actionSlow_triggered(); break;
        case 15: _t->on_actionFast_triggered(); break;
        case 16: _t->on_actionAbout_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::MediaStatus >(); break;
            }
            break;
        }
    }
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
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
