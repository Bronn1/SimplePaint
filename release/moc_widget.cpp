/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[26];
    char stringdata0[362];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 12), // "colorChanged"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 5), // "color"
QT_MOC_LITERAL(4, 27, 12), // "widthChanged"
QT_MOC_LITERAL(5, 40, 5), // "width"
QT_MOC_LITERAL(6, 46, 16), // "signalDeleteLast"
QT_MOC_LITERAL(7, 63, 19), // "slotGetCustomScreen"
QT_MOC_LITERAL(8, 83, 1), // "x"
QT_MOC_LITERAL(9, 85, 1), // "y"
QT_MOC_LITERAL(10, 87, 1), // "w"
QT_MOC_LITERAL(11, 89, 1), // "h"
QT_MOC_LITERAL(12, 91, 23), // "on_squareButton_clicked"
QT_MOC_LITERAL(13, 115, 21), // "on_LineButton_clicked"
QT_MOC_LITERAL(14, 137, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(15, 169, 4), // "arg1"
QT_MOC_LITERAL(16, 174, 25), // "on_rombPushButton_clicked"
QT_MOC_LITERAL(17, 200, 31), // "on_horizontalSlider_sliderMoved"
QT_MOC_LITERAL(18, 232, 8), // "position"
QT_MOC_LITERAL(19, 241, 27), // "on_screenshotButton_clicked"
QT_MOC_LITERAL(20, 269, 21), // "on_sPenButton_clicked"
QT_MOC_LITERAL(21, 291, 7), // "checked"
QT_MOC_LITERAL(22, 299, 9), // "slotTimer"
QT_MOC_LITERAL(23, 309, 16), // "slotShowSaveMenu"
QT_MOC_LITERAL(24, 326, 18), // "slotDeleteLastItem"
QT_MOC_LITERAL(25, 345, 16) // "slotShowLoadMenu"

    },
    "Widget\0colorChanged\0\0color\0widthChanged\0"
    "width\0signalDeleteLast\0slotGetCustomScreen\0"
    "x\0y\0w\0h\0on_squareButton_clicked\0"
    "on_LineButton_clicked\0"
    "on_comboBox_currentIndexChanged\0arg1\0"
    "on_rombPushButton_clicked\0"
    "on_horizontalSlider_sliderMoved\0"
    "position\0on_screenshotButton_clicked\0"
    "on_sPenButton_clicked\0checked\0slotTimer\0"
    "slotShowSaveMenu\0slotDeleteLastItem\0"
    "slotShowLoadMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    1,   92,    2, 0x06 /* Public */,
       6,    0,   95,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    4,   96,    2, 0x0a /* Public */,
      12,    0,  105,    2, 0x08 /* Private */,
      13,    0,  106,    2, 0x08 /* Private */,
      14,    1,  107,    2, 0x08 /* Private */,
      16,    0,  110,    2, 0x08 /* Private */,
      17,    1,  111,    2, 0x08 /* Private */,
      19,    0,  114,    2, 0x08 /* Private */,
      20,    1,  115,    2, 0x08 /* Private */,
      22,    0,  118,    2, 0x08 /* Private */,
      23,    0,  119,    2, 0x08 /* Private */,
      24,    0,  120,    2, 0x08 /* Private */,
      25,    0,  121,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    8,    9,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->widthChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->signalDeleteLast(); break;
        case 3: _t->slotGetCustomScreen((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 4: _t->on_squareButton_clicked(); break;
        case 5: _t->on_LineButton_clicked(); break;
        case 6: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_rombPushButton_clicked(); break;
        case 8: _t->on_horizontalSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_screenshotButton_clicked(); break;
        case 10: _t->on_sPenButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->slotTimer(); break;
        case 12: _t->slotShowSaveMenu(); break;
        case 13: _t->slotDeleteLastItem(); break;
        case 14: _t->slotShowLoadMenu(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Widget::*_t)(const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::colorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Widget::*_t)(const int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::widthChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Widget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::signalDeleteLast)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget.data,
      qt_meta_data_Widget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Widget::colorChanged(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Widget::widthChanged(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Widget::signalDeleteLast()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
