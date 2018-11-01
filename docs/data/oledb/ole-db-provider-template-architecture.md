---
title: Architettura dei modelli di provider OLE DB
ms.date: 10/24/2018
helpviewer_keywords:
- OLE DB [C++], object model
- architecture [C++], OLE DB Provider
- OLE DB provider templates, object model
ms.assetid: 639304a3-f9e0-44dc-8d0c-0ebd2455b363
ms.openlocfilehash: 3f12eb7c7da449715116e88c9f78ee2e32fc327f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50596170"
---
# <a name="ole-db-provider-template-architecture"></a>Architettura dei modelli di provider OLE DB

## <a name="data-sources-and-sessions"></a>Origini dati e sessioni

L'architettura del provider OLE DB include un oggetto origine dati e una o più sessioni. L'oggetto origine dati è l'oggetto iniziale che è necessario creare un'istanza di ogni provider. Quando un'applicazione consumer necessita di dati, CO-crea l'oggetto origine dati per avviare il provider. L'oggetto origine dati crea un oggetto sessione (usando il `IDBCreateSession` interface) tramite cui il consumer si connette all'oggetto di origine dati. I programmatori ODBC possono considerare l'oggetto origine dati come equivalente al `HENV` e l'oggetto di sessione come equivalenti al `HDBC`.

![Architettura del provider](../../data/oledb/media/vc4twb1.gif "vc4twb1")

Insieme ai file di origine creati per il **Creazione guidata Provider OLE DB**, modelli OLE DB implementano un oggetto origine dati. Una sessione è un oggetto che corrisponde alla proprietà OLE DB `TSession`.

## <a name="mandatory-and-optional-interfaces"></a>Interfacce obbligatorie e facoltative

I modelli di provider OLE DB offrono implementazioni predefinite per tutte le interfacce necessarie. Interfacce obbligatorie e facoltative vengono definite da OLE DB per diversi tipi di oggetti:

- [Origine dati](../../data/oledb/data-source-object-interfaces.md)

- [Sessione](../../data/oledb/session-object-interfaces.md)

- [Rowset](../../data/oledb/rowset-object-interfaces.md)

- [Comando](../../data/oledb/command-object-interfaces.md)

- [Transazione](../../data/oledb/transaction-object-interfaces.md)

I modelli di provider OLE DB non implementano gli oggetti di archiviazione e di riga.

La tabella seguente elenca le interfacce obbligatorie e facoltative per gli oggetti elencati in precedenza, in base al [OLE DB 2.6 documentazione SDK](/previous-versions/windows/desktop/ms722784).

|Componente|Interfaccia|Commento|
|---------------|---------------|-------------|
|[Zdroj dat](../../data/oledb/data-source-object-interfaces.md) ([CDataSource](../../data/oledb/cdatasource-class.md))|[obbligatorio] `IDBCreateSession`<br /><br /> [obbligatorio] `IDBInitialize`<br /><br /> [obbligatorio] `IDBProperties`<br /><br /> [obbligatorio] `IPersist`<br /><br /> [facoltativo] `IConnectionPointContainer`<br /><br /> [facoltativo] `IDBAsynchStatus`<br /><br /> [facoltativo] `IDBDataSourceAdmin`<br /><br /> [facoltativo] `IDBInfo`<br /><br /> [facoltativo] `IPersistFile`<br /><br /> [facoltativo] `ISupportErrorInfo`|Connessione del consumer al provider. L'oggetto viene usato per specificare le proprietà per la connessione quali nome dell'origine dati, password e ID utente. L'oggetto può essere utilizzato anche per amministrare un'origine dati (creare, aggiornare, eliminare, tabelle e così via).|
|[Sessione](../../data/oledb/session-object-interfaces.md) ([CSession](../../data/oledb/cdataconnection-operator-csession-amp.md))|[obbligatorio] `IGetDataSource`<br /><br /> [obbligatorio] `IOpenRowset`<br /><br /> [obbligatorio] `ISessionProperties`<br /><br /> [facoltativo] `IAlterIndex`<br /><br /> [facoltativo] `IAlterTable`<br /><br /> [facoltativo] `IBindResource`<br /><br /> [facoltativo] `ICreateRow`<br /><br /> [facoltativo] `IDBCreateCommand`<br /><br /> [facoltativo] `IDBSchemaRowset`<br /><br /> [facoltativo] `IIndexDefinition`<br /><br /> [facoltativo] `ISupportErrorInfo`<br /><br /> [facoltativo] `ITableCreation`<br /><br /> [facoltativo] `ITableDefinition`<br /><br /> [facoltativo] `ITableDefinitionWithConstraints`<br /><br /> [facoltativo] `ITransaction`<br /><br /> [facoltativo] `ITransactionJoin`<br /><br /> [facoltativo] `ITransactionLocal`<br /><br /> [facoltativo] `ITransactionObject`|L'oggetto sessione è un'unica conversazione tra un utente e il provider. È simile a ODBC `HSTMT` in quanto molte sessioni simultanee può essere attivo.<br /><br /> L'oggetto sessione è il collegamento primario per accedere alla funzionalità OLE DB. Per ottenere un comando, transazioni o un oggetto set di righe, è scorrere l'oggetto sessione.|
|[Set di righe](../../data/oledb/rowset-object-interfaces.md) ([CRowset](../../data/oledb/crowset-class.md))|[obbligatorio] `IAccessor`<br /><br /> [obbligatorio] `IColumnsInfo`<br /><br /> [obbligatorio] `IConvertType`<br /><br /> [obbligatorio] `IRowset`<br /><br /> [obbligatorio] `IRowsetInfo`<br /><br /> [facoltativo] `IChapteredRowset`<br /><br /> [facoltativo] `IColumnsInfo2`<br /><br /> [facoltativo] `IColumnsRowset`<br /><br /> [facoltativo] `IConnectionPointContainer`<br /><br /> [facoltativo] `IDBAsynchStatus`<br /><br /> [facoltativo] `IGetRow`<br /><br /> [facoltativo] `IRowsetChange`<br /><br /> [facoltativo] `IRowsetChapterMember`<br /><br /> [facoltativo] `IRowsetCurrentIndex`<br /><br /> [facoltativo] `IRowsetFind`<br /><br /> [facoltativo] `IRowsetIdentity`<br /><br /> [facoltativo] `IRowsetIndex`<br /><br /> [facoltativo] `IRowsetLocate`<br /><br /> [facoltativo] `IRowsetRefresh`<br /><br /> [facoltativo] `IRowsetScroll`<br /><br /> [facoltativo] `IRowsetUpdate`<br /><br /> [facoltativo] `IRowsetView`<br /><br /> [facoltativo] `ISupportErrorInfo`<br /><br /> [facoltativo] `IRowsetBookmark`|L'oggetto set di righe è i dati dall'origine dati. L'oggetto viene usato per le associazioni dei dati e le operazioni di base (aggiornamento, recupero, lo spostamento e altri) sui dati. È sempre un oggetto set di righe da mantenere e gestire i dati.|
|[Comando](../../data/oledb/command-object-interfaces.md) ([CCommand](ccommand-class.md))|[obbligatorio] `IAccessor`<br /><br /> [obbligatorio] `IColumnsInfo`<br /><br /> [obbligatorio] `ICommand`<br /><br /> [obbligatorio] `ICommandProperties`<br /><br /> [obbligatorio] `ICommandText`<br /><br /> [obbligatorio] `IConvertType`<br /><br /> [facoltativo] `IColumnsRowset`<br /><br /> [facoltativo] `ICommandPersist`<br /><br /> [facoltativo] `ICommandPrepare`<br /><br /> [facoltativo] `ICommandWithParameters`<br /><br /> [facoltativo] `ISupportErrorInfo`<br /><br /> [facoltativo] `ICommandStream`|L'oggetto comando gestisce le operazioni sui dati, ad esempio le query. Può gestire istruzioni con parametri o senza parametri.<br /><br /> L'oggetto comando è anche responsabile della gestione delle associazioni per i parametri e colonne di output. Un'associazione è una struttura che contiene informazioni sul modo in cui una colonna, in un set di righe, deve essere recuperata. Contiene informazioni quali numero ordinale, tipo di dati, lunghezza e stato.|
|[Transazione](../../data/oledb/transaction-object-interfaces.md) (facoltativo)|[obbligatorio] `IConnectionPointContainer`<br /><br /> [obbligatorio] `ITransaction`<br /><br /> [facoltativo] `ISupportErrorInfo`|Oggetto transazione definisce un'unità atomica di lavoro su un'origine dati e determina le unità di lavoro correlazione tra loro. Questo oggetto non è supportato direttamente tramite i modelli di provider OLE DB (vale a dire, si crea un oggetto personalizzato).|

Per altre informazioni, vedere i seguenti argomenti:

- [Mappe delle proprietà](../../data/oledb/property-maps.md)

- [Il Record dell'utente](../../data/oledb/user-record.md)

## <a name="see-also"></a>Vedere anche

[Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Interfacce OLE DB](/previous-versions/windows/desktop/ms709709)<br/>
