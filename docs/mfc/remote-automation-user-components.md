---
title: "Componenti utente di automazione remota | Microsoft Docs"
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
  - "DLL [C++], automazione"
  - "Automazione remota [C++], componenti utente"
ms.assetid: 601591cc-a442-440a-988e-baf3284b0d46
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Componenti utente di automazione remota
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È necessario assicurarsi che ogni computer client contiene il programma client e tutte le DLL di supporto richiede.  Sarà inoltre necessario assicurarsi che l'applicazione server e tutte le DLL di supporto siano presenti sul server.  Infine, è necessario assicurarsi che il programma server è registrato su ogni computer client prima che l'amministratore di RAC poter eseguire per configurare la connessione.  Se il programma viene automaticamente registrandosi \(come la maggior parte sia\), è sufficiente disporre dell'esecuzione del programma server nel computer client per registrarlo.  In mancanza di quello, potrebbe essere necessario eseguire un file di registrazione specificato, o si modificano il Registro di sistema.  
  
## Vedere anche  
 [Gestione automazione \(MFC\)](../mfc/automation-manager-mfc.md)   
 [Gestione connessioni di automazione remota](../mfc/remote-automation-connection-manager.md)   
 [Installazione automazione remota](../mfc/remote-automation-installation.md)