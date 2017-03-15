---
title: "Installazione del supporto per database (MFC/ATL) | Microsoft Docs"
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
  - "ATL [C++], supporto database"
  - "accesso ai dati [C++], installazione del supporto per database"
  - "database [C++], installazione del supporto per database"
  - "installazione del supporto per database"
ms.assetid: 3820ba96-4fb8-4405-83dd-bb3bc5998667
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Installazione del supporto per database (MFC/ATL)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Durante l'installazione di Visual C\+\+ .NET, vengono installati automaticamente anche i componenti per database descritti di seguito:  
  
-   Tutti i componenti OLE DB ATL necessari.  Per altre informazioni, vedere [Installazione del supporto di ATL per database](../data/installing-atl-database-support.md).  
  
-   Un insieme di driver ODBC con Gestione driver ODBC e il programma di amministrazione di ODBC.  Per altre informazioni, vedere "Driver ODBC installati" e "Componenti dell'SDK di ODBC installati" in [Installazione del supporto di MFC per database](../data/installing-mfc-database-support.md).  
  
-   Componenti necessari dell'SDK di DAO.  Si tratta di file della Guida non disponibili nella presente documentazione.  Se tuttavia si usa DAO, sarà necessario installare una versione del database Jet compatibile con il sistema operativo in uso.  Per altre informazioni, vedere "Componenti dell'SDK di DAO installati" in [Installazione del supporto di MFC per database](../data/installing-mfc-database-support.md).  
  
 Durante l'installazione di base viene inoltre installato MDAC \(Microsoft Data Access Components\), che fornisce i componenti necessari per supportare la programmazione dell'accesso ai dati in Visual C\+\+ .NET.  
  
 Insieme a Visual C\+\+ .NET viene installato l'SDK di MDAC 2.7.  Per aggiornamenti e informazioni sull'SDK di MDAC, visitare il sito Web Microsoft Universal Data Access all'indirizzo [http:\/\/go.microsoft.com\/fwlink\/?LinkId\=121548](http://go.microsoft.com/fwlink/?LinkId=121548).  
  
 Nel caso in cui si ridistribuiscano applicazioni per l'accesso ai dati, è inoltre necessario disporre del programma di ridistribuzione di MDAC 2.7.  L'SDK di MDAC 2.7 è stato progettato per essere usato con il programma di ridistribuzione di MDAC 2.7 \(Mdac\_typ.exe\) incluso nella directory MDAC del CD\-ROM dei prerequisiti di Visual Studio .NET.  È inoltre possibile eseguire il download di Mdac\_typ.exe dal collegamento all'SDK di MDAC 2.7 sopra riportato.  Per altre informazioni sulla ridistribuzione dei componenti, vedere [Ridistribuzione dei controlli](../data/ado-rdo/redistributing-controls.md).  
  
## Vedere anche  
 [Accesso ai dati](../Topic/Data%20Access%20in%20Visual%20C++.md)