---
title: "DDL e DML sono supportati? | Microsoft Docs"
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
  - "DML (Data Manipulation Language) in MFC ODBC [C++]"
  - "database [C++], accesso in DAO"
  - "database [C++], accesso DDL"
  - "database [C++], accesso DML"
  - "DDLs [C++], supporto MFC"
  - "DML [C++]"
  - "DML [C++], ODBC MFC"
ms.assetid: 07f96d81-78d4-4bec-9138-b15d68fd5ce0
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# DDL e DML sono supportati?
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le classi DAO MFC supportano due tipi di accesso ai database:  
  
-   **DDL \(Data Definition Language\)** È possibile creare ed eliminare database, creare ed eliminare tabelle, definire campi e indici sulle tabelle ed eseguire altre operazioni sulla struttura del database.  
  
-   **DML \(Data Manipulation Language\)** È possibile eseguire query, aggiungere, eliminare e modificare record nonché manipolare in altro modo il contenuto del database.  
  
 Sebbene le classi ODBC MFC supportino solo DML, è possibile chiamare direttamente le funzioni dell'API ODBC per eseguire le attività DDL.  
  
## Vedere anche  
 [Domande frequenti relative all'accesso ai dati](../data/data-access-frequently-asked-questions-mfc-data-access.md)