---
title: Architettura dei modelli Provider OLE DB | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB [C++], object model
- architecture [C++], OLE DB Provider
- OLE DB provider templates, object model
ms.assetid: 639304a3-f9e0-44dc-8d0c-0ebd2455b363
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 099f6e3ce4a84baa156dd26d9bff62be8a4936da
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="ole-db-provider-template-architecture"></a>Architettura dei modelli di provider OLE DB
## <a name="data-sources-and-sessions"></a>Origini dati e sessioni  
 L'architettura del provider OLE DB include un oggetto origine dati e una o più sessioni. L'oggetto origine dati è l'oggetto iniziale che è necessario creare un'istanza di ogni provider. Quando un'applicazione consumer necessita di dati, creato l'oggetto origine dati per avviare il provider. L'oggetto origine dati crea un oggetto sessione (utilizzando la **IDBCreateSession** interface) tramite cui il consumer si connette all'oggetto di origine dati. Per i programmatori ODBC possono essere considerato l'oggetto origine dati come l'equivalente del **HENV** e l'oggetto di sessione come equivalente al **HDBC**.  
  
 ![Architettura del provider](../../data/oledb/media/vc4twb1.gif "vc4twb1")  
  
 Con i file di origine creati dalla creazione guidata Provider OLE DB, i modelli OLE DB implementano un oggetto origine dati. Una sessione è un oggetto che corrisponde a OLE DB **TSession**.  
  
## <a name="mandatory-and-optional-interfaces"></a>Interfacce facoltative e obbligatorie  
 I modelli di provider OLE DB offrono le implementazioni predefinite per tutte le interfacce richieste. Le interfacce obbligatorie e facoltative vengono definite da OLE DB per diversi tipi di oggetti:  
  
-   [Origine dati](../../data/oledb/data-source-object-interfaces.md)  
  
-   [Sessione](../../data/oledb/session-object-interfaces.md)  
  
-   [Rowset](../../data/oledb/rowset-object-interfaces.md)  
  
-   [Comando](../../data/oledb/command-object-interfaces.md)  
  
-   [Transazione](../../data/oledb/transaction-object-interfaces.md)  
  
 Si noti che i modelli di provider OLE DB non implementano oggetti row e archiviazione.  
  
 La tabella seguente elenca le interfacce obbligatorie e facoltative per gli oggetti elencati in precedenza, in base al [OLE DB 2.6 documentazione SDK](https://msdn.microsoft.com/en-us/library/ms722784.aspx).  
  
|Componente|Interfaccia|Commento|  
|---------------|---------------|-------------|  
|[Origine dati](../../data/oledb/data-source-object-interfaces.md) ([CDataSource](../../data/oledb/cdatasource-class.md))|[obbligatorio] **IDBCreateSession**<br /><br /> [obbligatorio] **IDBInitialize**<br /><br /> [obbligatorio] `IDBProperties`<br /><br /> [obbligatorio] `IPersist`<br /><br /> [facoltativo] **IConnectionPointContainer**<br /><br /> [facoltativo] **IDBAsynchStatus**<br /><br /> [facoltativo] **IDBDataSourceAdmin**<br /><br /> [facoltativo] **IDBInfo**<br /><br /> [facoltativo] `IPersistFile`<br /><br /> [facoltativo] **ISupportErrorInfo**|Connessione al provider del consumer. L'oggetto viene utilizzato per specificare le proprietà per la connessione ad esempio il nome di origine dati, password e ID utente. L'oggetto può essere utilizzato anche per amministrare un'origine dati (creare, aggiornare, eliminare, tabelle e così via).|  
|[Sessione](../../data/oledb/session-object-interfaces.md) ([CSession](../../data/oledb/cdataconnection-operator-csession-amp.md))|[obbligatorio] **IGetDataSource**<br /><br /> [obbligatorio] `IOpenRowset`<br /><br /> [obbligatorio] **ISessionProperties**<br /><br /> [facoltativo] **IAlterIndex**<br /><br /> [facoltativo] **IAlterTable**<br /><br /> [facoltativo] **IBindResource**<br /><br /> [facoltativo] **ICreateRow**<br /><br /> [facoltativo] **IDBCreateCommand**<br /><br /> [facoltativo] **IDBSchemaRowset**<br /><br /> [facoltativo] **IIndexDefinition**<br /><br /> [facoltativo] **ISupportErrorInfo**<br /><br /> [facoltativo] **ITableCreation**<br /><br /> [facoltativo] **ITableDefinition**<br /><br /> [facoltativo] **ITableDefinitionWithConstraints**<br /><br /> [facoltativo] **ITransaction**<br /><br /> [facoltativo] **ITransactionJoin**<br /><br /> [facoltativo] **ITransactionLocal**<br /><br /> [facoltativo] **ITransactionObject**|L'oggetto sessione rappresenta una singola conversazione tra un provider e consumer. È simile a ODBC **HSTMT** in quanto possono essere presenti più sessioni contemporaneamente.<br /><br /> L'oggetto di sessione è il collegamento primario per la funzionalità OLE DB. Per accedere a un comando, una transazione o un oggetto set di righe, si scorre l'oggetto di sessione.|  
|[Set di righe](../../data/oledb/rowset-object-interfaces.md) ([CRowset](../../data/oledb/crowset-class.md))|[obbligatorio] `IAccessor`<br /><br /> [obbligatorio] `IColumnsInfo`<br /><br /> [obbligatorio] **IConvertType**<br /><br /> [obbligatorio] `IRowset`<br /><br /> [obbligatorio] `IRowsetInfo`<br /><br /> [facoltativo] **IChapteredRowset**<br /><br /> [facoltativo] **IColumnsInfo2**<br /><br /> [facoltativo] **IColumnsRowset**<br /><br /> [facoltativo] **IConnectionPointContainer**<br /><br /> [facoltativo] **IDBAsynchStatus**<br /><br /> [facoltativo] **IGetRow**<br /><br /> [facoltativo] `IRowsetChange`<br /><br /> [facoltativo] **IRowsetChapterMember**<br /><br /> [facoltativo] **IRowsetCurrentIndex**<br /><br /> [facoltativo] **IRowsetFind**<br /><br /> [facoltativo] **IRowsetIdentity**<br /><br /> [facoltativo] **IRowsetIndex**<br /><br /> [facoltativo] `IRowsetLocate`<br /><br /> [facoltativo] **IRowsetRefresh**<br /><br /> [facoltativo] `IRowsetScroll`<br /><br /> [facoltativo] `IRowsetUpdate`<br /><br /> [facoltativo] **IRowsetView**<br /><br /> [facoltativo] **ISupportErrorInfo**<br /><br /> [facoltativo] **IRowsetBookmark**|Oggetto set di righe rappresenta i dati dall'origine dati. L'oggetto è responsabile per le associazioni di dati e le operazioni di base (update, fetch, lo spostamento e altri) sui dati. È sempre un oggetto set di righe per contenere e modificare i dati.|  
|[Comando](../../data/oledb/command-object-interfaces.md) ([CCommand](http://msdn.microsoft.com/en-us/52bef5da-c1a0-4223-b4e6-9e464b6db409))|[obbligatorio] `IAccessor`<br /><br /> [obbligatorio] `IColumnsInfo`<br /><br /> [obbligatorio] `ICommand`<br /><br /> [obbligatorio] **ICommandProperties**<br /><br /> [obbligatorio] `ICommandText`<br /><br /> [obbligatorio] **IConvertType**<br /><br /> [facoltativo] **IColumnsRowset**<br /><br /> [facoltativo] **ICommandPersist**<br /><br /> [facoltativo] **ICommandPrepare**<br /><br /> [facoltativo] `ICommandWithParameters`<br /><br /> [facoltativo] **ISupportErrorInfo**<br /><br /> [facoltativo] **ICommandStream**|L'oggetto comando gestisce le operazioni sui dati, ad esempio le query. È possibile gestire istruzioni con parametri o senza parametri.<br /><br /> L'oggetto comando è inoltre responsabile per la gestione delle associazioni per i parametri e colonne di output. Un'associazione è una struttura che contiene informazioni sulle modalità di recupero di una colonna, in un set di righe. Contiene informazioni quali il numero ordinale, tipo di dati, lunghezza e stato.|  
|[Transazione](../../data/oledb/transaction-object-interfaces.md) (facoltativo)|[obbligatorio] **IConnectionPointContainer**<br /><br /> [obbligatorio] **ITransaction**<br /><br /> [facoltativo] **ISupportErrorInfo**|Oggetto di transazione definisce un'unità atomica di lavoro su un'origine dati e determina come le unità di lavoro correlati tra loro. Questo oggetto non è supportato direttamente tramite i modelli di provider OLE DB (ovvero, si crea il proprio oggetto).|  
  
 Per altre informazioni, vedere i seguenti argomenti:  
  
-   [Mappe delle proprietà](../../data/oledb/property-maps.md)  
  
-   [Record utente](../../data/oledb/user-record.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Interfacce OLE DB](https://msdn.microsoft.com/en-us/library/ms709709.aspx)