/****************************************************************************
** Meta object code from reading C++ file 'pomodoro_timer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Pomodoro-Timer/pomodoro_timer.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pomodoro_timer.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPomodoro_TimerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSPomodoro_TimerENDCLASS = QtMocHelpers::stringData(
    "Pomodoro_Timer",
    "timerClock",
    "",
    "on_dial_sliderReleased",
    "on_start_button_clicked",
    "on_reset_button_clicked",
    "on_notes_button_clicked",
    "on_settings_button_clicked",
    "updateTimerDisplay",
    "on_edit_freq_valueChanged",
    "arg1"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPomodoro_TimerENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[15];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[24];
    char stringdata5[24];
    char stringdata6[24];
    char stringdata7[27];
    char stringdata8[19];
    char stringdata9[26];
    char stringdata10[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPomodoro_TimerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPomodoro_TimerENDCLASS_t qt_meta_stringdata_CLASSPomodoro_TimerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "Pomodoro_Timer"
        QT_MOC_LITERAL(15, 10),  // "timerClock"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 22),  // "on_dial_sliderReleased"
        QT_MOC_LITERAL(50, 23),  // "on_start_button_clicked"
        QT_MOC_LITERAL(74, 23),  // "on_reset_button_clicked"
        QT_MOC_LITERAL(98, 23),  // "on_notes_button_clicked"
        QT_MOC_LITERAL(122, 26),  // "on_settings_button_clicked"
        QT_MOC_LITERAL(149, 18),  // "updateTimerDisplay"
        QT_MOC_LITERAL(168, 25),  // "on_edit_freq_valueChanged"
        QT_MOC_LITERAL(194, 4)   // "arg1"
    },
    "Pomodoro_Timer",
    "timerClock",
    "",
    "on_dial_sliderReleased",
    "on_start_button_clicked",
    "on_reset_button_clicked",
    "on_notes_button_clicked",
    "on_settings_button_clicked",
    "updateTimerDisplay",
    "on_edit_freq_valueChanged",
    "arg1"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPomodoro_TimerENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x0a,    1 /* Public */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    1,   69,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject Pomodoro_Timer::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSPomodoro_TimerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPomodoro_TimerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPomodoro_TimerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Pomodoro_Timer, std::true_type>,
        // method 'timerClock'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_dial_sliderReleased'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_start_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_reset_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_notes_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_settings_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateTimerDisplay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_edit_freq_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void Pomodoro_Timer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Pomodoro_Timer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->timerClock(); break;
        case 1: _t->on_dial_sliderReleased(); break;
        case 2: _t->on_start_button_clicked(); break;
        case 3: _t->on_reset_button_clicked(); break;
        case 4: _t->on_notes_button_clicked(); break;
        case 5: _t->on_settings_button_clicked(); break;
        case 6: _t->updateTimerDisplay(); break;
        case 7: _t->on_edit_freq_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *Pomodoro_Timer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pomodoro_Timer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPomodoro_TimerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Pomodoro_Timer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
