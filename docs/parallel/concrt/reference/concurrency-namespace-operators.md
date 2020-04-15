---
title: Operatori dello spazio dei nomi concurrency
ms.date: 11/04/2016
f1_keywords:
- concrt/concurrency::operator!=
- concrt/concurrency:[operator&amp;&amp
ms.assetid: 8e373f23-fc8e-49f7-82e6-ba0c57b822f8
ms.openlocfilehash: aac43a15b09bd792118fbfe7ea51493b73b8ac9d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374391"
---
# <a name="concurrency-namespace-operators"></a>Operatori dello spazio dei nomi concurrency

||||
|-|-|-|
|[operatore!](#operator_neq)|[Operatore&amp;&amp;](#operator_amp_amp)|[Operatore&gt;](#operator_gt)|
|[Operatore&gt;=](#operator_gt_eq)|[Operatore&lt;](#operator_lt)|[Operatore&lt;=](#operator_lt_eq)|
|[operatore di comando](#operator_eq_eq)|[operator&#124;&#124;](#operator_lor)| |

## <a name="operator124124-operator"></a><a name="operator_lor"></a>operatore&#124;&#124; operatore

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

*Returntype*<br/>
Tipo dell'attività restituita.

*Lhs*<br/>
La prima attività da combinare nell'attività risultante.

*rhs*<br/>
La seconda attività da combinare nell'attività risultante.

### <a name="return-value"></a>Valore restituito

Attività che viene completata correttamente quando una delle attività di input è stata completata correttamente. Se le attività di input sono di tipo `T`, l'output di questa funzione sarà `task<std::vector<T>`. Se le attività di input sono di tipo `void`, anche l'attività di output sarà `task<void>`.

### <a name="remarks"></a>Osservazioni

Se entrambe le attività vengono annullate o se vengono generate eccezioni, lo stato dell'attività restituita sarà impostato su annullato e una delle eventuali eccezioni verrà generata quando si chiama `get()` o `wait()` sull'attività in questione.

## <a name="operatorampamp-operator"></a><a name="operator_amp_amp"></a>Operatore&amp; &amp; Operatore

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

*Returntype*<br/>
Tipo dell'attività restituita.

*Lhs*<br/>
La prima attività da combinare nell'attività risultante.

*rhs*<br/>
La seconda attività da combinare nell'attività risultante.

### <a name="return-value"></a>Valore restituito

Attività che viene completata correttamente quando entrambe le attività di input sono state completate. Se le attività di input sono di tipo `T`, l'output di questa funzione sarà `task<std::vector<T>>`. Se le attività di input sono di tipo `void`, anche l'attività di output sarà `task<void>`.

### <a name="remarks"></a>Osservazioni

Se una delle attività viene annullata o genera un'eccezione, l'attività restituita verrà completata in anticipo, `get()` nello `wait()` stato annullato e l'eccezione, se si verifica, verrà generata se si chiama o su tale attività.

## <a name="operator-operator"></a><a name="operator_eq_eq"></a>Operatore : Operatore

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

*A1 (in modo inade*<br/>
Tipo di allocatore `concurrent_vector` del primo oggetto.

*A2*<br/>
Tipo di allocatore `concurrent_vector` del secondo oggetto.

*_A*<br/>
Oggetto di tipo `concurrent_vector`.

*_B*<br/>
Oggetto di tipo `concurrent_vector`.

### <a name="return-value"></a>Valore restituito

**true** se il vettore simultaneo sul lato sinistro dell'operatore è uguale al vettore simultaneo sul lato destro dell'operatore; in caso contrario **false**.

### <a name="remarks"></a>Osservazioni

Due vettori simultanei sono uguali se hanno lo stesso numero di elementi e i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.

Questo metodo non è indipendente dalla concorrenza rispetto ad altri metodi che `_A` `_B`potrebbero modificare uno dei vettori simultanei o .

## <a name="operator-operator"></a><a name="operator_neq"></a>Operatore!

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

*A1 (in modo inade*<br/>
Tipo di allocatore `concurrent_vector` del primo oggetto.

*A2*<br/>
Tipo di allocatore `concurrent_vector` del secondo oggetto.

*_A*<br/>
Oggetto di tipo `concurrent_vector`.

*_B*<br/>
Oggetto di tipo `concurrent_vector`.

### <a name="return-value"></a>Valore restituito

**true** se i vettori simultanei non sono uguali; **false** se i vettori simultanei sono uguali.

### <a name="remarks"></a>Osservazioni

Due vettori simultanei sono uguali se hanno lo stesso numero di elementi e i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.

Questo metodo non è indipendente dalla concorrenza rispetto ad altri metodi che `_A` `_B`potrebbero modificare uno dei vettori simultanei o .

## <a name="operatorlt-operator"></a><a name="operator_lt"></a>Operatore&lt; Operatore

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

*A1 (in modo inade*<br/>
Tipo di allocatore `concurrent_vector` del primo oggetto.

*A2*<br/>
Tipo di allocatore `concurrent_vector` del secondo oggetto.

*_A*<br/>
Oggetto di tipo `concurrent_vector`.

*_B*<br/>
Oggetto di tipo `concurrent_vector`.

### <a name="return-value"></a>Valore restituito

**true** se il vettore simultaneo sul lato sinistro dell'operatore è minore del vettore simultaneo sul lato destro dell'operatore; in caso contrario **false**.

### <a name="remarks"></a>Osservazioni

Il comportamento di questo operatore è `vector` identico `std` all'operatore equivalente per la classe nello spazio dei nomi .

Questo metodo non è indipendente dalla concorrenza rispetto ad altri metodi che `_A` `_B`potrebbero modificare uno dei vettori simultanei o .

## <a name="operatorlt-operator"></a><a name="operator_lt_eq"></a>operatore&lt;- Operatore

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

*A1 (in modo inade*<br/>
Tipo di allocatore `concurrent_vector` del primo oggetto.

*A2*<br/>
Tipo di allocatore `concurrent_vector` del secondo oggetto.

*_A*<br/>
Oggetto di tipo `concurrent_vector`.

*_B*<br/>
Oggetto di tipo `concurrent_vector`.

### <a name="return-value"></a>Valore restituito

**true** se il vettore simultaneo sul lato sinistro dell'operatore è minore o uguale al vettore simultaneo sul lato destro dell'operatore; in caso contrario **false**.

### <a name="remarks"></a>Osservazioni

Il comportamento di questo operatore è `vector` identico `std` all'operatore equivalente per la classe nello spazio dei nomi .

Questo metodo non è indipendente dalla concorrenza rispetto ad altri metodi che `_A` `_B`potrebbero modificare uno dei vettori simultanei o .

## <a name="operatorgt-operator"></a><a name="operator_gt"></a>Operatore&gt; Operatore

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

*A1 (in modo inade*<br/>
Tipo di allocatore `concurrent_vector` del primo oggetto.

*A2*<br/>
Tipo di allocatore `concurrent_vector` del secondo oggetto.

*_A*<br/>
Oggetto di tipo `concurrent_vector`.

*_B*<br/>
Oggetto di tipo `concurrent_vector`.

### <a name="return-value"></a>Valore restituito

**true** se il vettore simultaneo sul lato sinistro dell'operatore è maggiore del vettore simultaneo sul lato destro dell'operatore; in caso contrario **false**.

### <a name="remarks"></a>Osservazioni

Il comportamento di questo operatore è `vector` identico `std` all'operatore equivalente per la classe nello spazio dei nomi .

Questo metodo non è indipendente dalla concorrenza rispetto ad altri metodi che `_A` `_B`potrebbero modificare uno dei vettori simultanei o .

## <a name="operatorgt-operator"></a><a name="operator_gt_eq"></a>operatore&gt;- Operatore

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

*A1 (in modo inade*<br/>
Tipo di allocatore `concurrent_vector` del primo oggetto.

*A2*<br/>
Tipo di allocatore `concurrent_vector` del secondo oggetto.

*_A*<br/>
Oggetto di tipo `concurrent_vector`.

*_B*<br/>
Oggetto di tipo `concurrent_vector`.

### <a name="return-value"></a>Valore restituito

**true** se il vettore simultaneo sul lato sinistro dell'operatore è maggiore o uguale al vettore simultaneo sul lato destro dell'operatore; in caso contrario **false**.

### <a name="remarks"></a>Osservazioni

Il comportamento di questo operatore è `vector` identico `std` all'operatore equivalente per la classe nello spazio dei nomi .

Questo metodo non è indipendente dalla concorrenza rispetto ad altri metodi che `_A` `_B`potrebbero modificare uno dei vettori simultanei o .

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
