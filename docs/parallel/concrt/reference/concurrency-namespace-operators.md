---
title: spazio dei nomi Concurrency operatori
ms.date: 11/04/2016
f1_keywords:
- concrt/concurrency::operator!=
- concrt/concurrency:[operator&amp;&amp
ms.assetid: 8e373f23-fc8e-49f7-82e6-ba0c57b822f8
ms.openlocfilehash: 5982ae0ec3baff38b43b0ce504a47d512559390d
ms.sourcegitcommit: afd6fac7c519dbc47a4befaece14a919d4e0a8a2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2018
ms.locfileid: "51521609"
---
# <a name="concurrency-namespace-operators"></a>spazio dei nomi Concurrency operatori

||||
|-|-|-|
|[operator!=](#operator_neq)|[operator&amp;&amp;](#operator_amp_amp)|[operator&gt;](#operator_gt)|
|[operator&gt;=](#operator_gt_eq)|[operator&lt;](#operator_lt)|[operator&lt;=](#operator_lt_eq)|
|[operator==](#operator_eq_eq)|[operator&#124;&#124;](#operator_lor)| |

##  <a name="operator_lor"></a>  operatore&#124; &#124; operatore

Crea un'attività che verrà completata correttamente quando una delle attività fornite come argomenti verranno completate correttamente.

```
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

*sul lato sinistro*<br/>
La prima attività da combinare nell'attività risultante.

*rhs*<br/>
La seconda attività da combinare nell'attività risultante.

### <a name="return-value"></a>Valore restituito

Attività che viene completata correttamente quando entrambe le attività di input sono state completate. Se le attività di input sono di tipo `T`, l'output di questa funzione sarà `task<std::vector<T>`. Se le attività di input sono di tipo `void`, anche l'attività di output sarà `task<void>`.

### <a name="remarks"></a>Note

Se entrambe le attività vengono annullate o se vengono generate eccezioni, lo stato dell'attività restituita sarà impostato su annullato e una delle eventuali eccezioni verrà generata quando si chiama `get()` o `wait()` sull'attività in questione.

##  <a name="operator_amp_amp"></a>  operatore&amp; &amp; operatore

Crea un'attività che verrà completata correttamente quando entrambe le attività fornite come argomenti verranno completate.

```
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

*sul lato sinistro*<br/>
La prima attività da combinare nell'attività risultante.

*rhs*<br/>
La seconda attività da combinare nell'attività risultante.

### <a name="return-value"></a>Valore restituito

Attività che viene completata correttamente quando entrambe le attività di input sono state completate. Se le attività di input sono di tipo `T`, l'output di questa funzione sarà `task<std::vector<T>>`. Se le attività di input sono di tipo `void`, anche l'attività di output sarà `task<void>`.

### <a name="remarks"></a>Note

Se una delle attività viene annullata o viene generata un'eccezione, l'attività restituita verrà completata in anticipo, nello stato annullato, e l'eccezione, se ne è presente una, verrà generata in caso di chiamata a `get()` o `wait()` sull'attività in questione.

##  <a name="operator_eq_eq"></a>  operatore Operator = =

Verifica se l'oggetto `concurrent_vector` sul lato sinistro dell'operatore è uguale all'oggetto `concurrent_vector` sul lato destro.

```
template<typename T, class A1, class A2>
inline bool operator== (
    const concurrent_vector<T, A1>& _A,
    const concurrent_vector<T, A2>& _B);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di dati degli elementi da archiviare nel vettore simultaneo.

*A1*<br/>
Il tipo di allocatore del primo `concurrent_vector` oggetto.

*A2*<br/>
Il tipo di allocatore del secondo `concurrent_vector` oggetto.

*_A*<br/>
Oggetto di tipo `concurrent_vector`.

*B*<br/>
Oggetto di tipo `concurrent_vector`.

### <a name="return-value"></a>Valore restituito

**true** se il vettore simultaneo sul lato sinistro dell'operatore è uguale al vettore simultaneo sul lato destro dell'operatore; in caso contrario **false**.

### <a name="remarks"></a>Note

Due vettori simultanei sono uguali se hanno lo stesso numero di elementi e i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.

Questo metodo non è indipendente dalla concorrenza rispetto agli altri metodi che è stato possibile modificare uno dei vettori simultanei `_A` o `_B`.

##  <a name="operator_neq"></a>  operatore! = (operatore)

Verifica se l'oggetto `concurrent_vector` sul lato sinistro dell'operatore non è uguale all'oggetto `concurrent_vector` sul lato destro.

```
template<typename T, class A1, class A2>
inline bool operator!= (
    const concurrent_vector<T, A1>& _A,
    const concurrent_vector<T, A2>& _B);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di dati degli elementi da archiviare nel vettore simultaneo.

*A1*<br/>
Il tipo di allocatore del primo `concurrent_vector` oggetto.

*A2*<br/>
Il tipo di allocatore del secondo `concurrent_vector` oggetto.

*_A*<br/>
Oggetto di tipo `concurrent_vector`.

*B*<br/>
Oggetto di tipo `concurrent_vector`.

### <a name="return-value"></a>Valore restituito

**true** se i vettori simultanei non sono uguali. **false** se i vettori simultanei sono uguali.

### <a name="remarks"></a>Note

Due vettori simultanei sono uguali se hanno lo stesso numero di elementi e i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.

Questo metodo non è indipendente dalla concorrenza rispetto agli altri metodi che è stato possibile modificare uno dei vettori simultanei `_A` o `_B`.

##  <a name="operator_lt"></a>  operatore&lt; operatore

Verifica se l'oggetto `concurrent_vector` sul lato sinistro dell'operatore è minore dell'oggetto `concurrent_vector` sul lato destro.

```
template<typename T, class A1, class A2>
inline bool operator<(
    const concurrent_vector<T, A1>& _A,
    const concurrent_vector<T, A2>& _B);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di dati degli elementi da archiviare nel vettore simultaneo.

*A1*<br/>
Il tipo di allocatore del primo `concurrent_vector` oggetto.

*A2*<br/>
Il tipo di allocatore del secondo `concurrent_vector` oggetto.

*_A*<br/>
Oggetto di tipo `concurrent_vector`.

*B*<br/>
Oggetto di tipo `concurrent_vector`.

### <a name="return-value"></a>Valore restituito

**true** se il vettore simultaneo sul lato sinistro dell'operatore è minore del vettore simultaneo sul lato destro dell'operatore; in caso contrario **false**.

### <a name="remarks"></a>Note

Il comportamento di questo operatore equivale all'operatore equivalente per la `vector` classe di `std` dello spazio dei nomi.

Questo metodo non è indipendente dalla concorrenza rispetto agli altri metodi che è stato possibile modificare uno dei vettori simultanei `_A` o `_B`.

##  <a name="operator_lt_eq"></a>  operatore&lt;= (operatore)

Verifica se l'oggetto `concurrent_vector` sul lato sinistro dell'operatore è minore o uguale all'oggetto `concurrent_vector` sul lato destro.

```
template<typename T, class A1, class A2>
inline bool operator<= (
    const concurrent_vector<T, A1>& _A,
    const concurrent_vector<T, A2>& _B);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di dati degli elementi da archiviare nel vettore simultaneo.

*A1*<br/>
Il tipo di allocatore del primo `concurrent_vector` oggetto.

*A2*<br/>
Il tipo di allocatore del secondo `concurrent_vector` oggetto.

*_A*<br/>
Oggetto di tipo `concurrent_vector`.

*B*<br/>
Oggetto di tipo `concurrent_vector`.

### <a name="return-value"></a>Valore restituito

**true** se il vettore simultaneo sul lato sinistro dell'operatore è minore o uguale al vettore simultaneo sul lato destro dell'operatore; in caso contrario **false**.

### <a name="remarks"></a>Note

Il comportamento di questo operatore equivale all'operatore equivalente per la `vector` classe di `std` dello spazio dei nomi.

Questo metodo non è indipendente dalla concorrenza rispetto agli altri metodi che è stato possibile modificare uno dei vettori simultanei `_A` o `_B`.

##  <a name="operator_gt"></a>  operatore&gt; operatore

Verifica se l'oggetto `concurrent_vector` sul lato sinistro dell'operatore è maggiore dell'oggetto `concurrent_vector` sul lato destro.

```
template<typename T, class A1, class A2>
inline bool operator>(
    const concurrent_vector<T, A1>& _A,
    const concurrent_vector<T, A2>& _B);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di dati degli elementi da archiviare nel vettore simultaneo.

*A1*<br/>
Il tipo di allocatore del primo `concurrent_vector` oggetto.

*A2*<br/>
Il tipo di allocatore del secondo `concurrent_vector` oggetto.

*_A*<br/>
Oggetto di tipo `concurrent_vector`.

*B*<br/>
Oggetto di tipo `concurrent_vector`.

### <a name="return-value"></a>Valore restituito

**true** se il vettore simultaneo sul lato sinistro dell'operatore è maggiore del vettore simultaneo sul lato destro dell'operatore; in caso contrario **false**.

### <a name="remarks"></a>Note

Il comportamento di questo operatore equivale all'operatore equivalente per la `vector` classe di `std` dello spazio dei nomi.

Questo metodo non è indipendente dalla concorrenza rispetto agli altri metodi che è stato possibile modificare uno dei vettori simultanei `_A` o `_B`.

##  <a name="operator_gt_eq"></a>  operatore&gt;= (operatore)

Verifica se l'oggetto `concurrent_vector` sul lato sinistro dell'operatore è maggiore o uguale all'oggetto `concurrent_vector` sul lato destro.

```
template<typename T, class A1, class A2>
inline bool operator>= (
    const concurrent_vector<T, A1>& _A,
    const concurrent_vector<T, A2>& _B);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di dati degli elementi da archiviare nel vettore simultaneo.

*A1*<br/>
Il tipo di allocatore del primo `concurrent_vector` oggetto.

*A2*<br/>
Il tipo di allocatore del secondo `concurrent_vector` oggetto.

*_A*<br/>
Oggetto di tipo `concurrent_vector`.

*B*<br/>
Oggetto di tipo `concurrent_vector`.

### <a name="return-value"></a>Valore restituito

**true** se il vettore simultaneo sul lato sinistro dell'operatore è maggiore o uguale al vettore simultaneo sul lato destro dell'operatore; in caso contrario **false**.

### <a name="remarks"></a>Note

Il comportamento di questo operatore equivale all'operatore equivalente per la `vector` classe di `std` dello spazio dei nomi.

Questo metodo non è indipendente dalla concorrenza rispetto agli altri metodi che è stato possibile modificare uno dei vettori simultanei `_A` o `_B`.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
