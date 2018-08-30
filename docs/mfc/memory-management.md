---
title: Gestione della memoria | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- memory [MFC]
- MFC, memory management
- memory allocation [MFC]
- memory [MFC], managing
- memory allocation [MFC], MFC
ms.assetid: 934ac81b-d630-4232-88e5-ea74f7187987
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 28191191572e508828a23f0e719a57d63163b08d
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43222351"
---
# <a name="memory-management"></a>Gestione della memoria
Questo gruppo di articoli descrive come sfruttare i vantaggi dei servizi per utilizzo generico di Microsoft Foundation classe libreria (MFC) correlate alla gestione della memoria. Allocazione di memoria può essere suddivisi in due categorie principali: frame le allocazioni e le allocazioni di heap.  
  
 Una differenza principale tra le due tecniche è che con allocazione di frame che generalmente usate con la memoria effettiva bloccato stesso, mentre con allocazione heap si ottengono sempre un puntatore al blocco di memoria. Un'altra differenza principale tra i due schemi è che gli oggetti nel frame vengono eliminati automaticamente, mentre gli oggetti degli heap devono essere eliminati esplicitamente dal programmatore.  
  
 Per non MFC informazioni sulla gestione della memoria nelle applicazioni per Windows, vedere [gestione della memoria](https://msdn.microsoft.com/library/windows/desktop/aa366779) nel SDK di Windows.  
  
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

