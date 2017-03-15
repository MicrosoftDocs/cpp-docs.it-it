---
title: "Procedura: Usare la classe combinable per migliorare le prestazioni | Microsoft Docs"
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
  - "combinable (classe), esempio"
  - "miglioramento delle prestazioni in parallelo con combinable [Runtime di concorrenza]"
ms.assetid: fa730580-1c94-4b2d-8aec-57c91dc0497e
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# Procedura: Usare la classe combinable per migliorare le prestazioni
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo esempio viene illustrato come utilizzare la classe [concurrency::combinable](../../parallel/concrt/reference/combinable-class.md) per calcolare la somma dei numeri primi di un oggetto [std::array](../../standard-library/array-class-stl.md).  La classe `combinable` migliora le prestazioni eliminando lo stato condiviso.  
  
> [!TIP]
>  In alcuni casi, il mapping parallelo \([concurrency::parallel\_transform](../Topic/parallel_transform%20Function.md)\) e la riduzione parallela \([concurrency:: parallel\_reduce](../Topic/parallel_reduce%20Function.md)\) possono fornire miglioramenti delle prestazioni su `combinable`.  Per un esempio che utilizza le operazioni di mapping e riduzione per produrre gli stessi risultati di questo esempio, vedere [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).  
  
## Esempio  
 Nell'esempio seguente viene utilizzata la funzione [std::accumulate](../Topic/accumulate.md) per calcolare la somma dei numeri primi di una matrice.  In questo esempio `a` è un oggetto `array` e la funzione `is_prime` determina se il relativo valore di input è un numero primo.  
  
 [!code-cpp[concrt-parallel-sum-of-primes#1](../../parallel/concrt/codesnippet/CPP/how-to-use-combinable-to-improve-performance_1.cpp)]  
  
## Esempio  
 Nell'esempio seguente viene illustrata una modalità naïve per parallelizzare l'esempio precedente.  In questo esempio viene utilizzato l'algoritmo [concurrency::parallel\_for\_each](../Topic/parallel_for_each%20Function.md) per elaborare la matrice in parallelo e un oggetto [concurrency::critical\_section](../../parallel/concrt/reference/critical-section-class.md) per sincronizzare l'accesso alla variabile `prime_sum`.  Questo esempio non è adatto perché ogni thread deve attendere che la risorsa condivisa diventi disponibile.  
  
 [!code-cpp[concrt-parallel-sum-of-primes#2](../../parallel/concrt/codesnippet/CPP/how-to-use-combinable-to-improve-performance_2.cpp)]  
  
## Esempio  
 Nell'esempio seguente viene utilizzato un oggetto `combinable` per migliorare le prestazioni dell'esempio precedente.  Questo esempio elimina la necessità di oggetti di sincronizzazione ed è adatto poiché l'oggetto `combinable` consente a ogni thread di eseguire la relativa attività indipendentemente.  
  
 Un oggetto `combinable` viene utilizzato in genere in due passaggi.  Nel primo produrre una serie di calcoli accurati eseguendo il lavoro in parallelo.  Nel secondo combinare o ridurre i calcoli in un risultato finale.  In questo esempio viene utilizzato il metodo [concurrency::combinable::local](../Topic/combinable::local%20Method.md) per ottenere un riferimento alla somma locale.  Vene quindi utilizzato il metodo [concurrency::combinable::combine](../Topic/combinable::combine%20Method.md) e un oggetto [std::plus](../../standard-library/plus-struct.md) per combinare i calcoli locali nel risultato finale.  
  
 [!code-cpp[concrt-parallel-sum-of-primes#3](../../parallel/concrt/codesnippet/CPP/how-to-use-combinable-to-improve-performance_3.cpp)]  
  
## Esempio  
 Nell'esempio completo seguente viene calcolata la somma dei numeri primi sia in serie che in parallelo.  L'esempio visualizza nella console il tempo necessario per eseguire entrambi i calcoli.  
  
 [!code-cpp[concrt-parallel-sum-of-primes#4](../../parallel/concrt/codesnippet/CPP/how-to-use-combinable-to-improve-performance_4.cpp)]  
  
 L'output di esempio seguente è relativo a un computer con quattro processori.  
  
  **1709600813**  
**tempo seriale: 6178 ms**  
**1709600813**  
**tempo parallelo: 1638 ms**   
## Compilazione del codice  
 Per compilare il codice, copiarlo e quindi incollarlo in un progetto Visual Studio o incollarlo in un file denominato `parallel-sum-of-primes.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe \/EHsc parallel\-sum\-of\-primes.cpp**  
  
## Programmazione efficiente  
 Per un esempio che utilizza le operazioni di mapping e riduzione per fornire gli stessi risultati, vedere [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).  
  
## Vedere anche  
 [Contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md)   
 [Classe combinable](../../parallel/concrt/reference/combinable-class.md)   
 [Classe critical\_section](../../parallel/concrt/reference/critical-section-class.md)