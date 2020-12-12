---
description: 'Altre informazioni su: operatori dello spazio dei nomi di concorrenza'
title: Operatori dello spazio dei nomi concurrency
ms.date: 11/04/2016
f1_keywords:
- concrt/concurrency::operator!=
- concrt/concurrency:[operator&amp;&amp
ms.assetid: 8e373f23-fc8e-49f7-82e6-ba0c57b822f8
ms.openlocfilehash: c268f823ed0cef9999cfde3eadcbd514614b3d17
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331276"
---
# <a name="concurrency-namespace-operators"></a>Operatori dello spazio dei nomi concurrency

:::row:::
   :::column span="":::
      [`operator||`](#operator_lor)\
      [`operator&&`](#operator_amp_amp)
   :::column-end:::
   :::column span="":::
      [`operator==`](#operator_eq_eq)\
      [`operator!=`](#operator_neq)
   :::column-end:::
   :::column span="":::
      [`operator<`](#operator_lt)\
      [`operator<=`](#operator_lt_eq)
   :::column-end:::
   :::column span="":::
      [`operator>`](#operator_gt)\
      [`operator>=`](#operator_gt_eq)
   :::column-end:::
:::row-end:::

## <a name="operator124124-operator"></a><a name="operator_lor"></a> operatore&#124;&#124; operator

Crea un'attività che verrà completata correttamente quando una delle attività fornite come argomenti verranno completate correttamente.

```cpp
template<typename ReturnType>
task<ReturnType> operator||(
    const task<ReturnType>& lhs,
    const task<ReturnType>& rhs);

template<typename ReturnType>
task<std::vector<ReturnType>> operator||(
    const task<std::vector<ReturnType>>& lhs,
    const task<ReturnType>& rhs);

template<typename ReturnType>
task<std::vector<ReturnType>> operator||(
    const task<ReturnType>& lhs,
    const task<std::vector<ReturnType>>& rhs);

inline task<void> operator||(
    const task<void>& lhs,
    const task<void>& rhs);
```

### <a name="parameters"></a>Parametri

*ReturnType*<br/>
Tipo dell'attività restituita.

*LHS*<br/>
La prima attività da combinare nell'attività risultante.

*rhs*<br/>
La seconda attività da combinare nell'attività risultante.

### <a name="return-value"></a>Valore restituito

Attività che viene completata correttamente quando una delle attività di input è stata completata correttamente. Se le attività di input sono di tipo `T`, l'output di questa funzione sarà `task<std::vector<T>`. Se le attività di input sono di tipo **`void`** , anche l'attività di output sarà un oggetto `task<void>` .

### <a name="remarks"></a>Commenti

Se entrambe le attività vengono annullate o se vengono generate eccezioni, lo stato dell'attività restituita sarà impostato su annullato e una delle eventuali eccezioni verrà generata quando si chiama `get()` o `wait()` sull'attività in questione.

## <a name="operatorampamp-operator"></a><a name="operator_amp_amp"></a>operatore &amp; Operator &amp;

Crea un'attività che verrà completata correttamente quando entrambe le attività fornite come argomenti vengono completate correttamente.

```cpp
template<typename ReturnType>
task<std::vector<ReturnType>>  operator&&(
    const task<ReturnType>& lhs,
    const task<ReturnType>& rhs);

template<typename ReturnType>
task<std::vector<ReturnType>>  operator&&(
    const task<std::vector<ReturnType>>& lhs,
    const task<ReturnType>& rhs);

template<typename ReturnType>
task<std::vector<ReturnType>>  operator&&(
    const task<ReturnType>& lhs,
    const task<std::vector<ReturnType>>& rhs);

template<typename ReturnType>
task<std::vector<ReturnType>>  operator&&(
    const task<std::vector<ReturnType>>& lhs,
    const task<std::vector<ReturnType>>& rhs);

inline task<void>  operator&&(
    const task<void>& lhs,
    const task<void>& rhs);
```

### <a name="parameters"></a>Parametri

*ReturnType*<br/>
Tipo dell'attività restituita.

*LHS*<br/>
La prima attività da combinare nell'attività risultante.

*rhs*<br/>
La seconda attività da combinare nell'attività risultante.

### <a name="return-value"></a>Valore restituito

Attività che viene completata correttamente quando entrambe le attività di input sono state completate. Se le attività di input sono di tipo `T`, l'output di questa funzione sarà `task<std::vector<T>>`. Se le attività di input sono di tipo **`void`** , anche l'attività di output sarà un oggetto `task<void>` .

### <a name="remarks"></a>Commenti

Se una delle attività viene annullata o viene generata un'eccezione, l'attività restituita verrà completata in anticipo, nello stato annullato, e l'eccezione, se presente, verrà generata se si chiama `get()` o `wait()` su tale attività.

## <a name="operator-operator"></a><a name="operator_eq_eq"></a> operatore operator = =

Verifica se l'oggetto `concurrent_vector` sul lato sinistro dell'operatore è uguale all'oggetto `concurrent_vector` sul lato destro.

```cpp
template<typename T, class A1, class A2>
inline bool operator== (
    const concurrent_vector<T, A1>& _A,
    const concurrent_vector<T, A2>& _B);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di dati degli elementi archiviati nei vettori simultanei.

*A1*<br/>
Tipo di allocatore del primo `concurrent_vector` oggetto.

*A2*<br/>
Tipo di allocatore del secondo `concurrent_vector` oggetto.

*_A*<br/>
Oggetto di tipo `concurrent_vector`.

*_B*<br/>
Oggetto di tipo `concurrent_vector`.

### <a name="return-value"></a>Valore restituito

**`true`** Se il vettore simultaneo sul lato sinistro dell'operatore è uguale al vettore simultaneo a destra dell'operatore; in caso contrario **`false`** ,.

### <a name="remarks"></a>Commenti

Due vettori simultanei sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.

Questo metodo non è indipendente dalla concorrenza rispetto ad altri metodi che possono modificare uno dei vettori simultanei `_A` o `_B` .

## <a name="operator-operator"></a><a name="operator_neq"></a> operatore operator! =

Verifica se l'oggetto `concurrent_vector` sul lato sinistro dell'operatore non è uguale all'oggetto `concurrent_vector` sul lato destro.

```cpp
template<typename T, class A1, class A2>
inline bool operator!= (
    const concurrent_vector<T, A1>& _A,
    const concurrent_vector<T, A2>& _B);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di dati degli elementi archiviati nei vettori simultanei.

*A1*<br/>
Tipo di allocatore del primo `concurrent_vector` oggetto.

*A2*<br/>
Tipo di allocatore del secondo `concurrent_vector` oggetto.

*_A*<br/>
Oggetto di tipo `concurrent_vector`.

*_B*<br/>
Oggetto di tipo `concurrent_vector`.

### <a name="return-value"></a>Valore restituito

**`true`** Se i vettori simultanei non sono uguali. **`false`** se i vettori simultanei sono uguali.

### <a name="remarks"></a>Commenti

Due vettori simultanei sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.

Questo metodo non è indipendente dalla concorrenza rispetto ad altri metodi che possono modificare uno dei vettori simultanei `_A` o `_B` .

## <a name="operatorlt-operator"></a><a name="operator_lt"></a> operatore &lt; operator

Verifica se l'oggetto `concurrent_vector` sul lato sinistro dell'operatore è minore dell'oggetto `concurrent_vector` sul lato destro.

```cpp
template<typename T, class A1, class A2>
inline bool operator<(
    const concurrent_vector<T, A1>& _A,
    const concurrent_vector<T, A2>& _B);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di dati degli elementi archiviati nei vettori simultanei.

*A1*<br/>
Tipo di allocatore del primo `concurrent_vector` oggetto.

*A2*<br/>
Tipo di allocatore del secondo `concurrent_vector` oggetto.

*_A*<br/>
Oggetto di tipo `concurrent_vector`.

*_B*<br/>
Oggetto di tipo `concurrent_vector`.

### <a name="return-value"></a>Valore restituito

**`true`** Se il vettore simultaneo sul lato sinistro dell'operatore è minore del vettore simultaneo a destra dell'operatore; in caso contrario **`false`** ,.

### <a name="remarks"></a>Commenti

Il comportamento di questo operatore è identico all'operatore equivalente per la `vector` classe nello `std` spazio dei nomi.

Questo metodo non è indipendente dalla concorrenza rispetto ad altri metodi che possono modificare uno dei vettori simultanei `_A` o `_B` .

## <a name="operatorlt-operator"></a><a name="operator_lt_eq"></a> Operator &lt; = (operatore)

Verifica se l'oggetto `concurrent_vector` sul lato sinistro dell'operatore è minore o uguale all'oggetto `concurrent_vector` sul lato destro.

```cpp
template<typename T, class A1, class A2>
inline bool operator<= (
    const concurrent_vector<T, A1>& _A,
    const concurrent_vector<T, A2>& _B);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di dati degli elementi archiviati nei vettori simultanei.

*A1*<br/>
Tipo di allocatore del primo `concurrent_vector` oggetto.

*A2*<br/>
Tipo di allocatore del secondo `concurrent_vector` oggetto.

*_A*<br/>
Oggetto di tipo `concurrent_vector`.

*_B*<br/>
Oggetto di tipo `concurrent_vector`.

### <a name="return-value"></a>Valore restituito

**`true`** Se il vettore simultaneo sul lato sinistro dell'operatore è minore o uguale al vettore simultaneo a destra dell'operatore; in caso contrario **`false`** ,.

### <a name="remarks"></a>Commenti

Il comportamento di questo operatore è identico all'operatore equivalente per la `vector` classe nello `std` spazio dei nomi.

Questo metodo non è indipendente dalla concorrenza rispetto ad altri metodi che possono modificare uno dei vettori simultanei `_A` o `_B` .

## <a name="operatorgt-operator"></a><a name="operator_gt"></a> operatore &gt; operator

Verifica se l'oggetto `concurrent_vector` sul lato sinistro dell'operatore è maggiore dell'oggetto `concurrent_vector` sul lato destro.

```cpp
template<typename T, class A1, class A2>
inline bool operator>(
    const concurrent_vector<T, A1>& _A,
    const concurrent_vector<T, A2>& _B);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di dati degli elementi archiviati nei vettori simultanei.

*A1*<br/>
Tipo di allocatore del primo `concurrent_vector` oggetto.

*A2*<br/>
Tipo di allocatore del secondo `concurrent_vector` oggetto.

*_A*<br/>
Oggetto di tipo `concurrent_vector`.

*_B*<br/>
Oggetto di tipo `concurrent_vector`.

### <a name="return-value"></a>Valore restituito

**`true`** Se il vettore simultaneo sul lato sinistro dell'operatore è maggiore del vettore simultaneo a destra dell'operatore; in caso contrario **`false`** ,.

### <a name="remarks"></a>Commenti

Il comportamento di questo operatore è identico all'operatore equivalente per la `vector` classe nello `std` spazio dei nomi.

Questo metodo non è indipendente dalla concorrenza rispetto ad altri metodi che possono modificare uno dei vettori simultanei `_A` o `_B` .

## <a name="operatorgt-operator"></a><a name="operator_gt_eq"></a> Operator &gt; = (operatore)

Verifica se l'oggetto `concurrent_vector` sul lato sinistro dell'operatore è maggiore o uguale all'oggetto `concurrent_vector` sul lato destro.

```cpp
template<typename T, class A1, class A2>
inline bool operator>= (
    const concurrent_vector<T, A1>& _A,
    const concurrent_vector<T, A2>& _B);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di dati degli elementi archiviati nei vettori simultanei.

*A1*<br/>
Tipo di allocatore del primo `concurrent_vector` oggetto.

*A2*<br/>
Tipo di allocatore del secondo `concurrent_vector` oggetto.

*_A*<br/>
Oggetto di tipo `concurrent_vector`.

*_B*<br/>
Oggetto di tipo `concurrent_vector`.

### <a name="return-value"></a>Valore restituito

**`true`** Se il vettore simultaneo sul lato sinistro dell'operatore è maggiore o uguale al vettore simultaneo a destra dell'operatore; in caso contrario **`false`** ,.

### <a name="remarks"></a>Commenti

Il comportamento di questo operatore è identico all'operatore equivalente per la `vector` classe nello `std` spazio dei nomi.

Questo metodo non è indipendente dalla concorrenza rispetto ad altri metodi che possono modificare uno dei vettori simultanei `_A` o `_B` .

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)
