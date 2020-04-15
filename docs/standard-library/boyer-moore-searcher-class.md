---
title: boyer_moore_searcher classe
ms.date: 08/03/2019
f1_keywords:
- functional/std::boyer_moore_searcher
helpviewer_keywords:
- std::boyer_moore_searcher [C++]
ms.openlocfilehash: 54e5c4b7c9fe27d6df32f56d57eb1207fa09332c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366762"
---
# <a name="boyer_moore_searcher-class"></a>boyer_moore_searcher classe

La `boyer_moore_searcher` classe è un tipo di oggetto funzione che utilizza l'algoritmo Boyer-Moore per cercare una sequenza specificata nel costruttore dell'oggetto. La ricerca viene eseguita all'interno di un'altra sequenza fornita all'operatore di chiamata di funzione dell'oggetto. Questa classe viene passata come parametro a uno degli overload di [std::search](algorithm-functions.md#search).

## <a name="syntax"></a>Sintassi

```cpp
template <
    class RandomAccessIterator1,
    class Hash = hash<typename iterator_traits<RandomAccessIterator1>::value_type>,
    class BinaryPredicate = equal_to<>>
class boyer_moore_searcher
{
    boyer_moore_searcher(
        RandomAccessIterator1 pat_first,
        RandomAccessIterator1 pat_last,
        Hash hf = Hash(),
        BinaryPredicate pred = BinaryPredicate());

    template <class RandomAccessIterator2>
    pair<RandomAccessIterator2, RandomAccessIterator2> operator()(
        RandomAccessIterator2 first,
        RandomAccessIterator2 last) const;
};
```

## <a name="members"></a>Membri

| | |
| - | - |
| **Costruttore** | |
|[boyer_moore_searcher](#boyer-moore-searcher-constructor)||
| **Operatori** | |
| [operator()](#operator-call) | |

## <a name="boyer_moore_searcher-constructor"></a><a name="boyer-moore-searcher-constructor"></a>boyer_moore_searcher costruttore

Costruisce un `boyer_moore_searcher` oggetto funzione utilizzando la sequenza da cercare, un oggetto funzione hash e un predicato di uguaglianza.

```cpp
boyer_moore_searcher(
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

*Hf*\
Oggetto richiamabile, utilizzato per eseguire l'hashing degli elementi della sequenza.

*Pred*\
Predicato di confronto di uguaglianza facoltativo per gli elementi della sequenza. Se non viene specificato un tipo di `std::equal_to`confronto di uguaglianza, il valore predefinito è .

### <a name="remarks"></a>Osservazioni

Genera qualsiasi eccezione generata dal costruttore di copia dei tipi *BinaryPredicate*, *Hash*o *RandomAccessIterator* oppure dall'operatore di chiamata di *BinaryPredicate* o *Hash*.

Questa classe è nuova in C.

## <a name="operator"></a><a name="operator-call"></a>operator()

Operatore di chiamata dell'oggetto funzione. Cerca all'interno `[first, last)` della sequenza di argomenti la sequenza specificata per il costruttore.

```cpp
template <class ForwardIterator2>
pair<RandomAccessIterator2, RandomAccessIterator2> operator()(
    RandomAccessIterator2 first,
    RandomAccessIterator2 last) const;
```

### <a name="parameters"></a>Parametri

*Prima*\
Elemento iniziale della sequenza in cui eseguire la ricerca.

*Ultima*\
Fine della sequenza in cui eseguire la ricerca.

### <a name="remarks"></a>Osservazioni

Se il `[pat_first, pat_last)` criterio di `make_pair(first, first)`ricerca è vuoto, restituisce . Se il criterio di ricerca `make_pair(last, last)`non viene trovato, restituisce . In caso contrario, restituisce una coppia di `[first, last)` iteratori all'inizio e alla fine di una sequenza in che è uguale a `[pat_first, pat_last)` in base al predicato *pred*.

Questa classe è nuova in C.

## <a name="see-also"></a>Vedere anche

[\<>funzionale](functional.md)\
[funzioni dell'algoritmo](algorithm-functions.md)\
[classe boyer_moore_horspool_searcher](boyer-moore-horspool-searcher-class.md)\
[std::ricerca](algorithm-functions.md#search)
