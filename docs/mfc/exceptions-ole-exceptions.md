---
title: "Eccezioni: eccezioni OLE | Microsoft Docs"
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
  - "gestione eccezioni, OLE"
  - "eccezioni, OLE"
  - "OLE (eccezioni)"
  - "OLE (eccezioni), classi per la gestione"
  - "OLE, eccezioni"
ms.assetid: 2f8e0161-b94f-48bb-a5a2-6f644b192527
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Eccezioni: eccezioni OLE
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le tecniche e le funzionalità per la gestione delle eccezioni in OLE corrispondono a quelle per gestire altre eccezioni.  Per ulteriori informazioni sulla gestione delle eccezioni, vedere l'articolo [Gestione delle eccezioni C\+\+](../cpp/cpp-exception-handling.md).  
  
 Tutti gli oggetti eccezione derivano dalla classe base astratta `CException`.  MFC fornisce due classi per gestire le eccezioni OLE:  
  
-   [COleException](../mfc/reference/coleexception-class.md) per gestire le eccezioni OLE generali.  
  
-   [COleDispatchException](../mfc/reference/coledispatchexception-class.md) per la generazione e la gestione delle eccezioni OLE dispatch \(automazione\).  
  
 La differenza tra queste due classi è la quantità di informazioni che forniscono e il punto in cui vengono utilizzate.  `COleException` ha un membro dati pubblico che contiene il codice di stato OLE per l'eccezione.  `COleDispatchException` fornisce ulteriori informazioni, incluse le seguenti:  
  
-   Codice di errore specifico dell'applicazione  
  
-   Una descrizione di errore, ad esempio "disco pieno"  
  
-   Un contesto "Help" che l'applicazione può utilizzare per fornire informazioni aggiuntive per l'utente  
  
-   Il nome del file della Guida dell'applicazione  
  
-   Il nome dell'applicazione che ha causato l'eccezione  
  
 `COleDispatchException` fornisce più informazioni in modo che possa essere utilizzata con prodotti quali Microsoft Visual Basic.  La descrizione di errore può essere utilizzata in una finestra di messaggio o un'altra notifica; le informazioni della Guida possono essere utilizzate per consentire all'utente di rispondere alle condizioni che hanno causato l'eccezione.  
  
 Due funzioni globali corrispondono alle due classi eccezione OLE: [AfxThrowOleException](../Topic/AfxThrowOleException.md) e [AfxThrowOleDispatchException](../Topic/AfxThrowOleDispatchException.md).  Utilizzarle per generare eccezioni OLE generali ed eccezioni OLE dispatch, rispettivamente.  
  
## Vedere anche  
 [Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)