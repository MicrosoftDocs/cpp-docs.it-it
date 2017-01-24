---
title: "Cosa sono DAO e ODBC? | Microsoft Docs"
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
  - "DAO (Data Access Objects), e ODBC"
  - "ODBC, informazioni su ODBC"
ms.assetid: 22cc2f75-7ff6-47bc-ac56-56a40591104c
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Cosa sono DAO e ODBC?
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Sia DAO \(Data Access Objects\) che ODBC \(Open Database Connectivity\) sono API \(Application Programming Interface\) che consentono di scrivere applicazioni indipendenti dal sistema di gestione di database \(DBMS\).  
  
 DAO è conosciuto dai programmatori di database che utilizzano Microsoft Access Basic o Microsoft Visual Basic.  Utilizza il modulo di gestione di database Microsoft Jet per fornire un gruppo di oggetti per l'accesso ai dati, tra cui oggetti Database, oggetti TableDef e QueryDef, oggetti Recordset e così via.  I risultati migliori sono ottenibili con i file con estensione mdb, come quelli creati da Microsoft Access, ma tramite DAO e il modulo di gestione di database Microsoft Jet è anche possibile accedere a origini dati ODBC.  
  
 ODBC offre un'API che diversi produttori di database implementano tramite driver ODBC specifici di un particolare DBMS.  Il programma utilizza questa API per chiamare Gestione driver ODBC, che a sua volta passa le chiamate al driver appropriato.  Il driver, a sua volta, interagisce con il DBMS tramite SQL.  
  
> [!NOTE]
>  ODBC è un componente fondamentale dell'architettura WOSA \(Microsoft Windows Open Standards Architecture\).  Sebbene DAO sia il componente ottimizzato per il modulo di gestione di database Microsoft Jet, è comunque possibile utilizzare tale modulo di gestione per accedere a ODBC e ad altre origini dati. L'API ODBC e le classi MFC basate su tale modulo di gestione sono infatti disponibili e possono essere utilizzate per altri tipi di database.  
  
## Vedere anche  
 [Domande frequenti relative all'accesso ai dati](../data/data-access-frequently-asked-questions-mfc-data-access.md)