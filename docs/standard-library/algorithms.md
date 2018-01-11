---
title: Algoritmi | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- libraries [C++], C++ algorithm conventions
- algorithms [C++], C++
- C++ Standard Library, algorithms
- algorithm template function C++ library conventions
- conventions [C++], C++ algorithm
ms.assetid: dec9b373-7d5c-46cc-b7d2-21a938ecd0a6
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6608b7499c18f1b740875c403e9cb8d55736c30d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="algorithms"></a>Algoritmi
Gli algoritmi rappresentano una parte fondamentale della libreria standard C++. Gli algoritmi non funzionano con i contenitori stessi bensì con gli iteratori. Di conseguenza, lo stesso algoritmo può essere usato dalla maggior parte dei contenitori della libreria standard C++, se non tutti. Questa sezione illustra le convenzioni e la terminologia degli algoritmi della libreria standard C++.  
  
## <a name="remarks"></a>Note  
 Le descrizioni delle funzioni di modello dell'algoritmo utilizzano diverse espressioni abbreviate:  
  
-   L'espressione "nell'intervallo [*A*, *B*)" indica la sequenza di zero o più valori discreti a partire da *A* fino a *B* escluso. Un intervallo è valido solo se *B* è raggiungibile da *A;* è possibile archiviare *A* in un oggetto *N* (*N* = *A*), incrementare l'oggetto zero o più volte (++*N*) e fare in modo che il confronto di oggetti sia uguale a *B* dopo un numero finito di incrementi (N == B*).*  
  
-   L'espressione "ogni *N* nell'intervallo [*A*, *B*)" significa che *N* inizia con il valore *A* e viene incrementato zero o più volte fino a quando non è uguale al valore *B*. Il caso *N* == *B* non è compreso nell'intervallo.  
  
-   L'espressione "il valore più basso di *N* nell'intervallo [*A*, *B*) tale che *X*" significa che la condizione *X* viene determinata per ogni *N* nell'intervallo [*A*, *B*) finché non viene soddisfatta la condizione *X*.  
  
-   L'espressione "il valore più alto di *N* nell'intervallo [*A*, *B*) tale che *X*" significa che *X* viene determinato per ogni *N* nell'intervallo [*A*, *B*). La funzione archivia in `K` una copia di *N* ogni volta che viene soddisfatta la condizione *X*. Se si verifica tale archiviazione, la funzione sostituisce il valore finale di *N*, che equivale a *B*, con il valore di `K`. Per un iteratore ad accesso casuale o bidirezionale, tuttavia, può anche significare che *N* inizia con il valore più alto nell'intervallo e viene decrementato nell'intervallo finché non viene soddisfatta la condizione *X*.  
  
-   Espressioni come *X* - *Y*, dove *X* e *Y* possono essere iteratori diversi da quelli ad accesso casuale, vengono considerate nel senso matematico. La funzione non restituisce necessariamente operator**-** se deve determinare il valore. Lo stesso vale anche per le espressioni, ad esempio *X* + *N* e *X* - *N*, dove *N* è un tipo integer.  
  
 Diversi algoritmi usano un predicato che esegue un confronto a coppie, ad esempio con `operator==`, per restituire un risultato `bool`. La funzione predicativa `operator==`, o una funzione sostituiva, non deve modificare gli operandi. Deve restituire lo stesso risultato `bool` ogni volta che viene valutata e deve restituire lo stesso risultato se l'operando viene sostituito con una copia di uno degli operandi.  
  
 Diversi algoritmi usano un predicato che deve imporre un ordinamento di tipo "strict weak" alle coppie di elementi di una sequenza. Per il predicato `pr`(*X*, *Y*):  
  
-   Strict significa che `pr`(*X*, *X*) è false.  
  
-   Weak significa che *X* e *Y* hanno un ordinamento equivalente se !`pr`(*X*, *Y*) && !`pr`(*Y*, *X*) (*X* == *Y* non deve essere definito).  
  
-   Ordinamento significa che `pr`(*X*, *Y*) && `pr`(*Y*, Z) implica `pr`(*X*, Z).  
  
 Alcuni di questi algoritmi usano in modo implicito il predicato *X* \< *Y*. Altri predicati che in genere soddisfano il requisito di ordinamento di tipo "strict weak" sono *X* > *Y*, **less**(*X*, *Y*) e `greater`(*X*, *Y*). Si noti, tuttavia, che i predicati come *X* \<= *Y* e *X* >= *Y* non soddisfano questo requisito.  
  
 Una sequenza di elementi designati dagli iteratori nell'intervallo [`First`, `Last`) è una sequenza ordinata in base a operator**<** se per ogni *N* nell'intervallo [0, `Last` - `First`) e per ogni *M* nell'intervallo (N, `Last` - `First`) il predicato !(\*(`First` + *M*) < \*(*First* + *N*)) è true. Si noti che gli elementi vengono ordinati in ordine crescente. La funzione predicato **operator<** o una funzione sostitutiva non deve modificare gli operandi. Deve restituire lo stesso risultato `bool` ogni volta che viene valutata e deve restituire lo stesso risultato se l'operando viene sostituito con una copia di uno degli operandi. Inoltre, deve imporre un ordinamento di tipo "strict weak" agli operandi che confronta.  
  
 Una sequenza di elementi designati dagli iteratori nell'intervallo [`First`, `Last`) è un heap ordinato in base a **operator<** se per ogni *N* nell'intervallo [1, `Last` - `First`) il predicato !(\*`First` < \*(`First` + *N*)) è true. Il primo elemento è il più grande. La struttura interna è altrimenti nota solo alle funzioni di modello [make_heap](http://msdn.microsoft.com/Library/b09f795c-f368-4aa8-b57e-61ee6100ddc2), [pop_heap]--brokenlink--(../Topic/not%20found:c10b0c65-410c-4c83-abf8-8b7f61bba8d0.md#pop_heap) e [push_heap]-brokenlink--(../Topic/not%20found:c10b0c65-410c-4c83-abf8-8b7f61bba8d0.md#push_heap). Come con una sequenza ordinata, la funzione predicato **operator<**, o una funzione sostitutiva, non deve modificare gli operandi e deve imporre un ordinamento di tipo "strict weak" agli operandi che confronta. Deve restituire lo stesso risultato `bool` ogni volta che viene valutata e deve restituire lo stesso risultato se l'operando viene sostituito con una copia di uno degli operandi.  
  
 Gli algoritmi della libreria standard C++ si trovano nei file di intestazione [\<algorithm>](../standard-library/algorithm.md) e [\<numeric>](../standard-library/numeric.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)   
 [Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

