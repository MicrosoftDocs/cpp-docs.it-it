---
title: "Procedura: Scrivere un ciclo parallel_for_each | Microsoft Docs"
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
  - "scrittura di un ciclo parallel_for_each [Runtime di concorrenza]"
  - "parallel_for_each (funzione), esempio"
ms.assetid: fa9c0ba6-ace0-4f88-8681-c7c1f52aff20
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Procedura: Scrivere un ciclo parallel_for_each
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo esempio viene illustrato come utilizzare l'algoritmo [concurrency::parallel\_for\_each](../Topic/parallel_for_each%20Function.md) per calcolare il conteggio dei numeri primi in un oggetto [std::array](../../standard-library/array-class-stl.md) in parallelo.  
  
## Esempio  
 Nell'esempio seguente viene calcolato due volte il conteggio dei numeri primi in una matrice.  Nell'esempio viene innanzitutto utilizzato l'algoritmo [std::for\_each](../Topic/for_each.md) per calcolare il conteggio in serie.  Viene quindi utilizzato l'algoritmo `parallel_for_each` per eseguire la stessa attività in parallelo.  L'esempio inoltre visualizza nella console il tempo necessario per eseguire entrambi i calcoli.  
  
 [!code-cpp[concrt-parallel-count-primes#1](../../parallel/concrt/codesnippet/CPP/how-to-write-a-parallel-for-each-loop_1.cpp)]  
  
 L'output di esempio seguente è relativo a un computer con quattro processori.  
  
  **versione seriale:**  
**trovati 17984 numeri primi**  
**ha richiesto 6115 ms**  
**versione parallela:**  
**trovati 17984 numeri primi**  
**ha richiesto 1653 ms**   
## Compilazione del codice  
 Per compilare il codice, copiarlo e quindi incollarlo in un progetto Visual Studio o incollarlo in un file denominato `parallel-count-primes.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe \/EHsc parallel\-count\-primes.cpp**  
  
## Programmazione efficiente  
 L'espressione lambda che nell'esempio viene passata all'algoritmo `parallel_for_each` utilizza la funzione `InterlockedIncrement` per consentire alle iterazioni parallele del ciclo di incrementare simultaneamente il contatore.  Se si utilizzano funzioni come `InterlockedIncrement` per sincronizzare l'accesso alle risorse condivise, è possibile che nel codice si verifichino colli di bottiglia a livello di prestazioni.  È possibile utilizzare un meccanismo di sincronizzazione senza blocco, ad esempio la classe [concurrency::combinable](../../parallel/concrt/reference/combinable-class.md), per eliminare l'accesso simultaneo alle risorse condivise.  Per un esempio in cui viene utilizzata la classe `combinable` nel modo suddetto, vedere [Procedura: Usare la classe combinable per migliorare le prestazioni](../../parallel/concrt/how-to-use-combinable-to-improve-performance.md).  
  
## Vedere anche  
 [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)   
 [Funzione parallel\_for\_each](../Topic/parallel_for_each%20Function.md)