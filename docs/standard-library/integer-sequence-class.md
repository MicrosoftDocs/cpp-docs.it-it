---
title: Classe integer_sequence
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::index_sequence
- type_traits/std::make_index_sequence
- type_traits/std::integer_sequence
- type_traits/std::make_integer_sequence
- type_traits/std::index_sequence_for
helpviewer_keywords:
- std::index_sequence
- std::make_index_sequence
- std::integer_sequence
- std::make_integer_sequence
- std::index_sequence_for
ms.assetid: 2cfdddee-819d-478e-bb78-c8a9c2696803
ms.openlocfilehash: ca923933ac7a401f6a3ef14f821ceb04b844797b
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68451011"
---
# <a name="integersequence-class"></a>Classe integer_sequence

Rappresenta una sequenza di Integer. Può essere usata per dedurre ed espandere pacchetti di parametri nei tipi variadic come std::tuple\<T...> che vengono passati come argomenti a una funzione.

## <a name="syntax"></a>Sintassi

```cpp
template <class T, T... Vals>
struct integer_sequence
```

### <a name="parameters"></a>Parametri

*T*\
Tipo di valori. Deve essere un tipo integrale: bool, char, char16_t, char32_t, wchar_t o tipi Signed Integer o Unsigned Integer.

*Vals*\
Un pacchetto di parametri non di tipo che rappresenta una sequenza di valori di tipo integrale T.

## <a name="members"></a>Members

|||
|-|-|
|`static size_t size() noexcept`|Numero di elementi nella sequenza.|
|`typedef T value_type`|Tipo di ciascun elemento nella sequenza. Deve essere un tipo integrale.|

## <a name="remarks"></a>Note

Un pacchetto di parametri che viene passato direttamente a una funzione può essere decompresso senza supporti di librerie speciali. Quando un pacchetto di parametro fa parte di un tipo che viene passato a una funzione, è sono necessari gli indici per accedere agli elementi, il modo più semplice per decomprimerlo consiste nell'usare `integer_sequence` e i rispettivi alias del tipo `make_integer_sequence`, `index_sequence`, `make_index_sequence` e `index_sequence_for`.

## <a name="example"></a>Esempio

L'esempio seguente è basato sulla proposta originale [N3658](http://open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3658.html). Mostra come usare una `integer_sequence` per creare una `std::tuple` da una `std::array<T,N>` e come usare una `integer_sequence` per ottenere i membri della tupla.

Nella funzione `a2t`, una `index_sequence` è un alias di `integer_sequence` basato sul tipo integrale `size_t`. `make_index_sequence` è un alias che in fase di compilazione crea una `index_sequence` in base zero con lo stesso numero di elementi della matrice che viene passato dal chiamante. `a2t` passa la `index_sequence` per valore a `a2t_`, dove l'espressione `a[I]...` decomprime `I`, quindi gli elementi vengono inseriti nella funzione `make_tuple` che li usa come singoli argomenti. Ad esempio, se la sequenza contiene tre elementi, la funzione `make_tuple` viene chiamata make_tuple(a[0], a[1], a[2]). Gli elementi di matrice stessi ovviamente possono essere di qualsiasi tipo.

La funzione Apply accetta un oggetto [std:: Tuple](../standard-library/tuple-class.md)e produce `integer_sequence` un oggetto utilizzando `tuple_size` la classe helper. Si noti che [std::d ecay_t](../standard-library/decay-class.md) è necessario perché [tuple_size](../standard-library/tuple-size-class-tuple.md) non funziona con i tipi di riferimento. La funzione `apply_` decomprime i membri della tupla, inoltrandoli come argomenti separati a una chiamata di funzione. In questo esempio la funzione è una semplice espressione lambda che stampa i valori.

```cpp
#include <stddef.h>
#include <iostream>
#include <tuple>
#include <utility>
#include <array>
#include <string>

using namespace std;

// Create a tuple from the array and the index_sequence
template<typename Array, size_t... I>
auto a2t_(const Array& a, index_sequence<I...>)
{
    return make_tuple(a[I]...);
}

// Create an index sequence for the array, and pass it to the
// implementation function a2t_
template<typename T, size_t N>
auto a2t(const array<T, N>& a)
{
    return a2t_(a, make_index_sequence<N>());
}

// Call function F with the tuple members as separate arguments.
template<typename F, typename Tuple = tuple<T...>, size_t... I>
decltype(auto) apply_(F&& f, Tuple&& args, index_sequence<I...>)
{
    return forward<F>(f)(get<I>(forward<Tuple>(args))...);
}

// Create an index_sequence for the tuple, and pass it with the
// function object and the tuple to the implementation function apply_
template<typename F, typename Tuple = tuple<T...>>
decltype(auto) apply(F&& f, Tuple&& args)
{
    using Indices = make_index_sequence<tuple_size<decay_t<Tuple>>::value >;
    return apply_(forward<F>(f), forward<Tuple>(args), Indices());
}

int main()
{
    const array<string, 3> arr { "Hello", "from", "C++14" };

    //Create a tuple given a array
    auto tup = a2t(arr);

    // Extract the tuple elements
    apply([](const string& a, const string& b, const string& c) {cout << a << " " << b << " " << c << endl; }, tup);

    char c;
    cin >> c;
}
```

Per creare un oggetto `index_sequence` per un pacchetto di parametri, usare `index_sequence_for`\<T...>, ovvero un alias di `make_index_sequence`\<sizeof...(T)>.

## <a name="requirements"></a>Requisiti

Intestazione: \<type_traits\>

Spazio dei nomi: std

## <a name="see-also"></a>Vedere anche

[Ellissi e modelli variadic](../cpp/ellipses-and-variadic-templates.md)
