/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Custome_baud_ui/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_Send_data_clicked",
    "",
    "sendContinuously",
    "on_pushButton_clicked",
    "on_TESTT_clicked",
    "printFaffPatterns",
    "onComPortSelected",
    "index",
    "getAvailableComPorts",
    "on_EXCELL_clicked",
    "handleReadyRead",
    "format",
    "on_pushButton_2_clicked",
    "show_data"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[11];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[22];
    char stringdata5[17];
    char stringdata6[18];
    char stringdata7[18];
    char stringdata8[6];
    char stringdata9[21];
    char stringdata10[18];
    char stringdata11[16];
    char stringdata12[7];
    char stringdata13[24];
    char stringdata14[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 20),  // "on_Send_data_clicked"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 16),  // "sendContinuously"
        QT_MOC_LITERAL(50, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(72, 16),  // "on_TESTT_clicked"
        QT_MOC_LITERAL(89, 17),  // "printFaffPatterns"
        QT_MOC_LITERAL(107, 17),  // "onComPortSelected"
        QT_MOC_LITERAL(125, 5),  // "index"
        QT_MOC_LITERAL(131, 20),  // "getAvailableComPorts"
        QT_MOC_LITERAL(152, 17),  // "on_EXCELL_clicked"
        QT_MOC_LITERAL(170, 15),  // "handleReadyRead"
        QT_MOC_LITERAL(186, 6),  // "format"
        QT_MOC_LITERAL(193, 23),  // "on_pushButton_2_clicked"
        QT_MOC_LITERAL(217, 9)   // "show_data"
    },
    "MainWindow",
    "on_Send_data_clicked",
    "",
    "sendContinuously",
    "on_pushButton_clicked",
    "on_TESTT_clicked",
    "printFaffPatterns",
    "onComPortSelected",
    "index",
    "getAvailableComPorts",
    "on_EXCELL_clicked",
    "handleReadyRead",
    "format",
    "on_pushButton_2_clicked",
    "show_data"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    1 /* Private */,
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    0,   88,    2, 0x08,    3 /* Private */,
       5,    0,   89,    2, 0x08,    4 /* Private */,
       6,    0,   90,    2, 0x08,    5 /* Private */,
       7,    1,   91,    2, 0x08,    6 /* Private */,
       9,    0,   94,    2, 0x08,    8 /* Private */,
      10,    0,   95,    2, 0x08,    9 /* Private */,
      11,    0,   96,    2, 0x08,   10 /* Private */,
      12,    0,   97,    2, 0x08,   11 /* Private */,
      13,    0,   98,    2, 0x08,   12 /* Private */,
      14,    0,   99,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::QStringList,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_Send_data_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendContinuously'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_TESTT_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'printFaffPatterns'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onComPortSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getAvailableComPorts'
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        // method 'on_EXCELL_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleReadyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'format'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_Send_data_clicked(); break;
        case 1: _t->sendContinuously(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_TESTT_clicked(); break;
        case 4: _t->printFaffPatterns(); break;
        case 5: _t->onComPortSelected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: { QStringList _r = _t->getAvailableComPorts();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->on_EXCELL_clicked(); break;
        case 8: _t->handleReadyRead(); break;
        case 9: _t->format(); break;
        case 10: _t->on_pushButton_2_clicked(); break;
        case 11: _t->show_data(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
