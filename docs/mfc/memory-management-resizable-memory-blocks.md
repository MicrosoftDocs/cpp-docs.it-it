---
title: 'Gestione della memoria: Blocchi di memoria ridimensionabili | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- memory blocks [MFC], resizable
- memory [MFC], corruption
- memory allocation [MFC], memory block size
- memory blocks [MFC], allocating
- blocks [MFC], memory allocation
- resizable memory blocks [MFC]
ms.assetid: f0efe6f4-a3ed-4541-9195-51ec1291967a
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 1342f1f78b9880e5b24d21707282da39c8d4672e
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="memory-management-resizable-memory-blocks"></a>Gestione della memoria: blocchi di memoria ridimensionabili
Il **nuova** e **eliminare** operatori, descritti nell'articolo [gestione della memoria: esempi](../mfc/memory-management-examples.md), sono ideali per l'allocazione e deallocazione di blocchi di memoria di dimensioni fisse e oggetti. In alcuni casi, l'applicazione potrebbe richiedere blocchi di memoria ridimensionabili. È necessario utilizzare le funzioni della libreria di runtime C standard [malloc](../c-runtime-library/reference/malloc.md), [realloc](../c-runtime-library/reference/realloc.md), e [libero](../c-runtime-library/reference/free.md) per gestire i blocchi di memoria ridimensionabili sull'heap.  
  
> [!IMPORTANT]
>  Combinazione di **nuova** e **eliminare** gli operatori con le funzioni di allocazione di memoria ridimensionabili sullo stesso blocco di memoria comporterà memoria danneggiata nella versione di Debug di MFC. Non è consigliabile utilizzare `realloc` in un blocco di memoria allocata con **nuova**. Allo stesso modo, è consigliabile non allocare un blocco di memoria con il **nuova** operatore ed eliminarlo con **libero**, oppure utilizzare il **eliminare** operatore su un blocco di memoria allocata con `malloc`.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione della memoria: allocazione di heap](../mfc/memory-management-heap-allocation.md)

