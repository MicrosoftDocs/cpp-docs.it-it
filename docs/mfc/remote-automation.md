---
title: "Automazione remota | Microsoft Docs"
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
  - "controller automazione"
  - "oggetti di automazione"
  - "oggetti di automazione, creazione"
  - "COM, Automazione remota"
  - "DCOM, automazione remota"
  - "MFC COM, Automazione remota"
  - "MFC, supporto COM"
  - "Automazione remota"
ms.assetid: 363f87fb-08fa-4458-b089-b46365a6d4f2
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Automazione remota
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  Si raccomanda agli sviluppatori Visual C\+\+ .NET di utilizzare DCOM anziché l'automazione remota per le nuove applicazioni.  Visual C\+\+ .NET non supporta Windows 95.  I casi in cui sia necessario supportare l'automazione remota vengono descritti in [In quali casi è adatta l'automazione remota?](../mfc/where-does-remote-automation-fit-in-q.md).  
  
 L'automazione remota è un tipo di [Automazione](../mfc/automation.md) che consente ad un consumer dell'interfaccia di eseguire un provider dell'interfaccia che risiede in un altro computer, ad esempio, su una rete.  
  
 In questo articolo viene illustrato come creare oggetti di automazione che possono essere invocati ed eseguiti da remoto, e come creare controller di automazione che possono utilizzare questi oggetti di automazione remota.  Inoltre vengono esaminate le opzioni di configurazione e vengono illustrate le differenze principali tra l'automazione remota e DCOM \(la versione distribuita di COM e OLE che consente alle interfacce diverse da quelle correlate all'automazione di essere invocate ed eseguite in modalità remota\).  
  
## Argomenti della sezione  
 [Cronologia di DCOM \(Distributed Component Object Model\)](../mfc/history-of-dcom.md)  
  
 [In quali casi è adatta l'automazione remota?](../mfc/where-does-remote-automation-fit-in-q.md)  
  
 [Cosa fornisce l'automazione remota?](../mfc/what-does-remote-automation-provide-q.md)  
  
 [Sicurezza dell'automazione remota](../mfc/security-in-remote-automation.md)  
  
 [Modelli di threading](../mfc/remote-automation-threading-models.md)  
  
 [Installazione](../mfc/remote-automation-installation.md)  
  
 [Gestione automazione](../mfc/automation-manager-mfc.md)  
  
-   [Gestione connessioni di automazione remota](../mfc/remote-automation-connection-manager.md)  
  
-   [Componenti utente di automazione remota](../mfc/remote-automation-user-components.md)  
  
 [Creazione di programmi che utilizzano l'automazione remota](../mfc/creating-programs-that-use-remote-automation.md)  
  
 [Esecuzione dell'automazione remota con AUTOCLIK e AUTODRIV](../mfc/running-remote-automation-using-autoclik-and-autodriv.md)  
  
## Vedere anche  
 [MFC COM](../mfc/mfc-com.md)   
 [automazione](../mfc/automation.md)