---
title: Classe boyer_moore_horspool_searcher
ms.date: 08/03/2019
f1_keywords:
- functional/std::boyer_moore_horspool_searcher
helpviewer_keywords:
- std::boyer_moore_horspool_searcher [C++]
ms.openlocfilehash: c7d24fee4a47fc588b00e527594682f1c4aadf76
ms.sourcegitcommit: 16c0392fc8d96e814c3a40b0c5346d7389aeb525
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/12/2019
ms.locfileid: "68957166"
---
# <a name="boyer_moore_horspool_searcher-class"></a>Classe boyer_moore_horspool_searcher

La `boyer_moore_horspool_searcher` classe è un tipo di oggetto funzione che usa l'algoritmo Boyer-Moore-Horspool per cercare una sequenza specificata nel costruttore dell'oggetto. La ricerca viene eseguita all'interno di un'altra sequenza fornita all'operatore di chiamata di funzione dell'oggetto. Questa classe viene passata come parametro a uno degli overload di [std:: Search](algorithm-functions.md#search).

## <a name="syntax"></a>Sintassi

```cpp
template <
    class RandomAccessIterator,
    class Hash = hash<typename iterator_traits<RandomAccessIterator>::value_type>,
    class BinaryPredicate = equal_to<>>
class boyer_moore_horspool_searcher
{
    boyer_moore_horspool_searcher(
        RandomAccessIterator pat_first,
        RandomAccessIterator pat_last,
        Hash hf = Hash(),
        BinaryPredicate pred = BinaryPredicate());

    template <class RandomAccessIterator2>
    pair<RandomAccessIterator2, RandomAccessIterator2> operator()(
        RandomAccessIterator2 first,
        RandomAccessIterator2 last) const;
};
```

## <a name="members"></a>Members

| | |
| - | - |
| **Costruttore** | |
| [boyer_moore_horspool_searcher](#boyer-moore-horspool-searcher-constructor) | |
| **Operatori** | |
| [operator()](#operator-call) | |

## <a name="boyer-moore-horspool-searcher-constructor"></a>Costruttore boyer_moore_horspool_searcher

Costruisce un `boyer_moore_horspool_searcher` oggetto funzione utilizzando la sequenza per cercare, un oggetto funzione hash e un predicato di uguaglianza.

```cpp
boyer_moore_horspool_searcher(
    RandomAccessIterator pat_first,
    RandomAccessIterator pat_last,
    Hash hf = Hash(),
    BinaryPredicate pred = BinaryPredicate());
```

### <a name="parameters"></a>Parametri

*pat_first*\
Elemento iniziale della sequenza da cercare.

*pat_last*\
Fine della sequenza da cercare.

*HF*\
Oggetto chiamabile, usato per eseguire l'hashing degli elementi della sequenza.

*Pred*\
Predicato di confronto di uguaglianza facoltativo per gli elementi di sequenza. Se non viene specificato un tipo di confronto di uguaglianza, `std::equal_to`il valore predefinito è.

### <a name="remarks"></a>Note

Genera qualsiasi eccezione generata dal costruttore di copia dei tipi *BinaryPredicate*, *hash*o *RandomAccessIterator* oppure dall'operatore di chiamata di *BinaryPredicate* o *hash*.

Questa classe è una novità di C++ 17.

## <a name="operator-call"></a> operator()

Operatore di chiamata dell'oggetto funzione. Cerca nella sequenza `[first, last)` di argomenti la sequenza specificata per il costruttore.

```cpp
template <class ForwardIterator2>   // C++17
pair<RandomAccessIterator2, RandomAccessIterator2> operator()(
    RandomAccessIterator2 first,
    RandomAccessIterator2 last) const;
```

### <a name="parameters"></a>Parametri

*prima*\
Elemento iniziale della sequenza in cui eseguire la ricerca.

*Ultima*\
Fine della sequenza nella quale eseguire la ricerca.

### <a name="remarks"></a>Note

Se il criterio `[pat_first, pat_last)` di ricerca è vuoto, `make_pair(first, first)`restituisce. Se il criterio di ricerca non viene trovato `make_pair(last, last)`, restituisce. In caso contrario, restituisce una coppia di iteratori all'inizio e alla fine di una `[first, last)` sequenza in uguale a `[pat_first, pat_last)` in base al predicato predicato.

Questa classe è una novità di C++ 17.

## <a name="see-also"></a>Vedere anche

[\<functional>](functional.md)\
[funzioni per gli algoritmi](algorithm-functions.md)\
[Classe boyer_moore_searcher](boyer-moore-searcher-class.md)\
[STD:: search](algorithm-functions.md#search)
