---
title: "Gestione connessioni di automazione remota | Microsoft Docs"
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
  - "client di automazione, configurazione per Automazione remota"
  - "server di automazione, configurazione per Automazione remota"
  - "strumento Gestione delle connessioni di automazione remota"
  - "Registro di sistema, automazione remota"
  - "Gestione delle connessioni di automazione remota"
  - "Automazione remota, configurazione di computer server e client"
ms.assetid: 562eb7bc-f95c-46ad-ac97-f0dfa98362af
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Gestione connessioni di automazione remota
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per configurare entrambi i computer di client e server, è necessario apportare modifiche del Registro di sistema.  Anziché questo manualmente, è molto più semplice utilizzare lo strumento di amministrazione \(RAC\) di connessione di automazione remota.  Questo strumento, RACMGR32.EXE, con RACREG32.DLL, deve essere copiato a tutte le directory selezionate.  Inserendolo in PATH, può essere eseguito dalla barra delle applicazioni mediante esecuzione.  In alternativa, è possibile creare un collegamento o posizionare un riferimento dal menu Start.  
  
 RACMGR32 viene scritto in Visual Basic e pertanto sono necessari alcuni DLL di supporto di Visual Basic.  Questi file si trovino nella stessa directory di RACMGR32.EXE il CD\-ROM.  Le versioni di questi file installati dall'installazione di Visual C\+\+ edizione Enterprise sono equivalenti o più recenti di tali fornito con Visual Basic 5,0 Enterprise Edition.  Visual C\+\+ installa copie che le nuove versioni di Visual Basic classi nella directory di sistema.  Per windows 9x, questa directory è in genere C:\\Windows\\System.  Per Windows NT e Windows 2000, è in genere C:\\WINNT\\system32.  Viene inoltre registra questi file con il sistema operativo.  È possibile rimuoverli dall'installazione di Visual Basic.  
  
## Vedere anche  
 [Gestione automazione \(MFC\)](../mfc/automation-manager-mfc.md)   
 [Componenti utente di automazione remota](../mfc/remote-automation-user-components.md)   
 [Installazione automazione remota](../mfc/remote-automation-installation.md)