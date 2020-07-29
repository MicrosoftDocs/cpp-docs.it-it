---
title: classi is_invocable, is_invocable_r, is_nothrow_invocable, is_nothrow_invocable_r
ms.date: 02/21/2019
f1_keywords:
- type_traits/std::is_invocable
- type_traits/std::is_invocable_r
- type_traits/std::is_nothrow_invocable
- type_traits/std::is_nothrow_invocable_r
helpviewer_keywords:
- is_invocable class
- is_invocable
- is_invocable_r class
- is_invocable_r
- is_nothrow_invocable class
- is_nothrow_invocable
- is_nothrow_invocable_r class
- is_nothrow_invocable_r
ms.openlocfilehash: 47801eff0ea0c41c7b69dfb7a1aa5190a43f1b75
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87233106"
---
# <a name="is_invocable-is_invocable_r-is_nothrow_invocable-is_nothrow_invocable_r-classes"></a>classi is_invocable, is_invocable_r, is_nothrow_invocable, is_nothrow_invocable_r

Questi modelli determinano se un tipo può essere richiamato con i tipi di argomento specificati. `is_invocable_r``is_nothrow_invocable_r`inoltre, determinare se il risultato della chiamata è convertibile in un tipo specifico. `is_nothrow_invocable`e `is_nothrow_invocable_r` determinano inoltre se la chiamata è nota come non generare eccezioni. Aggiunto in C++ 17.

## <a name="syntax"></a>Sintassi

```cpp
template <class Callable, class... Args>
struct is_invocable;

template <class Convertible, class Callable, class... Args>
struct is_invocable_r;

template <class Callable, class... Args>
struct is_nothrow_invocable;

template <class Convertible, class Callable, class... Args>
struct is_nothrow_invocable_r;

// Helper templates
template <class Callable, class... Args>
inline constexpr bool is_invocable_v =
    std::is_invocable<Callable, Args...>::value;

template <class Convertible, class Callable, class... Args>
inline constexpr bool is_invocable_r_v =
    std::is_invocable_r<Convertible, Callable, Args...>::value;

template <class Callable, class... Args>
inline constexpr bool is_nothrow_invocable_v =
    std::is_nothrow_invocable<Callable, Args...>::value;

template <class Convertible, class Callable, class... Args>
inline constexpr bool is_nothrow_invocable_r_v =
    std::is_nothrow_invocable_r<Convertible, Callable, Args...>::value;
```

### <a name="parameters"></a>Parametri

*Callable*\
Tipo chiamabile su cui eseguire una query.

*Args*\
Tipi di argomento su cui eseguire una query.

*Convertibile*\
Il tipo del risultato di *Callable* deve essere convertibile in.

## <a name="remarks"></a>Osservazioni

Il `is_invocable` predicato di tipo include true se il *chiamabile* del tipo chiamabile può essere richiamato usando gli argomenti *args* in un contesto non valutato.

Il `is_invocable_r` predicato di tipo include true se il *chiamabile* del tipo chiamabile può essere richiamato usando gli argomenti *args* in un contesto non valutato per produrre un tipo di risultato convertibile in *convertibile*.

Il `is_nothrow_invocable` predicato di tipo include true se il *chiamabile* del tipo chiamabile *Args* può essere richiamato usando gli argomenti arguments in un contesto non valutato e tale chiamata è nota come not per generare un'eccezione.

Il `is_nothrow_invocable_r` predicato di tipo include true se il *chiamabile* del tipo chiamabile *Args* può essere richiamato usando gli argomenti arguments in un contesto non valutato per produrre un tipo di risultato convertibile in *convertibile*e che tale chiamata non genera un'eccezione.

Ognuno dei tipi *convertibili*, *richiamabili*e i tipi negli *argomenti* del pacchetto di parametri deve essere un tipo completo, una matrice di limiti sconosciuti o un qualificatore CV **`void`** . In caso contrario, il comportamento del predicato non è definito.

## <a name="example"></a>Esempio

```cpp
// std__type_traits__is_invocable.cpp
// compile using: cl /EHsc /std:c++17 std__type_traits__is_invocable.cpp
#include <type_traits>

auto test1(int) noexcept -> int (*)()
{
    return nullptr;
}

auto test2(int) -> int (*)()
{
    return nullptr;
}

int main()
{
    static_assert( std::is_invocable<decltype(test1), short>::value );

    static_assert( std::is_invocable_r<int(*)(), decltype(test1), int>::value );
    static_assert( std::is_invocable_r<long(*)(), decltype(test1), int>::value ); // fails

    static_assert( std::is_nothrow_invocable<decltype(test1), int>::value );
    static_assert( std::is_nothrow_invocable<decltype(test2), int>::value ); // fails

    static_assert( std::is_nothrow_invocable_r<int(*)(), decltype(test1), int>::value );
    static_assert( std::is_nothrow_invocable_r<int(*)(), decltype(test2), int>::value ); // fails
}
```

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)\
[invoke](functional-functions.md#invoke)
