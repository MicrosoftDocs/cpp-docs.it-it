---
title: "Procedura: Convertire un ciclo OpenMP che usa una variabile di riduzione per l&#39;utilizzo del runtime di concorrenza | Microsoft Docs"
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
  - "conversione da OpenMP al runtime di concorrenza, variabili di riduzione"
  - "variabili di riduzione, conversione da OpenMP al runtime di concorrenza"
ms.assetid: 96623f36-5e57-4d3f-8c13-669e6cd535b1
caps.latest.revision: 13
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: Convertire un ciclo OpenMP che usa una variabile di riduzione per l&#39;utilizzo del runtime di concorrenza
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo esempio viene illustrato come convertire un ciclo [parallel](../../parallel/openmp/reference/parallel.md) [for](../../parallel/openmp/reference/for-openmp.md) di OpenMP che utilizza la clausola [reduction](../../parallel/openmp/reference/reduction.md) per utilizzare il runtime di concorrenza.  
  
 La clausola `reduction` di OpenMP consente di specificare una o più variabili thread\-private che sono soggette a un'operazione di riduzione alla fine dell'area parallela.  OpenMP predefinisce un set di operatori di riduzione.  Ogni variabile di riduzione deve essere scalare, ad esempio `int`, `long` e `float`.  OpenMP definisce inoltre diverse restrizioni sull'utilizzo delle variabili di riduzione in un'area parallela.  
  
 La libreria PPL \(Parallel Patterns Library\) fornisce la classe [concurrency::combinable](../../parallel/concrt/reference/combinable-class.md), la quale fornisce l'archiviazione locale dei thread riutilizzabile che consente di eseguire calcoli con granularità fine e quindi di unire tali calcoli in un risultato finale.  La classe `combinable` è un modello che agisce sia sui tipi scalari che sui tipi complessi.  Per utilizzare la classe `combinable`, eseguire i sotto\-calcoli nel corpo di un costrutto parallelo e quindi chiamare il metodo [concurrency::combinable::combine](../Topic/combinable::combine%20Method.md) o [concurrency::combinable::combine\_each](../Topic/combinable::combine_each%20Method.md) per fornire il risultato finale.  I metodi `combine` e `combine_each` accettano ciascuno una *funzione combine* che specifica come combinare ogni coppia di elementi.  La classe `combinable` non è pertanto limitata a un set prestabilito di operatori di riduzione.  
  
## Esempio  
 In questo esempio vengono utilizzati sia OpenMP che il runtime di concorrenza per calcolare la somma dei primi 35 numeri di Fibonacci.  
  
 [!code-cpp[concrt-openmp#7](../../parallel/concrt/codesnippet/CPP/convert-an-openmp-loop-that-uses-a-reduction-variable_1.cpp)]  
  
 Questo esempio produce l'output che segue.  
  
  **Using OpenMP...**  
**The sum of the first 35 Fibonacci numbers is 14930351.**  
**Using the Concurrency Runtime...**  
**The sum of the first 35 Fibonacci numbers is 14930351.** Per ulteriori informazioni sulla classe `combinable`, vedere [Contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md).  
  
## Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `concrt-omp-fibonacci-reduction.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe \/EHsc \/openmp concrt\-omp\-fibonacci\-reduction.cpp**  
  
## Vedere anche  
 [Migrazione da OpenMP al runtime di concorrenza](../../parallel/concrt/migrating-from-openmp-to-the-concurrency-runtime.md)   
 [Contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md)