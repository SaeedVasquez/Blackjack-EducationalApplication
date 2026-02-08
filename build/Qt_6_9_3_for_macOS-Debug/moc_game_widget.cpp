/****************************************************************************
** Meta object code from reading C++ file 'game_widget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../game_widget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'game_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.3. It"
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
struct qt_meta_tag_ZN10GameWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto GameWidget::qt_create_metaobjectdata<qt_meta_tag_ZN10GameWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "GameWidget",
        "beginRound",
        "",
        "betAmount",
        "returnToMainMenu",
        "onBetPlaced",
        "addChip",
        "value",
        "removeChip",
        "onStartButtonClicked",
        "onPlayerCardDealt",
        "Card",
        "card",
        "handIndex",
        "isLastCard",
        "onDealerCardDealt",
        "onRoundEnded",
        "BlackjackGame::GameResult",
        "result",
        "payout",
        "totalHands",
        "onPlayerTurn",
        "canDouble",
        "canSplit",
        "canSurrender",
        "onDealerTurnStarted",
        "onHandSplit",
        "onReturnToMainMenu",
        "onStrategyChartButtonClicked",
        "toggleCountingLabel",
        "showAmountOfDecksLeft"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'beginRound'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'returnToMainMenu'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onBetPlaced'
        QtMocHelpers::SlotData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'addChip'
        QtMocHelpers::SlotData<void(int)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'removeChip'
        QtMocHelpers::SlotData<void(int)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'onStartButtonClicked'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onPlayerCardDealt'
        QtMocHelpers::SlotData<void(Card, int, bool)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 12 }, { QMetaType::Int, 13 }, { QMetaType::Bool, 14 },
        }}),
        // Slot 'onDealerCardDealt'
        QtMocHelpers::SlotData<void(Card)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Slot 'onRoundEnded'
        QtMocHelpers::SlotData<void(BlackjackGame::GameResult, int, int, int)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 17, 18 }, { QMetaType::Int, 19 }, { QMetaType::Int, 13 }, { QMetaType::Int, 20 },
        }}),
        // Slot 'onPlayerTurn'
        QtMocHelpers::SlotData<void(int, bool, bool, bool)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 13 }, { QMetaType::Bool, 22 }, { QMetaType::Bool, 23 }, { QMetaType::Bool, 24 },
        }}),
        // Slot 'onDealerTurnStarted'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onHandSplit'
        QtMocHelpers::SlotData<void(int)>(26, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 13 },
        }}),
        // Slot 'onReturnToMainMenu'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onStrategyChartButtonClicked'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'toggleCountingLabel'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showAmountOfDecksLeft'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GameWidget, qt_meta_tag_ZN10GameWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject GameWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10GameWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10GameWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10GameWidgetE_t>.metaTypes,
    nullptr
} };

void GameWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GameWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->beginRound((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->returnToMainMenu(); break;
        case 2: _t->onBetPlaced((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->addChip((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->removeChip((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->onStartButtonClicked(); break;
        case 6: _t->onPlayerCardDealt((*reinterpret_cast< std::add_pointer_t<Card>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 7: _t->onDealerCardDealt((*reinterpret_cast< std::add_pointer_t<Card>>(_a[1]))); break;
        case 8: _t->onRoundEnded((*reinterpret_cast< std::add_pointer_t<BlackjackGame::GameResult>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 9: _t->onPlayerTurn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4]))); break;
        case 10: _t->onDealerTurnStarted(); break;
        case 11: _t->onHandSplit((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->onReturnToMainMenu(); break;
        case 13: _t->onStrategyChartButtonClicked(); break;
        case 14: _t->toggleCountingLabel(); break;
        case 15: _t->showAmountOfDecksLeft(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (GameWidget::*)(int )>(_a, &GameWidget::beginRound, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (GameWidget::*)()>(_a, &GameWidget::returnToMainMenu, 1))
            return;
    }
}

const QMetaObject *GameWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10GameWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GameWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void GameWidget::beginRound(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void GameWidget::returnToMainMenu()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
