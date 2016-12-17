---
title: "Funzione delle finestre cornice | Microsoft Docs"
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
  - "finestre cornice, informazioni sulle finestre cornice"
  - "finestre cornice, attività"
  - "MFC, finestre cornice"
ms.assetid: 1148a952-6786-4622-b5a8-68a2d7eae584
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Funzione delle finestre cornice
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Oltre al semplice frame di visualizzazione, le finestre di frame sono responsabili di numerose attività relative alla coordinazione del frame con la sua visualizzazione e con l'applicazione.  [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md) e [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md) ereditano da [CFrameWnd](../mfc/reference/cframewnd-class.md), pertanto hanno le funzionalità di `CFrameWnd` oltre a nuove funzionalità che aggiungono.  Esempi di finestre figlio includono le visualizzazioni, controlli quali pulsanti e caselle di riepilogo e barre di controllo, incluse le barre degli strumenti, barre di stato e barre della finestra di dialogo.  
  
 La finestra frame è responsabile della gestione del layout delle finestre figlio.  Nel framework MFC, una finestra frame posizione le barre di controllo, le visualizzazioni e le altre finestre figlio nella relativa area client.  
  
 La finestra frame inoltra i controlli alle relative visualizzazioni e può rispondere ai messaggi di notifica dalle finestre di controllo.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Barre di controllo \(come hanno inserito nella finestra frame\)](../mfc/control-bars.md)  
  
-   [Gestione dei menu, delle barre di controllo e dei tasti di scelta rapida \(come hanno inserito nella finestra cornice\)](../mfc/managing-menus-control-bars-and-accelerators.md)  
  
-   [Routing di comandi \(dalla finestra frame alla relativa visualizzazione e altre destinazioni comando\)](../mfc/command-routing.md)  
  
-   [Architettura documento\/visualizzazione](../mfc/document-view-architecture.md)  
  
-   [Barre di controllo](../mfc/control-bars.md)  
  
-   [Controlli](../mfc/controls-mfc.md)  
  
## Vedere anche  
 [Finestre cornice](../mfc/frame-windows.md)