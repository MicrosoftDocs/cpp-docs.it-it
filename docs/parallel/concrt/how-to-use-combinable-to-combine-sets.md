---
title: "Procedura: Usare l&#39;oggetto combinable per combinare set | Microsoft Docs"
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
  - "combinazione di set con combinable [Runtime di concorrenza]"
ms.assetid: 66ffe8e3-6bbb-4e9f-b790-b612922a68a7
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Procedura: Usare l&#39;oggetto combinable per combinare set
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato come utilizzare la classe [concurrency::combinable](../../parallel/concrt/reference/combinable-class.md) per calcolare il set di numeri primi.  
  
## Esempio  
 Nell'esempio seguente viene calcolato il set di numeri primi due volte.  Ogni calcolo archivia il risultato in un oggetto [std::bitset](../../standard-library/bitset-class.md).  Nell'esempio il calcolo del set viene prima eseguito in serie e quindi in parallelo.  L'esempio inoltre visualizza nella console il tempo necessario per eseguire entrambi i calcoli.  
  
 In questo esempio vengono utilizzati l'algoritmo [concurrency::parallel\_for](../Topic/parallel_for%20Function.md) e un oggetto `combinable` per generare set di thread locali.  Viene quindi utilizzato il metodo [concurrency::combinable::combine\_each](../Topic/combinable::combine_each%20Method.md) per combinare i set di thread locali nel set finale.  
  
 [!code-cpp[concrt-parallel-combine-primes#1](../../parallel/concrt/codesnippet/CPP/how-to-use-combinable-to-combine-sets_1.cpp)]  
  
 L'output di esempio seguente è relativo a un computer con quattro processori.  
  
  **tempo seriale: 312 ms**  
**tempo parallelo: 78 ms**   
## Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio o incollarlo in un file denominato `parallel-combine-primes.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe \/EHsc parallel\-combine\-primes.cpp**  
  
## Vedere anche  
 [Contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md)   
 [Classe combinable](../../parallel/concrt/reference/combinable-class.md)   
 [Metodo combinable::combine\_each](../Topic/combinable::combine_each%20Method.md)