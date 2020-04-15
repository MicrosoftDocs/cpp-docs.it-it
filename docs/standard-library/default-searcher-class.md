---
title: default_searcher classe
ms.date: 08/03/2019
f1_keywords:
- functional/std::default_searcher
helpviewer_keywords:
- std::default_searcher [C++]
ms.openlocfilehash: 2c8b93b83b271f787c993f789e1a68f84a60f016
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368930"
---
# <a name="default_searcher-class"></a>default_searcher classe

A `default_searcher` è un tipo di oggetto funzione per le operazioni che cercano una sequenza specificata nel costruttore dell'oggetto. La ricerca viene eseguita all'interno di un'altra sequenza fornita all'operatore di chiamata di funzione dell'oggetto. Il `default_searcher` richiama [std::search](algorithm-functions.md#search) per eseguire la ricerca.

## <a name="syntax"></a>Sintassi

```cpp
template <class ForwardIterator, class BinaryPredicate = equal_to<>>
class default_searcher
{
    default_searcher(
        ForwardIterator pat_first,
        ForwardIterator pat_last,
        BinaryPredicate pred = BinaryPredicate());

    template <class ForwardIterator2>
    pair<ForwardIterator2, ForwardIterator2> operator()(
        ForwardIterator2 first,
        ForwardIterator2 last) const;
};
```

## <a name="members"></a>Membri

| | |
| - | - |
| **Costruttore** | |
| [default_searcher](#default-searcher-constructor) | |
| **Operatori** | |
| [operator()](#operator-call) | |

## <a name="default_searcher-constructor"></a><a name="default-searcher-constructor"></a>costruttore default_searcher

Costruisce un `default_searcher` oggetto funzione utilizzando la sequenza per cercare e un predicato di uguaglianza.

```cpp
default_searcher(                   // C++17
    ForwardIterator pat_first,
    ForwardIterator pat_last,
    BinaryPredicate pred = BinaryPredicate());

constexpr default_searcher(         // C++20
    ForwardIterator pat_first,
    ForwardIterator pat_last,
    BinaryPredicate pred = BinaryPredicate());
```

### <a name="parameters"></a>Parametri

*pat_first*\
Elemento iniziale della sequenza da cercare.

*pat_last*\
Fine della sequenza da cercare.

*Pred*\
Predicato di confronto di uguaglianza facoltativo per gli elementi della sequenza. Se non viene specificato un tipo di `std::equal_to`confronto di uguaglianza, il valore predefinito è .

### <a name="remarks"></a>Osservazioni

Genera qualsiasi eccezione generata dal costruttore di copia dei tipi *BinaryPredicate* o *ForwardIterator.*

Questa classe è nuova in C. Il costruttore `constexpr`è stato fatto da C.20.

## <a name="operator"></a><a name="operator-call"></a>operator()

Operatore di chiamata dell'operatore di funzione. Cerca all'interno `[first, last)` della sequenza di argomenti la sequenza specificata per il costruttore.

```cpp
template <class ForwardIterator2>   // C++17
pair<ForwardIterator2, ForwardIterator2> operator()(
    ForwardIterator2 first,
    ForwardIterator2 last) const;

template <class ForwardIterator2>   // C++20
constexpr pair<ForwardIterator2, ForwardIterator2> operator()(
    ForwardIterator2 first,
    ForwardIterator2 last) const;
```

### <a name="parameters"></a>Parametri

*Prima*\
Elemento iniziale della sequenza in cui eseguire la ricerca.

*Ultima*\
Fine della sequenza in cui eseguire la ricerca.

### <a name="remarks"></a>Osservazioni

Restituisce una coppia di iteratori. L'iteratore iniziale *i* è il risultato effettivo di:

`std::search( first, last, pat_first, pat_last, pred )`.

Il secondo iteratore della coppia è *l'ultimo* se *i*è *l'ultimo*. In caso contrario, è il risultato effettivo di:

`std::next( i, std::distance( pat_first, pat_last ))`.

Questa classe è nuova in C. L'operatore `constexpr`di chiamata è stato effettuato da C. 20 .

## <a name="see-also"></a>Vedere anche

[\<>funzionale](functional.md)\
[funzioni dell'algoritmo](algorithm-functions.md)\
[std::ricerca](algorithm-functions.md#search)
