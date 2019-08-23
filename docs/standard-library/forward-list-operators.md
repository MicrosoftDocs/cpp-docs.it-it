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
ms.openlocfilehash: 64a49273cafd72158f176ee34ec271557ebee097
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68240655"
---
# <a name="ltforward_listgt-operators"></a>Operatori &lt;forward_list&gt;

## <a name="op_eq_eq"></a> operator==

Verifica se l'oggetto elenco di inoltro a sinistra dell'operatore è uguale all'oggetto elenco di inoltro a destra.

```cpp
bool operator==(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*A sinistra*\
Oggetto di tipo `forward_list`.

*Ok*\
Oggetto di tipo `forward_list`.

### <a name="remarks"></a>Note

Questa funzione modello esegue l'overload di `operator==` per confrontare due oggetti della classe modello `forward_list`. La funzione restituisce `distance(left.begin(), end()) == distance(right.begin(),right.end()) && equal(left. begin(),left. end(),right.begin())`.

## <a name="op_neq"></a> operatore! =

Verifica se l'oggetto elenco di inoltro a sinistra dell'operatore non è uguale all'oggetto elenco di inoltro a destra.

```cpp
bool operator!=(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*A sinistra*\
Oggetto di tipo `forward_list`.

*Ok*\
Oggetto di tipo `forward_list`.

### <a name="return-value"></a>Valore restituito

**true** se gli elenchi non sono uguali; in caso contrario, **false**.

### <a name="remarks"></a>Note

Questa funzione modello restituisce `!(left == right)`.

## <a name="op_lt"></a> Operatore&lt;

Verifica se l'oggetto elenco di inoltro a sinistra dell'operatore è minore dell'oggetto elenco di inoltro a destra.

```cpp
bool operator<(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*A sinistra*\
Oggetto di tipo `forward_list`.

*Ok*\
Oggetto di tipo `forward_list`.

### <a name="return-value"></a>Valore restituito

**true** se l'elenco a sinistra dell'operatore è minore ma non uguale all'elenco a destra; in caso contrario, **false**.

### <a name="remarks"></a>Note

Questa funzione modello esegue l'overload di `operator<` per confrontare due oggetti della classe modello `forward_list`. La funzione restituisce `lexicographical_compare(lhs. begin(), lhs. end(), rhs.begin(), rhs.end())`.

## <a name="op_lt_eq"></a> Operatore&lt;=

Verifica se l'oggetto elenco di inoltro a sinistra dell'operatore è minore o uguale all'oggetto elenco di inoltro a destra.

```cpp
bool operator<=(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*A sinistra*\
Oggetto di tipo `forward_list`.

*Ok*\
Oggetto di tipo `forward_list`.

### <a name="return-value"></a>Valore restituito

**true** se l'elenco a sinistra dell'operatore è minore o uguale all'elenco a destra; in caso contrario, **false**.

### <a name="remarks"></a>Note

Questa funzione modello restituisce `!(right < left)`.

## <a name="op_gt"></a> Operatore&gt;

Verifica se l'oggetto elenco di inoltro a sinistra dell'operatore è maggiore dell'oggetto elenco di inoltro a destra.

```cpp
bool operator>(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*A sinistra*\
Oggetto di tipo `forward_list`.

*Ok*\
Oggetto di tipo `forward_list`.

### <a name="return-value"></a>Valore restituito

**true** se l'elenco a sinistra dell'operatore è maggiore dell'elenco a destra; in caso contrario, **false**.

### <a name="remarks"></a>Note

Questa funzione modello restituisce `right < left`.

## <a name="op_gt_eq"></a> Operatore&gt;=

Verifica se l'oggetto elenco di inoltro a sinistra dell'operatore è maggiore o uguale all'oggetto elenco di inoltro a destra.

```cpp
bool operator>=(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*A sinistra*\
Oggetto di tipo `forward_list`.

*Ok*\
Oggetto di tipo `forward_list`.

### <a name="return-value"></a>Valore restituito

**true** se l'elenco di inoltro a sinistra dell'operatore è maggiore o uguale all'elenco di inoltro a destra dell'operatore; in caso contrario **false**.

### <a name="remarks"></a>Note

La funzione modello restituisce `!(left < right)`.
