---
title: Operatori &lt;forward_list&gt;
ms.date: 11/04/2016
f1_keywords:
- forward_list/std::operator!=
- forward_list/std::operator==
- forward_list/std::operatoroperator&gt;
- forward_list/std::operatoroperator&gt=;
- forward_list/std::operatoroperator&lt;
- forward_list/std::operatoroperator&lt;=
ms.assetid: 57492e09-3836-4dbc-9ae5-78ecf506c190
helpviewer_keywords:
- std::operator!= (forward_list)
- std::operator== (forward_list)
- std::operatoroperator&gt; (forward_list)
- std::operatoroperator&gt=; (forward_list)
- std::operatoroperator&lt; (forward_list)
- std::operatoroperator&lt;= (forward_list)
ms.openlocfilehash: beb02a8353c6c5187dd0fa0171518c753eee7868
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87193341"
---
# <a name="ltforward_listgt-operators"></a>Operatori &lt;forward_list&gt;

## <a name="operator"></a><a name="op_eq_eq"></a>operatore = =

Verifica se l'oggetto elenco di inoltro a sinistra dell'operatore è uguale all'oggetto elenco di inoltro a destra.

```cpp
bool operator==(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `forward_list`.

*Ok*\
Oggetto di tipo `forward_list`.

### <a name="remarks"></a>Osservazioni

Questa funzione di modello è `operator==` in overload per confrontare due oggetti di modello di classe `forward_list` . La funzione restituisce `distance(left.begin(), end()) == distance(right.begin(),right.end()) && equal(left. begin(),left. end(),right.begin())`.

## <a name="operator"></a><a name="op_neq"></a>operatore! =

Verifica se l'oggetto elenco di inoltro a sinistra dell'operatore non è uguale all'oggetto elenco di inoltro a destra.

```cpp
bool operator!=(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `forward_list`.

*Ok*\
Oggetto di tipo `forward_list`.

### <a name="return-value"></a>Valore restituito

**`true`** Se gli elenchi non sono uguali; **`false`** se gli elenchi sono uguali.

### <a name="remarks"></a>Osservazioni

Questa funzione modello restituisce `!(left == right)`.

## <a name="operatorlt"></a><a name="op_lt"></a>operatore&lt;

Verifica se l'oggetto elenco di inoltro a sinistra dell'operatore è minore dell'oggetto elenco di inoltro a destra.

```cpp
bool operator<(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `forward_list`.

*Ok*\
Oggetto di tipo `forward_list`.

### <a name="return-value"></a>Valore restituito

**`true`** Se l'elenco sul lato sinistro dell'operatore è minore ma non uguale all'elenco a destra dell'operatore; in caso contrario **`false`** ,.

### <a name="remarks"></a>Osservazioni

Questa funzione di modello è `operator<` in overload per confrontare due oggetti di modello di classe `forward_list` . La funzione restituisce `lexicographical_compare(lhs. begin(), lhs. end(), rhs.begin(), rhs.end())`.

## <a name="operatorlt"></a><a name="op_lt_eq"></a>operatore&lt;=

Verifica se l'oggetto elenco di inoltro a sinistra dell'operatore è minore o uguale all'oggetto elenco di inoltro a destra.

```cpp
bool operator<=(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `forward_list`.

*Ok*\
Oggetto di tipo `forward_list`.

### <a name="return-value"></a>Valore restituito

**`true`** Se l'elenco sul lato sinistro dell'operatore è minore o uguale all'elenco a destra dell'operatore; in caso contrario **`false`** ,.

### <a name="remarks"></a>Osservazioni

Questa funzione modello restituisce `!(right < left)`.

## <a name="operatorgt"></a><a name="op_gt"></a>operatore&gt;

Verifica se l'oggetto elenco di inoltro a sinistra dell'operatore è maggiore dell'oggetto elenco di inoltro a destra.

```cpp
bool operator>(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `forward_list`.

*Ok*\
Oggetto di tipo `forward_list`.

### <a name="return-value"></a>Valore restituito

**`true`** Se l'elenco sul lato sinistro dell'operatore è maggiore dell'elenco a destra dell'operatore; in caso contrario **`false`** ,.

### <a name="remarks"></a>Osservazioni

Questa funzione modello restituisce `right < left`.

## <a name="operatorgt"></a><a name="op_gt_eq"></a>operatore&gt;=

Verifica se l'oggetto elenco di inoltro a sinistra dell'operatore è maggiore o uguale all'oggetto elenco di inoltro a destra.

```cpp
bool operator>=(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `forward_list`.

*Ok*\
Oggetto di tipo `forward_list`.

### <a name="return-value"></a>Valore restituito

**`true`** Se l'elenco di inoltri a sinistra dell'operatore è maggiore o uguale all'elenco di avanzamento sul lato destro dell'operatore; in caso contrario **`false`** ,.

### <a name="remarks"></a>Osservazioni

La funzione modello restituisce `!(left < right)`.
