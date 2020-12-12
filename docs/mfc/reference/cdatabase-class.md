---
description: 'Altre informazioni su: classe CDatabase'
title: CDatabase (classe)
ms.date: 11/04/2016
f1_keywords:
- CDatabase
- AFXDB/CDatabase
- AFXDB/CDatabase::CDatabase
- AFXDB/CDatabase::BeginTrans
- AFXDB/CDatabase::BindParameters
- AFXDB/CDatabase::Cancel
- AFXDB/CDatabase::CanTransact
- AFXDB/CDatabase::CanUpdate
- AFXDB/CDatabase::Close
- AFXDB/CDatabase::CommitTrans
- AFXDB/CDatabase::ExecuteSQL
- AFXDB/CDatabase::GetBookmarkPersistence
- AFXDB/CDatabase::GetConnect
- AFXDB/CDatabase::GetCursorCommitBehavior
- AFXDB/CDatabase::GetCursorRollbackBehavior
- AFXDB/CDatabase::GetDatabaseName
- AFXDB/CDatabase::IsOpen
- AFXDB/CDatabase::OnSetOptions
- AFXDB/CDatabase::Open
- AFXDB/CDatabase::OpenEx
- AFXDB/CDatabase::Rollback
- AFXDB/CDatabase::SetLoginTimeout
- AFXDB/CDatabase::SetQueryTimeout
- AFXDB/CDatabase::m_hdbc
helpviewer_keywords:
- CDatabase [MFC], CDatabase
- CDatabase [MFC], BeginTrans
- CDatabase [MFC], BindParameters
- CDatabase [MFC], Cancel
- CDatabase [MFC], CanTransact
- CDatabase [MFC], CanUpdate
- CDatabase [MFC], Close
- CDatabase [MFC], CommitTrans
- CDatabase [MFC], ExecuteSQL
- CDatabase [MFC], GetBookmarkPersistence
- CDatabase [MFC], GetConnect
- CDatabase [MFC], GetCursorCommitBehavior
- CDatabase [MFC], GetCursorRollbackBehavior
- CDatabase [MFC], GetDatabaseName
- CDatabase [MFC], IsOpen
- CDatabase [MFC], OnSetOptions
- CDatabase [MFC], Open
- CDatabase [MFC], OpenEx
- CDatabase [MFC], Rollback
- CDatabase [MFC], SetLoginTimeout
- CDatabase [MFC], SetQueryTimeout
- CDatabase [MFC], m_hdbc
ms.assetid: bd0de70a-e3c3-4441-bcaa-bbf434426ca8
ms.openlocfilehash: 82859ebcffeb833ca5afe885b0ae35916da4cf28
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97247981"
---
# <a name="cdatabase-class"></a>CDatabase (classe)

Rappresenta una connessione a un'origine dati attraverso la quale è possibile utilizzare l'origine dati.

## <a name="syntax"></a>Sintassi

```
class CDatabase : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CDatabase:: CDatabase](#cdatabase)|Costruisce un oggetto `CDatabase`. È necessario inizializzare l'oggetto chiamando `OpenEx` o `Open` .|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CDatabase:: BeginTrans](#begintrans)|Avvia una "transazione", una serie di chiamate reversibili alle `AddNew` `Edit` `Delete` funzioni membro,, e `Update` della classe, nell' `CRecordset` origine dati connessa. L'origine dati deve supportare le transazioni affinché `BeginTrans` abbiano effetto.|
|[CDatabase:: BindParameters](#bindparameters)|Consente di associare parametri prima della chiamata a `CDatabase::ExecuteSQL` .|
|[CDatabase:: Cancel](#cancel)|Annulla un'operazione asincrona o un processo da un secondo thread.|
|[CDatabase:: CanTransact](#cantransact)|Restituisce un valore diverso da zero se l'origine dati supporta le transazioni.|
|[CDatabase:: CanUpdate](#canupdate)|Restituisce un valore diverso da zero se l' `CDatabase` oggetto è aggiornabile (non di sola lettura).|
|[CDatabase:: Close](#close)|Chiude la connessione all'origine dati.|
|[CDatabase:: CommitTrans](#committrans)|Completa una transazione iniziata da `BeginTrans` . Vengono eseguiti i comandi della transazione che modificano l'origine dati.|
|[CDatabase:: ExecuteSQL](#executesql)|Esegue un'istruzione SQL. Non viene restituito alcun record di dati.|
|[CDatabase:: GetBookmarkPersistence](#getbookmarkpersistence)|Identifica le operazioni tramite le quali i segnalibri vengono salvati in modo permanente sugli oggetti recordset.|
|[CDatabase::GetConnect](#getconnect)|Restituisce la stringa di connessione ODBC utilizzata per connettere l' `CDatabase` oggetto a un'origine dati.|
|[CDatabase:: GetCursorCommitBehavior](#getcursorcommitbehavior)|Identifica l'effetto del commit di una transazione in un oggetto recordset aperto.|
|[CDatabase:: GetCursorRollbackBehavior](#getcursorrollbackbehavior)|Identifica l'effetto del rollback di una transazione in un oggetto recordset aperto.|
|[CDatabase:: GetDatabaseName](#getdatabasename)|Restituisce il nome del database attualmente in uso.|
|[CDatabase:: Open](#isopen)|Restituisce un valore diverso da zero se l' `CDatabase` oggetto è attualmente connesso a un'origine dati.|
|[CDatabase:: OnSetOptions](#onsetoptions)|Chiamata eseguita dal Framework per impostare le opzioni di connessione standard. L'implementazione predefinita imposta il valore di timeout della query. È possibile impostare queste opzioni in anticipo chiamando `SetQueryTimeout` .|
|[CDatabase:: Open](#open)|Stabilisce una connessione a un'origine dati tramite un driver ODBC.|
|[CDatabase:: OpenEx](#openex)|Stabilisce una connessione a un'origine dati tramite un driver ODBC.|
|[CDatabase:: rollback](#rollback)|Inverte le modifiche apportate durante la transazione corrente. L'origine dati torna allo stato precedente, come definito alla `BeginTrans` chiamata, non modificato.|
|[CDatabase:: SetLoginTimeout](#setlogintimeout)|Imposta il numero di secondi dopo i quali verrà eseguito il timeout di un tentativo di connessione all'origine dati.|
|[CDatabase:: SetQueryTimeout](#setquerytimeout)|Imposta il numero di secondi trascorsi i quali si prevede il timeout delle operazioni di query sul database. Influiscono su tutte le `Open` chiamate successive a recordset,, `AddNew` `Edit` e `Delete` .|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CDatabase:: m_hdbc](#m_hdbc)|Handle di connessione Open Database Connectivity (ODBC) a un'origine dati. Digitare *HDBC*.|

## <a name="remarks"></a>Commenti

Un'origine dati è un'istanza specifica di dati ospitati da un sistema di gestione di database (DBMS). Alcuni esempi sono Microsoft SQL Server, Microsoft Access, Borland dBASE e xBASE. È possibile avere uno o più `CDatabase` oggetti attivi alla volta nell'applicazione.

> [!NOTE]
> Se si utilizzano le classi DAO (Data Access Objects) anziché le classi Open Database Connectivity (ODBC), utilizzare invece la classe [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) . Per ulteriori informazioni, vedere l'articolo [Cenni preliminari sulla programmazione di database](../../data/data-access-programming-mfc-atl.md).

Per usare `CDatabase` , costruire un `CDatabase` oggetto e chiamarne la `OpenEx` funzione membro. Verrà aperta una connessione. Quando si costruiscono `CRecordset` oggetti per operare sull'origine dati connessa, passare al costruttore del recordset un puntatore all' `CDatabase` oggetto. Al termine dell'utilizzo della connessione, chiamare la `Close` funzione membro ed eliminare definitivamente l' `CDatabase` oggetto. `Close` chiude gli eventuali recordset non chiusi in precedenza.

Per ulteriori informazioni su `CDatabase` , vedere gli articoli [origine dati (ODBC)](../../data/odbc/data-source-odbc.md) e [Panoramica: programmazione di database](../../data/data-access-programming-mfc-atl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CDatabase`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="cdatabasebegintrans"></a><a name="begintrans"></a> CDatabase:: BeginTrans

Chiamare questa funzione membro per iniziare una transazione con l'origine dati connessa.

```
BOOL BeginTrans();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la chiamata ha avuto esito positivo e viene eseguito il commit delle modifiche solo manualmente. in caso contrario, 0.

### <a name="remarks"></a>Commenti

Una transazione è costituita da una o più chiamate `AddNew` alle `Edit` `Delete` funzioni membro,, e `Update` di un `CRecordset` oggetto. Prima di iniziare una transazione, è `CDatabase` necessario che l'oggetto sia già stato connesso all'origine dati chiamando la relativa `OpenEx` `Open` funzione membro o. Per terminare la transazione, chiamare [CommitTrans](#committrans) per accettare tutte le modifiche apportate all'origine dati (e distribuirle) o chiamare [rollback](#rollback) per interrompere l'intera transazione. Chiamare `BeginTrans` dopo aver aperto tutti i recordset che interessano la transazione e il più vicino possibile alle operazioni di aggiornamento effettive.

> [!CAUTION]
> A seconda del driver ODBC, l'apertura di un recordset prima della chiamata a `BeginTrans` può causare problemi durante la chiamata a `Rollback` . È necessario controllare il driver specifico in uso. Ad esempio, quando si utilizza il driver Microsoft Access incluso in Microsoft ODBC Desktop Driver Pack 3,0, è necessario tenere presente che il requisito del motore di database Jet è che non è necessario iniziare una transazione in qualsiasi database che disponga di un cursore aperto. Nelle classi di database MFC un cursore aperto indica un oggetto aperto `CRecordset` . Per ulteriori informazioni, vedere la [Nota tecnica 68](../../mfc/tn068-performing-transactions-with-the-microsoft-access-7-odbc-driver.md).

`BeginTrans` può anche bloccare i record di dati sul server, a seconda della concorrenza richiesta e delle funzionalità dell'origine dati. Per informazioni sul blocco dei dati, vedere l'articolo [Recordset: blocco dei record (ODBC)](../../data/odbc/recordset-locking-records-odbc.md).

Le transazioni definite dall'utente sono descritte nell'articolo [Transaction (ODBC)](../../data/odbc/transaction-odbc.md).

`BeginTrans` stabilisce lo stato in cui è possibile eseguire il rollback della sequenza di transazioni (invertita). Per stabilire un nuovo stato per i rollback, eseguire il commit di tutte le transazioni correnti, quindi chiamare di `BeginTrans` nuovo.

> [!CAUTION]
> `BeginTrans`La chiamata di nuovo senza chiamare `CommitTrans` o `Rollback` è un errore.

Chiamare la funzione membro [CanTransact](#cantransact) per determinare se il driver supporta le transazioni per un determinato database. È inoltre necessario chiamare [GetCursorCommitBehavior](#getcursorcommitbehavior) e [GetCursorRollbackBehavior](#getcursorrollbackbehavior) per determinare il supporto per la conservazione del cursore.

Per ulteriori informazioni sulle transazioni, vedere l'articolo relativo alla [transazione (ODBC)](../../data/odbc/transaction-odbc.md).

### <a name="example"></a>Esempio

  Vedere l'articolo [transazione: esecuzione di una transazione in un recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md).

## <a name="cdatabasebindparameters"></a><a name="bindparameters"></a> CDatabase:: BindParameters

Eseguire l'override `BindParameters` quando è necessario associare parametri prima di chiamare [CDatabase:: ExecuteSQL](#executesql).

```
virtual void BindParameters(HSTMT hstmt);
```

### <a name="parameters"></a>Parametri

*hstmt*<br/>
Handle di istruzione ODBC per il quale si desidera associare parametri.

### <a name="remarks"></a>Commenti

Questo approccio è utile quando il set di risultati non è necessario da un stored procedure.

Nell'override, chiamare `SQLBindParameters` e le funzioni ODBC correlate per associare i parametri. MFC chiama l'override prima della chiamata a `ExecuteSQL` . Non è necessario chiamare. `SQLPrepare` `ExecuteSQL` chiama `SQLExecDirect` ed Elimina definitivamente *HSTMT*, che viene usato una sola volta.

## <a name="cdatabasecancel"></a><a name="cancel"></a> CDatabase:: Cancel

Chiamare questa funzione membro per richiedere che l'origine dati annulli un'operazione asincrona in corso o un processo da un secondo thread.

```cpp
void Cancel();
```

### <a name="remarks"></a>Commenti

Si noti che le classi ODBC MFC non utilizzano più l'elaborazione asincrona. per eseguire un'operazione asincrona, è necessario chiamare direttamente la funzione API ODBC [SQLSetConnectOption](/sql/odbc/reference/syntax/sqlsetconnectoption-function). Per ulteriori informazioni, vedere [esecuzione asincrona](/sql/odbc/reference/develop-app/asynchronous-execution).

## <a name="cdatabasecantransact"></a><a name="cantransact"></a> CDatabase:: CanTransact

Chiamare questa funzione membro per determinare se il database consente le transazioni.

```
BOOL CanTransact() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se i recordset che usano questo `CDatabase` oggetto consentono le transazioni; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Per informazioni sulle transazioni, vedere l'articolo [Transaction (ODBC)](../../data/odbc/transaction-odbc.md).

## <a name="cdatabasecanupdate"></a><a name="canupdate"></a> CDatabase:: CanUpdate

Chiamare questa funzione membro per determinare se l' `CDatabase` oggetto consente gli aggiornamenti.

```
BOOL CanUpdate() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l' `CDatabase` oggetto consente gli aggiornamenti; in caso contrario, 0, che indica che è stato passato true in *bReadOnly* quando è stato aperto l' `CDatabase` oggetto o che l'origine dati è di sola lettura. L'origine dati è di sola lettura se una chiamata alla funzione API ODBC `SQLGetInfo` per SQL_DATASOURCE_READ_ONLY restituisce "y".

### <a name="remarks"></a>Commenti

Non tutti i driver supportano gli aggiornamenti.

## <a name="cdatabasecdatabase"></a><a name="cdatabase"></a> CDatabase:: CDatabase

Costruisce un oggetto `CDatabase`.

```
CDatabase();
```

### <a name="remarks"></a>Commenti

Dopo la costruzione dell'oggetto, è necessario chiamare la `OpenEx` relativa `Open` funzione membro o per stabilire una connessione a un'origine dati specificata.

Potrebbe risultare utile incorporare l' `CDatabase` oggetto nella classe del documento.

### <a name="example"></a>Esempio

Questo esempio illustra l'uso `CDatabase` di in una `CDocument` classe derivata da.

[!code-cpp[NVC_MFCDatabase#9](../../mfc/codesnippet/cpp/cdatabase-class_1.h)]

[!code-cpp[NVC_MFCDatabase#10](../../mfc/codesnippet/cpp/cdatabase-class_2.cpp)]

## <a name="cdatabaseclose"></a><a name="close"></a> CDatabase:: Close

Chiamare questa funzione membro se si desidera disconnettersi da un'origine dati.

```
virtual void Close();
```

### <a name="remarks"></a>Commenti

`CDatabase`Prima di chiamare questa funzione membro, è necessario chiudere tutti i recordset associati all'oggetto. Poiché non `Close` Elimina definitivamente l' `CDatabase` oggetto, è possibile riutilizzare l'oggetto aprendo una nuova connessione alla stessa origine dati o a un'origine dati diversa.

Tutte le `AddNew` istruzioni o i recordset in sospeso `Edit` che utilizzano il database vengono annullati e viene eseguito il rollback di tutte le transazioni in sospeso. Gli eventuali recordset dipendenti dall' `CDatabase` oggetto vengono lasciati in uno stato non definito.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDatabase#12](../../mfc/codesnippet/cpp/cdatabase-class_3.cpp)]

## <a name="cdatabasecommittrans"></a><a name="committrans"></a> CDatabase:: CommitTrans

Chiamare questa funzione membro dopo aver completato le transazioni.

```
BOOL CommitTrans();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se gli aggiornamenti sono stati correttamente sottoposte a commit; in caso contrario, 0. Se `CommitTrans` ha esito negativo, lo stato dell'origine dati non è definito. È necessario controllare i dati per determinarne lo stato.

### <a name="remarks"></a>Commenti

Una transazione è costituita da una serie di chiamate `AddNew` alle `Edit` `Delete` funzioni membro,, e `Update` di un `CRecordset` oggetto che inizia con una chiamata alla funzione membro [BeginTrans](#begintrans) . `CommitTrans` viene eseguito il commit della transazione. Per impostazione predefinita, viene eseguito il commit degli aggiornamenti immediatamente; la chiamata `BeginTrans` a comporta un ritardo dell'impegno degli aggiornamenti fino a quando non `CommitTrans` viene chiamato il metodo.

Fino a quando non si chiama `CommitTrans` per terminare una transazione, è possibile chiamare la funzione membro [rollback](#rollback) per interrompere la transazione e lasciare l'origine dati nello stato originale. Per iniziare una nuova transazione, chiamare di `BeginTrans` nuovo.

Per ulteriori informazioni sulle transazioni, vedere l'articolo relativo alla [transazione (ODBC)](../../data/odbc/transaction-odbc.md).

### <a name="example"></a>Esempio

  Vedere l'articolo [transazione: esecuzione di una transazione in un recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md).

## <a name="cdatabaseexecutesql"></a><a name="executesql"></a> CDatabase:: ExecuteSQL

Chiamare questa funzione membro quando è necessario eseguire direttamente un comando SQL.

```cpp
void ExecuteSQL(LPCTSTR lpszSQL);
```

### <a name="parameters"></a>Parametri

*lpszSQL*<br/>
Puntatore a una stringa con terminazione null contenente un comando SQL valido da eseguire. È possibile passare un oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md).

### <a name="remarks"></a>Commenti

Creare il comando come stringa con terminazione null. `ExecuteSQL` non restituisce record di dati. Se si desidera operare sui record, utilizzare invece un oggetto recordset.

La maggior parte dei comandi per un'origine dati viene eseguita tramite oggetti recordset, che supportano i comandi per la selezione dei dati, l'inserimento di nuovi record, l'eliminazione di record e la modifica di record. Tuttavia, non tutte le funzionalità ODBC sono supportate direttamente dalle classi di database, pertanto è possibile che in alcuni casi sia necessario effettuare una chiamata SQL diretta con `ExecuteSQL` .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDatabase#13](../../mfc/codesnippet/cpp/cdatabase-class_4.cpp)]

## <a name="cdatabasegetbookmarkpersistence"></a><a name="getbookmarkpersistence"></a> CDatabase:: GetBookmarkPersistence

Chiamare questa funzione membro per determinare la persistenza dei segnalibri in un oggetto Recordset dopo determinate operazioni.

```
DWORD GetBookmarkPersistence() const;
```

### <a name="return-value"></a>Valore restituito

Maschera di bit che identifica le operazioni tramite cui si ottiene la persistenza dei segnalibri in un oggetto Recordset. Per informazioni dettagliate, vedere la sezione Osservazioni.

### <a name="remarks"></a>Commenti

Ad esempio, se si chiama `CRecordset::GetBookmark` e quindi si chiama `CRecordset::Requery`, è possibile che il segnalibro ottenuto da `GetBookmark` non sia più valido. È consigliabile chiamare `GetBookmarkPersistence` prima di chiamare `CRecordset::SetBookmark`.

Nella tabella seguente sono elencati i valori di maschera di bit che possono essere combinati per il valore restituito di `GetBookmarkPersistence`.

|Valore di maschera di bit|Persistenza del segnalibro|
|-------------------|--------------------------|
|SQL_BP_CLOSE|I segnalibri sono validi dopo un' `Requery` operazione.|
|SQL_BP_DELETE|Il segnalibro per una riga è valido dopo un' `Delete` operazione sulla riga.|
|SQL_BP_DROP|I segnalibri sono validi dopo un' `Close` operazione.|
|SQL_BP_SCROLL|I segnalibri sono validi dopo qualsiasi `Move` operazione. Indica semplicemente se i segnalibri sono supportati nell'oggetto Recordset, come restituito da `CRecordset::CanBookmark`.|
|SQL_BP_TRANSACTION|I segnalibri sono validi dopo il commit o il rollback di un'operazione.|
|SQL_BP_UPDATE|Il segnalibro per una riga è valido dopo un' `Update` operazione sulla riga.|
|SQL_BP_OTHER_HSTMT|I segnalibri associati a un oggetto Recordset sono validi in un secondo oggetto Recordset.|

Per ulteriori informazioni su questo valore restituito, vedere la funzione API ODBC `SQLGetInfo` nell'Windows SDK. Per ulteriori informazioni sui segnalibri, vedere l'articolo [Recordset: segnalibri e posizioni assolute (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md).

## <a name="cdatabasegetconnect"></a><a name="getconnect"></a> CDatabase:: GetConnect

Chiamare questa funzione membro per recuperare la stringa di connessione utilizzata durante la chiamata a `OpenEx` o `Open` che ha connesso l' `CDatabase` oggetto a un'origine dati.

```
const CString GetConnect() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto **`const`** [CString](../../atl-mfc-shared/reference/cstringt-class.md) che contiene la stringa di connessione se `OpenEx` `Open` è stato chiamato o; in caso contrario, una stringa vuota.

### <a name="remarks"></a>Commenti

Per una descrizione della modalità di creazione della stringa di connessione, vedere [CDatabase:: Open](#open) .

## <a name="cdatabasegetcursorcommitbehavior"></a><a name="getcursorcommitbehavior"></a> CDatabase:: GetCursorCommitBehavior

Chiamare questa funzione membro per determinare il modo in cui un'operazione [CommitTrans](#committrans) influisca sui cursori sugli oggetti recordset aperti.

```
int GetCursorCommitBehavior() const;
```

### <a name="return-value"></a>Valore restituito

Valore che indica l'effetto delle transazioni sugli oggetti recordset aperti. Per informazioni dettagliate, vedere la sezione Osservazioni.

### <a name="remarks"></a>Commenti

Nella tabella seguente sono elencati i possibili valori restituiti per `GetCursorCommitBehavior` e l'effetto corrispondente sul recordset aperto.

|Valore restituito|Effetti sugli oggetti CRecordset|
|------------------|----------------------------------|
|SQL_CB_CLOSE|Chiamata `CRecordset::Requery` immediatamente dopo il commit della transazione.|
|SQL_CB_DELETE|Chiamata `CRecordset::Close` immediatamente dopo il commit della transazione.|
|SQL_CB_PRESERVE|Procedere normalmente con `CRecordset` le operazioni.|

Per ulteriori informazioni su questo valore restituito, vedere la funzione API ODBC `SQLGetInfo` nell'Windows SDK. Per ulteriori informazioni sulle transazioni, vedere l'articolo relativo alla [transazione (ODBC)](../../data/odbc/transaction-odbc.md).

## <a name="cdatabasegetcursorrollbackbehavior"></a><a name="getcursorrollbackbehavior"></a> CDatabase:: GetCursorRollbackBehavior

Chiamare questa funzione membro per determinare il modo in cui un'operazione di [rollback](#rollback) influisca sui cursori sugli oggetti recordset aperti.

```
int GetCursorRollbackBehavior() const;
```

### <a name="return-value"></a>Valore restituito

Valore che indica l'effetto delle transazioni sugli oggetti recordset aperti. Per informazioni dettagliate, vedere la sezione Osservazioni.

### <a name="remarks"></a>Commenti

Nella tabella seguente sono elencati i possibili valori restituiti per `GetCursorRollbackBehavior` e l'effetto corrispondente sul recordset aperto.

|Valore restituito|Effetti sugli oggetti CRecordset|
|------------------|----------------------------------|
|SQL_CB_CLOSE|Chiamata `CRecordset::Requery` immediatamente dopo il rollback della transazione.|
|SQL_CB_DELETE|Chiamata `CRecordset::Close` immediatamente dopo il rollback della transazione.|
|SQL_CB_PRESERVE|Procedere normalmente con `CRecordset` le operazioni.|

Per ulteriori informazioni su questo valore restituito, vedere la funzione API ODBC `SQLGetInfo` nell'Windows SDK. Per ulteriori informazioni sulle transazioni, vedere l'articolo relativo alla [transazione (ODBC)](../../data/odbc/transaction-odbc.md).

## <a name="cdatabasegetdatabasename"></a><a name="getdatabasename"></a> CDatabase:: GetDatabaseName

Chiamare questa funzione membro per recuperare il nome del database attualmente connesso (a condizione che l'origine dati definisca un oggetto denominato denominato "database").

```
CString GetDatabaseName() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) contenente il nome del database in caso di esito positivo; in caso contrario, un oggetto vuoto `CString` .

### <a name="remarks"></a>Commenti

Non corrisponde al nome dell'origine dati (DSN) specificato nella `OpenEx` `Open` chiamata o. `GetDatabaseName`Il risultato restituito dipende da ODBC. In generale, un database è una raccolta di tabelle. Se questa entità ha un nome, la `GetDatabaseName` restituisce.

È possibile, ad esempio, che si desideri visualizzare questo nome in un'intestazione. Se si verifica un errore durante il recupero del nome da ODBC, `GetDatabaseName` restituisce un oggetto vuoto `CString` .

## <a name="cdatabaseisopen"></a><a name="isopen"></a> CDatabase:: Open

Chiamare questa funzione membro per determinare se l' `CDatabase` oggetto è attualmente connesso a un'origine dati.

```
BOOL IsOpen() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l' `CDatabase` oggetto è attualmente connesso; in caso contrario, 0.

## <a name="cdatabasem_hdbc"></a><a name="m_hdbc"></a> CDatabase:: m_hdbc

Contiene un handle pubblico per una connessione all'origine dati ODBC, ovvero un "handle di connessione".

### <a name="remarks"></a>Commenti

In genere, non sarà necessario accedere direttamente a questa variabile membro. Al contrario, il framework alloca l'handle quando si chiama `OpenEx` o `Open` . Il Framework dealloca l'handle quando si chiama l' **`delete`** operatore sull' `CDatabase` oggetto. Si noti che la `Close` funzione membro non esegue la deallocazione dell'handle.

In alcune circostanze, tuttavia, potrebbe essere necessario utilizzare direttamente l'handle. Se, ad esempio, è necessario chiamare direttamente le funzioni dell'API ODBC anziché tramite `CDatabase` la classe, potrebbe essere necessario un handle di connessione da passare come parametro. Vedere l'esempio di codice seguente.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDatabase#15](../../mfc/codesnippet/cpp/cdatabase-class_5.cpp)]

## <a name="cdatabaseonsetoptions"></a><a name="onsetoptions"></a> CDatabase:: OnSetOptions

Il Framework chiama questa funzione membro durante l'esecuzione diretta di un'istruzione SQL con la `ExecuteSQL` funzione membro.

```
virtual void OnSetOptions(HSTMT hstmt);
```

### <a name="parameters"></a>Parametri

*hstmt*<br/>
Handle di istruzione ODBC per il quale vengono impostate le opzioni.

### <a name="remarks"></a>Commenti

`CRecordset::OnSetOptions` chiama anche questa funzione membro.

`OnSetOptions` imposta il valore di timeout di accesso. Se sono state effettuate chiamate precedenti alla `SetQueryTimeout` funzione membro e, `OnSetOptions` riflette i valori correnti; in caso contrario, imposta i valori predefiniti.

> [!NOTE]
> Prima di MFC 4,2, `OnSetOptions` impostare anche la modalità di elaborazione su snychronous o asincrono. A partire da MFC 4,2, tutte le operazioni sono sincrone. Per eseguire un'operazione asincrona, è necessario effettuare una chiamata diretta alla funzione API ODBC `SQLSetPos` .

Non è necessario eseguire l'override `OnSetOptions` di per modificare il valore di timeout. Al contrario, per personalizzare il valore di timeout della query, chiamare `SetQueryTimeout` prima di creare un recordset; `OnSetOptions` utilizzerà il nuovo valore. I valori impostati si applicano alle operazioni successive su tutti i recordset o chiamate SQL dirette.

Eseguire l'override `OnSetOptions` se si desidera impostare opzioni aggiuntive. L'override deve chiamare la classe di base `OnSetOptions` prima o dopo la chiamata della funzione API ODBC `SQLSetStmtOption` . Seguire il metodo illustrato nell'implementazione predefinita del Framework di `OnSetOptions` .

## <a name="cdatabaseopen"></a><a name="open"></a> CDatabase:: Open

Chiamare questa funzione membro per inizializzare un oggetto appena costruito `CDatabase` .

```
virtual BOOL Open(
    LPCTSTR lpszDSN,
    BOOL bExclusive = FALSE,
    BOOL bReadOnly = FALSE,
    LPCTSTR lpszConnect = _T("ODBC;"),
    BOOL bUseCursorLib = TRUE);
```

### <a name="parameters"></a>Parametri

*lpszDSN*<br/>
Specifica il nome di un'origine dati, ovvero un nome registrato con ODBC tramite il programma di amministrazione ODBC. Se un valore DSN viene specificato in *lpszConnect* (nel formato "DSN = \<data-source> "), non deve essere specificato di nuovo in *lpszDSN*. In questo caso, *lpszDSN* deve essere null. In caso contrario, è possibile passare NULL se si desidera presentare all'utente una finestra di dialogo di origine dati in cui l'utente può selezionare un'origine dati. Per ulteriori informazioni, vedere la sezione Osservazioni.

*bExclusive*<br/>
Non supportato in questa versione della libreria di classi. Attualmente, un'asserzione ha esito negativo se il parametro è TRUE. L'origine dati viene sempre aperta come condivisa (non esclusiva).

*bReadOnly*<br/>
TRUE se si desidera che la connessione sia di sola lettura e impedisca gli aggiornamenti all'origine dati. Tutti i recordset dipendenti ereditano questo attributo. Il valore predefinito è FALSE.

*lpszConnect*<br/>
Specifica una stringa di connessione. La stringa di connessione concatena le informazioni, eventualmente includendo il nome di un'origine dati, un ID utente valido nell'origine dati, una stringa di autenticazione utente (password, se l'origine dati ne richiede una) e altre informazioni. L'intera stringa di connessione deve essere preceduta dalla stringa "ODBC;". (maiuscole o minuscole). La stringa "ODBC;" viene utilizzata per indicare che si tratta di una connessione a un'origine dati ODBC. per la compatibilità con le versioni future della libreria di classi potrebbe supportare origini dati non ODBC.

*bUseCursorLib*<br/>
TRUE se si desidera caricare la DLL della libreria di cursori ODBC. La libreria di cursori maschera alcune funzionalità del driver ODBC sottostante, impedendo in modo efficace l'utilizzo dei dynaset (se supportati dal driver). Gli unici cursori supportati se la libreria di cursori è caricata sono snapshot statici e cursori di sola trasmissione. Il valore predefinito è TRUE. Se si prevede di creare un oggetto recordset direttamente da `CRecordset` senza derivare da esso, è consigliabile non caricare la libreria di cursori.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la connessione è stata eseguita correttamente. in caso contrario, 0 se l'utente sceglie Annulla quando viene visualizzata una finestra di dialogo in cui vengono richieste altre informazioni di connessione. In tutti gli altri casi, il Framework genera un'eccezione.

### <a name="remarks"></a>Commenti

È necessario inizializzare l'oggetto di database prima che sia possibile utilizzarlo per costruire un oggetto recordset.

> [!NOTE]
> La chiamata della funzione membro [OpenEx](#openex) è la modalità preferita per connettersi a un'origine dati e inizializzare l'oggetto di database.

Se i parametri della `Open` chiamata non contengono informazioni sufficienti per eseguire la connessione, il driver ODBC apre una finestra di dialogo per ottenere le informazioni necessarie dall'utente. Quando si chiama `Open` , la stringa di connessione *lpszConnect* viene archiviata privatamente nell' `CDatabase` oggetto ed è disponibile chiamando la funzione membro [GetConnect](#getconnect) .

Se si desidera, è possibile aprire la finestra di dialogo prima di chiamare `Open` per ottenere informazioni dall'utente, ad esempio una password, quindi aggiungere tali informazioni alla stringa di connessione passata a `Open` . In alternativa, è possibile salvare la stringa di connessione passata per riutilizzarla alla successiva chiamata dell'applicazione `Open` in un `CDatabase` oggetto.

È anche possibile usare la stringa di connessione per più livelli di autorizzazione di accesso (ognuno per un `CDatabase` oggetto diverso) o per trasferire altre informazioni specifiche dell'origine dati. Per ulteriori informazioni sulle stringhe di connessione, vedere il capitolo 5 della Windows SDK.

Se, ad esempio, l'host DBMS non è disponibile, è possibile che venga eseguito il timeout di una connessione. Se il tentativo di connessione ha esito negativo, `Open` genera un'eccezione `CDBException` .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDatabase#14](../../mfc/codesnippet/cpp/cdatabase-class_6.cpp)]

## <a name="cdatabaseopenex"></a><a name="openex"></a> CDatabase:: OpenEx

Chiamare questa funzione membro per inizializzare un oggetto appena costruito `CDatabase` .

```
virtual BOOL OpenEx(
    LPCTSTR lpszConnectString,
    DWORD dwOptions = 0);
```

### <a name="parameters"></a>Parametri

*lpszConnectString*<br/>
Specifica una stringa di connessione ODBC. Sono inclusi il nome dell'origine dati, nonché altre informazioni facoltative, ad esempio un ID utente e una password. Ad esempio, "DSN = SQLServer_Source; UID = SA; PWD = abc123 "è una possibile stringa di connessione. Si noti che se si passa NULL per *lpszConnectString*, verrà visualizzata una finestra di dialogo origine dati in cui viene richiesto all'utente di selezionare un'origine dati.

*dwOptions*<br/>
Maschera di maschera che specifica una combinazione dei valori seguenti. Il valore predefinito è 0, il che significa che il database verrà aperto come condiviso con accesso in scrittura, la DLL della libreria di cursori ODBC non verrà caricata e la finestra di dialogo ODBC Connection verrà visualizzata solo se non sono disponibili informazioni sufficienti per stabilire la connessione.

- `CDatabase::openExclusive` Non supportato in questa versione della libreria di classi. Un'origine dati viene sempre aperta come condivisa (non esclusiva). Attualmente, un'asserzione ha esito negativo se si specifica questa opzione.

- `CDatabase::openReadOnly` Aprire l'origine dati in sola lettura.

- `CDatabase::useCursorLib` Caricare la DLL della libreria di cursori ODBC. La libreria di cursori maschera alcune funzionalità del driver ODBC sottostante, impedendo in modo efficace l'utilizzo dei dynaset (se supportati dal driver). Gli unici cursori supportati se la libreria di cursori è caricata sono snapshot statici e cursori di sola trasmissione. Se si prevede di creare un oggetto recordset direttamente da `CRecordset` senza derivare da esso, è consigliabile non caricare la libreria di cursori.

- `CDatabase::noOdbcDialog` Non visualizzare la finestra di dialogo connessione ODBC, indipendentemente dal fatto che siano disponibili sufficienti informazioni di connessione.

- `CDatabase::forceOdbcDialog` Visualizza sempre la finestra di dialogo connessione ODBC.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la connessione è stata eseguita correttamente. in caso contrario, 0 se l'utente sceglie Annulla quando viene visualizzata una finestra di dialogo in cui vengono richieste altre informazioni di connessione. In tutti gli altri casi, il Framework genera un'eccezione.

### <a name="remarks"></a>Commenti

È necessario inizializzare l'oggetto di database prima che sia possibile utilizzarlo per costruire un oggetto recordset.

Se il parametro *lpszConnectString* nella `OpenEx` chiamata non contiene informazioni sufficienti per stabilire la connessione, il driver ODBC apre una finestra di dialogo per ottenere le informazioni necessarie dall'utente, a condizione che non sia stato impostato `CDatabase::noOdbcDialog` o `CDatabase::forceOdbcDialog` nel parametro *dwOptions* . Quando si chiama `OpenEx` , la stringa di connessione *lpszConnectString* viene archiviata privatamente nell' `CDatabase` oggetto ed è disponibile chiamando la funzione membro [GetConnect](#getconnect) .

Se si desidera, è possibile aprire la finestra di dialogo prima di chiamare `OpenEx` per ottenere informazioni dall'utente, ad esempio una password, quindi aggiungere tali informazioni alla stringa di connessione passata a `OpenEx` . In alternativa, è possibile salvare la stringa di connessione passata per riutilizzarla alla successiva chiamata dell'applicazione `OpenEx` in un `CDatabase` oggetto.

È anche possibile usare la stringa di connessione per più livelli di autorizzazione di accesso (ognuno per un `CDatabase` oggetto diverso) o per trasferire altre informazioni specifiche dell'origine dati. Per ulteriori informazioni sulle stringhe di connessione, vedere il capitolo 6 in *ODBC Programmer ' s Reference*.

Se, ad esempio, l'host DBMS non è disponibile, è possibile che venga eseguito il timeout di una connessione. Se il tentativo di connessione ha esito negativo, `OpenEx` genera un'eccezione `CDBException` .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDatabase#11](../../mfc/codesnippet/cpp/cdatabase-class_7.cpp)]

## <a name="cdatabaserollback"></a><a name="rollback"></a> CDatabase:: rollback

Chiamare questa funzione membro per invertire le modifiche apportate durante una transazione.

```
BOOL Rollback();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la transazione è stata invertita correttamente; in caso contrario, 0. Se una `Rollback` chiamata ha esito negativo, l'origine dati e gli Stati di transazione non sono definiti. Se `Rollback` restituisce 0, è necessario controllare l'origine dati per determinarne lo stato.

### <a name="remarks"></a>Commenti

Tutte le `CRecordset` `AddNew` `Edit` chiamate,, `Delete` e `Update` eseguite dopo l'ultimo [BeginTrans](#begintrans) vengono sottoposte a rollback allo stato esistente al momento della chiamata.

Dopo una chiamata a `Rollback` , la transazione è finita ed è necessario chiamare `BeginTrans` di nuovo per un'altra transazione. Il record che era quello corrente prima `BeginTrans` della chiamata diventa il record corrente dopo `Rollback` .

Dopo un rollback, il record corrente prima del rollback rimane aggiornato. Per informazioni dettagliate sullo stato del recordset e sull'origine dati dopo un rollback, vedere l'articolo [Transaction (ODBC)](../../data/odbc/transaction-odbc.md).

### <a name="example"></a>Esempio

  Vedere l'articolo [transazione: esecuzione di una transazione in un recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md).

## <a name="cdatabasesetlogintimeout"></a><a name="setlogintimeout"></a> CDatabase:: SetLoginTimeout

Chiamare questa funzione membro, prima di chiamare `OpenEx` o `Open` , per eseguire l'override del numero predefinito di secondi consentiti prima del timeout di una connessione all'origine dati tentata.

```cpp
void SetLoginTimeout(DWORD dwSeconds);
```

### <a name="parameters"></a>Parametri

*dwSeconds*<br/>
Numero di secondi consentiti prima del timeout di un tentativo di connessione.

### <a name="remarks"></a>Commenti

Se, ad esempio, il sistema DBMS non è disponibile, è possibile che venga eseguito il timeout di un tentativo di connessione. Chiamare `SetLoginTimeout` dopo aver costruito l' `CDatabase` oggetto non inizializzato ma prima di chiamare `OpenEx` o `Open` .

Il valore predefinito per i timeout di accesso è 15 secondi. Non tutte le origini dati supportano la possibilità di specificare un valore di timeout di accesso. Se l'origine dati non supporta il timeout, si ottiene l'output di traccia ma non un'eccezione. Il valore 0 indica "infinito".

## <a name="cdatabasesetquerytimeout"></a><a name="setquerytimeout"></a> CDatabase:: SetQueryTimeout

Chiamare questa funzione membro per eseguire l'override del numero di secondi predefinito da consentire prima del timeout delle successive operazioni sull'origine dati connessa.

```cpp
void SetQueryTimeout(DWORD dwSeconds);
```

### <a name="parameters"></a>Parametri

*dwSeconds*<br/>
Numero di secondi consentiti prima del timeout di un tentativo di query.

### <a name="remarks"></a>Commenti

È possibile che si verifichi il timeout di un'operazione a causa di problemi di accesso alla rete, tempo di elaborazione delle query eccessivo e così via. Chiamare `SetQueryTimeout` prima di aprire il recordset o prima di chiamare le `AddNew` `Update` funzioni membro o del recordset `Delete` se si desidera modificare il valore di timeout della query. L'impostazione ha effetto su tutte le `Open` chiamate,, `AddNew` e successive a tutti `Update` `Delete` i recordset associati a questo `CDatabase` oggetto. La modifica del valore di timeout della query per un recordset dopo l'apertura non comporta la modifica del valore per il recordset. Ad esempio, le `Move` operazioni successive non utilizzano il nuovo valore.

Il valore predefinito per i timeout delle query è 15 secondi. Non tutte le origini dati supportano la possibilità di impostare un valore di timeout per la query. Se si imposta un valore di timeout della query pari a 0, non si verifica alcun timeout. la comunicazione con l'origine dati potrebbe non rispondere. Questo comportamento può essere utile durante lo sviluppo. Se l'origine dati non supporta il timeout, si ottiene l'output di traccia ma non un'eccezione.

## <a name="see-also"></a>Vedi anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CRecordset](../../mfc/reference/crecordset-class.md)
