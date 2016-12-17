---
title: "Gestore OnCmdMsg | Microsoft Docs"
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
  - "OnCmdMsg"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "comandi (routing), OnCmdMsg (gestore)"
  - "gestori"
  - "gestori, OnCmdMessage"
  - "messaggi, routing"
  - "OnCmdMessage (metodo)"
ms.assetid: 8df07024-506f-47e7-bba9-1c3bc5ad8ab6
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Gestore OnCmdMsg
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per eseguire il routing dei comandi, ogni destinazione comando chiama la funzione membro di `OnCmdMsg` di destinazione comando seguente nella sequenza.  Utilizzo `OnCmdMsg` delle destinazioni comando determinare se possono gestire un comando e fare riferimento ad essa a un'altra destinazione comando se non è possibile gestirla.  
  
 Ogni classe di destinazione comando può eseguire l'override della funzione membro di `OnCmdMsg`.  Override consentono a ogni classe soddisfare i controlli a una destinazione seguente particolare.  Una finestra cornice, ad esempio, è sempre i controlli alla finestra figlio o visualizzazione corrente, come illustrato nella tabella [Route standard di comando](../mfc/command-routing.md).  
  
 L'implementazione predefinita di `CCmdTarget` di `OnCmdMsg` utilizza la mappa messaggi della classe di destinazione comando per trovare una funzione di gestione per ogni messaggio di comando che riceve \- lo stesso modo in cui i messaggi standard vengono trovati.  Se viene rilevata una corrispondenza, chiama il gestore.  La ricerca della mappa messaggi viene spiegata in [Come Framework cercherà le mappe messaggi](../mfc/how-the-framework-searches-message-maps.md).  
  
## Vedere anche  
 [Chiamata di un gestore dal framework](../mfc/how-the-framework-calls-a-handler.md)