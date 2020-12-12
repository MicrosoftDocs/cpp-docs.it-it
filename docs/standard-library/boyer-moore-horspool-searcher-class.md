---
description: 'Altre informazioni su: boyer_moore_horspool_searcher Class'
title: Classe boyer_moore_horspool_searcher
ms.date: 08/03/2019
f1_keywords:
- functional/std::boyer_moore_horspool_searcher
helpviewer_keywords:
- std::boyer_moore_horspool_searcher [C++]
ms.openlocfilehash: 727af034dbb20bd1a0d09ae7de8f88da16a6ba36
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97325425"
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

| Membro | Descrizione |
| - | - |
| **Costruttore** | |
| [boyer_moore_horspool_searcher](#boyer-moore-horspool-searcher-constructor) | Costruisce un'istanza di ricerca. |
| **Operatori** | |
| [operatore ()](#operator-call) | Richiama l'operazione sulla sequenza. |

## <a name="boyer_moore_horspool_searcher-constructor"></a><a name="boyer-moore-horspool-searcher-constructor"></a> Costruttore boyer_moore_horspool_searcher

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
Predicato di confronto di uguaglianza facoltativo per gli elementi di sequenza. Se non viene specificato un tipo di confronto di uguaglianza, il valore predefinito è `std::equal_to` .

### <a name="remarks"></a>Commenti

Genera qualsiasi eccezione generata dal costruttore di copia dei tipi *BinaryPredicate*, *hash* o *RandomAccessIterator* oppure dall'operatore di chiamata di *BinaryPredicate* o *hash*.

Questa classe è una novità di C++ 17.

## <a name="operator"></a><a name="operator-call"></a> operatore ()

Operatore di chiamata dell'oggetto funzione. Cerca nella sequenza di argomenti `[first, last)` la sequenza specificata per il costruttore.

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

### <a name="remarks"></a>Commenti

Se il criterio di ricerca `[pat_first, pat_last)` è vuoto, restituisce `make_pair(first, first)` . Se il criterio di ricerca non viene trovato, restituisce `make_pair(last, last)` . In caso contrario, restituisce una coppia di iteratori all'inizio e alla fine di una sequenza in `[first, last)` uguale a in `[pat_first, pat_last)` base al predicato predicato. 

Questa classe è una novità di C++ 17.

## <a name="see-also"></a>Vedi anche

[\<functional>](functional.md)\
[funzioni per gli algoritmi](algorithm-functions.md)\
[Classe boyer_moore_searcher](boyer-moore-searcher-class.md)\
[STD:: search](algorithm-functions.md#search)
