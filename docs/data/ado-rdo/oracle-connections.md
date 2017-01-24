---
title: "Connessioni Oracle | Microsoft Docs"
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
  - "connessioni [C++], database"
  - "connessioni di database [C++], Oracle"
  - "database [C++], connessione"
  - "Oracle [C++], creazione di connessioni"
  - "database Oracle [C++]"
  - "database Oracle [C++], connessioni"
ms.assetid: d317e763-44aa-47c9-abe8-261d513d894f
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Connessioni Oracle
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per configurare un DSN ODBC o una connessione OLE DB per Oracle, è necessario avere installato i componenti del lato client di SQL\*Net di Oracle.  SQL\*Net rappresenta il livello di trasporto della rete Oracle.  La maggior parte dei driver ODBC per Oracle, incluso il driver Microsoft e la mappa dei provider per Oracle di Microsoft OLE DB, esegue chiamate direttamente a questo livello SQL\*Net.  
  
 Dopo la configurazione di SQL\*Net, prendere nota della stringa di connessione SQL\*Net.  In genere si tratta di un identificatore del nome del server database Oracle e del tipo di protocollo di rete, ad esempio TCP\/IP e named pipe.  La stringa di connessione di SQL\*Net è spesso associata a un alias.  In questo caso,è sufficiente prendere nota dell'alias.  Per informazioni su come configurare SQL\*Net, contattare l'amministratore del database Oracle, fare riferimento alla documentazione di SQL\*Net o vedere il file della Guida del driver ODBC per Oracle per un esempio di stringa di connessione.  
  
## Vedere anche  
 [Creazione di connessioni a database](../../data/ado-rdo/creating-database-connections.md)