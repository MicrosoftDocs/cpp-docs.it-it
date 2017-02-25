---
title: "Gestione della memoria: blocchi di memoria ridimensionabili | Microsoft Docs"
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
  - "blocchi, allocazione di memoria"
  - "allocazione di memoria, dimensione blocco di memoria"
  - "blocchi di memoria, allocazione"
  - "blocchi di memoria, ridimensionabili"
  - "memoria, danneggiamento"
  - "blocchi di memoria ridimensionabili"
ms.assetid: f0efe6f4-a3ed-4541-9195-51ec1291967a
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Gestione della memoria: blocchi di memoria ridimensionabili
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli operatori di **eliminazione** e di **nuova**, descritti nell'articolo [Gestione della memoria: Esempi](../mfc/memory-management-examples.md), è opportuno per l'allocazione e il rilascio dei blocchi di memoria a dimensione fissa e oggetti.  In alcuni casi, può essere necessario che l'applicazione blocchi di memoria ridimensionabili.  È necessario utilizzare le funzioni [malloc](../c-runtime-library/reference/malloc.md), [realloc](../c-runtime-library/reference/realloc.md) e [libero](../c-runtime-library/reference/free.md) della libreria di runtime C standard per gestire i blocchi di memoria ridimensionabili nell'heap.  
  
> [!IMPORTANT]
>  Combinare gli operatori di **eliminazione** e di **nuova** con le funzioni di allocazione della memoria ridimensionabili nello stesso blocco di memoria è la memoria danneggiata nella versione di debug di MFC.  Non è consigliabile utilizzare `realloc` in un blocco di memoria allocato con **nuova**.  Inoltre, non è necessario allocare un blocco di memoria con l'operatore di **nuova** ed eliminarlo con **free**, o utilizzare l'operatore di **eliminazione** in un blocco di memoria allocato con `malloc`.  
  
## Vedere anche  
 [Gestione della memoria: allocazione di heap](../mfc/memory-management-heap-allocation.md)