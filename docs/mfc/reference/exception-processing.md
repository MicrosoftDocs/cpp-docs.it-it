---
title: "Elaborazione delle eccezioni | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.macros.exceptions"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DAO (Data Access Objects), eccezioni"
  - "macro eccezioni"
  - "eccezioni, funzioni generate da MFC"
  - "eccezioni, elaborazione"
  - "macro, gestione eccezioni"
  - "MFC, eccezioni"
  - "OLE (eccezioni), funzioni MFC"
  - "funzioni di terminazione, MFC"
ms.assetid: 26d4457c-8350-48f5-916e-78f919787c30
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 17
---
# Elaborazione delle eccezioni
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Quando un programma viene eseguito, possono verificarsi una serie di condizioni anomale ed errori denominate "eccezioni".  Queste includono esaurimento della memoria, errori di allocazione delle risorse e fallimenti nella ricerca dei file.  
  
 La libreria MFC \(Microsoft Foundation Class\) utilizza uno schema per la gestione delle eccezioni modellato in modo simile a quello proposto dal comitato ANSI standard per C\+\+.  Un gestore eccezioni deve essere installato prima di chiamare una funzione che può rilevare una situazione anomala.  Se la funzione rileva una condizione anomala, viene generata un'eccezione e il controllo viene passato al gestore di eccezioni.  
  
 Diverse macro incluse nella libreria MFC \(Microsoft Foundation Class\) imposteranno i gestori di eccezioni.  Una serie di altre funzioni globali consentono di generare eccezioni specifiche e terminare i programmi, se necessario.  Queste macro e queste funzioni globali rientrano nelle categorie seguenti:  
  
-   [Macro di eccezioni](#_mfc_exception_macros), che sono la struttura del gestore di eccezioni.  
  
-   [Funzioni generatrici di eccezioni](#_mfc_exception.2d.throwing_functions), che generano eccezioni di tipi specifici.  
  
-   [Funzioni di terminazione](#_mfc_termination_functions), che causano la terminazione del programma.  
  
 Per esempi e ulteriori dettagli, vedere l'articolo [Eccezioni](../../mfc/exception-handling-in-mfc.md).  
  
### Macro di eccezioni  
  
|||  
|-|-|  
|[TRY](../Topic/TRY.md)|Designa un blocco di codice per l'elaborazione delle eccezioni.|  
|[CATCH](../Topic/CATCH.md)|Designa un blocco di codice per intercettare un'eccezione dal blocco **TRY** precedente.|  
|[CATCH\_ALL](../Topic/CATCH_ALL.md)|Designa un blocco di codice per intercettare tutte le eccezioni dal blocco **TRY** precedente.|  
|[AND\_CATCH](../Topic/AND_CATCH.md)|Designa un blocco di codice per intercettare ulteriori tipi di eccezioni dal blocco **TRY** precedente.|  
|[AND\_CATCH\_ALL](../Topic/AND_CATCH_ALL.md)|Designa un blocco di codice per il rilevamento di tutti gli ulteriori tipi di eccezione generati in un blocco **PROVA** precedente.|  
|[END\_CATCH](../Topic/END_CATCH.md)|Termina l'ultimo blocco di codice **CATCH** o `AND_CATCH`.|  
|[END\_CATCH\_ALL](../Topic/END_CATCH_ALL.md)|Termina l'ultimo blocco di codice `CATCH_ALL`.|  
|[THROW](../Topic/THROW%20\(MFC\).md)|Genera un'eccezione specificata.|  
|[THROW\_LAST](../Topic/THROW_LAST.md)|Invia l'eccezione attualmente gestita al successivo gestore esterno.|  
  
### Funzioni che generano eccezioni  
  
|||  
|-|-|  
|[AfxThrowArchiveException](../Topic/AfxThrowArchiveException.md)|Genera un'eccezione di archiviazione.|  
|[AfxThrowFileException](../Topic/AfxThrowFileException.md)|Genera un'eccezione di file.|  
|[AfxThrowMemoryException](../Topic/AfxThrowMemoryException.md)|Genera un'eccezione di memoria.|  
|[AfxThrowNotSupportedException](../Topic/AfxThrowNotSupportedException.md)|Genera un'eccezione non supportata.|  
|[AfxThrowResourceException](../Topic/AfxThrowResourceException.md)|Genera un'eccezione di Windows di risorsa non trovata.|  
|[AfxThrowUserException](../Topic/AfxThrowUserException.md)|Genera un'eccezione in un'azione di programma avviata dall'utente.|  
  
 MFC offre due funzioni che generano eccezioni appositamente per le eccezioni OLE:  
  
### Funzioni di generazione di eccezioni OLE  
  
|||  
|-|-|  
|[AfxThrowOleDispatchException](../Topic/AfxThrowOleDispatchException.md)|Genera un'eccezione all'interno di una funzione di automazione OLE.|  
|[AfxThrowOleException](../Topic/AfxThrowOleException.md)|Genera un'eccezione OLE.|  
  
 Per supportare le eccezioni di database, le classi database forniscono due classi di eccezioni, `CDBException` e `CDaoException` e delle funzioni globali per supportare i tipi di eccezioni:  
  
### Funzioni di generazione di eccezioni DAO  
  
|||  
|-|-|  
|[AfxThrowDAOException](../Topic/AfxThrowDaoException.md)|Genera una [CDaoException](../../mfc/reference/cdaoexception-class.md) dal proprio codice.|  
|[AfxThrowDBException](../Topic/AfxThrowDBException.md)|Genera una [CDBException](../../mfc/reference/cdbexception-class.md) dal proprio codice.|  
  
 MFC offre la seguente funzione di terminazione:  
  
### Funzioni di terminazione  
  
|||  
|-|-|  
|[AfxAbort](../Topic/AfxAbort.md)|Chiamata per interrompere un'applicazione quando si verifica un errore irreversibile.|  
  
## Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)   
 [CException Class](../../mfc/reference/cexception-class.md)