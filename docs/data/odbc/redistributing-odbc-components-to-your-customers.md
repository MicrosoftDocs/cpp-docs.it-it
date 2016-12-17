---
title: "Ridistribuzione dei componenti ODBC ai clienti | Microsoft Docs"
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
  - "componenti [C++]"
  - "componenti [C++], distribuzione"
  - "componenti [C++], ridistribuzione"
  - "Amministratore ODBC"
  - "componenti ODBC, ridistribuzione"
  - "ODBC, distribuzione di componenti"
ms.assetid: 17b065b4-a307-4b89-99ac-d05831cfab87
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Ridistribuzione dei componenti ODBC ai clienti
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Se si incorporano nell'applicazione le funzionalità dei programmi dell'Amministratore ODBC, è anche necessario distribuire agli utenti finali i file necessari per l'esecuzione di tali programmi.  Tali file ODBC si trovano nella directory \\OS\\System del CD di Visual C\+\+.  Il file Redistrb.wri e il contratto di licenza, presenti nella stessa directory, contengono un elenco dei file ODBC che è possibile ridistribuire.  
  
 Consultare la documentazione relativa ai driver ODBC che si prevede di distribuire.  È necessario determinare quali DLL e quali file rendere disponibili.  
  
 È inoltre necessario leggere le sezioni [Installazione del supporto per database](../../data/installing-database-support-mfc-atl.md) per informazioni su driver e componenti ODBC e [Ridistribuzione dei controlli](../../data/ado-rdo/redistributing-controls.md) in cui viene illustrato come ridistribuire i controlli ActiveX.  
  
 Nella maggior parte dei casi, è necessario inoltre includere  la libreria di cursori ODBC, ovvero il file Odbccr32.dll.  Tale libreria fornisce ai driver del livello 1 le funzionalità di scorrimento in avanti e indietro,  oltre alla capacità di supporto degli snapshot.  Per ulteriori informazioni sulla libreria di cursori ODBC, vedere [ODBC: libreria di cursori ODBC](../../data/odbc/odbc-the-odbc-cursor-library.md).  
  
 Negli argomenti riportati di seguito vengono fornite ulteriori informazioni sull'utilizzo di ODBC con le classi di database:  
  
-   [ODBC: libreria di cursori ODBC](../../data/odbc/odbc-the-odbc-cursor-library.md)  
  
-   [ODBC: configurazione di un'origine dati ODBC](../../data/odbc/odbc-configuring-an-odbc-data-source.md)  
  
-   [ODBC: chiamata diretta delle funzioni dell'API ODBC](../../data/odbc/odbc-calling-odbc-api-functions-directly.md)  
  
## Vedere anche  
 [Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)   
 [Amministratore ODBC](../../data/odbc/odbc-administrator.md)