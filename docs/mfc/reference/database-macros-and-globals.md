---
title: "Macro e funzioni globali di database | Microsoft Docs"
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
  - "vc.mfc.macros.data"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzioni globali di database [C++]"
  - "macro di database [C++]"
  - "funzioni di database globali [C++]"
  - "funzioni globali [C++], funzioni di database"
  - "macro [C++], database MFC"
ms.assetid: 5b9b9e61-1cf9-4345-9f29-3807dd466488
caps.latest.revision: 13
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Macro e funzioni globali di database
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le macro e i globals elencati di seguito si applicano alle applicazioni di database basate su ODBC.  Non vengono utilizzate con le applicazioni basate su DAO.  
  
 Prima di MFC 4,2, le macro `AFX_SQL_ASYNC` e `AFX_SQL_SYNC` forniti a operazioni asincrone una possibilità di rendere il tempo ad altri processi.  A partire da MFC 4,2, l'implementazione di queste macro modificate poiché le classi ODBC MFC vengono utilizzate solo le operazioni sincrone.  Macro `AFX_ODBC_CALL` era nuovo a MFC 4,2.  
  
### Macro del database  
  
|||  
|-|-|  
|[AFX\_ODBC\_CALL](../Topic/AFX_ODBC_CALL.md)|Chiama una funzione API ODBC che restituisce `SQL_STILL_EXECUTING`.  `AFX_ODBC_CALL` chiama ripetutamente la funzione finché non restituisca `SQL_STILL_EXECUTING`.|  
|[AFX\_SQL\_ASYNC](../Topic/AFX_SQL_ASYNC.md)|Chiama `AFX_ODBC_CALL`.|  
|[AFX\_SQL\_SYNCHRONIZATION](../Topic/AFX_SQL_SYNC.md)|Chiama una funzione API ODBC non restituisce `SQL_STILL_EXECUTING`.|  
  
### Database Globals  
  
|||  
|-|-|  
|[AfxGetHENV](../Topic/AfxGetHENV.md)|Recupera attualmente handle all'ambiente di ODBC in uso da MFC.  È possibile utilizzare questo handle nelle chiamate ODBC dirette.|  
  
## Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)