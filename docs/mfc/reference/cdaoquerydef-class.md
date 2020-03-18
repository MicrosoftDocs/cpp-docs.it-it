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
ms.openlocfilehash: 08fb2909a4fd2e5bda3dfc63d19224a515c7c699
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79418797"
---
# <a name="cdaoquerydef-class"></a>Classe CDaoQueryDef

Rappresenta una definizione della query, o "querydef, in genere salvata in un database.

## <a name="syntax"></a>Sintassi

```
class CDaoQueryDef : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoQueryDef:: CDaoQueryDef](#cdaoquerydef)|Costruisce un oggetto `CDaoQueryDef`. Chiamare quindi `Open` o `Create`, a seconda delle esigenze.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoQueryDef:: Append](#append)|Accoda l'oggetto QueryDef alla raccolta QueryDefs del database come query salvata.|
|[CDaoQueryDef:: CanUpdate](#canupdate)|Restituisce un valore diverso da zero se la query è in grado di aggiornare il database.|
|[CDaoQueryDef:: Close](#close)|Chiude l'oggetto QueryDef. Eliminare definitivamente C++ l'oggetto quando viene terminato.|
|[CDaoQueryDef:: create](#create)|Crea l'oggetto QueryDef DAO sottostante. Utilizzare l'oggetto QueryDef come query temporanea oppure chiamare `Append` per salvarlo nel database.|
|[CDaoQueryDef:: Execute](#execute)|Esegue la query definita dall'oggetto QueryDef.|
|[CDaoQueryDef:: GetConnect](#getconnect)|Restituisce la stringa di connessione associata all'oggetto QueryDef. La stringa di connessione identifica l'origine dati. (Solo per le query pass-through SQL; in caso contrario, una stringa vuota).|
|[CDaoQueryDef:: GetDateCreated](#getdatecreated)|Restituisce la data di creazione della query salvata.|
|[CDaoQueryDef:: GetDateLastUpdated](#getdatelastupdated)|Restituisce la data dell'ultimo aggiornamento della query salvata.|
|[CDaoQueryDef:: GetFieldCount](#getfieldcount)|Restituisce il numero di campi definiti dall'oggetto QueryDef.|
|[CDaoQueryDef:: GetFieldInfo](#getfieldinfo)|Restituisce informazioni su un campo specificato definito nella query.|
|[CDaoQueryDef:: GetName](#getname)|Restituisce il nome dell'oggetto QueryDef.|
|[CDaoQueryDef:: GetODBCTimeout](#getodbctimeout)|Restituisce il valore di timeout utilizzato da ODBC (per una query ODBC) quando l'oggetto QueryDef viene eseguito. Determina per quanto tempo consentire il completamento dell'azione della query.|
|[CDaoQueryDef:: GetParameterCount](#getparametercount)|Restituisce il numero di parametri definiti per la query.|
|[CDaoQueryDef:: GetParameterInfo](#getparameterinfo)|Restituisce informazioni su un parametro specificato per la query.|
|[CDaoQueryDef:: GetParamValue](#getparamvalue)|Restituisce il valore di un parametro specificato alla query.|
|[CDaoQueryDef:: GetRecordsAffected](#getrecordsaffected)|Restituisce il numero di record interessati da una query di azione.|
|[CDaoQueryDef:: GetReturnsRecords](#getreturnsrecords)|Restituisce un valore diverso da zero se la query definita dall'oggetto querydef restituisce record.|
|[CDaoQueryDef:: GetSQL](#getsql)|Restituisce la stringa SQL che specifica la query definita dall'oggetto QueryDef.|
|[CDaoQueryDef:: GetType](#gettype)|Restituisce il tipo di query: Delete, Update, Append, Make-Table e così via.|
|[CDaoQueryDef:: Open](#isopen)|Restituisce un valore diverso da zero se l'oggetto QueryDef è aperto e può essere eseguito.|
|[CDaoQueryDef:: Open](#open)|Apre un oggetto querydef esistente archiviato nella raccolta QueryDefs del database.|
|[CDaoQueryDef:: seconnect](#setconnect)|Imposta la stringa di connessione per una query pass-through SQL su un'origine dati ODBC.|
|[CDaoQueryDef:: nome](#setname)|Imposta il nome della query salvata, sostituendo il nome in uso al momento della creazione dell'oggetto QueryDef.|
|[CDaoQueryDef:: SetODBCTimeout](#setodbctimeout)|Imposta il valore di timeout utilizzato da ODBC (per una query ODBC) quando l'oggetto QueryDef viene eseguito.|
|[CDaoQueryDef:: SetParamValue](#setparamvalue)|Imposta la query sul valore di un parametro specificato.|
|[CDaoQueryDef:: SetReturnsRecords](#setreturnsrecords)|Specifica se l'oggetto querydef restituisce record. L'impostazione di questo attributo su TRUE è valida solo per le query pass-through SQL.|
|[CDaoQueryDef:: SetSQL](#setsql)|Imposta la stringa SQL che specifica la query definita dall'oggetto QueryDef.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoQueryDef:: m_pDAOQueryDef](#m_pdaoquerydef)|Puntatore all'interfaccia OLE per l'oggetto QueryDef DAO sottostante.|
|[CDaoQueryDef:: m_pDatabase](#m_pdatabase)|Puntatore all'oggetto `CDaoDatabase` a cui è associato l'oggetto QueryDef. L'oggetto QueryDef potrebbe essere salvato nel database.|

## <a name="remarks"></a>Osservazioni

Un oggetto QueryDef è un oggetto di accesso ai dati che contiene l'istruzione SQL che descrive una query e le relative proprietà, ad esempio "data di creazione" e "timeout ODBC". È anche possibile creare oggetti QueryDef temporanei senza salvarli, ma è utile, ed è molto più efficiente, per salvare le query comunemente riutilizzate in un database. Un oggetto [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) mantiene una raccolta, denominata raccolta QueryDefs, che contiene il QueryDefs salvato.

> [!NOTE]
>  Le classi di database DAO sono diverse dalle classi di database MFC basate su Open Database Connectivity (ODBC). Tutti i nomi delle classi di database DAO hanno il prefisso "CDao". È comunque possibile accedere alle origini dati ODBC con le classi DAO. In generale, le classi MFC basate su DAO sono più idonee delle classi MFC basate su ODBC. le classi basate su DAO possono accedere ai dati, inclusi i driver ODBC, tramite il proprio motore di database. Le classi basate su DAO supportano anche operazioni DDL (Data Definition Language), ad esempio l'aggiunta di tabelle tramite le classi, senza la necessità di chiamare direttamente DAO.

## <a name="usage"></a>Uso

Usare gli oggetti QueryDef per lavorare con una query salvata esistente o per creare una nuova query salvata o una query temporanea:

1. In tutti i casi, innanzitutto costruire un oggetto `CDaoQueryDef`, fornendo un puntatore all'oggetto [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) a cui appartiene la query.

1. Eseguire quindi le operazioni seguenti, a seconda di ciò che si desidera:

   - Per utilizzare una query salvata esistente, chiamare la funzione membro [Open](#open) dell'oggetto QueryDef, specificando il nome della query salvata.

   - Per creare una nuova query salvata, chiamare la funzione membro [create](#create) dell'oggetto QueryDef, specificando il nome della query. Chiamare quindi [Append](#append) per salvare la query aggiungendola alla raccolta QueryDefs del database. `Create` inserisce il querydef in uno stato aperto, quindi, dopo aver chiamato `Create` non si chiama `Open`.

   - Per creare un oggetto querydef temporaneo, chiamare `Create`. Passare una stringa vuota per il nome della query. Non chiamare `Append`.

Al termine dell'utilizzo di un oggetto QueryDef, chiamare la funzione membro [Close](#close) ; eliminare quindi l'oggetto QueryDef.

> [!TIP]
>  Il modo più semplice per creare le query salvate consiste nel crearli e archiviarli nel database tramite Microsoft Access. Quindi, è possibile aprirli e usarli nel codice MFC.

## <a name="purposes"></a>Scopi

È possibile utilizzare un oggetto QueryDef per uno degli scopi seguenti:

- Per creare un oggetto `CDaoRecordset`

- Per chiamare la funzione membro `Execute` dell'oggetto per eseguire direttamente una query di azione o una query pass-through SQL

È possibile utilizzare un oggetto QueryDef per qualsiasi tipo di query, tra cui SELECT, Action, incrociato, DELETE, Update, Append, Make-Table, Data Definition, SQL pass-through, Union e query bulk. Il tipo della query è determinato dal contenuto dell'istruzione SQL fornita. Per informazioni sui tipi di query, vedere le funzioni membro `Execute` e [GetType](#gettype) . I recordset vengono comunemente usati per le query che restituiscono righe, in genere quelli che usano l'oggetto **Select... DA** parole chiave. `Execute` viene comunemente usato per le operazioni bulk. Per altre informazioni, vedere [Execute](#execute) e [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md).

## <a name="querydefs-and-recordsets"></a>QueryDefs e recordset

Per usare un oggetto QueryDef per creare un oggetto `CDaoRecordset`, in genere si crea o si apre un oggetto QueryDef come descritto in precedenza. Costruire quindi un oggetto recordset, passando un puntatore all'oggetto querydef quando si chiama [CDaoRecordset:: Open](../../mfc/reference/cdaorecordset-class.md#open). L'oggetto QueryDef passato deve essere in uno stato aperto. Per ulteriori informazioni, vedere la classe [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md).

Non è possibile utilizzare un oggetto QueryDef per creare un recordset (l'utilizzo più comune per un oggetto QueryDef), a meno che non si trovi in uno stato aperto. Inserire il querydef in uno stato aperto chiamando `Open` o `Create`.

## <a name="external-databases"></a>Database esterni

Gli oggetti QueryDef rappresentano il modo migliore per utilizzare il sottolinguaggio SQL nativo di un motore di database esterno. Ad esempio, è possibile creare una query Transact SQL (come usata in Microsoft SQL Server) e archiviarla in un oggetto QueryDef. Quando è necessario usare una query SQL non basata sul motore di database di Microsoft Jet, è necessario specificare una stringa di connessione che punta all'origine dati esterna. Le query con stringhe di connessione valide ignorano il motore di database e passano la query direttamente al server di database esterno per l'elaborazione.

> [!TIP]
>  Il modo migliore per utilizzare le tabelle ODBC consiste nel collegarle a Microsoft Jet (. MDB) database.

Per informazioni correlate, vedere gli argomenti "oggetto QueryDef", "raccolta QueryDefs" e "oggetto CdbDatabase" in DAO SDK.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CDaoQueryDef`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

##  <a name="append"></a>CDaoQueryDef:: Append

Chiamare questa funzione membro dopo aver chiamato [create](#create) per creare un nuovo oggetto QueryDef.

```
virtual void Append();
```

### <a name="remarks"></a>Osservazioni

`Append` Salva l'oggetto QueryDef nel database aggiungendo l'oggetto alla raccolta QueryDefs del database. È possibile utilizzare il querydef come oggetto temporaneo senza accodarlo, ma se si desidera che venga mantenuto, è necessario chiamare `Append`.

Se si tenta di aggiungere un oggetto querydef temporaneo, MFC genera un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md).

##  <a name="canupdate"></a>CDaoQueryDef:: CanUpdate

Chiamare questa funzione membro per determinare se è possibile modificare l'oggetto QueryDef, ad esempio modificando il nome o la stringa SQL.

```
BOOL CanUpdate();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se si è autorizzati a modificare l'oggetto QueryDef; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

È possibile modificare l'oggetto querydef se:

- Non è basato su un database aperto in sola lettura.

- Si dispone delle autorizzazioni di aggiornamento per il database.

   Questo dipende dal fatto che siano state implementate le funzionalità di sicurezza di. MFC non fornisce supporto per la sicurezza. è necessario implementarlo autonomamente chiamando DAO direttamente o utilizzando Microsoft Access. Vedere l'argomento "proprietà delle autorizzazioni" nella Guida di DAO.

##  <a name="cdaoquerydef"></a>CDaoQueryDef:: CDaoQueryDef

Costruisce un oggetto `CDaoQueryDef`.

```
CDaoQueryDef(CDaoDatabase* pDatabase);
```

### <a name="parameters"></a>Parametri

*pDatabase*<br/>
Puntatore a un oggetto [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) aperto.

### <a name="remarks"></a>Osservazioni

L'oggetto può rappresentare un oggetto querydef esistente archiviato nella raccolta QueryDefs del database, una nuova query da archiviare nella raccolta o una query temporanea, che non deve essere archiviata. Il passaggio successivo dipende dal tipo di QueryDef:

- Se l'oggetto rappresenta un oggetto querydef esistente, chiamare la funzione membro [Open](#open) dell'oggetto per inizializzarla.

- Se l'oggetto rappresenta un nuovo querydef da salvare, chiamare la funzione membro [create](#create) dell'oggetto. In questo modo l'oggetto viene aggiunto alla raccolta QueryDefs del database. Chiamare quindi `CDaoQueryDef` funzioni membro per impostare gli attributi dell'oggetto. Infine, chiamare [Append](#append).

- Se l'oggetto rappresenta un oggetto querydef temporaneo (non da salvare nel database), chiamare `Create`, passando una stringa vuota per il nome della query. Dopo la chiamata di `Create`, inizializzare l'oggetto QueryDef impostando direttamente i relativi attributi. Non chiamare `Append`.

Per impostare gli attributi dell'oggetto QueryDef, è possibile utilizzare le funzioni membro [Sename](#setname), [SetSQL](#setsql), [seconnect](#setconnect), [SetODBCTimeout](#setodbctimeout)e [SetReturnsRecords](#setreturnsrecords) .

Al termine dell'oggetto QueryDef, chiamare la relativa funzione membro [Close](#close) . Se si dispone di un puntatore all'oggetto QueryDef, utilizzare l'operatore **Delete** per eliminare C++ definitivamente l'oggetto.

##  <a name="close"></a>CDaoQueryDef:: Close

Chiamare questa funzione membro al termine dell'utilizzo dell'oggetto QueryDef.

```
virtual void Close();
```

### <a name="remarks"></a>Osservazioni

La chiusura dell'oggetto querydef rilascia l'oggetto DAO sottostante, ma non elimina l'oggetto QueryDef DAO salvato C++ o l'oggetto `CDaoQueryDef`. Si tratta di un valore diverso da [CDaoDatabase::D eletequerydef](../../mfc/reference/cdaodatabase-class.md#deletequerydef), che elimina l'oggetto QueryDef dalla raccolta QueryDefs del database in DAO (se non è un oggetto querydef temporaneo).

##  <a name="create"></a>CDaoQueryDef:: create

Chiamare questa funzione membro per creare una nuova query salvata o una nuova query temporanea.

```
virtual void Create(
    LPCTSTR lpszName = NULL,
    LPCTSTR lpszSQL = NULL);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Nome univoco della query salvata nel database. Per informazioni dettagliate sulla stringa, vedere l'argomento "metodo CreateQueryDef" nella Guida di DAO. Se si accetta il valore predefinito, una stringa vuota, viene creato un querydef temporaneo. Una query di questo tipo non viene salvata nella raccolta QueryDefs.

*lpszSQL*<br/>
Stringa SQL che definisce la query. Se si accetta il valore predefinito NULL, sarà necessario chiamare in un secondo momento [SetSQL](#setsql) per impostare la stringa. Fino a quel momento, la query non è definita. È tuttavia possibile utilizzare la query non definita per aprire un recordset. per informazioni dettagliate, vedere la sezione Osservazioni. Prima di poter aggiungere l'oggetto QueryDef alla raccolta QueryDefs, è necessario definire l'istruzione SQL.

### <a name="remarks"></a>Osservazioni

Se si passa un nome in *lpszName*, è possibile chiamare il metodo [Append](#append) per salvare l'oggetto QueryDef nella raccolta QueryDefs del database. In caso contrario, l'oggetto è un querydef temporaneo e non viene salvato. In entrambi i casi, il querydef è in uno stato aperto ed è possibile usarlo per creare un oggetto [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) o chiamare la funzione membro [Execute](#execute) di querydef.

Se non si specifica un'istruzione SQL in *lpszSQL*, non è possibile eseguire la query con `Execute` ma è possibile utilizzarla per creare un recordset. In tal caso, MFC utilizza l'istruzione SQL predefinita del recordset.

##  <a name="execute"></a>CDaoQueryDef:: Execute

Chiamare questa funzione membro per eseguire la query definita dall'oggetto QueryDef.

```
virtual void Execute(int nOptions = dbFailOnError);
```

### <a name="parameters"></a>Parametri

*nOptions*<br/>
Integer che determina le caratteristiche della query. Per informazioni correlate, vedere l'argomento "Execute Method" nella Guida di DAO. È possibile utilizzare l'operatore OR bit per bit **&#124;** () per combinare le costanti seguenti per questo argomento:

- `dbDenyWrite` negare l'autorizzazione di scrittura ad altri utenti.

- `dbInconsistent` aggiornamenti non coerenti.

- `dbConsistent` aggiornamenti coerenti.

- pass-through di `dbSQLPassThrough` SQL. Determina il passaggio dell'istruzione SQL a un database ODBC per l'elaborazione.

- `dbFailOnError` valore predefinito. Eseguire il rollback degli aggiornamenti se si verifica un errore e segnalare l'errore all'utente.

- `dbSeeChanges` genera un errore di run-time se un altro utente sta modificando i dati che si stanno modificando.

> [!NOTE]
>  Per una spiegazione dei termini "incoerenti" e "coerente", vedere l'argomento "Execute Method" nella Guida di DAO.

### <a name="remarks"></a>Osservazioni

Gli oggetti QueryDef utilizzati per l'esecuzione in questo modo possono rappresentare solo uno dei tipi di query seguenti:

- Query di azione

- Query pass-through SQL

`Execute` non funziona per le query che restituiscono record, ad esempio query SELECT. `Execute` viene comunemente utilizzata per le query di operazione bulk, ad esempio **Update**, **Insert**o **select into**, oppure per operazioni di Data Definition Language (DDL).

> [!TIP]
>  Il modo migliore per utilizzare le origini dati ODBC consiste nel associare le tabelle a Microsoft Jet (. MDB) database. Per ulteriori informazioni, vedere l'argomento relativo all'accesso ai database esterni con DAO nella Guida di DAO.

Chiamare la funzione membro [GetRecordsAffected](#getrecordsaffected) dell'oggetto QueryDef per determinare il numero di record interessati dalla chiamata `Execute` più recente. Ad esempio, `GetRecordsAffected` restituisce informazioni sul numero di record eliminati, aggiornati o inseriti durante l'esecuzione di una query di azione. Il conteggio restituito non rifletterà le modifiche apportate alle tabelle correlate quando sono attivi gli aggiornamenti o le eliminazioni a cascata.

Se si includono sia `dbInconsistent` che `dbConsistent` o se non si include alcun oggetto, il risultato è quello predefinito, `dbInconsistent`.

`Execute` non restituisce un recordset. Se si utilizza `Execute` per una query che seleziona record, MFC genera un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md).

##  <a name="getconnect"></a>CDaoQueryDef:: GetConnect

Chiamare questa funzione membro per ottenere la stringa di connessione associata all'origine dati di querydef.

```
CString GetConnect();
```

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che contiene la stringa di connessione per l'oggetto QueryDef.

### <a name="remarks"></a>Osservazioni

Questa funzione viene utilizzata solo con le origini dati ODBC e alcuni driver ISAM. Non viene usato con Microsoft Jet (. MDB) database; in questo caso, `GetConnect` restituisce una stringa vuota. Per ulteriori informazioni, vedere la pagina relativa alla [disconnessione](#setconnect).

> [!TIP]
>  Il modo migliore per utilizzare le tabelle ODBC consiste nel collegarle a un. Database MDB. Per ulteriori informazioni, vedere l'argomento relativo all'accesso ai database esterni con DAO nella Guida di DAO.

Per informazioni sulle stringhe di connessione, vedere l'argomento "Connect Property" nella Guida di DAO.

##  <a name="getdatecreated"></a>CDaoQueryDef:: GetDateCreated

Chiamare questa funzione membro per ottenere la data di creazione dell'oggetto QueryDef.

```
COleDateTime GetDateCreated();
```

### <a name="return-value"></a>Valore restituito

Oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) contenente la data e l'ora di creazione dell'oggetto QueryDef.

### <a name="remarks"></a>Osservazioni

Per informazioni correlate, vedere l'argomento "DateCreated, proprietà LastUpdated" nella Guida di DAO.

##  <a name="getdatelastupdated"></a>CDaoQueryDef:: GetDateLastUpdated

Chiamare questa funzione membro per ottenere la data dell'ultimo aggiornamento dell'oggetto QueryDef, quando una delle relative proprietà è stata modificata, ad esempio il nome, la stringa SQL o la relativa stringa di connessione.

```
COleDateTime GetDateLastUpdated();
```

### <a name="return-value"></a>Valore restituito

Oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) contenente la data e l'ora dell'ultimo aggiornamento di querydef.

### <a name="remarks"></a>Osservazioni

Per informazioni correlate, vedere l'argomento "DateCreated, proprietà LastUpdated" nella Guida di DAO.

##  <a name="getfieldcount"></a>CDaoQueryDef:: GetFieldCount

Chiamare questa funzione membro per recuperare il numero di campi nella query.

```
short GetFieldCount();
```

### <a name="return-value"></a>Valore restituito

Numero di campi definiti nella query.

### <a name="remarks"></a>Osservazioni

`GetFieldCount` è utile per il ciclo di tutti i campi nell'oggetto QueryDef. A tale scopo, usare `GetFieldCount` insieme a [GetFieldInfo](#getfieldinfo).

##  <a name="getfieldinfo"></a>CDaoQueryDef:: GetFieldInfo

Chiamare questa funzione membro per ottenere vari tipi di informazioni su un campo definito nell'oggetto QueryDef.

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
Indice in base zero del campo desiderato nella raccolta di campi di querydef, per la ricerca in base all'indice.

*FieldInfo*<br/>
Riferimento a un oggetto `CDaoFieldInfo` che restituisce le informazioni richieste.

*dwInfoOptions*<br/>
Opzioni che specificano le informazioni sul campo da recuperare. Le opzioni disponibili sono elencate qui insieme alla cosa che determina la restituzione della funzione:

- Nome AFX_DAO_PRIMARY_INFO (impostazione predefinita), tipo, dimensioni, attributi

- AFX_DAO_SECONDARY_INFO informazioni primarie più: posizione ordinale, obbligatoria, Consenti lunghezza zero, campo di origine, nome esterno, tabella di origine, ordine di confronto

- AFX_DAO_ALL_INFO informazioni primarie e secondarie più: valore predefinito, testo di convalida, regola di convalida

*lpszName*<br/>
Stringa che contiene il nome del campo desiderato, per la ricerca in base al nome. È possibile utilizzare un oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md).

### <a name="remarks"></a>Osservazioni

Per una descrizione delle informazioni restituite in *FieldInfo*, vedere la struttura [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) . Questa struttura include membri che corrispondono alle informazioni descrittive sotto *dwInfoOptions* . Se si richiede un solo livello di informazioni, si ottengono anche i livelli di informazioni precedenti.

##  <a name="getname"></a>CDaoQueryDef:: GetName

Chiamare questa funzione membro per recuperare il nome della query rappresentata dall'oggetto QueryDef.

```
CString GetName();
```

### <a name="return-value"></a>Valore restituito

Nome della query.

### <a name="remarks"></a>Osservazioni

I nomi di querydef sono nomi univoci definiti dall'utente. Per ulteriori informazioni sui nomi di querydef, vedere l'argomento relativo alla proprietà Name nella Guida di DAO.

##  <a name="getodbctimeout"></a>CDaoQueryDef:: GetODBCTimeout

Chiamare questa funzione membro per recuperare il limite di tempo corrente prima del timeout di una query su un'origine dati ODBC.

```
short GetODBCTimeout();
```

### <a name="return-value"></a>Valore restituito

Numero di secondi prima del timeout di una query.

### <a name="remarks"></a>Osservazioni

Per informazioni su questo limite di tempo, vedere l'argomento "proprietà ODBCTimeout" nella Guida di DAO.

> [!TIP]
>  Il modo migliore per utilizzare le tabelle ODBC consiste nel collegarle a Microsoft Jet (. MDB) database. Per ulteriori informazioni, vedere l'argomento relativo all'accesso ai database esterni con DAO nella Guida di DAO.

##  <a name="getparametercount"></a>CDaoQueryDef:: GetParameterCount

Chiamare questa funzione membro per recuperare il numero di parametri nella query salvata.

```
short GetParameterCount();
```

### <a name="return-value"></a>Valore restituito

Numero di parametri definiti nella query.

### <a name="remarks"></a>Osservazioni

`GetParameterCount` è utile per il ciclo di tutti i parametri nell'oggetto QueryDef. A tale scopo, usare `GetParameterCount` insieme a [GetParameterInfo](#getparameterinfo).

Per informazioni correlate, vedere gli argomenti "Parameter object", "Parameters Collection" e "PARAMETERS Declaration (SQL)" nella Guida di DAO.

##  <a name="getparameterinfo"></a>CDaoQueryDef:: GetParameterInfo

Chiamare questa funzione membro per ottenere informazioni su un parametro definito nell'oggetto QueryDef.

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
Indice in base zero del parametro desiderato nella raccolta di parametri di querydef, per la ricerca in base all'indice.

*paramInfo*<br/>
Riferimento a un oggetto [CDaoParameterInfo](../../mfc/reference/cdaoparameterinfo-structure.md) che restituisce le informazioni richieste.

*dwInfoOptions*<br/>
Opzioni che specificano le informazioni sul parametro da recuperare. L'opzione disponibile è elencata qui insieme a ciò che causa la restituzione della funzione:

- Nome AFX_DAO_PRIMARY_INFO (impostazione predefinita), tipo

*lpszName*<br/>
Stringa che contiene il nome del parametro desiderato, per la ricerca in base al nome. È possibile utilizzare un oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md).

### <a name="remarks"></a>Osservazioni

Per una descrizione delle informazioni restituite in *paramInfo*, vedere la struttura [CDaoParameterInfo](../../mfc/reference/cdaoparameterinfo-structure.md) . Questa struttura include membri che corrispondono alle informazioni descrittive sotto *dwInfoOptions* .

Per informazioni correlate, vedere l'argomento relativo alla dichiarazione dei parametri (SQL) nella Guida di DAO.

##  <a name="getparamvalue"></a>CDaoQueryDef:: GetParamValue

Chiamare questa funzione membro per recuperare il valore corrente del parametro specificato archiviato nella raccolta di parametri di querydef.

```
virtual COleVariant GetParamValue(LPCTSTR lpszName);
virtual COleVariant GetParamValue(int nIndex);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Nome del parametro di cui si desidera il valore, per la ricerca in base al nome.

*nIndex*<br/>
Indice in base zero del parametro nella raccolta di parametri di querydef, per la ricerca in base all'indice. È possibile ottenere questo valore con chiamate a [GetParameterCount](#getparametercount) e [GetParameterInfo](#getparameterinfo).

### <a name="return-value"></a>Valore restituito

Oggetto della classe [COleVariant](../../mfc/reference/colevariant-class.md) che contiene il valore del parametro.

### <a name="remarks"></a>Osservazioni

È possibile accedere al parametro in base al nome o alla posizione ordinale nella raccolta.

Per informazioni correlate, vedere l'argomento relativo alla dichiarazione dei parametri (SQL) nella Guida di DAO.

##  <a name="getrecordsaffected"></a>CDaoQueryDef:: GetRecordsAffected

Chiamare questa funzione membro per determinare il numero di record interessati dall'ultima chiamata di [Execute](#execute).

```
long GetRecordsAffected();
```

### <a name="return-value"></a>Valore restituito

Numero di record interessati.

### <a name="remarks"></a>Osservazioni

Il conteggio restituito non rifletterà le modifiche apportate alle tabelle correlate quando sono attivi gli aggiornamenti o le eliminazioni a cascata.

Per informazioni correlate, vedere l'argomento "proprietà RecordsAffected" nella Guida di DAO.

##  <a name="getreturnsrecords"></a>CDaoQueryDef:: GetReturnsRecords

Chiamare questa funzione membro per determinare se l'oggetto QueryDef è basato su una query che restituisce record.

```
BOOL GetReturnsRecords();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto QueryDef è basato su una query che restituisce record; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene utilizzata solo per le query pass-through SQL. Per ulteriori informazioni sulle query SQL, vedere la funzione membro [Execute](#execute) . Per ulteriori informazioni sull'utilizzo delle query pass-through SQL, vedere la funzione membro [SetReturnsRecords](#setreturnsrecords) .

Per informazioni correlate, vedere l'argomento "proprietà ReturnsRecords" nella Guida di DAO.

##  <a name="getsql"></a>CDaoQueryDef:: GetSQL

Chiamare questa funzione membro per recuperare l'istruzione SQL che definisce la query su cui è basato l'oggetto QueryDef.

```
CString GetSQL();
```

### <a name="return-value"></a>Valore restituito

Istruzione SQL che definisce la query su cui è basato l'oggetto QueryDef.

### <a name="remarks"></a>Osservazioni

Probabilmente si analizzerà la stringa per le parole chiave, i nomi delle tabelle e così via.

Per informazioni correlate, vedere gli argomenti "proprietà SQL", "confronto tra Microsoft Jet motore di database SQL e ANSI SQL" e "esecuzione di query su un database con SQL nel codice" nella Guida di DAO.

##  <a name="gettype"></a>CDaoQueryDef:: GetType

Chiamare questa funzione membro per determinare il tipo di query dell'oggetto QueryDef.

```
short GetType();
```

### <a name="return-value"></a>Valore restituito

Tipo della query definita dall'oggetto QueryDef. Per i valori, vedere la sezione Osservazioni.

### <a name="remarks"></a>Osservazioni

Il tipo di query viene impostato in base a quanto specificato nella stringa SQL di querydef quando si crea l'oggetto QueryDef o si chiama una funzione membro [SetSQL](#setsql) di un oggetto querydef esistente. Il tipo di query restituito da questa funzione può essere uno dei valori seguenti:

- Selezione `dbQSelect`

- Azione `dbQAction`

- `dbQCrosstab` a campi incrociati

- Eliminazione `dbQDelete`

- `dbQUpdate` Update

- Accodamento `dbQAppend`

- `dbQMakeTable` Make-Table

- definizione dei dati `dbQDDL`

- `dbQSQLPassThrough` pass-through

- Unione `dbQSetOperation`

- `dbQSPTBulk` utilizzato con `dbQSQLPassThrough` per specificare una query che non restituisce record.

> [!NOTE]
>  Per creare una query pass-through SQL, non impostare la costante `dbSQLPassThrough`. Questa impostazione viene impostata automaticamente dal motore di database di Microsoft Jet quando si crea un oggetto QueryDef e si imposta la stringa di connessione.

Per informazioni sulle stringhe SQL, vedere [GetSQL](#getsql). Per informazioni sui tipi di query, vedere [Execute](#execute).

##  <a name="isopen"></a>CDaoQueryDef:: Open

Chiamare questa funzione membro per determinare se l'oggetto `CDaoQueryDef` è attualmente aperto.

```
BOOL IsOpen() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto `CDaoQueryDef` è attualmente aperto; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Un oggetto QueryDef deve trovarsi in uno stato aperto prima di usarlo per chiamare [Execute](#execute) o per creare un oggetto [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) . Per inserire un oggetto QueryDef in una chiamata di stato aperto, [creare](#create) (per un nuovo querydef) o [aprire](#open) (per un oggetto querydef esistente).

##  <a name="m_pdatabase"></a>CDaoQueryDef:: m_pDatabase

Contiene un puntatore all'oggetto [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) associato all'oggetto QueryDef.

### <a name="remarks"></a>Osservazioni

Utilizzare questo puntatore se è necessario accedere direttamente al database, ad esempio per ottenere i puntatori ad altri oggetti QueryDef o recordset nelle raccolte del database.

##  <a name="m_pdaoquerydef"></a>CDaoQueryDef:: m_pDAOQueryDef

Contiene un puntatore all'interfaccia OLE per l'oggetto QueryDef DAO sottostante.

### <a name="remarks"></a>Osservazioni

Questo puntatore viene fornito per completezza e coerenza con le altre classi. Tuttavia, poiché MFC incapsula invece completamente DAO QueryDefs, è improbabile che sia necessario. Se si usa questa funzionalità, eseguire questa operazione con cautela, in particolare, non modificare il valore dell'indicatore di misura, a meno che non si conoscano le operazioni eseguite.

##  <a name="open"></a>CDaoQueryDef:: Open

Chiamare questa funzione membro per aprire un oggetto QueryDef precedentemente salvato nella raccolta QueryDefs del database.

```
virtual void Open(LPCTSTR lpszName = NULL);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Stringa che contiene il nome dell'oggetto QueryDef salvato da aprire. È possibile utilizzare un oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md).

### <a name="remarks"></a>Osservazioni

Quando l'oggetto QueryDef è aperto, è possibile chiamare la relativa funzione membro [Execute](#execute) o utilizzare l'oggetto QueryDef per creare un oggetto [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) .

##  <a name="setconnect"></a>CDaoQueryDef:: seconnect

Chiamare questa funzione membro per impostare la stringa di connessione dell'oggetto QueryDef.

```
void SetConnect(LPCTSTR lpszConnect);
```

### <a name="parameters"></a>Parametri

*lpszConnect*<br/>
Stringa che contiene una stringa di connessione per l'oggetto [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) associato.

### <a name="remarks"></a>Osservazioni

La stringa di connessione viene utilizzata per passare informazioni aggiuntive a ODBC e a determinati driver ISAM in base alle esigenze. Non viene usata per Microsoft Jet (. MDB) database.

> [!TIP]
>  Il modo migliore per utilizzare le tabelle ODBC consiste nel collegarle a un. Database MDB.

Prima di eseguire un oggetto QueryDef che rappresenta una query pass-through SQL per un'origine dati ODBC, impostare la stringa di connessione con `SetConnect` e chiamare [SetReturnsRecords](#setreturnsrecords) per specificare se la query restituisce record.

Per ulteriori informazioni sulla struttura della stringa di connessione ed esempi di componenti della stringa di connessione, vedere l'argomento relativo alla proprietà Connect nella Guida di DAO.

##  <a name="setname"></a>CDaoQueryDef:: nome

Chiamare questa funzione membro se si desidera modificare il nome di un oggetto QueryDef che non è temporaneo.

```
void SetName(LPCTSTR lpszName);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Stringa che contiene il nuovo nome per una query non temporanea nell'oggetto [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) associato.

### <a name="remarks"></a>Osservazioni

I nomi di querydef sono nomi univoci definiti dall'utente. È possibile chiamare `SetName` prima che l'oggetto QueryDef venga aggiunto alla raccolta QueryDefs.

##  <a name="setodbctimeout"></a>CDaoQueryDef:: SetODBCTimeout

Chiamare questa funzione membro per impostare il limite di tempo prima del timeout di una query su un'origine dati ODBC.

```
void SetODBCTimeout(short nODBCTimeout);
```

### <a name="parameters"></a>Parametri

*nODBCTimeout*<br/>
Numero di secondi prima del timeout di una query.

### <a name="remarks"></a>Osservazioni

Questa funzione membro consente di eseguire l'override del numero predefinito di secondi prima del timeout delle operazioni successive sull'origine dati connessa. È possibile che si verifichi il timeout di un'operazione a causa di problemi di accesso alla rete, tempo di elaborazione delle query eccessivo e così via. Chiamare `SetODBCTimeout` prima di eseguire una query con questo oggetto querydef se si desidera modificare il valore di timeout della query. Quando ODBC riutilizza le connessioni, il valore di timeout è lo stesso per tutti i client nella stessa connessione.

Il valore predefinito per i timeout delle query è 60 secondi.

##  <a name="setparamvalue"></a>CDaoQueryDef:: SetParamValue

Chiamare questa funzione membro per impostare il valore di un parametro nell'oggetto QueryDef in fase di esecuzione.

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

*varValue*<br/>
Valore da impostare. vedere la sezione Osservazioni.

*nIndex*<br/>
Posizione ordinale del parametro nella raccolta di parametri dell'oggetto QueryDef. È possibile ottenere questo valore con chiamate a [GetParameterCount](#getparametercount) e [GetParameterInfo](#getparameterinfo).

### <a name="remarks"></a>Osservazioni

Il parametro deve essere già stato definito come parte della stringa SQL di querydef. È possibile accedere al parametro in base al nome o alla posizione ordinale nella raccolta.

Specificare il valore da impostare come oggetto `COleVariant`. Per informazioni sull'impostazione del valore desiderato e sul tipo nell'oggetto `COleVariant`, vedere la classe [COleVariant](../../mfc/reference/colevariant-class.md).

##  <a name="setreturnsrecords"></a>CDaoQueryDef:: SetReturnsRecords

Chiamare questa funzione membro come parte del processo di configurazione di una query pass-through SQL in un database esterno.

```
void SetReturnsRecords(BOOL bReturnsRecords);
```

### <a name="parameters"></a>Parametri

*bReturnsRecords*<br/>
Passa TRUE se la query su un database esterno restituisce record; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

In tal caso, è necessario creare l'oggetto QueryDef e impostare le relative proprietà utilizzando altre funzioni membro `CDaoQueryDef`. Per una descrizione dei database esterni, vedere la pagina relativa alla [disconnessione](#setconnect).

##  <a name="setsql"></a>CDaoQueryDef:: SetSQL

Chiamare questa funzione membro per impostare l'istruzione SQL eseguita da querydef.

```
void SetSQL(LPCTSTR lpszSQL);
```

### <a name="parameters"></a>Parametri

*lpszSQL*<br/>
Stringa contenente un'istruzione SQL completa, adatta per l'esecuzione. La sintassi di questa stringa dipende dal sistema DBMS a cui è destinata la query. Per informazioni sulla sintassi utilizzata nel motore di database di Microsoft Jet, vedere l'argomento "compilazione di istruzioni SQL nel codice" nella Guida di DAO.

### <a name="remarks"></a>Osservazioni

Un utilizzo tipico di `SetSQL` consiste nella configurazione di un oggetto QueryDef da utilizzare in una query pass-through SQL. Per la sintassi delle query pass-through SQL nel sistema DBMS di destinazione, vedere la documentazione per il sistema DBMS.

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CDaoRecordset](../../mfc/reference/cdaorecordset-class.md)<br/>
[Classe CDaoDatabase](../../mfc/reference/cdaodatabase-class.md)<br/>
[Classe CDaoTableDef](../../mfc/reference/cdaotabledef-class.md)<br/>
[Classe CDaoException](../../mfc/reference/cdaoexception-class.md)
