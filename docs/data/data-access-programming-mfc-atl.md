---
title: "Programmazione dell&#39;accesso ai dati (MFC/ATL) | Microsoft Docs"
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
  - "dati [C++], tecnologie di accesso ai dati"
  - "accesso ai dati [C++], librerie di classi per i database"
  - "database [C++], MFC"
  - "MFC [C++], applicazioni di accesso ai dati"
  - "OLE DB [C++], tecnologie di accesso ai dati"
ms.assetid: def97b2c-b5a6-445f-afeb-308050fd4852
caps.latest.revision: 14
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Programmazione dell&#39;accesso ai dati (MFC/ATL)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Visual C\+\+ fornisce diversi metodi per usare i database.  Il metodo consigliato consiste nell'uso di una delle librerie di classi quali la libreria ATL \(Active Template Class Library\) o la libreria MFC \(Microsoft Foundation Class\), che semplifica le operazioni con le API di database.  
  
> [!NOTE]
>  In questo argomento vengono descritte le tecnologie meno recenti per la programmazione di database in Visual C\+\+.  Per informazioni sulla programmazione dell'accesso ai dati usando Visual C\+\+ e SQL Server 2005, vedere [Accesso ai dati](../dotnet/data-access-using-adonet-cpp-cli.md), [Accesso ai dati in Visual Studio](../Topic/Accessing%20data%20in%20Visual%20Studio.md) e [Creating SQL Server 2005 Objects In Managed Code](http://msdn.microsoft.com/it-it/5358a825-e19b-49aa-8214-674ce5fed1da).  
  
 Le librerie di classi supportano i seguenti tipi di accesso ai dati:  
  
-   ATL fornisce modelli OLE DB e attributi di database.  
  
-   MFC fornisce ODBC \(Open Database Connectivity\) e un driver ODBC.  
  
 Queste librerie forniscono astrazioni che semplificano l'uso dei database e lo completano con la velocità, la potenza e la flessibilità di C\+\+.  Le operazioni di accesso ai dati vengono integrate con il framework di applicazione della libreria.  
  
 In alternativa, è possibile chiamare direttamente le funzioni delle API del database dagli SDK \(Software Development Kit\) di COM, ODBC o DAO.  Per informazioni sulla programmazione diretta con le funzioni delle API COM, DAO o ODBC, vedere l'SDK di COM, DAO o ODBC.  
  
 Usare la libreria ATL OLE DB se si desidera accedere ai dati indipendentemente dal formato in cui sono stati archiviati.  Usare, invece, le classi ODBC MFC quando non si lavora con database Microsoft Jet \(MDB\) e si desidera avvalersi dell'API ODBC per ottenere l'indipendenza completa dall'origine dati.  Usare, infine, le classi DAO MFC quando si desidera operare con database Microsoft Jet \(MDB\) o con database esterni quali le origini dati ODBC.  
  
> [!NOTE]
>  Microsoft consiglia di usare OLE DB o ODBC per i nuovi progetti.  DAO deve essere usato solo per le operazioni di gestione delle applicazioni esistenti.  
  
 Oltre alla creazione di applicazioni autonome per database, è spesso possibile usare efficacemente un database in altri tipi di programmi come comodo mezzo di archiviazione e recupero dei dati.  
  
|Per altre informazioni|Vedere|  
|----------------------------|------------|  
|**Selezione di una tecnologia per database**||  
|Confronto tra ODBC e  DAO|[È preferibile usare DAO o ODBC?](../data/should-i-use-dao-or-odbc-q.md)|  
|Ricerca in Microsoft Knowledge Base di altri articoli sui database redatti da tecnici del servizio di supporto del prodotto|[Microsoft Knowledge Base](../data/where-can-i-find-microsoft-knowledge-base-articles-on-database-topics-q.md)|  
|**Supporto di ATL per database \(OLE DB\)**||  
|Programmazione con OLE DB \(concetti\)|[Cenni preliminari sulla programmazione con OLE DB](../data/oledb/ole-db-programming-overview.md)|  
|Uso dei modelli consumer OLE DB \(concetti\)|[Modelli consumer OLE DB](../data/oledb/ole-db-consumer-templates-cpp.md)|  
|Attributi del consumer OLE DB|[Attributi del consumer OLE DB](../windows/ole-db-consumer-attributes.md)|  
|Uso dei modelli provider OLE DB \(concetti\)|[Modelli provider OLE DB](../data/oledb/ole-db-provider-templates-cpp.md)|  
|Aggiunta di un consumer OLE DB a un progetto MFC|[Creazione di un consumer OLE DB](../data/oledb/creating-an-ole-db-consumer.md)|  
|**Supporto di MFC per database \(ODBC e DAO\)**||  
|Definizione di DAO e ODBC|[Cosa sono DAO e ODBC?](../data/what-are-dao-and-odbc-q.md)|  
|Quando usare le classi di database MFC|[Quando è consigliabile usare le classi di database?](../data/when-should-i-use-the-database-classes-q.md)|  
|Informazioni sul modello di programmazione MFC per database|[Cos'è il modello di programmazione MFC per database?](../data/what-is-the-mfc-database-programming-model-q.md)|  
|Scelta delle classi DAO MFC o delle classi ODBC MFC|[È preferibile usare DAO o ODBC?](../data/should-i-use-dao-or-odbc-q.md)|  
|Origini dati a cui è possibile accedere con DAO e ODBC|[Quali origini dati sono accessibili con DAO e quali con ODBC?](../data/what-data-sources-can-i-access-with-dao-and-odbc-q.md)|  
|Open Database Connectivity \(ODBC\)|[ODBC e MFC](../data/odbc/odbc-and-mfc.md)|  
|Chiamata diretta alle API DAO o ODBC con l'uso delle classi|[È possibile chiamare direttamente le API DAO o ODBC?](../data/can-i-call-dao-or-odbc-directly-q.md)|  
|Driver ODBC disponibili|[Elenco dei driver ODBC](../data/odbc/odbc-driver-list.md)|  
|Funzionamento delle classi di database con l'architettura documento\/visualizzazione MFC|[MFC: utilizzo di classi di database con documenti e viste](../data/mfc-using-database-classes-with-documents-and-views.md)|  
|Installazione del supporto di MFC per database, driver ODBC installati per impostazione predefinita in Visual C\+\+ e componenti degli SDK di ODBC e DAO installati|[Installazione del supporto di MFC per database](../data/installing-mfc-database-support.md)|  
|**Controlli associati a dati \(ADO e RDO\)**||  
|Scrittura di un programma che usa i controlli associati a dati|[Controlli associati a dati \(ADO e RDO\)](../data/ado-rdo/data-bound-controls-ado-and-rdo.md)|  
|Data binding con i controlli ActiveX|[Controlli ActiveX MFC: utilizzo delil data binding in un controllo ActiveX](../mfc/mfc-activex-controls-using-data-binding-in-an-activex-control.md)|  
|Distribuzione dei controlli ActiveX|[Controlli ActiveX MFC: distribuzione dei controlli ActiveX](../mfc/mfc-activex-controls-distributing-activex-controls.md)|  
  
## Vedere anche  
 [Accesso ai dati](../Topic/Data%20Access%20in%20Visual%20C++.md)