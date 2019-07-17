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
ms.openlocfilehash: 050276da665ab6ed3eb53d9e65bfea06b88bcbea
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68268753"
---
# <a name="any-class"></a>qualsiasi classe

Archivia un'istanza di qualsiasi tipo che soddisfa i requisiti di costruttore o si ha alcun valore, che viene chiamato lo stato della classe di qualsiasi oggetto.

L'istanza archiviata viene chiamato il valore contenuto. Due stati sono uguali se sia non hanno alcun valore, o avere entrambe un valore e i valori contenuti sono uguali.

## <a name="syntax"></a>Sintassi

```cpp
class any
```

## <a name="members"></a>Members

### <a name="constructors"></a>Costruttori

|||
|-|-|
|[any](#any)|Costruisce un oggetto di tipo `any`.|

### <a name="functions"></a>Funzioni

|||
|-|-|
|[emplace](#emplace)|Imposta un valore qualsiasi.|
|[has_value](#has_value)|Restituisce **true** se uno contiene un valore.|
|[reset](#reset)|Reimposta un qualsiasi.|
|[swap](#swap)|Scambia due oggetti.|
|[type](#type)|Restituisce il tipo di qualsiasi.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operator=](#op_eq)|Sostituisce qualsiasi qualsiasi con una copia di un altro.|

## <a name="any"></a> Qualsiasi

Costruisce un oggetto di tipo `any`. Include inoltre un distruttore.

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

## <a name="emplace"></a> emplace

Imposta un valore qualsiasi.

```cpp
template <class T, class... Args>
    decay_t<T>& emplace(Args&& ...);
template <class T, class U, class... Args>
    decay_t<T>& emplace(initializer_list<U>, Args&&...);
```

## <a name="has_value"></a> has_value

Restituisce **true** se uno contiene un valore.

```cpp
bool has_value() const noexcept;
```

## <a name="op_eq"></a> operator=

Sostituisce qualsiasi qualsiasi con una copia di un altro.

```cpp
any& operator=(const any& right);
any& operator=(any&& right) noexcept;
template <class T>
    any& operator=(T&& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
Eventuali copiate in uno qualsiasi.

## <a name="reset"></a> reimpostare

Reimposta un qualsiasi.

```cpp
void reset() noexcept;
```

## <a name="swap"></a> swap

Scambia due oggetti.

```cpp
void swap(any& rhs) noexcept;
```

## <a name="type"></a> Tipo

Restituisce il tipo di qualsiasi.

```cpp
const type_info& type() const noexcept;
```
