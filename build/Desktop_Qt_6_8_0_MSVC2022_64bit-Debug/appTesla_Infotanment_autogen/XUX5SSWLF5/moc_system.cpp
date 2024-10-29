/****************************************************************************
** Meta object code from reading C++ file 'system.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Controllers/system.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'system.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.0. It"
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
struct qt_meta_stringdata_CLASSSystemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSystemENDCLASS = QtMocHelpers::stringData(
    "System",
    "carLockedChanged",
    "",
    "carLocked",
    "outdoorTemperatureChanged",
    "userNameChanged",
    "curruntTimeChanged",
    "setCarLocked",
    "newCarLocked",
    "setOutdoorTemperature",
    "newOutdoorTemperature",
    "setUserName",
    "newUserName",
    "setCurruntTime",
    "newCurruntTime",
    "outdoorTemperature",
    "userName",
    "curruntTime"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSystemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       4,   87, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    5 /* Public */,
       4,    0,   71,    2, 0x06,    7 /* Public */,
       5,    0,   72,    2, 0x06,    8 /* Public */,
       6,    0,   73,    2, 0x06,    9 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   74,    2, 0x102,   10 /* Public | MethodIsConst  */,
       7,    1,   75,    2, 0x02,   11 /* Public */,
       9,    1,   78,    2, 0x02,   13 /* Public */,
      11,    1,   81,    2, 0x02,   15 /* Public */,
      13,    1,   84,    2, 0x02,   17 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   14,

 // properties: name, type, flags, notifyId, revision
       3, QMetaType::Bool, 0x00015903, uint(0), 0,
      15, QMetaType::Double, 0x00015903, uint(1), 0,
      16, QMetaType::QString, 0x00015903, uint(2), 0,
      17, QMetaType::QString, 0x00015903, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject System::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSSystemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSystemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSystemENDCLASS_t,
        // property 'carLocked'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'outdoorTemperature'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'userName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'curruntTime'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<System, std::true_type>,
        // method 'carLockedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'outdoorTemperatureChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'userNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'curruntTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'carLocked'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setCarLocked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setOutdoorTemperature'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'setUserName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setCurruntTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void System::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<System *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->carLockedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->outdoorTemperatureChanged(); break;
        case 2: _t->userNameChanged(); break;
        case 3: _t->curruntTimeChanged(); break;
        case 4: { bool _r = _t->carLocked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setCarLocked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->setOutdoorTemperature((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 7: _t->setUserName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->setCurruntTime((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (System::*)(bool );
            if (_t _q_method = &System::carLockedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (System::*)();
            if (_t _q_method = &System::outdoorTemperatureChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (System::*)();
            if (_t _q_method = &System::userNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (System::*)();
            if (_t _q_method = &System::curruntTimeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<System *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->carLocked(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->outdoorTemperature(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->userName(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->curruntTime(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<System *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCarLocked(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setOutdoorTemperature(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setUserName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setCurruntTime(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *System::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *System::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSystemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int System::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void System::carLockedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void System::outdoorTemperatureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void System::userNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void System::curruntTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
