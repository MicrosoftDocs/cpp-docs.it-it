---
title: "Destinazioni comandi | Microsoft Docs"
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
  - "mapping dei comandi"
  - "comandi (routing), destinazioni comandi"
  - "destinazioni comandi"
  - "messaggi, comando"
ms.assetid: b0f784e5-c6dc-4391-9e71-aa7b7dcbe9f0
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Destinazioni comandi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nella figura [Controlli in Framework](../mfc/user-interface-objects-and-command-ids.md) illustrata la connessione tra un oggetto interfaccia utente, ad esempio una voce di menu e la funzione di gestione che le chiamate del framework per eseguire il comando risultante quando l'oggetto viene selezionato.  
  
 Le finestre invia i messaggi che non sono messaggi di comando direttamente in una finestra di cui il gestore del messaggio viene quindi chiamato.  Tuttavia, il framework è destinato ai controlli in una serie di oggetti candidate \- "destinazioni comando" chiamate a una di cui in genere viene richiamato un gestore per il comando.  Le funzioni di gestione possono essere utilizzate allo stesso modo per i controlli che i messaggi standard di windows, ma i meccanismi da cui vengono chiamati sono diversi, come illustrato in [Come Framework chiama un gestore](../mfc/how-the-framework-calls-a-handler.md).  
  
## Vedere anche  
 [Messaggi e comandi nel framework](../mfc/messages-and-commands-in-the-framework.md)