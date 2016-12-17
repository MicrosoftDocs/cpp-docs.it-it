---
title: "Metodi di creazione di una barra di stato | Microsoft Docs"
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
  - "CStatusBar (classe), e CStatusBarCtrl"
  - "CStatusBarCtrl (classe), creazione"
  - "CStatusBarCtrl (classe), e CStatusBar"
  - "metodi [MFC]"
  - "metodi [MFC], creazione di barre di stato"
  - "barre di stato, creazione"
ms.assetid: 9aeaf290-7099-4762-a5ba-9c26705333c9
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodi di creazione di una barra di stato
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

MFC fornisce due classi per creare barre di stato: [CStatusBar](../mfc/reference/cstatusbar-class.md) e [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md) \(che esegue il wrapping del controllo comune di Windows API\).  `CStatusBar` fornisce tutte le funzionalità del controllo della barra di stato, automaticamente interagisce con i menu e le barre degli strumenti e gestire molte impostazioni e strutture di associazione di controlli comuni automaticamente; tuttavia, il risultato sarà eseguibile in genere maggiore di quello creato utilizzando `CStatusBarCtrl`.  
  
 `CStatusBarCtrl` comporta generalmente un più piccolo eseguibile ed è preferibile utilizzare `CStatusBarCtrl` se non si desidera integrare la barra di stato nell'architettura di MFC.  Se si intende utilizzare `CStatusBarCtrl` e integrare la barra di stato nell'architettura di MFC, è necessario creare la visualizzazione aggiuntiva per comunicare le modifiche del controllo barra di stato a MFC.  Questa comunicazione non è difficile; tuttavia, è lavoro aggiuntivo che non è necessario quando si utilizza `CStatusBar`.  
  
 In Visual C\+\+ sono disponibili due modi per utilizzare il controllo della barra di stato.  
  
-   Creare la barra di stato utilizzando `CStatusBar`quindi chiamare [CStatusBar::GetStatusBarCtrl](../Topic/CStatusBar::GetStatusBarCtrl.md) per ottenere l'accesso alle funzioni membro di `CStatusBarCtrl`.  
  
-   Creare la barra di stato utilizzando il costruttore di [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md).  
  
 Qualsiasi metodo fornirà l'accesso alle funzioni membro del controllo barra di stato.  Quando si chiama `CStatusBar::GetStatusBarCtrl`, restituisce un riferimento a un oggetto di `CStatusBarCtrl` pertanto è possibile utilizzare uno impostate le funzioni membro.  Vedere [CStatusBar](../mfc/reference/cstatusbar-class.md) per informazioni sulla costruzione e sulla creazione della barra di stato utilizzando `CStatusBar`.  
  
## Vedere anche  
 [Utilizzo di CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)