---
title: Oggetti funzione della libreria standard C++
ms.date: 03/15/2019
helpviewer_keywords:
- functors
- C++ Standard Library, functors
- C++ Standard Library, function objects
- function objects
ms.assetid: 85f8a735-2c7b-4f10-9c4d-95c666ec4192
ms.openlocfilehash: ed413b2bcdcda8f65794b10c792b10358564420a
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87215738"
---
# <a name="function-objects-in-the-c-standard-library"></a>Oggetti funzione della libreria standard C++

Un *oggetto funzione*, o *funtore*, è qualsiasi tipo che implementa operator(). Questo operatore è definito *operatore di chiamata* o talvolta *operatore di applicazione*. La libreria standard C++ usa oggetti funzione principalmente come criteri di ordinamento per i contenitori e negli algoritmi.

Gli oggetti funzione offrono due vantaggi principali rispetto a una chiamata di funzione diretta. Il primo consiste nel fatto che un oggetto funzione può contenere lo stato. Il secondo è che un oggetto funzione è un tipo e quindi può essere usato come parametro di modello.

## <a name="creating-a-function-object"></a>Creazione di un oggetto Function

Per creare un oggetto funzione, creare un tipo e implementare operator(), ad esempio:

```cpp
class Functor
{
public:
    int operator()(int a, int b)
    {
        return a < b;
    }
};

int main()
{
    Functor f;
    int a = 5;
    int b = 7;
    int ans = f(a, b);
}
```

L'ultima riga della funzione `main` mostra come chiamare l'oggetto function. Questa chiamata è simile a una chiamata a una funzione, ma in realtà chiama operator () del tipo functor. Questa somiglianza tra la chiamata a un oggetto funzione e una funzione rappresenta il modo in cui è stato coniato il termine oggetto funzione.

## <a name="function-objects-and-containers"></a>Oggetti funzione e contenitori

La libreria standard C++ contiene diversi oggetti funzione nel [\<functional>](../standard-library/functional.md) file di intestazione. Uno degli usi di questi oggetti funzione è come criterio di ordinamento per i contenitori. Ad esempio, il contenitore `set` è dichiarato come segue:

```cpp
template <class Key,
    class Traits=less<Key>,
    class Allocator=allocator<Key>>
class set
```

Il secondo argomento di modello è l'oggetto funzione `less`. Questo oggetto funzione restituisce **`true`** se il primo parametro è minore del secondo parametro. Poiché alcuni contenitori ordinano gli elementi, il contenitore necessita di un modo per confrontare due elementi. Il confronto viene eseguito usando l'oggetto funzione. È possibile definirne i propri criteri di ordinamento per i contenitori creando un oggetto funzione e specificandolo nell'elenco di modelli del contenitore.

## <a name="function-objects-and-algorithms"></a>Oggetti funzione e algoritmi

Un altro uso degli oggetti funzione è negli algoritmi. Ad esempio, l'algoritmo `remove_if` è dichiarato come segue:

```cpp
template <class ForwardIterator, class Predicate>
ForwardIterator remove_if(
    ForwardIterator first,
    ForwardIterator last,
    Predicate pred);
```

L'ultimo argomento a `remove_if` è un oggetto funzione che restituisce un valore booleano (un *predicato*). Se il risultato dell'oggetto funzione è **`true`** , l'elemento viene rimosso dal contenitore a cui accedono gli iteratori `first` e `last` . È possibile usare uno degli oggetti funzione dichiarati nell' [\<functional>](../standard-library/functional.md) intestazione per l'argomento `pred` oppure è possibile crearne di personalizzati.

## <a name="see-also"></a>Vedere anche

[Riferimenti per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
