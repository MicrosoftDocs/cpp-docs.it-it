---
title: CDaoWorkspace (classe)
ms.date: 11/04/2016
f1_keywords:
- CDaoWorkspace
- AFXDAO/CDaoWorkspace
- AFXDAO/CDaoWorkspace::CDaoWorkspace
- AFXDAO/CDaoWorkspace::Append
- AFXDAO/CDaoWorkspace::BeginTrans
- AFXDAO/CDaoWorkspace::Close
- AFXDAO/CDaoWorkspace::CommitTrans
- AFXDAO/CDaoWorkspace::CompactDatabase
- AFXDAO/CDaoWorkspace::Create
- AFXDAO/CDaoWorkspace::GetDatabaseCount
- AFXDAO/CDaoWorkspace::GetDatabaseInfo
- AFXDAO/CDaoWorkspace::GetIniPath
- AFXDAO/CDaoWorkspace::GetIsolateODBCTrans
- AFXDAO/CDaoWorkspace::GetLoginTimeout
- AFXDAO/CDaoWorkspace::GetName
- AFXDAO/CDaoWorkspace::GetUserName
- AFXDAO/CDaoWorkspace::GetVersion
- AFXDAO/CDaoWorkspace::GetWorkspaceCount
- AFXDAO/CDaoWorkspace::GetWorkspaceInfo
- AFXDAO/CDaoWorkspace::Idle
- AFXDAO/CDaoWorkspace::IsOpen
- AFXDAO/CDaoWorkspace::Open
- AFXDAO/CDaoWorkspace::RepairDatabase
- AFXDAO/CDaoWorkspace::Rollback
- AFXDAO/CDaoWorkspace::SetDefaultPassword
- AFXDAO/CDaoWorkspace::SetDefaultUser
- AFXDAO/CDaoWorkspace::SetIniPath
- AFXDAO/CDaoWorkspace::SetIsolateODBCTrans
- AFXDAO/CDaoWorkspace::SetLoginTimeout
- AFXDAO/CDaoWorkspace::m_pDAOWorkspace
helpviewer_keywords:
- CDaoWorkspace [MFC], CDaoWorkspace
- CDaoWorkspace [MFC], Append
- CDaoWorkspace [MFC], BeginTrans
- CDaoWorkspace [MFC], Close
- CDaoWorkspace [MFC], CommitTrans
- CDaoWorkspace [MFC], CompactDatabase
- CDaoWorkspace [MFC], Create
- CDaoWorkspace [MFC], GetDatabaseCount
- CDaoWorkspace [MFC], GetDatabaseInfo
- CDaoWorkspace [MFC], GetIniPath
- CDaoWorkspace [MFC], GetIsolateODBCTrans
- CDaoWorkspace [MFC], GetLoginTimeout
- CDaoWorkspace [MFC], GetName
- CDaoWorkspace [MFC], GetUserName
- CDaoWorkspace [MFC], GetVersion
- CDaoWorkspace [MFC], GetWorkspaceCount
- CDaoWorkspace [MFC], GetWorkspaceInfo
- CDaoWorkspace [MFC], Idle
- CDaoWorkspace [MFC], IsOpen
- CDaoWorkspace [MFC], Open
- CDaoWorkspace [MFC], RepairDatabase
- CDaoWorkspace [MFC], Rollback
- CDaoWorkspace [MFC], SetDefaultPassword
- CDaoWorkspace [MFC], SetDefaultUser
- CDaoWorkspace [MFC], SetIniPath
- CDaoWorkspace [MFC], SetIsolateODBCTrans
- CDaoWorkspace [MFC], SetLoginTimeout
- CDaoWorkspace [MFC], m_pDAOWorkspace
ms.assetid: 64f60de6-4df1-4d4a-a65b-c489b5257d52
ms.openlocfilehash: 52aaa4970ef483988194691eb6b870cbfe51f494
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81377120"
---
# <a name="cdaoworkspace-class"></a>CDaoWorkspace (classe)

Gestisce una sessione di database denominata e protetta da password, dall'accesso alla disconnessione, di un singolo utente. DAO è supportato tramite Office 2013. DAO 3.6 è la versione finale ed è considerata obsoleta.

## <a name="syntax"></a>Sintassi

```
class CDaoWorkspace : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoWorkspace::CDaoWorkspace](#cdaoworkspace)|Costruisce un oggetto dell'area di lavoro. Successivamente, chiamare `Create` `Open`o .|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoWorkspace::Accoda](#append)|Aggiunge un'area di lavoro appena creata all'insieme Workspaces del motore di database.|
|[CDaoWorkspace::BeginTrans](#begintrans)|Avvia una nuova transazione, che si applica a tutti i database aperti nell'area di lavoro.|
|[CDaoWorkspace::Close](#close)|Chiude l'area di lavoro e tutti gli oggetti in esso contenuti. Viene eseguito il rollback delle transazioni in sospeso.|
|[CDaoWorkspace::CommitTrans](#committrans)|Completa la transazione corrente e salva le modifiche.|
|[CDaoWorkspace::CompactDatabase](#compactdatabase)|Compatta (o duplica) un database.|
|[CDaoWorkspace::Creare](#create)|Crea un nuovo oggetto dell'area di lavoro DAO.|
|[CDaoWorkspace::GetDatabaseCount](#getdatabasecount)|Restituisce il numero di oggetti di database DAO nell'insieme Databases dell'area di lavoro.|
|[CDaoWorkspace::GetDatabaseInfo](#getdatabaseinfo)|Restituisce informazioni su un database DAO specificato definito nell'insieme Databases dell'area di lavoro.|
|[CDaoWorkspace::GetIniPath](#getinipath)|Restituisce il percorso delle impostazioni di inizializzazione del modulo di gestione di database Microsoft Jet nel Registro di sistema di Windows.|
|[CDaoWorkspace::GetIsolateODBCTrans](#getisolateodbctrans)|Restituisce un valore che indica se più transazioni che coinvolgono la stessa origine dati ODBC vengono isolate tramite connessioni multiple forzate all'origine dati.|
|[CDaoWorkspace::GetLoginTimeout](#getlogintimeout)|Restituisce il numero di secondi prima che si verifichi un errore quando l'utente tenta di accedere a un database ODBC.|
|[CDaoWorkspace::NomeGetName](#getname)|Restituisce il nome definito dall'utente per l'oggetto dell'area di lavoro.|
|[CDaoWorkspace::GetUserName](#getusername)|Restituisce il nome utente specificato al momento della creazione dell'area di lavoro. Questo è il nome del proprietario dell'area di lavoro.|
|[CDaoWorkspace::GetVersion](#getversion)|Restituisce una stringa che contiene la versione del motore di database associata all'area di lavoro.|
|[CDaoWorkspace::GetWorkspaceCount](#getworkspacecount)|Restituisce il numero di oggetti dell'area di lavoro DAO nell'insieme Workspaces del motore di database.|
|[CDaoWorkspace::GetWorkspaceInfo](#getworkspaceinfo)|Restituisce informazioni su un'area di lavoro DAO specificata definita nell'insieme Workspaces del motore di database.|
|[CDaoWorkspace::Idle](#idle)|Consente al motore di database di eseguire attività in background.|
|[CDaoWorkspace::IsOpen](#isopen)|Restituisce diverso da zero se l'area di lavoro è aperta.|
|[CDaoWorkspace::Open](#open)|Apre in modo esplicito un oggetto dell'area di lavoro associato all'area di lavoro predefinita di DAO.|
|[CDaoWorkspace::RepairDatabase](#repairdatabase)|Tenta di riparare un database danneggiato.|
|[CDaoWorkspace::Rollback](#rollback)|Termina la transazione corrente e non salva le modifiche.|
|[CDaoWorkspace::SetDefaultPassword](#setdefaultpassword)|Imposta la password utilizzata dal motore di database quando viene creato un oggetto dell'area di lavoro senza una password specifica.|
|[CDaoWorkspace::SetDefaultUser](#setdefaultuser)|Imposta il nome utente utilizzato dal motore di database quando viene creato un oggetto dell'area di lavoro senza un nome utente specifico.|
|[CDaoWorkspace::SetIniPath](#setinipath)|Imposta il percorso delle impostazioni di inizializzazione del modulo di gestione di database Microsoft Jet nel Registro di sistema di Windows.|
|[CDaoWorkspace::SetIsolateODBCTrans](#setisolateodbctrans)|Specifica se più transazioni che coinvolgono la stessa origine dati ODBC vengono isolate forzando più connessioni all'origine dati.|
|[CDaoWorkspace::SetLoginTimeout](#setlogintimeout)|Imposta il numero di secondi prima che si verifichi un errore quando l'utente tenta di accedere a un'origine dati ODBC.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoWorkspace::m_pDAOWorkspace](#m_pdaoworkspace)|Punta all'oggetto area di lavoro DAO sottostante.|

## <a name="remarks"></a>Osservazioni

Nella maggior parte dei casi, non saranno necessarie più aree di lavoro e non sarà necessario creare oggetti area di lavoro espliciti. Quando si aprono oggetti di database e recordset, questi utilizzano l'area di lavoro predefinita di DAO. Tuttavia, se necessario, è possibile eseguire più sessioni alla volta creando oggetti del workspace aggiuntivi. Ogni oggetto dell'area di lavoro può contenere più oggetti di database aperti nella propria raccolta Database.Each workspace object can contain multiple open database objects in its own Databases collection. In MFC, un'area di lavoro è principalmente un gestore delle transazioni, specificando un set di database aperti tutti nello stesso "spazio delle transazioni".

> [!NOTE]
> Le classi di database DAO sono distinte dalle classi di database MFC basate su ODBC (Open Database Connectivity). Tutti i nomi delle classi di database DAO hanno un prefisso "CDao". In generale, le classi MFC basate su DAO sono più in grado rispetto alle classi MFC basate su ODBC. Le classi basate su DAO accedono ai dati tramite il modulo di gestione di database Microsoft Jet, inclusi i driver ODBC. Supportano inoltre le operazioni DDL (Data Definition Language), ad esempio la creazione di database e l'aggiunta di tabelle e campi tramite le classi, senza dover chiamare direttamente DAO.

## <a name="capabilities"></a>Capabilities

La `CDaoWorkspace` classe fornisce quanto segue:

- Accesso esplicito, se necessario, a un'area di lavoro predefinita, creata inizializzando il motore di database. In genere si utilizza l'area di lavoro predefinita di DAO in modo implicito creando oggetti database e recordset.

- Spazio delle transazioni in cui le transazioni si applicano a tutti i database aperti nell'area di lavoro. È possibile creare aree di lavoro aggiuntive per gestire spazi di transazione separati.

- Un'interfaccia per molte proprietà del modulo di gestione di database Microsoft Jet sottostante (vedere le funzioni membro statiche). Apertura o creazione di un'area di lavoro o chiamata di una funzione membro statica prima dell'apertura o della creazione, inizializza il motore di database.

- Accesso all'insieme Workspaces del motore di database, in cui sono archiviate tutte le aree di lavoro attive che vi sono state aggiunte. È inoltre possibile creare e utilizzare le aree di lavoro senza aggiungerle alla raccolta.

## <a name="security"></a>Sicurezza

MFC non implementa le raccolte Users e Groups in DAO, utilizzate per il controllo di sicurezza. Se hai bisogno di questi aspetti di DAO, devi programmarli tu stesso tramite chiamate dirette alle interfacce DAO. Per informazioni, vedere la [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).

## <a name="usage"></a>Uso

È possibile `CDaoWorkspace` utilizzare la classe per:You can use class to:

- Aprire in modo esplicito l'area di lavoro predefinita.

   In genere l'utilizzo dell'area di lavoro predefinita è implicito, ovvero quando si aprono nuovi [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetti. Tuttavia, potrebbe essere necessario accedervi in modo esplicito, ad esempio per accedere alle proprietà del motore di database o all'insieme Workspaces. Vedere "Utilizzo implicito dell'area di lavoro predefinita" di seguito.

- Creare nuove aree di lavoro. Chiamare [Append](#append) se si desidera aggiungerli all'insieme Workspaces.

- Aprire un'area di lavoro esistente nell'insieme Aree di lavoro.

La creazione di una nuova area di lavoro che non esiste già nell'insieme Workspaces è descritta nella funzione membro [Create.](#create) Gli oggetti dell'area di lavoro non vengono mantenuti in alcun modo tra le sessioni del motore del datababase. Se l'applicazione collega MFC in modo statico, terminando l'applicazione viene annullato l'inizializzazione del motore di database. Se l'applicazione si collega con MFC in modo dinamico, il motore di database non viene inizializzato quando la DLL MFC viene scaricata.

L'apertura esplicita dell'area di lavoro predefinita o l'apertura di un'area di lavoro esistente nell'insieme Workspaces è descritta nella funzione membro [Open.](#open)

Terminare una sessione dell'area di lavoro chiudendo l'area di lavoro con la funzione membro [Close.](#close) `Close`chiude tutti i database non chiusi in precedenza, eseguendo il rollback di tutte le transazioni di cui non è stato eseguito il commit.

## <a name="transactions"></a>Transazioni

DAO gestisce le transazioni a livello di area di lavoro; Di conseguenza, le transazioni in un'area di lavoro con più database aperti si applicano a tutti i database. Ad esempio, se due database dispongono di aggiornamenti di cui non è stato eseguito il commit e si chiama [CommitTrans](#committrans), viene eseguito il commit di tutti gli aggiornamenti. Se si desidera limitare le transazioni a un singolo database, è necessario un oggetto dell'area di lavoro separato.

## <a name="implicit-use-of-the-default-workspace"></a>Utilizzo implicito dell'area di lavoro predefinita

MFC utilizza l'area di lavoro predefinita di DAO in modo implicito nelle seguenti circostanze:

- Se si crea `CDaoDatabase` un nuovo oggetto ma `CDaoWorkspace` non lo si fa tramite un oggetto esistente, MFC crea automaticamente un oggetto area di lavoro temporanea, che corrisponde all'area di lavoro predefinita di DAO. In questo caso per più database, tutti gli oggetti di database sono associati all'area di lavoro predefinita. È possibile accedere all'area `CDaoDatabase` di lavoro di un database tramite un membro dati.

- Analogamente, se `CDaoRecordset` si crea un oggetto `CDaoDatabase` senza fornire un puntatore a un oggetto, MFC crea un oggetto di database temporaneo e, per estensione, un oggetto dell'area di lavoro temporaneo. È possibile accedere al database di un recordset e, indirettamente, alla relativa area di lavoro, tramite un `CDaoRecordset` membro dati.

## <a name="other-operations"></a>Altre operazioni

Vengono inoltre fornite altre operazioni di database, ad esempio la riparazione di un database danneggiato o la compattazione di un database.

Per informazioni sulla chiamata diretta a DAO e sulla protezione DAO, vedere la [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CDaoWorkspace`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdao.h

## <a name="cdaoworkspaceappend"></a><a name="append"></a>CDaoWorkspace::Accoda

Chiamare questa funzione membro dopo aver chiamato [Create](#create).

```
virtual void Append();
```

### <a name="remarks"></a>Osservazioni

`Append`aggiunge un oggetto dell'area di lavoro appena creato all'insieme Workspaces del motore di database. Le aree di lavoro non vengono mantenute tra le sessioni del motore di database. vengono memorizzati solo in memoria, non su disco. Non è necessario aggiungere un'area di lavoro. in caso contrario, è comunque possibile utilizzarlo.

Un'area di lavoro accodata rimane nell'insieme Workspaces, in uno stato attivo e aperto, fino a quando non viene chiamata la relativa funzione membro [Close.](#close)

Per informazioni correlate, vedere l'argomento "Metodo Append" nella Guida in linea di DAO.

## <a name="cdaoworkspacebegintrans"></a><a name="begintrans"></a>CDaoWorkspace::BeginTrans

Chiamare questa funzione membro per avviare una transazione.

```
void BeginTrans();
```

### <a name="remarks"></a>Osservazioni

Dopo aver `BeginTrans`chiamato , gli aggiornamenti eseguiti per i dati o la struttura del database diventano effettivi quando si esegue il commit della transazione. Poiché l'area di lavoro definisce un singolo spazio di transazione, la transazione si applica a tutti i database aperti nell'area di lavoro. Esistono due modi per completare la transazione:

- Chiamare la funzione membro [CommitTrans](#committrans) per eseguire il commit della transazione e salvare le modifiche nell'origine dati.

- In alternativa, chiamare il [Rollback](#rollback) funzione membro per annullare la transazione.

Se si chiude l'oggetto dell'area di lavoro o un oggetto di database mentre è in sospeso una transazione, viene eseguito il rollback di tutte le transazioni in sospeso.

Se è necessario isolare le transazioni in un'origine dati ODBC da quelle in un'altra origine dati ODBC, vedere la funzione membro [SetIsolateODBCTrans.](#setisolateodbctrans)

## <a name="cdaoworkspacecdaoworkspace"></a><a name="cdaoworkspace"></a>CDaoWorkspace::CDaoWorkspace

Costruisce un oggetto `CDaoWorkspace`.

```
CDaoWorkspace();
```

### <a name="remarks"></a>Osservazioni

Dopo la costruzione dell'oggetto in C, sono disponibili due opzioni:

- Chiamare la funzione membro [Open](#open) dell'oggetto per aprire l'area di lavoro predefinita o per aprire un oggetto esistente nell'insieme Workspaces.

- In alternativa, chiamare la funzione membro [Create](#create) dell'oggetto per creare un nuovo oggetto dell'area di lavoro DAO. In questo modo viene avviata in modo `CDaoWorkspace` esplicito una nuova sessione dell'area di lavoro, a cui è possibile fare riferimento tramite l'oggetto. Dopo `Create`aver chiamato , è possibile chiamare [Append](#append) se si desidera aggiungere l'area di lavoro all'insieme Workspaces del motore di database.

Vedere Panoramica della classe per [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) per informazioni su quando è necessario creare un oggetto `CDaoWorkspace` in modo esplicito. In genere, si utilizzano le aree di lavoro create in modo implicito quando si apre un [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) oggetto senza specificare un'area di lavoro o quando si apre un [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto senza specificare un oggetto di database. Gli oggetti DAO MFC creati in questo modo utilizzano l'area di lavoro predefinita di DAO, che viene creata una sola volta e riutilizzata.

Per rilasciare un'area di lavoro e i relativi oggetti contenuti, chiamare la funzione membro [Close](#close) dell'oggetto dell'area di lavoro.

## <a name="cdaoworkspaceclose"></a><a name="close"></a>CDaoWorkspace::Close

Chiamare questa funzione membro per chiudere l'oggetto dell'area di lavoro.

```
virtual void Close();
```

### <a name="remarks"></a>Osservazioni

La chiusura di un oggetto dell'area di lavoro aperto rilascia l'oggetto DAO sottostante e, se l'area di lavoro è un membro dell'insieme Workspaces, lo rimuove dalla raccolta. Chiamare `Close` è una buona pratica di programmazione.

> [!CAUTION]
> La chiusura di un oggetto dell'area di lavoro consente di chiudere tutti i database aperti nell'area di lavoro. In questo modo tutti i recordset aperti nei database vengono chiusi e le modifiche o gli aggiornamenti in sospeso vengono sottoposti a rollback. Per informazioni correlate, vedere le funzioni membro [CDaoDatabase::Close](../../mfc/reference/cdaodatabase-class.md#close), [CDaoRecordset::Close](../../mfc/reference/cdaorecordset-class.md#close), [CDaoTableDef::Close](../../mfc/reference/cdaotabledef-class.md#close)e [CDaoQueryDef::Close](../../mfc/reference/cdaoquerydef-class.md#close) .

Gli oggetti dell'area di lavoro non sono permanenti; esistono solo mentre esistono riferimenti ad essi. Ciò significa che al termine della sessione del motore di database, l'area di lavoro e la relativa raccolta di database non vengono mantenute. È necessario ricrearli per la sessione successiva aprendo nuovamente l'area di lavoro e i database.

Per informazioni correlate, vedere l'argomento "Metodo Close" nella Guida in linea di DAO.

## <a name="cdaoworkspacecommittrans"></a><a name="committrans"></a>CDaoWorkspace::CommitTrans

Chiamare questa funzione membro per eseguire il commit di una transazione, ovvero salvare un gruppo di modifiche e aggiornamenti in uno o più database nell'area di lavoro.

```
void CommitTrans();
```

### <a name="remarks"></a>Osservazioni

Una transazione è costituita da una serie di modifiche ai dati del database o alla relativa struttura, a partire da una chiamata a [BeginTrans](#begintrans). Al termine della transazione, eseguirne il commit o eseguirne il rollback (annullare le modifiche) con [Rollback](#rollback). Per impostazione predefinita, senza transazioni, viene eseguito immediatamente il commit degli aggiornamenti ai record. La `BeginTrans` chiamata determina un ritardo dell'impegno degli aggiornamenti fino a quando non si chiama `CommitTrans`.

> [!CAUTION]
> All'interno di un'area di lavoro, le transazioni sono sempre globali per l'area di lavoro e non sono limitate a un solo database o recordset. Se si eseguono operazioni su più database o `CommitTrans` recordset all'interno `Rollback` di una transazione dell'area di lavoro, viene eseguito il commit di tutti gli aggiornamenti in sospeso e vengono ripristinate tutte le operazioni su tali database e recordset.

Quando si chiude un database o un'area di lavoro con transazioni in sospeso, viene eseguito il rollback delle transazioni.

> [!NOTE]
> Non si tratta di un meccanismo di commit in due fasi. Se il commit di un aggiornamento non riesce, altri continueranno a eseguirne il commit.

## <a name="cdaoworkspacecompactdatabase"></a><a name="compactdatabase"></a>CDaoWorkspace::CompactDatabase

Chiamare questa funzione membro per compattare un Microsoft Jet specificato (. MDB).

```
static void PASCAL CompactDatabase(
    LPCTSTR lpszSrcName,
    LPCTSTR lpszDestName,
    LPCTSTR lpszLocale = dbLangGeneral,
    int nOptions = 0);

static void PASCAL CompactDatabase(
    LPCTSTR lpszSrcName,
    LPCTSTR lpszDestName,
    LPCTSTR lpszLocale,
    int nOptions,
    LPCTSTR lpszPassword);
```

### <a name="parameters"></a>Parametri

*lpszSrcName*<br/>
Nome di un database chiuso esistente. Può essere un percorso completo e un\\nome file, ad esempio "C: MDB". Se il nome del file ha un'estensione, è necessario specificarla. Se la rete supporta la convenzione unC (Uniform Naming Convention),\\\\\\è anche\\possibile\\specificare un percorso di rete, ad esempio " .\\ MDB". (Nelle stringhe del percorso sono necessarie\\doppie barre rovesciate perché " " è il carattere di escape di C.)

*lpszDestName*<br/>
Il percorso completo del database compattato che si sta creando. È inoltre possibile specificare un percorso di rete come con *lpszSrcName*. Non è possibile utilizzare l'argomento *lpszDestName* per specificare lo stesso file di database di *lpszSrcName*.

*lpszPassword*<br/>
Una password, utilizzata quando si desidera compattare un database protetto da password. Si noti che se `CompactDatabase` si utilizza la versione di che accetta una password, è necessario fornire tutti i parametri. Inoltre, poiché si tratta di un parametro connect, richiede una formattazione speciale, come indicato di seguito: ; PWD *lpszPassword*. Ad esempio: ; PWD : "Felice". (È necessario il punto e virgola iniziale.)

*lpszLocale*<br/>
Espressione stringa utilizzata per specificare l'ordine di confronto per la creazione di *lpszDestName*. Se si omette questo argomento accettando `dbLangGeneral` il valore predefinito di (vedere di seguito), le impostazioni locali del nuovo database sono le stesse del database precedente. I valori possibili sono:

- `dbLangGeneral`Inglese, tedesco, francese, portoghese, italiano e spagnolo moderno

- `dbLangArabic`Arabo

- `dbLangCyrillic`Russo

- `dbLangCzech`Ceco

- `dbLangDutch`Olandese

- `dbLangGreek`Greco

- `dbLangHebrew`Ebraico

- `dbLangHungarian`Ungherese

- `dbLangIcelandic`Islandese

- `dbLangNordic`Lingue nord-nord (solo motore di database Microsoft Jet versione 1.0)

- `dbLangNorwdan`Norvegese e danese

- `dbLangPolish`Polacco

- `dbLangSpanish`Spagnolo tradizionale

- `dbLangSwedfin`Svedese e Finlandese

- `dbLangTurkish`Turco

*nOpzioni*<br/>
Indica una o più opzioni per il database di destinazione, *lpszDestName*. Se si omette questo argomento accettando il valore predefinito, *l'lpszDestName* avrà la stessa crittografia e la stessa versione di *lpszSrcName*. È possibile `dbEncrypt` combinare `dbDecrypt` l'opzione o con una delle opzioni di versione utilizzando l'operatore OR bit per bit. I valori possibili, che specificano un formato di database, non una versione del motore di database, sono:Possible values, which specify a database format, not a database engine version, are:

- `dbEncrypt`Crittografare il database durante la compattazione.

- `dbDecrypt`Decrittografare il database durante la compattazione.

- `dbVersion10`Creare un database che utilizza il modulo di gestione di database Microsoft Jet versione 1.0 durante la compattazione.

- `dbVersion11`Creare un database che utilizza il modulo di gestione di database Microsoft Jet versione 1.1 durante la compattazione.

- `dbVersion20`Creare un database che utilizza il modulo di gestione di database Microsoft Jet versione 2.0 durante la compattazione.

- `dbVersion30`Creare un database che utilizza il modulo di gestione di database Microsoft Jet versione 3.0 durante la compattazione.

È possibile `dbEncrypt` `dbDecrypt` utilizzare o nell'argomento options per specificare se crittografare o decrittografare il database durante la compattazione. Se si omette una costante di `dbDecrypt` crittografia `dbEncrypt`o se si includono entrambi e , *lpszDestName* avrà la stessa crittografia di *lpszSrcName*. È possibile utilizzare una delle costanti di versione nell'argomento options per specificare la versione del formato dati per il database compattato. Questa costante influisce solo sulla versione del formato dati di *lpszDestName*. È possibile specificare una sola costante di versione. Se si omette una costante di versione, *lpszDestName* avrà la stessa versione di *lpszSrcName*. È possibile compattare *lpszDestName* solo a una versione uguale o successiva a quella di *lpszSrcName*.

> [!CAUTION]
> Se un database non è crittografato, è possibile, anche se si implementa la sicurezza utente/password, leggere direttamente il file binario del disco che costituisce il database.

### <a name="remarks"></a>Osservazioni

Quando si modificano i dati in un database, il file di database può diventare frammentato e utilizzare più spazio su disco del necessario. Periodicamente, è necessario compattare il database per deframmentare il file di database. Il database compattato è in genere più piccolo. È inoltre possibile scegliere di modificare l'ordine di confronto, la crittografia o la versione del formato dati durante la copia e la compattazione del database.

> [!CAUTION]
> La `CompactDatabase` funzione membro non convertirà correttamente un database di Microsoft Access completo da una versione a un'altra. Viene convertito solo il formato dati. Gli oggetti definiti da Microsoft Access, ad esempio maschere e report, non vengono convertiti. Tuttavia, i dati vengono convertiti correttamente.

> [!TIP]
> È inoltre `CompactDatabase` possibile utilizzare per copiare un file di database.

Per ulteriori informazioni sulla compattazione dei database, vedere l'argomento "Metodo CompactDatabase" nella Guida in linea di DAO.

## <a name="cdaoworkspacecreate"></a><a name="create"></a>CDaoWorkspace::Creare

Chiamare questa funzione membro per creare un nuovo oggetto `CDaoWorkspace` area di lavoro DAO e associarlo all'oggetto MFC.

```
virtual void Create(
    LPCTSTR lpszName,
    LPCTSTR lpszUserName,
    LPCTSTR lpszPassword);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Una stringa con un massimo di 14 caratteri che denomina in modo univoco il nuovo oggetto dell'area di lavoro. È necessario fornire un nome. Per informazioni correlate, vedere l'argomento "Proprietà Name" nella Guida in linea di DAO.

*lpszUserName*<br/>
Nome utente del proprietario dell'area di lavoro. Per i requisiti, vedere il parametro *lpszDefaultUser* per la funzione membro [SetDefaultUser](#setdefaultuser) . Per informazioni correlate, vedere l'argomento "Proprietà UserName" nella Guida in linea di DAO.

*lpszPassword*<br/>
Password per il nuovo oggetto dell'area di lavoro. Una password può avere una lunghezza massima di 14 caratteri e può contenere qualsiasi carattere ad eccezione di ASCII 0 (null). Per le password viene fatta distinzione tra maiuscole e minuscole. Per informazioni correlate, vedere l'argomento "Proprietà Password" nella Guida in linea di DAO.

### <a name="remarks"></a>Osservazioni

Il processo di creazione globale è:

1. Costruire un [oggetto CDaoWorkspace.](#cdaoworkspace)

1. Chiamare la funzione `Create` membro dell'oggetto per creare l'area di lavoro DAO sottostante. È necessario specificare un nome per l'area di lavoro.

1. Facoltativamente, chiamare [Append](#append) se si desidera aggiungere l'area di lavoro all'insieme Workspaces del motore di database. È possibile utilizzare l'area di lavoro senza aggiungerla.

Dopo `Create` la chiamata, l'oggetto dell'area di lavoro si trova in uno stato aperto, pronto per l'uso. Non si `Open` chiama `Create`dopo . Non si `Create` chiama se l'area di lavoro esiste già nell'insieme Workspaces. `Create`inizializza il motore di database se non è già stato inizializzato per l'applicazione.

## <a name="cdaoworkspacegetdatabasecount"></a><a name="getdatabasecount"></a>CDaoWorkspace::GetDatabaseCount

Chiamare questa funzione membro per recuperare il numero di oggetti di database DAO nell'insieme Databases dell'area di lavoro, ovvero il numero di database aperti nell'area di lavoro.

```
short GetDatabaseCount();
```

### <a name="return-value"></a>Valore restituito

Numero di database aperti nell'area di lavoro.

### <a name="remarks"></a>Osservazioni

`GetDatabaseCount`è utile se è necessario scorrere in ciclo tutti i database definiti nella raccolta Database dell'area di lavoro. Per ottenere informazioni su un determinato database nell'insieme, vedere [GetDatabaseInfo](#getdatabaseinfo). L'utilizzo tipico `GetDatabaseCount` consiste nel chiamare il numero di database aperti, quindi `GetDatabaseInfo`utilizzare tale numero come indice del ciclo per le chiamate ripetute a .

## <a name="cdaoworkspacegetdatabaseinfo"></a><a name="getdatabaseinfo"></a>CDaoWorkspace::GetDatabaseInfo

Chiamare questa funzione membro per ottenere vari tipi di informazioni su un database aperto nell'area di lavoro.

```
void GetDatabaseInfo(
    int nIndex,
    CDaoDatabaseInfo& dbinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);

void GetDatabaseInfo(
    LPCTSTR lpszName,
    CDaoDatabaseInfo& dbinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base zero dell'oggetto di database nell'insieme Databases dell'area di lavoro, per la ricerca in base all'indice.

*dbinfo*<br/>
Riferimento a un [cDaoDatabaseInfo](../../mfc/reference/cdaodatabaseinfo-structure.md) oggetto che restituisce le informazioni richieste.

*dwInfoOptions*<br/>
Opzioni che specificano le informazioni sul database da recuperare. Le opzioni disponibili sono elencate qui insieme a ciò che causano la restituzione della funzione:

- AFX_DAO_PRIMARY_INFO (predefinito) Nome, Aggiornabile, Transazioni

- AFX_DAO_SECONDARY_INFO informazioni principali più: Versione, Ordine di confronto, Timeout query

- AFX_DAO_ALL_INFO informazioni primarie e secondarie più: Connetti

*lpszName*<br/>
Nome dell'oggetto di database, per la ricerca in base al nome. Il nome è una stringa con un massimo di 14 caratteri che denomina in modo univoco il nuovo oggetto dell'area di lavoro.

### <a name="remarks"></a>Osservazioni

Una versione della funzione consente di cercare un database in base all'indice. L'altra versione consente di cercare un database in base al nome.

Per una descrizione delle informazioni restituite in *dbinfo*, vedere la struttura [CDaoDatabaseInfo](../../mfc/reference/cdaodatabaseinfo-structure.md) . Questa struttura dispone di membri che corrispondono agli elementi di informazioni elencati in precedenza nella descrizione di *dwInfoOptions*. Quando richiedi informazioni a un livello, ottieni informazioni anche per tutti i livelli precedenti.

## <a name="cdaoworkspacegetinipath"></a><a name="getinipath"></a>CDaoWorkspace::GetIniPath

Chiamare questa funzione membro per ottenere il percorso delle impostazioni di inizializzazione del modulo di gestione di database Microsoft Jet nel Registro di sistema di Windows.

```
static CString PASCAL GetIniPath();
```

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) contenente il percorso del Registro di sistema.

### <a name="remarks"></a>Osservazioni

È possibile utilizzare il percorso per ottenere informazioni sulle impostazioni per il motore di database. Le informazioni restituite sono in realtà il nome di una sottochiave del Registro di sistema.

Per informazioni correlate, vedere gli argomenti "Proprietà IniPath" e "Personalizzazione delle impostazioni del Registro di sistema di Windows per l'accesso ai dati" nella Guida in linea di DAO.

## <a name="cdaoworkspacegetisolateodbctrans"></a><a name="getisolateodbctrans"></a>CDaoWorkspace::GetIsolateODBCTrans

Chiamare questa funzione membro per ottenere il valore corrente della proprietà DAO IsolateODBCTrans per l'area di lavoro.

```
BOOL GetIsolateODBCTrans();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se le transazioni ODBC sono isolate; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

In alcune situazioni, potrebbe essere necessario disporre di più transazioni simultanee in sospeso nello stesso database ODBC. A tale scopo, è necessario aprire un'area di lavoro separata per ogni transazione. Tenere presente che, anche se ogni area di lavoro può avere la propria connessione ODBC al database, questo rallenta le prestazioni del sistema. Poiché l'isolamento delle transazioni non è normalmente necessario, le connessioni ODBC da più oggetti dell'area di lavoro aperti dallo stesso utente vengono condivise per impostazione predefinita.

Alcuni server ODBC, ad esempio Microsoft SQL Server, non consentono transazioni simultanee su una singola connessione. Se è necessario disporre di più di una transazione alla volta in sospeso su tale database, impostare il IsolateODBCTrans proprietà TRUE in ogni area di lavoro non appena lo si apre. In questo modo viene forzata una connessione ODBC separata per ogni area di lavoro.

Per informazioni correlate, vedere l'argomento "Proprietà IsolateODBCTrans" nella Guida in linea di DAO.

## <a name="cdaoworkspacegetlogintimeout"></a><a name="getlogintimeout"></a>CDaoWorkspace::GetLoginTimeout

Chiamare questa funzione membro per ottenere il valore corrente della proprietà LoginTimeout DAO per l'area di lavoro.

```
static short PASCAL GetLoginTimeout();
```

### <a name="return-value"></a>Valore restituito

Numero di secondi prima che si verifichi un errore quando si tenta di accedere a un database ODBC.

### <a name="remarks"></a>Osservazioni

Questo valore rappresenta il numero di secondi prima che si verifichi un errore quando si tenta di accedere a un database ODBC. L'impostazione LoginTimeout predefinita è 20 secondi. Quando LoginTimeout è impostato su 0, non si verifica alcun timeout e la comunicazione con l'origine dati potrebbe bloccarsi.

Quando si tenta di accedere a un database ODBC, ad esempio Microsoft SQL Server, la connessione potrebbe non riuscire a causa di errori di rete o perché il server non è in esecuzione. Anziché attendere i 20 secondi predefiniti per la connessione, è possibile specificare il tempo di attesa del motore di database prima che venga generato un errore. L'accesso al server avviene in modo implicito come parte di una serie di eventi diversi, ad esempio l'esecuzione di una query in un database del server esterno.

Per informazioni correlate, vedere l'argomento "Proprietà LoginTimeout" nella Guida in linea di DAO.

## <a name="cdaoworkspacegetname"></a><a name="getname"></a>CDaoWorkspace::NomeGetName

Chiamare questa funzione membro per ottenere il nome definito dall'utente dell'oggetto area di lavoro DAO sottostante l'oggetto. `CDaoWorkspace`

```
CString GetName();
```

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) contenente il nome definito dall'utente dell'oggetto dell'area di lavoro DAO.

### <a name="remarks"></a>Osservazioni

Il nome è utile per accedere all'oggetto dell'area di lavoro DAO nell'insieme Workspaces del motore di database in base al nome.

Per informazioni correlate, vedere l'argomento "Proprietà Name" nella Guida in linea di DAO.

## <a name="cdaoworkspacegetusername"></a><a name="getusername"></a>CDaoWorkspace::GetUserName

Chiamare questa funzione membro per ottenere il nome del proprietario dell'area di lavoro.

```
CString GetUserName();
```

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che rappresenta il proprietario dell'oggetto dell'area di lavoro.

### <a name="remarks"></a>Osservazioni

Per ottenere o impostare le autorizzazioni per il proprietario dell'area di lavoro, chiamare direttamente DAO per controllare l'impostazione della proprietà Autorizzazioni; determina le autorizzazioni di cui dispone l'utente. Per utilizzare le autorizzazioni, è necessario un sistema. MDA.

Per informazioni sulla chiamata diretta a DAO, vedere la [nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md). Per informazioni correlate, vedere l'argomento "Proprietà UserName" nella Guida in linea di DAO.

## <a name="cdaoworkspacegetversion"></a><a name="getversion"></a>CDaoWorkspace::GetVersion

Chiamare questa funzione membro per determinare la versione del modulo di gestione di database Microsoft Jet in uso.

```
static CString PASCAL GetVersion();
```

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che indica la versione del motore di database associato all'oggetto.

### <a name="remarks"></a>Osservazioni

Il valore restituito rappresenta il numero di versione nel formato "principale.minore"; ad esempio, "3.0". Il numero di versione del prodotto (ad esempio, 3.0) è costituito dal numero di versione (3), da un punto e dal numero di versione (0).

Per informazioni correlate, vedere l'argomento "Proprietà Version" nella Guida in linea di DAO.

## <a name="cdaoworkspacegetworkspacecount"></a><a name="getworkspacecount"></a>CDaoWorkspace::GetWorkspaceCount

Chiamare questa funzione membro per recuperare il numero di oggetti dell'area di lavoro DAO nell'insieme Workspaces del motore di database.

```
short GetWorkspaceCount();
```

### <a name="return-value"></a>Valore restituito

Numero di aree di lavoro aperte nell'insieme Aree di lavoro.

### <a name="remarks"></a>Osservazioni

Questo conteggio non include le aree di lavoro aperte non aggiunte alla raccolta. `GetWorkspaceCount`è utile se è necessario scorrere in ciclo tutte le aree di lavoro definite nell'insieme Workspaces. Per ottenere informazioni su una determinata area di lavoro nell'insieme, vedere [GetWorkspaceInfo](#getworkspaceinfo). L'utilizzo tipico `GetWorkspaceCount` consiste nel chiamare il numero di aree di lavoro `GetWorkspaceInfo`aperte, quindi utilizzare tale numero come indice del ciclo per le chiamate ripetute a .

## <a name="cdaoworkspacegetworkspaceinfo"></a><a name="getworkspaceinfo"></a>CDaoWorkspace::Informazionisulli

Chiamare questa funzione membro per ottenere vari tipi di informazioni su un'area di lavoro aperta nella sessione.

```
void GetWorkspaceInfo(
    int nIndex,
    CDaoWorkspaceInfo& wkspcinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);

void GetWorkspaceInfo(
    LPCTSTR lpszName,
    CDaoWorkspaceInfo& wkspcinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base zero dell'oggetto di database nell'insieme Workspaces, per la ricerca in base all'indice.

*wkspcinfo*<br/>
Riferimento a un oggetto [CDaoWorkspaceInfo](../../mfc/reference/cdaoworkspaceinfo-structure.md) che restituisce le informazioni richieste.

*dwInfoOptions*<br/>
Opzioni che specificano le informazioni sull'area di lavoro da recuperare. Le opzioni disponibili sono elencate qui insieme a ciò che causano la restituzione della funzione:

- AFX_DAO_PRIMARY_INFO (predefinito) Nome

- AFX_DAO_SECONDARY_INFO informazioni principali più: Nome utente

- AFX_DAO_ALL_INFO informazioni primarie e secondarie più: isolare ODBCTrans

*lpszName*<br/>
Nome dell'oggetto dell'area di lavoro per la ricerca in base al nome. Il nome è una stringa con un massimo di 14 caratteri che denomina in modo univoco il nuovo oggetto dell'area di lavoro.

### <a name="remarks"></a>Osservazioni

Per una descrizione delle informazioni restituite in *wkspcinfo*, vedere la struttura [CDaoWorkspaceInfo](../../mfc/reference/cdaoworkspaceinfo-structure.md) . Questa struttura dispone di membri che corrispondono agli elementi di informazioni elencati in precedenza nella descrizione di *dwInfoOptions*. Quando richiedi informazioni a un livello, ottieni informazioni anche per i livelli precedenti.

## <a name="cdaoworkspaceidle"></a><a name="idle"></a>CDaoWorkspace::Idle

Chiamata `Idle` per fornire al motore di database la possibilità di eseguire attività in background che potrebbero non essere aggiornate a causa dell'elaborazione intensa dei dati.

```
static void PASCAL Idle(int nAction = dbFreeLocks);
```

### <a name="parameters"></a>Parametri

*nAction*<br/>
Azione da eseguire durante l'elaborazione inattiva. Attualmente l'unica `dbFreeLocks`azione valida è .

### <a name="remarks"></a>Osservazioni

Ciò è spesso vero in ambienti multiutente e multitasking in cui non è stato sufficiente il tempo di elaborazione in background per mantenere aggiornati tutti i record di un recordset.

> [!NOTE]
> La `Idle` chiamata non è necessaria con i database creati con la versione 3.0 del modulo di gestione di database Microsoft Jet. Utilizzare `Idle` solo per i database creati con versioni precedenti.

In genere, i blocchi di lettura vengono rimossi e i dati negli oggetti recordset di tipo dynaset locale vengono aggiornati solo quando non si verificano altre azioni (inclusi i movimenti del mouse). Se si chiama `Idle`periodicamente , si fornisce al motore di database il tempo necessario per recuperare il ritardo sulle attività di elaborazione in background rilasciando blocchi di lettura non necessari. La specifica `dbFreeLocks` della costante come argomento ritarda l'elaborazione fino al rilascio di tutti i blocchi di lettura.

Questa funzione membro non è necessaria in ambienti a utente singolo a meno che non siano in esecuzione più istanze di un'applicazione. La `Idle` funzione membro può migliorare le prestazioni in un ambiente multiutente perché impone al motore di database di scaricare i dati su disco, rilasciando blocchi sulla memoria. È inoltre possibile rilasciare i blocchi di lettura rendendo le operazioni parte di una transazione.

Per informazioni correlate, vedere l'argomento "Metodo Idle" nella Guida in linea di DAO.

## <a name="cdaoworkspaceisopen"></a><a name="isopen"></a>CDaoWorkspace::IsOpen

Chiamare questa funzione membro `CDaoWorkspace` per determinare se l'oggetto è aperto, ovvero se l'oggetto MFC è stato inizializzato da una chiamata a [Open](#open) o una chiamata a [Create](#create).

```
BOOL IsOpen() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto dell'area di lavoro è aperto; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

È possibile chiamare una qualsiasi delle funzioni membro di un'area di lavoro che si trova in uno stato aperto.

## <a name="cdaoworkspacem_pdaoworkspace"></a><a name="m_pdaoworkspace"></a>CDaoWorkspace::m_pDAOWorkspace

Puntatore all'oggetto area di lavoro DAO sottostante.

### <a name="remarks"></a>Osservazioni

Utilizzare questo membro dati se è necessario l'accesso diretto all'oggetto DAO sottostante. È possibile chiamare le interfacce dell'oggetto DAO tramite questo puntatore.

Per informazioni sull'accesso diretto agli oggetti DAO, vedere la [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).

## <a name="cdaoworkspaceopen"></a><a name="open"></a>CDaoWorkspace::Open

Apre in modo esplicito un oggetto dell'area di lavoro associato all'area di lavoro predefinita di DAO.

```
virtual void Open(LPCTSTR lpszName = NULL);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Nome dell'oggetto area di lavoro DAO da aprire, ovvero una stringa con un massimo di 14 caratteri che denomina in modo univoco l'area di lavoro. Accettare il valore predefinito NULL per aprire in modo esplicito l'area di lavoro predefinita. Per i requisiti di denominazione, vedere il parametro *lpszName* per [Create](#create). Per informazioni correlate, vedere l'argomento "Proprietà Name" nella Guida in linea di DAO.

### <a name="remarks"></a>Osservazioni

Dopo aver `CDaoWorkspace` creato un oggetto, chiamare questa funzione membro per eseguire una delle operazioni seguenti:After constructing a object, call this member function to do one of the following:

- Aprire in modo esplicito l'area di lavoro predefinita. Passare NULL per *lpszName*.

- Aprire un `CDaoWorkspace` oggetto esistente, un membro della raccolta Aree di lavoro, in base al nome. Passare un nome valido per un oggetto dell'area di lavoro esistente.

`Open`inserisce l'oggetto dell'area di lavoro in uno stato aperto e inizializza anche il motore di database se non è già stato inizializzato per l'applicazione.

Anche `CDaoWorkspace` se molte funzioni membro possono essere chiamate solo dopo l'apertura dell'area di lavoro, le seguenti funzioni membro, `Open`che operano sul motore di database, sono disponibili dopo la costruzione dell'oggetto c, ma prima di una chiamata a :

||||
|-|-|-|
|[Crea](#create)|[GetVersion](#getversion)|[SetDefaultUser](#setdefaultuser)|
|[GetIniPath](#getinipath)|[Idle](#idle)|[SetIniPath](#setinipath)|
|[GetLoginTimeout](#getlogintimeout)|[SetDefaultPassword](#setdefaultpassword)|[ImpostaAccessoTimeout](#setlogintimeout)|

## <a name="cdaoworkspacerepairdatabase"></a><a name="repairdatabase"></a>CDaoWorkspace::RepairDatabase

Chiamare questa funzione membro se è necessario tentare di ripristinare un database danneggiato che accede al modulo di gestione di database Microsoft Jet.

```
static void PASCAL RepairDatabase(LPCTSTR lpszName);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Il percorso e il nome del file di database di un modulo di gestione di sistema Microsoft Jet esistente. Se si omettere il percorso, viene eseguita la ricerca solo nella directory corrente. Se il sistema supporta la convenzione UNC (Uniform Naming Convention), è\\\\\\anche\\possibile specificare un percorso di rete, ad esempio: " .\\\\ MDB". (Sono necessarie doppie barre rovesciate nella stringa di percorso, perché "\\" è il carattere di escape di C.

### <a name="remarks"></a>Osservazioni

È necessario chiudere il database specificato da *lpszName* prima di ripristinarlo. In un ambiente multiutente, gli altri utenti non possono avere *lpszName* aperto durante la riparazione. Se *lpszName* non è chiuso o non è disponibile per l'utilizzo esclusivo, si verifica un errore.

Questa funzione membro tenta di ripristinare un database che è stato contrassegnato come possibilmente danneggiato da un'operazione di scrittura incompleta. Ciò può verificarsi se un'applicazione che utilizza il modulo di gestione di database Microsoft Jet viene chiusa in modo imprevisto a causa di un'interruzione dell'alimentazione o di un problema hardware del computer. Se si completa l'operazione e si chiama la funzione membro [Close](../../mfc/reference/cdaodatabase-class.md#close) o si chiude l'applicazione in modo consueto, il database non verrà contrassegnato come danneggiato.

> [!NOTE]
> Dopo aver ripristinato un database, è anche consigliabile compattarlo utilizzando la funzione membro [CompactDatabase](#compactdatabase) per deframmentare il file e recuperare spazio su disco.

Per ulteriori informazioni sul ripristino dei database, vedere l'argomento "Metodo RepairDatabase" nella Guida in linea di DAO.

## <a name="cdaoworkspacerollback"></a><a name="rollback"></a>CDaoWorkspace::Rollback

Chiamare questa funzione membro per terminare la transazione corrente e ripristinare tutti i database nell'area di lavoro alla relativa condizione prima dell'inizio della transazione.

```
void Rollback();
```

### <a name="remarks"></a>Osservazioni

> [!CAUTION]
> All'interno di un oggetto dell'area di lavoro, le transazioni sono sempre globali per l'area di lavoro e non sono limitate a un solo database o recordset. Se si eseguono operazioni su più database o `Rollback` recordset all'interno di una transazione dell'area di lavoro, vengono ripristinate tutte le operazioni su tutti i database e i recordset.

Se si chiude un oggetto dell'area di lavoro senza salvare o eseguire il rollback delle transazioni in sospeso, viene eseguito automaticamente il rollback delle transazioni. Se si chiama `Rollback` [CommitTrans](#committrans) o senza prima chiamare [BeginTrans](#begintrans), si verifica un errore.

> [!NOTE]
> Quando si avvia una transazione, il motore di database registra le operazioni in un file mantenuto nella directory specificata dalla variabile di ambiente TEMP sulla workstation. Se il file di registro delle transazioni esaurisce l'archiviazione `CDaoException` disponibile nell'unità TEMP, il motore di database genererà MFC genera un errore DAO 2004. A questo punto, `CommitTrans`se si chiama , viene eseguito il commit di un numero indeterminato di operazioni, ma le operazioni non completate rimanenti vengono perse e l'operazione deve essere riavviata. La `Rollback` chiamata rilascia il log delle transazioni ed esegue il rollback di tutte le operazioni nella transazione.

## <a name="cdaoworkspacesetdefaultpassword"></a><a name="setdefaultpassword"></a>CDaoWorkspace::SetDefaultPassword

Chiamare questa funzione membro per impostare la password predefinita utilizzata dal motore di database quando viene creato un oggetto dell'area di lavoro senza una password specifica.

```
static void PASCAL SetDefaultPassword(LPCTSTR lpszPassword);
```

### <a name="parameters"></a>Parametri

*lpszPassword*<br/>
La password predefinita. Una password può avere una lunghezza massima di 14 caratteri e può contenere qualsiasi carattere ad eccezione di ASCII 0 (null). Per le password viene fatta distinzione tra maiuscole e minuscole.

### <a name="remarks"></a>Osservazioni

La password predefinita impostata si applica alle nuove aree di lavoro create dopo la chiamata. Quando si creano aree di lavoro successive, non è necessario specificare una password nella chiamata [Create.](#create)

Per utilizzare questa funzione membro:

1. Costruire `CDaoWorkspace` un oggetto ma `Create`non chiamare .

1. Chiamare `SetDefaultPassword` e, se lo si desidera, [SetDefaultUser](#setdefaultuser).

1. Chiamare `Create` per questo oggetto dell'area di lavoro o per quelli successivi, senza specificare una password.

Per impostazione predefinita, la proprietà DefaultUser è impostata su "admin" e la proprietà DefaultPassword è impostata su una stringa vuota ("").

Per ulteriori informazioni sulla sicurezza, vedere l'argomento "Proprietà Permissions" nella Guida in linea di DAO. Per informazioni correlate, vedere gli argomenti "Proprietà DefaultPassword" e "Proprietà DefaultUser" nella Guida in linea di DAO.

## <a name="cdaoworkspacesetdefaultuser"></a><a name="setdefaultuser"></a>CDaoWorkspace::SetDefaultUser

Chiamare questa funzione membro per impostare il nome utente predefinito utilizzato dal motore di database quando viene creato un oggetto dell'area di lavoro senza un nome utente specifico.

```
static void PASCAL SetDefaultUser(LPCTSTR lpszDefaultUser);
```

### <a name="parameters"></a>Parametri

*lpszDefaultUser*<br/>
Nome utente predefinito. Un nome utente può avere una lunghezza compresa tra 1 e 20 caratteri e includere caratteri alfabetici, caratteri accentati, numeri, spazi e simboli, ad eccezione di: " (virgolette), / (barra), (barra rovesciata), \[ \] (parentesi quadre), : (due punti), &#124; (segno di barra rovesciata), \< (segno di minore di), > (segno di maggiore di), (segno di compiso), ; (punto e virgola), , (virgola), (punto interrogativo), \* (asterisco), spazi iniziali e caratteri di controllo (da ASCII 00 a ASCII 31). Per informazioni correlate, vedere l'argomento "Proprietà UserName" nella Guida in linea di DAO.

### <a name="remarks"></a>Osservazioni

Il nome utente predefinito impostato viene applicato alle nuove aree di lavoro create dopo la chiamata. Quando si creano aree di lavoro successive, non è necessario specificare un nome utente nella chiamata [Create.](#create)

Per utilizzare questa funzione membro:

1. Costruire `CDaoWorkspace` un oggetto ma `Create`non chiamare .

1. Chiamare `SetDefaultUser` e, se lo si desidera, [SetDefaultPassword](#setdefaultpassword).

1. Chiamare `Create` per questo oggetto dell'area di lavoro o per quelli successivi, senza specificare un nome utente.

Per impostazione predefinita, la proprietà DefaultUser è impostata su "admin" e la proprietà DefaultPassword è impostata su una stringa vuota ("").

Per informazioni correlate, vedere gli argomenti "Proprietà DefaultUser" e "Proprietà DefaultPassword" nella Guida in linea di DAO.

## <a name="cdaoworkspacesetinipath"></a><a name="setinipath"></a>CDaoWorkspace::SetIniPath

Chiamare questa funzione membro per specificare il percorso delle impostazioni del Registro di sistema di Windows per il modulo di gestione di database Microsoft Jet.

```
static void PASCAL SetIniPath(LPCTSTR lpszRegistrySubKey);
```

### <a name="parameters"></a>Parametri

*lpszRegistrySubkey*<br/>
Stringa contenente il nome di una sottochiave del Registro di sistema di Windows per il percorso delle impostazioni o dei parametri del modulo di gestione di database Microsoft Jet necessari per i database ISAM installabili.

### <a name="remarks"></a>Osservazioni

Chiamare `SetIniPath` solo se è necessario specificare impostazioni speciali. Per ulteriori informazioni, vedere l'argomento "Proprietà IniPath" nella Guida in linea di DAO.

> [!NOTE]
> Chiamare `SetIniPath` durante l'installazione dell'applicazione, non durante l'esecuzione dell'applicazione. `SetIniPath`deve essere chiamato prima di aprire qualsiasi area di lavoro, database o recordset; in caso contrario, MFC genera un'eccezione.

È possibile utilizzare questo meccanismo per configurare il motore di database con le impostazioni del Registro di sistema fornite dall'utente. L'ambito di questo attributo è limitato all'applicazione e non può essere modificato senza riavviare l'applicazione.

## <a name="cdaoworkspacesetisolateodbctrans"></a><a name="setisolateodbctrans"></a>CDaoWorkspace::SetIsolateODBCTrans

Chiamare questa funzione membro per impostare il valore della proprietà DAO IsolateODBCTrans per l'area di lavoro.

```
void SetIsolateODBCTrans(BOOL bIsolateODBCTrans);
```

### <a name="parameters"></a>Parametri

*bIsolateODBCTrans*<br/>
Passare TRUE se si desidera iniziare a isolare le transazioni ODBC. Passare FALSE se si desidera interrompere l'isolamento delle transazioni ODBC.

### <a name="remarks"></a>Osservazioni

In alcune situazioni, potrebbe essere necessario disporre di più transazioni simultanee in sospeso nello stesso database ODBC. A tale scopo, è necessario aprire un'area di lavoro separata per ogni transazione. Anche se ogni area di lavoro può avere la propria connessione ODBC al database, questo rallenta le prestazioni del sistema. Poiché l'isolamento delle transazioni non è normalmente necessario, le connessioni ODBC da più oggetti dell'area di lavoro aperti dallo stesso utente vengono condivise per impostazione predefinita.

Alcuni server ODBC, ad esempio Microsoft SQL Server, non consentono transazioni simultanee su una singola connessione. Se è necessario disporre di più di una transazione alla volta in sospeso su tale database, impostare il IsolateODBCTrans proprietà TRUE in ogni area di lavoro non appena lo si apre. In questo modo viene forzata una connessione ODBC separata per ogni area di lavoro.

## <a name="cdaoworkspacesetlogintimeout"></a><a name="setlogintimeout"></a>CDaoWorkspace::SetLoginTimeout

Chiamare questa funzione membro per impostare il valore della proprietà LoginTimeout DAO per l'area di lavoro.

```
static void PASCAL SetLoginTimeout(short nSeconds);
```

### <a name="parameters"></a>Parametri

*nSecondi*<br/>
Numero di secondi prima che si verifichi un errore quando si tenta di accedere a un database ODBC.

### <a name="remarks"></a>Osservazioni

Questo valore rappresenta il numero di secondi prima che si verifichi un errore quando si tenta di accedere a un database ODBC. L'impostazione LoginTimeout predefinita è 20 secondi. Quando LoginTimeout è impostato su 0, non si verifica alcun timeout e la comunicazione con l'origine dati potrebbe bloccarsi.

Quando si tenta di accedere a un database ODBC, ad esempio Microsoft SQL Server, la connessione potrebbe non riuscire a causa di errori di rete o perché il server non è in esecuzione. Anziché attendere i 20 secondi predefiniti per la connessione, è possibile specificare il tempo di attesa del motore di database prima che venga generato un errore. L'accesso al server avviene in modo implicito come parte di una serie di eventi diversi, ad esempio l'esecuzione di una query in un database del server esterno. Il valore di timeout è determinato dall'impostazione corrente della proprietà LoginTimeout.

Per informazioni correlate, vedere l'argomento "Proprietà LoginTimeout" nella Guida in linea di DAO.

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CDaoDatabase](../../mfc/reference/cdaodatabase-class.md)<br/>
[CDaoRecordset (classe)](../../mfc/reference/cdaorecordset-class.md)<br/>
[Classe CDaoTableDef](../../mfc/reference/cdaotabledef-class.md)<br/>
[Classe CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md)<br/>
[Classe CDaoException](../../mfc/reference/cdaoexception-class.md)
