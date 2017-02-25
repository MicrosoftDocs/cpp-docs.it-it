---
title: "Gestione e mapping dei messaggi | Microsoft Docs"
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
  - "gestione dei messaggi"
  - "mappe messaggi"
  - "MFC, messaggi"
ms.assetid: 62fe2a1b-944c-449d-a0f0-63c11ee0a3cb
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Gestione e mapping dei messaggi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La famiglia dell'articolo viene descritto come i messaggi e i controlli vengono elaborati dal framework MFC e come li si connette alle relative funzioni di gestione.  
  
 In programmi tradizionali per windows, i messaggi di windows vengono mantenuti in un grande istruzione switch in una routine della finestra.  MFC ma utilizza [mappe messaggi](../mfc/message-categories.md) associare i messaggi diretti alle funzioni distinte del membro.  Le mappe messaggi sono più efficienti delle funzioni virtuali a questo scopo e consentono ai messaggi da gestire dalla maggior parte oggetto appropriato di C\+\+ \- l'applicazione, documenti, visualizza, e così via.  È possibile eseguire il mapping di un singolo messaggio o un intervallo dei messaggi, degli ID di comando, o ID del controllo.  
  
 I messaggi di**WM\_COMMAND** \- solito generati dai menu, i pulsanti della barra degli strumenti, o da tasti di scelta rapida \- viene inoltre utilizzato il meccanismo della mappa messaggi.  MFC definisce [multitargeting](../mfc/command-routing.md) standard dei messaggi di comando tra l'applicazione, la finestra cornice, la visualizzazione e documenti attivi nel programma.  È possibile eseguire l'override del routing se è necessaria.  
  
 Le mappe messaggi e forniscono un modo aggiornare gli oggetti dell'interfaccia utente quali i menu e pulsanti della barra degli strumenti, abilitandoli o disattivando per indicare il contesto corrente.  
  
 Per informazioni generali sui messaggi e le code di messaggi in windows, vedere [Messaggi e code di messaggi](http://msdn.microsoft.com/library/windows/desktop/ms632590) in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Messaggi e controlli in Framework](../mfc/messages-and-commands-in-the-framework.md)  
  
-   [Come il framework chiama un gestore messaggi](../mfc/how-the-framework-calls-a-handler.md)  
  
-   [Come Framework cercherà le mappe messaggi](../mfc/how-the-framework-searches-message-maps.md)  
  
-   [Dichiarare le funzioni del gestore dei messaggi](../mfc/declaring-message-handler-functions.md)  
  
-   [Vedere mapping di messaggi](../mfc/reference/mapping-messages-to-functions.md)  
  
-   [Come visualizzare informazioni del comando nella barra di stato](../mfc/how-to-display-command-information-in-the-status-bar.md)  
  
-   [Aggiornamento dinamico degli oggetti dell'interfaccia utente](../mfc/how-to-update-user-interface-objects.md)  
  
-   [Procedura: creare una mappa messaggi per una classe modello](../mfc/how-to-create-a-message-map-for-a-template-class.md)  
  
## Vedere anche  
 [Concetti](../mfc/mfc-concepts.md)   
 [Argomenti MFC generali](../mfc/general-mfc-topics.md)   
 [Classe CWnd](../mfc/reference/cwnd-class.md)   
 [CCmdTarget Class](../mfc/reference/ccmdtarget-class.md)