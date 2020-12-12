---
description: 'Altre informazioni su: classe Variant'
title: Classe Variant
ms.date: 04/04/2019
f1_keywords:
- variant/std::variant
- variant/std::variant::emplace
- variant/std::variant::index
- variant/std::variant::valueless_by_exception
helpviewer_keywords:
- variant/std::variant
- variant/std::variant::emplace
- variant/std::variant::index
- variant/std::variant::valueless_by_exception
ms.openlocfilehash: 0fc2887def147b458e63bc316f211e62a5eba879
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97305104"
---
# <a name="variant-class"></a>Classe Variant

Qualsiasi istanza di Variant in un determinato momento può contenere un valore di uno dei tipi alternativi o non include alcun valore.

## <a name="syntax"></a>Sintassi

```cpp
template <class... Types>
    class variant
```

## <a name="members"></a>Members

### <a name="constructors"></a>Costruttori

|Nome|Description|
|-|-|
|[variant](#variant)|Costruisce un oggetto di tipo `variant`.|

### <a name="functions"></a>Funzioni

|Nome|Description|
|-|-|
|[emplace](#emplace)|Crea un nuovo valore contenuto.|
|[index](#index)|Restituisce l'indice di un valore contenuto.|
|[scambio](#swap)||
|[valueless_by_exception](#emplace)|Restituisce **`false`** se il VARIANT include un valore.|

### <a name="operators"></a>Operatori

|Nome|Description|
|-|-|
|[operatore =](#op_eq)|Sostituisce la variante con una copia di un'altra variante.|

## <a name="emplace"></a><a name="emplace"></a> emplace

Crea un nuovo valore contenuto.

```cpp
template <class T, class... Args>
    T& emplace(Args&&...);
template <class T, class U, class... Args>
    T& emplace(initializer_list<U>, Args&&...);
template <size_t I, class... Args>
    variant_alternative_t<I, variant<Types...>>& emplace(Args&&...);
template <size_t I, class U, class... Args>
    variant_alternative_t<I, variant<Types...>>& emplace(initializer_list<U>, Args&&...);
```

## <a name="index"></a><a name="index"></a> Indice

Restituisce l'indice di un valore contenuto.

```cpp
constexpr size_t index() const noexcept;
```

## <a name="variant"></a><a name="variant"></a> variante

Costruisce un oggetto di tipo `variant`. Include anche un distruttore.

```cpp
constexpr variant() noexcept(see below);
variant(const variant&);
variant(variant&&) noexcept(see below);
template <class T>
    constexpr variant(T&&) noexcept(see below);
template <class T, class... Args>
    constexpr explicit variant(in_place_type_t<T>, Args&&...);
template <class T, class U, class... Args>
    constexpr explicit variant(in_place_type_t<T>, initializer_list<U>, Args&&...);
template <size_t I, class... Args>
    constexpr explicit variant(in_place_index_t<I>, Args&&...);
template <size_t I, class U, class... Args>
    constexpr explicit variant(in_place_index_t<I>, initializer_list<U>, Args&&...);

template <class Alloc>
    variant(allocator_arg_t, const Al&);
template <class Alloc>
    variant(allocator_arg_t, const Al&, const variant&);
template <class Alloc>
    variant(allocator_arg_t, const Al&, variant&&);
template <class Alloc, class T>
    variant(allocator_arg_t, const Al&, T&&);
template <class Alloc, class T, class... Args>
    variant(allocator_arg_t, const Al&, in_place_type_t<T>, Args&&...);
template <class Alloc, class T, class U, class... Args>
    variant(allocator_arg_t, const Al&, in_place_type_t<T>, initializer_list<U>, Args&&...);
template <class Alloc, size_t I, class... Args>
    variant(allocator_arg_t, const Al&, in_place_index_t<I>, Args&&...);
template <class Alloc, size_t I, class U, class... Args>
    variant(allocator_arg_t, const Al&, in_place_index_t<I>, initializer_list<U>, Args&&...);

~variant();
```

### <a name="parameters"></a>Parametri

*Al*\
Classe Allocator da usare con questo oggetto.

## <a name="operator"></a><a name="op_eq"></a> operatore =

Sostituisce la variante con una copia di un'altra variante.

```cpp
variant& operator=(const variant&);
variant& operator=(variant&&) noexcept(see below);
template <class T>
    variant& operator=(T&&) noexcept(see below);
```

## <a name="swap"></a><a name="swap"></a> scambio

```cpp
void swap(variant&) noexcept(see below);
```

## <a name="valueless_by_exception"></a><a name="valueless"></a> valueless_by_exception

Restituisce **`false`** se il VARIANT include un valore.

```cpp
constexpr bool valueless_by_exception() const noexcept;
```
