---
title: "Stili Frame-Window (C++) | Microsoft Docs"
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
  - "finestre cornice [C++], stili"
  - "MFC [C++], finestre cornice"
  - "PreCreateWindow (metodo), impostazione degli stili finestra"
  - "stili, finestre"
  - "stili finestra [C++]"
  - "finestre [C++], MFC"
ms.assetid: fc5058c1-eec8-48d8-9f76-3fc01cfa53f7
caps.latest.revision: 8
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Stili Frame-Window (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le finestre che si ottiene mediante il framework sono adatte alla maggior parte dei programmi, ma è possibile ottenere flessibilità aggiuntiva utilizzando le funzioni avanzate [PreCreateWindow](../Topic/CWnd::PreCreateWindow.md) e la funzione globale [Chiamata di AfxRegisterWndClass](../Topic/AfxRegisterWndClass.md)MFC.  `PreCreateWindow` è una funzione membro di `CWnd`.  
  
 Se si applica stili di **WS\_VSCROLL** e di **WS\_HSCROLL** alla finestra cornice principale, anziché si applicano alla finestra di **MDICLIENT** in modo che gli utenti possono scorrere l'area di **MDICLIENT**.  
  
 Se il bit di stile f **FWS\_ADDTOTITLE** della finestra viene impostato ovvero per impostazione predefinita\), la visualizzazione indica alla finestra cornice che titolo visualizzato nella barra del titolo della finestra in base al nome del documento della visualizzazione.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Gestione di finestre figlio MDI MDICLIENT\)](../mfc/managing-mdi-child-windows.md), la finestra in un intervallo MDI che contiene le finestre figlio MDI  
  
-   [Modificando gli stili di una finestra ha creato da MFC](../mfc/changing-the-styles-of-a-window-created-by-mfc.md)  
  
-   [Stili della finestra](../mfc/reference/window-styles.md)  
  
## Vedere anche  
 [Finestre cornice](../mfc/frame-windows.md)