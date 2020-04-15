---
title: Classe CDaoQueryDef
ms.date: 11/04/2016
f1_keywords:
- CDaoQueryDef
- AFXDAO/CDaoQueryDef
- AFXDAO/CDaoQueryDef::CDaoQueryDef
- AFXDAO/CDaoQueryDef::Append
- AFXDAO/CDaoQueryDef::CanUpdate
- AFXDAO/CDaoQueryDef::Close
- AFXDAO/CDaoQueryDef::Create
- AFXDAO/CDaoQueryDef::Execute
- AFXDAO/CDaoQueryDef::GetConnect
- AFXDAO/CDaoQueryDef::GetDateCreated
- AFXDAO/CDaoQueryDef::GetDateLastUpdated
- AFXDAO/CDaoQueryDef::GetFieldCount
- AFXDAO/CDaoQueryDef::GetFieldInfo
- AFXDAO/CDaoQueryDef::GetName
- AFXDAO/CDaoQueryDef::GetODBCTimeout
- AFXDAO/CDaoQueryDef::GetParameterCount
- AFXDAO/CDaoQueryDef::GetParameterInfo
- AFXDAO/CDaoQueryDef::GetParamValue
- AFXDAO/CDaoQueryDef::GetRecordsAffected
- AFXDAO/CDaoQueryDef::GetReturnsRecords
- AFXDAO/CDaoQueryDef::GetSQL
- AFXDAO/CDaoQueryDef::GetType
- AFXDAO/CDaoQueryDef::IsOpen
- AFXDAO/CDaoQueryDef::Open
- AFXDAO/CDaoQueryDef::SetConnect
- AFXDAO/CDaoQueryDef::SetName
- AFXDAO/CDaoQueryDef::SetODBCTimeout
- AFXDAO/CDaoQueryDef::SetParamValue
- AFXDAO/CDaoQueryDef::SetReturnsRecords
- AFXDAO/CDaoQueryDef::SetSQL
- AFXDAO/CDaoQueryDef::m_pDAOQueryDef
- AFXDAO/CDaoQueryDef::m_pDatabase
helpviewer_keywords:
- CDaoQueryDef [MFC], CDaoQueryDef
- CDaoQueryDef [MFC], Append
- CDaoQueryDef [MFC], CanUpdate
- CDaoQueryDef [MFC], Close
- CDaoQueryDef [MFC], Create
- CDaoQueryDef [MFC], Execute
- CDaoQueryDef [MFC], GetConnect
- CDaoQueryDef [MFC], GetDateCreated
- CDaoQueryDef [MFC], GetDateLastUpdated
- CDaoQueryDef [MFC], GetFieldCount
- CDaoQueryDef [MFC], GetFieldInfo
- CDaoQueryDef [MFC], GetName
- CDaoQueryDef [MFC], GetODBCTimeout
- CDaoQueryDef [MFC], GetParameterCount
- CDaoQueryDef [MFC], GetParameterInfo
- CDaoQueryDef [MFC], GetParamValue
- CDaoQueryDef [MFC], GetRecordsAffected
- CDaoQueryDef [MFC], GetReturnsRecords
- CDaoQueryDef [MFC], GetSQL
- CDaoQueryDef [MFC], GetType
- CDaoQueryDef [MFC], IsOpen
- CDaoQueryDef [MFC], Open
- CDaoQueryDef [MFC], SetConnect
- CDaoQueryDef [MFC], SetName
- CDaoQueryDef [MFC], SetODBCTimeout
- CDaoQueryDef [MFC], SetParamValue
- CDaoQueryDef [MFC], SetReturnsRecords
- CDaoQueryDef [MFC], SetSQL
- CDaoQueryDef [MFC], m_pDAOQueryDef
- CDaoQueryDef [MFC], m_pDatabase
ms.assetid: 9676a4a3-c712-44d4-8c5d-d1cc78288d3a
ms.openlocfilehash: 133746ff1e4a9453f9563347724a47855a8a3228
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368957"
---
# <a name="cdaoquerydef-class"></a>Classe CDaoQueryDef

Rappresenta una definizione della query, o "querydef, in genere salvata in un database.

## <a name="syntax"></a>Sintassi

```
class CDaoQueryDef : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoQueryDef::CDaoQueryDef](#cdaoquerydef)|Costruisce un oggetto `CDaoQueryDef`. Prossima `Open` chiamata `Create`o , a seconda delle vostre esigenze.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoQueryDef::Append](#append)|Aggiunge il querydef alla raccolta QueryDefs del database come query salvata.|
|[CDaoQueryDef::CanUpdate](#canupdate)|Restituisce diverso da zero se la query può aggiornare il database.|
|[CDaoQueryDef::Close](#close)|Chiude l'oggetto querydef. Al termine dell'operazione, è possibile eliminare l'oggetto di C.|
|[CDaoQueryDef::Create](#create)|Crea l'oggetto doO querydef sottostante. Utilizzare querydef come query temporanea `Append` o chiamare per salvarlo nel database.|
|[CDaoQueryDef::Esecuzione](#execute)|Esegue la query definita dall'oggetto querydef.|
|[CDaoQueryDef::GetConnect](#getconnect)|Restituisce la stringa di connessione associata al file querydef. La stringa di connessione identifica l'origine dati. (Solo per le query pass-through SQL, in caso contrario una stringa vuota.)|
|[CDaoQueryDef::GetDateCreated](#getdatecreated)|Restituisce la data di creazione della query salvata.|
|[CDaoQueryDef::GetDateLastUpdated](#getdatelastupdated)|Restituisce la data dell'ultimo aggiornamento della query salvata.|
|[CDaoQueryDef::GetFieldCount](#getfieldcount)|Restituisce il numero di campi definiti dal file querydef.|
|[CDaoQueryDef::GetFieldInfo](#getfieldinfo)|Restituisce informazioni su un campo specificato definito nella query.|
|[CDaoQueryDef::GetName](#getname)|Restituisce il nome del querydef.|
|[CDaoQueryDef::GetODBCTimeout](#getodbctimeout)|Restituisce il valore di timeout utilizzato da ODBC (per una query ODBC) quando viene eseguito il querydef. Determina per quanto tempo consentire il completamento dell'azione della query.|
|[CDaoQueryDef::GetParameterCount](#getparametercount)|Restituisce il numero di parametri definiti per la query.|
|[CDaoQueryDef::GetParameterInfo](#getparameterinfo)|Restituisce informazioni su un parametro specificato alla query.|
|[CDaoQueryDef::GetParamValue](#getparamvalue)|Restituisce il valore di un parametro specificato alla query.|
|[CDaoQueryDef::GetRecordsAffected](#getrecordsaffected)|Restituisce il numero di record interessati da una query di azione.|
|[CDaoQueryDef::GetReturnsRecords](#getreturnsrecords)|Restituisce diverso da zero se la query definita da querydef restituisce record.|
|[CDaoQueryDef::GetSQL](#getsql)|Restituisce la stringa SQL che specifica la query definita da querydef.|
|[CDaoQueryDef::GetType](#gettype)|Restituisce il tipo di query: delete, update, append, make-table e così via.|
|[CDaoQueryDef::IsOpen](#isopen)|Restituisce diverso da zero se il querydef è aperto e può essere eseguito.|
|[CDaoQueryDef::Open](#open)|Apre un oggetto querydef esistente archiviato nella raccolta QueryDefs del database.|
|[CDaoQueryDef::SetConnect](#setconnect)|Imposta la stringa di connessione per una query pass-through SQL in un'origine dati ODBC.|
|[CDaoQueryDef::SetName](#setname)|Imposta il nome della query salvata, sostituendo il nome in uso al momento della creazione del querydef.|
|[CDaoQueryDef::SetODBCTimeout](#setodbctimeout)|Imposta il valore di timeout utilizzato da ODBC (per una query ODBC) quando viene eseguito il querydef.|
|[CDaoQueryDef::SetParamValue](#setparamvalue)|Imposta il valore di un parametro specificato sulla query.|
|[CDaoQueryDef::SetReturnsRecords](#setreturnsrecords)|Specifica se il querydef restituisce i record. L'impostazione di questo attributo su TRUE è valida solo per le query pass-through SQL.|
|[CDaoQueryDef::SetSQL](#setsql)|Imposta la stringa SQL che specifica la query definita da querydef.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoQueryDef::m_pDAOQueryDef](#m_pdaoquerydef)|Puntatore all'interfaccia OLE per l'oggetto DAO querydef sottostante.|
|[CDaoQueryDef::m_pDatabase](#m_pdatabase)|Puntatore all'oggetto `CDaoDatabase` a cui è associato il querydef. Il querydef potrebbe essere salvato nel database o meno.|

## <a name="remarks"></a>Osservazioni

Un oggetto querydef è un oggetto di accesso ai dati che contiene l'istruzione SQL che descrive una query e le relative proprietà, ad esempio "Data creazione" e "Timeout ODBC". È anche possibile creare oggetti querydef temporanei senza salvarli, ma è conveniente, e molto più efficiente, salvare le query comunemente riutilizzate in un database. Oggetto [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) oggetto gestisce una raccolta, denominata QueryDefs insieme, che contiene i file querydefs salvati.

> [!NOTE]
> Le classi di database DAO sono distinte dalle classi di database MFC basate su ODBC (Open Database Connectivity). Tutti i nomi delle classi di database DAO hanno il prefisso "CDao". È comunque possibile accedere alle origini dati ODBC con le classi DAO. In generale, le classi MFC basate su DAO sono più in grado rispetto alle classi MFC basate su ODBC; le classi basate su DAO possono accedere ai dati, anche tramite driver ODBC, tramite il proprio motore di database. Le classi basate su DAO supportano anche le operazioni DDL (Data Definition Language), ad esempio l'aggiunta di tabelle tramite le classi, senza dover chiamare direttamente DAO.

## <a name="usage"></a>Uso

Utilizzare gli oggetti querydef per lavorare con una query salvata esistente o per creare una nuova query salvata o temporanea:

1. In tutti i casi, costruire innanzitutto un `CDaoQueryDef` oggetto, fornendo un puntatore all'oggetto [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) a cui appartiene la query.

1. Eseguire quindi le operazioni seguenti, a seconda di ciò che si desidera:

   - Per utilizzare una query salvata esistente, chiamare la funzione membro [Open](#open) dell'oggetto querydef, specificando il nome della query salvata.

   - Per creare una nuova query salvata, chiamare la funzione membro [Create](#create) dell'oggetto querydef, specificando il nome della query. Chiamare quindi [Append](#append) per salvare la query aggiungendola all'insieme QueryDefs del database. `Create`mette il querydef in uno stato `Create` aperto, `Open`quindi dopo la chiamata non si chiama .

   - Per creare un oggetto `Create`querydef temporaneo, chiamare . Passare una stringa vuota per il nome della query. Non chiamare `Append`.

Al termine dell'utilizzo di un oggetto querydef, chiamare la relativa funzione membro [Close;](#close) quindi eliminare l'oggetto querydef.

> [!TIP]
> Il modo più semplice per creare query salvate consiste nel crearle e archiviarle nel database utilizzando Microsoft Access. È quindi possibile aprirli e utilizzarli nel codice MFC.

## <a name="purposes"></a>Scopi

È possibile utilizzare un oggetto querydef per uno degli scopi seguenti:You can use a querydef object for any of the following purposes:

- Per creare `CDaoRecordset` un oggetto

- Per chiamare la `Execute` funzione membro dell'oggetto per eseguire direttamente una query di azione o una query pass-through SQLTo call the object's member function to directly execute an action query or a SQL pass-through query

È possibile utilizzare un oggetto querydef per qualsiasi tipo di query, incluse le query select, action, crosstab, delete, update, append, make-table, data definition, SQL pass-through, union e bulk. Il tipo della query è determinato dal contenuto dell'istruzione SQL fornita. Per informazioni sui tipi `Execute` di query, vedere le funzioni membro e [GetType](#gettype) . I recordset vengono comunemente utilizzati per le query di restituzione delle righe, in genere quelle che utilizzano **l'istruzione SELECT ... Da** parole chiave. `Execute`è più comunemente usato per le operazioni in blocco. Per ulteriori informazioni, vedere [Execute](#execute) e [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md).

## <a name="querydefs-and-recordsets"></a>Querydef e Recordset

Per utilizzare un oggetto querydef per creare un `CDaoRecordset` oggetto, in genere si crea o si apre un oggetto querydef come descritto in precedenza. Costruire quindi un oggetto recordset, passando un puntatore all'oggetto querydef quando si chiama [CDaoRecordset::Open](../../mfc/reference/cdaorecordset-class.md#open). Il querydef passato deve essere in uno stato aperto. Per ulteriori informazioni, vedere la classe [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md).

Non è possibile utilizzare un oggetto querydef per creare un recordset (l'utilizzo più comune per un oggetto querydef) a meno che non si trovi in uno stato aperto. Inserire il querydef in uno `Open` stato `Create`aperto chiamando uno o più file .

## <a name="external-databases"></a>Database esterni

Gli oggetti Querydef sono il modo preferito per utilizzare il dialetto SQL nativo di un motore di database esterno. Ad esempio, è possibile creare una query Transact SQL (come usato in Microsoft SQL Server) e archiviarla in un oggetto querydef. Quando è necessario utilizzare una query SQL non basata sul modulo di gestione di database Microsoft Jet, è necessario fornire una stringa di connessione che punti all'origine dati esterna. Le query con stringhe di connessione valide ignorano il motore di database e passano la query direttamente al server di database esterno per l'elaborazione.

> [!TIP]
> Il modo migliore per utilizzare le tabelle ODBC consiste nel collegarle a microsoft Jet (. MDB).

Per informazioni correlate, vedere gli argomenti "Oggetto QueryDef", "Raccolta QueryDefs" e "Oggetto CdbDatabase" in DAO SDK.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CDaoQueryDef`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdao.h

## <a name="cdaoquerydefappend"></a><a name="append"></a>CDaoQueryDef::Append

Chiamare questa funzione membro dopo aver chiamato [Create](#create) per creare un nuovo oggetto querydef.

```
virtual void Append();
```

### <a name="remarks"></a>Osservazioni

`Append`salva il file querydef nel database aggiungendo l'oggetto all'insieme QueryDefs del database. È possibile utilizzare querydef come oggetto temporaneo senza accodarlo, ma se si `Append`desidera che venga mantenuto, è necessario chiamare .

Se si tenta di accodare un oggetto querydef temporaneo, MFC genera un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md).

## <a name="cdaoquerydefcanupdate"></a><a name="canupdate"></a>CDaoQueryDef::CanUpdate

Chiamare questa funzione membro per determinare se è possibile modificare il querydef, ad esempio modificarne il nome o la stringa SQL.

```
BOOL CanUpdate();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se è consentito modificare il file querydef; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

È possibile modificare il file querydef se:You can modify the querydef if:

- Non è basato su un database aperto in sola lettura.

- Si dispone delle autorizzazioni di aggiornamento per il database.

   Ciò dipende dal fatto che siano state implementate funzionalità di sicurezza. MFC non fornisce supporto per la sicurezza; è necessario implementarlo manualmente chiamando DAO direttamente o utilizzando Microsoft Access. Vedere l'argomento "Proprietà Permissions" nella Guida in linea di DAO.

## <a name="cdaoquerydefcdaoquerydef"></a><a name="cdaoquerydef"></a>CDaoQueryDef::CDaoQueryDef

Costruisce un oggetto `CDaoQueryDef`.

```
CDaoQueryDef(CDaoDatabase* pDatabase);
```

### <a name="parameters"></a>Parametri

*pDatabase*<br/>
Puntatore a un oggetto [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) aperto.

### <a name="remarks"></a>Osservazioni

L'oggetto può rappresentare un oggetto querydef esistente archiviato nella raccolta QueryDefs del database, una nuova query da archiviare nella raccolta o una query temporanea da non archiviare. Il passaggio successivo dipende dal tipo di querydef:

- Se l'oggetto rappresenta un oggetto querydef esistente, chiamare la funzione membro [Open](#open) dell'oggetto per inizializzarlo.

- Se l'oggetto rappresenta un nuovo oggetto querydef da salvare, chiamare la funzione membro [Create](#create) dell'oggetto. In questo modo l'oggetto viene aggiunto all'insieme QueryDefs del database. Chiamare `CDaoQueryDef` quindi le funzioni membro per impostare gli attributi dell'oggetto. Infine, chiamare [Append](#append).

- Se l'oggetto rappresenta un oggetto querydef temporaneo (da non salvare nel database), chiamare `Create`, passando una stringa vuota per il nome della query. Dopo `Create`aver chiamato , inizializzare il querydef impostandone direttamente gli attributi. Non chiamare `Append`.

Per impostare gli attributi di querydef, è possibile utilizzare le funzioni membro [SetName](#setname), [SetSQL](#setsql), [SetConnect](#setconnect), [SetODBCTimeout](#setodbctimeout)e [SetReturnsRecords](#setreturnsrecords) .

Al termine dell'oggetto querydef, chiamare la relativa funzione membro [Close.](#close) Se si dispone di un puntatore al querydef, utilizzare l'operatore **delete** per eliminare l'oggetto di C.

## <a name="cdaoquerydefclose"></a><a name="close"></a>CDaoQueryDef::Close

Chiamare questa funzione membro al termine dell'utilizzo dell'oggetto querydef.

```
virtual void Close();
```

### <a name="remarks"></a>Osservazioni

La chiusura di querydef rilascia l'oggetto DAO sottostante, ma non `CDaoQueryDef` elimina l'oggetto querydef DAO salvato o l'oggetto C. Non corrisponde a [CDaoDatabase::DeleteQueryDef](../../mfc/reference/cdaodatabase-class.md#deletequerydef), che elimina il querydef dall'insieme QueryDefs del database in DAO (se non un querydef temporaneo).

## <a name="cdaoquerydefcreate"></a><a name="create"></a>CDaoQueryDef::Create

Chiamare questa funzione membro per creare una nuova query salvata o una nuova query temporanea.

```
virtual void Create(
    LPCTSTR lpszName = NULL,
    LPCTSTR lpszSQL = NULL);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Nome univoco della query salvata nel database. Per informazioni dettagliate sulla stringa, vedere l'argomento "Metodo CreateQueryDef" nella Guida in linea di DAO. Se si accetta il valore predefinito, una stringa vuota, viene creato un oggetto querydef temporaneo. Tale query non viene salvata nell'insieme QueryDefs.

*lpszSQL (informazioni in lingua inglese)*<br/>
Stringa SQL che definisce la query. Se si accetta il valore predefinito NULL, è necessario chiamare successivamente [SetSQL](#setsql) per impostare la stringa. Fino ad allora, la query non è definita. È tuttavia possibile utilizzare la query non definita per aprire un recordset; vedere Osservazioni per i dettagli. L'istruzione SQL deve essere definita prima di poter aggiungere il file querydef all'insieme QueryDefs.

### <a name="remarks"></a>Osservazioni

Se si passa un nome in *lpszName*, è possibile chiamare [Append](#append) per salvare il file querydef nell'insieme QueryDefs del database. In caso contrario, l'oggetto è un oggetto querydef temporaneo e non viene salvato. In entrambi i casi, il querydef è in uno stato aperto ed è possibile utilizzarlo per creare un [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto o chiamare il querydef [Execute](#execute) funzione membro.

Se non si specifica un'istruzione SQL in *lpszSQL*, non è possibile eseguire la query con `Execute` ma è possibile utilizzarla per creare un recordset. In tal caso, MFC utilizza l'istruzione SQL predefinita del recordset.

## <a name="cdaoquerydefexecute"></a><a name="execute"></a>CDaoQueryDef::Esecuzione

Chiamare questa funzione membro per eseguire la query definita dall'oggetto querydef.

```
virtual void Execute(int nOptions = dbFailOnError);
```

### <a name="parameters"></a>Parametri

*nOpzioni*<br/>
Numero intero che determina le caratteristiche della query. Per informazioni correlate, vedere l'argomento "Metodo Execute" nella Guida in linea di DAO. È possibile utilizzare l'operatore OR bit per bit ( **&#124;**) per combinare le costanti seguenti per questo argomento:

- `dbDenyWrite`Negare l'autorizzazione di scrittura ad altri utenti.

- `dbInconsistent`Aggiornamenti incoerenti.

- `dbConsistent`Aggiornamenti coerenti.

- `dbSQLPassThrough`Pass-through SQL. Fa sì che l'istruzione SQL venga passata a un database ODBC per l'elaborazione.

- `dbFailOnError`Valore predefinito. Eseguire il rollback degli aggiornamenti se si verifica un errore e segnalare l'errore all'utente.

- `dbSeeChanges`Generare un errore di run-time se un altro utente sta modificando i dati che si stanno modificando.

> [!NOTE]
> Per una spiegazione dei termini "incoerente" e "coerente", vedere l'argomento "Metodo Execute" nella Guida in linea di DAO.

### <a name="remarks"></a>Osservazioni

Gli oggetti Querydef utilizzati per l'esecuzione in questo modo possono rappresentare solo uno dei tipi di query seguenti:

- Query di azione

- Query pass-through SQL

`Execute`non funziona per le query che restituiscono record, ad esempio le query di selezione. `Execute`viene in genere utilizzato per le query di operazioni bulk, ad esempio **UPDATE**, **INSERT**o **SELECT INTO**o per le operazioni DDL (Data Definition Language).

> [!TIP]
> Il modo migliore per utilizzare le origini dati ODBC consiste nell'associare tabelle a Microsoft Jet (. MDB). Per ulteriori informazioni, vedere l'argomento "Accesso a database esterni con DAO" nella Guida in linea di DAO.

Chiamare la funzione membro [GetRecordsAffected](#getrecordsaffected) dell'oggetto querydef per determinare `Execute` il numero di record interessati dalla chiamata più recente. Ad esempio, `GetRecordsAffected` restituisce informazioni sul numero di record eliminati, aggiornati o inseriti durante l'esecuzione di una query di azione. Il conteggio restituito non rifletterà le modifiche nelle tabelle correlate quando sono attivi aggiornamenti o eliminazioni a catena.

Se si `dbInconsistent` includono `dbConsistent` entrambi e o se non si `dbInconsistent`includono nessuna delle due, il risultato sarà quello predefinito, .

`Execute`non restituisce un recordset. L'utilizzo `Execute` di una query che seleziona record fa sì che MFC generi un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md).

## <a name="cdaoquerydefgetconnect"></a><a name="getconnect"></a>CDaoQueryDef::GetConnect

Chiamare questa funzione membro per ottenere la stringa di connessione associata all'origine dati di querydef.

```
CString GetConnect();
```

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) contenente la stringa di connessione per il querydef.

### <a name="remarks"></a>Osservazioni

Questa funzione viene utilizzata solo con origini dati ODBC e alcuni driver ISAM. Non viene utilizzato con Microsoft Jet (. MDB) banche dati; in questo `GetConnect` caso, restituisce una stringa vuota. Per ulteriori informazioni, vedere [SetConnect](#setconnect).

> [!TIP]
> Il modo migliore per utilizzare le tabelle ODBC consiste nel collegarle a un oggetto . Database MDB. Per ulteriori informazioni, vedere l'argomento "Accesso a database esterni con DAO" nella Guida in linea di DAO.

Per informazioni sulle stringhe di connessione, vedere l'argomento "Proprietà Connect" nella Guida in linea di DAO.

## <a name="cdaoquerydefgetdatecreated"></a><a name="getdatecreated"></a>CDaoQueryDef::GetDateCreated

Chiamare questa funzione membro per ottenere la data di creazione dell'oggetto querydef.

```
COleDateTime GetDateCreated();
```

### <a name="return-value"></a>Valore restituito

Oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) contenente la data e l'ora di creazione del querydef.

### <a name="remarks"></a>Osservazioni

Per informazioni correlate, vedere l'argomento "Proprietà DateCreated, LastUpdated" nella Guida in linea di DAO.

## <a name="cdaoquerydefgetdatelastupdated"></a><a name="getdatelastupdated"></a>CDaoQueryDef::GetDateLastUpdated

Chiamare questa funzione membro per ottenere la data dell'ultimo aggiornamento dell'oggetto querydef, ovvero quando una delle relative proprietà è stata modificata, ad esempio il nome, la stringa SQL o la stringa di connessione.

```
COleDateTime GetDateLastUpdated();
```

### <a name="return-value"></a>Valore restituito

Oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto contenente la data e l'ora dell'ultimo aggiornamento di querydef.

### <a name="remarks"></a>Osservazioni

Per informazioni correlate, vedere l'argomento "Proprietà DateCreated, LastUpdated" nella Guida in linea di DAO.

## <a name="cdaoquerydefgetfieldcount"></a><a name="getfieldcount"></a>CDaoQueryDef::GetFieldCount

Chiamare questa funzione membro per recuperare il numero di campi nella query.

```
short GetFieldCount();
```

### <a name="return-value"></a>Valore restituito

Numero di campi definiti nella query.

### <a name="remarks"></a>Osservazioni

`GetFieldCount`è utile per scorrere in ciclo tutti i campi nel file querydef. A tale scopo, utilizzare `GetFieldCount` insieme a [GetFieldInfo](#getfieldinfo).

## <a name="cdaoquerydefgetfieldinfo"></a><a name="getfieldinfo"></a>CDaoQueryDef::GetFieldInfo

Chiamare questa funzione membro per ottenere vari tipi di informazioni su un campo definito nel querydef.

```
void GetFieldInfo(
    int nIndex,
    CDaoFieldInfo& fieldinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);

void GetFieldInfo(
    LPCTSTR lpszName,
    CDaoFieldInfo& fieldinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base zero del campo desiderato nella raccolta Fields di querydef, per la ricerca in base all'indice.

*Fieldinfo*<br/>
Riferimento a `CDaoFieldInfo` un oggetto che restituisce le informazioni richieste.

*dwInfoOptions*<br/>
Opzioni che specificano le informazioni sul campo da recuperare. Le opzioni disponibili sono elencate qui insieme a ciò che causano la restituzione della funzione:

- AFX_DAO_PRIMARY_INFO (Predefinito) Nome, Tipo, Dimensione, Attributi

- AFX_DAO_SECONDARY_INFO informazioni primarie più: Posizione ordinale, Obbligatorio, Consenti lunghezza zero, Campo di origine, Nome straniero, Tabella di origine, Ordine di confronto

- AFX_DAO_ALL_INFO informazioni primarie e secondarie più: Valore predefinito, Testo di convalida, Regola di convalida

*lpszName*<br/>
Stringa contenente il nome del campo desiderato, per la ricerca in base al nome. È possibile utilizzare un [oggetto CString](../../atl-mfc-shared/reference/cstringt-class.md).

### <a name="remarks"></a>Osservazioni

Per una descrizione delle informazioni restituite in *fieldinfo*, vedere il [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) struttura. Questa struttura dispone di membri che corrispondono alle informazioni descrittive in *dwInfoOptions* sopra. Se richiedi un livello di informazioni, ottieni anche tutti i livelli precedenti di informazioni.

## <a name="cdaoquerydefgetname"></a><a name="getname"></a>CDaoQueryDef::GetName

Chiamare questa funzione membro per recuperare il nome della query rappresentata da querydef.

```
CString GetName();
```

### <a name="return-value"></a>Valore restituito

Nome della query.

### <a name="remarks"></a>Osservazioni

I nomi Querydef sono nomi univoci definiti dall'utente. Per ulteriori informazioni sui nomi di querydef, vedere l'argomento "Proprietà Name" nella Guida in linea di DAO.

## <a name="cdaoquerydefgetodbctimeout"></a><a name="getodbctimeout"></a>CDaoQueryDef::GetODBCTimeout

Chiamare questa funzione membro per recuperare il limite di tempo corrente prima che si scada una query a un'origine dati ODBC.

```
short GetODBCTimeout();
```

### <a name="return-value"></a>Valore restituito

Numero di secondi prima del timeout di una query.

### <a name="remarks"></a>Osservazioni

Per informazioni su questo limite di tempo, vedere l'argomento "Proprietà ODBCTimeout" nella Guida in linea di DAO.

> [!TIP]
> Il modo migliore per utilizzare le tabelle ODBC consiste nel collegarle a microsoft Jet (. MDB). Per ulteriori informazioni, vedere l'argomento "Accesso a database esterni con DAO" nella Guida in linea di DAO.

## <a name="cdaoquerydefgetparametercount"></a><a name="getparametercount"></a>CDaoQueryDef::GetParameterCount

Chiamare questa funzione membro per recuperare il numero di parametri nella query salvata.

```
short GetParameterCount();
```

### <a name="return-value"></a>Valore restituito

Numero di parametri definiti nella query.

### <a name="remarks"></a>Osservazioni

`GetParameterCount`è utile per scorrere in ciclo tutti i parametri nel file querydef. A tale scopo, utilizzare `GetParameterCount` insieme a [GetParameterInfo](#getparameterinfo).

Per informazioni correlate, vedere gli argomenti "Oggetto parametro", "Insieme Parameters" e "Dichiarazione PARAMETERS (SQL)" nella Guida in linea di DAO.

## <a name="cdaoquerydefgetparameterinfo"></a><a name="getparameterinfo"></a>CDaoQueryDef::GetParameterInfo

Chiamare questa funzione membro per ottenere informazioni su un parametro definito nel querydef.

```
void GetParameterInfo(
    int nIndex,
    CDaoParameterInfo& paraminfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);

void GetParameterInfo(
    LPCTSTR lpszName,
    CDaoParameterInfo& paraminfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base zero del parametro desiderato nella raccolta Parameters di querydef, per la ricerca in base all'indice.

*paraminfo*<br/>
Riferimento a un [cDaoParameterInfo](../../mfc/reference/cdaoparameterinfo-structure.md) oggetto che restituisce le informazioni richieste.

*dwInfoOptions*<br/>
Opzioni che specificano le informazioni sul parametro da recuperare. L'opzione disponibile è elencata qui insieme a ciò che fa sì che la funzione per restituire:

- AFX_DAO_PRIMARY_INFO (predefinito) Nome, Tipo

*lpszName*<br/>
Stringa contenente il nome del parametro desiderato, per la ricerca in base al nome. È possibile utilizzare un [oggetto CString](../../atl-mfc-shared/reference/cstringt-class.md).

### <a name="remarks"></a>Osservazioni

Per una descrizione delle informazioni restituite in *paraminfo*, vedere la struttura [CDaoParameterInfo.](../../mfc/reference/cdaoparameterinfo-structure.md) Questa struttura dispone di membri che corrispondono alle informazioni descrittive in *dwInfoOptions* sopra.

Per informazioni correlate, vedere l'argomento "Dichiarazione PARAMETERS (SQL)" nella Guida in linea di DAO.

## <a name="cdaoquerydefgetparamvalue"></a><a name="getparamvalue"></a>CDaoQueryDef::GetParamValue

Chiamare questa funzione membro per recuperare il valore corrente del parametro specificato archiviato nella raccolta Parameters di querydef.

```
virtual COleVariant GetParamValue(LPCTSTR lpszName);
virtual COleVariant GetParamValue(int nIndex);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Nome del parametro di cui si desidera il valore per la ricerca in base al nome.

*nIndex*<br/>
Indice in base zero del parametro nella raccolta Parameters di querydef, per la ricerca in base all'indice. È possibile ottenere questo valore con chiamate a [GetParameterCount](#getparametercount) e [GetParameterInfo](#getparameterinfo).

### <a name="return-value"></a>Valore restituito

Oggetto della classe [COleVariant](../../mfc/reference/colevariant-class.md) che contiene il valore del parametro.

### <a name="remarks"></a>Osservazioni

È possibile accedere al parametro in base al nome o alla posizione ordinale nella raccolta.

Per informazioni correlate, vedere l'argomento "Dichiarazione PARAMETERS (SQL)" nella Guida in linea di DAO.

## <a name="cdaoquerydefgetrecordsaffected"></a><a name="getrecordsaffected"></a>CDaoQueryDef::GetRecordsAffected

Chiamare questa funzione membro per determinare il numero di record interessati dall'ultima chiamata di [Execute](#execute).

```
long GetRecordsAffected();
```

### <a name="return-value"></a>Valore restituito

Numero di record interessati.

### <a name="remarks"></a>Osservazioni

Il conteggio restituito non rifletterà le modifiche nelle tabelle correlate quando sono attivi aggiornamenti o eliminazioni a catena.

Per informazioni correlate, vedere l'argomento "Proprietà RecordsAffected" nella Guida in linea di DAO.

## <a name="cdaoquerydefgetreturnsrecords"></a><a name="getreturnsrecords"></a>CDaoQueryDef::GetReturnsRecords

Chiamare questa funzione membro per determinare se il querydef è basato su una query che restituisce record.

```
BOOL GetReturnsRecords();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il querydef è basato su una query che restituisce record; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene utilizzata solo per le query pass-through SQL. Per altre informazioni sulle query SQL, vedere la funzione membro [Execute.For](#execute) more information about SQL queries, see the Execute member function. Per altre informazioni sull'uso delle query pass-through SQL, vedere la funzione membro [SetReturnsRecords.For](#setreturnsrecords) more information about working with SQL pass-through queries, see the SetReturnsRecords member function.

Per informazioni correlate, vedere l'argomento "Proprietà ReturnsRecords" nella Guida in linea di DAO.

## <a name="cdaoquerydefgetsql"></a><a name="getsql"></a>CDaoQueryDef::GetSQL

Chiamare questa funzione membro per recuperare l'istruzione SQL che definisce la query su cui si basa il querydef.

```
CString GetSQL();
```

### <a name="return-value"></a>Valore restituito

Istruzione SQL che definisce la query su cui si basa querydef.

### <a name="remarks"></a>Osservazioni

È quindi possibile analizzare la stringa per parole chiave, nomi di tabella e così via.

Per informazioni correlate, vedere gli argomenti "Proprietà SQL", "Confronto di SQL Del GaE del modulo di gestione di database Microsoft Jet e SQL ANSI" e "Esecuzione di query su un database con SQL nel codice" nella Guida in linea di DAO.

## <a name="cdaoquerydefgettype"></a><a name="gettype"></a>CDaoQueryDef::GetType

Chiamare questa funzione membro per determinare il tipo di query del querydef.

```
short GetType();
```

### <a name="return-value"></a>Valore restituito

Tipo della query definito dal querydef. Per i valori, vedere Osservazioni.

### <a name="remarks"></a>Osservazioni

Il tipo di query viene impostato in base a quanto specificato nella stringa SQL di querydef quando si crea querydef o si chiama la funzione membro [SetSQL](#setsql) di un oggetto querydef esistente. Il tipo di query restituito da questa funzione può essere uno dei valori seguenti:The query type returned by this function can be one of the following values:

- `dbQSelect`Selezionare

- Azione `dbQAction`

- `dbQCrosstab`A campi incrociati

- `dbQDelete`Elimina

- `dbQUpdate` Update

- `dbQAppend`Aggiungere

- `dbQMakeTable`Tavola per la creazione

- `dbQDDL`Definizione dei dati

- `dbQSQLPassThrough`Passante

- `dbQSetOperation`Unione

- `dbQSPTBulk`Utilizzato `dbQSQLPassThrough` con per specificare una query che non restituisce record.

> [!NOTE]
> Per creare una query pass-through SQL, `dbSQLPassThrough` non impostare la costante. Viene impostato automaticamente dal modulo di gestione di database Microsoft Jet quando si crea un oggetto querydef e si imposta la stringa di connessione.

Per informazioni sulle stringhe SQL, vedere [GetSQL](#getsql). Per informazioni sui tipi di query, vedere [Esecuzione](#execute).

## <a name="cdaoquerydefisopen"></a><a name="isopen"></a>CDaoQueryDef::IsOpen

Chiamare questa funzione membro `CDaoQueryDef` per determinare se l'oggetto è attualmente aperto.

```
BOOL IsOpen() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da `CDaoQueryDef` zero se l'oggetto è attualmente aperto; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Un oggetto querydef deve essere in uno stato aperto prima di utilizzarlo per chiamare [Execute](#execute) o per creare un [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto. Per inserire un oggetto querydef in una chiamata di stato aperto [Create](#create) (per un nuovo oggetto querydef) o [Open](#open) (per un oggetto querydef esistente).

## <a name="cdaoquerydefm_pdatabase"></a><a name="m_pdatabase"></a>CDaoQueryDef::m_pDatabase

Contiene un puntatore all'oggetto [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) associato all'oggetto querydef.

### <a name="remarks"></a>Osservazioni

Utilizzare questo puntatore se è necessario accedere direttamente al database, ad esempio per ottenere puntatori ad altri oggetti querydef o recordset negli insiemi del database.

## <a name="cdaoquerydefm_pdaoquerydef"></a><a name="m_pdaoquerydef"></a>CDaoQueryDef::m_pDAOQueryDef

Contiene un puntatore all'interfaccia OLE per l'oggetto daO querydef sottostante.

### <a name="remarks"></a>Osservazioni

Questo puntatore viene fornito per completezza e coerenza con le altre classi. Tuttavia, poiché MFC incapsula in modo completo i dodef DAO, è improbabile che sia necessario. Se lo si utilizza, farlo con cautela - in particolare, non modificare il valore del puntatore a meno che non si sa cosa si sta facendo.

## <a name="cdaoquerydefopen"></a><a name="open"></a>CDaoQueryDef::Open

Chiamare questa funzione membro per aprire un querydef precedentemente salvato nell'insieme QueryDefs del database.

```
virtual void Open(LPCTSTR lpszName = NULL);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Stringa contenente il nome del file querydef salvato da aprire. È possibile utilizzare un [oggetto CString](../../atl-mfc-shared/reference/cstringt-class.md).

### <a name="remarks"></a>Osservazioni

Una volta aperto il querydef, è possibile chiamare la relativa funzione membro [Execute](#execute) o utilizzare querydef per creare un oggetto [CDaoRecordset.](../../mfc/reference/cdaorecordset-class.md)

## <a name="cdaoquerydefsetconnect"></a><a name="setconnect"></a>CDaoQueryDef::SetConnect

Chiamare questa funzione membro per impostare la stringa di connessione dell'oggetto querydef.

```
void SetConnect(LPCTSTR lpszConnect);
```

### <a name="parameters"></a>Parametri

*lpszConnect (connessione a questo stato)*<br/>
Stringa contenente una stringa di connessione per l'oggetto [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) associato.

### <a name="remarks"></a>Osservazioni

La stringa di connessione viene utilizzata per passare informazioni aggiuntive a ODBC e alcuni driver ISAM in base alle esigenze. Non viene utilizzato per Microsoft Jet (. MDB).

> [!TIP]
> Il modo migliore per utilizzare le tabelle ODBC consiste nel collegarle a un oggetto . Database MDB.

Prima di eseguire un oggetto querydef che rappresenta una query pass-through `SetConnect` SQL su un'origine dati ODBC, impostare la stringa di connessione con e chiamare [SetReturnsRecords](#setreturnsrecords) per specificare se la query restituisce i record.

Per ulteriori informazioni sulla struttura della stringa di connessione ed esempi di componenti della stringa di connessione, vedere l'argomento "Proprietà Connect" nella Guida in linea di DAO.

## <a name="cdaoquerydefsetname"></a><a name="setname"></a>CDaoQueryDef::SetName

Chiamare questa funzione membro se si desidera modificare il nome di un querydef che non è temporaneo.

```
void SetName(LPCTSTR lpszName);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Stringa contenente il nuovo nome per una query non temporanea nell'oggetto [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) associato.

### <a name="remarks"></a>Osservazioni

I nomi di Querydef sono nomi univoci definiti dall'utente. È possibile `SetName` chiamare prima che l'oggetto querydef venga aggiunto all'insieme QueryDefs.

## <a name="cdaoquerydefsetodbctimeout"></a><a name="setodbctimeout"></a>CDaoQueryDef::SetODBCTimeout

Chiamare questa funzione membro per impostare il limite di tempo prima che si scada una query su un'origine dati ODBC.

```
void SetODBCTimeout(short nODBCTimeout);
```

### <a name="parameters"></a>Parametri

*nODBCTimeout (informazioni in base alla piass*<br/>
Numero di secondi prima del timeout di una query.

### <a name="remarks"></a>Osservazioni

Questa funzione membro consente di eseguire l'override del numero predefinito di secondi prima che le operazioni successive sull'origine dati connessa "timeout". È possibile che si verifichi il timeout di un'operazione a causa di problemi di accesso alla rete, tempi di elaborazione delle query eccessivi e così via. Chiamare `SetODBCTimeout` prima di eseguire una query con questo querydef se si desidera modificare il valore di timeout della query. (Come ODBC riutilizza le connessioni, il valore di timeout è lo stesso per tutti i client sulla stessa connessione.)

Il valore predefinito per i timeout delle query è 60 secondi.

## <a name="cdaoquerydefsetparamvalue"></a><a name="setparamvalue"></a>CDaoQueryDef::SetParamValue

Chiamare questa funzione membro per impostare il valore di un parametro nel querydef in fase di esecuzione.

```
virtual void SetParamValue(
    LPCTSTR lpszName,
    const COleVariant& varValue);

virtual void SetParamValue(
    int nIndex,
    const COleVariant& varValue);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Nome del parametro di cui si desidera impostare il valore.

*varValue (valore varValue)*<br/>
Il valore da impostare; vedere Osservazioni.

*nIndex*<br/>
Posizione ordinale del parametro nell'insieme Parameters di querydef. È possibile ottenere questo valore con chiamate a [GetParameterCount](#getparametercount) e [GetParameterInfo](#getparameterinfo).

### <a name="remarks"></a>Osservazioni

Il parametro deve essere già stato stabilito come parte della stringa SQL di querydef. È possibile accedere al parametro in base al nome o alla posizione ordinale nella raccolta.

Specificare il valore `COleVariant` da impostare come oggetto. Per informazioni sull'impostazione del `COleVariant` valore e del tipo desiderati nell'oggetto , vedere la classe [COleVariant](../../mfc/reference/colevariant-class.md).

## <a name="cdaoquerydefsetreturnsrecords"></a><a name="setreturnsrecords"></a>CDaoQueryDef::SetReturnsRecords

Chiamare questa funzione membro come parte del processo di impostazione di una query pass-through SQL a un database esterno.

```
void SetReturnsRecords(BOOL bReturnsRecords);
```

### <a name="parameters"></a>Parametri

*bRegistri di resi*<br/>
Passare TRUE se la query su un database esterno restituisce record; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

In tal caso, è necessario creare il querydef `CDaoQueryDef` e impostarne le proprietà utilizzando altre funzioni membro. Per una descrizione dei database esterni, vedere [SetConnect](#setconnect).

## <a name="cdaoquerydefsetsql"></a><a name="setsql"></a>CDaoQueryDef::SetSQL

Chiamare questa funzione membro per impostare l'istruzione SQL eseguita da querydef.

```
void SetSQL(LPCTSTR lpszSQL);
```

### <a name="parameters"></a>Parametri

*lpszSQL (informazioni in lingua inglese)*<br/>
Stringa contenente un'istruzione SQL completa, adatta per l'esecuzione. La sintassi di questa stringa dipende dal DBMS a cui è destinata la query. Per una descrizione della sintassi utilizzata nel modulo di gestione di database Microsoft Jet, vedere l'argomento "Compilazione di istruzioni SQL nel codice" nella Guida di DAO.

### <a name="remarks"></a>Osservazioni

Un utilizzo `SetSQL` tipico di è l'impostazione di un oggetto querydef da utilizzare in una query pass-through SQL. Per la sintassi delle query pass-through SQL nel sistema DBMS di destinazione, vedere la documentazione relativa al dbMS.

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CDaoRecordset (classe)](../../mfc/reference/cdaorecordset-class.md)<br/>
[Classe CDaoDatabase](../../mfc/reference/cdaodatabase-class.md)<br/>
[Classe CDaoTableDef](../../mfc/reference/cdaotabledef-class.md)<br/>
[Classe CDaoException](../../mfc/reference/cdaoexception-class.md)
