---
title: Operatori &lt;system_error&gt;
ms.date: 11/04/2016
f1_keywords:
- system_error/std::operator!=
- system_error/std::operator==
ms.assetid: c14edefb-bd8a-4e90-88d3-c59c98e6f73c
ms.openlocfilehash: 8631cae146a311f1890583900b564471d5a80958
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80076257"
---
# <a name="ltsystem_errorgt-operators"></a>Operatori &lt;system_error&gt;

## <a name="operator"></a><a name="op_eq_eq"></a>operatore = =

Verifica se l'oggetto a sinistra dell'operatore è uguale all'oggetto a destra.

```cpp
bool operator==(const error_code& left,
    const error_condition& right);

bool operator==(const error_condition& left,
    const error_code& right);

bool operator==(const error_condition& left,
    const error_condition& right);
```

### <a name="parameters"></a>Parametri

\ a *sinistra*
L'oggetto di cui verificare l'uguaglianza.

\ a *destra*
L'oggetto di cui verificare l'uguaglianza.

### <a name="return-value"></a>Valore restituito

**true** se gli oggetti sono uguali; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

Questa funzione restituisce `left.category() == right.category() && left.value() == right.value()`.

## <a name="operator"></a><a name="op_neq"></a>operatore! =

Verifica se l'oggetto a sinistra dell'operatore non è uguale all'oggetto a destra.

```cpp
bool operator!=(const error_code& left, const error_condition& right);
bool operator!=(const error_condition& left, const error_code& right);
bool operator!=(const error_code& left, const error_code& right);
bool operator!=(const error_condition& left, const error_condition& right);
```

### <a name="parameters"></a>Parametri

\ a *sinistra*
Oggetto di cui verificare la disuguaglianza.

\ a *destra*
Oggetto di cui verificare la disuguaglianza.

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto passato a *sinistra* non è uguale all'oggetto passato a *destra*; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

Questa funzione restituisce `!(left == right)`.

## <a name="operatorlt"></a><a name="op_lt">Operatore </a>&lt;

Verifica se un oggetto è più piccolo dell'oggetto passato per il confronto.

```cpp
template <class _Enum>
inline bool operator<(
    _Enum left,
    typename enable_if<is_error_code_enum<_Enum>::value,
    const error_code&>::type right);

template <class _Enum>
inline bool operator<(
    typename enable_if<is_error_code_enum<_Enum>::value,
    const error_code&>::type left, _Enum right);

template <class _Enum>
inline bool operator<(
    _Enum left,
    typename enable_if<is_error_condition_enum<_Enum>::value,
    const error_condition&>::type right);

template <class _Enum>
inline bool operator<(
    typename enable_if<is_error_condition_enum<_Enum>::value,
    const error_condition&>::type left, _Enum right);
```

### <a name="parameters"></a>Parametri

\ a *sinistra*
Oggetto da confrontare.

\ a *destra*
Oggetto da confrontare.

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto passato a *sinistra* è minore dell'oggetto passato a *destra*; In caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

Questa funzione consente di verificare l'ordine degli errori.

## <a name="operatorltlt"></a><a name="op_ostream"></a>operatore&lt;&lt;

```cpp
template <class charT, class traits>
    basic_ostream<charT, traits>& operator<<(basic_ostream<charT, traits>& os, const error_code& ec);
```
