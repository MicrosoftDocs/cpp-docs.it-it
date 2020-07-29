---
title: qualsiasi classe
ms.date: 04/04/2019
f1_keywords:
- any/std::any
- any/std::any::emplace
- any/std::any::has_value
- any/std::any::reset
- any/std::any::swap
- any/std::any::type
helpviewer_keywords:
- any/std::any
- any/std::any::emplace
- any/std::any::has_value
- any/std::any::reset
- any/std::any::swap
- any/std::any::type
ms.openlocfilehash: 66e74a7fa7f35aae9ac9e1f3ba7520e8d3f9b3f2
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87203962"
---
# <a name="any-class"></a>qualsiasi classe

Archivia un'istanza di qualsiasi tipo che soddisfa i requisiti del costruttore o non ha alcun valore, che viene chiamato stato della classe qualsiasi oggetto.

L'istanza archiviata è denominata valore contenuto. Due Stati sono gli stessi se entrambi non hanno alcun valore o hanno un valore e i valori contenuti sono uguali.

## <a name="syntax"></a>Sintassi

```cpp
class any
```

## <a name="members"></a>Membri

### <a name="constructors"></a>Costruttori

|||
|-|-|
|[qualsiasi](#any)|Costruisce un oggetto di tipo `any`.|

### <a name="functions"></a>Funzioni

|||
|-|-|
|[emplace](#emplace)|Imposta un valore qualsiasi.|
|[has_value](#has_value)|Restituisce **`true`** se un oggetto ha un valore.|
|[reset](#reset)|Reimposta un valore any.|
|[scambio](#swap)|Scambia due oggetti.|
|[type](#type)|Restituisce un tipo qualsiasi.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operatore =](#op_eq)|Sostituisce any con una copia di un altro oggetto.|

## <a name="any"></a><a name="any"></a>qualsiasi

Costruisce un oggetto di tipo `any`. Include anche un distruttore.

```cpp
constexpr any() noexcept;
any(const any& other);
any(any&& other) noexcept;
template <class T>
    any(T&& value);
template <class T, class... Args>
    explicit any(in_place_type_t<T>, Args&&...);
template <class T, class U, class... Args>
    explicit any(in_place_type_t<T>, initializer_list<U>, Args&&...);

~any();
```

## <a name="emplace"></a><a name="emplace"></a>emplace

Imposta un valore qualsiasi.

```cpp
template <class T, class... Args>
    decay_t<T>& emplace(Args&& ...);
template <class T, class U, class... Args>
    decay_t<T>& emplace(initializer_list<U>, Args&&...);
```

## <a name="has_value"></a><a name="has_value"></a>has_value

Restituisce **`true`** se un oggetto ha un valore.

```cpp
bool has_value() const noexcept;
```

## <a name="operator"></a><a name="op_eq"></a>operatore =

Sostituisce any con una copia di un altro oggetto.

```cpp
any& operator=(const any& right);
any& operator=(any&& right) noexcept;
template <class T>
    any& operator=(T&& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
Qualsiasi oggetto copiato nell'oggetto any.

## <a name="reset"></a><a name="reset"></a>reimpostazione

Reimposta un valore any.

```cpp
void reset() noexcept;
```

## <a name="swap"></a><a name="swap"></a>scambio

Scambia due oggetti.

```cpp
void swap(any& rhs) noexcept;
```

## <a name="type"></a>Tipo di<a name="type"></a>

Restituisce un tipo qualsiasi.

```cpp
const type_info& type() const noexcept;
```
