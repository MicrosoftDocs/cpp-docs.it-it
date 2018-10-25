---
title: Classe CDaoQueryDef | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a10e1f6adb1fc9274a2a59215564fb60984ea661
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50074488"
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
|[CDaoQueryDef::CDaoQueryDef](#cdaoquerydef)|Costruisce un oggetto `CDaoQueryDef`. Quindi chiamare il metodo `Open` o `Create`, in base alle proprie esigenze.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoQueryDef:: Append](#append)|Aggiunge tale oggetto alla raccolta QueryDefs del database come una query salvata.|
|[CDaoQueryDef::CanUpdate](#canupdate)|Restituisce diversi da zero se la query è possibile aggiornare il database.|
|[CDaoQueryDef::Close](#close)|Chiude l'oggetto querydef. Dopo aver terminato l'eliminazione dell'oggetto di C++.|
|[CDaoQueryDef::Create](#create)|Crea il sottostante oggetto querydef DAO. Usare tale oggetto come una query temporanea o una chiamata `Append` salvarlo nel database.|
|[CDaoQueryDef:: Execute](#execute)|Esegue la query definita dall'oggetto querydef.|
|[CDaoQueryDef::GetConnect](#getconnect)|Restituisce la stringa di connessione associata a tale oggetto. La stringa di connessione identifica l'origine dati. (Per SQL pass-through esegue una query solo; in caso contrario una stringa vuota.)|
|[CDaoQueryDef::GetDateCreated](#getdatecreated)|Restituisce la data di che creazione della query salvata.|
|[CDaoQueryDef::GetDateLastUpdated](#getdatelastupdated)|Restituisce la data che dell'ultimo aggiornamento della query salvata.|
|[CDaoQueryDef::GetFieldCount](#getfieldcount)|Restituisce il numero di campi definiti per tale oggetto.|
|[CDaoQueryDef::GetFieldInfo](#getfieldinfo)|Restituisce informazioni su un campo specificato definito nella query.|
|[CDaoQueryDef::GetName](#getname)|Restituisce il nome dell'oggetto.|
|[CDaoQueryDef::GetODBCTimeout](#getodbctimeout)|Restituisce il valore di timeout utilizzato da ODBC (per una query ODBC) quando viene eseguita tale oggetto. Questo determina per quanto tempo la possibilità di completamento dell'azione della query.|
|[CDaoQueryDef::GetParameterCount](#getparametercount)|Restituisce il numero di parametri definiti per la query.|
|[CDaoQueryDef::GetParameterInfo](#getparameterinfo)|Restituisce informazioni su un parametro specificato per la query.|
|[CDaoQueryDef:: GetParamValue](#getparamvalue)|Restituisce il valore di un parametro specificato per la query.|
|[CDaoQueryDef::GetRecordsAffected](#getrecordsaffected)|Restituisce il numero di record interessati da una query.|
|[CDaoQueryDef::GetReturnsRecords](#getreturnsrecords)|Restituisce diversi da zero se la query definita dall'oggetto querydef restituisce i record.|
|[CDaoQueryDef::GetSQL](#getsql)|Restituisce la stringa SQL che specifica la query definita dall'oggetto.|
|[CDaoQueryDef::GetType](#gettype)|Restituisce il tipo di query: delete, update, Accodamento, creazione tabella e così via.|
|[CDaoQueryDef::IsOpen](#isopen)|Restituisce diversi da zero se tale oggetto è aperto e può essere eseguito.|
|[CDaoQueryDef::Open](#open)|Apre un oggetto querydef esistente archiviato nella raccolta QueryDefs del database.|
|[CDaoQueryDef::SetConnect](#setconnect)|Imposta la stringa di connessione per una query pass-through SQL in un'origine dati ODBC.|
|[CDaoQueryDef::SetName](#setname)|Imposta il nome della query salvata, sostituendo il nome utilizzato quando tale oggetto è stato creato.|
|[CDaoQueryDef::SetODBCTimeout](#setodbctimeout)|Imposta il valore di timeout utilizzato da ODBC (per una query ODBC) quando viene eseguita tale oggetto.|
|[CDaoQueryDef:: SetParamValue](#setparamvalue)|Imposta il valore di un parametro specificato per la query.|
|[CDaoQueryDef::SetReturnsRecords](#setreturnsrecords)|Specifica se l'oggetto querydef restituisce i record. Impostazione di questo attributo su TRUE è valida solo per le query pass-through di SQL.|
|[CDaoQueryDef::SetSQL](#setsql)|Imposta la stringa SQL che specifica la query definita dall'oggetto.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoQueryDef::m_pDAOQueryDef](#m_pdaoquerydef)|Un puntatore all'interfaccia OLE per l'oggetto sottostante di querydef DAO.|
|[CDaoQueryDef::m_pDatabase](#m_pdatabase)|Un puntatore al `CDaoDatabase` oggetto a cui è associato l'oggetto. Querydef potrebbe essere salvate nel database oppure No.|

## <a name="remarks"></a>Note

Un oggetto querydef è un oggetto di accesso di dati che contiene l'istruzione SQL che descrive una query e le relative proprietà, ad esempio "Data di creazione" e "Timeout ODBC". È anche possibile creare oggetti temporanei querydef senza salvarli, ma è comodo e molto più efficiente, per salvare comunemente riutilizzare le query in un database. Oggetto [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) oggetto gestisce una raccolta, chiamata raccolta QueryDefs, che contiene il querydefs salvato.

> [!NOTE]
>  Le classi database DAO sono diverse dalle classi di database MFC basate su Open Database Connectivity (ODBC). Tutti i nomi delle classi database DAO hanno il prefisso "CDao". È comunque possibile accedere alle origini dati ODBC con le classi DAO. In generale, le classi MFC basate su DAO sono più in grado di supportare rispetto alle classi MFC basate su ODBC; le classi basate su DAO possono accedere ai dati, incluso il servizio tramite i driver ODBC, tramite i propri motore di database. Le classi basate su DAO supportano anche operazioni di Data Definition Language (DDL), ad esempio l'aggiunta di tabelle tramite le classi, senza la necessità di chiamare direttamente DAO.

## <a name="usage"></a>Utilizzo

Usare oggetti querydef sia per funzionare con uno salvato query esistente o creare un nuovo salvato query o temporanee:

1. In tutti i casi, prima di tutto creare un `CDaoQueryDef` oggetto, che fornisce un puntatore per il [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) dell'oggetto a cui appartiene la query.

1. Quindi eseguire le operazioni seguenti, a seconda di ciò che vuole:

   - Per usare una query salvata esistente, chiamare l'oggetto di querydef [aperto](#open) funzione membro, fornendo il nome della query salvata.

   - Per creare una nuova query salvata, chiamare il metodo dell'oggetto querydef [Create](#create) funzione membro, fornendo il nome della query. Quindi chiamare [Append](#append) per salvare la query aggiungendolo alla raccolta QueryDefs del database. `Create` Inserisce l'oggetto querydef in stato aperto, in tal caso, dopo avere chiamato `Create` non è necessario chiamare `Open`.

   - Per creare un oggetto temporaneo querydef, chiamare `Create`. Passare una stringa vuota per il nome della query. Non chiamare `Append`.

Al termine dell'utilizzo di un oggetto querydef, chiamare relativi [Chiudi](#close) membro funzione; quindi eliminare l'oggetto querydef.

> [!TIP]
>  Il modo più semplice per creare le query salvate è per crearli e archiviarli nel database mediante Microsoft Access. È quindi possibile aprire e usarle nel codice MFC.

## <a name="purposes"></a>A scopo

È possibile usare un oggetto querydef per uno degli scopi seguenti:

- Per creare un `CDaoRecordset` oggetto

- Per chiamare l'oggetto `Execute` funzione membro per eseguire direttamente una query o una query pass-through SQL

È possibile usare un oggetto querydef per qualsiasi tipo di query, tra cui select, azione, a campi incrociati, delete, update, Accodamento, tabella, definizione dei dati, pass-through SQL, unione e query in blocco. Tipo di query è determinato dal contenuto dell'istruzione SQL che viene fornito. Per informazioni sui tipi di query, vedere la `Execute` e [GetType](#gettype) funzioni membro. Recordset usati comunemente per la restituzione di riga esegue una query, in genere quelle che usano il **Seleziona... DA** parole chiave. `Execute` è più comunemente utilizzata per operazioni bulk. Per altre informazioni, vedere [Execute](#execute) e [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md).

## <a name="querydefs-and-recordsets"></a>QueryDefs e Recordset

Usare un oggetto querydef per creare un `CDaoRecordset` dell'oggetto, è in genere creare o aprire un oggetto querydef, come descritto in precedenza. Creare quindi un oggetto recordset, passando un puntatore all'oggetto querydef quando si chiama [CDaoRecordset:: Open](../../mfc/reference/cdaorecordset-class.md#open). Tale oggetto che viene passato deve essere nello stato aperto. Per altre informazioni, vedere la classe [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md).

È possibile usare un oggetto querydef per creare un set di record (vale a dire l'uso più comune per un oggetto querydef) a meno che non si trova in stato aperto. Inserire tale oggetto in stato aperto tramite la chiamata a `Open` o `Create`.

## <a name="external-databases"></a>Database esterni

Gli oggetti QueryDef sono il modo migliore per usare il sottolinguaggio SQL nativo di un motore di database esterno. Ad esempio, è possibile creare una query Transact-SQL (come in Microsoft SQL Server) e archiviarlo in un oggetto querydef. Quando è necessario usare una query SQL non basata sul motore di database Microsoft Jet, è necessario fornire una stringa di connessione che punta all'origine dati esterna. Le query con stringhe di connessione valide ignorano il motore di database e passano la query direttamente al server database esterno per l'elaborazione.

> [!TIP]
>  Il modo migliore per lavorare con le tabelle ODBC è per collegarli a un Microsoft Jet (. Database MDB).

Per informazioni correlate, vedere gli argomenti "QueryDef Object", "Raccolta QueryDefs" e "CdbDatabase Object" nel SDK di DAO.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CDaoQueryDef`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdao. h

##  <a name="append"></a>  CDaoQueryDef:: Append

Chiamare questa funzione membro dopo aver chiamato [Create](#create) per creare un nuovo oggetto querydef.

```
virtual void Append();
```

### <a name="remarks"></a>Note

`Append` Salva l'oggetto querydef nel database aggiungendo l'oggetto alla raccolta QueryDefs del database. È possibile usare tale oggetto come un oggetto temporaneo senza accodarlo, ma se si desidera salvare in modo permanente, è necessario chiamare `Append`.

Se si tenta di aggiungere un oggetto temporaneo querydef, MFC genera un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md).

##  <a name="canupdate"></a>  CDaoQueryDef::CanUpdate

Chiamare questa funzione membro per determinare se è possibile modificare tale oggetto, ad esempio modificare il nome o stringa SQL.

```
BOOL CanUpdate();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se si è autorizzati a modificare l'oggetto querydef; in caso contrario 0.

### <a name="remarks"></a>Note

È possibile modificare l'oggetto querydef se:

- Non si basa su un database in cui è aperto in sola lettura.

- Si dispone delle autorizzazioni di aggiornamento per il database.

   Ciò dipende dal fatto che è stato implementato le funzionalità di sicurezza. MFC non fornisce supporto per la protezione. è necessario implementarla manualmente dalla chiamata a DAO direttamente o mediante accesso Microsoft. Vedere l'argomento "Proprietà Permissions" nella Guida di DAO.

##  <a name="cdaoquerydef"></a>  CDaoQueryDef::CDaoQueryDef

Costruisce un oggetto `CDaoQueryDef`.

```
CDaoQueryDef(CDaoDatabase* pDatabase);
```

### <a name="parameters"></a>Parametri

*pDatabase*<br/>
Un puntatore a un oggetto aperto [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) oggetto.

### <a name="remarks"></a>Note

L'oggetto può rappresentare un querydef esistente archiviato nella raccolta QueryDefs del database, una nuova query da archiviare nella raccolta o una query temporanea, non deve essere archiviato. Il passaggio successivo dipende dal tipo di oggetto querydef:

- Se l'oggetto rappresenta un oggetto querydef esistente, chiamare l'oggetto [aperto](#open) funzione membro per l'inizializzazione.

- Se l'oggetto rappresenta un nuovo oggetto querydef deve essere salvato, chiamare l'oggetto [Create](#create) funzione membro. Aggiunge l'oggetto alla raccolta QueryDefs del database. Chiamare quindi `CDaoQueryDef` funzioni membro per impostare gli attributi dell'oggetto. Infine, chiamare [Append](#append).

- Se l'oggetto rappresenta un oggetto temporaneo querydef (che non devono essere salvati nel database), chiamare `Create`, passando una stringa vuota per il nome della query. Dopo aver chiamato `Create`, inizializzare l'oggetto querydef impostando direttamente i relativi attributi. Non chiamare `Append`.

Per impostare gli attributi dell'oggetto querydef, è possibile usare la [SetName](#setname), [SetSQL](#setsql), [SetConnect](#setconnect), [SetODBCTimeout](#setodbctimeout)e [SetReturnsRecords](#setreturnsrecords) funzioni membro.

Quando si termina con l'oggetto querydef, chiamare relativi [Chiudi](#close) funzione membro. Se si dispone di un puntatore a tale oggetto, usare il **eliminare** operatore da eliminare definitivamente l'oggetto di C++.

##  <a name="close"></a>  CDaoQueryDef::Close

Al termine dell'utilizzo dell'oggetto querydef, chiamare questa funzione membro.

```
virtual void Close();
```

### <a name="remarks"></a>Note

Chiusura querydef rilascia l'oggetto DAO sottostante ma non elimina l'oggetto salvato in querydef DAO o C++ `CDaoQueryDef` oggetto. Ciò non è identico [CDaoDatabase::DeleteQueryDef](../../mfc/reference/cdaodatabase-class.md#deletequerydef), che consente di eliminare tale oggetto dalla raccolta QueryDefs del database in DAO (se non è un oggetto temporaneo querydef).

##  <a name="create"></a>  CDaoQueryDef::Create

Chiamare questa funzione membro per creare una nuova query salvata o una nuova query temporanea.

```
virtual void Create(
    LPCTSTR lpszName = NULL,
    LPCTSTR lpszSQL = NULL);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Il nome univoco della query salvata nel database. Per informazioni dettagliate su stringa, vedere l'argomento "CreateQueryDef Method" nella Guida di DAO. Se si accetta il valore predefinito, una stringa vuota, viene creato un oggetto querydef temporaneo. Tale query non viene salvata nella raccolta QueryDefs.

*lpszSQL*<br/>
La stringa SQL che definisce la query. Se si accetta il valore predefinito NULL, è necessario chiamare in un secondo momento [SetSQL](#setsql) per impostare la stringa. Fino ad allora, la query non è definita. È tuttavia possibile, utilizzare la query non definita per aprire un oggetto recordset. Per informazioni dettagliate, vedere la sezione Osservazioni. L'istruzione SQL deve essere definita prima di potere aggiungere tale oggetto nella raccolta QueryDefs.

### <a name="remarks"></a>Note

Se si passa un nome nella *lpszName*, è quindi possibile chiamare [Append](#append) salvare l'oggetto nella raccolta QueryDefs del database. In caso contrario, l'oggetto è un oggetto querydef temporaneo e non viene salvato. In entrambi i casi querydef è nello stato aperto e si sia possibile usarlo per creare un [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) dell'oggetto oppure chiamare l'oggetto querydef [Execute](#execute) funzione membro.

Se non si specifica un'istruzione SQL nel *lpszSQL*, non è possibile eseguire la query con `Execute` ma è possibile usarlo per creare un set di record. In tal caso, MFC utilizza l'istruzione SQL predefinita del recordset.

##  <a name="execute"></a>  CDaoQueryDef:: Execute

Chiamare questa funzione membro per eseguire la query definita dall'oggetto querydef.

```
virtual void Execute(int nOptions = dbFailOnError);
```

### <a name="parameters"></a>Parametri

*nOptions*<br/>
Valore intero che determina le caratteristiche della query. Per informazioni correlate, vedere l'argomento "Esegui metodo" nella Guida di DAO. È possibile usare l'operatore OR bit per bit ( **&#124;**) per combinare le costanti seguenti per questo argomento:

- `dbDenyWrite` Negare l'autorizzazione di scrittura ad altri utenti.

- `dbInconsistent` Aggiornamenti non consistenti.

- `dbConsistent` Aggiornamenti consistenti.

- `dbSQLPassThrough` Pass-through SQL. Fa sì che l'istruzione SQL deve essere passato a un database ODBC per l'elaborazione.

- `dbFailOnError` Valore predefinito. Eseguire il rollback degli aggiornamenti se si verifica un errore e il report di errore all'utente.

- `dbSeeChanges` Generare un errore di run-time se un altro utente modifica i dati che si sta modificando.

> [!NOTE]
>  Per una spiegazione dei termini "non coerente" e "coerenti", vedere l'argomento "Esegui metodo" nella Guida di DAO.

### <a name="remarks"></a>Note

Gli oggetti QueryDef utilizzati per l'esecuzione in questo modo possono rappresentare solo uno dei seguenti tipi di query:

- Le query di comando

- Query pass-through SQL

`Execute` non funziona per le query che restituiscono record, ad esempio le query select. `Execute` viene comunemente usata per le query operazione bulk, ad esempio **UPDATE**, **Inserisci**, o **SELECT INTO**, o per operazioni di data definition language (DDL).

> [!TIP]
>  È il modo migliore per lavorare con origini dati ODBC per collegare le tabelle da un Microsoft Jet (. Database MDB). Per altre informazioni, vedere l'argomento "L'accesso a database esterni con DAO" nella Guida di DAO.

Chiamare il [GetRecordsAffected](#getrecordsaffected) funzione di membro dell'oggetto per determinare il numero di record interessati dal più recente querydef `Execute` chiamare. Ad esempio, `GetRecordsAffected` restituisce informazioni sul numero di record eliminati, aggiornati o inseriti quando si esegue una query. Il conteggio restituito non rifletterà le modifiche nelle tabelle correlate quando cascade aggiorna o Elimina sono attive.

Se si includono entrambe `dbInconsistent` e `dbConsistent` o se si include nessuno dei due, il risultato è l'impostazione predefinita, `dbInconsistent`.

`Execute` non restituisce un set di record. Usando `Execute` su una query che seleziona i record fa in modo che MFC generare un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md).

##  <a name="getconnect"></a>  CDaoQueryDef::GetConnect

Chiamare questa funzione membro per ottenere la stringa di connessione associata all'origine dati dell'oggetto.

```
CString GetConnect();
```

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) contenente la stringa di connessione per tale oggetto.

### <a name="remarks"></a>Note

Questa funzione viene utilizzata solo con alcuni driver ISAM e origini dati ODBC. Non viene utilizzato con Microsoft Jet (. Database MDB). In questo caso, `GetConnect` restituisce una stringa vuota. Per altre informazioni, vedere [SetConnect](#setconnect).

> [!TIP]
>  Il modo migliore per lavorare con le tabelle ODBC è per collegarli a una. Database MDB. Per altre informazioni, vedere l'argomento "L'accesso a database esterni con DAO" nella Guida di DAO.

Per informazioni sulle stringhe di connessione, vedere l'argomento "Proprietà connessione" nella Guida di DAO.

##  <a name="getdatecreated"></a>  CDaoQueryDef::GetDateCreated

Chiamare questa funzione membro per ottenere la data di che creazione dell'oggetto querydef.

```
COleDateTime GetDateCreated();
```

### <a name="return-value"></a>Valore restituito

Oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto contenente la data e ora di creazione di tale oggetto.

### <a name="remarks"></a>Note

Per informazioni correlate, vedere l'argomento "Proprietà DateCreated e LastUpdated" nella Guida di DAO.

##  <a name="getdatelastupdated"></a>  CDaoQueryDef::GetDateLastUpdated

Chiamata di questa funzione membro per ottenere l'oggetto querydef la data dell'ultimo aggiornamento, quando le relative proprietà sono state modificate, ad esempio il nome, la stringa SQL o la relativa stringa di connessione.

```
COleDateTime GetDateLastUpdated();
```

### <a name="return-value"></a>Valore restituito

Oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto contenente la data e ora dell'ultimo aggiornamento querydef.

### <a name="remarks"></a>Note

Per informazioni correlate, vedere l'argomento "Proprietà DateCreated e LastUpdated" nella Guida di DAO.

##  <a name="getfieldcount"></a>  CDaoQueryDef::GetFieldCount

Chiamare questa funzione membro per recuperare il numero di campi della query.

```
short GetFieldCount();
```

### <a name="return-value"></a>Valore restituito

Il numero di campi definiti nella query.

### <a name="remarks"></a>Note

`GetFieldCount` è utile per eseguire i cicli di tutti i campi nell'oggetto. A tale scopo, usare `GetFieldCount` unitamente [GetFieldInfo](#getfieldinfo).

##  <a name="getfieldinfo"></a>  CDaoQueryDef::GetFieldInfo

Chiamare questa funzione membro per ottenere i vari tipi di informazioni relative a un campo definito nell'oggetto.

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
Indice a base zero del campo desiderato nella raccolta di campi dell'oggetto querydef, per la ricerca in base all'indice.

*FieldInfo*<br/>
Un riferimento a un `CDaoFieldInfo` oggetto che restituisce le informazioni richieste.

*dwInfoOptions*<br/>
Opzioni che specificano le informazioni sul campo da recuperare. Le opzioni disponibili sono elencate di seguito insieme a ciò che provocano la funzione restituisce:

- Dimensioni del nome, tipo, AFX_DAO_PRIMARY_INFO (impostazione predefinita), gli attributi

- Informazioni AFX_DAO_SECONDARY_INFO primaria oltre: posizione ordinale, richiesto, consentire di lunghezza Zero, campo di origine, nome esterna, tabella di origine, ordine di ordinamento

- AFX_DAO_ALL_INFO primario e più informazioni sul database secondari: valore predefinito, il testo di convalida, regola di convalida

*lpszName*<br/>
Stringa contenente il nome del campo desiderato, per la ricerca in base al nome. È possibile usare una [CString](../../atl-mfc-shared/reference/cstringt-class.md).

### <a name="remarks"></a>Note

Per una descrizione delle informazioni restituite *fieldinfo*, vedere la [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) struttura. Questa struttura contiene membri che corrispondono alle informazioni descrittive sotto *dwInfoOptions* sopra. Se si richiede un livello di informazioni, si ottengono tutti i precedenti livelli di informazioni anche.

##  <a name="getname"></a>  CDaoQueryDef::GetName

Chiamare questa funzione membro per recuperare il nome della query rappresentato dall'oggetto.

```
CString GetName();
```

### <a name="return-value"></a>Valore restituito

Nome della query.

### <a name="remarks"></a>Note

QueryDef nomi sono nomi univoci definiti dall'utente. Per altre informazioni sui nomi querydef, vedere l'argomento "Proprietà di nome" nella Guida di DAO.

##  <a name="getodbctimeout"></a>  CDaoQueryDef::GetODBCTimeout

Chiamare questa funzione membro per recuperare il limite di tempo corrente prima del timeout di una query da un'origine dati ODBC.

```
short GetODBCTimeout();
```

### <a name="return-value"></a>Valore restituito

Il numero di secondi prima di una query timeout.

### <a name="remarks"></a>Note

Per informazioni su questo limite di tempo, vedere l'argomento "Proprietà ODBCTimeout" nella Guida di DAO.

> [!TIP]
>  Il modo migliore per lavorare con le tabelle ODBC è per collegarli a un Microsoft Jet (. Database MDB). Per altre informazioni, vedere l'argomento "L'accesso a database esterni con DAO" nella Guida di DAO.

##  <a name="getparametercount"></a>  CDaoQueryDef::GetParameterCount

Chiamare questa funzione membro per recuperare il numero di parametri della query salvata.

```
short GetParameterCount();
```

### <a name="return-value"></a>Valore restituito

Il numero di parametri definiti nella query.

### <a name="remarks"></a>Note

`GetParameterCount` è utile per eseguire i cicli di tutti i parametri nell'oggetto. A tale scopo, usare `GetParameterCount` unitamente [GetParameterInfo](#getparameterinfo).

Per informazioni correlate, vedere gli argomenti "Parametro oggetto", "Raccolta di parametri" e "parametri di dichiarazione (SQL)" nella Guida di DAO.

##  <a name="getparameterinfo"></a>  CDaoQueryDef::GetParameterInfo

Chiamare questa funzione membro per ottenere informazioni su un parametro definito nell'oggetto.

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
Indice a base zero del parametro desiderato nella raccolta di parametri dell'oggetto querydef, per la ricerca in base all'indice.

*paraminfo controllo*<br/>
Un riferimento a un [CDaoParameterInfo](../../mfc/reference/cdaoparameterinfo-structure.md) oggetto che restituisce le informazioni richieste.

*dwInfoOptions*<br/>
Opzioni che specificano quali informazioni sul parametro da recuperare. L'opzione disponibile è elencato qui insieme a ciò che fa in modo che la funzione restituisce:

- Nome AFX_DAO_PRIMARY_INFO (impostazione predefinita), il tipo

*lpszName*<br/>
Stringa contenente il nome del parametro desiderato, per la ricerca in base al nome. È possibile usare una [CString](../../atl-mfc-shared/reference/cstringt-class.md).

### <a name="remarks"></a>Note

Per una descrizione delle informazioni restituite *paraminfo controllo*, vedere la [CDaoParameterInfo](../../mfc/reference/cdaoparameterinfo-structure.md) struttura. Questa struttura contiene membri che corrispondono alle informazioni descrittive sotto *dwInfoOptions* sopra.

Per informazioni correlate, vedere l'argomento "parametri di dichiarazione (SQL)" nella Guida di DAO.

##  <a name="getparamvalue"></a>  CDaoQueryDef:: GetParamValue

Chiamare questa funzione membro per recuperare il valore del parametro specificato archiviato nella raccolta di parametri dell'oggetto corrente.

```
virtual COleVariant GetParamValue(LPCTSTR lpszName);
virtual COleVariant GetParamValue(int nIndex);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Il nome del parametro il cui valore si desidera, per la ricerca in base al nome.

*nIndex*<br/>
Indice a base zero del parametro nella raccolta di parametri dell'oggetto querydef, per la ricerca in base all'indice. È possibile ottenere questo valore con chiamate a [GetParameterCount](#getparametercount) e [GetParameterInfo](#getparameterinfo).

### <a name="return-value"></a>Valore restituito

Un oggetto della classe [COleVariant](../../mfc/reference/colevariant-class.md) che contiene il valore del parametro.

### <a name="remarks"></a>Note

È possibile accedere il parametro in base al nome o la posizione ordinale nell'insieme.

Per informazioni correlate, vedere l'argomento "parametri di dichiarazione (SQL)" nella Guida di DAO.

##  <a name="getrecordsaffected"></a>  CDaoQueryDef::GetRecordsAffected

Chiamare questa funzione membro per determinare il numero di record interessato dall'ultima chiamata [Execute](#execute).

```
long GetRecordsAffected();
```

### <a name="return-value"></a>Valore restituito

Il numero di record interessati.

### <a name="remarks"></a>Note

Il conteggio restituito non rifletterà le modifiche nelle tabelle correlate quando cascade aggiorna o Elimina sono attive.

Per informazioni correlate, vedere l'argomento "Proprietà RecordsAffected" nella Guida di DAO.

##  <a name="getreturnsrecords"></a>  CDaoQueryDef::GetReturnsRecords

Chiamare questa funzione membro per determinare se tale oggetto è basato su una query che restituisce i record.

```
BOOL GetReturnsRecords();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se si basa l'oggetto su una query che restituisce i record; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro viene utilizzata solo per le query pass-through di SQL. Per altre informazioni sulle query SQL, vedere la [Execute](#execute) funzione membro. Per altre informazioni sull'utilizzo di SQL query pass-through, vedere la [SetReturnsRecords](#setreturnsrecords) funzione membro.

Per informazioni correlate, vedere l'argomento "Restituisci proprietà" nella Guida di DAO.

##  <a name="getsql"></a>  CDaoQueryDef::GetSQL

Chiamare questa funzione membro per recuperare l'istruzione SQL che definisce la query in cui si basa l'oggetto.

```
CString GetSQL();
```

### <a name="return-value"></a>Valore restituito

L'istruzione SQL che definisce la query in cui si basa l'oggetto.

### <a name="remarks"></a>Note

È quindi probabilmente analizzerà la stringa per le parole chiave, nomi di tabella e così via.

Per informazioni correlate, vedere gli argomenti "Proprietà SQL", "Confronto di Microsoft Jet motore di Database SQL e ANSI SQL" e "L'esecuzione di query di Database con SQL in codice" nella Guida di DAO.

##  <a name="gettype"></a>  CDaoQueryDef::GetType

Chiamare questa funzione membro per determinare il tipo di query di oggetto.

```
short GetType();
```

### <a name="return-value"></a>Valore restituito

Tipo di query definiti da tale oggetto. Per i valori, vedere la sezione Osservazioni.

### <a name="remarks"></a>Note

Il tipo di query viene impostato da quello specificato nella stringa SQL dell'oggetto querydef quando si crea l'oggetto querydef o chiamare un oggetto esistente querydef [SetSQL](#setsql) funzione membro. Il tipo di query restituito da questa funzione può essere uno dei valori seguenti:

- `dbQSelect` Selezionare

- Azione `dbQAction`

- `dbQCrosstab` Campi incrociati

- `dbQDelete` Delete

- `dbQUpdate` Aggiornamento

- `dbQAppend` Append

- `dbQMakeTable` Creazione tabella

- `dbQDDL` Definizione dei dati

- `dbQSQLPassThrough` pass-through

- `dbQSetOperation` Unione

- `dbQSPTBulk` Utilizzato con `dbQSQLPassThrough` per specificare una query che non restituisce i record.

> [!NOTE]
>  Per creare una query pass-through SQL, non vengono impostate le `dbSQLPassThrough` costante. Ciò viene impostato automaticamente dal motore di database Microsoft Jet quando si crea un oggetto querydef e impostare la stringa di connessione.

Per informazioni sulle stringhe SQL, vedere [GetSQL](#getsql). Per informazioni sui tipi di query, vedere [Execute](#execute).

##  <a name="isopen"></a>  CDaoQueryDef::IsOpen

Chiamare questa funzione membro per determinare se il `CDaoQueryDef` oggetto è attualmente aperto.

```
BOOL IsOpen() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il `CDaoQueryDef` oggetto è attualmente aperto; in caso contrario, 0.

### <a name="remarks"></a>Note

Un oggetto querydef deve essere nello stato aperto prima di usarla per chiamare [Execute](#execute) o per creare un [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto. Per inserire un querydef in una chiamata di stato aperto sia [Create](#create) (per un nuovo oggetto querydef) o [aprire](#open) (per un oggetto querydef esistente).

##  <a name="m_pdatabase"></a>  CDaoQueryDef::m_pDatabase

Contiene un puntatore per il [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) oggetto associato all'oggetto querydef.

### <a name="remarks"></a>Note

Utilizzare questo puntatore, se è necessario accedere direttamente al database, ad esempio, per ottenere i puntatori ad altre querydef o recordset oggetti nelle raccolte del database.

##  <a name="m_pdaoquerydef"></a>  CDaoQueryDef::m_pDAOQueryDef

Contiene un puntatore all'interfaccia OLE per l'oggetto sottostante di querydef DAO.

### <a name="remarks"></a>Note

Puntatore ' this ' viene fornito per motivi di completezza e la coerenza con le altre classi. Tuttavia, perché MFC piuttosto completamente incapsulata querydefs DAO, è molto improbabile che serve. Se si usa, procedere con cautela, in particolare, non modificare il valore dell'indicatore di misura a meno che non si conosce l'operazione.

##  <a name="open"></a>  CDaoQueryDef::Open

Chiamare questa funzione membro per aprire un querydef salvato in precedenza nella raccolta QueryDefs del database.

```
virtual void Open(LPCTSTR lpszName = NULL);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Stringa che contiene il nome dell'oggetto querydef salvato da aprire. È possibile usare una [CString](../../atl-mfc-shared/reference/cstringt-class.md).

### <a name="remarks"></a>Note

Dopo aver aperto il querydef, è possibile chiamare relativi [Execute](#execute) funzione membro o usare tale oggetto per creare un [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto.

##  <a name="setconnect"></a>  CDaoQueryDef::SetConnect

Chiamare questa funzione membro per impostare la stringa di connessione dell'oggetto querydef.

```
void SetConnect(LPCTSTR lpszConnect);
```

### <a name="parameters"></a>Parametri

*lpszConnect*<br/>
Stringa che contiene una stringa di connessione per la proprietà associata [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) oggetto.

### <a name="remarks"></a>Note

La stringa di connessione viene utilizzata per passare informazioni aggiuntive a ODBC e ad alcuni driver ISAM in base alle esigenze. Non viene usato per Microsoft Jet (. Database MDB).

> [!TIP]
>  Il modo migliore per lavorare con le tabelle ODBC è per collegarli a una. Database MDB.

Prima di eseguire un querydef che rappresenta una query pass-through SQL a un'origine dati ODBC, impostare la stringa di connessione con `SetConnect` e chiamare [SetReturnsRecords](#setreturnsrecords) per specificare se la query restituisce i record.

Per altre informazioni sulla struttura e alcuni esempi di componenti della stringa di connessione della stringa di connessione, vedere l'argomento "Proprietà connessione" nella Guida di DAO.

##  <a name="setname"></a>  CDaoQueryDef::SetName

Chiamare questa funzione membro, se si desidera modificare il nome di un oggetto querydef che non è temporaneo.

```
void SetName(LPCTSTR lpszName);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Stringa che contiene il nuovo nome per una query permanenti nel blocco [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) oggetto.

### <a name="remarks"></a>Note

QueryDef nomi sono nomi univoci, definita dall'utente. È possibile chiamare `SetName` prima querydef oggetto viene aggiunto alla raccolta QueryDefs.

##  <a name="setodbctimeout"></a>  CDaoQueryDef::SetODBCTimeout

Chiamare questa funzione membro per impostare il limite di tempo prima del timeout di una query da un'origine dati ODBC.

```
void SetODBCTimeout(short nODBCTimeout);
```

### <a name="parameters"></a>Parametri

*nODBCTimeout*<br/>
Il numero di secondi prima di una query timeout.

### <a name="remarks"></a>Note

Questa funzione consente di ignorare il numero predefinito di secondi prima le operazioni successive nell'origine dati connessa "timeout". Un'operazione potrebbe raggiungere il timeout a causa di problemi di accesso di rete, il tempo di elaborazione di un numero eccessivo di query e così via. Chiamare `SetODBCTimeout` prima di eseguire una query con questo querydef, se si desidera modificare il valore di timeout della query. (Come ODBC riutilizza connessioni, il valore di timeout è lo stesso per tutti i client nella stessa connessione.)

Il valore predefinito di timeout delle query è 60 secondi.

##  <a name="setparamvalue"></a>  CDaoQueryDef:: SetParamValue

Chiamare questa funzione membro per impostare il valore di un parametro nell'oggetto in fase di esecuzione.

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
Il nome del parametro il cui valore si desidera impostare.

*varValue*<br/>
Il valore da impostare. vedere la sezione Osservazioni.

*nIndex*<br/>
La posizione ordinale del parametro nella raccolta di parametri dell'oggetto. È possibile ottenere questo valore con chiamate a [GetParameterCount](#getparametercount) e [GetParameterInfo](#getparameterinfo).

### <a name="remarks"></a>Note

Il parametro deve già sono stato definito come parte della stringa SQL dell'oggetto. È possibile accedere il parametro in base al nome o la posizione ordinale nell'insieme.

Specificare il valore da impostare come un `COleVariant` oggetto. Per informazioni sull'impostazione il valore desiderato e digitare il `COleVariant` dell'oggetto, vedere la classe [COleVariant](../../mfc/reference/colevariant-class.md).

##  <a name="setreturnsrecords"></a>  CDaoQueryDef::SetReturnsRecords

Chiamare questa funzione membro come parte del processo di configurazione di una query pass-through SQL a un database esterno.

```
void SetReturnsRecords(BOOL bReturnsRecords);
```

### <a name="parameters"></a>Parametri

*bReturnsRecords*<br/>
Passare TRUE se la query in un database esterno restituisce i record; in caso contrario, FALSE.

### <a name="remarks"></a>Note

In tal caso, è necessario creare tale oggetto e impostarne le proprietà usano altre `CDaoQueryDef` funzioni membro. Per una descrizione di database esterni, vedere [SetConnect](#setconnect).

##  <a name="setsql"></a>  CDaoQueryDef::SetSQL

Chiamare questa funzione membro per impostare l'istruzione SQL che esegue tale oggetto.

```
void SetSQL(LPCTSTR lpszSQL);
```

### <a name="parameters"></a>Parametri

*lpszSQL*<br/>
Stringa contenente un'istruzione SQL completa, adatta per l'esecuzione. La sintassi di questa stringa dipende dal sistema DBMS che le destinazioni di query. Per una descrizione della sintassi utilizzata nel motore di database Microsoft Jet, vedere l'argomento "Creazione istruzioni nel codice SQL" nella Guida di DAO.

### <a name="remarks"></a>Note

Un tipico utilizzo di `SetSQL` è l'impostazione di un oggetto querydef per l'uso in una query pass-through di SQL. (Per la sintassi delle query pass-through SQL nel DBMS di destinazione, vedere la documentazione per il sistema DBMS).

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CDaoRecordset](../../mfc/reference/cdaorecordset-class.md)<br/>
[Classe CDaoDatabase](../../mfc/reference/cdaodatabase-class.md)<br/>
[Classe CDaoTableDef](../../mfc/reference/cdaotabledef-class.md)<br/>
[Classe CDaoException](../../mfc/reference/cdaoexception-class.md)
