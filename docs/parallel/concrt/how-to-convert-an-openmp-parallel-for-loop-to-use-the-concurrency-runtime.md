---
title: "Procedura: Convertire un ciclo OpenMP parallel for per l&#39;utilizzo del runtime di concorrenza | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "conversione da OpenMP al runtime di concorrenza, cicli for paralleli"
  - "conversione da OpenMP al runtime di concorrenza, cicli paralleli"
  - "cicli for paralleli, conversione da OpenMP al runtime di concorrenza"
  - "cicli paralleli, conversione da OpenMP al runtime di concorrenza"
ms.assetid: d8a7b656-f86c-456e-9c5d-a7d52f94646e
caps.latest.revision: 13
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: Convertire un ciclo OpenMP parallel for per l&#39;utilizzo del runtime di concorrenza
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo esempio viene illustrato come convertire un ciclo di base che utilizza le direttive [parallel](../../parallel/openmp/reference/parallel.md) e [for](../../parallel/openmp/reference/for-openmp.md) di OpenMP per utilizzare l'algoritmo [concurrency::parallel\_for](../Topic/parallel_for%20Function.md) del runtime di concorrenza.  
  
## Esempio  
 In questo esempio vengono utilizzati sia OpenMP che il runtime di concorrenza per calcolare il conteggio dei numeri primi in una matrice di valori casuali.  
  
 [!code-cpp[concrt-openmp#1](../../parallel/concrt/codesnippet/CPP/how-to-convert-an-openmp-parallel-for-loop-to-use-the-concurrency-runtime_1.cpp)]  
  
 Questo esempio produce l'output che segue.  
  
  **Using OpenMP...**  
**found 107254 prime numbers.**  
**Using the Concurrency Runtime...**  
**found 107254 prime numbers.** L'algoritmo `parallel_for` e OpenMP 3.0 consentono che il tipo di indice sia un tipo integrale con segno oppure un tipo integrale senza segno.  L'algoritmo `parallel_for` assicura inoltre che l'intervallo specificato non superi un tipo con segno.  Nelle versioni 2.0 e 2.5 di OpenMP sono consentiti solo tipi di indice integrali con segno.  OpenMP inoltre non convalida l'intervallo dell'indice.  
  
 Nella versione di questo esempio in cui si utilizza il runtime di concorrenza si utilizza anche l'oggetto [concurrency::combinable](../../parallel/concrt/reference/combinable-class.md) in luogo della direttiva [atomic](../../parallel/openmp/reference/atomic.md) per incrementare il valore del contatore senza richiedere la sincronizzazione.  
  
 Per ulteriori informazioni su `parallel_for` e altri algoritmi paralleli, vedere [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).  Per ulteriori informazioni sulla classe `combinable`, vedere [Contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md).  
  
## Esempio  
 In questo esempio viene modificato l'esempio precedente in modo che si possa agire su un oggetto [std::array](../../standard-library/array-class-stl.md) anziché su una matrice nativa.  Poiché nelle versioni 2.0 e 2.5 di OpenMP sono consentiti solo tipi di indice integrali con segno in un costrutto `parallel` `for`, non è possibile utilizzare gli iteratori per accedere agli elementi di un contenitore STL \(Standard Template Library\) in parallelo.  Nella libreria PPL \(Parallel Patterns Library\) è disponibile l'algoritmo [concurrency::parallel\_for\_each](../Topic/parallel_for_each%20Function.md), che esegue attività, in parallelo, su un contenitore iterativo come quelli forniti dal contenitore STL.  Utilizza la stessa logica di partizionamento utilizzata dall'algoritmo `parallel_for`.  L'algoritmo `parallel_for_each` è simile all'algoritmo [std::for\_each](../Topic/for_each.md) STL, con l'unica differenza che l'algoritmo `parallel_for_each` esegue le attività simultaneamente.  
  
 [!code-cpp[concrt-openmp#10](../../parallel/concrt/codesnippet/CPP/how-to-convert-an-openmp-parallel-for-loop-to-use-the-concurrency-runtime_2.cpp)]  
  
## Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `concrt-omp-count-primes.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe \/EHsc \/openmp concrt\-omp\-count\-primes.cpp**  
  
## Vedere anche  
 [Migrazione da OpenMP al runtime di concorrenza](../../parallel/concrt/migrating-from-openmp-to-the-concurrency-runtime.md)   
 [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)   
 [Contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md)