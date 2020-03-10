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
ms.openlocfilehash: 1ddfb56c7ff68ec10c7bb56af3495e4042acb83c
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78874756"
---
# <a name="ltforward_listgt-operators"></a>Operatori &lt;forward_list&gt;

## <a name="op_eq_eq"></a>operatore = =

Verifica se l'oggetto elenco di inoltro a sinistra dell'operatore è uguale all'oggetto elenco di inoltro a destra.

```cpp
bool operator==(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

\ a *sinistra*
Oggetto di tipo `forward_list`.

\ a *destra*
Oggetto di tipo `forward_list`.

### <a name="remarks"></a>Note

Questa funzione di modello consente di eseguire l'overload di `operator==` per confrontare due oggetti della classe modello `forward_list`. La funzione restituisce `distance(left.begin(), end()) == distance(right.begin(),right.end()) && equal(left. begin(),left. end(),right.begin())`.

## <a name="op_neq"></a>operatore! =

Verifica se l'oggetto elenco di inoltro a sinistra dell'operatore non è uguale all'oggetto elenco di inoltro a destra.

```cpp
bool operator!=(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

\ a *sinistra*
Oggetto di tipo `forward_list`.

\ a *destra*
Oggetto di tipo `forward_list`.

### <a name="return-value"></a>Valore restituito

**true** se gli elenchi non sono uguali; in caso contrario, **false**.

### <a name="remarks"></a>Note

Questa funzione modello restituisce `!(left == right)`.

## <a name="op_lt">Operatore </a>&lt;

Verifica se l'oggetto elenco di inoltro a sinistra dell'operatore è minore dell'oggetto elenco di inoltro a destra.

```cpp
bool operator<(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

\ a *sinistra*
Oggetto di tipo `forward_list`.

\ a *destra*
Oggetto di tipo `forward_list`.

### <a name="return-value"></a>Valore restituito

**true** se l'elenco a sinistra dell'operatore è minore ma non uguale all'elenco a destra; in caso contrario, **false**.

### <a name="remarks"></a>Note

Questa funzione di modello consente di eseguire l'overload di `operator<` per confrontare due oggetti della classe modello `forward_list`. La funzione restituisce `lexicographical_compare(lhs. begin(), lhs. end(), rhs.begin(), rhs.end())`.

## <a name="op_lt_eq"></a>operatore&lt;=

Verifica se l'oggetto elenco di inoltro a sinistra dell'operatore è minore o uguale all'oggetto elenco di inoltro a destra.

```cpp
bool operator<=(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

\ a *sinistra*
Oggetto di tipo `forward_list`.

\ a *destra*
Oggetto di tipo `forward_list`.

### <a name="return-value"></a>Valore restituito

**true** se l'elenco a sinistra dell'operatore è minore o uguale all'elenco a destra; in caso contrario, **false**.

### <a name="remarks"></a>Note

Questa funzione modello restituisce `!(right < left)`.

## <a name="op_gt">Operatore </a>&gt;

Verifica se l'oggetto elenco di inoltro a sinistra dell'operatore è maggiore dell'oggetto elenco di inoltro a destra.

```cpp
bool operator>(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

\ a *sinistra*
Oggetto di tipo `forward_list`.

\ a *destra*
Oggetto di tipo `forward_list`.

### <a name="return-value"></a>Valore restituito

**true** se l'elenco a sinistra dell'operatore è maggiore dell'elenco a destra; in caso contrario, **false**.

### <a name="remarks"></a>Note

Questa funzione modello restituisce `right < left`.

## <a name="op_gt_eq"></a>operatore&gt;=

Verifica se l'oggetto elenco di inoltro a sinistra dell'operatore è maggiore o uguale all'oggetto elenco di inoltro a destra.

```cpp
bool operator>=(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

\ a *sinistra*
Oggetto di tipo `forward_list`.

\ a *destra*
Oggetto di tipo `forward_list`.

### <a name="return-value"></a>Valore restituito

**true** se l'elenco di inoltri a sinistra dell'operatore è maggiore o uguale all'elenco di avanzamento sul lato destro dell'operatore; in caso contrario, **false**.

### <a name="remarks"></a>Note

La funzione modello restituisce `!(left < right)`.
