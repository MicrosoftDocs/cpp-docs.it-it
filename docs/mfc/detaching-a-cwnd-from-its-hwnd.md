---
title: "Disconnessione di CWnd da HWND | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CWnd"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "oggetti CWnd, disconnessione da HWND"
  - "Detach (metodo) (classe CWnd)"
  - "disconnessione di CWnd da HWND"
  - "HWND, disconnessione di CWnd da"
  - "rimozione di HWND da CWnd"
ms.assetid: 6efadf84-0517-4a3f-acfd-216e088f19c6
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Disconnessione di CWnd da HWND
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per aggirare la relazione di`HWND` dell'oggetto, MFC fornisce un'altra funzione membro di `CWnd`, [Disconnetti](../Topic/CWnd::Detach.md), che disconnette l'oggetto window C\+\+ dalla finestra di windows.  Ciò impedisce il distruttore da eliminare la finestra di windows quando l'oggetto verrà eliminato.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Creare finestre](../mfc/creating-windows.md)  
  
-   [Sequenza di distruzione della finestra](../mfc/window-destruction-sequence.md)  
  
-   [Allocando e rilasciando la finestra memoria](../mfc/allocating-and-deallocating-window-memory.md)  
  
## Vedere anche  
 [Oggetti finestra](../mfc/window-objects.md)