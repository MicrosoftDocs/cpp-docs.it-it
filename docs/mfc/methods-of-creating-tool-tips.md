---
title: "Metodi di creazione di descrizioni comandi | Microsoft Docs"
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
  - "CToolTipCtrl (classe), creazione di descrizioni comandi"
  - "descrizioni comandi [C++], creazione"
  - "descrizioni comandi [C++], controlli descrizione comando"
ms.assetid: b015e9f4-ddfb-49a4-a5a6-fa2d45e4d328
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Metodi di creazione di descrizioni comandi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

MFC fornisce tre classi per creare e gestire il controllo di descrizione comandi: [CWnd](../mfc/reference/cwnd-class.md), [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md), [CToolTipCtrl](../mfc/reference/ctooltipctrl-class.md) e [CMFCToolTipCtrl](../mfc/reference/cmfctooltipctrl-class.md).  Le funzioni membro di descrizione comandi in queste classi eseguono il wrapping del controllo comune di Windows API.  La classe `CToolBarCtrl` e la classe `CToolTipCtrl` derivano dalla classe `CWnd`.  
  
 `CWnd` fornisce quattro funzioni membro per creare e gestire le descrizioni comandi: [EnableToolTips](../Topic/CWnd::EnableToolTips.md), [CancelToolTips](../Topic/CWnd::CancelToolTips.md), [FilterToolTipMessage](../Topic/CWnd::FilterToolTipMessage.md) e [OnToolHitTest](../Topic/CWnd::OnToolHitTest.md).  Vedere queste funzioni del membro specifico per ulteriori informazioni su come implementano le descrizioni comandi.  
  
 Se si crea una barra degli strumenti utilizzando `CToolBarCtrl`, è possibile implementare descrizioni comandi per la barra degli strumenti direttamente utilizzando le seguenti funzioni membro: [GetToolTips](../Topic/CToolBarCtrl::GetToolTips.md) e [SetToolTips](../Topic/CToolBarCtrl::SetToolTips.md).  Vedere queste funzioni e [Notifiche di descrizione comandi di gestione](../mfc/handling-tool-tip-notifications.md) del membro specifico per ulteriori informazioni su come implementano le descrizioni comandi.  
  
 La classe di `CToolTipCtrl` fornisce la funzionalità di controllo della descrizione comandi di windows.  Un singolo controllo tooltip può fornire informazioni per più di uno strumento.  Uno strumento è una finestra, ad esempio una finestra figlio o un controllo, o un'area rettangolare definita dall'interno di un'area client della finestra.  La classe di [CMFCToolTipCtrl](../mfc/reference/cmfctooltipctrl-class.md) deriva da `CToolTipCtrl` e fornisce gli stili visivi aggiuntivi e funzionalità.  
  
## Vedere anche  
 [Utilizzo di CToolTipCtrl](../mfc/using-ctooltipctrl.md)   
 [Controlli](../mfc/controls-mfc.md)