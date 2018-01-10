---
title: Gestione della memoria | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- memory [MFC]
- MFC, memory management
- memory allocation [MFC]
- memory [MFC], managing
- memory allocation [MFC], MFC
ms.assetid: 934ac81b-d630-4232-88e5-ea74f7187987
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1a9e31fc1136249f843aa5dc96a4caffcccc7a85
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="memory-management"></a>Gestione della memoria
Questo gruppo di articoli viene descritto come sfruttare i servizi generici di Microsoft Foundation classe libreria (MFC) correlate alla gestione della memoria. Allocazione di memoria può essere suddivisi in due categorie principali: frame allocazioni e allocazioni di heap.  
  
 Una differenza principale tra le due tecniche è che con l'allocazione di frame in genere si lavora con la memoria effettiva blocco stesso, mentre con allocazione heap si ottengono sempre un puntatore al blocco di memoria. Un'altra differenza principale tra i due schemi è che gli oggetti nel frame vengono automaticamente eliminati, mentre gli oggetti degli heap deve essere eliminati in modo esplicito dal programmatore.  
  
 Per non MFC informazioni sulla gestione della memoria nei programmi per Windows, vedere [gestione della memoria](http://msdn.microsoft.com/library/windows/desktop/aa366779) in Windows SDK.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Allocazione di frame](../mfc/memory-management-frame-allocation.md)  
  
-   [Allocazione di heap](../mfc/memory-management-heap-allocation.md)  
  
-   [Allocazione di memoria per una matrice](../mfc/memory-management-examples.md)  
  
-   [Deallocazione di memoria per una matrice dall'heap](../mfc/memory-management-examples.md)  
  
-   [Allocazione di memoria per una struttura di dati](../mfc/memory-management-examples.md)  
  
-   [Allocazione di memoria per un oggetto](../mfc/memory-management-examples.md)  
  
-   [Blocchi di memoria ridimensionabili](../mfc/memory-management-resizable-memory-blocks.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../mfc/mfc-concepts.md)   
 [Argomenti MFC generali](../mfc/general-mfc-topics.md)

