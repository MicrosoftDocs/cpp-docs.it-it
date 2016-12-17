---
title: "Quali origini dati sono accessibili con DAO e quali con ODBC? | Microsoft Docs"
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
  - "DAO [C++], tipi origini dati"
  - "dati [C++], DAO"
  - "dati [C++], ODBC"
  - "accesso ai dati [C++], DAO"
  - "origini dati [C++], accessibile con DAO e ODBC"
  - "database [C++], accesso in DAO"
  - "Domande frequenti [C++], database accessibili"
  - "ODBC [C++], origini dati accessibili"
  - "origini dati ODBC [C++], accessibile"
ms.assetid: c88abb45-526a-467a-a01b-d9396bd63236
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Quali origini dati sono accessibili con DAO e quali con ODBC?
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Entrambi i gruppi di classi MFC consentono di accedere a un'ampia gamma di origini dati e di scrivere applicazioni indipendenti dall'origine dati.  
  
##  <a name="_core_databases_you_can_access_with_dao"></a> Database accessibili con DAO  
 Mediante DAO e le classi DAO MFC, è possibile accedere alle seguenti origini dati:  
  
-   Database che utilizzano il modulo di gestione di database Microsoft Jet, creati con Microsoft Access o Microsoft Visual Basic, versioni 1.x, 2.x e 3.0 del modulo di gestione di database  
  
-   Database ISAM installabili, inclusi:  
  
    -   dBASE III, dBASE IV e dBASE 5.0  
  
    -   Paradox, versioni 3.x, 4.x e 5.x  
  
-   Database ODBC \(Open Database Connectivity\), inclusi, tra gli altri, Microsoft SQL Server, SYBASE SQL Server e ORACLE Server.  Per accedere a un database ODBC è necessario disporre di un driver ODBC appropriato per il database a cui si desidera accedere.  Per un elenco dei driver ODBC inclusi in questa versione di Visual C\+\+ e per informazioni sulla possibilità di ottenere driver aggiuntivi, vedere [Elenco dei driver ODBC](../data/odbc/odbc-driver-list.md).  
  
-   Fogli di lavoro di Microsoft Excel versioni 3.0, 4.0, 5.0 e 7.0  
  
-   Fogli di calcolo di Lotus WKS, WK1, WK3 e WK4  
  
-   File di testo.  
  
 DAO fornisce risultati ottimali con i database che il modulo di gestione di database Microsoft Jet è in grado di leggere, ovvero tutti i database appena menzionati, ad eccezione delle origini dati ODBC.  Le migliori prestazioni si ottengono con i database di Microsoft Jet \(MDB\).  Il collegamento di tabelle esterne, specialmente in origini dati ODBC, a un database MDB, è più efficace rispetto all'apertura diretta del database esterno tramite le classi DAO MFC senza collegamento.  
  
##  <a name="_core_databases_you_can_access_with_odbc"></a> Database accessibili con ODBC  
 Con ODBC e le classi ODBC MFC è possibile accedere a qualsiasi origine dati, locale o remota, per la quale si disponga di un driver ODBC. Driver ODBC a 16, a 32 e a 64 bit sono disponibili per un'ampia gamma di origini dati.  Se si utilizza un database Microsoft Jet \(MDB\), l'utilizzo delle classi DAO risulta più efficiente rispetto all'utilizzo del driver ODBC di Microsoft Access.  
  
## Vedere anche  
 [Domande frequenti relative all'accesso ai dati](../data/data-access-frequently-asked-questions-mfc-data-access.md)