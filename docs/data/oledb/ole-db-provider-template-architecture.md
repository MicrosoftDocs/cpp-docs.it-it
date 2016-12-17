---
title: "Architettura dei modelli di provider OLE DB | Microsoft Docs"
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
  - "architettura [C++], provider OLE DB"
  - "OLE DB [C++], modello a oggetti"
  - "modelli del provider OLE DB, modello a oggetti"
ms.assetid: 639304a3-f9e0-44dc-8d0c-0ebd2455b363
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Architettura dei modelli di provider OLE DB
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

## Origini dati e sessioni  
 L'architettura dei provider OLE DB include un oggetto DataSource \(origine dati\) e uno o più oggetti Session per le sessioni.  L'oggetto DataSource è l'oggetto iniziale di cui ciascun provider deve creare un'istanza.  Quando un'applicazione consumer necessita di dati, viene creato l'oggetto DataSource per avviare il provider.  L'oggetto DataSource a sua volta crea un oggetto Session mediante l'interfaccia **IDBCreateSession** affinché il consumer possa eseguire la connessione all'oggetto DataSource.  Per i programmatori ODBC l'oggetto DataSource può essere considerato come l'equivalente di **HENV**, mentre l'oggetto Session corrisponde a **HDBC**.  
  
 ![Architettura del provider](../../data/oledb/media/vc4twb1.gif "vc4TWB1")  
  
 Con i file di origine generati dalla Creazione guidata provider OLE DB ATL i modelli OLE DB implementano un oggetto DataSource.  Una sessione è un oggetto che corrisponde a **TSession** OLE DB.  
  
## Interfacce facoltative e obbligatorie  
 I modelli provider OLE DB offrono implementazioni precostituite di tutte le interfacce obbligatorie.  Le interfacce facoltative e obbligatorie vengono definite da OLE DB per diversi tipi di oggetti:  
  
-   [Origine dati](../../data/oledb/data-source-object-interfaces.md)  
  
-   [Session](../../data/oledb/session-object-interfaces.md)  
  
-   [Rowset](../../data/oledb/rowset-object-interfaces.md)  
  
-   [Comando](../../data/oledb/command-object-interfaces.md)  
  
-   [Transazione](../../data/oledb/transaction-object-interfaces.md)  
  
 Come si può notare, i modelli provider OLE DB non implementano gli oggetti Row e Storage.  
  
 Nella tabella riportata di seguito sono elencate le interfacce facoltative e obbligatorie per gli oggetti sopra indicati, in base alla [documentazione SDK su OLE DB 2.6](https://msdn.microsoft.com/en-us/library/ms722784.aspx):  
  
|Componente|Interfaccia|Commento|  
|----------------|-----------------|--------------|  
|[DataSource](../../data/oledb/data-source-object-interfaces.md) \([CDataSource](../../data/oledb/cdatasource-class.md)\)|\[obbligatoria\] **IDBCreateSession**<br /><br /> \[obbligatoria\] **IDBInitialize**<br /><br /> \[obbligatoria\] `IDBProperties`<br /><br /> \[obbligatoria\] `IPersist`<br /><br /> \[facoltativa\] **IConnectionPointContainer**<br /><br /> \[facoltativa\] **IDBAsynchStatus**<br /><br /> \[facoltativa\] **IDBDataSourceAdmin**<br /><br /> \[facoltativa\] **IDBInfo**<br /><br /> \[facoltativa\] `IPersistFile`<br /><br /> \[facoltativa\] **ISupportErrorInfo**|Connessione dal consumer al provider.  L'oggetto viene utilizzato per specificare le proprietà relative alla connessione, quali ID utente, password e DSN.  È inoltre possibile utilizzare l'oggetto per amministrare un'origine dati \(creazione, aggiornamento, eliminazione, tabelle e così via\).|  
|[Session](../../data/oledb/session-object-interfaces.md) \([CSession](../../data/oledb/cdataconnection-operator-csession-amp.md)\)|\[obbligatoria\] **IGetDataSource**<br /><br /> \[obbligatoria\] `IOpenRowset`<br /><br /> \[obbligatoria\] **ISessionProperties**<br /><br /> \[facoltativa\] **IAlterIndex**<br /><br /> \[facoltativa\] **IAlterTable**<br /><br /> \[facoltativa\] **IBindResource**<br /><br /> \[facoltativa\] **ICreateRow**<br /><br /> \[facoltativa\] **IDBCreateCommand**<br /><br /> \[facoltativa\] **IDBSchemaRowset**<br /><br /> \[facoltativa\] **IIndexDefinition**<br /><br /> \[facoltativa\] **ISupportErrorInfo**<br /><br /> \[facoltativa\] **ITableCreation**<br /><br /> \[facoltativa\] **ITableDefinition**<br /><br /> \[facoltativa\] **ITableDefinitionWithConstraints**<br /><br /> \[facoltativa\] **ITransaction**<br /><br /> \[facoltativa\] **ITransactionJoin**<br /><br /> \[facoltativa\] **ITransactionLocal**<br /><br /> \[facoltativa\] **ITransactionObject**|L'oggetto Session rappresenta una singola conversazione tra un consumer e un provider.  Per vari aspetti è simile a **HSTMT** ODBC, in quanto possono essere presenti più sessioni contemporaneamente.<br /><br /> L'oggetto Session è il principale collegamento per la funzionalità OLE DB.  Per accedere a un oggetto Command, Transaction o Rowset, è necessario passare dall'oggetto Session.|  
|[Rowset](../../data/oledb/rowset-object-interfaces.md) \([CRowset](../../data/oledb/crowset-class.md)\)|\[obbligatoria\] `IAccessor`<br /><br /> \[obbligatoria\] `IColumnsInfo`<br /><br /> \[obbligatoria\] **IConvertType**<br /><br /> \[obbligatoria\] `IRowset`<br /><br /> \[obbligatoria\] `IRowsetInfo`<br /><br /> \[facoltativa\] **IChapteredRowset**<br /><br /> \[facoltativa\] **IColumnsInfo2**<br /><br /> \[facoltativa\] **IColumnsRowset**<br /><br /> \[facoltativa\] **IConnectionPointContainer**<br /><br /> \[facoltativa\] **IDBAsynchStatus**<br /><br /> \[facoltativa\] **IGetRow**<br /><br /> \[facoltativa\] `IRowsetChange`<br /><br /> \[facoltativa\] **IRowsetChapterMember**<br /><br /> \[facoltativa\] **IRowsetCurrentIndex**<br /><br /> \[facoltativa\] **IRowsetFind**<br /><br /> \[facoltativa\] **IRowsetIdentity**<br /><br /> \[facoltativa\] **IRowsetIndex**<br /><br /> \[facoltativa\] `IRowsetLocate`<br /><br /> \[facoltativa\] **IRowsetRefresh**<br /><br /> \[facoltativa\] `IRowsetScroll`<br /><br /> \[facoltativa\] `IRowsetUpdate`<br /><br /> \[facoltativa\] **IRowsetView**<br /><br /> \[facoltativa\] **ISupportErrorInfo**<br /><br /> \[facoltativa\] **IRowsetBookmark**|L'oggetto Rowset rappresenta i dati provenienti dall'origine dati.  L'oggetto effettua le associazioni di tali dati, nonché di qualsiasi operazione base \(aggiornamento, recupero, spostamento e altre\) eseguita sui dati.  È sempre necessario disporre di un oggetto Rowset per contenere e modificare i dati.|  
|[Command](../../data/oledb/command-object-interfaces.md) \([CCommand](http://msdn.microsoft.com/it-it/52bef5da-c1a0-4223-b4e6-9e464b6db409)\)|\[obbligatoria\] `IAccessor`<br /><br /> \[obbligatoria\] `IColumnsInfo`<br /><br /> \[obbligatoria\] `ICommand`<br /><br /> \[obbligatoria\] **ICommandProperties**<br /><br /> \[obbligatoria\] `ICommandText`<br /><br /> \[obbligatoria\] **IConvertType**<br /><br /> \[facoltativa\] **IColumnsRowset**<br /><br /> \[facoltativa\] **ICommandPersist**<br /><br /> \[facoltativa\] **ICommandPrepare**<br /><br /> \[facoltativa\] `ICommandWithParameters`<br /><br /> \[facoltativa\] **ISupportErrorInfo**<br /><br /> \[facoltativa\] **ICommandStream**|L'oggetto Command gestisce le operazioni sui dati, quali ad esempio le query.  È in grado di gestire istruzioni con o senza parametri.<br /><br /> È inoltre utilizzato per la gestione delle associazioni per parametri e colonne di output.  Un'associazione è una struttura che contiene informazioni sulle modalità di recupero di una colonna in un rowset,  quali la posizione ordinale, il tipo di dati, la lunghezza e lo stato.|  
|[Transaction](../../data/oledb/transaction-object-interfaces.md) \(facoltativo\)|\[obbligatoria\] **IConnectionPointContainer**<br /><br /> \[obbligatoria\] **ITransaction**<br /><br /> \[facoltativa\] **ISupportErrorInfo**|L'oggetto Transaction definisce un'unità atomica di lavoro su un'origine dati e determina le relazioni tra le unità di lavoro.  Questo oggetto non è supportato direttamente dai modelli provider OLE DB, ma deve essere creato manualmente.|  
  
 Per ulteriori informazioni, vedere i seguenti argomenti:  
  
-   [Mappe delle proprietà](../../data/oledb/property-maps.md)  
  
-   [Record utente](../../data/oledb/user-record.md)  
  
## Vedere anche  
 [Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Interfaces](https://msdn.microsoft.com/en-us/library/ms709709.aspx)