---
title: "Implementazione della barra di stato in MFC | Microsoft Docs"
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
  - "COldStatusBar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COldStatusBar (classe)"
  - "CStatusBar (classe), e classe CStatusBarCtrl"
  - "CStatusBar (classe), e barre di stato MFC"
  - "CStatusBarCtrl (classe), e classe CStatusBar"
  - "CStatusBarCtrl (classe), e barre di stato MFC"
  - "barre di stato, e classe CStatusBarCtrl"
  - "barre di stato, compatibilità con le versioni precedenti"
  - "barre di stato, implementazione in MFC"
  - "barre di stato, versioni precedenti con classe COldStatusBar"
  - "barre di stato, implementazione di Windows 95"
  - "indicatori di stato"
ms.assetid: be5cd876-38e3-4d5c-b8cb-16d57a16a142
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Implementazione della barra di stato in MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un oggetto di [CStatusBar](../mfc/reference/cstatusbar-class.md) è una barra di controllo a una riga di riquadri di output di testo.  I riquadri di output vengono comunemente utilizzati come righe del messaggio e come indicatori di stato.  Gli esempi includono le righe di guida\- messaggio di menu che viene fornita una breve descrizione del comando di menu selezionato e gli indicatori indicanti lo stato di BLOC SCORR, BLOC NUM o altre chiavi.  
  
 A partire dalla versione 4,0 di MFC, barre di stato vengono implementate mediante classe [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md), che incapsula un controllo della barra di stato.  Per la compatibilità con le versioni precedenti, MFC conserva l'implementazione precedente della barra di stato nella classe **COldStatusBar**.  La documentazione per le versioni precedenti di MFC viene descritto **COldStatusBar** in `CStatusBar`.  
  
 [CStatusBar::GetStatusBarCtrl](../Topic/CStatusBar::GetStatusBarCtrl.md), una funzione membro nuova a MFC 4,0, consente di approfittiate il supporto di controlli comuni di Windows per la personalizzazione della barra di stato e funzionalità aggiuntive.  le funzioni membro di`CStatusBar` offrono ulteriori funzionalità dei controlli comuni di Windows; tuttavia, quando si chiama `GetStatusBarCtrl`, è possibile fornire alle barre di stato ancora più delle caratteristiche di una barra di stato.  Quando si chiama `GetStatusBarCtrl`, restituirà un riferimento a un oggetto di `CStatusBarCtrl`.  È possibile utilizzare tale riferimento per modificare il controllo barra di stato.  
  
 Nella figura riportata una barra di stato che visualizza diversi indicatori.  
  
 ![Barra di stato](../mfc/media/vc37dy1.png "vc37DY1")  
Barra di stato  
  
 Come la barra degli strumenti, l'oggetto della barra di stato viene incorporato nella finestra cornice padre e viene creato automaticamente quando la finestra cornice viene costruita.  La barra di stato, come tutte le barre di controllo, viene eliminato automaticamente anche quando il frame padre viene eliminato.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Aggiornare il testo di un riquadro della barra di stato](../mfc/updating-the-text-of-a-status-bar-pane.md)  
  
-   Classi MFC [CStatusBar](../mfc/reference/cstatusbar-class.md) e [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md)  
  
-   [Barre di controllo](../mfc/control-bars.md)  
  
-   [Barre di finestra di dialogo](../mfc/dialog-bars.md)  
  
-   [Barre degli strumenti \(della barra degli strumenti MFC\)](../mfc/mfc-toolbar-implementation.md)  
  
## Vedere anche  
 [Barre di stato](../mfc/status-bars.md)