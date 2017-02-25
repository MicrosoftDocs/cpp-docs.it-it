---
title: "Invio e ricezione di messaggi | Microsoft Docs"
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
  - "messaggi di notifica dei controlli"
  - "messaggi [C++], MFC"
  - "messaggi [C++], ricezione"
  - "messaggi [C++], invio"
  - "MFC [C++], messaggi"
  - "messaggi Windows [C++], gestione in MFC"
ms.assetid: 9ce189cb-b259-4c3b-b6f2-9cfbed18b98b
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Invio e ricezione di messaggi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Si consideri la parte inviando del processo e il framework risponde.  
  
 La maggior parte dei messaggi derivano dall'utente con il programma.  I controlli vengono generati dai clic del mouse nelle voci di menu e pulsanti della barra degli strumenti o dalle sequenze di tasti di scelta rapida.  L'utente genera inoltre i messaggi di windows da, ad esempio, spostare o ridimensionare una finestra.  Altri messaggi di windows vengono inviati quando gli eventi dell'avvio o chiusura del programma si verificano, mentre le finestre ottengono o perde lo stato attivo, e così via.  I messaggi di notifica del controllo vengono generati dai clic del mouse o altre interazioni dell'utente con un controllo, ad esempio un controllo listbox o del pulsante in una finestra di dialogo.  
  
 La funzione membro di **Esegui** di classe `CWinApp` recupera i messaggi e li invia alla finestra appropriata.  La maggior parte dei messaggi di comando vengono inviati alla finestra cornice principale dell'applicazione.  `WindowProc` predefinito della libreria di classi ottiene i messaggi e li risolve in modo diverso, a seconda della categoria di messaggio ricevuto.  
  
 Si consideri ora parte di ricevere il processo.  
  
 Il destinatario iniziale di un messaggio deve essere un oggetto window.  I messaggi di windows solitamente gestiti direttamente dall'oggetto window.  I messaggi di comando, in genere essere la finestra cornice principale dell'applicazione, vengono indirizzati alla catena di destinazione comando seguente in [Routing dei comandi](../mfc/command-routing.md).  
  
 Ogni oggetto in grado di ricevere messaggi o dei comandi è disponibile una mappa messaggi quale un messaggio o un comando con il nome del gestore.  
  
 Quando un oggetto di destinazione comando riceve un messaggio o un comando, cerca nella mappa messaggi una corrispondenza.  Se viene trovato un gestore per il messaggio, chiama il gestore.  Per ulteriori informazioni sul mapping dei messaggi sono disponibili, vedere [Come Framework cercherà le mappe messaggi](../mfc/how-the-framework-searches-message-maps.md).  Ancora riferimento alla figura [Controlli in Framework](../mfc/user-interface-objects-and-command-ids.md).  
  
## Vedere anche  
 [Chiamata di un gestore dal framework](../mfc/how-the-framework-calls-a-handler.md)