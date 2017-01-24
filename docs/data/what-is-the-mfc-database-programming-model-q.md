---
title: "Cos&#39;&#232; il modello di programmazione dell&#39;accesso ai dati MFC? | Microsoft Docs"
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
  - "DAO [C++], MFC"
  - "accesso ai dati [C++], tecnologie"
  - "database [C++], MFC"
  - "MFC [C++], applicazioni database"
  - "ODBC [C++], MFC"
  - "classi ODBC [C++], classi di database MFC"
ms.assetid: f6f15bb8-4115-41f2-ad68-036e74a11bd9
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Cos&#39;&#232; il modello di programmazione dell&#39;accesso ai dati MFC?
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Sebbene MFC implementi DAO e ODBC con modalità piuttosto diverse, questi due sistemi presentano interfacce simili che rendono relativamente semplice portare le applicazioni da un sistema all'altro, specialmente da ODBC a DAO.  Per informazioni sul porting da ODBC a DAO, vedere la [Nota tecnica 55](../mfc/tn055-migrating-mfc-odbc-database-class-applications-to-mfc-dao-classes.md).  Le interfacce DAO e ODBC in MFC sono inoltre molto simili a quelle di Visual Basic.  
  
 Il modello di programmazione MFC fornisce un oggetto di database per ciascun database aperto.  L'oggetto di database rappresenta la connessione al database.  Query e aggiornamenti vengono effettuati mediante oggetti recordset.  DAO fornisce ulteriori oggetti, ad esempio per l'utilizzo con strutture di tabella, per il salvataggio delle query da riutilizzare e così via, che saranno descritti più avanti.  MFC fornisce classi per ciascuno di questi oggetti: un gruppo di classi per DAO e un altro gruppo per ODBC.  
  
 L'utilizzo di MFC semplifica notevolmente l'accesso ai dati.  Le classi di database DAO e ODBC garantiscono astrazioni di alto livello che consentono di non utilizzare DAO o ODBC direttamente.  L'utilizzo diretto delle API è più complesso rispetto all'uso delle classi MFC,  specialmente se si scrivono applicazioni di piccole dimensioni e relativamente semplici.  
  
 Con le classi di database vengono aggiunti i seguenti componenti alla libreria di classi MFC:  
  
-   Classi di database C\+\+ che forniscono un'API di alto livello per l'accesso ai database tramite DAO o ODBC.  
  
-   Estensioni della procedura guidata per la creazione di un'applicazione e di **Aggiungi classe** per la creazione di classi di database specifiche dell'applicazione.  
  
-   Programmi di esempio che illustrano l'utilizzo delle classi e delle procedure guidate.  
  
-   Documentazione online, che include informazioni generali, articoli riguardanti la programmazione e materiale di riferimento per le classi.  
  
 Per informazioni su questi componenti, vedere [ODBC e MFC](../data/odbc/odbc-and-mfc.md).  
  
 Per ulteriori informazioni, vedere:  
  
-   [Scelta dell'utilizzo di DAO e ODBC](../data/should-i-use-dao-or-odbc-q.md)  
  
-   [Disponibilità del linguaggio DDL \(Database Definition Language\) e DML \(Database Manipulation Language](../data/are-ddl-and-dml-supported-q.md) in DAO e ODBC  
  
-   [Installazione del supporto di MFC per database](../data/installing-mfc-database-support.md)  
  
-   Classi [ODBC](../data/odbc/odbc-and-mfc.md) in MFC.  
  
-   [Documentazione per la programmazione dell'accesso ai dati MFC](../data/mfc-database-documentation.md)  
  
-   [Implementazione di ODBC in MFC](../data/odbc/odbc-and-mfc.md)  
  
## Vedere anche  
 [Domande frequenti relative all'accesso ai dati](../data/data-access-frequently-asked-questions-mfc-data-access.md)