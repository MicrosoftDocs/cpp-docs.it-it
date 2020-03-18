---
title: Operatori dello spazio dei nomi concurrency
ms.date: 11/04/2016
f1_keywords:
- concrt/concurrency::operator!=
- concrt/concurrency:[operator&amp;&amp
ms.assetid: 8e373f23-fc8e-49f7-82e6-ba0c57b822f8
ms.openlocfilehash: 676e1936af317a6ab19959f8fd09b1de06dfaf69
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79422143"
---
# <a name="concurrency-namespace-operators"></a>Operatori dello spazio dei nomi concurrency

||||
|-|-|-|
|[operator!=](#operator_neq)|[operator&amp;&amp;](#operator_amp_amp)|[operator&gt;](#operator_gt)|
|[operator&gt;=](#operator_gt_eq)|[operator&lt;](#operator_lt)|[operator&lt;=](#operator_lt_eq)|
|[operator==](#operator_eq_eq)|[operator&#124;&#124;](#operator_lor)| |

## <a name="operator_lor"></a>operatore&#124; &#124; operator

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

Attività che viene completata correttamente quando una delle attività di input è stata completata correttamente. Se le attività di input sono di tipo `T`, l'output di questa funzione sarà `task<std::vector<T>`. Se le attività di input sono di tipo `void`, anche l'attività di output sarà `task<void>`.

### <a name="remarks"></a>Osservazioni

Se entrambe le attività vengono annullate o se vengono generate eccezioni, lo stato dell'attività restituita sarà impostato su annullato e una delle eventuali eccezioni verrà generata quando si chiama `get()` o `wait()` sull'attività in questione.

## <a name="operator_amp_amp"></a>operatore operator&amp;&amp;

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

Attività che viene completata correttamente quando entrambe le attività di input sono state completate. Se le attività di input sono di tipo `T`, l'output di questa funzione sarà `task<std::vector<T>>`. Se le attività di input sono di tipo `void`, anche l'attività di output sarà `task<void>`.

### <a name="remarks"></a>Osservazioni

Se una delle attività viene annullata o viene generata un'eccezione, l'attività restituita verrà completata in anticipo, nello stato annullato, e l'eccezione, se presente, verrà generata se si chiama `get()` o `wait()` su tale attività.

## <a name="operator_eq_eq"></a>operatore operator = =

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
Tipo di allocatore del primo oggetto `concurrent_vector`.

*A2*<br/>
Tipo di allocatore del secondo oggetto `concurrent_vector`.

*_A*<br/>
Oggetto di tipo `concurrent_vector`.

*_B*<br/>
Oggetto di tipo `concurrent_vector`.

### <a name="return-value"></a>Valore restituito

**true** se il vettore simultaneo sul lato sinistro dell'operatore è uguale al vettore simultaneo a destra dell'operatore; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

Due vettori simultanei sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.

Questo metodo non è indipendente dalla concorrenza rispetto ad altri metodi che possono modificare uno dei vettori simultanei `_A` o `_B`.

## <a name="operator_neq"></a>operatore operator! =

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
Tipo di allocatore del primo oggetto `concurrent_vector`.

*A2*<br/>
Tipo di allocatore del secondo oggetto `concurrent_vector`.

*_A*<br/>
Oggetto di tipo `concurrent_vector`.

*_B*<br/>
Oggetto di tipo `concurrent_vector`.

### <a name="return-value"></a>Valore restituito

**true** se i vettori simultanei non sono uguali. **false** se i vettori simultanei sono uguali.

### <a name="remarks"></a>Osservazioni

Due vettori simultanei sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.

Questo metodo non è indipendente dalla concorrenza rispetto ad altri metodi che possono modificare uno dei vettori simultanei `_A` o `_B`.

## <a name="operator_lt"></a>operatore&lt; operator

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
Tipo di allocatore del primo oggetto `concurrent_vector`.

*A2*<br/>
Tipo di allocatore del secondo oggetto `concurrent_vector`.

*_A*<br/>
Oggetto di tipo `concurrent_vector`.

*_B*<br/>
Oggetto di tipo `concurrent_vector`.

### <a name="return-value"></a>Valore restituito

**true** se il vettore simultaneo sul lato sinistro dell'operatore è minore del vettore simultaneo a destra dell'operatore; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

Il comportamento di questo operatore è identico all'operatore equivalente per la classe `vector` nello spazio dei nomi `std`.

Questo metodo non è indipendente dalla concorrenza rispetto ad altri metodi che possono modificare uno dei vettori simultanei `_A` o `_B`.

## <a name="operator_lt_eq"></a>operatore operator&lt;=

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
Tipo di allocatore del primo oggetto `concurrent_vector`.

*A2*<br/>
Tipo di allocatore del secondo oggetto `concurrent_vector`.

*_A*<br/>
Oggetto di tipo `concurrent_vector`.

*_B*<br/>
Oggetto di tipo `concurrent_vector`.

### <a name="return-value"></a>Valore restituito

**true** se il vettore simultaneo sul lato sinistro dell'operatore è minore o uguale al vettore simultaneo a destra dell'operatore. in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

Il comportamento di questo operatore è identico all'operatore equivalente per la classe `vector` nello spazio dei nomi `std`.

Questo metodo non è indipendente dalla concorrenza rispetto ad altri metodi che possono modificare uno dei vettori simultanei `_A` o `_B`.

## <a name="operator_gt"></a>operatore&gt; operator

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
Tipo di allocatore del primo oggetto `concurrent_vector`.

*A2*<br/>
Tipo di allocatore del secondo oggetto `concurrent_vector`.

*_A*<br/>
Oggetto di tipo `concurrent_vector`.

*_B*<br/>
Oggetto di tipo `concurrent_vector`.

### <a name="return-value"></a>Valore restituito

**true** se il vettore simultaneo sul lato sinistro dell'operatore è maggiore del vettore simultaneo a destra dell'operatore; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

Il comportamento di questo operatore è identico all'operatore equivalente per la classe `vector` nello spazio dei nomi `std`.

Questo metodo non è indipendente dalla concorrenza rispetto ad altri metodi che possono modificare uno dei vettori simultanei `_A` o `_B`.

## <a name="operator_gt_eq"></a>operatore operator&gt;=

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
Tipo di allocatore del primo oggetto `concurrent_vector`.

*A2*<br/>
Tipo di allocatore del secondo oggetto `concurrent_vector`.

*_A*<br/>
Oggetto di tipo `concurrent_vector`.

*_B*<br/>
Oggetto di tipo `concurrent_vector`.

### <a name="return-value"></a>Valore restituito

**true** se il vettore simultaneo sul lato sinistro dell'operatore è maggiore o uguale al vettore simultaneo a destra dell'operatore. in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

Il comportamento di questo operatore è identico all'operatore equivalente per la classe `vector` nello spazio dei nomi `std`.

Questo metodo non è indipendente dalla concorrenza rispetto ad altri metodi che possono modificare uno dei vettori simultanei `_A` o `_B`.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
