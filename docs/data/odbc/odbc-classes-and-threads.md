---
title: "Classi e thread ODBC | Microsoft Docs"
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
  - "ODBC (classi), e thread"
  - "ODBC, applicazioni multithread"
  - "threading [MFC], supporto ODBC"
ms.assetid: 16543926-7331-41a6-ba50-72288f2a61b7
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi e thread ODBC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

A partire da MFC 4.2 è disponibile il supporto del multithreading per le classi ODBC MFC.  Tenere presente tuttavia che MFC non fornisce il supporto del multithreading per le classi DAO.  
  
 Il supporto del multithreading per le classi ODBC presenta alcune limitazioni.  Poiché eseguono il wrapping delle funzioni dell'API ODBC, queste classi supportano il multithreading solo per i componenti in base ai quali sono compilate.  Molti driver ODBC, ad esempio, non sono thread\-safe. Se vengono quindi utilizzate con uno di questi driver, le classi ODBC MFC non saranno thread\-safe.  Si consiglia pertanto di verificare se il driver utilizzato sia thread\-safe.  
  
 Quando si crea un'applicazione multithread, prestare attenzione nell'utilizzo di più thread per la modifica dello stesso oggetto.  L'utilizzo, ad esempio, dello stesso oggetto `CRecordset` in due thread potrebbe provocare problemi durante il recupero dei dati, in quanto un'operazione di recupero in un thread potrebbe comportare la sovrascrittura dei dati recuperati nell'altro thread.  Le classi ODBC MFC in thread distinti vengono in genere utilizzate per la condivisione di un oggetto `CDatabase` aperto tra più thread, al fine di utilizzare la stessa connessione ODBC con un oggetto `CRecordset` distinto in ciascun thread.  Non passare un oggetto `CDatabase` non aperto a un oggetto `CRecordset` in un altro thread.  
  
> [!NOTE]
>  Se è necessario utilizzare più thread per gestire lo stesso oggetto, implementare i meccanismi di sincronizzazione appropriati, quali le sezioni critiche.  Tenere presente che determinate operazioni, come ad esempio **Open**, non sono protette  e quindi non devono essere chiamate contemporaneamente da thread distinti.  
  
 Per ulteriori informazioni sulla creazione di applicazioni multithreading, vedere [Multithreading](../../parallel/multithreading-support-for-older-code-visual-cpp.md).  
  
## Vedere anche  
 [Open Database Connectivity \(ODBC\)](../../data/odbc/open-database-connectivity-odbc.md)   
 [Programmazione dell'accesso ai dati \(MFC\/ATL\)](../../data/data-access-programming-mfc-atl.md)