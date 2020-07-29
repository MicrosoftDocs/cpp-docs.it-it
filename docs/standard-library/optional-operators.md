---
title: '&lt;operatori facoltativi &gt;'
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
ms.openlocfilehash: c7eca76f71f12e7f7fe0e60c0a4cfe456d54c374
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87224682"
---
# <a name="ltoptionalgt-operators"></a>&lt;operatori facoltativi &gt;

## <a name="operator"></a><a name="op_eq_eq"></a>operatore = =

Verifica se l'oggetto `optional` sul lato sinistro dell'operatore è uguale all'oggetto `optional` sul lato destro.

```cpp
template <class T, class U> constexpr bool operator==(const optional<T>& left, const optional<U>& right);
template <class T> constexpr bool operator==(const optional<T>& left, nullopt_t right) noexcept;
template <class T> constexpr bool operator==(nullopt_t left, const optional<T>& right) noexcept;
template <class T, class U> constexpr bool operator==(const optional<T>&, const U&);
template <class T, class U> constexpr bool operator==(const U&, const optional<T>&);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `optional` , `nullopt_t` o `T` .

*Ok*\
Oggetto di tipo `optional` , `nullopt_t` o `T` .

## <a name="operator"></a><a name="op_neq"></a>operatore! =

Verifica se l'oggetto `optional` sul lato sinistro dell'operatore non è uguale all'oggetto `optional` sul lato destro.

```cpp
template <class T, class U> constexpr bool operator!=(const optional<T>&, const optional<U>&);
template <class T> constexpr bool operator!=(const optional<T>&, nullopt_t) noexcept;
template <class T> constexpr bool operator!=(nullopt_t, const optional<T>&) noexcept;
template <class T, class U> constexpr bool operator!=(const optional<T>&, const U&);
template <class T, class U> constexpr bool operator!=(const U&, const optional<T>&);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `optional` , `nullopt_t` o `T` .

*Ok*\
Oggetto di tipo `optional` , `nullopt_t` o `T` .

### <a name="remarks"></a>Osservazioni

Questa funzione modello restituisce `!(left == right)`.

## <a name="operatorlt"></a><a name="op_lt"></a>operatore&lt;

Verifica se l'oggetto `optional` sul lato sinistro dell'operatore è minore dell'oggetto `optional` sul lato destro.

```cpp
template <class T, class U> constexpr bool operator<(const optional<T>&, const optional<U>&);
template <class T> constexpr bool operator<(const optional<T>&, nullopt_t) noexcept;
template <class T> constexpr bool operator<(nullopt_t, const optional<T>&) noexcept;
template <class T, class U> constexpr bool operator<(const optional<T>&, const U&);
template <class T, class U> constexpr bool operator<(const U&, const optional<T>&);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `optional` , `nullopt_t` o `T` .

*Ok*\
Oggetto di tipo `optional` , `nullopt_t` o `T` .

### <a name="return-value"></a>Valore restituito

**`true`** Se l'elenco sul lato sinistro dell'operatore è minore ma non uguale all'elenco a destra dell'operatore; in caso contrario **`false`** ,.

## <a name="operatorlt"></a><a name="op_lt_eq"></a>operatore&lt;=

Verifica se l'oggetto `optional` sul lato sinistro dell'operatore è minore o uguale all'oggetto `optional` sul lato destro.

```cpp
template <class T, class U> constexpr bool operator<=(const optional<T>&, const optional<U>&);
template <class T> constexpr bool operator<=(const optional<T>&, nullopt_t) noexcept;
template <class T> constexpr bool operator<=(nullopt_t, const optional<T>&) noexcept;
template <class T, class U> constexpr bool operator<=(const optional<T>&, const U&);
template <class T, class U> constexpr bool operator<=(const U&, const optional<T>&);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `optional` , `nullopt_t` o `T` .

*Ok*\
Oggetto di tipo `optional` , `nullopt_t` o `T` .

### <a name="return-value"></a>Valore restituito

**`true`** Se l'elenco sul lato sinistro dell'operatore è minore o uguale all'elenco a destra dell'operatore; in caso contrario **`false`** ,.

### <a name="remarks"></a>Osservazioni

Questa funzione modello restituisce `!(right < left)`.

## <a name="operatorgt"></a><a name="op_gt"></a>operatore&gt;

Verifica se l'oggetto `optional` sul lato sinistro dell'operatore è maggiore dell'oggetto `optional` sul lato destro.

```cpp
template <class T, class U> constexpr bool operator>(const optional<T>&, const optional<U>&);
template <class T> constexpr bool operator>(const optional<T>&, nullopt_t) noexcept;
template <class T> constexpr bool operator>(nullopt_t, const optional<T>&) noexcept;
template <class T, class U> constexpr bool operator>(const optional<T>&, const U&);
template <class T, class U> constexpr bool operator>(const U&, const optional<T>&);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `optional` , `nullopt_t` o `T` .

*Ok*\
Oggetto di tipo `optional` , `nullopt_t` o `T` .

### <a name="return-value"></a>Valore restituito

**`true`** Se l'elenco sul lato sinistro dell'operatore è maggiore dell'elenco a destra dell'operatore; in caso contrario **`false`** ,.

### <a name="remarks"></a>Osservazioni

Questa funzione modello restituisce `right < left`.

## <a name="operatorgt"></a><a name="op_gt_eq"></a>operatore&gt;=

Verifica se l'oggetto `optional` sul lato sinistro dell'operatore è maggiore o uguale all'oggetto `optional` sul lato destro.

```cpp
template <class T, class U> constexpr bool operator>=(const optional<T>&, const optional<U>&);
template <class T> constexpr bool operator>=(const optional<T>&, nullopt_t) noexcept;
template <class T> constexpr bool operator>=(nullopt_t, const optional<T>&) noexcept;
template <class T, class U> constexpr bool operator>=(const optional<T>&, const U&);
template <class T, class U> constexpr bool operator>=(const U&, const optional<T>&);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `optional` , `nullopt_t` o `T` .

*Ok*\
Oggetto di tipo `optional` , `nullopt_t` o `T` .

### <a name="return-value"></a>Valore restituito

**`true`** Se l'oggetto `optional` sul lato sinistro dell'operatore è maggiore o uguale all'oggetto a `optional` destra; in caso contrario, **`false`** .

### <a name="remarks"></a>Osservazioni

La funzione modello restituisce `!(left < right)`.
