---
title: "Consumer e provider OLE DB | Microsoft Docs"
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
  - "OLE DB (consumer)"
  - "OLE DB (consumer), architettura di dati OLE DB"
  - "provider OLE DB"
  - "provider OLE DB, architettura di dati OLE DB"
  - "OLE DB, modello dati"
ms.assetid: 886cb39d-652b-4557-93f0-4b1b0754d8bc
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Consumer e provider OLE DB
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'architettura OLE utilizza il modello basato su consumer e provider.  I consumer richiedono i dati.  I provider rispondono alle richieste restituendo i dati in formato tabulare e inviandoli ai consumer.  Tutte le chiamate che possono essere effettuate da un consumer devono essere implementate nel provider.  
  
 In termini tecnici, un consumer è qualsiasi sistema o codice di applicazione \(non necessariamente un componente OLE DB\) che accede ai dati tramite interfacce OLE DB.  Le interfacce vengono implementate in un provider.  Pertanto, per provider si intende qualsiasi componente software che implementa interfacce OLE DB per incorporare l'accesso ai dati ed esporre tali dati ad altri oggetti, ovvero i consumer.  
  
 In termini di ruoli un consumer richiama i metodi su interfacce OLE DB, mentre un provider OLE DB implementa le interfacce OLE DB necessarie.  
  
 In OLE DB non vengono utilizzati i termini client e server, in quanto questi ruoli non sono sempre validi, in particolare in situazioni a più livelli.  Un consumer può essere un componente su un livello che viene utilizzato da un altro componente, pertanto la definizione di componente client sarebbe inesatta.  Inoltre, i provider funzionano in alcuni casi più come driver di database che come server.  
  
## Vedere anche  
 [Programmazione con OLE DB](../../data/oledb/ole-db-programming.md)   
 [Cenni preliminari sulla programmazione con OLE DB](../../data/oledb/ole-db-programming-overview.md)