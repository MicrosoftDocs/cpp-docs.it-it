---
title: "Algoritmi | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "convenzioni della libreria C++ per le funzioni modello di algoritmo"
  - "algoritmi [C++], C++"
  - "convenzioni [C++], algoritmo di C++"
  - "librerie [C++], convenzioni di algoritmi di C++"
  - "libreria C++ standard, algoritmi"
ms.assetid: dec9b373-7d5c-46cc-b7d2-21a938ecd0a6
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Algoritmi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli algoritmi rappresentano una parte fondamentale della libreria di modelli standard.  Gli algoritmi non funzionano con i contenitori stessi bensì con gli iteratori.  Di conseguenza, lo stesso algoritmo può essere usato dalla maggior parte dei contenitori STL, se non tutti.  Questa sezione illustra le convenzioni e la terminologia degli algoritmi STL.  
  
## Note  
 Le descrizioni delle funzioni di modello dell'algoritmo utilizzano diverse espressioni abbreviate:  
  
-   L'espressione "nell'intervallo \[*A*, *B*\)" indica la sequenza di zero o più valori discreti a partire da *A* fino a *B* escluso.  Un intervallo è valido solo se *B* è raggiungibile da *A;* è possibile archiviare *A* in un oggetto *N* \(*N* \= *A*\), incrementare l'oggetto zero o più volte \(\+ \+*N*\) e avere il confronto tra gli oggetti uguale a *B* dopo un numero finito di incrementi \(N \=\= B*\).*  
  
-   L'espressione "ogni *N* nell'intervallo \[*A*, *B*\)" significa che *N* inizia con il valore *A* e viene incrementato zero o più volte fino a quando non è uguale al valore *B*.  Il caso *N* \=\= *B* non è compreso nell'intervallo.  
  
-   L'espressione "il valore più basso di *N* nell'intervallo \[*A*, *B*\) tale che *X*" significa che la condizione *X* viene determinata per ogni *N* nell'intervallo \[*A*, *B*\) finché non viene soddisfatta la condizione *X*.  
  
-   L'espressione "il valore più alto di *N* nell'intervallo \[*A*, *B*\) tale che *X*" significa che *X* viene determinato per ogni *N* nell'intervallo \[*A*, *B*\).  La funzione archivia in `K` una copia di *N* ogni volta che viene soddisfatta la condizione *X*.  Se si verifica tale archiviazione, la funzione sostituisce il valore finale di *N*, che equivale a *B*, con il valore di `K`.  Per un iteratore ad accesso casuale o bidirezionale, tuttavia, può anche significare che *N* inizia con il valore più alto nell'intervallo e viene decrementato nell'intervallo finché non viene soddisfatta la condizione *X*.  
  
-   Le espressioni come *X* \- *Y*, dove *X* e *Y* possono essere iteratori diversi da quelli ad accesso casuale, vengono considerate nel senso matematico.  La funzione non valuta necessariamente operator**\-** se deve determinare un valore.  Lo stesso vale anche per le espressioni come *X* \+ *N* e *X* \- *N*, dove *N* è di tipo Integer.  
  
 Diversi algoritmi usano un predicato che esegue un confronto a coppie, ad esempio con `operator==`, per restituire un risultato `bool`.  La funzione predicativa `operator==`, o una funzione sostituiva, non deve modificare gli operandi.  Deve restituire lo stesso risultato `bool` ogni volta che viene valutata e deve restituire lo stesso risultato se l'operando viene sostituito con una copia di uno degli operandi.  
  
 Diversi algoritmi usano un predicato che deve imporre un ordinamento di tipo "strict weak" alle coppie di elementi di una sequenza.  Per il predicato `pr`\(*X*, *Y*\):  
  
-   Strict significa che `pr`\(*X*, *X*\) è false.  
  
-   Weak significa che *X* e *Y* hanno un ordinamento equivalente se \!`pr`\(*X*, *Y*\) && \!`pr`\(*Y*, *X*\) \(*X* \=\= *Y* non deve essere definito\).  
  
-   Ordinamento significa che `pr`\(*X*, *Y*\) & & `pr`\(*Y*, Z\) implica `pr`\(*X*, Z\).  
  
 Alcuni di questi algoritmi usano in modo implicito il predicato *X* \< *Y*.  Altri predicati che in genere soddisfano il requisito di ordinamento di tipo "strict weak" sono *X* \> *Y*, **less**\(*X*, *Y*\) e `greater`\(*X*, *Y*\).  Si noti, tuttavia, che i predicati come *X* \<\= *Y* e *X* \>\= *Y* non soddisfano questo requisito.  
  
 Una sequenza di elementi designati dagli iteratori nell'intervallo \[`First`, `Last`\) è una sequenza ordinata in base a operator**\<** se per ogni *N* nell'intervallo \[0, `Last` \- `First`\) e per ogni *M* nell'intervallo \(N, `Last` \- `First`\) il predicato \!\(\*\(`First` \+ *M*\) \< \*\(*First* \+ *N*\)\) è true.  Si noti che gli elementi vengono ordinati in ordine crescente. La funzione predicativa **operator\<**, o una funzione sostitutiva, non deve modificare gli operandi.  Deve restituire lo stesso risultato `bool` ogni volta che viene valutata e deve restituire lo stesso risultato se l'operando viene sostituito con una copia di uno degli operandi.  Inoltre, deve imporre un ordinamento di tipo "strict weak" agli operandi che confronta.  
  
 Una sequenza di elementi designati dagli iteratori nell'intervallo \[`First`, `Last`\) è un heap ordinato in base a **operator\<** se per ogni *N* nell'intervallo \[1, `Last` \- `First`\) il predicato \!\(\*`First` \< \*\(`First` \+ *N*\)\) è true.  Il primo elemento è il più grande. La struttura interna è altrimenti nota solo per le funzioni di modello [make\_heap](../Topic/make_heap.md), [pop\_heap](../Topic/pop_heap.md) e [push\_heap](../Topic/push_heap.md).  Come con una sequenza ordinata, la funzione predicativa **operator\<**, o una funzione sostitutiva, non deve modificare gli operandi e deve imporre un ordinamento di tipo "strict weak" agli operandi che confronta.  Deve restituire lo stesso risultato `bool` ogni volta che viene valutata e deve restituire lo stesso risultato se l'operando viene sostituito con una copia di uno degli operandi.  
  
 Gli algoritmi STL si trovano nei file di intestazione [\<algorithm\>](../standard-library/algorithm.md) e [\<numeric\>](../standard-library/numeric.md).  
  
## Vedere anche  
 [Libreria di modelli standard](../misc/standard-template-library.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)