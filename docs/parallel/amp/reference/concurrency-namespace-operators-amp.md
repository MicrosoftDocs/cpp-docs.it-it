---
title: Operatori dello spazio dei nomi Concurrency (AMP)
ms.date: 11/04/2016
ms.assetid: 77f1ae17-1eb2-480d-8fe5-66d4c24bb91e
ms.openlocfilehash: 03079f8899f3b13c8509e1affd10a82191b1817c
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87228479"
---
# <a name="concurrency-namespace-operators-amp"></a>Operatori dello spazio dei nomi Concurrency (AMP)

||||
|-|-|-|
|[operatore! =](#operator_neq)|[operatore](#operator_mod)|[operatore](#operator_star)|
|[operatore +](#operator_add)|[operatore](#operator-)|[operatore](#operator_div)|
|[operatore = =](#operator_eq_eq)|

## <a name="operator"></a><a name="operator_eq_eq"></a>operatore = =

Determina se gli argomenti specificati sono uguali.

```cpp
template <
    int _Rank,
    template <int> class _Tuple_type
>
bool operator== (
    const _Tuple_type<_Rank>& _Lhs,
    const _Tuple_type<_Rank>& _Rhs) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Rank*<br/>
Rango degli argomenti della tupla.

*_Lhs*<br/>
Una delle tuple da confrontare.

*_Rhs*<br/>
Una delle tuple da confrontare.

### <a name="return-value"></a>Valore restituito

**`true`** Se le tuple sono uguali. in caso contrario, **`false`** .

## <a name="operator"></a><a name="operator_neq"></a>operatore! =

Determina se gli argomenti specificati non sono uguali.

```cpp
template <
    int _Rank,
    template <int> class _Tuple_type
>
bool operator!= (
    const _Tuple_type<_Rank>& _Lhs,
    const _Tuple_type<_Rank>& _Rhs) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Rank*<br/>
Rango degli argomenti della tupla.

*_Lhs*<br/>
Una delle tuple da confrontare.

*_Rhs*<br/>
Una delle tuple da confrontare.

### <a name="return-value"></a>Valore restituito

**`true`** Se le tuple non sono uguali. in caso contrario, **`false`** .

## <a name="operator"></a><a name="operator_add"></a>operatore +

Calcola la somma dei componenti degli argomenti specificati.

```cpp
template <
    int _Rank,
    template <int> class _Tuple_type
>
class _Tuple_type> _Tuple_type<_Rank>   operator+(
    const _Tuple_type<_Rank>& _Lhs,
    const _Tuple_type<_Rank>& _Rhs) restrict(amp,cpu);

template <
    int _Rank,
    template <int> class _Tuple_type
>
class _Tuple_type> _Tuple_type<_Rank>   operator+(
    const _Tuple_type<_Rank>& _Lhs,
    typename _Tuple_type<_Rank>::value_type _Rhs) restrict(amp,cpu);

template <
    int _Rank,
    template <int> class _Tuple_type
>
class _Tuple_type> _Tuple_type<_Rank>   operator+(
    typename _Tuple_type<_Rank>::value_type _Lhs,
    const _Tuple_type<_Rank>& _Rhs) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Rank*<br/>
Rango degli argomenti della tupla.

*_Lhs*<br/>
Uno degli argomenti da aggiungere.

*_Rhs*<br/>
Uno degli argomenti da aggiungere.

### <a name="return-value"></a>Valore restituito

Somma dei componenti degli argomenti specificati.

## <a name="operator-"></a><a name="operator-"></a>operatore

Calcola la differenza in termini di componente tra gli argomenti specificati.

```cpp
template <
    int _Rank,
    template <int> class _Tuple_type
>
_Tuple_type<_Rank>   operator-(
    const _Tuple_type<_Rank>& _Lhs,
    const _Tuple_type<_Rank>& _Rhs) restrict(amp,cpu);

template <
    int _Rank,
    template <int> class _Tuple_type
>
_Tuple_type<_Rank>   operator-(
    const _Tuple_type<_Rank>& _Lhs,
    typename _Tuple_type<_Rank>::value_type _Rhs) restrict(amp,cpu);

template <
    int _Rank,
    template <int> class _Tuple_type
>
_Tuple_type<_Rank>   operator-(
    typename _Tuple_type<_Rank>::value_type _Lhs,
    const _Tuple_type<_Rank>& _Rhs) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Rank*<br/>
Rango degli argomenti della tupla.

*_Lhs*<br/>
Argomento da sottrarre.

*_Rhs*<br/>
Argomento da sottrarre.

### <a name="return-value"></a>Valore restituito

Differenza relativa ai componenti tra gli argomenti specificati.

## <a name="operator"></a><a name="operator_star"></a>operatore

Calcola il prodotto per componente degli argomenti specificati.

```cpp
template <
    int _Rank,
    template <int> class _Tuple_type
>
_Tuple_type<_Rank>   operator*(
    const _Tuple_type<_Rank>& _Lhs,
    typename _Tuple_type<_Rank>::value_type _Rhs) restrict(amp,cpu);

template <
    int _Rank,
    template <int> class _Tuple_type
>
_Tuple_type<_Rank>   operator*(
    typename _Tuple_type<_Rank>::value_type _Lhs,
    const _Tuple_type<_Rank>& _Rhs) restrict(amp, cpu);
```

### <a name="parameters"></a>Parametri

*_Rank*<br/>
Rango degli argomenti della tupla.

*_Lhs*<br/>
Una delle tuple da moltiplicare.

*_Rhs*<br/>
Una delle tuple da moltiplicare.

### <a name="return-value"></a>Valore restituito

Prodotto componente per gli argomenti specificati.

## <a name="operator"></a><a name="operator_div"></a>operatore

Calcola il quoziente per componente degli argomenti specificati.

```cpp
template <
    int _Rank,
    template <int> class _Tuple_type
>
_Tuple_type<_Rank>   operator/(
    const _Tuple_type<_Rank>& _Lhs,
    typename _Tuple_type<_Rank>::value_type _Rhs) restrict(amp,cpu);

template <
    int _Rank,
    template <int> class _Tuple_type
>
_Tuple_type<_Rank>   operator/(
    typename _Tuple_type<_Rank>::value_type _Lhs,
    const _Tuple_type<_Rank>& _Rhs) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Rank*<br/>
Rango degli argomenti della tupla.

*_Lhs*<br/>
Tupla da dividere.

*_Rhs*<br/>
Tupla in base alla quale dividere.

### <a name="return-value"></a>Valore restituito

Quoziente per componente degli argomenti specificati.

## <a name="operator"></a><a name="operator_mod"></a>operatore

Calcola il modulo del primo argomento specificato in base al secondo argomento specificato.

```cpp
template <
    int _Rank,
    template <int> class _Tuple_type
>
_Tuple_type<_Rank>   operator%(
    const _Tuple_type<_Rank>& _Lhs,
    typename _Tuple_type<_Rank>::value_type _Rhs) restrict(amp,cpu);

template <
    int _Rank,
    template <int> class _Tuple_type
>
_Tuple_type<_Rank>   operator%(
    typename _Tuple_type<_Rank>::value_type _Lhs,
    const _Tuple_type<_Rank>& _Rhs) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Rank*<br/>
Rango degli argomenti della tupla.

*_Lhs*<br/>
Tupla da cui viene calcolato il modulo.

*_Rhs*<br/>
Tupla in base a cui eseguire il modulo.

### <a name="return-value"></a>Valore restituito

Risultato del primo modulo dell'argomento specificato il secondo argomento specificato.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency](concurrency-namespace-cpp-amp.md)
