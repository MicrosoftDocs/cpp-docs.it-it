---
title: "ODBC: chiamata diretta delle funzioni dell&#39;API ODBC | Microsoft Docs"
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
  - "API [C++], chiamata"
  - "funzioni catalogo (ODBC)"
  - "funzioni catalogo (ODBC), chiamata"
  - "chiamate dirette ad API ODBC"
  - "ODBC [C++], funzioni API"
  - "ODBC [C++], funzioni catalogo"
  - "funzioni API ODBC [C++]"
  - "funzioni API ODBC [C++], chiamata"
  - "classi ODBC [C++], e ODBC API"
ms.assetid: 4295f1d9-4528-4d2e-bd6a-c7569953c7fa
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ODBC: chiamata diretta delle funzioni dell&#39;API ODBC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le classi di database forniscono alle [origini dati](../../data/odbc/data-source-odbc.md) un'interfaccia più semplice di quella fornita da ODBC.  Di conseguenza, le classi non includono tutte le API ODBC.  Per le funzionalità non supportate dalle classi, è necessario chiamare direttamente le funzioni dell'API ODBC.  È necessario, ad esempio, chiamare direttamente le funzioni del catalogo ODBC, tra cui **::SQLColumns**, **::SQLProcedures** e **::SQLTables**.  
  
> [!NOTE]
>  È possibile accedere alle origini dati ODBC tramite le classi ODBC MFC, come descritto nel presente argomento, oppure tramite le classi DAO \(Data Access Object\) MFC.  
  
 Per chiamare direttamente una funzione API ODBC, è necessario effettuare le stesse operazioni che si eseguirebbero per le chiamate senza il framework.  Le operazioni sono le seguenti:  
  
-   Allocare la memoria per archiviare tutti i risultati restituiti dalla chiamata.  
  
-   Passare un handle ODBC **HDBC** o **HSTMT**, in base alla firma della funzione in base al parametro.  Utilizzare la macro [AFXGetHENV](../Topic/AfxGetHENV.md) per recuperare l'handle ODBC.  
  
     Poiché le variabili membro **CDatabase::m\_hdbc** e **CRecordset::m\_hstmt** sono disponibili, non è necessario allocarle e inizializzarle manualmente.  
  
-   È probabilmente necessario chiamare funzioni ODBC aggiuntive prima o dopo la chiamata principale.  
  
-   Al termine, deallocare la memoria per l'archiviazione.  
  
 Per ulteriori informazioni su queste operazioni, vedere l'SDK [Open Database Connectivity \(ODBC\)](https://msdn.microsoft.com/en-us/library/ms710252.aspx) nella documentazione di MSDN.  
  
 È necessario inoltre effettuare ulteriori operazioni per verificare i valori restituiti dalla funzione, assicurarsi che il programma creato non sia in attesa del completamento di una chiamata asincrona e così via.  È possibile semplificare queste ultime operazioni utilizzando le macro `AFX_SQL_ASYNC` e `AFX_SQL_SYNC`.  Per ulteriori informazioni, vedere [Macro e funzioni globali](../Topic/Macros,%20Global%20Functions,%20and%20Global%20Variables.md) in *Riferimenti alla libreria MFC*.  
  
## Vedere anche  
 [Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)