---
title: "ODBC e MFC | Microsoft Docs"
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
  - "connessioni [C++], origine dati"
  - "connessioni [C++], database"
  - "origini dati [C++], connessione"
  - "connessioni di database [C++], classi ODBC MFC"
  - "database [C++], connessione"
  - "MFC [C++], ODBC e"
  - "ODBC [C++], MFC"
ms.assetid: 98f02fd7-1235-437b-89a9-edfd0fc797f7
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# ODBC e MFC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  Per utilizzare le classi di database MFC per una piattaforma Win32, ad esempio Windows NT, è necessario disporre del driver ODBC appropriato per l'origine dati in uso.  Alcuni driver sono inclusi in Visual C\+\+, mentre è possibile richiederne altri a Microsoft e altri fornitori.  Per ulteriori informazioni, vedere [Elenco dei driver ODBC](../../data/odbc/odbc-driver-list.md).  
  
 In questo argomento vengono presentati i concetti principali relativi alle classi di database basate su ODBC della libreria MFC e vengono fornite informazioni preliminari sull'interazione tra le classi.  Per ulteriori informazioni su ODBC e MFC, vedere i seguenti argomenti:  
  
-   [Connessione a un'origine dati](../../data/odbc/connecting-to-a-data-source.md)  
  
-   [Selezione e modifica di record](../../data/odbc/selecting-and-manipulating-records.md)  
  
-   [Visualizzazione e modifica di dati in un form](../../data/odbc/displaying-and-manipulating-data-in-a-form.md)  
  
-   [Gestione di documenti e visualizzazioni](../../data/odbc/working-with-documents-and-views.md)  
  
-   [Accesso a ODBC e SQL](../../data/odbc/access-to-odbc-and-sql.md)  
  
-   [Ulteriori informazioni sulle classi ODBC MFC](../../data/odbc/further-reading-about-the-mfc-odbc-classes.md)  
  
 Le classi di database MFC basate su ODBC consentono di accedere a tutti i database per i quali è disponibile un driver ODBC.  Poiché le classi utilizzano ODBC, l'applicazione può accedere a dati in molti formati diversi e con configurazioni remote o locali differenti.  Non è necessario scrivere codice speciale per gestire DBMS diversi.  Gli utenti finali potranno utilizzare il programma creato per manipolare i dati delle tabelle memorizzate nel database, a condizione che dispongano di un driver ODBC appropriato per i dati a cui desiderano accedere.  
  
## Vedere anche  
 [Open Database Connectivity \(ODBC\)](../../data/odbc/open-database-connectivity-odbc.md)