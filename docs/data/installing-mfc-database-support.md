---
title: "Installazione del supporto di MFC per database | Microsoft Docs"
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
  - "DAO [C++], installazione di componenti"
  - "database [C++], installazione del supporto per database"
  - "database [C++], MFC"
  - "installazione di DAO"
  - "installazione di ODBC"
  - "componenti ODBC [C++], installazione"
  - "driver ODBC [C++], installazione"
ms.assetid: a6c2fc84-9e0e-4f39-a464-0bcbc415b946
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Installazione del supporto di MFC per database
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

##  <a name="_core_odbc_drivers_installed"></a> Driver ODBC installati  
 Il programma di installazione comprende i seguenti driver ODBC:  
  
-   driver per Microsoft Access  
  
-   driver per Microsoft dBASE  
  
-   driver per Microsoft Excel  
  
-   driver per Microsoft FoxPro VFP  
  
-   driver per Microsoft Visual FoxPro  
  
-   driver Microsoft ODBC per Oracle  
  
-   driver per Microsoft Paradox  
  
-   driver Microsoft ODBC per testo  
  
-   driver per Microsoft SQL Server  
  
 Per informazioni sulla possibilità di ottenere driver aggiuntivi e per un elenco dei driver ODBC inclusi in questa versione di Visual C\+\+, vedere [Elenco dei driver ODBC](../data/odbc/odbc-driver-list.md).  
  
##  <a name="_core_odbc_sdk_components_installed"></a> Componenti dell'SDK di ODBC installati  
 Visual C\+\+ include molti componenti ODBC importanti, tra cui i file di intestazione, le librerie, le DLL e gli strumenti necessari per l'utilizzo di ODBC.  Gli strumenti disponibili sono l'applicazione Amministratore ODBC del Pannello di controllo, che consente di configurare le origini dati ODBC, e Gestione driver ODBC.  Sono inoltre disponibili driver ODBC per i DBMS più comuni, come descritto in [Driver ODBC installati](#_core_odbc_drivers_installed).  
  
 L'SDK di ODBC offre ulteriori informazioni e strumenti per la scrittura e il controllo dei driver ODBC.  Notare che, a partire da Visual C\+\+ .NET, l'SDK ODBC non è più incluso nel supporto di installazione di Visual C\+\+ .NET ed è disponibile come parte di [!INCLUDE[winsdkshort](../atl/reference/includes/winsdkshort_md.md)] installato con i prerequisiti di Visual Studio .NET.  
  
##  <a name="_core_dao_sdk_components_installed"></a> Componenti dell'SDK di DAO installati  
  
> [!NOTE]
>  Si consiglia di utilizzare OLE DB oppure ODBC per i nuovi progetti  e di utilizzare DAO solo per le operazioni di manutenzione delle applicazioni esistenti.  
  
 In base all'impostazione predefinita, vengono installati i seguenti componenti dell'SDK di DAO:  
  
-   Microsoft Jet \(4.0 SP3\)  
  
-   Microsoft Jet \(3.x MDB\)  
  
-   Microsoft Jet \(1.x, 2.x\)  
  
-   tutti i formati di database elencati in [Origini dati accessibili con DAO e ODBC](../data/what-data-sources-can-i-access-with-dao-and-odbc-q.md)  
  
 In Visual C\+\+ .NET, l'SDK DAO è installato con i prerequisiti di Visual Studio .NET.  Eseguire \\Jet\\Jetsetup.exe.  
  
> [!NOTE]
>  Si consiglia di utilizzare Jet 4.0 Service Pack 3 versione 2927.04 o successiva.  Jet 4.0 Service Pack 3 è fornito con Windows 2000 e Windows ME.  Questa versione di Jet riduce il numero di versioni Jet da testare con l'applicazione.  Windows XP potrebbe contenere una versione diversa di Jet.  Vedere "Nota sulla ridistribuzione dei componenti DAO" in [Ridistribuzione di controlli](../data/ado-rdo/redistributing-controls.md).  
  
 Se si desidera installare altri componenti dell'SDK di DAO, ad esempio le classi C\+\+ dell'SDK, i file di esempio o la versione per Windows della Guida di DAO, installare l'SDK di DAO dal CD di Visual C\+\+ 6.0.  
  
 Per aggiornamenti e informazioni su OLE DB, vedere il sito Web microsoft Universal Data Access a [http:\/\/go.microsoft.com\/fwlink\/?LinkId\=121548](http://go.microsoft.com/fwlink/?LinkId=121548)l.  
  
## Vedere anche  
 [Programmazione dell'accesso ai dati \(MFC\/ATL\)](../data/data-access-programming-mfc-atl.md)