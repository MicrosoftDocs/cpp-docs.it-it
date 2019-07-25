---
title: Algoritmi
ms.date: 10/18/2018
helpviewer_keywords:
- libraries [C++], C++ algorithm conventions
- algorithms [C++], C++
- C++ Standard Library, algorithms
- algorithm template function C++ library conventions
- conventions [C++], C++ algorithm
ms.assetid: dec9b373-7d5c-46cc-b7d2-21a938ecd0a6
ms.openlocfilehash: d363dc3f06222121ac5efc79b30516ebd55ff539
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68456493"
---
# <a name="algorithms"></a>Algoritmi

Gli algoritmi rappresentano una parte fondamentale della libreria standard C++. Gli algoritmi non funzionano con i contenitori stessi bensì con gli iteratori. Di conseguenza, lo stesso algoritmo può essere usato dalla maggior parte dei contenitori della libreria standard C++, se non tutti. Questa sezione illustra le convenzioni e la terminologia degli algoritmi della libreria standard C++.

## <a name="remarks"></a>Note

Le descrizioni delle funzioni di modello dell'algoritmo utilizzano diverse espressioni abbreviate:

- La frase " \[nell'intervallo *a*, *B*)" indica la sequenza di zero o più valori discreti che iniziano con *un* fino a, ma non incluso *B*. Un intervallo è valido solo se *B* è raggiungibile da *un;* è possibile archiviare *un* oggetto in un oggetto *n* (*n* = *A*), incrementare l'oggetto zero o più volte (+ +*N*) e fare in modo che l'oggetto sia uguale a *B* Dopo un numero finito di incrementi (*N* == *B*).

- La frase "ogni *N* nell'intervallo \[ *a*, *B*)" significa che *N* inizia con il valore *a* e viene incrementato zero o più volte fino a quando non è uguale al valore *B*. Il caso *N* == *B* non è compreso nell'intervallo.

- La frase "il valore più basso di *n* nell'intervallo \[ *a*, *b*) tale che *x*" significa che la condizione *x* viene determinata per ogni *n* nell'intervallo \[ *a*, *b*) finché il viene soddisfatta la condizione *X* .

- La frase "il valore più alto di *n* nell'intervallo \[ *a*, *b*) tale che *x* indica che *x* è determinato per ogni *n* nell'intervallo \[ *a*, *b*). La funzione archivia in *K* una copia di *N* ogni volta che viene soddisfatta la condizione *X* . Se si verifica un archivio di questo tipo, la funzione sostituisce il valore finale di *N*, che è uguale a *B*, con il valore *K*. Per un iteratore ad accesso casuale o bidirezionale, tuttavia, può anche significare che *N* inizia con il valore più alto nell'intervallo e viene decrementato nell'intervallo finché non viene soddisfatta la condizione *X*.

- Espressioni come *X* - *Y*, dove *X* e *Y* possono essere iteratori diversi da quelli ad accesso casuale, vengono considerate nel senso matematico. La funzione non valuta necessariamente l'operatore **-** se deve determinare tale valore. Lo stesso vale anche per le espressioni, ad esempio *X* + *N* e *X* - *N*, dove *N* è un tipo integer.

Diversi algoritmi usano un predicato che esegue un confronto a coppie, ad esempio con `operator==`, per produrre un risultato **bool** . La funzione predicativa `operator==`, o una funzione sostituiva, non deve modificare gli operandi. Deve restituire lo stesso risultato **bool** ogni volta che viene valutato e deve restituire lo stesso risultato se una copia di uno degli operandi viene sostituita con l'operando.

Diversi algoritmi usano un predicato che deve imporre un ordinamento di tipo "strict weak" alle coppie di elementi di una sequenza. Per il predicato *Predator*(*X*, *Y*):

- Strict significa che *prede*(*x*, *x*) è false.

- Debole significa che *x* e *y* hanno un ordinamento equivalente se \! *prede*(*x*, *y*) & & \! *prede*(*Y*, *x*) (*x* == *Y* non deve essere definito).

- *L'ordinamento*significa che il predicato (*x*, *y*) & & *prede*(*Y*, *z*) implica predazione (*x*, *z*).

Alcuni di questi algoritmi usano in modo implicito il predicato *X* \< *Y*. Altri predicati che in genere soddisfano il requisito di ordinamento debole rigoroso sono *x* > *Y*, `less`(*x*, *y*) e `greater`(*x*, *y*). Si noti, tuttavia, che i predicati come *X* \<= *Y* e *X* >= *Y* non soddisfano questo requisito.

Una sequenza di elementi designati dagli iteratori nell'intervallo \[ *First*, *Last*) è una sequenza ordinata per **<** operatore se, per ogni *N* nell'intervallo \[0, *ultimo* - *primo* ) e per ogni *M* nell'intervallo (*N*, *Last* - *First*) il predicato\* \!((*First* + *M*) \*< (First + *N*)) è true. Si noti che gli elementi vengono ordinati in ordine crescente. La funzione predicativa `operator<`, o una funzione sostituiva, non deve modificare gli operandi. Deve restituire lo stesso risultato **bool** ogni volta che viene valutato e deve restituire lo stesso risultato se una copia di uno degli operandi viene sostituita con l'operando. Inoltre, deve imporre un ordinamento di tipo "strict weak" agli operandi che confronta.

Una sequenza di elementi designati dagli iteratori nell'intervallo \[ `First`, `Last`) è un heap ordinato in `operator<` base a, per ogni *N* nell'intervallo \[1, *ultimo* - *primo*) il \!predicato\*(_First_ < (\*FirstN + )) è true. Il primo elemento è il più grande. La struttura interna è altrimenti nota solo alle funzioni di modello [make_heap](../standard-library/algorithm-functions.md#make_heap), [pop_heap](../standard-library/algorithm-functions.md#pop_heap)e [push_heap](../standard-library/algorithm-functions.md#push_heap). Come con una sequenza ordinata, la funzione `operator<`di predicato, o qualsiasi sostituzione, non deve modificare gli operandi e deve imporre un ordinamento debole rigoroso sugli operandi da confrontare. Deve restituire lo stesso risultato **bool** ogni volta che viene valutato e deve restituire lo stesso risultato se una copia di uno degli operandi viene sostituita con l'operando.

Gli algoritmi della libreria standard C++ si trovano nei file di intestazione [\<algorithm>](../standard-library/algorithm.md) e [\<numeric>](../standard-library/numeric.md).

## <a name="see-also"></a>Vedere anche

[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)\
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
