---
title: "Sequenza di distruzione di finestre | Microsoft Docs"
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
  - "oggetti CWnd, sequenza di distruzione"
  - "distruzione di finestre"
  - "distruzione, finestre"
  - "sequenza [C++]"
  - "sequenza [C++], distruzione di finestre"
  - "finestre [C++], eliminazione"
ms.assetid: 2d819196-6240-415f-a308-db43745e616c
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Sequenza di distruzione di finestre
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nel framework MFC, quando l'utente chiude la finestra del frame, l'handler di default della finestra [OnClose](../Topic/CWnd::OnClose.md) chiama [DestroyWindow](../Topic/CWnd::DestroyWindow.md).  L'ultima funzione membro chiamata quando la finestra di Windows viene eliminata è [OnNcDestroy](../Topic/CWnd::OnNcDestroy.md), che esegue una certa pulitura, chiama la funzione membro [Default](../Topic/CWnd::Default.md) per eseguire la pulizia di Windows e infine chiama la funzione membro virtuale [PostNcDestroy](../Topic/CWnd::PostNcDestroy.md).  L'implementazione [CFrameWnd](../mfc/reference/cframewnd-class.md) di `PostNcDestroy` elimina l'oggetto window C\+\+.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Allocazione e deallocazione di memoria delle finestre](../mfc/allocating-and-deallocating-window-memory.md)  
  
-   [Disconnessione di CWnd da HWND](../mfc/detaching-a-cwnd-from-its-hwnd.md)  
  
## Vedere anche  
 [Distruzione di oggetti finestra](../mfc/destroying-window-objects.md)