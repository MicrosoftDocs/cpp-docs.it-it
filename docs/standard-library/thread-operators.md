---
title: Operatori &lt;thread&gt;
ms.date: 11/04/2016
f1_keywords:
- thread/std::operator!=
- thread/std::operator&gt;
- thread/std::operator&gt;=
- thread/std::operator&lt;
- thread/std::operator&lt;&lt;
- thread/std::operator&lt;=
- thread/std::operator==
ms.assetid: e6bb6c0f-64f9-4cb2-9ff2-05b88a6ba7ac
helpviewer_keywords:
- std::operator!= (thread)
- std::operator&gt; (thread)
- std::operator&gt;= (thread)
- std::operator&lt; (thread)
- std::operator&lt;&lt; (thread)
- std::operator&lt;= (thread)
- std::operator== (thread)
ms.openlocfilehash: 6312d14dc681736ee396d5c7af6c50ba8d72cd3a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375829"
---
# <a name="ltthreadgt-operators"></a>Operatori &lt;thread&gt;

||||
|-|-|-|
|[operatore!](#op_neq)|[Operatore&gt;](#op_gt)|[Operatore&gt;=](#op_gt_eq)|
|[Operatore&lt;](#op_lt)|[Operatore&lt;&lt;](#op_lt_lt)|[Operatore&lt;=](#op_lt_eq)|
|[operatore di comando](#op_eq_eq)|

## <a name="operatorgt"></a><a name="op_gt_eq"></a>Operatore&gt;=

Determina se un oggetto `thread::id` è maggiore o uguale a un altro.

```cpp
bool operator>= (
    thread::id Left,
    thread::id Right) noexcept
```

### <a name="parameters"></a>Parametri

*Sinistra*\
L'oggetto `thread::id` a sinistra.

*va bene*\
L'oggetto `thread::id` corretto.

### <a name="return-value"></a>Valore restituito

`!(Left < Right)`

### <a name="remarks"></a>Osservazioni

Questa funzione non genera eccezioni.

## <a name="operatorgt"></a><a name="op_gt"></a>Operatore&gt;

Determina se un oggetto `thread::id` è maggiore di un altro.

```cpp
bool operator> (
    thread::id Left,
    thread::id Right) noexcept
```

### <a name="parameters"></a>Parametri

*Sinistra*\
L'oggetto `thread::id` a sinistra.

*va bene*\
L'oggetto `thread::id` corretto.

### <a name="return-value"></a>Valore restituito

`Right < Left`

### <a name="remarks"></a>Osservazioni

Questa funzione non genera eccezioni.

## <a name="operatorlt"></a><a name="op_lt_eq"></a>Operatore&lt;=

Determina se un oggetto `thread::id` è minore o uguale a un altro.

```cpp
bool operator<= (
    thread::id Left,
    thread::id Right) noexcept
```

### <a name="parameters"></a>Parametri

*Sinistra*\
L'oggetto `thread::id` a sinistra.

*va bene*\
L'oggetto `thread::id` corretto.

### <a name="return-value"></a>Valore restituito

`!(Right < Left)`

### <a name="remarks"></a>Osservazioni

Questa funzione non genera eccezioni.

## <a name="operatorlt"></a><a name="op_lt"></a>Operatore&lt;

Determina se un oggetto `thread::id` è minore di un altro.

```cpp
bool operator<(
    thread::id Left,
    thread::id Right) noexcept
```

### <a name="parameters"></a>Parametri

*Sinistra*\
L'oggetto `thread::id` a sinistra.

*va bene*\
L'oggetto `thread::id` corretto.

### <a name="return-value"></a>Valore restituito

**true** se *Left* precede *Right* nell'ordinamento totale; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

L'operatore definisce un ordinamento totale per tutti gli oggetti `thread::id`. Questi oggetti possono essere usati come chiavi in contenitori associativi.

Questa funzione non genera eccezioni.

## <a name="operator"></a><a name="op_neq"></a>operatore!

Confronta due oggetti `thread::id` per stabilirne la disuguaglianza.

```cpp
bool operator!= (
    thread::id Left,
    thread::id Right) noexcept
```

### <a name="parameters"></a>Parametri

*Sinistra*\
L'oggetto `thread::id` a sinistra.

*va bene*\
L'oggetto `thread::id` corretto.

### <a name="return-value"></a>Valore restituito

`!(Left == Right)`

### <a name="remarks"></a>Osservazioni

Questa funzione non genera eccezioni.

## <a name="operator"></a><a name="op_eq_eq"></a>operatore di comando

Confronta due oggetti `thread::id` per stabilirne l'uguaglianza.

```cpp
bool operator== (
    thread::id Left,
    thread::id Right) noexcept
```

### <a name="parameters"></a>Parametri

*Sinistra*\
L'oggetto `thread::id` a sinistra.

*va bene*\
L'oggetto `thread::id` corretto.

### <a name="return-value"></a>Valore restituito

**true** se i due oggetti rappresentano lo stesso thread di esecuzione o se nessuno dei due oggetti rappresenta un thread di esecuzione; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

Questa funzione non genera eccezioni.

## <a name="operatorltlt"></a><a name="op_lt_lt"></a>Operatore&lt;&lt;

Inserisce una rappresentazione testo di un oggetto `thread::id` in un flusso.

```cpp
template <class Elem, class Tr>
basic_ostream<Elem, Tr>& operator<<(
    basic_ostream<Elem, Tr>& Ostr, thread::id Id);
```

### <a name="parameters"></a>Parametri

*Ostr*\
Oggetto [basic_ostream](../standard-library/basic-ostream-class.md).

*Id*\
Oggetto `thread::id` .

### <a name="return-value"></a>Valore restituito

*Ostr*.

### <a name="remarks"></a>Osservazioni

Questa funzione inserisce *Id* in *Ostr*.

Se due oggetti `thread::id` risultano uguali, le relative rappresentazioni testo inserite sono uguali.

## <a name="see-also"></a>Vedere anche

[\<>di filettatura](../standard-library/thread.md)
