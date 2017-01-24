---
title: "Chiamate del codice dal framework | Microsoft Docs"
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
  - "eventi specifici dell'applicazione [C++]"
  - "comandi (gestione), chiamata di gestori e di codice in MFC"
  - "comandi (routing), framework"
  - "comandi (routing), MFC"
  - "flusso di controllo [C++], framework MFC e codice"
  - "eventi (C++), routing dei comandi in MFC"
  - "eventi (C++), programmazione basata sugli eventi"
  - "MFC [C++], chiamata di codice"
  - "MFC [C++], chiamata di codice"
ms.assetid: 39e68189-a580-40d0-9e35-bf5cd24a8ecf
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Chiamate del codice dal framework
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È fondamentale comprendere la relazione tra il codice sorgente e il codice nel framework MFC.  Quando l'applicazione è in esecuzione, la maggior parte del flusso di controllo risiede nel codice del framework.  Il framework gestisce il ciclo dei messaggi che riceve i messaggi da Windows mentre l'utente sceglie i comandi e modifica i dati in una visualizzazione.  Gli eventi che il framework può gestire per conto proprio non si basano affatto sul proprio codice sorgente.  Ad esempio, il framework è in grado di chiudere finestre e di uscire da un'applicazione in risposta ai comandi dell'utente.  Dal momento che gestisce tali attività, il framework utilizza gestori di messaggi e funzioni virtuali C\+\+ per fornire le possibilità di rispondere a questi eventi.  Comunque il codice non è contenuto nel controllo; il framework è.  
  
 Il framework chiama il codice per eventi specifici dell'applicazione.  Ad esempio, quando l'utente sceglie un comando del menu, il framework guida il comando lungo una sequenza di oggetti C\+\+: la visualizzazione corrente e la finestra cornice, il documento associato alla visualizzazione, il modello di documento del documento e l'oggetto dell'applicazione.  Se uno di questi oggetti può gestire il comando lo fa chiamando la funzione del gestore dei messaggi appropriata.  Per qualsiasi comando specificato, il codice chiamato potrebbe essere il proprio oppure quello del framework.  
  
 Questa disposizione è piuttosto familiare ai programmatori che hanno avuto esperienza con la programmazione tradizionale di Windows o con la programmazione basata su eventi.  
  
 Negli argomenti correlati, verranno illustrate le operazioni eseguite dal framework, quali l'inizializzazione e l'esecuzione dell'applicazione e la pulizia al termine dell'applicazione.  Inoltre si comprenderà dove è necessario il proprio codice sorgente.  
  
 Per ulteriori informazioni, vedere [Classe CWinApp: La classe application](../mfc/cwinapp-the-application-class.md) e [Modelli di documenti e processo di creazione di documenti e visualizzazioni](../mfc/document-templates-and-the-document-view-creation-process.md).  
  
## Vedere anche  
 [Compilazione nel framework](../mfc/building-on-the-framework.md)