---
title: Operatori &lt;system_error&gt;
ms.date: 11/04/2016
f1_keywords:
- system_error/std::operator!=
- system_error/std::operator==
ms.assetid: c14edefb-bd8a-4e90-88d3-c59c98e6f73c
ms.openlocfilehash: 5cf6a455beb5654ef65f7411db4783a32c71d625
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68246217"
---
# <a name="ltsystemerrorgt-operators"></a>Operatori &lt;system_error&gt;

## <a name="op_eq_eq"></a> operator==

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

*A sinistra*\
Oggetto di cui verificare l'uguaglianza.

*Ok*\
Oggetto di cui verificare l'uguaglianza.

### <a name="return-value"></a>Valore restituito

**true** se gli oggetti sono uguali; in caso contrario, **false**.

### <a name="remarks"></a>Note

Questa funzione restituisce `left.category() == right.category() && left.value() == right.value()`.

## <a name="op_neq"></a> operatore! =

Verifica se l'oggetto a sinistra dell'operatore non è uguale all'oggetto a destra.

```cpp
bool operator!=(const error_code& left, const error_condition& right);
bool operator!=(const error_condition& left, const error_code& right);
bool operator!=(const error_code& left, const error_code& right);
bool operator!=(const error_condition& left, const error_condition& right);
```

### <a name="parameters"></a>Parametri

*A sinistra*\
Oggetto di cui verificare la disuguaglianza.

*Ok*\
Oggetto di cui verificare la disuguaglianza.

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto passato in *a sinistra* non è uguale all'oggetto passato *a destra*; in caso contrario **false**.

### <a name="remarks"></a>Note

Questa funzione restituisce `!(left == right)`.

## <a name="op_lt"></a>Operatore &lt;

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

*A sinistra*\
Oggetto da confrontare.

*Ok*\
Oggetto da confrontare.

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto passato in *a sinistra* è minore dell'oggetto passato in *a destra*; In caso contrario, **false**.

### <a name="remarks"></a>Note

Questa funzione consente di verificare l'ordine degli errori.

## <a name="op_ostream"></a> Operatore&lt;&lt;

```cpp
template <class charT, class traits> 
    basic_ostream<charT, traits>& operator<<(basic_ostream<charT, traits>& os, const error_code& ec);
```
