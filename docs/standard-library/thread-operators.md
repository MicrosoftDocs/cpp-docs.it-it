---
description: 'Altre informazioni su: &lt; operatori di thread &gt;'
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
ms.openlocfilehash: 3992dccf051622bcf854c1843f1bdeb15d227731
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97207423"
---
# <a name="ltthreadgt-operators"></a>Operatori &lt;thread&gt;

[operatore! =](#op_neq)\
[operatore&gt;](#op_gt)\
[operatore&gt;=](#op_gt_eq)\
[operatore&lt;](#op_lt)\
[operatore&lt;&lt;](#op_lt_lt)\
[operatore&lt;=](#op_lt_eq)\
[operatore = =](#op_eq_eq)

## <a name="operatorgt"></a><a name="op_gt_eq"></a> operatore&gt;=

Determina se un oggetto `thread::id` è maggiore o uguale a un altro.

```cpp
bool operator>= (
    thread::id Left,
    thread::id Right) noexcept
```

### <a name="parameters"></a>Parametri

*Sinistra*\
L'oggetto `thread::id` a sinistra.

*Ok*\
L'oggetto `thread::id` corretto.

### <a name="return-value"></a>Valore restituito

`!(Left < Right)`

### <a name="remarks"></a>Commenti

Questa funzione non genera eccezioni.

## <a name="operatorgt"></a><a name="op_gt"></a> operatore&gt;

Determina se un oggetto `thread::id` è maggiore di un altro.

```cpp
bool operator> (
    thread::id Left,
    thread::id Right) noexcept
```

### <a name="parameters"></a>Parametri

*Sinistra*\
L'oggetto `thread::id` a sinistra.

*Ok*\
L'oggetto `thread::id` corretto.

### <a name="return-value"></a>Valore restituito

`Right < Left`

### <a name="remarks"></a>Commenti

Questa funzione non genera eccezioni.

## <a name="operatorlt"></a><a name="op_lt_eq"></a> operatore&lt;=

Determina se un oggetto `thread::id` è minore o uguale a un altro.

```cpp
bool operator<= (
    thread::id Left,
    thread::id Right) noexcept
```

### <a name="parameters"></a>Parametri

*Sinistra*\
L'oggetto `thread::id` a sinistra.

*Ok*\
L'oggetto `thread::id` corretto.

### <a name="return-value"></a>Valore restituito

`!(Right < Left)`

### <a name="remarks"></a>Commenti

Questa funzione non genera eccezioni.

## <a name="operatorlt"></a><a name="op_lt"></a> operatore&lt;

Determina se un oggetto `thread::id` è minore di un altro.

```cpp
bool operator<(
    thread::id Left,
    thread::id Right) noexcept
```

### <a name="parameters"></a>Parametri

*Sinistra*\
L'oggetto `thread::id` a sinistra.

*Ok*\
L'oggetto `thread::id` corretto.

### <a name="return-value"></a>Valore restituito

**`true`** Se *Left* precede *direttamente* nell'ordine totale; in caso contrario, **`false`** .

### <a name="remarks"></a>Commenti

L'operatore definisce un ordinamento totale per tutti gli oggetti `thread::id`. Questi oggetti possono essere usati come chiavi in contenitori associativi.

Questa funzione non genera eccezioni.

## <a name="operator"></a><a name="op_neq"></a> operatore! =

Confronta due oggetti `thread::id` per stabilirne la disuguaglianza.

```cpp
bool operator!= (
    thread::id Left,
    thread::id Right) noexcept
```

### <a name="parameters"></a>Parametri

*Sinistra*\
L'oggetto `thread::id` a sinistra.

*Ok*\
L'oggetto `thread::id` corretto.

### <a name="return-value"></a>Valore restituito

`!(Left == Right)`

### <a name="remarks"></a>Commenti

Questa funzione non genera eccezioni.

## <a name="operator"></a><a name="op_eq_eq"></a> operatore = =

Confronta due oggetti `thread::id` per stabilirne l'uguaglianza.

```cpp
bool operator== (
    thread::id Left,
    thread::id Right) noexcept
```

### <a name="parameters"></a>Parametri

*Sinistra*\
L'oggetto `thread::id` a sinistra.

*Ok*\
L'oggetto `thread::id` corretto.

### <a name="return-value"></a>Valore restituito

**`true`** Se i due oggetti rappresentano lo stesso thread di esecuzione o se nessun oggetto rappresenta un thread di esecuzione; in caso contrario, **`false`** .

### <a name="remarks"></a>Commenti

Questa funzione non genera eccezioni.

## <a name="operatorltlt"></a><a name="op_lt_lt"></a> operatore&lt;&lt;

Inserisce una rappresentazione testo di un oggetto `thread::id` in un flusso.

```cpp
template <class Elem, class Tr>
basic_ostream<Elem, Tr>& operator<<(
    basic_ostream<Elem, Tr>& Ostr, thread::id Id);
```

### <a name="parameters"></a>Parametri

*OSTR*\
Oggetto [basic_ostream](../standard-library/basic-ostream-class.md).

*ID*\
Un oggetto `thread::id`.

### <a name="return-value"></a>Valore restituito

*OSTR*.

### <a name="remarks"></a>Commenti

Questa funzione inserisce l' *ID* in *OSTR*.

Se due oggetti `thread::id` risultano uguali, le relative rappresentazioni testo inserite sono uguali.

## <a name="see-also"></a>Vedere anche

[\<thread>](../standard-library/thread.md)
