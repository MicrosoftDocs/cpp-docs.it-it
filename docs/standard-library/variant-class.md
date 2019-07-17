---
title: variante di classe
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
ms.openlocfilehash: 9bfdf644374a0b825fd0ca02bf4164a766cb42a3
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68269303"
---
# <a name="variant-class"></a>variante di classe

Qualsiasi istanza di tipo variant in un determinato momento contiene sia un valore di uno dei relativi tipi alternativi, o non contiene alcun valore.

## <a name="syntax"></a>Sintassi

```cpp
template <class... Types>
    class variant
```

## <a name="members"></a>Members

### <a name="constructors"></a>Costruttori

|||
|-|-|
|[Variant](#variant)|Costruisce un oggetto di tipo `variant`.|

### <a name="functions"></a>Funzioni

|||
|-|-|
|[emplace](#emplace)|Crea un nuovo valore indipendente.|
|[index](#index)|Restituisce l'indice di un valore indipendente.|
|[swap](#swap)||
|[valueless_by_exception](#emplace)|Restituisce **false** se la variante contiene un valore.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operator=](#op_eq)|Sostituisce la variante con una copia di un'altra variante.|

## <a name="emplace"></a> emplace

Crea un nuovo valore indipendente.

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

## <a name="index"></a> Indice

Restituisce l'indice di un valore indipendente.

```cpp
constexpr size_t index() const noexcept;
```

## <a name="variant"></a> Variant

Costruisce un oggetto di tipo `variant`. Include inoltre un distruttore.

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

## <a name="op_eq"></a> operator=

Sostituisce la variante con una copia di un'altra variante.

```cpp
variant& operator=(const variant&);
variant& operator=(variant&&) noexcept(see below);
template <class T>
    variant& operator=(T&&) noexcept(see below);
```

## <a name="swap"></a> swap

```cpp
void swap(variant&) noexcept(see below);
```

## <a name="valueless"></a> valueless_by_exception

Restituisce **false** se la variante contiene un valore.

```cpp
constexpr bool valueless_by_exception() const noexcept;
```
