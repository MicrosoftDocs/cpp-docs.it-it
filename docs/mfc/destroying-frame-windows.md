---
title: "Distruzione di finestre cornice | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "PostNcDestroy"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Default (metodo)"
  - "distruzione di finestre cornice"
  - "DestroyWindow (metodo)"
  - "finestre cornice documento, eliminazione"
  - "finestre cornice [C++], eliminazione"
  - "MFC [C++], finestre cornice"
  - "OnClose (metodo)"
  - "OnNcDestroy (metodo), e finestre cornice"
  - "PostNcDestroy (metodo)"
  - "finestre [C++], eliminazione"
ms.assetid: 5affca77-1999-4507-a2b2-9aa226611b4b
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Distruzione di finestre cornice
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il framework MFC gestisce la distruzione nonché la creazione della finestra per le finestre associate con documenti e visualizzazioni del framework.  Se si creano finestre aggiuntive, si è responsabili di distruggerle.  
  
 Nel framework, quando l'utente chiude la finestra cornice, il gestore predefinito di [OnClose](../Topic/CWnd::OnClose.md) della finestra chiama [DestroyWindow](../Topic/CWnd::DestroyWindow.md).  L'ultima funzione membro chiamata quando la finestra di windows viene eliminato è [OnNcDestroy](../Topic/CWnd::OnNcDestroy.md), che esegue una certa pulitura, chiamare la funzione membro di [Predefinito](../Topic/CWnd::Default.md) per eseguire la pulizia di windows e infine chiama la funzione membro virtuale [PostNcDestroy](../Topic/CWnd::PostNcDestroy.md).  L'implementazione di [CFrameWnd](../mfc/reference/cframewnd-class.md) di `PostNcDestroy` elimina l'oggetto window C\+\+.  È consigliabile non utilizzare mai l'operatore di C\+\+ **eliminazione** in una finestra cornice.  In alternativa, utilizzare `DestroyWindow`.  
  
 Quando la finestra principale verrà chiusa, l'applicazione viene chiusa.  Se sono presenti documenti salvati modificati, il framework viene visualizzata una finestra di messaggio per chiedere se i documenti salvati e garantisce che i documenti appropriati vengano salvati se necessario.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Creazione delle finestre di documento](../mfc/creating-document-frame-windows.md)  
  
## Vedere anche  
 [Utilizzo di finestre cornice](../mfc/using-frame-windows.md)