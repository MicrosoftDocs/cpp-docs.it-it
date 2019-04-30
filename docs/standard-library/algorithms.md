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
ms.openlocfilehash: a0a1165d731e44568d530e3ed919d73e2a3e8e5e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62411123"
---
# <a name="algorithms"></a>Algoritmi

Gli algoritmi rappresentano una parte fondamentale della libreria standard C++. Gli algoritmi non funzionano con i contenitori stessi bensì con gli iteratori. Di conseguenza, lo stesso algoritmo può essere usato dalla maggior parte dei contenitori della libreria standard C++, se non tutti. Questa sezione illustra le convenzioni e la terminologia degli algoritmi della libreria standard C++.

## <a name="remarks"></a>Note

Le descrizioni delle funzioni di modello dell'algoritmo utilizzano diverse espressioni abbreviate:

- La frase "nell'intervallo \[ *oggetto*, *B*)" indica la sequenza di zero o più valori discreti a partire *oggetto* fino a ma senza includerlo *B* . Un intervallo è valido solo se *B* sia raggiungibile dal *oggetto;* è possibile archiviare *oggetto* in un oggetto *N* (*N*  =  *Un'*), incrementare l'oggetto zero o più volte (+ +*N*), in modo che l'oggetto risulta uguale a *B* dopo un numero finito di incrementi (*N*   ==  *B*).

- La frase "ciascuna *N* compreso nell'intervallo \[ *oggetto*, *B*)" significa che *N* inizia con il valore *un*e viene incrementato zero o più volte fino a quando non è uguale al valore *B*. Il caso *N* == *B* non è compreso nell'intervallo.

- La frase "il valore minimo *N* compreso nell'intervallo \[ *oggetto*, *B*) tale che *X*" significa che la condizione *X* viene determinato per ogni *N* nell'intervallo \[ *oggetto*, *B*) finché la condizione *X*viene soddisfatta.

- La frase "il valore massimo *N* compreso nell'intervallo \[ *oggetto*, *B*) tale che *X* significa che *X* viene determinato per ogni *N* compreso nell'intervallo \[ *oggetto*, *B*). La funzione archivia in *K* una copia di *N* ogni volta che la condizione *X* viene soddisfatta. Se si verifica tale archiviazione, la funzione sostituisce il valore finale della *N*, che equivale a *B*, con il valore di *K*. Per un iteratore ad accesso casuale o bidirezionale, tuttavia, può anche significare che *N* inizia con il valore più alto nell'intervallo e viene decrementato nell'intervallo finché non viene soddisfatta la condizione *X*.

- Espressioni come *X* - *Y*, dove *X* e *Y* possono essere iteratori diversi da quelli ad accesso casuale, vengono considerate nel senso matematico. La funzione non valuta necessariamente operator **-** se deve determinare tale valore. Lo stesso vale anche per le espressioni, ad esempio *X* + *N* e *X* - *N*, dove *N* è un tipo integer.

Diversi algoritmi usano un predicato che esegue un confronto a coppie, ad esempio con `operator==`, per restituire un **bool** risultato. La funzione predicativa `operator==`, o una funzione sostituiva, non deve modificare gli operandi. Deve restituire lo stesso **bool** risultato ogni volta che viene valutata e deve restituire lo stesso risultato se l'operando viene sostituito con una copia degli operandi.

Diversi algoritmi usano un predicato che deve imporre un ordinamento di tipo "strict weak" alle coppie di elementi di una sequenza. Per il predicato *pred*(*X*, *Y*):

- Strict significa che *pred*(*X*, *X*) è false.

- Weak significa che *X* e *Y* hanno un ordinamento equivalente se \! *pred*(*X*, *Y*) & & \! *pred*(*Y*, *X*) (*X* == *Y*non dovrà essere definito).

- Ordinamento significa che *pred*(*X*, *Y*) & & *pred*(*Y*, *Z*) implica *pred*(*X*, *Z*).

Alcuni di questi algoritmi usano in modo implicito il predicato *X* \< *Y*. Altri predicati che in genere soddisfano il "strict Weak" requisito di ordinamento vengono *X* > *Y*, `less`(*X*, *Y*), e `greater`(*X*, *Y*). Si noti, tuttavia, che i predicati come *X* \<= *Y* e *X* >= *Y* non soddisfano questo requisito.

Una sequenza di elementi designati dagli iteratori nell'intervallo \[ *primo*, *ultimo*) è una sequenza ordinata dall'operatore **<** se, ad ogni  *N* nell'intervallo \[0 *ultima* - *prima*) e per ogni *M* nell'intervallo (*N*, *Ultima* - *primo*) il predicato \!(\*(*prima*  +  *M*) < \*(*primo* + *N*)) è true. Si noti che gli elementi vengono ordinati in ordine crescente. La funzione predicativa `operator<`, o una funzione sostituiva, non deve modificare gli operandi. Deve restituire lo stesso **bool** risultato ogni volta che viene valutata e deve restituire lo stesso risultato se l'operando viene sostituito con una copia degli operandi. Inoltre, deve imporre un ordinamento di tipo "strict weak" agli operandi che confronta.

Una sequenza di elementi designati dagli iteratori nell'intervallo \[ `First`, `Last`) è un heap ordinato in base `operator<` se per ogni *N* nell'intervallo \[1, *ultimo*  -  *Primo*) il predicato \!(\*_prima_ < \*(*prima*  +  *N*)) è true. Il primo elemento è il più grande. La struttura interna è altrimenti nota solo alle funzioni di modello [make_heap](../standard-library/algorithm-functions.md#make_heap), [pop_heap](../standard-library/algorithm-functions.md#pop_heap), e [push_heap](../standard-library/algorithm-functions.md#push_heap). Come con una sequenza ordinata, la funzione di predicato `operator<`, o qualsiasi sostitutiva, non deve modificare gli operandi e deve imporre un rigido ordinamento debole agli operandi Confronta. Deve restituire lo stesso **bool** risultato ogni volta che viene valutata e deve restituire lo stesso risultato se l'operando viene sostituito con una copia degli operandi.

Gli algoritmi della libreria standard C++ si trovano nei file di intestazione [\<algorithm>](../standard-library/algorithm.md) e [\<numeric>](../standard-library/numeric.md).

## <a name="see-also"></a>Vedere anche

[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
