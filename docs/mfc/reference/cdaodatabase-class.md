---
title: CDaoDatabase (classe)
ms.date: 09/17/2019
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
ms.openlocfilehash: 683f3f9ebb09d69461e4f9026841363c452f4793
ms.sourcegitcommit: 2f96e2fda591d7b1b28842b2ea24e6297bcc3622
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2019
ms.locfileid: "71096165"
---
# <a name="cdaodatabase-class"></a>CDaoDatabase (classe)

Rappresenta una connessione a un database di Access tramite DAO (Data Access Objects). DAO è supportato tramite Office 2013. DAO 3,6 è la versione finale ed è considerata obsoleta.

## <a name="syntax"></a>Sintassi

```
class CDaoDatabase : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CDaoDatabase:: CDaoDatabase](#cdaodatabase)|Costruisce un oggetto `CDaoDatabase`. Chiamare `Open` per connettere l'oggetto a un database.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoDatabase::CanTransact](#cantransact)|Restituisce un valore diverso da zero se il database supporta le transazioni.|
|[CDaoDatabase::CanUpdate](#canupdate)|Restituisce un valore diverso da `CDaoDatabase` zero se l'oggetto è aggiornabile (non di sola lettura).|
|[CDaoDatabase:: Close](#close)|Chiude la connessione al database.|
|[CDaoDatabase:: create](#create)|Crea l'oggetto di database DAO sottostante e inizializza `CDaoDatabase` l'oggetto.|
|[CDaoDatabase::CreateRelation](#createrelation)|Definisce una nuova relazione tra le tabelle del database.|
|[CDaoDatabase::DeleteQueryDef](#deletequerydef)|Elimina un oggetto QueryDef salvato nella raccolta QueryDefs del database.|
|[CDaoDatabase::D eleteRelation](#deleterelation)|Elimina una relazione esistente tra le tabelle nel database.|
|[CDaoDatabase::D eleteTableDef](#deletetabledef)|Elimina la definizione di una tabella nel database. Questa operazione consente di eliminare la tabella effettiva e tutti i relativi dati.|
|[CDaoDatabase:: Execute](#execute)|Esegue una query di azione. Se `Execute` si chiama per una query che restituisce risultati, viene generata un'eccezione.|
|[CDaoDatabase:: GetConnect](#getconnect)|Restituisce la stringa di connessione utilizzata per connettere `CDaoDatabase` l'oggetto a un database. Utilizzato per ODBC.|
|[CDaoDatabase:: GetName](#getname)|Restituisce il nome del database attualmente in uso.|
|[CDaoDatabase::GetQueryDefCount](#getquerydefcount)|Restituisce il numero di query definite per il database.|
|[CDaoDatabase::GetQueryDefInfo](#getquerydefinfo)|Restituisce informazioni su una query specificata definita nel database.|
|[CDaoDatabase::GetQueryTimeout](#getquerytimeout)|Restituisce il numero di secondi trascorsi i quali si esaurirà il timeout delle operazioni di query sul database. Influiscono su tutte le successive operazioni di apertura, aggiunta, aggiornamento e modifica e altre operazioni sulle origini dati ODBC (solo) `Execute` , ad esempio le chiamate.|
|[CDaoDatabase::GetRecordsAffected](#getrecordsaffected)|Restituisce il numero di record interessati dall'ultima operazione di aggiornamento, modifica o aggiunta o da una chiamata a `Execute`.|
|[CDaoDatabase::GetRelationCount](#getrelationcount)|Restituisce il numero di relazioni definite tra le tabelle nel database.|
|[CDaoDatabase::GetRelationInfo](#getrelationinfo)|Restituisce informazioni su una relazione specificata definita tra le tabelle del database.|
|[CDaoDatabase:: GetTableDefCount](#gettabledefcount)|Restituisce il numero di tabelle definite nel database.|
|[CDaoDatabase::GetTableDefInfo](#gettabledefinfo)|Restituisce informazioni su una tabella specificata nel database.|
|[CDaoDatabase:: GetVersion](#getversion)|Restituisce la versione del motore di database associata al database.|
|[CDaoDatabase:: Open](#isopen)|Restituisce un valore diverso da `CDaoDatabase` zero se l'oggetto è attualmente connesso a un database.|
|[CDaoDatabase:: Open](#open)|Stabilisce una connessione a un database.|
|[CDaoDatabase::SetQueryTimeout](#setquerytimeout)|Imposta il numero di secondi trascorsi i quali viene eseguito il timeout delle operazioni di query sul database (solo su origini dati ODBC). Influiscono su tutte le successive operazioni di apertura, aggiunta nuova, aggiornamento ed eliminazione.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|Descrizione|
|----------|-----------------|
|[CDaoDatabase:: m_pDAODatabase](#m_pdaodatabase)|Puntatore all'oggetto di database DAO sottostante.|
|[CDaoDatabase:: m_pWorkspace](#m_pworkspace)|Puntatore all'oggetto [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) che contiene il database e definisce lo spazio di transazione.|

## <a name="remarks"></a>Note

Per informazioni sui formati di database supportati, vedere la funzione membro [GetName](../../mfc/reference/cdaoworkspace-class.md#getname) . È possibile avere uno o più `CDaoDatabase` oggetti attivi alla volta in una determinata "area di lavoro", rappresentata da un oggetto [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) . L'area di lavoro gestisce una raccolta di oggetti di database aperti, denominata raccolta di database.

## <a name="usage"></a>Utilizzo

È possibile creare oggetti di database in modo implicito quando si creano oggetti recordset. Tuttavia, è anche possibile creare oggetti di database in modo esplicito. Per usare un database esistente in modo esplicito con `CDaoDatabase`, eseguire una delle operazioni seguenti:

- Costruisce `CDaoDatabase` un oggetto, passando un puntatore a un oggetto [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) aperto.

- Oppure costruire un `CDaoDatabase` oggetto senza specificare l'area di lavoro (MFC crea un oggetto area di lavoro temporaneo).

Per creare un nuovo Microsoft Jet (. MDB), creare un `CDaoDatabase` oggetto e chiamare la funzione membro [create](#create) . `Open` Non *chiamare dopo* . `Create`

Per aprire un database esistente, costruire un `CDaoDatabase` oggetto e chiamare la relativa funzione membro [aperta](#open) .

Ognuna di queste tecniche aggiunge l'oggetto di database DAO alla raccolta di database dell'area di lavoro e apre una connessione ai dati. Quando si costruiscono oggetti [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md), [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md)o [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) per operare sul database connesso, passare i costruttori per questi `CDaoDatabase` oggetti un puntatore all'oggetto. Al termine dell'utilizzo della connessione, chiamare la funzione membro [Close](#close) ed eliminare l' `CDaoDatabase` oggetto. `Close`chiude gli eventuali recordset non chiusi in precedenza.

## <a name="transactions"></a>Transazioni

L'elaborazione delle transazioni di database viene fornita a livello di area di lavoro. vedere le funzioni membro [BeginTrans](../../mfc/reference/cdaoworkspace-class.md#begintrans), [CommitTrans](../../mfc/reference/cdaoworkspace-class.md#committrans)e [rollback](../../mfc/reference/cdaoworkspace-class.md#rollback) della classe `CDaoWorkspace`.

## <a name="odbc-connections"></a>Connessioni ODBC

Il metodo consigliato per utilizzare le origini dati ODBC consiste nel associare le tabelle esterne a Microsoft Jet (. MDB) database.

## <a name="collections"></a>Raccolte

Ogni database gestisce le proprie raccolte di oggetti TableDef, QueryDef, recordset e relazionali. La `CDaoDatabase` classe fornisce funzioni membro per la modifica di questi oggetti.

> [!NOTE]
>  Gli oggetti vengono archiviati in DAO, non nell'oggetto di database MFC. MFC fornisce classi per oggetti TableDef, QueryDef e recordset, ma non per gli oggetti di relazione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CDaoDatabase`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

##  <a name="cantransact"></a>CDaoDatabase:: CanTransact

Chiamare questa funzione membro per determinare se il database consente le transazioni.

```
BOOL CanTransact();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il database supporta le transazioni. in caso contrario, 0.

### <a name="remarks"></a>Note

Le transazioni vengono gestite nell'area di lavoro del database.

##  <a name="canupdate"></a>CDaoDatabase:: CanUpdate

Chiamare questa funzione membro per determinare se l' `CDaoDatabase` oggetto consente gli aggiornamenti.

```
BOOL CanUpdate();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se `CDaoDatabase` l'oggetto consente gli aggiornamenti; in caso contrario, 0, che indica che è stato passato true `CDaoDatabase` in *bReadOnly* quando è stato aperto l'oggetto o che il database è di sola lettura. Vedere la funzione membro [Open](#open) .

### <a name="remarks"></a>Note

Per informazioni sul database aggiornabilità, vedere l'argomento "proprietà aggiornabile" nella Guida di DAO.

##  <a name="cdaodatabase"></a>CDaoDatabase:: CDaoDatabase

Costruisce un oggetto `CDaoDatabase`.

```
CDaoDatabase(CDaoWorkspace* pWorkspace = NULL);
```

### <a name="parameters"></a>Parametri

*pWorkspace*<br/>
Puntatore all' `CDaoWorkspace` oggetto che conterrà il nuovo oggetto di database. Se si accetta il valore predefinito null, il costruttore crea un oggetto temporaneo `CDaoWorkspace` che usa l'area di lavoro DAO predefinita. È possibile ottenere un puntatore all'oggetto area di lavoro tramite il membro dati [m_pWorkspace](#m_pworkspace) .

### <a name="remarks"></a>Note

Dopo la costruzione dell'oggetto, se si sta creando un nuovo Microsoft Jet (. MDB), chiamare la funzione membro [create](#create) dell'oggetto. Se invece si apre un database esistente, chiamare la funzione membro [Open](#open) dell'oggetto.

Al termine dell'oggetto, è necessario chiamare la relativa funzione membro [Close](#close) e quindi eliminare definitivamente l' `CDaoDatabase` oggetto.

Potrebbe risultare utile incorporare l' `CDaoDatabase` oggetto nella classe del documento.

> [!NOTE]
>  Un `CDaoDatabase` oggetto viene creato in modo implicito anche se si apre un oggetto [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) senza passare un puntatore a `CDaoDatabase` un oggetto esistente. Questo oggetto di database viene chiuso quando si chiude l'oggetto recordset.

##  <a name="close"></a>CDaoDatabase:: Close

Chiamare questa funzione membro per disconnettersi da un database e chiudere gli eventuali recordset, TableDef e QueryDefs aperti associati al database.

```
virtual void Close();
```

### <a name="remarks"></a>Note

È consigliabile chiudere questi oggetti prima di chiamare questa funzione membro. La chiusura `CDaoDatabase` di un oggetto ne comporta la rimozione dalla raccolta di database nell' [area di lavoro](../../mfc/reference/cdaoworkspace-class.md)associata. Poiché `Close` non elimina definitivamente l' `CDaoDatabase` oggetto, è possibile riutilizzare l'oggetto aprendo lo stesso database o un database diverso.

> [!CAUTION]
>  Chiamare la funzione membro [Update](../../mfc/reference/cdaorecordset-class.md#update) (se sono presenti modifiche in sospeso) e la `Close` funzione membro in tutti gli oggetti recordset aperti prima di chiudere un database. Se si esce da una funzione che dichiara [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) o `CDaoDatabase` oggetti nello stack, il database viene chiuso, tutte le modifiche non salvate vengono perse, viene eseguito il rollback di tutte le transazioni in sospeso e le modifiche in sospeso ai dati vengono perse.

> [!CAUTION]
>  Se si tenta di chiudere un oggetto di database mentre sono aperti oggetti recordset, oppure se si tenta di chiudere un oggetto dell'area di lavoro mentre sono aperti tutti gli oggetti di database appartenenti a tale area di lavoro specifica, tali oggetti recordset verranno chiusi e tutti gli aggiornamenti o le modifiche in sospeso saranno rollback eseguito. Se si tenta di chiudere un oggetto dell'area di lavoro mentre sono aperti tutti gli oggetti di database che lo appartengono, l'operazione chiude tutti gli oggetti di database che appartengono a quell'oggetto area di lavoro specifico, che può comportare la chiusura di oggetti recordset senza chiusura. Se non si chiude l'oggetto di database, MFC segnala un errore di asserzione nelle compilazioni di debug.

Se l'oggetto di database è definito al di fuori dell'ambito di una funzione e si esce dalla funzione senza chiuderla, l'oggetto di database resterà aperto fino a quando non viene chiuso in modo esplicito o il modulo in cui è definito non rientra nell'ambito.

##  <a name="create"></a>CDaoDatabase:: create

Per creare un nuovo Microsoft Jet (. MDB), chiamare questa funzione membro dopo la costruzione di un `CDaoDatabase` oggetto.

```
virtual void Create(
    LPCTSTR lpszName,
    LPCTSTR lpszLocale = dbLangGeneral,
    int dwOptions = 0);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Espressione stringa che rappresenta il nome del file di database che si sta creando. Può essere il percorso completo e il nome del file, ad esempio "\\C: \MYDB. MDB ". È necessario specificare un nome. Se non si specifica un'estensione del nome file,. Viene aggiunto il MDB. Se la rete supporta la convenzione di denominazione uniforme (UNC), è anche possibile specificare un percorso di rete, ad\\esempio\\"\\\\\\\MYSERVER\\\MYSHARE \mydir \MYDB". Solo Microsoft Jet (. MDB) i file di database possono essere creati utilizzando questa funzione membro. (Le barre rovesciate doppie sono obbligatorie nei valori letterali stringa\\perché "" C++ è il carattere di escape).

*lpszLocale*<br/>
Espressione stringa utilizzata per specificare l'ordine di ordinamento per la creazione del database. Il valore predefinito è `dbLangGeneral`. I valori possibili sono:

- `dbLangGeneral`Inglese, tedesco, francese, portoghese, italiano e spagnolo moderno

- `dbLangArabic`Arabo

- `dbLangCyrillic`Russo

- `dbLangCzech`Ceco

- `dbLangDutch`Olandese

- `dbLangGreek`Greco

- `dbLangHebrew`Ebraico

- `dbLangHungarian`Ungherese

- `dbLangIcelandic`Islandese

- `dbLangNordic`Lingue nordiche (solo Microsoft Jet Database Engine versione 1,0)

- `dbLangNorwdan`Norvegese e danese

- `dbLangPolish`Polacco

- `dbLangSpanish`Spagnolo tradizionale

- `dbLangSwedfin`Svedese e finlandese

- `dbLangTurkish`Turco

*dwOptions*<br/>
Intero che indica una o più opzioni. I valori possibili sono:

- `dbEncrypt`Creare un database crittografato.

- `dbVersion10`Creare un database con Microsoft Jet database versione 1,0.

- `dbVersion11`Creare un database con Microsoft Jet database versione 1,1.

- `dbVersion20`Creare un database con Microsoft Jet database versione 2,0.

- `dbVersion30`Creare un database con Microsoft Jet database versione 3,0.

Se si omette la costante di crittografia, viene creato un database non crittografato. È possibile specificare una sola costante Version. Se si omette una costante di versione, viene creato un database che usa il database Microsoft Jet versione 3,0.

> [!CAUTION]
>  Se un database non è crittografato, è possibile, anche se si implementa la sicurezza utente/password, per leggere direttamente il file su disco binario che costituisce il database.

### <a name="remarks"></a>Note

`Create`consente di creare il file di database e l'oggetto di database DAO C++ sottostante e di inizializzare l'oggetto. L'oggetto viene aggiunto all'insieme di database dell'area di lavoro associato. L'oggetto di database è in uno stato aperto. non chiamare `Open*` dopo `Create`.

> [!NOTE]
>  Con `Create`, è possibile creare solo Microsoft Jet (. MDB) database. Non è possibile creare database ISAM o database ODBC.

##  <a name="createrelation"></a>CDaoDatabase:: CreateRelation

Chiamare questa funzione membro per stabilire una relazione tra uno o più campi in una tabella primaria nel database e uno o più campi in una tabella esterna, ovvero un'altra tabella del database.

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
Nome univoco dell'oggetto Relation. Il nome deve iniziare con una lettera e può contenere un massimo di 40 caratteri. Può includere numeri e caratteri di sottolineatura, ma non può includere segni di punteggiatura o spazi.

*lpszTable*<br/>
Nome della tabella primaria nella relazione. Se la tabella non esiste, MFC genera un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md).

*lpszForeignTable*<br/>
Nome della tabella esterna nella relazione. Se la tabella non esiste, MFC genera un'eccezione di tipo `CDaoException`.

*lAttributes*<br/>
Valore Long che contiene informazioni sul tipo di relazione. È possibile utilizzare questo valore per applicare l'integrità referenziale, tra le altre cose. È possibile utilizzare l'operatore OR bit per bit **&#124;** () per combinare uno dei valori seguenti (purché la combinazione abbia senso):

- `dbRelationUnique`La relazione è uno-a-uno.

- `dbRelationDontEnforce`La relazione non viene applicata (nessuna integrità referenziale).

- `dbRelationInherited`La relazione esiste in un database non corrente che contiene le due tabelle associate.

- `dbRelationUpdateCascade`Gli aggiornamenti si propagano (per altre informazioni sulle cascate, vedere la sezione Osservazioni).

- `dbRelationDeleteCascade`Le eliminazioni si propagano a cascata.

*lpszField*<br/>
Puntatore a una stringa con terminazione null che contiene il nome di un campo nella tabella primaria (denominato da *lpszTable*).

*lpszForeignField*<br/>
Puntatore a una stringa con terminazione null che contiene il nome di un campo nella tabella esterna (denominato da *lpszForeignTable*).

*relinfo*<br/>
Riferimento a un oggetto [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) che contiene informazioni sulla relazione che si desidera creare.

### <a name="remarks"></a>Note

La relazione non può coinvolgere una query o una tabella collegata da un database esterno.

Utilizzare la prima versione della funzione quando la relazione include un campo in ognuna delle due tabelle. Utilizzare la seconda versione quando la relazione include più campi. Il numero massimo di campi in una relazione è 14.

Questa azione crea un oggetto relazione DAO sottostante, ma si tratta di un dettaglio di implementazione MFC poiché l'incapsulamento degli oggetti Relation di MFC `CDaoDatabase`è contenuto all'interno della classe. MFC non fornisce una classe per le relazioni.

Se si impostano gli attributi dell'oggetto relazione per attivare le operazioni Cascade, il motore di database aggiorna o Elimina automaticamente i record in una o più tabelle quando vengono apportate modifiche alle tabelle di chiavi primarie correlate.

Si supponga ad esempio di stabilire una relazione di eliminazione a catena tra una tabella Customers e una tabella Orders. Quando si eliminano i record dalla tabella Customers, vengono eliminati anche i record della tabella Orders correlati a tale cliente. Inoltre, se si stabiliscono relazioni di eliminazione a catena tra la tabella Orders e altre tabelle, i record di tali tabelle vengono eliminati automaticamente quando si eliminano i record dalla tabella Customers.

Per informazioni correlate, vedere l'argomento "metodo CreateRelation" nella Guida di DAO.

##  <a name="deletequerydef"></a>CDaoDatabase::D eleteQueryDef

Chiamare questa funzione membro per eliminare l' `CDaoDatabase` oggetto QueryDef specificato, ovvero la query salvata, dalla raccolta QueryDefs dell'oggetto.

```
void DeleteQueryDef(LPCTSTR lpszName);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Nome della query salvata da eliminare.

### <a name="remarks"></a>Note

Successivamente, la query non è più definita nel database.

Per informazioni sulla creazione di oggetti QueryDef, vedere la classe [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md). Un oggetto QueryDef viene associato a un particolare `CDaoDatabase` oggetto quando si costruisce `CDaoQueryDef` l'oggetto, passandogli un puntatore all'oggetto di database.

##  <a name="deleterelation"></a>CDaoDatabase::D eleteRelation

Chiamare questa funzione membro per eliminare una relazione esistente dalla raccolta di relazioni dell'oggetto di database.

```
void DeleteRelation(LPCTSTR lpszName);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Nome della relazione da eliminare.

### <a name="remarks"></a>Note

In seguito, la relazione non esiste più.

Per informazioni correlate, vedere l'argomento "Delete Method" nella Guida di DAO.

##  <a name="deletetabledef"></a>CDaoDatabase::D eleteTableDef

Chiamare questa funzione membro per eliminare la tabella specificata e tutti i relativi dati dalla `CDaoDatabase` raccolta di oggetti TableDef dell'oggetto.

```
void DeleteTableDef(LPCTSTR lpszName);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Nome del TableDef da eliminare.

### <a name="remarks"></a>Note

In seguito, tale tabella non è più definita nel database.

> [!NOTE]
>  Prestare molta attenzione a non eliminare le tabelle di sistema.

Per informazioni sulla creazione di oggetti TableDef, vedere la classe [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md). Un oggetto TableDef viene associato a un particolare `CDaoDatabase` oggetto quando si costruisce `CDaoTableDef` l'oggetto, passandogli un puntatore all'oggetto di database.

Per informazioni correlate, vedere l'argomento "Delete Method" nella Guida di DAO.

##  <a name="execute"></a>CDaoDatabase:: Execute

Chiamare questa funzione membro per eseguire una query di azione o eseguire un'istruzione SQL sul database.

```
void Execute(
    LPCTSTR lpszSQL,
    int nOptions = dbFailOnError);
```

### <a name="parameters"></a>Parametri

*lpszSQL*<br/>
Puntatore a una stringa con terminazione null contenente un comando SQL valido da eseguire.

*nOptions*<br/>
Integer che specifica le opzioni relative all'integrità della query. È possibile utilizzare l'operatore OR bit per bit **&#124;** () per combinare una delle seguenti costanti (purché la combinazione abbia senso, ad esempio, non si combini `dbInconsistent` con `dbConsistent`):

- `dbDenyWrite`Negare l'autorizzazione di scrittura ad altri utenti.

- `dbInconsistent`Predefinita Aggiornamenti incoerenti.

- `dbConsistent`Aggiornamenti coerenti.

- `dbSQLPassThrough`Pass-through SQL. Fa in modo che l'istruzione SQL venga passata a un'origine dati ODBC per l'elaborazione.

- `dbFailOnError`Eseguire il rollback degli aggiornamenti se si verifica un errore.

- `dbSeeChanges`Genera un errore di run-time se un altro utente sta modificando i dati che si stanno modificando.

> [!NOTE]
>  Se e `dbInconsistent` `dbConsistent` sono inclusi o se nessuno dei due è incluso, il risultato è il valore predefinito. Per una spiegazione di queste costanti, vedere l'argomento "Execute Method" nella Guida di DAO.

### <a name="remarks"></a>Note

`Execute`funziona solo per le query di azione o per le query pass-through SQL che non restituiscono risultati. Non funziona per le query SELECT che restituiscono record.

Per una definizione e informazioni sulle query di azione, vedere gli argomenti "query azione" e "metodo Execute" nella Guida di DAO.

> [!TIP]
>  Data un'istruzione SQL con sintassi corretta e le autorizzazioni appropriate, `Execute` la funzione membro non avrà esito negativo anche se non è possibile modificare o eliminare una singola riga. Pertanto, utilizzare sempre l' `dbFailOnError` opzione quando si utilizza `Execute` la funzione membro per eseguire una query di aggiornamento o eliminazione. Questa opzione fa in modo che MFC generi un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md) ed esegue il rollback di tutte le modifiche riuscite se uno dei record interessati è bloccato e non può essere aggiornato o eliminato. Si noti che è sempre possibile `GetRecordsAffected` chiamare per visualizzare il numero di record interessati.

Chiamare la funzione membro [GetRecordsAffected](#getrecordsaffected) dell'oggetto di database per determinare il numero di record interessati dalla chiamata più recente `Execute` . `GetRecordsAffected` Restituisce, ad esempio, informazioni sul numero di record eliminati, aggiornati o inseriti durante l'esecuzione di una query di azione. Il conteggio restituito non rifletterà le modifiche apportate alle tabelle correlate quando sono attivi gli aggiornamenti o le eliminazioni a cascata.

`Execute`non restituisce un recordset. Se `Execute` si utilizza in una query che seleziona record, MFC genera un'eccezione di `CDaoException`tipo. (Nessuna `ExecuteSQL` funzione membro è analoga a `CDatabase::ExecuteSQL`).

##  <a name="getconnect"></a>CDaoDatabase:: GetConnect

Chiamare questa funzione membro per recuperare la stringa di connessione utilizzata per connettere `CDaoDatabase` l'oggetto a un database ODBC o ISAM.

```
CString GetConnect();
```

### <a name="return-value"></a>Valore restituito

Stringa di connessione se [Open](#open) è stato chiamato correttamente in un'origine dati ODBC. in caso contrario, una stringa vuota. Per Microsoft Jet (. MDB), la stringa è sempre vuota a meno che non venga impostata per l'utilizzo con `dbSQLPassThrough` l'opzione utilizzata con la funzione membro [Execute](#execute) o utilizzata per l'apertura di un recordset.

### <a name="remarks"></a>Note

La stringa fornisce informazioni sull'origine di un database aperto o di un database utilizzato in una query pass-through. La stringa di connessione è costituita da un identificatore del tipo di database e da zero o più parametri separati da punti e virgola.

> [!NOTE]
>  L'utilizzo delle classi DAO MFC per connettersi a un'origine dati tramite ODBC è meno efficiente rispetto alla connessione tramite una tabella collegata.

> [!NOTE]
>  La stringa di connessione viene utilizzata per passare informazioni aggiuntive a ODBC e a determinati driver ISAM in base alle esigenze. Non viene usato per. Database MDB. Per le tabelle di base del database Microsoft Jet, la stringa di connessione è una stringa vuota ("") tranne quando viene usata per una query pass-through SQL, come descritto in valore restituito sopra.

Per una descrizione della modalità di creazione della stringa di connessione, vedere la funzione membro [Open](#open) . Una volta impostata la stringa di connessione nella `Open` chiamata, è possibile utilizzarla in un secondo momento per controllare l'impostazione per determinare il tipo, il percorso, l'ID utente, la password o l'origine dati ODBC del database.

##  <a name="getname"></a>CDaoDatabase:: GetName

Chiamare questa funzione membro per recuperare il nome del database attualmente aperto, ovvero il nome di un file di database esistente o il nome di un'origine dati ODBC registrata.

```
CString GetName();
```

### <a name="return-value"></a>Valore restituito

Percorso completo e nome file del database in caso di esito positivo; in caso contrario, un oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md)vuoto.

### <a name="remarks"></a>Note

Se la rete supporta la convenzione di denominazione uniforme (UNC), è anche possibile specificare un percorso di rete, ad esempio\\"\\\\\\\MYSERVER\\\MYSHARE\\\mydir \MYDB. MDB ". (Le barre rovesciate doppie sono obbligatorie nei valori letterali stringa\\perché "" C++ è il carattere di escape).

È possibile, ad esempio, che si desideri visualizzare questo nome in un'intestazione. Se si verifica un errore durante il recupero del nome, MFC genera un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md).

> [!NOTE]
>  Per ottenere prestazioni ottimali quando si accede a database esterni, è consigliabile alleghi le tabelle di database esterne a un database Microsoft Jet (. MDB) invece di connettersi direttamente all'origine dati.

Il tipo di database è indicato dal file o dalla directory a cui punta il percorso, come indicato di seguito:

|Il percorso punta a..|Tipo di database|
|--------------------------|-------------------|
|. MDB (file)|Microsoft Jet database (Microsoft Access)|
|Directory che contiene. File DBF|database dBASE|
|Directory che contiene. File XLS|Database di Microsoft Excel|
|Directory che contiene. File PDX|Database Paradox|
|Directory che contiene i file di database di testo formattati in modo appropriato|Database in formato testo|

Per i database ODBC, ad esempio SQL Server e Oracle, la stringa di connessione del database identifica un nome dell'origine dati (DSN) registrato da ODBC.

##  <a name="getquerydefcount"></a>CDaoDatabase:: GetQueryDefCount

Chiamare questa funzione membro per recuperare il numero di query definite nella raccolta QueryDefs del database.

```
short GetQueryDefCount();
```

### <a name="return-value"></a>Valore restituito

Numero di query definite nel database.

### <a name="remarks"></a>Note

`GetQueryDefCount`è utile se è necessario eseguire il ciclo di tutti QueryDefs nella raccolta QueryDefs. Per ottenere informazioni su una query specificata nella raccolta, vedere [GetQueryDefInfo](#getquerydefinfo).

##  <a name="getquerydefinfo"></a>CDaoDatabase:: GetQueryDefInfo

Chiamare questa funzione membro per ottenere vari tipi di informazioni su una query definita nel database.

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
Indice della query predefinita nella raccolta QueryDefs del database per la ricerca in base all'indice.

*querydefinfo*<br/>
Riferimento a un oggetto [CDaoQueryDefInfo](../../mfc/reference/cdaoquerydefinfo-structure.md) che restituisce le informazioni richieste.

*dwInfoOptions*<br/>
Opzioni che specificano le informazioni sul recordset da recuperare. Le opzioni disponibili sono elencate qui insieme alla cosa che determina la restituzione della funzione sul recordset:

- Nome AFX_DAO_PRIMARY_INFO (impostazione predefinita), tipo

- AFX_DAO_SECONDARY_INFO informazioni primarie più: Data di creazione, data dell'ultimo aggiornamento, restituzione di record, aggiornabile

- AFX_DAO_ALL_INFO informazioni primarie e secondarie più: SQL, Connect, ODBCTimeout

*lpszName*<br/>
Stringa che contiene il nome di una query definita nel database per la ricerca in base al nome.

### <a name="remarks"></a>Note

Vengono fornite due versioni della funzione in modo che sia possibile selezionare una query in base all'indice nella raccolta QueryDefs del database o in base al nome della query.

Per una descrizione delle informazioni restituite in *querydefinfo*, vedere la struttura [CDaoQueryDefInfo](../../mfc/reference/cdaoquerydefinfo-structure.md) . Questa struttura dispone di membri che corrispondono agli elementi delle informazioni sopra elencate nella descrizione di *dwInfoOptions*. Se si richiede un solo livello di informazioni, si ottengono anche i livelli di informazioni precedenti.

##  <a name="getquerytimeout"></a>CDaoDatabase:: GetQueryTimeout

Chiamare questa funzione membro per recuperare il numero corrente di secondi consentiti prima del timeout delle operazioni successive nel database connesso.

```
short GetQueryTimeout();
```

### <a name="return-value"></a>Valore restituito

Valore short integer contenente il valore di timeout in secondi.

### <a name="remarks"></a>Note

È possibile che si verifichi il timeout di un'operazione a causa di problemi di accesso alla rete, tempo di elaborazione delle query eccessivo e così via. Mentre l'impostazione è attiva, influisce su tutte le operazioni Open, Add New, Update ed Delete su tutti i recordset associati a questo `CDaoDatabase` oggetto. È possibile modificare l'impostazione di timeout corrente chiamando [setQueryTimeout](#setquerytimeout). La modifica del valore di timeout della query per un recordset dopo l'apertura non comporta la modifica del valore per il recordset. Ad esempio, le operazioni di [spostamento](../../mfc/reference/cdaorecordset-class.md#move) successive non utilizzano il nuovo valore. Il valore predefinito viene impostato inizialmente quando il motore di database viene inizializzato.

Il valore predefinito per i timeout delle query viene ricavato dal registro di sistema di Windows. Se non è presente alcuna impostazione del registro di sistema, il valore predefinito è 60 secondi. Non tutti i database supportano la possibilità di impostare un valore di timeout per la query. Se si imposta un valore di timeout della query pari a 0, non si verifica alcun timeout. e la comunicazione con il database potrebbe smettere di rispondere. Questo comportamento può essere utile durante lo sviluppo. Se la chiamata ha esito negativo, MFC genera un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md).

Per informazioni correlate, vedere l'argomento "proprietà QueryTimeout" nella Guida di DAO.

##  <a name="getrecordsaffected"></a>CDaoDatabase:: GetRecordsAffected

Chiamare questa funzione membro per determinare il numero di record interessati dalla chiamata più recente della funzione membro [Execute](#execute) .

```
long GetRecordsAffected();
```

### <a name="return-value"></a>Valore restituito

Valore long integer contenente il numero di record interessati.

### <a name="remarks"></a>Note

Il valore restituito include il numero di record eliminati, aggiornati o inseriti da una query di azione eseguita con `Execute`. Il conteggio restituito non rifletterà le modifiche apportate alle tabelle correlate quando sono attivi gli aggiornamenti o le eliminazioni a cascata.

Per informazioni correlate, vedere l'argomento "proprietà RecordsAffected" nella Guida di DAO.

##  <a name="getrelationcount"></a>CDaoDatabase:: GetRelationCount

Chiamare questa funzione membro per ottenere il numero di relazioni definite tra le tabelle nel database.

```
short GetRelationCount();
```

### <a name="return-value"></a>Valore restituito

Numero di relazioni definite tra le tabelle nel database.

### <a name="remarks"></a>Note

`GetRelationCount`è utile se è necessario scorrere in ciclo tutte le relazioni definite nella raccolta di relazioni del database. Per ottenere informazioni su una determinata relazione nella raccolta, vedere [GetRelationInfo](#getrelationinfo).

Per illustrare il concetto di una relazione, prendere in considerazione una tabella Suppliers e una tabella Products, che può avere una relazione uno-a-molti. In questa relazione, un fornitore può fornire più di un prodotto. Altre relazioni sono uno-a-uno e molti-a-molti.

##  <a name="getrelationinfo"></a>CDaoDatabase:: GetRelationInfo

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
Indice dell'oggetto relazione nella raccolta di relazioni del database per la ricerca in base all'indice.

*relinfo*<br/>
Riferimento a un oggetto [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) che restituisce le informazioni richieste.

*dwInfoOptions*<br/>
Opzioni che specificano le informazioni sulla relazione da recuperare. Le opzioni disponibili sono elencate qui insieme a ciò che determina la restituzione della funzione sulla relazione:

- AFX_DAO_PRIMARY_INFO (impostazione predefinita) nome, tabella, tabella esterna

- Attributi AFX_DAO_SECONDARY_INFO, informazioni sui campi

Le informazioni sul campo sono un oggetto [CDaoRelationFieldInfo](../../mfc/reference/cdaorelationfieldinfo-structure.md) che contiene i campi della tabella primaria per la relazione.

*lpszName*<br/>
Stringa che contiene il nome dell'oggetto Relation, per la ricerca in base al nome.

### <a name="remarks"></a>Note

Due versioni di questa funzione forniscono l'accesso in base all'indice o al nome. Per una descrizione delle informazioni restituite in *relinfo*, vedere la struttura [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) . Questa struttura dispone di membri che corrispondono agli elementi delle informazioni sopra elencate nella descrizione di *dwInfoOptions*. Se si richiedono informazioni a un livello, è anche possibile ottenere informazioni anche in qualsiasi livello precedente.

> [!NOTE]
>  Se si impostano gli attributi dell'oggetto relazione per attivare le`dbRelationUpdateCascades` operazioni `dbRelationDeleteCascades`Cascade (o), il motore di database di Microsoft Jet aggiorna o Elimina automaticamente i record in una o più tabelle quando vengono apportate modifiche alla chiave primaria correlata tabelle. Si supponga ad esempio di stabilire una relazione di eliminazione a catena tra una tabella Customers e una tabella Orders. Quando si eliminano i record dalla tabella Customers, vengono eliminati anche i record della tabella Orders correlati a tale cliente. Inoltre, se si stabiliscono relazioni di eliminazione a catena tra la tabella Orders e altre tabelle, i record di tali tabelle vengono eliminati automaticamente quando si eliminano i record dalla tabella Customers.

##  <a name="gettabledefcount"></a>CDaoDatabase:: GetTableDefCount

Chiamare questa funzione membro per recuperare il numero di tabelle definite nel database.

```
short GetTableDefCount();
```

### <a name="return-value"></a>Valore restituito

Numero di oggetti TableDef definiti nel database.

### <a name="remarks"></a>Note

`GetTableDefCount`è utile se è necessario eseguire il ciclo di tutti i TableDef nella raccolta di TableDef del database. Per ottenere informazioni su una determinata tabella nella raccolta, vedere [GetTableDefInfo](#gettabledefinfo).

##  <a name="gettabledefinfo"></a>CDaoDatabase:: GetTableDefInfo

Chiamare questa funzione membro per ottenere vari tipi di informazioni su una tabella definita nel database.

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
Indice dell'oggetto TableDef nella raccolta di TableDef del database per la ricerca in base all'indice.

*tabledefinfo*<br/>
Riferimento a un oggetto [CDaoTableDefInfo](../../mfc/reference/cdaotabledefinfo-structure.md) che restituisce le informazioni richieste.

*dwInfoOptions*<br/>
Opzioni che specificano le informazioni sulla tabella da recuperare. Le opzioni disponibili sono elencate qui insieme a ciò che determina la restituzione della funzione sulla relazione:

- AFX_DAO_PRIMARY_INFO (impostazione predefinita) nome, aggiornabile, attributi

- AFX_DAO_SECONDARY_INFO informazioni primarie più: Data di creazione, data dell'ultimo aggiornamento, nome della tabella di origine, connessione

- AFX_DAO_ALL_INFO informazioni primarie e secondarie più: Regola di convalida, testo di convalida, numero di record

*lpszName*<br/>
Nome dell'oggetto TableDef, per la ricerca in base al nome.

### <a name="remarks"></a>Note

Vengono fornite due versioni della funzione in modo che sia possibile selezionare una tabella in base all'indice nella raccolta di oggetti TableDef del database o in base al nome della tabella.

Per una descrizione delle informazioni restituite in *tabledefinfo*, vedere la struttura [CDaoTableDefInfo](../../mfc/reference/cdaotabledefinfo-structure.md) . Questa struttura dispone di membri che corrispondono agli elementi delle informazioni sopra elencate nella descrizione di *dwInfoOptions*. Se si richiedono informazioni a un livello, si ottengono anche informazioni per i livelli precedenti.

> [!NOTE]
>  L'opzione AFX_DAO_ALL_INFO fornisce informazioni che possono risultare lente da ottenere. In tal caso, il conteggio dei record nella tabella potrebbe richiedere molto tempo se sono presenti molti record.

##  <a name="getversion"></a>CDaoDatabase:: GetVersion

Chiamare questa funzione membro per determinare la versione del file di database Microsoft Jet.

```
CString GetVersion();
```

### <a name="return-value"></a>Valore restituito

[CString](../../atl-mfc-shared/reference/cstringt-class.md) che indica la versione del file di database associato all'oggetto.

### <a name="remarks"></a>Note

Il valore restituito rappresenta il numero di versione nel formato "Major. minor"; ad esempio, "3,0". Il numero di versione del prodotto (ad esempio, 3,0) è costituito dal numero di versione (3), da un punto e dal numero di versione (0). Le versioni a date sono 1,0, 1,1, 2,0 e 3,0.

Per informazioni correlate, vedere l'argomento "proprietà Version" nella Guida di DAO.

##  <a name="isopen"></a>CDaoDatabase:: Open

Chiamare questa funzione membro per determinare se l' `CDaoDatabase` oggetto è attualmente aperto in un database.

```
BOOL IsOpen() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se `CDaoDatabase` l'oggetto è attualmente aperto; in caso contrario, 0.

### <a name="remarks"></a>Note

##  <a name="m_pdaodatabase"></a>CDaoDatabase:: m_pDAODatabase

Contiene un puntatore all'interfaccia OLE per l'oggetto di database DAO sottostante l' `CDaoDatabase` oggetto.

### <a name="remarks"></a>Note

Utilizzare questo puntatore se è necessario accedere direttamente all'interfaccia DAO.

Per informazioni sulla chiamata diretta di DAO, vedere la [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).

##  <a name="m_pworkspace"></a>CDaoDatabase:: m_pWorkspace

Contiene un puntatore all'oggetto [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) che contiene l'oggetto di database.

### <a name="remarks"></a>Note

Utilizzare questo puntatore se è necessario accedere direttamente all'area di lavoro, ad esempio per ottenere i puntatori ad altri oggetti di database nella raccolta di database dell'area di lavoro.

##  <a name="open"></a>CDaoDatabase:: Open

È necessario chiamare questa funzione membro per inizializzare un oggetto `CDaoDatabase` appena costruito che rappresenta un database esistente.

```
virtual void Open(
    LPCTSTR lpszName,
    BOOL bExclusive = FALSE,
    BOOL bReadOnly = FALSE,
    LPCTSTR lpszConnect = _T(""));
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Espressione stringa che rappresenta il nome di un Microsoft Jet esistente (. MDB) file di database. Se il nome del file ha un'estensione, è obbligatorio. Se la rete supporta la convenzione di denominazione uniforme (UNC), è anche possibile specificare un percorso di rete, ad\\esempio\\"\\\\\\\MYSERVER\\\MYSHARE \mydir \MYDB. MDB ". (Le barre rovesciate doppie sono obbligatorie nei valori letterali stringa\\perché "" C++ è il carattere di escape).

Quando si usa *lpszName*, è necessario tenere presenti alcune considerazioni. Se:

- Fa riferimento a un database già aperto per l'accesso esclusivo da un altro utente, MFC genera un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md). Intercettare tale eccezione per informare l'utente che il database non è disponibile.

- È una stringa vuota ("") e *lpszConnect* è "ODBC;", viene visualizzata una finestra di dialogo in cui sono elencati tutti i nomi di origine dati ODBC registrati, in modo che l'utente possa selezionare un database. È consigliabile evitare connessioni dirette a origini dati ODBC. usare invece una tabella collegata.

- In caso contrario, non fa riferimento a un database esistente o a un nome di origine dati ODBC valido, `CDaoException`MFC genera un'eccezione di tipo.

> [!NOTE]
>  Per informazioni dettagliate sui codici di errore DAO, vedere DAOERR. File H. Per informazioni correlate, vedere l'argomento "errori di accesso ai dati intercettabili" nella Guida di DAO.

*bExclusive*<br/>
Valore booleano che è TRUE se il database deve essere aperto per l'accesso esclusivo (non condiviso) e FALSE se il database deve essere aperto per l'accesso condiviso. Se si omette questo argomento, il database viene aperto per l'accesso condiviso.

*bReadOnly*<br/>
Valore booleano che è TRUE se il database deve essere aperto per l'accesso in sola lettura e FALSE se il database deve essere aperto per l'accesso in lettura/scrittura. Se si omette questo argomento, il database viene aperto per l'accesso in lettura/scrittura. Tutti i recordset dipendenti ereditano questo attributo.

*lpszConnect*<br/>
Espressione stringa utilizzata per aprire il database. Questa stringa costituisce gli argomenti di connessione ODBC. Per fornire una stringa di origine, è necessario fornire gli argomenti esclusivi e di sola lettura. Se il database è un database Microsoft Jet (. MDB), questa stringa è vuota (""). La sintassi del valore predefinito, **_T**(""), fornisce la portabilità per Unicode e per le compilazioni ANSI dell'applicazione.

### <a name="remarks"></a>Note

`Open`associa il database all'oggetto DAO sottostante. Non è possibile utilizzare l'oggetto di database per costruire oggetti recordset, TableDef o QueryDef fino a quando non viene inizializzato. `Open`Accoda l'oggetto di database alla raccolta di database dell'area di lavoro associata.

Usare i parametri come indicato di seguito:

- Se si apre un Microsoft Jet (. MDB), usare il parametro *lpszName* e passare una stringa vuota per il parametro *lpszConnect* o passare una stringa della password nel formato "; PWD = password "Se il database è protetto da password (. MDB solo database).

- Se si apre un'origine dati ODBC, passare una stringa di connessione ODBC valida in *lpszConnect* e una stringa vuota in *lpszName*.

Per informazioni correlate, vedere l'argomento "metodo OpenDatabase" nella Guida di DAO.

> [!NOTE]
>  Per ottenere prestazioni ottimali quando si accede a database esterni, inclusi i database ISAM e le origini dati ODBC, è consigliabile aggiungere le tabelle di database esterne a un database del motore Jet Microsoft (. MDB) invece di connettersi direttamente all'origine dati.

Se, ad esempio, l'host DBMS non è disponibile, è possibile che venga eseguito il timeout di una connessione. Se il tentativo di connessione ha `Open` esito negativo, genera un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md).

Le osservazioni rimanenti si applicano solo ai database ODBC:

Se il database è un database ODBC e i parametri della `Open` chiamata non contengono informazioni sufficienti per eseguire la connessione, il driver ODBC apre una finestra di dialogo per ottenere le informazioni necessarie dall'utente. Quando si chiama `Open`, la stringa di connessione *lpszConnect*viene archiviata privatamente ed è disponibile chiamando la funzione membro [GetConnect](#getconnect) .

Se si desidera, è possibile aprire la finestra di dialogo prima di chiamare `Open` per ottenere informazioni dall'utente, ad esempio una password, quindi aggiungere tali informazioni alla stringa di connessione passata a. `Open` In alternativa, è possibile salvare la stringa di connessione passata, ad esempio nel registro di sistema di Windows, in modo che sia possibile riutilizzarla `Open` la volta `CDaoDatabase` successiva che l'applicazione chiama su un oggetto.

È anche possibile usare la stringa di connessione per più livelli di autorizzazione di accesso (ognuno per `CDaoDatabase` un oggetto diverso) o per trasferire altre informazioni specifiche del database.

##  <a name="setquerytimeout"></a>CDaoDatabase:: SetQueryTimeout

Chiamare questa funzione membro per eseguire l'override del numero di secondi predefinito da consentire prima del timeout delle successive operazioni sul database connesso.

```
void SetQueryTimeout(short nSeconds);
```

### <a name="parameters"></a>Parametri

*nSeconds*<br/>
Numero di secondi consentiti prima del timeout di un tentativo di query.

### <a name="remarks"></a>Note

È possibile che si verifichi il timeout di un'operazione a causa di problemi di accesso alla rete, tempo di elaborazione delle query eccessivo e così via. Chiamare `SetQueryTimeout` prima di aprire il recordset o prima di chiamare le funzioni membro [AddNew](../../mfc/reference/cdaorecordset-class.md#addnew), [Update](../../mfc/reference/cdaorecordset-class.md#update)o [Delete](../../mfc/reference/cdaorecordset-class.md#delete) del recordset se si desidera modificare il valore di timeout della query. L'impostazione ha effetto su tutte le `AddNew`chiamate `Update`successive, `Delete` , e [aperte](../../mfc/reference/cdaorecordset-class.md#open)a tutti i recordset associati `CDaoDatabase` a questo oggetto. La modifica del valore di timeout della query per un recordset dopo l'apertura non comporta la modifica del valore per il recordset. Ad esempio, le operazioni di [spostamento](../../mfc/reference/cdaorecordset-class.md#move) successive non utilizzano il nuovo valore.

Il valore predefinito per i timeout delle query è 60 secondi. Non tutti i database supportano la possibilità di impostare un valore di timeout per la query. Se si imposta un valore di timeout della query pari a 0, non si verifica alcun timeout. la comunicazione con il database potrebbe smettere di rispondere. Questo comportamento può essere utile durante lo sviluppo.

Per informazioni correlate, vedere l'argomento "proprietà QueryTimeout" nella Guida di DAO.

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md)<br/>
[Classe CDaoRecordset](../../mfc/reference/cdaorecordset-class.md)<br/>
[Classe CDaoTableDef](../../mfc/reference/cdaotabledef-class.md)<br/>
[Classe CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md)<br/>
[Classe CDatabase](../../mfc/reference/cdatabase-class.md)<br/>
[Classe CDaoException](../../mfc/reference/cdaoexception-class.md)
