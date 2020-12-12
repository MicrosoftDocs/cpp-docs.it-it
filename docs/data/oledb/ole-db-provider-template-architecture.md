---
description: 'Altre informazioni su: OLE DB architettura del modello di provider'
title: Architettura dei modelli di provider OLE DB
ms.date: 11/19/2018
helpviewer_keywords:
- OLE DB [C++], object model
- architecture [C++], OLE DB Provider
- OLE DB provider templates, object model
ms.assetid: 639304a3-f9e0-44dc-8d0c-0ebd2455b363
ms.openlocfilehash: 1cc1619ab7ed13c2d7962f75229df2ecd8cf0d78
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97317129"
---
# <a name="ole-db-provider-template-architecture"></a>Architettura dei modelli di provider OLE DB

## <a name="data-sources-and-sessions"></a>Origini dati e sessioni

L'architettura del provider OLE DB include un oggetto origine dati e una o più sessioni. L'oggetto origine dati è l'oggetto iniziale di cui ogni provider deve creare un'istanza. Quando un'applicazione consumer necessita di dati, crea la co-creazione dell'oggetto origine dati per avviare il provider. L'oggetto origine dati consente di creare un oggetto sessione (utilizzando l' `IDBCreateSession` interfaccia) tramite il quale il consumer si connette all'oggetto origine dati. I programmatori ODBC possono considerare l'oggetto origine dati come equivalente a `HENV` e l'oggetto sessione come equivalente a `HDBC` .

![Architettura del provider](../../data/oledb/media/vc4twb1.gif "Architettura del provider")

Insieme ai file di origine creati dalla **creazione guidata provider di OLE DB**, i modelli di OLE DB implementano un oggetto origine dati. Una sessione è un oggetto che corrisponde al OLE DB `TSession` .

## <a name="mandatory-and-optional-interfaces"></a>Interfacce obbligatorie e facoltative

I modelli di provider OLE DB offrono implementazioni preconfezionate per tutte le interfacce necessarie. Le interfacce obbligatorie e facoltative sono definite da OLE DB per diversi tipi di oggetti:

- [Origine dati](../../data/oledb/data-source-object-interfaces.md)

- [Sessione](../../data/oledb/session-object-interfaces.md)

- [Set di righe](../../data/oledb/rowset-object-interfaces.md)

- [Comando](../../data/oledb/command-object-interfaces.md)

- [Transazione](../../data/oledb/transaction-object-interfaces.md)

I modelli di provider OLE DB non implementano gli oggetti Row e storage.

La tabella seguente elenca le interfacce obbligatorie e facoltative per gli oggetti elencati sopra, in base alla [documentazione di OLE DB 2,6 SDK](/previous-versions/windows/desktop/ms722784(v=vs.85)).

|Componente|Interfaccia|Commento|
|---------------|---------------|-------------|
|[Origine dati](../../data/oledb/data-source-object-interfaces.md) ([CDataSource](../../data/oledb/cdatasource-class.md))|obbligatorio `IDBCreateSession`<br /><br /> obbligatorio `IDBInitialize`<br /><br /> obbligatorio `IDBProperties`<br /><br /> obbligatorio `IPersist`<br /><br /> opzionale `IConnectionPointContainer`<br /><br /> opzionale `IDBAsynchStatus`<br /><br /> opzionale `IDBDataSourceAdmin`<br /><br /> opzionale `IDBInfo`<br /><br /> opzionale `IPersistFile`<br /><br /> opzionale `ISupportErrorInfo`|Connessione dal consumer al provider. L'oggetto viene utilizzato per specificare le proprietà relative alla connessione, ad esempio l'ID utente, la password e il nome dell'origine dati. L'oggetto può essere utilizzato anche per amministrare un'origine dati (creazione, aggiornamento, eliminazione, tabelle e così via).|
|[Sessione](../../data/oledb/session-object-interfaces.md) ([CSession](./cdataconnection-class.md#op_csession_amp))|obbligatorio `IGetDataSource`<br /><br /> obbligatorio `IOpenRowset`<br /><br /> obbligatorio `ISessionProperties`<br /><br /> opzionale `IAlterIndex`<br /><br /> opzionale `IAlterTable`<br /><br /> opzionale `IBindResource`<br /><br /> opzionale `ICreateRow`<br /><br /> opzionale `IDBCreateCommand`<br /><br /> opzionale `IDBSchemaRowset`<br /><br /> opzionale `IIndexDefinition`<br /><br /> opzionale `ISupportErrorInfo`<br /><br /> opzionale `ITableCreation`<br /><br /> opzionale `ITableDefinition`<br /><br /> opzionale `ITableDefinitionWithConstraints`<br /><br /> opzionale `ITransaction`<br /><br /> opzionale `ITransactionJoin`<br /><br /> opzionale `ITransactionLocal`<br /><br /> opzionale `ITransactionObject`|L'oggetto Session è una singola conversazione tra un consumer e un provider. È simile a ODBC `HSTMT` in quanto possono essere presenti molte sessioni simultanee attive.<br /><br /> L'oggetto Session è il collegamento principale per ottenere OLE DB funzionalità. Per ottenere un comando, una transazione o un oggetto set di righe, è possibile passare attraverso l'oggetto Session.|
|[Set di righe](../../data/oledb/rowset-object-interfaces.md) ([CRowset](../../data/oledb/crowset-class.md))|obbligatorio `IAccessor`<br /><br /> obbligatorio `IColumnsInfo`<br /><br /> obbligatorio `IConvertType`<br /><br /> obbligatorio `IRowset`<br /><br /> obbligatorio `IRowsetInfo`<br /><br /> opzionale `IChapteredRowset`<br /><br /> opzionale `IColumnsInfo2`<br /><br /> opzionale `IColumnsRowset`<br /><br /> opzionale `IConnectionPointContainer`<br /><br /> opzionale `IDBAsynchStatus`<br /><br /> opzionale `IGetRow`<br /><br /> opzionale `IRowsetChange`<br /><br /> opzionale `IRowsetChapterMember`<br /><br /> opzionale `IRowsetCurrentIndex`<br /><br /> opzionale `IRowsetFind`<br /><br /> opzionale `IRowsetIdentity`<br /><br /> opzionale `IRowsetIndex`<br /><br /> opzionale `IRowsetLocate`<br /><br /> opzionale `IRowsetRefresh`<br /><br /> opzionale `IRowsetScroll`<br /><br /> opzionale `IRowsetUpdate`<br /><br /> opzionale `IRowsetView`<br /><br /> opzionale `ISupportErrorInfo`<br /><br /> opzionale `IRowsetBookmark`|L'oggetto set di righe corrisponde ai dati dell'origine dati. L'oggetto viene utilizzato per le associazioni di tali dati e per qualsiasi operazione di base (aggiornamento, recupero, spostamento e altro) sui dati. È sempre presente un oggetto set di righe per la conservazione e la manipolazione dei dati.|
|[Comando](../../data/oledb/command-object-interfaces.md) ([CCommand](ccommand-class.md))|obbligatorio `IAccessor`<br /><br /> obbligatorio `IColumnsInfo`<br /><br /> obbligatorio `ICommand`<br /><br /> obbligatorio `ICommandProperties`<br /><br /> obbligatorio `ICommandText`<br /><br /> obbligatorio `IConvertType`<br /><br /> opzionale `IColumnsRowset`<br /><br /> opzionale `ICommandPersist`<br /><br /> opzionale `ICommandPrepare`<br /><br /> opzionale `ICommandWithParameters`<br /><br /> opzionale `ISupportErrorInfo`<br /><br /> opzionale `ICommandStream`|L'oggetto Command gestisce le operazioni sui dati, ad esempio le query. Può gestire istruzioni con parametri o senza parametri.<br /><br /> L'oggetto Command è inoltre responsabile della gestione delle associazioni per i parametri e le colonne di output. Un'associazione è una struttura che contiene informazioni sul modo in cui deve essere recuperata una colonna in un set di righe. Contiene informazioni come ordinali, tipo di dati, lunghezza e stato.|
|[Transaction](../../data/oledb/transaction-object-interfaces.md) (facoltativo)|obbligatorio `IConnectionPointContainer`<br /><br /> obbligatorio `ITransaction`<br /><br /> opzionale `ISupportErrorInfo`|L'oggetto Transaction definisce un'unità di lavoro atomica su un'origine dati e determina il modo in cui tali unità di lavoro sono correlate tra loro. Questo oggetto non è supportato direttamente dai modelli di provider OLE DB, ovvero viene creato un oggetto personalizzato.|

Per altre informazioni, vedere i seguenti argomenti:

- [Mappe delle proprietà](../../data/oledb/property-maps.md)

- [Record utente](../../data/oledb/user-record.md)

## <a name="see-also"></a>Vedi anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Interfacce di OLE DB](/previous-versions/windows/desktop/ms709709(v=vs.85))<br/>
