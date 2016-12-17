---
title: "Procedura: Scrivere un ciclo parallel_for | Microsoft Docs"
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
  - "scrittura di un ciclo parallel_for [Runtime di concorrenza]"
  - "parallel_for (funzione), esempio"
ms.assetid: adb4d64e-5514-4b70-8dcb-b9210e6b5a1c
caps.latest.revision: 15
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: Scrivere un ciclo parallel_for
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo esempio viene illustrato come utilizzare [concurrency::parallel\_for](../Topic/parallel_for%20Function.md) per calcolare il prodotto di due matrici.  
  
## Esempio  
 Nell'esempio seguente viene illustrata la funzione `matrix_multiply` che calcola il prodotto di due matrici quadrate.  
  
 [!code-cpp[concrt-parallel-matrix-multiply#1](../../parallel/concrt/codesnippet/CPP/how-to-write-a-parallel-for-loop_1.cpp)]  
  
## Esempio  
 Nell'esempio seguente viene illustrata la funzione `parallel_matrix_multiply` che utilizza l'algoritmo `parallel_for` per eseguire il ciclo esterno in parallelo.  
  
 [!code-cpp[concrt-parallel-matrix-multiply#2](../../parallel/concrt/codesnippet/CPP/how-to-write-a-parallel-for-loop_2.cpp)]  
  
 In questo esempio viene eseguita la parallelizzazione solo del ciclo esterno poiché viene eseguita una quantità di lavoro sufficiente per trarre vantaggio dall'overhead dell'elaborazione in parallelo.  Se viene eseguita la parallelizzazione del ciclo interno, non si otterrà alcun vantaggio in termini di prestazioni poiché la quantità di lavoro del ciclo interno è alquanto ridotta e non supera l'overhead dell'elaborazione in parallelo.  Pertanto, la parallelizzazione del ciclo esterno è l'unico approccio ottimale per aumentare al massimo i vantaggi della concorrenza nella maggior parte dei sistemi.  
  
## Esempio  
 Nell'esempio seguente, più completo, vengono confrontate le prestazioni della funzione `matrix_multiply` con quelle della funzione `parallel_matrix_multiply`.  
  
 [!code-cpp[concrt-parallel-matrix-multiply#3](../../parallel/concrt/codesnippet/CPP/how-to-write-a-parallel-for-loop_3.cpp)]  
  
 L'output di esempio seguente è relativo a un computer con quattro processori.  
  
  **serial: 3853**  
**parallel: 1311**   
## Compilazione del codice  
 Per compilare il codice, copiarlo e quindi incollarlo in un progetto di Visual Studio o incollarlo in un file denominato `parallel-matrix-multiply.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe \/EHsc parallel\-matrix\-multiply.cpp**  
  
## Vedere anche  
 [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)   
 [Funzione parallel\_for](../Topic/parallel_for%20Function.md)