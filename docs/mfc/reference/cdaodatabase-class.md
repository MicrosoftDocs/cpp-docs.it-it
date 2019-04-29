---
title: CDaoDatabase (classe)
ms.date: 11/04/2016
f1_keywords:
- CDaoDatabase
- AFXDAO/CDaoDatabase
- AFXDAO/CDaoDatabase::CDaoDatabase
- AFXDAO/CDaoDatabase::CanTransact
- AFXDAO/CDaoDatabase::CanUpdate
- AFXDAO/CDaoDatabase::Close
- AFXDAO/CDaoDatabase::Create
- AFXDAO/CDaoDatabase::CreateRelation
- AFXDAO/CDaoDatabase::DeleteQueryDef
- AFXDAO/CDaoDatabase::DeleteRelation
- AFXDAO/CDaoDatabase::DeleteTableDef
- AFXDAO/CDaoDatabase::Execute
- AFXDAO/CDaoDatabase::GetConnect
- AFXDAO/CDaoDatabase::GetName
- AFXDAO/CDaoDatabase::GetQueryDefCount
- AFXDAO/CDaoDatabase::GetQueryDefInfo
- AFXDAO/CDaoDatabase::GetQueryTimeout
- AFXDAO/CDaoDatabase::GetRecordsAffected
- AFXDAO/CDaoDatabase::GetRelationCount
- AFXDAO/CDaoDatabase::GetRelationInfo
- AFXDAO/CDaoDatabase::GetTableDefCount
- AFXDAO/CDaoDatabase::GetTableDefInfo
- AFXDAO/CDaoDatabase::GetVersion
- AFXDAO/CDaoDatabase::IsOpen
- AFXDAO/CDaoDatabase::Open
- AFXDAO/CDaoDatabase::SetQueryTimeout
- AFXDAO/CDaoDatabase::m_pDAODatabase
- AFXDAO/CDaoDatabase::m_pWorkspace
helpviewer_keywords:
- CDaoDatabase [MFC], CDaoDatabase
- CDaoDatabase [MFC], CanTransact
- CDaoDatabase [MFC], CanUpdate
- CDaoDatabase [MFC], Close
- CDaoDatabase [MFC], Create
- CDaoDatabase [MFC], CreateRelation
- CDaoDatabase [MFC], DeleteQueryDef
- CDaoDatabase [MFC], DeleteRelation
- CDaoDatabase [MFC], DeleteTableDef
- CDaoDatabase [MFC], Execute
- CDaoDatabase [MFC], GetConnect
- CDaoDatabase [MFC], GetName
- CDaoDatabase [MFC], GetQueryDefCount
- CDaoDatabase [MFC], GetQueryDefInfo
- CDaoDatabase [MFC], GetQueryTimeout
- CDaoDatabase [MFC], GetRecordsAffected
- CDaoDatabase [MFC], GetRelationCount
- CDaoDatabase [MFC], GetRelationInfo
- CDaoDatabase [MFC], GetTableDefCount
- CDaoDatabase [MFC], GetTableDefInfo
- CDaoDatabase [MFC], GetVersion
- CDaoDatabase [MFC], IsOpen
- CDaoDatabase [MFC], Open
- CDaoDatabase [MFC], SetQueryTimeout
- CDaoDatabase [MFC], m_pDAODatabase
- CDaoDatabase [MFC], m_pWorkspace
ms.assetid: 8ff5b342-964d-449d-bef1-d0ff56aadf6d
ms.openlocfilehash: d1e9db1ddebe05d42cbb8c4ba242938d6d86cc81
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62399839"
---
# <a name="cdaodatabase-class"></a>CDaoDatabase (classe)

Rappresenta una connessione a un database attraverso la quale è possibile utilizzare i dati.

## <a name="syntax"></a>Sintassi

```
class CDaoDatabase : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoDatabase::CDaoDatabase](#cdaodatabase)|Costruisce un oggetto `CDaoDatabase`. Chiamare `Open` per connettere l'oggetto a un database.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoDatabase::CanTransact](#cantransact)|Restituisce diversi da zero se il database supporta le transazioni.|
|[CDaoDatabase::CanUpdate](#canupdate)|Restituisce se diverso da zero la `CDaoDatabase` oggetto è aggiornabile (non solo lettura).|
|[CDaoDatabase::Close](#close)|Chiude la connessione al database.|
|[CDaoDatabase::Create](#create)|Crea l'oggetto di database DAO sottostante e inizializza il `CDaoDatabase` oggetto.|
|[CDaoDatabase::CreateRelation](#createrelation)|Definisce una nuova relazione tra le tabelle nel database.|
|[CDaoDatabase::DeleteQueryDef](#deletequerydef)|Elimina un oggetto querydef salvato nella raccolta QueryDefs del database.|
|[CDaoDatabase::DeleteRelation](#deleterelation)|Elimina una relazione esistente tra le tabelle nel database.|
|[CDaoDatabase::DeleteTableDef](#deletetabledef)|Elimina la definizione di una tabella nel database. Ciò elimina la tabella effettiva e tutti i relativi dati.|
|[CDaoDatabase::Execute](#execute)|Esegue una query. La chiamata `Execute` per una query che restituisce risultati genera un'eccezione.|
|[CDaoDatabase::GetConnect](#getconnect)|Restituisce la stringa di connessione utilizzata per la connessione di `CDaoDatabase` oggetto a un database. Utilizzato per ODBC.|
|[CDaoDatabase::GetName](#getname)|Restituisce il nome del database attualmente in uso.|
|[CDaoDatabase::GetQueryDefCount](#getquerydefcount)|Restituisce il numero di query definite per il database.|
|[CDaoDatabase::GetQueryDefInfo](#getquerydefinfo)|Restituisce informazioni su una query specificata, definita nel database.|
|[CDaoDatabase::GetQueryTimeout](#getquerytimeout)|Restituisce il numero di secondi dopo il quale database per operazioni di query raggiungerà il timeout. Influisce su tutte le successive aprire, aggiungere nuove, aggiornare e modificare le operazioni e altre operazioni su origini dati ODBC (solo), ad esempio `Execute` chiamate.|
|[CDaoDatabase::GetRecordsAffected](#getrecordsaffected)|Restituisce il numero di record interessato dall'ultimo aggiornamento, modifica o l'operazione di aggiunta o da una chiamata a `Execute`.|
|[CDaoDatabase::GetRelationCount](#getrelationcount)|Restituisce il numero di relazioni definite tra le tabelle nel database.|
|[CDaoDatabase::GetRelationInfo](#getrelationinfo)|Restituisce informazioni su una relazione specificata definita tra le tabelle nel database.|
|[CDaoDatabase::GetTableDefCount](#gettabledefcount)|Restituisce il numero di tabelle definiti nel database.|
|[CDaoDatabase::GetTableDefInfo](#gettabledefinfo)|Restituisce informazioni su una tabella specificata nel database.|
|[CDaoDatabase::GetVersion](#getversion)|Restituisce la versione del motore di database associato al database.|
|[CDaoDatabase::IsOpen](#isopen)|Restituisce se diverso da zero la `CDaoDatabase` è attualmente collegato a un database.|
|[CDaoDatabase::Open](#open)|Stabilisce una connessione a un database.|
|[CDaoDatabase::SetQueryTimeout](#setquerytimeout)|Set di operazioni (su ODBC solo alle origini dati) di query il numero di secondi dopo il quale database raggiungerà il timeout. Influisce su tutte le successive aprire, aggiungere nuove, aggiornare e le operazioni di eliminazione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoDatabase::m_pDAODatabase](#m_pdaodatabase)|Un puntatore all'oggetto di database DAO sottostante.|
|[CDaoDatabase::m_pWorkspace](#m_pworkspace)|Un puntatore per il [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) oggetto che contiene il database e che definisce lo spazio delle transazioni.|

## <a name="remarks"></a>Note

Per informazioni sui formati di database supportate, vedere la [GetName](../../mfc/reference/cdaoworkspace-class.md#getname) funzione membro. È possibile avere uno o più `CDaoDatabase` oggetti attivi alla volta in un' "area di lavoro," rappresentato da un [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) oggetto. L'area di lavoro mantiene una raccolta di oggetti di database aperti, chiamato raccolta di database.

> [!NOTE]
>  Le classi database DAO MFC sono diverse dalle classi di database MFC basate su ODBC. Tutti i nomi delle classi database DAO hanno il prefisso "CDao". Classe `CDaoDatabase` fornisce un'interfaccia analoga a quella della classe ODBC [CDatabase](../../mfc/reference/cdatabase-class.md). La differenza principale è che `CDatabase` accede DBMS tramite Open Database Connectivity (ODBC) e un driver ODBC per DBMS. `CDaoDatabase` accede ai dati tramite un oggetto DAO (Data Access) basato sul motore di database Microsoft Jet. In generale, le classi MFC basate su DAO sono più in grado di supportare rispetto alle classi MFC basate su ODBC; le classi basate su DAO possono accedere ai dati, incluso il servizio tramite i driver ODBC, tramite i propri motore di database. Le classi basate su DAO supportano anche operazioni di Data Definition Language (DDL), ad esempio l'aggiunta di tabelle tramite le classi, senza la necessità di chiamare direttamente DAO.

## <a name="usage"></a>Utilizzo

È possibile creare oggetti di database in modo implicito, quando si creano oggetti recordset. Ma è anche possibile creare oggetti di database in modo esplicito. Per usare un database esistente in modo esplicito con `CDaoDatabase`, effettuare una delle operazioni seguenti:

- Creare un `CDaoDatabase` oggetti, passando un puntatore a un elemento aperto [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) oggetto.

- O si crea un `CDaoDatabase` oggetto senza specificare l'area di lavoro (MFC crea un oggetto temporaneo dell'area di lavoro).

Per creare un nuovo di Microsoft Jet (. Database MDB), Costruisci un `CDaoDatabase` oggetto e chiamare relativi [Create](#create) funzione membro. Effettuare *non* chiamare `Open` dopo `Create`.

Per aprire un database esistente, creare un `CDaoDatabase` oggetto e chiamare relativi [aprire](#open) funzione membro.

Una di queste tecniche aggiunge l'oggetto di database DAO alla raccolta di database dell'area di lavoro e si apre una connessione ai dati. Quando si creano quindi [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md), [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md), o [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) i costruttori per tali oggetti di passare oggetti per l'uso di database connesso, un puntatore ai `CDaoDatabase` oggetto. Al termine dell'utilizzo della connessione, chiamare il [Close](#close) membro funzione ed eliminare definitivamente il `CDaoDatabase` oggetto. `Close` Chiude tutti i recordset che non sia stato precedentemente chiuso.

## <a name="transactions"></a>Transazioni

L'elaborazione delle transazioni del database viene fornito a livello di area di lavoro, vedere la [BeginTrans](../../mfc/reference/cdaoworkspace-class.md#begintrans), [CommitTrans](../../mfc/reference/cdaoworkspace-class.md#committrans), e [Rollback](../../mfc/reference/cdaoworkspace-class.md#rollback) funzioni membro della classe `CDaoWorkspace` .

## <a name="odbc-connections"></a>Connessioni ODBC

È consigliabile usare le origini dati ODBC per collegare le tabelle esterne a un Microsoft Jet (. Database MDB).

## <a name="collections"></a>Raccolte

Ogni database gestisce il propria insiemi di tabledef querydef, recordset e gli oggetti della relazione. Classe `CDaoDatabase` fornisce le funzioni membro per la modifica di questi oggetti.

> [!NOTE]
>  Gli oggetti vengono archiviati in DAO, non nell'oggetto di database MFC. MFC fornisce classi per oggetti tabledef querydef e recordset ma non per gli oggetti della relazione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CDaoDatabase`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdao. h

##  <a name="cantransact"></a>  CDaoDatabase::CanTransact

Chiamare questa funzione membro per determinare se il database consente di transazioni.

```
BOOL CanTransact();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il database supporta le transazioni. in caso contrario 0.

### <a name="remarks"></a>Note

Le transazioni vengono gestite nell'area di lavoro del database.

##  <a name="canupdate"></a>  CDaoDatabase::CanUpdate

Chiamare questa funzione membro per determinare se il `CDaoDatabase` oggetto consente aggiornamenti.

```
BOOL CanUpdate();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il `CDaoDatabase` oggetto consente aggiornamenti; in caso contrario, 0, che indica uno che è passato TRUE *bReadOnly* quando è stata aperta la `CDaoDatabase` oggetto o che il database è di sola lettura. Vedere le [aperto](#open) funzione membro.

### <a name="remarks"></a>Note

Per informazioni sull'aggiornamento di database, vedere l'argomento "Proprietà aggiornabile" nella Guida di DAO.

##  <a name="cdaodatabase"></a>  CDaoDatabase::CDaoDatabase

Costruisce un oggetto `CDaoDatabase`.

```
CDaoDatabase(CDaoWorkspace* pWorkspace = NULL);
```

### <a name="parameters"></a>Parametri

*pWorkspace*<br/>
Un puntatore al `CDaoWorkspace` che conterrà il nuovo oggetto di database. Se si accetta il valore predefinito NULL, il costruttore crea una variabile temporanea `CDaoWorkspace` oggetto che usa l'area di lavoro DAO predefinita. È possibile ottenere un puntatore all'oggetto dell'area di lavoro tramite il [m_pWorkspace](#m_pworkspace) (membro dati).

### <a name="remarks"></a>Note

Al termine della creazione dell'oggetto, se si sta creando un nuovo di Microsoft Jet (. MDB) del database, chiamare l'oggetto [Create](#create) funzione membro. Se si è, invece, l'apertura di un database esistente, chiamare l'oggetto [aperto](#open) funzione membro.

Quando finisce con l'oggetto, è necessario chiamare relativi [Close](#close) membro funzione e quindi eliminare il `CDaoDatabase` oggetto.

Può risultare utile incorporare il `CDaoDatabase` oggetto nella classe del documento.

> [!NOTE]
>  Oggetto `CDaoDatabase` oggetto viene anche creato in modo implicito se si apre un [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto senza passando un puntatore a un oggetto esistente `CDaoDatabase` oggetto. Questo oggetto di database viene chiuso quando si chiude l'oggetto recordset.

##  <a name="close"></a>  CDaoDatabase::Close

Chiamare questa funzione membro per disconnettersi da un database e chiudere tutti i recordset aperti, tabledefs e querydefs associati al database.

```
virtual void Close();
```

### <a name="remarks"></a>Note

È consigliabile chiudere questi oggetti manualmente prima di chiamare questa funzione membro. Chiusura di un `CDaoDatabase` oggetto lo rimuove dalla raccolta di database in associato [dell'area di lavoro](../../mfc/reference/cdaoworkspace-class.md). In quanto `Close` non elimina definitivamente il `CDaoDatabase` dell'oggetto, è possibile riutilizzare l'oggetto aprendo lo stesso database o un altro database.

> [!CAUTION]
>  Chiamare il [Update](../../mfc/reference/cdaorecordset-class.md#update) funzione di membro (se sono presenti modifiche in sospeso) e il `Close` funzione membro su tutti gli oggetti recordset aperti prima di chiudere un database. Se si esce da una funzione che dichiara [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) o `CDaoDatabase` oggetti nello stack, il database viene chiuso, eventuali modifiche non salvate vengono perse, viene eseguito il rollback di tutte le transazioni in sospeso e tutte le modifiche in sospeso per i dati vengono perse.

> [!CAUTION]
>  Se si tenta di chiudere un oggetto di database, mentre tutti gli oggetti recordset sono aperti o se si tenta di chiudere un oggetto dell'area di lavoro, mentre gli oggetti di database che appartengono a tale area di lavoro specifico sono aperti, tali oggetti recordset verranno chiuso e saranno modifiche o aggiornamenti in sospeso eseguire il rollback. Se si tenta di chiudere un oggetto dell'area di lavoro, mentre gli oggetti di database che appartengono ad esso sono aperti, l'operazione chiude tutti gli oggetti di database che appartengono a tale oggetto specifico dell'area di lavoro, che potrebbe comportare oggetti recordset non chiusi in fase di chiusura. Se non si chiude l'oggetto di database, MFC segnala un errore di asserzione nelle build di debug.

Se l'oggetto di database è definito all'esterno dell'ambito di una funzione e si esce dalla funzione senza chiuderlo, rimarrà aperta fino a quando non chiusa in modo esplicito l'oggetto di database o il modulo in cui è definito esula dall'ambito.

##  <a name="create"></a>  CDaoDatabase::Create

Per creare un nuovo di Microsoft Jet (. MDB) del database, chiamare questa funzione membro dopo aver creato un `CDaoDatabase` oggetto.

```
virtual void Create(
    LPCTSTR lpszName,
    LPCTSTR lpszLocale = dbLangGeneral,
    int dwOptions = 0);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Un'espressione stringa che rappresenta il nome del file di database che si sta creando. Può essere il percorso completo e nome file, ad esempio "c:\\\MYDB. MDB". È necessario fornire un nome. Se non si specifica un'estensione di file. Viene aggiunto MDB. Se la rete supporta la convenzione di denominazione uniforme (UNC), è possibile anche specificare un percorso di rete, ad esempio "\\\\\\\MYSERVER\\\MYSHARE\\\MYDIR\\\MYDB". Solo Microsoft Jet (. File di database MDB) possono essere creati tramite questa funzione membro. (Sono necessarie le barre rovesciate doppie nei valori letterali stringa perché "\\" è il carattere di escape di C++.)

*lpszLocale*<br/>
Un'espressione stringa utilizzata per specificare l'ordinamento per la creazione del database. Il valore predefinito è `dbLangGeneral`. I possibili valori sono:

- `dbLangGeneral` Spagnolo in lingua inglese, tedesco, francese, portoghese, italiano e moderno

- `dbLangArabic` Arabo

- `dbLangCyrillic` Russo

- `dbLangCzech` Ceco

- `dbLangDutch` Olandese

- `dbLangGreek` Greco

- `dbLangHebrew` Ebraico

- `dbLangHungarian` Ungherese

- `dbLangIcelandic` Islandese

- `dbLangNordic` Lingue dei (Microsoft Jet database engine solo versione 1.0)

- `dbLangNorwdan` Norwegian e danese

- `dbLangPolish` Polacco

- `dbLangSpanish` Spagnolo tradizionale

- `dbLangSwedfin` Svedese e finlandese

- `dbLangTurkish` Turco

*dwOptions*<br/>
Numero intero che indica una o più opzioni. I possibili valori sono:

- `dbEncrypt` Creare un database crittografato.

- `dbVersion10` Creare un database con database Microsoft Jet versione 1.0.

- `dbVersion11` Creare un database con database Microsoft Jet versione 1.1.

- `dbVersion20` Creare un database con database Microsoft Jet versione 2.0.

- `dbVersion30` Creare un database con database Microsoft Jet versione 3.0.

Se si omette la costante di crittografia, verrà creato un database non crittografato. È possibile specificare solo una costante di versione. Se si omette una costante di versione, viene creato un database che usa la versione del database Microsoft Jet 3.0.

> [!CAUTION]
>  Se un database non è crittografato, è possibile, anche se si implementa protezione utente/password, per leggere direttamente il file del disco binario che costituisce il database.

### <a name="remarks"></a>Note

`Create` Crea il file di database e l'oggetto di database DAO sottostante e inizializza l'oggetto di C++. L'oggetto viene aggiunto alla raccolta di database dell'area di lavoro associato. L'oggetto di database è in uno stato aperto; non chiamare `Open*` dopo aver `Create`.

> [!NOTE]
>  Con `Create`, è possibile creare solo Microsoft Jet (. Database MDB). È possibile creare database ISAM o ODBC.

##  <a name="createrelation"></a>  CDaoDatabase::CreateRelation

Chiamare questa funzione membro per stabilire una relazione tra uno o più campi in una tabella nel database primario e uno o più campi di una tabella esterna (un'altra tabella nel database).

```
void CreateRelation(
    LPCTSTR lpszName,
    LPCTSTR lpszTable,
    LPCTSTR lpszForeignTable,
    long lAttributes,
    LPCTSTR lpszField,
    LPCTSTR lpszForeignField);

void CreateRelation(CDaoRelationInfo& relinfo);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Il nome univoco dell'oggetto relazione. Il nome deve iniziare con una lettera e può contenere un massimo di 40 caratteri. Può includere numeri e caratteri di sottolineatura ma non può includere spazi o punteggiatura.

*lpszTable*<br/>
Il nome della tabella primaria della relazione. Se la tabella non esiste, MFC genera un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md).

*lpszForeignTable*<br/>
Il nome della tabella esterna nella relazione. Se la tabella non esiste, MFC genera un'eccezione di tipo `CDaoException`.

*lAttributes*<br/>
Valore long che contiene informazioni sul tipo di relazione. È possibile utilizzare questo valore per applicare l'integrità referenziale, tra le altre cose. È possibile usare l'operatore OR bit per bit ( **&#124;**) per combinare i valori seguenti (fino a quando la combinazione ha senso):

- `dbRelationUnique` Relazione è uno a uno.

- `dbRelationDontEnforce` Relazione non applicata (non l'integrità referenziale).

- `dbRelationInherited` Esiste una relazione in un database non correnti che contiene le due tabelle associate.

- `dbRelationUpdateCascade` Si trasmetterà gli aggiornamenti (per altre informazioni su unarie a catena, vedere la sezione Osservazioni).

- `dbRelationDeleteCascade` Verranno eseguite le operazioni di eliminazione a catena.

*lpszField*<br/>
Un puntatore a una stringa con terminazione null che contiene il nome di un campo nella tabella primaria (denominato da *lpszTable*).

*lpszForeignField*<br/>
Un puntatore a una stringa con terminazione null che contiene il nome di un campo della tabella esterna (denominato da *lpszForeignTable*).

*relinfo*<br/>
Un riferimento a un [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) oggetto contenente le informazioni sulla relazione da creare.

### <a name="remarks"></a>Note

La relazione non può comportare una query o una tabella collegata da un database esterno.

Usare la prima versione della funzione quando la relazione include un campo in ognuna delle due tabelle. Utilizzare la seconda versione quando la relazione include più campi. Il numero massimo di campi in una relazione è 14.

Questa azione crea un oggetto relazione DAO sottostante, ma questo è un dettaglio di implementazione MFC poiché incapsulamento di MFC di oggetti di relazione è contenuta nella classe `CDaoDatabase`. MFC non fornisce una classe di relazioni.

Se si impostano la relazione attributi dell'oggetto da attivare operazioni in serie, il motore di database automaticamente aggiorna o Elimina i record in una o più tabelle quando vengono apportate modifiche alle tabelle correlate di chiave primarie.

Si supponga, ad esempio, che si stabilisce una relazione di eliminazione a catena tra una tabella Customers e una tabella degli ordini. Quando si eliminano i record della tabella Customers, vengono eliminati anche i record nella tabella Orders correlate a tale cliente. Inoltre, se si stabilisce relazioni di eliminazione a catena tra la tabella Orders e altre tabelle, i record da tali tabelle vengono eliminati automaticamente quando si eliminano i record della tabella Customers.

Per informazioni correlate, vedere l'argomento "CreateRelation Method" nella Guida di DAO.

##  <a name="deletequerydef"></a>  CDaoDatabase::DeleteQueryDef

Chiamare questa funzione membro per eliminare l'oggetto specificato querydef, ovvero query salvata, ovvero dal `CDaoDatabase` raccolta QueryDefs dell'oggetto.

```
void DeleteQueryDef(LPCTSTR lpszName);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Il nome della query salvata da eliminare.

### <a name="remarks"></a>Note

Successivamente, tale query non viene definita non è più nel database.

Per informazioni sulla creazione di oggetti querydef, vedere la classe [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md). Un oggetto querydef viene associato a un determinato `CDaoDatabase` dell'oggetto quando si costruisce la `CDaoQueryDef` oggetto, passandogli un puntatore all'oggetto di database.

##  <a name="deleterelation"></a>  CDaoDatabase::DeleteRelation

Chiamare questa funzione membro per eliminare una relazione esistente dalla raccolta di relazioni dell'oggetto di database.

```
void DeleteRelation(LPCTSTR lpszName);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Il nome della relazione da eliminare.

### <a name="remarks"></a>Note

In un secondo momento, la relazione non è più presente.

Per informazioni correlate, vedere l'argomento "Elimina Method" nella Guida di DAO.

##  <a name="deletetabledef"></a>  CDaoDatabase::DeleteTableDef

Chiamare questa funzione membro per eliminare la tabella specificata e tutti i relativi dati dal `CDaoDatabase` raccolta TableDefs dell'oggetto.

```
void DeleteTableDef(LPCTSTR lpszName);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Il nome dell'oggetto tabledef da eliminare.

### <a name="remarks"></a>Note

Successivamente, tale tabella non è più definita nel database.

> [!NOTE]
>  Prestare molta attenzione a non eliminare le tabelle di sistema.

Per informazioni sulla creazione di oggetti tabledef, vedere la classe [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md). Un oggetto tabledef viene associato a un determinato `CDaoDatabase` dell'oggetto quando si costruisce la `CDaoTableDef` oggetto, passandogli un puntatore all'oggetto di database.

Per informazioni correlate, vedere l'argomento "Elimina Method" nella Guida di DAO.

##  <a name="execute"></a>  CDaoDatabase::Execute

Chiamare questa funzione membro per eseguire una query o eseguire un'istruzione SQL sul database.

```
void Execute(
    LPCTSTR lpszSQL,
    int nOptions = dbFailOnError);
```

### <a name="parameters"></a>Parametri

*lpszSQL*<br/>
Puntatore a una stringa con terminazione null che contiene un comando SQL valido per l'esecuzione.

*nOptions*<br/>
Valore intero che specifica le opzioni relative all'integrità della query. È possibile usare l'operatore OR bit per bit ( **&#124;**) per combinare una delle costanti seguenti (purché la combinazione ha senso, ad esempio, è necessario non combinare `dbInconsistent` con `dbConsistent`):

- `dbDenyWrite` Negare l'autorizzazione di scrittura ad altri utenti.

- `dbInconsistent` (Impostazione predefinita) Aggiornamenti non consistenti.

- `dbConsistent` Aggiornamenti consistenti.

- `dbSQLPassThrough` Pass-through SQL. Fa sì che l'istruzione SQL deve essere passato a un'origine dati ODBC per l'elaborazione.

- `dbFailOnError` Esegue il rollback di aggiornamenti se si verifica un errore.

- `dbSeeChanges` Generare un errore di run-time se un altro utente modifica i dati che si sta modificando.

> [!NOTE]
>  Se entrambe `dbInconsistent` e `dbConsistent` vengono inclusi o se non è inclusa, il risultato è il valore predefinito. Per una spiegazione di queste costanti, vedere l'argomento "Esegui metodo" nella Guida di DAO.

### <a name="remarks"></a>Note

`Execute` funziona solo per le query di azione o pass-through SQL che non restituiscono risultati. Non funziona per le query select che restituiscono record.

Per una definizione e informazioni sulle query di azione, vedere gli argomenti "Azione di Query" e "Execute Method" nella Guida di DAO.

> [!TIP]
>  Ha un'istruzione SQL sintatticamente corretta e le autorizzazioni appropriate, il `Execute` funzione membro non avrà esito negativo anche se non è una singola riga può essere modificata o eliminata. Pertanto, utilizzare sempre il `dbFailOnError` opzione quando si usa il `Execute` funzione membro per eseguire un aggiornamento o eliminazione di query. Questa opzione consente di generare un'eccezione di tipo MFC [CDaoException](../../mfc/reference/cdaoexception-class.md) e rollback di tutte le modifiche ha esito positivo se uno qualsiasi dei record interessati vengono bloccato e non può essere aggiornato o eliminato. Si noti che è possibile chiamare sempre `GetRecordsAffected` per visualizzare il numero di record sono stato interessato.

Chiamare il [GetRecordsAffected](#getrecordsaffected) funzione di membro dell'oggetto di database per determinare il numero di record interessati dal più recente `Execute` chiamare. Ad esempio, `GetRecordsAffected` restituisce informazioni sul numero di record eliminati, aggiornati o inseriti quando si esegue una query. Il conteggio restituito non rifletterà le modifiche nelle tabelle correlate quando cascade aggiorna o Elimina sono attive.

`Execute` non restituisce un set di record. Usando `Execute` su una query che seleziona i record fa in modo che MFC generare un'eccezione di tipo `CDaoException`. (È presente alcun `ExecuteSQL` analoga alla funzione di membro `CDatabase::ExecuteSQL`.)

##  <a name="getconnect"></a>  CDaoDatabase::GetConnect

Chiamare questa funzione membro per recuperare la stringa di connessione utilizzata per la connessione di `CDaoDatabase` oggetto a un database ODBC o ISAM.

```
CString GetConnect();
```

### <a name="return-value"></a>Valore restituito

La stringa di connessione se [aperto](#open) è stato chiamato correttamente in un'origine dati ODBC; in caso contrario, una stringa vuota. Per un Microsoft Jet (. Database MDB), la stringa è sempre vuota a meno che non è impostarlo per l'uso con il `dbSQLPassThrough` opzione usata con il [Execute](#execute) funzione membro o usato nell'apertura di un set di record.

### <a name="remarks"></a>Note

La stringa fornisce informazioni sull'origine di un database aperto o un database utilizzato in una query pass-through. La stringa di connessione è costituita da un identificatore di tipo database e zero o più parametri separati da punti e virgola.

> [!NOTE]
>  Utilizzo delle classi DAO MFC per connettersi a un'origine dati tramite ODBC è meno efficiente rispetto alla connessione tramite una tabella collegata.

> [!NOTE]
>  La stringa di connessione viene utilizzata per passare informazioni aggiuntive a ODBC e ad alcuni driver ISAM in base alle esigenze. Non è utilizzato per. Database MDB. Per tabelle di base del database Microsoft Jet, la stringa di connessione è una stringa vuota ("") ad eccezione di quando si usa, per una query pass-through SQL come descritto in restituire valore.

Vedere le [aperto](#open) funzione membro per una descrizione del modo in cui viene creata la stringa di connessione. Dopo aver impostata la stringa di connessione `Open` chiamata, in un secondo momento usarlo per verificare l'impostazione per determinare il tipo, percorso, l'origine di dati ODBC, Password o ID utente del database.

##  <a name="getname"></a>  CDaoDatabase::GetName

Chiamare questa funzione membro per recuperare il nome del database attualmente aperto, ovvero il nome di un file di database esistente o il nome di un'origine dati ODBC registrata.

```
CString GetName();
```

### <a name="return-value"></a>Valore restituito

Il percorso completo e nome file del database, se ha esito positivo. in caso contrario, una classe vuota [CString](../../atl-mfc-shared/reference/cstringt-class.md).

### <a name="remarks"></a>Note

Se la rete supporta la convenzione di denominazione uniforme (UNC), è anche possibile specificare un percorso di rete, ad esempio, "\\\\\\\MYSERVER\\\MYSHARE\\\MYDIR\\\MYDB. MDB". (Sono necessarie le barre rovesciate doppie nei valori letterali stringa perché "\\" è il carattere di escape di C++.)

È possibile, ad esempio visualizzare il nome specificato in un'intestazione. Se si verifica un errore mentre viene recuperato il nome, MFC genera un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md).

> [!NOTE]
>  Per ottenere prestazioni migliori quando accedono ai database esterni, è consigliabile collegare le tabelle di database esterno a un database Microsoft Jet (. MDB) invece di connettersi direttamente all'origine dati.

Il tipo di database è indicato da file o della directory che si tratta del percorso, come indicato di seguito:

|Nome del percorso punta a...|Tipo di database|
|--------------------------|-------------------|
|.MDB file|Database Microsoft Jet (Microsoft Access)|
|Directory che contiene. File DBF|database dBASE|
|Directory che contiene. File con estensione XLS|Database di Microsoft Excel|
|Directory che contiene. File PDX|Database Paradox|
|Directory contenente il testo formattato in modo appropriato i file di database|Database nel formato di testo|

Per i database ODBC, ad esempio SQL Server e Oracle, la stringa di connessione del database identifica un nome di origine dati (DSN) che viene registrato da ODBC.

##  <a name="getquerydefcount"></a>  CDaoDatabase::GetQueryDefCount

Chiamare questa funzione membro per recuperare il numero di query definite nella raccolta QueryDefs del database.

```
short GetQueryDefCount();
```

### <a name="return-value"></a>Valore restituito

Il numero di query definite nel database.

### <a name="remarks"></a>Note

`GetQueryDefCount` è utile se è necessario per riprodurre a ciclo querydefs tutti nella raccolta QueryDefs. Per ottenere informazioni su una determinata query nella raccolta, vedere [funzione membro GetQueryDefInfo](#getquerydefinfo).

##  <a name="getquerydefinfo"></a>  CDaoDatabase::GetQueryDefInfo

Chiamare questa funzione membro per ottenere i vari tipi di informazioni relative a una query definita nel database.

```
void GetQueryDefInfo(
    int nIndex,
    CDaoQueryDefInfo& querydefinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);

void GetQueryDefInfo(
    LPCTSTR lpszName,
    CDaoQueryDefInfo& querydefinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
L'indice della query predefinita nella raccolta QueryDefs del database, per la ricerca in base all'indice.

*querydefinfo*<br/>
Un riferimento a un [CDaoQueryDefInfo](../../mfc/reference/cdaoquerydefinfo-structure.md) oggetto che restituisce le informazioni richieste.

*dwInfoOptions*<br/>
Opzioni che specificano quali informazioni del recordset da recuperare. Le opzioni disponibili sono elencate di seguito insieme a ciò che provocano la funzione restituisca sui set di record:

- Nome AFX_DAO_PRIMARY_INFO (impostazione predefinita), il tipo

- Più informazioni AFX_DAO_SECONDARY_INFO primario: Data di creazione, data dell'ultimo aggiornamento, i record, aggiornabile

- AFX_DAO_ALL_INFO primario e più informazioni sul database secondari: SQL, Connect, ODBCTimeout

*lpszName*<br/>
Stringa contenente il nome di una query definita nel database, per la ricerca in base al nome.

### <a name="remarks"></a>Note

È possibile scegliere una query in base all'indice nella raccolta QueryDefs del database o dal nome della query, vengono fornite due versioni della funzione.

Per una descrizione delle informazioni restituite *querydefinfo*, vedere la [CDaoQueryDefInfo](../../mfc/reference/cdaoquerydefinfo-structure.md) struttura. Questa struttura contiene membri che corrispondono agli elementi elencati in precedenza nella descrizione del *dwInfoOptions*. Se si richiede un livello di informazioni, si ottengono tutti i precedenti livelli di informazioni anche.

##  <a name="getquerytimeout"></a>  CDaoDatabase::GetQueryTimeout

Chiamare questa funzione membro per recuperare il numero corrente di secondi consentito prima che si verifica il timeout di operazioni successive sul database connesso.

```
short GetQueryTimeout();
```

### <a name="return-value"></a>Valore restituito

Valore short integer che contiene il valore di timeout in secondi.

### <a name="remarks"></a>Note

Un'operazione potrebbe raggiungere il timeout a causa di problemi di accesso di rete, il tempo di elaborazione di un numero eccessivo di query e così via. Mentre l'impostazione è attiva, influisce su tutti open, aggiungere nuove, aggiornare ed eliminare le operazioni su tutti i recordset associati a questo `CDaoDatabase` oggetto. È possibile modificare l'impostazione di timeout corrente chiamando [SetQueryTimeout](#setquerytimeout). La modifica del valore di timeout di query per un oggetto recordset dopo l'apertura, il valore per il recordset rimane invariato. Ad esempio, le successive [spostare](../../mfc/reference/cdaorecordset-class.md#move) operazioni non usano il nuovo valore. Il valore predefinito è inizialmente impostato quando il motore di database viene inizializzato.

Il valore predefinito di timeout delle query viene eseguito dal Registro di sistema Windows. Se è disponibile alcuna impostazione del Registro di sistema, il valore predefinito è 60 secondi. Non tutti i database supportano la possibilità di impostare un valore di timeout della query. Se si imposta un valore di timeout query pari a 0, si verifica alcun timeout. e la comunicazione con il database potrebbe non rispondere. Questo comportamento può essere utile durante lo sviluppo. Se la chiamata ha esito negativo, MFC genera un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md).

Per informazioni correlate, vedere l'argomento "Proprietà QueryTimeout" nella Guida di DAO.

##  <a name="getrecordsaffected"></a>  CDaoDatabase::GetRecordsAffected

Chiamare questa funzione membro per determinare il numero di record interessati dall'ultima chiamata di [Execute](#execute) funzione membro.

```
long GetRecordsAffected();
```

### <a name="return-value"></a>Valore restituito

Valore long integer che contiene il numero di record interessati.

### <a name="remarks"></a>Note

Il valore restituito include il numero di record eliminati, aggiornata o inserita da una query eseguita con `Execute`. Il conteggio restituito non rifletterà le modifiche nelle tabelle correlate quando cascade aggiorna o Elimina sono attive.

Per informazioni correlate, vedere l'argomento "Proprietà RecordsAffected" nella Guida di DAO.

##  <a name="getrelationcount"></a>  CDaoDatabase::GetRelationCount

Chiamare questa funzione membro per ottenere il numero di relazioni definite tra le tabelle nel database.

```
short GetRelationCount();
```

### <a name="return-value"></a>Valore restituito

Il numero di relazioni definite tra le tabelle nel database.

### <a name="remarks"></a>Note

`GetRelationCount` è utile se è necessario eseguire un ciclo attraverso tutte le relazioni definite nella raccolta di relazioni del database. Per ottenere informazioni su una determinata relazione nella raccolta, vedere [GetRelationInfo](#getrelationinfo).

Per illustrare il concetto di una relazione, si consideri una tabella Suppliers e una tabella Products, che potrebbe avere una relazione uno-a-molti. In questa relazione, un fornitore sono più di un prodotto. Altre relazioni sono uno a uno e molti-a-molti.

##  <a name="getrelationinfo"></a>  CDaoDatabase::GetRelationInfo

Chiamare questa funzione membro per ottenere informazioni su una relazione specificata nella raccolta di relazioni del database.

```
void GetRelationInfo(
    int nIndex,
    CDaoRelationInfo& relinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);

void GetRelationInfo(
    LPCTSTR lpszName,
    CDaoRelationInfo& relinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
L'indice dell'oggetto relazione nella raccolta di relazioni del database, per la ricerca in base all'indice.

*relinfo*<br/>
Un riferimento a un [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) oggetto che restituisce le informazioni richieste.

*dwInfoOptions*<br/>
Opzioni che specificano le informazioni sulla relazione da recuperare. Le opzioni disponibili sono elencate di seguito insieme a ciò che provocano la funzione restituisca sulla relazione:

- Tabella esterna dei nomi, tabella, AFX_DAO_PRIMARY_INFO (impostazione predefinita)

- AFX_DAO_SECONDARY_INFO attributi, le informazioni sui campi

Le informazioni sul campo è un [CDaoRelationFieldInfo](../../mfc/reference/cdaorelationfieldinfo-structure.md) oggetto contenente i campi della tabella primaria coinvolti nella relazione.

*lpszName*<br/>
Stringa contenente il nome dell'oggetto relazione per la ricerca in base al nome.

### <a name="remarks"></a>Note

Due versioni di questa funzione forniscono l'accesso in base all'indice o al nome. Per una descrizione delle informazioni restituite *relinfo*, vedere la [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) struttura. Questa struttura contiene membri che corrispondono agli elementi elencati in precedenza nella descrizione del *dwInfoOptions*. Se si richiedono informazioni su un unico livello, otterrai anche informazioni in tutti i livelli precedenti oltre.

> [!NOTE]
>  Se si imposta la relazione degli attributi dell'oggetto da attivare operazioni cascade (`dbRelationUpdateCascades` o `dbRelationDeleteCascades`), il motore di database Microsoft Jet automaticamente aggiorna o Elimina i record in uno o più tabelle quando vengono apportate modifiche correlate chiave primaria tabelle. Si supponga, ad esempio, che si stabilisce una relazione di eliminazione a catena tra una tabella Customers e una tabella degli ordini. Quando si eliminano i record della tabella Customers, vengono eliminati anche i record nella tabella Orders correlate a tale cliente. Inoltre, se si stabilisce relazioni di eliminazione a catena tra la tabella Orders e altre tabelle, i record da tali tabelle vengono eliminati automaticamente quando si eliminano i record della tabella Customers.

##  <a name="gettabledefcount"></a>  CDaoDatabase:

Chiamare questa funzione membro per recuperare il numero di tabelle definite nel database.

```
short GetTableDefCount();
```

### <a name="return-value"></a>Valore restituito

Il numero di tabledefs definite nel database.

### <a name="remarks"></a>Note

`GetTableDefCount` è utile se è necessario per riprodurre a ciclo tabledefs tutti nella raccolta TableDefs del database. Per ottenere informazioni su una tabella specificata nella raccolta, vedere [GetTableDefInfo](#gettabledefinfo).

##  <a name="gettabledefinfo"></a>  CDaoDatabase::GetTableDefInfo

Chiamare questa funzione membro per ottenere i vari tipi di informazioni su una tabella definita nel database.

```
void GetTableDefInfo(
    int nIndex,
    CDaoTableDefInfo& tabledefinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);

void GetTableDefInfo(
    LPCTSTR lpszName,
    CDaoTableDefInfo& tabledefinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
L'indice dell'oggetto tabledef nella raccolta TableDefs del database, per la ricerca in base all'indice.

*tabledefinfo*<br/>
Un riferimento a un [CDaoTableDefInfo](../../mfc/reference/cdaotabledefinfo-structure.md) oggetto che restituisce le informazioni richieste.

*dwInfoOptions*<br/>
Opzioni che specificano le informazioni sulla tabella da recuperare. Le opzioni disponibili sono elencate di seguito insieme a ciò che provocano la funzione restituisca sulla relazione:

- Gli attributi nome AFX_DAO_PRIMARY_INFO (impostazione predefinita), aggiornabile,

- Più informazioni AFX_DAO_SECONDARY_INFO primario: Data di creazione, Data ultimo aggiornata del nome di tabella di origine, la connessione

- AFX_DAO_ALL_INFO primario e più informazioni sul database secondari: Convalida regola, il testo di convalida, il conteggio dei Record

*lpszName*<br/>
Il nome dell'oggetto tabledef, per la ricerca in base al nome.

### <a name="remarks"></a>Note

Pertanto è possibile selezionare una tabella in base all'indice nella raccolta TableDefs del database o dal nome della tabella, vengono fornite due versioni della funzione.

Per una descrizione delle informazioni restituite *tabledefinfo*, vedere la [CDaoTableDefInfo](../../mfc/reference/cdaotabledefinfo-structure.md) struttura. Questa struttura contiene membri che corrispondono agli elementi elencati in precedenza nella descrizione del *dwInfoOptions*. Se si richiedono informazioni su un unico livello, otterrai informazioni dei livelli precedenti oltre.

> [!NOTE]
>  L'opzione AFX_DAO_ALL_INFO fornisce informazioni che possono essere lente da ottenere. In questo caso, i record nella tabella di conteggio potrebbe richiedere molto tempo se sono presenti molti record.

##  <a name="getversion"></a>  CDaoDatabase::GetVersion

Chiamare questa funzione membro per determinare la versione del file di database Microsoft Jet.

```
CString GetVersion();
```

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) indica la versione del file di database associato all'oggetto.

### <a name="remarks"></a>Note

Il valore restituito rappresenta il numero di versione nel formato "Major. minor"; ad esempio, "3.0". Il numero di versione del prodotto (ad esempio, 3.0) è costituito da un periodo, il numero di versione (3) e il numero di versione (0). Le versioni finora sono 1.0, 1.1, 2.0 e 3.0.

Per informazioni correlate, vedere l'argomento "Proprietà Version" nella Guida di DAO.

##  <a name="isopen"></a>  CDaoDatabase::IsOpen

Chiamare questa funzione membro per determinare se il `CDaoDatabase` oggetto è attualmente aperto in un database.

```
BOOL IsOpen() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il `CDaoDatabase` oggetto è attualmente aperto; in caso contrario, 0.

### <a name="remarks"></a>Note

##  <a name="m_pdaodatabase"></a>  CDaoDatabase::m_pDAODatabase

Contiene un puntatore all'interfaccia OLE per l'oggetto di database DAO sottostante il `CDaoDatabase` oggetto.

### <a name="remarks"></a>Note

Utilizzare questo puntatore, se è necessario accedere direttamente all'interfaccia DAO.

Per informazioni sulla chiamata di DAO direttamente, vedere [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).

##  <a name="m_pworkspace"></a>  CDaoDatabase::m_pWorkspace

Contiene un puntatore per il [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) oggetto che contiene l'oggetto di database.

### <a name="remarks"></a>Note

Utilizzare questo puntatore, se è necessario accedere direttamente l'area di lavoro, ad esempio, per ottenere i puntatori agli altri oggetti di database nella raccolta di database dell'area di lavoro.

##  <a name="open"></a>  CDaoDatabase::Open

È necessario chiamare questa funzione membro per inizializzare un oggetto appena costruito `CDaoDatabase` oggetto che rappresenta un database esistente.

```
virtual void Open(
    LPCTSTR lpszName,
    BOOL bExclusive = FALSE,
    BOOL bReadOnly = FALSE,
    LPCTSTR lpszConnect = _T(""));
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Un'espressione stringa che rappresenta il nome di una versione esistente di Microsoft Jet (. File di database MDB). Se il nome del file ha un'estensione, è necessario. Se la rete supporta la convenzione di denominazione uniforme (UNC), è possibile anche specificare un percorso di rete, ad esempio "\\\\\\\MYSERVER\\\MYSHARE\\\MYDIR\\\MYDB. MDB". (Sono necessarie le barre rovesciate doppie nei valori letterali stringa perché "\\" è il carattere di escape di C++.)

Alcune considerazioni si applicano quando si usa *lpszName*. Se si:

- Fa riferimento a un database che è già aperto per l'accesso esclusivo da un altro utente, MFC genera un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md). Intercettare l'eccezione per informare l'utente che il database non è disponibile.

- È una stringa vuota ("") e *lpszConnect* è "ODBC;", viene visualizzata una finestra di dialogo elenco registrati tutti i nomi delle origini dati in modo che l'utente può selezionare un database. È consigliabile evitare connessioni dirette a origini dati ODBC. Usare invece una tabella collegata.

- In caso contrario, non si riferisce a un database esistente o il valido DSN ODBC, MFC genera un'eccezione di tipo `CDaoException`.

> [!NOTE]
>  Per informazioni dettagliate sui codici di errore DAO, vedere il DAOERR. File H. Per informazioni correlate, vedere l'argomento "Dati accesso errori intercettabili" nella Guida di DAO.

*bExclusive*<br/>
Valore booleano che è TRUE se il database deve essere aperto per l'accesso esclusivo (non condivisa) e FALSE se il database deve essere aperto per l'accesso condiviso. Se si omette questo argomento, il database è aperto per l'accesso condiviso.

*bReadOnly*<br/>
Valore booleano che è TRUE se il database deve essere aperto per l'accesso di sola lettura e FALSE se il database deve essere aperto per l'accesso in lettura/scrittura. Se si omette questo argomento, il database è aperto per l'accesso in lettura/scrittura. Tutti i recordset dipendenti ereditano l'attributo.

*lpszConnect*<br/>
Un'espressione stringa utilizzata per aprire il database. Questa stringa ODBC si intende per connessione argomenti. È necessario fornire gli argomenti esclusivi e di sola lettura per fornire una stringa di origine. Se il database è un database Microsoft Jet (. MDB), questa stringa è vuota (""). La sintassi per il valore predefinito, ovvero **t**(""), fornisce la portabilità per Unicode, nonché ANSI build dell'applicazione.

### <a name="remarks"></a>Note

`Open` Associa l'oggetto DAO sottostante del database. È possibile utilizzare l'oggetto di database per costruire oggetti querydef, tabledef o recordset fino a quando non viene inizializzato. `Open` Aggiunge l'oggetto di database alla raccolta di database dell'area di lavoro associato.

Usare i parametri come segue:

- Se si sta aprendo un Microsoft Jet (. Database MDB), usare il *lpszName* parametro e passare una stringa vuota per il *lpszConnect* parametro o passare una stringa di password nel formato "; PWD = password "se il database è protetto da password (. MDB solo database).

- Se si apre un'origine dati ODBC, passare una stringa di connessione ODBC valida in *lpszConnect* e una stringa vuota in *lpszName*.

Per informazioni correlate, vedere l'argomento "OpenDatabase Method" nella Guida di DAO.

> [!NOTE]
>  Per ottenere prestazioni migliori quando si accede a database esterni, tra cui database ISAM e origini dati ODBC, è consigliabile collegare le tabelle di database esterno a un database di gestione di Microsoft Jet (. MDB) invece di connettersi direttamente all'origine dati.

È possibile che un tentativo di connessione al timeout se, ad esempio, non è disponibile l'host DBMS. Se il tentativo di connessione ha esito negativo, `Open` genera un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md).

La sezione Osservazioni rimanente si applicano solo a database ODBC:

Se il database è un database ODBC e i parametri in di `Open` chiamata non contengono informazioni sufficienti per stabilire la connessione, il driver ODBC apre una finestra di dialogo per ottenere le informazioni necessarie da parte dell'utente. Quando si chiama `Open`, la stringa di connessione *lpszConnect*, vengono archiviate privatamente e sono disponibili chiamando il [GetConnect](#getconnect) funzione membro.

Se si desidera, è possibile aprire una propria finestra di dialogo prima di chiamare `Open` per ottenere informazioni dall'utente, ad esempio una password, quindi aggiungere le informazioni sulla stringa di connessione si passa a `Open`. Oppure è possibile salvare la stringa di connessione passata (forse nel Registro di sistema Windows) in modo da poterla riutilizzare alla successiva ora l'applicazione chiama `Open` su un `CDaoDatabase` oggetto.

È anche possibile usare la stringa di connessione per più livelli di autorizzazione di accesso (ciascuno per una diversa `CDaoDatabase` oggetto) o per fornire altre informazioni specifiche del database.

##  <a name="setquerytimeout"></a>  CDaoDatabase::SetQueryTimeout

Chiamare questa funzione membro per sostituire il numero predefinito di secondi consentito prima le operazioni successive sul timeout del database connesso.

```
void SetQueryTimeout(short nSeconds);
```

### <a name="parameters"></a>Parametri

*nSeconds*<br/>
Il numero di secondi consentito prima un tentativo di query timeout.

### <a name="remarks"></a>Note

Un'operazione potrebbe raggiungere il timeout a causa di problemi di accesso di rete, il tempo di elaborazione di un numero eccessivo di query e così via. Chiamare `SetQueryTimeout` prima dell'apertura del recordset o prima di chiamare il recordset [AddNew](../../mfc/reference/cdaorecordset-class.md#addnew), [Update](../../mfc/reference/cdaorecordset-class.md#update), oppure [eliminare](../../mfc/reference/cdaorecordset-class.md#delete) funzioni membro, se si desidera modificare la query valore di timeout. L'impostazione influisce su tutte le successive [aperto](../../mfc/reference/cdaorecordset-class.md#open), `AddNew`, `Update`, e `Delete` chiamate a tutti i recordset associati a questo `CDaoDatabase` oggetto. La modifica del valore di timeout di query per un oggetto recordset dopo l'apertura, il valore per il recordset rimane invariato. Ad esempio, le successive [spostare](../../mfc/reference/cdaorecordset-class.md#move) operazioni non usano il nuovo valore.

Il valore predefinito di timeout delle query è 60 secondi. Non tutti i database supportano la possibilità di impostare un valore di timeout della query. Se si imposta un valore di timeout query pari a 0, si verifica alcun timeout. la comunicazione con il database potrebbe non rispondere. Questo comportamento può essere utile durante lo sviluppo.

Per informazioni correlate, vedere l'argomento "Proprietà QueryTimeout" nella Guida di DAO.

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md)<br/>
[Classe CDaoRecordset](../../mfc/reference/cdaorecordset-class.md)<br/>
[Classe CDaoTableDef](../../mfc/reference/cdaotabledef-class.md)<br/>
[Classe CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md)<br/>
[Classe CDatabase](../../mfc/reference/cdatabase-class.md)<br/>
[Classe CDaoException](../../mfc/reference/cdaoexception-class.md)
