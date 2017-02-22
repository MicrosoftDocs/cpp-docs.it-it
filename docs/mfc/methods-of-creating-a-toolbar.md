---
title: "Metodi di creazione di una barra degli strumenti | Microsoft Docs"
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
  - "CToolBar (classe), creazione di barre degli strumenti"
  - "CToolBarCtrl (classe), e classe CToolBar"
  - "CToolBarCtrl (classe), creazione di barre degli strumenti"
  - "barre degli strumenti MFC"
  - "controlli della barra degli strumenti [MFC]"
  - "controlli della barra degli strumenti [MFC], creazione"
ms.assetid: f19d8d65-d49f-445c-abe8-d47d3e4101c8
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Metodi di creazione di una barra degli strumenti
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

MFC fornisce due classi per creare barre degli strumenti: [CToolBar](../mfc/reference/ctoolbar-class.md) e [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) \(che esegue il wrapping del controllo comune di Windows API\).  `CToolBar` fornisce tutte le funzionalità del controllo della barra degli strumenti e gestire molte impostazioni e strutture di associazione di controlli comuni automaticamente; tuttavia, il risultato sarà eseguibile in genere maggiore di quello creato utilizzando `CToolBarCtrl`.  
  
 `CToolBarCtrl` comporta generalmente un più piccolo eseguibile ed è preferibile utilizzare `CToolBarCtrl` se non si desidera integrare la barra degli strumenti nell'architettura di MFC.  Se si intende utilizzare `CToolBarCtrl` e integrare la barra degli strumenti nell'architettura di MFC, è necessario creare la visualizzazione aggiuntiva per comunicare le modifiche del controllo toolbar a MFC.  Questa comunicazione non è difficile; tuttavia, è lavoro aggiuntivo che non è necessario quando si utilizza `CToolBar`.  
  
 In Visual C\+\+ sono disponibili due modi per utilizzare il controllo della barra degli strumenti.  
  
-   Creare la barra degli strumenti utilizzando `CToolBar`quindi chiamare [CToolBar::GetToolBarCtrl](../Topic/CToolBar::GetToolBarCtrl.md) per ottenere l'accesso alle funzioni membro di `CToolBarCtrl`.  
  
-   Creare la barra degli strumenti utilizzando il costruttore di [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md).  
  
 Qualsiasi metodo fornirà l'accesso alle funzioni membro di controllo toolbar.  Quando si chiama `CToolBar::GetToolBarCtrl`, restituisce un riferimento a un oggetto di `CToolBarCtrl` pertanto è possibile utilizzare uno impostate le funzioni membro.  Vedere [CToolBar](../mfc/reference/ctoolbar-class.md) per informazioni sulla costruzione e sulla creazione della barra degli strumenti utilizzando `CToolBar`.  
  
## Vedere anche  
 [Utilizzo di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)