---
title: "Schema (accesso ai dati MFC) | Microsoft Docs"
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
  - "schema di database [C++]"
  - "schema di database [C++], informazioni"
  - "database [C++], schema"
  - "schemi [C++], database"
  - "strutture [C++]"
  - "strutture [C++], database"
ms.assetid: 7d17e35f-1ccf-4853-b915-5b8c7a45b9ee
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Schema (accesso ai dati MFC)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Uno schema di database descrive la struttura corrente delle tabelle e delle visualizzazioni del database.  In generale, il codice prodotto da una creazione guidata si basa sul presupposto che lo schema della tabella o delle tabelle a cui accede un recordset non venga modificato, anche se le classi di database supportano alcune modifiche dello schema, quali l'aggiunta, il riordino o l'eliminazione di colonne non associate.  Se una tabella viene modificata, sarà necessario aggiornare manualmente il recordset della tabella, quindi ripetere la compilazione dell'applicazione.  
  
 È inoltre possibile integrare il codice generato dalla creazione guidata in modo che funzioni con un database il cui schema non è del tutto conosciuto in fase di compilazione.  Per altre informazioni, vedere [Recordset: binding dinamico di colonne di dati \(ODBC\)](../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).  
  
## Vedere anche  
 [Programmazione dell'accesso ai dati \(MFC\/ATL\)](../data/data-access-programming-mfc-atl.md)   
 [SQL](../data/odbc/sql.md)   
 [Recordset \(ODBC\)](../data/odbc/recordset-odbc.md)