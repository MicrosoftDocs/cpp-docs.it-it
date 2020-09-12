---
title: Classe default_searcher
ms.date: 08/03/2019
f1_keywords:
- functional/std::default_searcher
helpviewer_keywords:
- std::default_searcher [C++]
ms.openlocfilehash: 307fc6da3b383690e0b65bff2a72f386a37d6711
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90039690"
---
# <a name="default_searcher-class"></a>Classe default_searcher

Un `default_searcher` è un tipo di oggetto funzione per operazioni che cercano una sequenza specificata nel costruttore dell'oggetto. La ricerca viene eseguita all'interno di un'altra sequenza fornita all'operatore di chiamata di funzione dell'oggetto. `default_searcher`Richiama [std:: Search](algorithm-functions.md#search) per eseguire la ricerca.

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

## <a name="members"></a>Members

| Membro | Descrizione |
| - | - |
| **Costruttore** | |
| [default_searcher](#default-searcher-constructor) | Costruisce un'istanza di ricerca. |
| **Operatori** | |
| [operatore ()](#operator-call) | Richiama l'operazione sulla sequenza. |

## <a name="default_searcher-constructor"></a><a name="default-searcher-constructor"></a> Costruttore default_searcher

Costruisce un `default_searcher` oggetto funzione utilizzando la sequenza di ricerca e un predicato di uguaglianza.

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
Predicato di confronto di uguaglianza facoltativo per gli elementi di sequenza. Se non viene specificato un tipo di confronto di uguaglianza, il valore predefinito è `std::equal_to` .

### <a name="remarks"></a>Commenti

Genera qualsiasi eccezione generata dal costruttore di copia dei tipi *BinaryPredicate* o *ForwardIterator* .

Questa classe è una novità di C++ 17. C++ 20 ha creato il costruttore **`constexpr`** .

## <a name="operator"></a><a name="operator-call"></a> operatore ()

Operatore di chiamata dell'operatore di funzione. Cerca nella sequenza di argomenti `[first, last)` la sequenza specificata per il costruttore.

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

*prima*\
Elemento iniziale della sequenza in cui eseguire la ricerca.

*Ultima*\
Fine della sequenza nella quale eseguire la ricerca.

### <a name="remarks"></a>Commenti

Restituisce una coppia di iteratori. L' *iteratore iniziale i è* il risultato effettivo di:

`std::search( first, last, pat_first, pat_last, pred )`.

Il secondo iteratore della coppia è *Last* se *i** è *l'ultimo*. In caso contrario, è il risultato effettivo di:

`std::next( i, std::distance( pat_first, pat_last ))`.

Questa classe è una novità di C++ 17. C++ 20 ha eseguito l'operatore di chiamata **`constexpr`** .

## <a name="see-also"></a>Vedi anche

[\<functional>](functional.md)\
[funzioni per gli algoritmi](algorithm-functions.md)\
[STD:: search](algorithm-functions.md#search)
