---
title: Classe facoltativa
ms.date: 11/04/2016
f1_keywords:
- optional/std::optional
- optional/std::optional::has_value
- optional/std::optional::reset
- optional/std::optional::value
- optional/std::optional::value_or
helpviewer_keywords:
- optional/std::optional
- optional/std::optional::has_value
- optional/std::optional::reset
- optional/std::optional::value
- optional/std::optional::value_or
ms.openlocfilehash: f664df6493a7ee20361d49531a930aeb810d3d2a
ms.sourcegitcommit: 16c0392fc8d96e814c3a40b0c5346d7389aeb525
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/12/2019
ms.locfileid: "68957152"
---
# <a name="optional-class"></a>Classe facoltativa

La classe `optional<T>` modello descrive un oggetto che può o non può contenere un valore di tipo `T`, noto come *valore contenuto*.

Quando un'istanza di `optional<T>` contiene un valore, il valore contenuto viene allocato all'interno dell'archiviazione `optional` dell'oggetto, in un'area opportunamente allineata per il tipo `T`. Quando un `optional<T>` oggetto viene convertito `bool`in, il risultato `true` è se l'oggetto `false`contiene un valore; in caso contrario, è.

Il tipo `T` di oggetto contenuto non deve essere [in_place_t](in-place-t-struct.md) o [nullopt_t](nullopt-t-structure.md). `T`deve essere *distruttibile*, ovvero il relativo distruttore deve recuperare tutte le risorse di proprietà e potrebbe non generare eccezioni.

La `optional` classe è una novità di c++ 17.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
class optional
{
    using value_type = T;
};

template<class T> optional(T) -> optional<T>;
```

## <a name="members"></a>Members

### <a name="constructors"></a>Costruttori

|||
|-|-|
| **Costruttori e distruttori** | |
|[optional](#optional) | Costruisce un oggetto di tipo `optional`. |
|[~ facoltativo](#optional-destructor) | Elimina definitivamente un oggetto di tipo `optional`. |
| **Assegnazione** | |
| [operator=](#op_eq) | Sostituisce con `optional` una copia di un altro `optional`oggetto. |
| [emplace](#op_eq) | Inizializza il valore contenuto con gli argomenti specificati. |
| **Swap** | |
| [swap](#swap) | Scambia il valore contenuto o lo stato vuoto con un altro `optional`. |
| **Osservatori** | |
| [has_value](#has_value) | Restituisce un valore `optional` che indica se un oggetto contiene un valore. |
| [value](#value) | Restituisce il valore contenuto. |
| [value_or](#value_or) | Restituisce il valore contenuto oppure un'alternativa se non è presente alcun valore. |
| [operator->](#op_as) | Fa riferimento al valore contenuto di `optional` un oggetto. |
| [operator*](#op_mem) | Fa riferimento al valore contenuto di `optional` un oggetto. |
| [operator bool](#op_bool) | Restituisce un valore `optional` che indica se un oggetto contiene un valore. |
| **Modificatori** | |
| [reset](#reset) | Reimposta l'oggetto `optional` eliminando qualsiasi valore contenuto. |

## <a name="has_value"></a>has_value

```cpp
constexpr bool has_value() const noexcept;
```

## <a name="optional"></a>Costruttore facoltativo

Costruisce un oggetto di tipo `optional`.

```cpp
constexpr optional() noexcept;
constexpr optional(nullopt_t nullopt) noexcept;
constexpr optional(const optional& rhs);
constexpr optional(optional&& rhs) noexcept;

template <class... Args>
constexpr explicit optional(in_place_t, Args&&... args);

template <class U, class... Args>
constexpr explicit optional(in_place_t, initializer_list<U> i_list, Args&&... args);

template <class U = T>
explicit constexpr optional(U&& rhs);

template <class U>
explicit optional(const optional<U>& rhs);

template <class U>
explicit optional(optional<U>&& rhs);
```

### <a name="parameters"></a>Parametri

*RHS*\
Oggetto `optional` da copiare o spostare costruire il valore contenuto da.

*i_list*\
Elenco di inizializzatori da cui creare il valore contenuto.

*args*\
Elenco di argomenti da cui creare il valore contenuto.

### <a name="remarks"></a>Note

`constexpr optional() noexcept;`
`constexpr optional(nullopt_t nullopt) noexcept;`Questi costruttori costruiscono un `optional` oggetto che non contiene un valore.

`constexpr optional(const optional& rhs);`Il costruttore di copia Inizializza il valore contenuto del valore contenuto dell'argomento. Viene definita come **eliminata** , a `is_copy_constructible_v<T>` meno che non sia true ed è semplice `is_trivially_copy_constructible_v<T>` se è true.

`constexpr optional(optional&& rhs) noexcept;`Il costruttore di spostamento Inizializza il valore contenuto mediante lo spostamento dal valore contenuto dell'argomento. Non partecipa alla risoluzione dell'overload a meno `is_move_constructible_v<T>` che non sia true ed è semplice se `is_trivially_move_constructible_v<T>` è true.

`template <class... Args> constexpr explicit optional(in_place_t, Args&&... args);`Direct Inizializza il valore contenuto come se si utilizzasse `std::forward<Args>(args)`gli argomenti. Questo costruttore è `constexpr` se il `T` costruttore utilizzato è `constexpr`. Non partecipa alla risoluzione dell'overload a meno `is_constructible_v<T, Args...>` che non sia true.

`template <class U, class... Args> constexpr explicit optional(in_place_t, initializer_list<U> i_list, Args&&... args);`Direct Inizializza il valore contenuto come se si utilizzasse `i_list, std::forward<Args>(args)`gli argomenti. Questo costruttore è `constexpr` se il `T` costruttore utilizzato è `constexpr`. Non partecipa alla risoluzione dell'overload a meno `is_constructible_v<T, initializer_list<U>&, Args&&...>` che non sia true.

`template <class U = T> explicit constexpr optional(U&& rhs);`Direct Inizializza il valore contenuto come se si `std::forward<U>(v)`utilizzasse. Questo costruttore è `constexpr` se il `T` costruttore utilizzato è `constexpr`. Non partecipa alla risoluzione dell'overload a meno `is_constructible_v<T, U&&>` che non sia true `is_same_v<remove_cvref_t<U>, in_place_t>` e `is_same_v<remove_cvref_t<U>, optional>` e siano false.

`template <class U> explicit optional(const optional<U>& rhs);`Se *RHS* contiene un valore, Direct Inizializza il valore contenuto del valore contenuto dell'argomento. Non partecipa alla risoluzione dell'overload a meno `is_constructible_v<T, const U&>` che non sia true `is_constructible_v<T, optional<U>&>`, `is_constructible_v<T, optional<U>&&>`mentre `is_constructible_v<T, const optional<U>&>`, `is_constructible_v<T, const optional<U>&&>`, `is_convertible_v<optional<U>&, T>`, `is_convertible_v<optional<U>&&, T>`, `is_convertible_v<const optional<U>&, T>`,, `is_convertible_v<const optional<U>&&, T>` e sono tutti false.

`template <class U> explicit optional(optional<U>&& rhs);`Se *RHS* contiene un valore, Direct Inizializza il valore contenuto come se si `std::move(*rhs)`utilizzasse. Non partecipa alla risoluzione dell'overload a meno `is_constructible_v<T, U&&>` che non sia true `is_constructible_v<T, optional<U>&>`, `is_constructible_v<T, optional<U>&&>`mentre `is_constructible_v<T, const optional<U>&>`, `is_constructible_v<T, const optional<U>&&>`, `is_convertible_v<optional<U>&, T>`, `is_convertible_v<optional<U>&&, T>`, `is_convertible_v<const optional<U>&, T>`,, `is_convertible_v<const optional<U>&&, T>` e sono tutti false.

## <a name="optional-destructor"></a>~ distruttore facoltativo

Elimina qualsiasi valore contenuto non facilmente distruttibile, se presente, richiamando il relativo distruttore.

```cpp
~optional();
```

### <a name="remarks"></a>Note

Se `T` è facilmente distruttibile `optional<T>` , può essere facilmente distruttibile.

## <a name="op_eq"></a> operator=

Sostituisce il valore contenuto di un `optional` oggetto con una copia o sposta da `optional` un altro valore contenuto.

```cpp
optional& operator=(nullopt_t) noexcept;
optional& operator=(const optional& rhs);
optional& operator=(optional&&) noexcept( /* see below */ );

template <class U = T>
    optional& operator=(U&&);

template <class U>
optional& operator=(const optional<U>&);

template <class U>
    optional& operator=(optional<U>&&);

template <class... Args>
T& emplace(Args&&...);

template <class U, class... Args>
T& emplace(initializer_list<U>, Args&&...);
```

## <a name="op_as"></a>operatore->

Dereferenzia il valore contenuto di un `optional` oggetto.

```cpp
constexpr const T* operator->() const;
constexpr T* operator->();
```

## <a name="op_mem"></a>operatore

Dereferenzia il valore contenuto di un `optional` oggetto.

```cpp
constexpr const T& operator*() const&;
constexpr T& operator*() &;
constexpr T&& operator*() &&;
constexpr const T&& operator*() const&&;
```

## <a name="op_bool"></a>operatore bool

Indica se l' `optional` oggetto ha un valore contenuto.

```cpp
constexpr explicit operator bool() const noexcept;
```

## <a name="reset"></a>reimpostazione

In realtà, chiama il distruttore dell'oggetto contenuto, se presente, e lo imposta su uno stato non inizializzato.

```cpp
void reset() noexcept;
```

## <a name="swap"></a> swap

```cpp
template<class T>
void swap(optional<T>&, optional<T>&) noexcept;
```

## <a name="value"></a>valore

```cpp
constexpr const T& value() const&;
constexpr T& value() &;
constexpr T&& value() &&;
constexpr const T&& value() const&&;
```

## <a name="value_or"></a>value_or

```cpp
template <class U>
    constexpr T value_or(U&&) const&;
template <class U>
    constexpr T value_or(U&&) &&;
```

## <a name="see-also"></a>Vedere anche

[\<> facoltativo](optional.md)
