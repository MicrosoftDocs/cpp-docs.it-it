---
title: "Server di automazione: problemi di durata degli oggetti | Microsoft Docs"
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
  - "server di automazione, durata degli oggetti"
  - "durata, server di automazione"
  - "oggetti [C++], durata"
  - "server, durata dell'automazione"
ms.assetid: 342baacf-4015-4a0e-be2f-321424f1cb43
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Server di automazione: problemi di durata degli oggetti
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando un client di automazione crea o attiva un elemento OLE, il server passa al client un puntatore a tale oggetto.  Il client stabilisce un riferimento all'oggetto tramite una chiamata alla funzione OLE [IUnknown::AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379).  Questo riferimento è attivo finché il client non chiama [IUnknown::Release](http://msdn.microsoft.com/library/windows/desktop/ms682317). \(Applicazioni client scritte con le classi OLE di MFC non devono effettuare queste chiamate; tali operazioni vengono eseguite dal framework.\) Il sistema OLE e il server stesso possono definire riferimenti all'oggetto.  Un server non deve eliminare un oggetto fintanto che rimangono attivi riferimenti esterni all'oggetto.  
  
 Il framework gestisce un conteggio interno del numero di riferimenti a qualsiasi oggetto server derivato da [CCmdTarget](../mfc/reference/ccmdtarget-class.md).  Questo numero viene aggiornato quando un client di automazione o un'altra entità aggiunge o rilascia un riferimento all'oggetto.  
  
 Quando il conteggio dei riferimenti diventa 0, il framework chiama la funzione virtuale [CCmdTarget::OnFinalRelease](../Topic/CCmdTarget::OnFinalRelease.md).  L'implementazione predefinita di questa funzione chiama l'operatore di **eliminazione** per eliminare questo oggetto.  
  
 La libreria MFC fornisce funzionalità aggiuntive per il controllo del comportamento dell'applicazione quando client esterni possiedono riferimenti agli oggetti dell'applicazione.  Oltre a mantenere il conteggio dei riferimenti a ogni oggetto, i server mantengono un conteggio complessivo degli oggetti attivi.  Le funzioni globali [AfxOleLockApp](../Topic/AfxOleLockApp.md) e [AfxOleUnlockApp](../Topic/AfxOleUnlockApp.md) aggiornano il conteggio degli oggetti attivi dell'applicazione.  Se questo numero è diverso da zero, l'applicazione non termina quando l'utente sceglie Chiudi del menu di sistema o in Esci dal menu File.  Al contrario, la finestra principale dell'applicazione viene nascosta \(ma non distrutta\) fino a quando non siano completate tutte le richieste pendenti da parte dei client.  In genere, `AfxOleLockApp` e `AfxOleUnlockApp` vengono chiamate nei costruttori e nei distruttori, rispettivamente, delle classi che supportano l'automazione.  
  
 In alcune circostanze forzano il server a terminare mentre un client possiede ancora un riferimento ad un oggetto.  Ad esempio, una risorsa dalla quale dipende il server diventa non disponibile, provocando il raggiungimento di un errore da parte del server.  L'utente può inoltre chiudere un documento server contenente oggetti ai quali hanno riferimenti altre applicazioni.  
  
 In [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)], vedere `IUnknown::AddRef` e `IUnknown::Release`.  
  
## Vedere anche  
 [Server di automazione](../mfc/automation-servers.md)   
 [AfxOleCanExitApp](../Topic/AfxOleCanExitApp.md)