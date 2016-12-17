---
title: "Gestione della memoria | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
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
  - "memoria"
  - "allocazione di memoria"
  - "allocazione di memoria, MFC"
  - "memoria, gestione"
  - "MFC, gestione della memoria"
ms.assetid: 934ac81b-d630-4232-88e5-ea74f7187987
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Gestione della memoria
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo gruppo di articoli viene illustrato come sfruttare i servizi di utilizzo di libreria Microsoft Foundation classes \(MFC\) correlato a gestione della memoria.  L'allocazione della memoria può essere divisa in due categorie principali: allocazioni e allocazioni heap del frame.  
  
 Una differenza principale tra le due tecniche di allocazione è quella all'allocazione del frame in genere si utilizza effettivamente blocco di memoria stesso, mentre all'allocazione heap viene fornito sempre un puntatore al blocco di memoria.  Un'altra differenza principale tra i due schemi consiste nel fatto che gli oggetti del frame automaticamente eliminate, mentre gli oggetti dell'heap devono eliminata esplicitamente dal programmatore.  
  
 Per informazioni non MFC sulla gestione della memoria in programmi per windows, vedere [Gestione della memoria](http://msdn.microsoft.com/library/windows/desktop/aa366779) in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Pagina l'allocazione](../mfc/memory-management-frame-allocation.md)  
  
-   [Allocazione heap](../mfc/memory-management-heap-allocation.md)  
  
-   [Allocare memoria per una matrice](../mfc/memory-management-examples.md)  
  
-   [Rilascio di memoria per una matrice dall'heap](../mfc/memory-management-examples.md)  
  
-   [Allocare memoria per una struttura di dati](../mfc/memory-management-examples.md)  
  
-   [Allocare memoria per un oggetto](../mfc/memory-management-examples.md)  
  
-   [Blocchi di memoria ridimensionabili](../mfc/memory-management-resizable-memory-blocks.md)  
  
## Vedere anche  
 [Concetti](../mfc/mfc-concepts.md)   
 [Argomenti MFC generali](../mfc/general-mfc-topics.md)