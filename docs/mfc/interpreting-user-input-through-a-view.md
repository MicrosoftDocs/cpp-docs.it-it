---
title: "Interpretazione dell&#39;input utente attraverso una visualizzazione | Microsoft Docs"
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
  - "CView (classe), interpretazione dell'input utente"
  - "input, classe visualizzazione"
  - "Interpretazione dell'input utente attraverso le visualizzazioni"
  - "input utente, interpretazione mediante classe visualizzazione"
  - "visualizzazioni, interfaccia utente e input utente"
ms.assetid: f0302a70-661f-4781-8fe7-78f082bef2a5
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Interpretazione dell&#39;input utente attraverso una visualizzazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Altre funzioni membro di un handle di visualizzazione e interpreta tutto l'input dell'utente.  In genere questo a funzioni membro per la gestione dei messaggi nella classe di visualizzazione per elaborare:  
  
-   Finestre [messaggi](../mfc/messages.md) generato da azioni di mouse e tastiera.  
  
-   [Controlli](../mfc/user-interface-objects-and-command-ids.md) dai menu, i pulsanti della barra degli strumenti e i tasti di scelta rapida.  
  
 Questi funzione membro per la gestione dei messaggi interpretano le seguenti operazioni quali l'immissione di dati, la selezione, o modificare, incluso lo spostamento dei dati e dagli Appunti:  
  
-   I movimenti del mouse e i clic, trascinamenti e fare doppio clic  
  
-   Sequenze di tasti  
  
-   Comandi di menu  
  
 Le finestre messaggi il punto di vista gestisce dipende dalle esigenze dell'applicazione.  
  
 [Argomenti di mapping e di gestione dei messaggi](../mfc/message-handling-and-mapping.md) viene illustrato come assegnare le voci di menu e altri oggetti dell'interfaccia utente per i controlli e come associare i controlli alle funzioni di gestione.  [Argomenti di mapping e di gestione dei messaggi](../mfc/message-handling-and-mapping.md) illustra inoltre come MFC ai controlli e invia i messaggi standard di windows a oggetti che contengono i gestori corrispondente.  
  
 Ad esempio, l'applicazione potrebbe essere necessario implementare il mouse diretto disegno nella visualizzazione.  Nell'esempio scribble come gestire rispettivamente `WM_LBUTTONDOWN`, `WM_MOUSEMOVE` e messaggi di `WM_LBUTTONUP` per iniziare, continua e terminano il disegno di un segmento di linea.  Di altra parte, talvolta avere l'esigenza di interpretare un clic del mouse nel punto di vista come selezione.  La funzione di gestione di `OnLButtonDown` del punto di vista determinerebbe se l'utente esegue l'inversione o selezionando.  Se la selezione, il gestore determinerebbe se il clic è entro i limiti di un determinato oggetto nella visualizzazione e, in caso affermativo, modificare la visualizzazione per visualizzare l'oggetto come selezionato.  
  
 Il punto di vista potrebbe anche gestire i comandi di menu sicuri, ad esempio quelli dal menu Modifica tagliare, copiare, inserire, eliminare o selezionati i dati mediante gli Appunti.  Tale gestore chiamerebbe alcune delle funzioni membro Appunti\- correlate di classe `CWnd` per trasferire un elemento di dati selezionato o dagli Appunti.  
  
## Vedere anche  
 [Utilizzo delle visualizzazioni](../mfc/using-views.md)