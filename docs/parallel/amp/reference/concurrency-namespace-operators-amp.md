---
title: Operatori dello spazio dei nomi di concorrenza (AMP) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
dev_langs:
- C++
ms.assetid: 77f1ae17-1eb2-480d-8fe5-66d4c24bb91e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d5844afa476510e4b4984ae69c75193fdf048ddd
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46382362"
---
# <a name="concurrency-namespace-operators-amp"></a>Operatori dello spazio dei nomi di concorrenza (AMP)

||||
|-|-|-|
|[operator!=](#operator_neq)|[operator%](#operator_mod)|[operator*](#operator_star)|
|[operator+](#operator_add)|[operator-](#operator-)|[operator/](#operator_div)|
|[operator==](#operator_eq_eq)|

##  <a name="operator_eq_eq"></a>  operator==

Determina se gli argomenti specificati sono uguali.

```
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
Il rango della tupla argomenti.

*_Lhs*<br/>
Una delle tuple da confrontare.

*_Rhs*<br/>
Una delle tuple da confrontare.

### <a name="return-value"></a>Valore restituito

`true` Se le tuple sono uguali. in caso contrario, `false`.

##  <a name="operator_neq"></a>  operator!=

Determina se gli argomenti specificati non sono uguali.

```
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
Il rango della tupla argomenti.

*_Lhs*<br/>
Una delle tuple da confrontare.

*_Rhs*<br/>
Una delle tuple da confrontare.

### <a name="return-value"></a>Valore restituito

`true` Se le tuple non sono uguali. in caso contrario, `false`.

##  <a name="operator_add"></a>  operator+

Calcola la somma per componente degli argomenti specificati.

```
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
Il rango della tupla argomenti.

*_Lhs*<br/>
Uno degli argomenti da aggiungere.

*_Rhs*<br/>
Uno degli argomenti da aggiungere.

### <a name="return-value"></a>Valore restituito

La somma per componente degli argomenti specificati.

##  <a name="operator-"></a>  operator-

Calcola la differenza per componente tra gli argomenti specificati.

```
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
Il rango della tupla argomenti.

*_Lhs*<br/>
Argomento da sottrarre.

*_Rhs*<br/>
Argomento da sottrarre.

### <a name="return-value"></a>Valore restituito

La differenza per componente tra gli argomenti specificati.

##  <a name="operator_star"></a>  operator*

Calcola il prodotto per componente degli argomenti specificati.

```
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
Il rango della tupla argomenti.

*_Lhs*<br/>
Una delle tuple da moltiplicare.

*_Rhs*<br/>
Una delle tuple da moltiplicare.

### <a name="return-value"></a>Valore restituito

Il prodotto per componente degli argomenti specificati.

##  <a name="operator_div"></a>  operator/

Calcola il quoziente per componente degli argomenti specificati.

```
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
Il rango della tupla argomenti.

*_Lhs*<br/>
Tupla da dividere.

*_Rhs*<br/>
Tupla da dividere.

### <a name="return-value"></a>Valore restituito

Il quoziente per componente degli argomenti specificati.

##  <a name="operator_mod"></a>  operator%

Calcola il modulo del primo argomento specificato dal secondo argomento specificato.

```
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
Il rango della tupla argomenti.

*_Lhs*<br/>
Tupla da cui il modulo viene calcolato.

*_Rhs*<br/>
La tupla per modulo.

### <a name="return-value"></a>Valore restituito

Il risultato del modulo della primo argomento specificato, il secondo argomento specificato.

## <a name="see-also"></a>Vedere anche

[concorrenza Namespace ](concurrency-namespace-cpp-amp.md)
