---
title: "Classi di eccezioni | Microsoft Docs"
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
  - "vc.classes.exception"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi di eccezione"
  - "gestione eccezioni, classi di eccezione"
  - "MFC, eccezioni"
ms.assetid: 1a2caf12-b3e9-4189-86d2-bf7a595bf025
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi di eccezioni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La libreria di classi fornisce un meccanismo di gestione delle eccezioni basato sulla classe `CException`.  Il framework applicazione utilizza le eccezioni nel codice; che possono essere utilizzate anche nel proprio codice.  Per ulteriori informazioni, vedere l'articolo [Eccezioni](../mfc/exception-handling-in-mfc.md).  È possibile derivare tipi personalizzati dell'eccezione da `CException`.  
  
 MFC fornisce una classe di eccezione da cui è possibile derivare le eccezioni personalizzate nonché classi di eccezione per tutte le eccezioni supportate.  
  
 [CException](../mfc/reference/cexception-class.md)  
 La classe di base per le eccezioni.  
  
 [CArchiveException](../mfc/reference/carchiveexception-class.md)  
 Un'eccezione archiviata.  
  
 [CDaoException](../mfc/reference/cdaoexception-class.md)  
 Un'eccezione generata da un errore in un'operazione DAO sul database.  
  
 [CDBException](../mfc/reference/cdbexception-class.md)  
 Un'eccezione generata da un errore nel processo di un database ODBC.  
  
 [CFileException](../mfc/reference/cfileexception-class.md)  
 A un'eccezione basata su un file.  
  
 [CMemoryException](../mfc/reference/cmemoryexception-class.md)  
 Eccezione relativa alla memoria insufficiente  
  
 [CNotSupportedException](../mfc/reference/cnotsupportedexception-class.md)  
 Un'eccezione generata dall'utilizzo di una funzionalità non supportata.  
  
 [COleException](../mfc/reference/coleexception-class.md)  
 Un'eccezione generata da un errore all'interno di un processo OLE.  Questa classe viene utilizzata dai contenitori e dal server.  
  
 [COleDispatchException](../mfc/reference/coledispatchexception-class.md)  
 Un'eccezione generata da un errore durante l'automazione.  Le eccezioni di automazione sono generate dai server di automazione e vengono intercettate dai client di automazione.  
  
 [CResourceException](../mfc/reference/cresourceexception-class.md)  
 Un'eccezione generata dall'impossibilità di caricare una risorsa di windows.  
  
 [CUserException](../mfc/reference/cuserexception-class.md)  
 Un'eccezione utilizzata per arrestare un'operazione eseguita dall'utente.  In genere, all'utente viene notificato il problema prima che questa eccezione venga generata.  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../mfc/class-library-overview.md)