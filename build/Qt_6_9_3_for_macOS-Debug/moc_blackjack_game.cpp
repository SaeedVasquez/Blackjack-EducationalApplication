/****************************************************************************
** Meta object code from reading C++ file 'blackjack_game.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../blackjack_game.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'blackjack_game.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13BlackjackGameE_t {};
} // unnamed namespace

template <> constexpr inline auto BlackjackGame::qt_create_metaobjectdata<qt_meta_tag_ZN13BlackjackGameE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "BlackjackGame",
        "playerCardDealt",
        "",
        "Card",
        "card",
        "handIndex",
        "isLastCard",
        "dealerCardDealt",
        "roundEnded",
        "BlackjackGame::GameResult",
        "result",
        "payout",
        "totalHands",
        "splitHand",
        "playerTurn",
        "canDouble",
        "canSplit",
        "canSurrender",
        "dealerTurnStarted",
        "betPlaced",
        "amount",
        "beginRound",
        "betAmount",
        "playerHit",
        "playerStand",
        "playerSplit",
        "playerDouble",
        "playerSurrender",
        "continueDealerTurn",
        "processNextHandResult"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'playerCardDealt'
        QtMocHelpers::SignalData<void(Card, int, bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Int, 5 }, { QMetaType::Bool, 6 },
        }}),
        // Signal 'dealerCardDealt'
        QtMocHelpers::SignalData<void(Card)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'roundEnded'
        QtMocHelpers::SignalData<void(BlackjackGame::GameResult, int, int, int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 }, { QMetaType::Int, 11 }, { QMetaType::Int, 5 }, { QMetaType::Int, 12 },
        }}),
        // Signal 'splitHand'
        QtMocHelpers::SignalData<void(int)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Signal 'playerTurn'
        QtMocHelpers::SignalData<void(int, bool, bool, bool)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 }, { QMetaType::Bool, 15 }, { QMetaType::Bool, 16 }, { QMetaType::Bool, 17 },
        }}),
        // Signal 'dealerTurnStarted'
        QtMocHelpers::SignalData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'betPlaced'
        QtMocHelpers::SignalData<void(int)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 20 },
        }}),
        // Slot 'beginRound'
        QtMocHelpers::SlotData<void(int)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Slot 'playerHit'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'playerStand'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'playerSplit'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'playerDouble'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'playerSurrender'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'continueDealerTurn'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'processNextHandResult'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<BlackjackGame, qt_meta_tag_ZN13BlackjackGameE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject BlackjackGame::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13BlackjackGameE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13BlackjackGameE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13BlackjackGameE_t>.metaTypes,
    nullptr
} };

void BlackjackGame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BlackjackGame *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->playerCardDealt((*reinterpret_cast< std::add_pointer_t<Card>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 1: _t->dealerCardDealt((*reinterpret_cast< std::add_pointer_t<Card>>(_a[1]))); break;
        case 2: _t->roundEnded((*reinterpret_cast< std::add_pointer_t<BlackjackGame::GameResult>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 3: _t->splitHand((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->playerTurn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4]))); break;
        case 5: _t->dealerTurnStarted(); break;
        case 6: _t->betPlaced((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->beginRound((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->playerHit(); break;
        case 9: _t->playerStand(); break;
        case 10: _t->playerSplit(); break;
        case 11: _t->playerDouble(); break;
        case 12: _t->playerSurrender(); break;
        case 13: _t->continueDealerTurn(); break;
        case 14: _t->processNextHandResult(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (BlackjackGame::*)(Card , int , bool )>(_a, &BlackjackGame::playerCardDealt, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (BlackjackGame::*)(Card )>(_a, &BlackjackGame::dealerCardDealt, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (BlackjackGame::*)(BlackjackGame::GameResult , int , int , int )>(_a, &BlackjackGame::roundEnded, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (BlackjackGame::*)(int )>(_a, &BlackjackGame::splitHand, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (BlackjackGame::*)(int , bool , bool , bool )>(_a, &BlackjackGame::playerTurn, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (BlackjackGame::*)()>(_a, &BlackjackGame::dealerTurnStarted, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (BlackjackGame::*)(int )>(_a, &BlackjackGame::betPlaced, 6))
            return;
    }
}

const QMetaObject *BlackjackGame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BlackjackGame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13BlackjackGameE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BlackjackGame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void BlackjackGame::playerCardDealt(Card _t1, int _t2, bool _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}

// SIGNAL 1
void BlackjackGame::dealerCardDealt(Card _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void BlackjackGame::roundEnded(BlackjackGame::GameResult _t1, int _t2, int _t3, int _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 3
void BlackjackGame::splitHand(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void BlackjackGame::playerTurn(int _t1, bool _t2, bool _t3, bool _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 5
void BlackjackGame::dealerTurnStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void BlackjackGame::betPlaced(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}
QT_WARNING_POP
