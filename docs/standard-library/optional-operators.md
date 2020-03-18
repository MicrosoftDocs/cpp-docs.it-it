---
title: operatori&gt; facoltativi &lt;
ms.date: 11/04/2016
f1_keywords:
- optional/std::operator!=
- optional/std::operator==
- optional/std::operatoroperator&gt;
- optional/std::operatoroperator&gt=;
- optional/std::operatoroperator&lt;
- optional/std::operatoroperator&lt;=
ms.assetid: 57492e09-3836-4dbc-9ae5-78ecf506c190
helpviewer_keywords:
- std::operator!= (optional)
- std::operator== (optional)
- std::operatoroperator&gt; (optional)
- std::operatoroperator&gt=; (optional)
- std::operatoroperator&lt; (optional)
- std::operatoroperator&lt;= (optional)
ms.openlocfilehash: c5d0de435180054b186400384fc0583df5b03246
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79419693"
---
# <a name="ltoptionalgt-operators"></a>operatori&gt; facoltativi &lt;

## <a name="op_eq_eq"></a>operatore = =

Verifica se l'oggetto `optional` sul lato sinistro dell'operatore è uguale all'oggetto `optional` sul lato destro.

```cpp
template <class T, class U> constexpr bool operator==(const optional<T>& left, const optional<U>& right);
template <class T> constexpr bool operator==(const optional<T>& left, nullopt_t right) noexcept;
template <class T> constexpr bool operator==(nullopt_t left, const optional<T>& right) noexcept;
template <class T, class U> constexpr bool operator==(const optional<T>&, const U&);
template <class T, class U> constexpr bool operator==(const U&, const optional<T>&);
```

### <a name="parameters"></a>Parametri

\ a *sinistra*
Oggetto di tipo `optional`, `nullopt_t`o `T`.

\ a *destra*
Oggetto di tipo `optional`, `nullopt_t`o `T`.

## <a name="op_neq"></a>operatore! =

Verifica se l'oggetto `optional` sul lato sinistro dell'operatore non è uguale all'oggetto `optional` sul lato destro.

```cpp
template <class T, class U> constexpr bool operator!=(const optional<T>&, const optional<U>&);
template <class T> constexpr bool operator!=(const optional<T>&, nullopt_t) noexcept;
template <class T> constexpr bool operator!=(nullopt_t, const optional<T>&) noexcept;
template <class T, class U> constexpr bool operator!=(const optional<T>&, const U&);
template <class T, class U> constexpr bool operator!=(const U&, const optional<T>&);
```

### <a name="parameters"></a>Parametri

\ a *sinistra*
Oggetto di tipo `optional`, `nullopt_t`o `T`.

\ a *destra*
Oggetto di tipo `optional`, `nullopt_t`o `T`.

### <a name="remarks"></a>Osservazioni

Questa funzione modello restituisce `!(left == right)`.

## <a name="op_lt">Operatore </a>&lt;

Verifica se l'oggetto `optional` sul lato sinistro dell'operatore è minore dell'oggetto `optional` sul lato destro.

```cpp
template <class T, class U> constexpr bool operator<(const optional<T>&, const optional<U>&);
template <class T> constexpr bool operator<(const optional<T>&, nullopt_t) noexcept;
template <class T> constexpr bool operator<(nullopt_t, const optional<T>&) noexcept;
template <class T, class U> constexpr bool operator<(const optional<T>&, const U&);
template <class T, class U> constexpr bool operator<(const U&, const optional<T>&);
```

### <a name="parameters"></a>Parametri

\ a *sinistra*
Oggetto di tipo `optional`, `nullopt_t`o `T`.

\ a *destra*
Oggetto di tipo `optional`, `nullopt_t`o `T`.

### <a name="return-value"></a>Valore restituito

**true** se l'elenco a sinistra dell'operatore è minore ma non uguale all'elenco a destra; in caso contrario, **false**.

## <a name="op_lt_eq"></a>  operator&lt;=

Verifica se l'oggetto `optional` sul lato sinistro dell'operatore è minore o uguale all'oggetto `optional` sul lato destro.

```cpp
template <class T, class U> constexpr bool operator<=(const optional<T>&, const optional<U>&);
template <class T> constexpr bool operator<=(const optional<T>&, nullopt_t) noexcept;
template <class T> constexpr bool operator<=(nullopt_t, const optional<T>&) noexcept;
template <class T, class U> constexpr bool operator<=(const optional<T>&, const U&);
template <class T, class U> constexpr bool operator<=(const U&, const optional<T>&);
```

### <a name="parameters"></a>Parametri

\ a *sinistra*
Oggetto di tipo `optional`, `nullopt_t`o `T`.

\ a *destra*
Oggetto di tipo `optional`, `nullopt_t`o `T`.

### <a name="return-value"></a>Valore restituito

**true** se l'elenco a sinistra dell'operatore è minore o uguale all'elenco a destra; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

Questa funzione modello restituisce `!(right < left)`.

## <a name="op_gt">Operatore </a>&gt;

Verifica se l'oggetto `optional` sul lato sinistro dell'operatore è maggiore dell'oggetto `optional` sul lato destro.

```cpp
template <class T, class U> constexpr bool operator>(const optional<T>&, const optional<U>&);
template <class T> constexpr bool operator>(const optional<T>&, nullopt_t) noexcept;
template <class T> constexpr bool operator>(nullopt_t, const optional<T>&) noexcept;
template <class T, class U> constexpr bool operator>(const optional<T>&, const U&);
template <class T, class U> constexpr bool operator>(const U&, const optional<T>&);
```

### <a name="parameters"></a>Parametri

\ a *sinistra*
Oggetto di tipo `optional`, `nullopt_t`o `T`.

\ a *destra*
Oggetto di tipo `optional`, `nullopt_t`o `T`.

### <a name="return-value"></a>Valore restituito

**true** se l'elenco a sinistra dell'operatore è maggiore dell'elenco a destra; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

Questa funzione modello restituisce `right < left`.

## <a name="op_gt_eq"></a>operatore&gt;=

Verifica se l'oggetto `optional` sul lato sinistro dell'operatore è maggiore o uguale all'oggetto `optional` sul lato destro.

```cpp
template <class T, class U> constexpr bool operator>=(const optional<T>&, const optional<U>&);
template <class T> constexpr bool operator>=(const optional<T>&, nullopt_t) noexcept;
template <class T> constexpr bool operator>=(nullopt_t, const optional<T>&) noexcept;
template <class T, class U> constexpr bool operator>=(const optional<T>&, const U&);
template <class T, class U> constexpr bool operator>=(const U&, const optional<T>&);
```

### <a name="parameters"></a>Parametri

\ a *sinistra*
Oggetto di tipo `optional`, `nullopt_t`o `T`.

\ a *destra*
Oggetto di tipo `optional`, `nullopt_t`o `T`.

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto `optional` a sinistra dell'operatore è maggiore o uguale all'oggetto `optional` a destra; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

La funzione modello restituisce `!(left < right)`.
