---
title: "Procedura: utilizzare l&#39;annullamento per interrompere un ciclo Parallel | Microsoft Docs"
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
  - "algoritmo di ricerca parallelo, scrittura [Runtime di concorrenza]"
  - "scrittura di algoritmi di ricerca paralleli [Runtime di concorrenza]"
ms.assetid: 421cd2de-f058-465f-b890-dd8fcc0df273
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 18
---
# Procedura: utilizzare l&#39;annullamento per interrompere un ciclo Parallel
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo esempio viene illustrato come utilizzare l'annullamento per implementare un algoritmo di base di ricerca parallelo.  
  
## Esempio  
 Nell'esempio seguente viene utilizzato l'annullamento per cercare un elemento in una matrice.  La funzione `parallel_find_any` utilizza l'algoritmo [concurrency::parallel\_for](../Topic/parallel_for%20Function.md) e la funzione [concurrency::run\_with\_cancellation\_token](../Topic/run_with_cancellation_token%20Function.md) per cercare la posizione che contiene il valore specificato.  Quando il ciclo parallelo trova il valore, chiama il metodo [concurrency::cancellation\_token\_source::cancel](../Topic/cancellation_token_source::cancel%20Method.md) per annullare il lavoro futuro.  
  
 [!code-cpp[concrt-parallel-array-search#1](../../parallel/concrt/codesnippet/CPP/how-to-use-cancellation-to-break-from-a-parallel-loop_1.cpp)]  
  
 L'algoritmo [concurrency::parallel\_for](../Topic/parallel_for%20Function.md) agisce contemporaneamente.  Pertanto, non esegue le operazioni in un ordine predeterminato.  Se la matrice contiene più istanze del valore, il risultato può essere una delle relative posizioni.  
  
## Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio o incollarlo in un file denominato `parallel-array-search.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe \/EHsc parallel\-array\-search.cpp**  
  
## Vedere anche  
 [Annullamento](../../parallel/concrt/cancellation-in-the-ppl.md)   
 [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)   
 [Funzione parallel\_for](../Topic/parallel_for%20Function.md)   
 [Classe cancellation\_token\_source](../../parallel/concrt/reference/cancellation-token-source-class.md)