---
title: Operatori dello spazio dei nomi Concurrency (AMP)
ms.date: 11/04/2016
ms.assetid: 77f1ae17-1eb2-480d-8fe5-66d4c24bb91e
ms.openlocfilehash: c4086029b71d71091a12b9b6023cc6098faf2f85
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376296"
---
# <a name="concurrency-namespace-operators-amp"></a>Operatori dello spazio dei nomi Concurrency (AMP)

||||
|-|-|-|
|[operatore!](#operator_neq)|[operatore%](#operator_mod)|[operatore](#operator_star)|
|[operatore .](#operator_add)|[operatore-](#operator-)|[operatore/](#operator_div)|
|[operatore di comando](#operator_eq_eq)|

## <a name="operator"></a><a name="operator_eq_eq"></a>operatore di comando

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

**true** se le tuple sono uguali; in caso contrario, **false**.

## <a name="operator"></a><a name="operator_neq"></a>operatore!

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

**true** se le tuple non sono uguali; in caso contrario, **false**.

## <a name="operator"></a><a name="operator_add"></a>operatore .

Calcola la somma componente per componente degli argomenti specificati.

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

Somma componente per componente degli argomenti specificati.

## <a name="operator-"></a><a name="operator-"></a>operatore-

Calcola la differenza componente per componente tra gli argomenti specificati.

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

Differenza componente-saggio tra gli argomenti specificati.

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

Prodotto per componente degli argomenti specificati.

## <a name="operator"></a><a name="operator_div"></a>operatore/

Calcola il quoziente component-wise degli argomenti specificati.

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
La tupla da dividere.

*_Rhs*<br/>
La tupla in base alla quale eseguire la divisione.

### <a name="return-value"></a>Valore restituito

Quoziente component-wise degli argomenti specificati.

## <a name="operator"></a><a name="operator_mod"></a>operatore%

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
La tupla da cui eseguire il modulo.

### <a name="return-value"></a>Valore restituito

Risultato del primo argomento specificato modulo il secondo argomento specificato.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi ConcurrencyConcurrency Namespace](concurrency-namespace-cpp-amp.md)
