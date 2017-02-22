---
title: "Distruzione di oggetti finestra | Microsoft Docs"
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
  - "finestre cornice, eliminazione"
  - "oggetti delle finestre, eliminazione"
  - "oggetti delle finestre, eliminazione"
  - "oggetti delle finestre, rimozione"
ms.assetid: 3241fea0-c614-4a25-957d-20f21bd5fd0c
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Distruzione di oggetti finestra
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Bisogna fare attenzione con le finestre figlio per eliminare in modo permanente l'oggetto finestra C\+\+ quando l'utente ha terminato con la finestra.  Se tali oggetti non vengono eliminati, l'applicazione non recupererà la loro memoria.  Fortunatamente, il framework gestisce la distruzione della finestra nonché la creazione della finestra per le finestre cornice, le visualizzazioni e le finestre di dialogo.  Se si creano finestre aggiuntive, si è responsabili della loro eliminazione.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Sequenza di distruzione di finestre](../mfc/window-destruction-sequence.md)  
  
-   [Allocazione e deallocazione di memoria delle finestre](../mfc/allocating-and-deallocating-window-memory.md)  
  
-   [Disconnessione di CWnd da HWND](../mfc/detaching-a-cwnd-from-its-hwnd.md)  
  
-   [Sequenza generale di creazione finestre](../mfc/general-window-creation-sequence.md)  
  
-   [Distruzione di finestre cornice](../mfc/destroying-frame-windows.md)  
  
## Vedere anche  
 [Oggetti finestra](../mfc/window-objects.md)