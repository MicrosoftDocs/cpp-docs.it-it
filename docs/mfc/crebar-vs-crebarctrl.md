---
title: "CReBar e CReBarCtrl | Microsoft Docs"
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
  - "CReBar"
  - "CReBarCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CReBar (classe), e CReBarCtrl"
  - "GetReBarCtrl (classe)"
  - "Rebar (controlli), CReBarCtrl (classe)"
ms.assetid: 7f9c1d7e-5d5f-4956-843c-69ed3df688d0
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CReBar e CReBarCtrl
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

MFC fornisce due classi per la creazione di controllo: [CReBar](../mfc/reference/crebar-class.md) e [CReBarCtrl](../mfc/reference/crebarctrl-class.md) \(che esegue il wrapping del controllo comune di Windows API\).  **CReBar** fornisce tutte le funzionalità del controllo comune del rebar e gestire molte impostazioni e strutture di associazione di controlli comuni automaticamente.  
  
 `CReBarCtrl` è una classe wrapper per il controllo Rebar Win32 e pertanto può essere più semplice da implementare se non si desidera integrare il rebar nell'architettura di MFC.  Se si intende utilizzare `CReBarCtrl` e integrare il rebar nell'architettura di MFC, è necessario creare la visualizzazione aggiuntiva per comunicare le modifiche del controllo Rebar a MFC.  Questa comunicazione non è difficile; tuttavia, è lavoro aggiuntivo che non è necessario quando si utilizza **CReBar**.  
  
 In Visual C\+\+ sono disponibili due modi per utilizzare il controllo comune del rebar.  
  
-   Creare il rebar utilizzando **CReBar**quindi chiamare [CReBar::GetReBarCtrl](../Topic/CReBar::GetReBarCtrl.md) per ottenere l'accesso alle funzioni membro di `CReBarCtrl`.  
  
    > [!NOTE]
    >  `CReBar::GetReBarCtrl` è una funzione membro inline che trasmette il puntatore di **questo** dell'oggetto del rebar.  Questo significa che, in fase di esecuzione, la chiamata di funzione non ha alcun sovraccarico.  
  
-   Creare il rebar utilizzando il costruttore di [CReBarCtrl](../mfc/reference/crebarctrl-class.md).  
  
 Qualsiasi metodo fornirà l'accesso alle funzioni membro di un controllo Rebar.  Quando si chiama `CReBar::GetReBarCtrl`, restituisce un riferimento a un oggetto di `CReBarCtrl` pertanto è possibile utilizzare uno impostate le funzioni membro.  Vedere [CReBar](../mfc/reference/crebar-class.md) per informazioni sulla costruzione e sulla creazione del rebar utilizzando **CReBar**.  
  
## Vedere anche  
 [Utilizzo di CReBarCtrl](../mfc/using-crebarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)