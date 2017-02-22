---
title: "Procedura: aggiornare oggetti dell&#39;interfaccia utente | Microsoft Docs"
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
  - "comandi, aggiornamento del'interfaccia utente"
  - "disabilitazione di menu"
  - "disabilitazione di elementi di interfaccia utente"
  - "abilitazione di menu"
  - "abilitazione di elementi di interfaccia utente"
  - "menu, aggiornamento come modifiche di contesto"
  - "gestori aggiornamento"
  - "aggiornamento di oggetti dell'interfaccia utente"
  - "oggetti dell'interfaccia utente"
  - "oggetti dell'interfaccia utente, aggiornamento"
ms.assetid: 82f09773-c978-427b-b321-05a6143b7369
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Procedura: aggiornare oggetti dell&#39;interfaccia utente
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In genere, le voci di menu e pulsanti della barra degli strumenti dispongono di più di uno stato.  Ad esempio, una voce di menu è ingrigita \(grigio\) se non è disponibile nel contesto corrente.  Le voci di menu possono essere archiviate o deselezionato.  Un pulsante della barra degli strumenti può essere disabilitato se non disponibile, o può essere controllato.  
  
 Chi aggiorna lo stato di questi elementi come modifica dello stato del programma?  Solitamente, se una voce di menu genera un comando che viene gestito ad esempio da un documento, sarà opportuno eseguire l'aggiornamento del documento alla voce di menu.  Il documento probabilmente contiene informazioni sull'aggiornamento è basato.  
  
 Se un comando sono oggetti dell'interfaccia utente più ad esempio una voce di menu e un pulsante della barra degli strumenti, entrambi vengono indirizzati alla stessa funzione di gestione.  Ciò include il codice di aggiornamento dell'interfaccia utente per tutti gli oggetti dell'interfaccia utente equivalenti in una singola posizione.  
  
 Il framework fornisce un'interfaccia funzionale per aggiornare automaticamente oggetti dell'interfaccia utente.  È possibile scegliere di effettuare l'aggiornamento in altro modo, mentre l'interfaccia fornita è efficiente e di facile utilizzo.  
  
 Negli argomenti seguenti vengono illustrati l'utilizzo dei gestori aggiornamenti:  
  
-   [Quando i gestori aggiornamenti vengono chiamati](../mfc/when-update-handlers-are-called.md)  
  
-   [La macro di ON\_UPDATE\_COMMAND\_UI](../mfc/on-update-command-ui-macro.md)  
  
-   [La classe di CCmdUI](../mfc/the-ccmdui-class.md)  
  
## Vedere anche  
 [Menus](../mfc/menus-mfc.md)