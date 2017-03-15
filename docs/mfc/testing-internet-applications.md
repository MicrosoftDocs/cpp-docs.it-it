---
title: "Test delle applicazioni Internet | Microsoft Docs"
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
  - "debug [MFC], applicazioni Web"
  - "debug di applicazioni Web, test di applicazioni"
  - "test e debug su Internet"
  - "test, applicazioni Internet"
  - "applicazioni Web, test"
ms.assetid: ac4c74e3-d4ad-4e19-8f6c-e270de067f01
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Test delle applicazioni Internet
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esistono alcune problematiche esclusive di test su internet, soprattutto per le applicazioni in esecuzione su un server Web.  Il test iniziale probabilmente sarà eseguito mediante un client monoutente che si connette a un server di test.  Che sarà utile per eseguire il debug del codice.  
  
 Si consiglia inoltre di test in condizioni reali: con più client connessi alle connessioni ad alta velocità nonché le righe seriali a bassa velocità, incluse le connessioni del modem.  Può essere difficile simulare le condizioni reali, ma è sicuramente opportuno richiedere il tempo di progettazione degli scenari possibili e che li esegue.  Se possibile, è preferibile utilizzare gli strumenti per effettuare la capacità e di stress il test.  Alcune classi di bug, ad esempio bug di intervallo, è difficile individuazione e riprodurre.  
  
 Una delle problematiche di programmazione per Internet sia la visibilità.  Molti accesso al sito possono rallentare il server.  Si desidera che il server per degradarti correttamente.  Si desidera impedire qualsiasi elemento che può essere distruttivo sul computer di un utente se l'applicazione non riesce, ad esempio danneggiamento dei dati mentre la scrittura nel Registro di sistema o while scrittura nel cookie sul client\).  
  
## Vedere anche  
 [Attività di programmazione Internet MFC](../mfc/mfc-internet-programming-tasks.md)   
 [Concetti di base della programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)