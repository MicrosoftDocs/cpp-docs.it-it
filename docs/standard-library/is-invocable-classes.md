---
title: is_invocable, is_invocable_r, is_nothrow_invocable, classi is_nothrow_invocable_r
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
ms.openlocfilehash: bb5e75a897029ded2e00e491d93d2df41a3e115b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62336231"
---
# <a name="isinvocable-isinvocabler-isnothrowinvocable-isnothrowinvocabler-classes"></a>is_invocable, is_invocable_r, is_nothrow_invocable, classi is_nothrow_invocable_r

Questi modelli di determinano se un tipo può essere richiamato con tipi di argomenti specificati. `is_invocable_r` e `is_nothrow_invocable_r` inoltre determinare se il risultato della chiamata è convertibile in un tipo specifico. `is_nothrow_invocable` e `is_nothrow_invocable_r` inoltre determinare se la chiamata è nota per non generare eccezioni. Aggiunta di c++17.

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

*richiamabili*<br/>
Tipo chiamabile su cui eseguire una query.

*Args*<br/>
I tipi di argomento per eseguire una query.

*Supportare la conversione implicita*<br/>
Il tipo di risultato del *Callable* deve essere convertibile in.

## <a name="remarks"></a>Note

Il `is_invocable` predicato di tipo contiene true se il tipo chiamabile *Callable* può essere richiamato usando gli argomenti *Args* in un contesto non valutato.

Il `is_invocable_r` predicato di tipo contiene true se il tipo chiamabile *Callable* può essere richiamato usando gli argomenti *Args* in un contesto non valutato per produrre un tipo convertibile risultato in  *Supportare la conversione implicita*.

Il `is_nothrow_invocable` predicato di tipo contiene true se il tipo chiamabile *Callable* può essere richiamato usando gli argomenti *Args* in un contesto non valutato e che una chiamata di questo tipo è nota per non generare un'eccezione.

Il `is_nothrow_invocable_r` predicato di tipo contiene true se il tipo chiamabile *Callable* può essere richiamato usando gli argomenti *Args* in un contesto non valutato per produrre un tipo convertibile risultato in  *Supportare la conversione implicita*, e che sia noto tale chiamata genera un'eccezione.

Ognuno dei tipi *convertibile*, *Callable*e i tipi nel pacchetto di parametri *Args* deve essere un tipo completo, una matrice di valori associati sconosciuti o una possibilmentequalificatocv**void**. In caso contrario, il comportamento del predicato è definito.

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

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
[invoke](functional-functions.md#invoke)<br/>
