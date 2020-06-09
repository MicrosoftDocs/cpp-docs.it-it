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
ms.openlocfilehash: 4b49b3c296d3afcbb26af028dc0b4a885444a897
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84617639"
---
# <a name="algorithms"></a>Algoritmi

Gli algoritmi rappresentano una parte fondamentale della libreria standard C++. Gli algoritmi non funzionano con i contenitori stessi bensì con gli iteratori. Di conseguenza, lo stesso algoritmo può essere usato dalla maggior parte dei contenitori della libreria standard C++, se non tutti. Questa sezione illustra le convenzioni e la terminologia degli algoritmi della libreria standard C++.

## <a name="remarks"></a>Osservazioni

Le descrizioni delle funzioni di modello dell'algoritmo utilizzano diverse espressioni abbreviate:

- La frase "nell'intervallo \[ *a*, *B*)" indica la sequenza di zero o più valori discreti che iniziano con *un* fino a, ma non incluso *B*. Un intervallo è valido solo se *B* è raggiungibile da *un;* è possibile archiviare *un* oggetto in un oggetto *n* (*n*  =  *A*), incrementare l'oggetto zero o più volte (+ +*N*) e fare in modo che l'oggetto risulti uguale a *B* dopo un numero finito di incrementi (*n*  ==  *B*).

- La frase "ogni *N* nell'intervallo \[ *a*, *B*)" significa che *N* inizia con il valore *a* e viene incrementato zero o più volte fino a quando non è uguale al valore *B*. Il caso *N*  ==  *B* non è compreso nell'intervallo.

- La frase "il valore più basso di *n* nell'intervallo \[ *a*, *b*) tale che *x*" significa che la condizione *x* viene determinata per ogni *n* nell'intervallo \[ *a*, *b*) finché non viene soddisfatta la condizione *x* .

- La frase "il valore più alto di *n* nell'intervallo \[ *a*, *b*) tale che *x* indica che *x* è determinato per ogni *n* nell'intervallo \[ *a*, *b*). La funzione archivia in *K* una copia di *N* ogni volta che viene soddisfatta la condizione *X* . Se si verifica un archivio di questo tipo, la funzione sostituisce il valore finale di *N*, che è uguale a *B*, con il valore *K*. Per un iteratore ad accesso casuale o bidirezionale, tuttavia, può anche significare che *N* inizia con il valore più alto nell'intervallo e viene decrementato nell'intervallo finché non viene soddisfatta la condizione *X* .

- Le espressioni come *x*  -  *Y*, dove *x* e *Y* possono essere iteratori diversi da iteratori ad accesso casuale, sono progettate nel senso matematico. La funzione non valuta necessariamente l'operatore **-** se deve determinare tale valore. Lo stesso vale anche per le espressioni come *x*  +  *n* e *x*  -  *n*, dove *N* è un tipo Integer.

Diversi algoritmi usano un predicato che esegue un confronto a coppie, ad esempio con `operator==` , per produrre un risultato **bool** . La funzione predicativa `operator==`, o una funzione sostituiva, non deve modificare gli operandi. Deve restituire lo stesso risultato **bool** ogni volta che viene valutato e deve restituire lo stesso risultato se una copia di uno degli operandi viene sostituita con l'operando.

Diversi algoritmi usano un predicato che deve imporre un ordinamento di tipo "strict weak" alle coppie di elementi di una sequenza. Per il predicato *Predator*(*X*, *Y*):

- Strict significa che *prede*(*x*, *x*) è false.

- Debole significa che *x* e *y* hanno un ordinamento equivalente se \! *prede*(*x*, *y*)  && \! *prede*(*y*, *x*) (*x*  ==  *y* non deve essere definito).

- L'ordinamento indica che *prede*(*x*, *y*) * && prede*(*Y*, *z*) implicano *prede*(*x*, *z*).

Alcuni di questi algoritmi usano in modo implicito il predicato *x* \< *Y*. Other predicates that typically satisfy the strict weak ordering requirement are *X* > *Y*, `less` (*x*, *y*) e `greater` (*x*, *y*). Si noti, tuttavia, che i predicati come *X* \<= *Y* and *X* > =  *Y* non soddisfano questo requisito.

Una sequenza di elementi designati dagli iteratori nell'intervallo \[ *First*, *Last*) è una sequenza ordinata per operatore **<** se, per *ogni N* nell'intervallo \[ 0, *ultimo*  -  *primo*) e per ogni *M* nell'intervallo (*N*, *Last*  -  *First*) il predicato \! ( \* (*prima*  +  *M*) < \* (*primo*  +  *N*)) è true. Si noti che gli elementi vengono ordinati in ordine crescente. La funzione predicato `operator<` o qualsiasi sostituzione per esso non deve modificare nessuno degli operandi. Deve restituire lo stesso risultato **bool** ogni volta che viene valutato e deve restituire lo stesso risultato se una copia di uno degli operandi viene sostituita con l'operando. Inoltre, deve imporre un ordinamento di tipo "strict weak" agli operandi che confronta.

Una sequenza di elementi designati dagli iteratori nell'intervallo \[ `First` , `Last` ) è un heap ordinato in base a `operator<` , per ogni *N* nell'intervallo \[ 1, *ultimo*  -  *primo*) il predicato \! ( \* _primo_  <  \* (*primo*  +  *N*)) è true. Il primo elemento è il più grande. La struttura interna è altrimenti nota solo per le funzioni modello [make_heap](algorithm-functions.md#make_heap), [pop_heap](algorithm-functions.md#pop_heap)e [push_heap](algorithm-functions.md#push_heap). Come con una sequenza ordinata, la funzione di predicato `operator<` , o qualsiasi sostituzione, non deve modificare gli operandi e deve imporre un ordinamento debole rigoroso sugli operandi da confrontare. Deve restituire lo stesso risultato **bool** ogni volta che viene valutato e deve restituire lo stesso risultato se una copia di uno degli operandi viene sostituita con l'operando.

Gli algoritmi della libreria standard C++ si trovano nei [\<algorithm>](algorithm.md) file di [\<numeric>](numeric.md) intestazione e.

## <a name="see-also"></a>Vedere anche

[Riferimenti per la libreria standard C++](cpp-standard-library-reference.md)\
[Thread safety nella libreria standard C++](thread-safety-in-the-cpp-standard-library.md)
