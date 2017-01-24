---
title: "Utilizzo del controllo Toolbar | Microsoft Docs"
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
  - "CToolBarCtrl (classe), accesso alla barra degli strumenti"
  - "GetToolBarCtrl (metodo)"
  - "controlli della barra degli strumenti [MFC], accesso"
  - "barre degli strumenti [C++], accesso a un controllo comune"
ms.assetid: b19409d5-3831-42c7-80ae-195c49dc9085
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo del controllo Toolbar
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato è possibile accedere all'oggetto di [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) sottostante a [CToolBar](../mfc/reference/ctoolbar-class.md) per maggiore controllo sulle barre degli strumenti.  Si tratta di un argomento avanzato.  
  
## Procedure  
  
#### Per accedere al controllo della barra degli strumenti sottostante del CToolBar oggetto  
  
1.  Chiamata [CToolBar::GetToolBarCtrl](../Topic/CToolBar::GetToolBarCtrl.md).  
  
 `GetToolBarCtrl` restituisce un riferimento a un oggetto di [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md).  È possibile utilizzare il riferimento a funzioni membro di chiamata della classe del controllo toolbar.  
  
> [!CAUTION]
>  Come chiamare le funzioni di `CToolBarCtrl`**Leggi** è sicuro, si presta attenzione se chiamano le funzioni di **Set** .  Si tratta di un argomento avanzato.  In genere non devono essere necessario accedere al controllo toolbar sottostante.  
  
### Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Controlli \(controlli comuni di Windows\)](../mfc/controls-mfc.md)  
  
-   [Nozioni fondamentali sulla barra degli strumenti](../mfc/toolbar-fundamentals.md)  
  
-   [Barre degli strumenti mobili e ancorate](../mfc/docking-and-floating-toolbars.md)  
  
-   [Ridimensionamento dinamico della barra degli strumenti](../mfc/docking-and-floating-toolbars.md)  
  
-   [Descrizioni dei comandi della barra degli strumenti](../mfc/toolbar-tool-tips.md)  
  
-   [Aggiornamenti della barra di stato di parata aerea](../mfc/toolbar-tool-tips.md)  
  
-   [Notifiche di descrizione comandi di gestione](../mfc/handling-tool-tip-notifications.md)  
  
-   Le classi [CToolBar](../mfc/reference/ctoolbar-class.md) e [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md)  
  
-   [Notifiche di personalizzazione di gestione](../mfc/handling-customization-notifications.md)  
  
-   [Barre degli strumenti più](../mfc/toolbar-fundamentals.md)  
  
-   [Utilizzando le barre degli strumenti obsolete](../mfc/using-your-old-toolbars.md)  
  
-   [Barre di controllo](../mfc/control-bars.md)  
  
 Per informazioni generali sull'utilizzo dei controlli comuni di Windows, vedere [Controlli comuni](http://msdn.microsoft.com/library/windows/desktop/bb775493).  
  
## Vedere anche  
 [Implementazione della barra degli strumenti MFC](../mfc/mfc-toolbar-implementation.md)