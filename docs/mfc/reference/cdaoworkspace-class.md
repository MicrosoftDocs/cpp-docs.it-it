---
title: Classe CDaoWorkspace
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
ms.openlocfilehash: c1d235035cee9342c8c54c7aaa4e05a96d5a37e3
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78883870"
---
# <a name="cdaoworkspace-class"></a>Classe CDaoWorkspace

Gestisce una sessione di database denominata e protetta da password, dall'accesso alla disconnessione, di un singolo utente. DAO è supportato tramite Office 2013. DAO 3,6 è la versione finale ed è considerata obsoleta.

## <a name="syntax"></a>Sintassi

```
class CDaoWorkspace : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Name|Descrizione|
|----------|-----------------|
|[CDaoWorkspace:: CDaoWorkspace](#cdaoworkspace)|Costruisce un oggetto dell'area di lavoro. In seguito, chiamare `Create` o `Open`.|

### <a name="public-methods"></a>Metodi pubblici

|Name|Descrizione|
|----------|-----------------|
|[CDaoWorkspace:: Append](#append)|Accoda un'area di lavoro appena creata alla raccolta di aree di lavoro del motore di database.|
|[CDaoWorkspace:: BeginTrans](#begintrans)|Inizia una nuova transazione che si applica a tutti i database aperti nell'area di lavoro.|
|[CDaoWorkspace:: Close](#close)|Chiude l'area di lavoro e tutti gli oggetti in esso contenuti. Viene eseguito il rollback delle transazioni in sospeso.|
|[CDaoWorkspace:: CommitTrans](#committrans)|Completa la transazione corrente e salva le modifiche.|
|[CDaoWorkspace:: CompactDatabase](#compactdatabase)|Compatta o duplica un database.|
|[CDaoWorkspace:: create](#create)|Crea un nuovo oggetto area di lavoro DAO.|
|[CDaoWorkspace:: GetDatabaseCount](#getdatabasecount)|Restituisce il numero di oggetti di database DAO nella raccolta di database dell'area di lavoro.|
|[CDaoWorkspace:: GetDatabaseInfo](#getdatabaseinfo)|Restituisce informazioni su un database DAO specificato definito nella raccolta di database dell'area di lavoro.|
|[CDaoWorkspace:: GetIniPath](#getinipath)|Restituisce il percorso delle impostazioni di inizializzazione del motore di database di Microsoft Jet nel registro di sistema di Windows.|
|[CDaoWorkspace:: GetIsolateODBCTrans](#getisolateodbctrans)|Restituisce un valore che indica se più transazioni che interessano la stessa origine dati ODBC sono isolate tramite connessioni multiple forzate all'origine dati.|
|[CDaoWorkspace::GetLoginTimeout](#getlogintimeout)|Restituisce il numero di secondi prima che si verifichi un errore quando l'utente tenta di accedere a un database ODBC.|
|[CDaoWorkspace:: GetName](#getname)|Restituisce il nome definito dall'utente per l'oggetto dell'area di lavoro.|
|[CDaoWorkspace:: GetUserName](#getusername)|Restituisce il nome utente specificato al momento della creazione dell'area di lavoro. Nome del proprietario dell'area di lavoro.|
|[CDaoWorkspace:: GetVersion](#getversion)|Restituisce una stringa che contiene la versione del motore di database associata all'area di lavoro.|
|[CDaoWorkspace::GetWorkspaceCount](#getworkspacecount)|Restituisce il numero di oggetti dell'area di lavoro DAO nell'insieme di aree di lavoro del motore di database.|
|[CDaoWorkspace::GetWorkspaceInfo](#getworkspaceinfo)|Restituisce informazioni su un'area di lavoro DAO specificata definita nella raccolta di aree di lavoro del motore di database.|
|[CDaoWorkspace:: Idle](#idle)|Consente al motore di database di eseguire attività in background.|
|[CDaoWorkspace:: Open](#isopen)|Restituisce un valore diverso da zero se l'area di lavoro è aperta.|
|[CDaoWorkspace:: Open](#open)|Apre in modo esplicito un oggetto area di lavoro associato all'area di lavoro predefinita di DAO.|
|[CDaoWorkspace:: RepairDatabase](#repairdatabase)|Tenta di ripristinare un database danneggiato.|
|[CDaoWorkspace:: rollback](#rollback)|Termina la transazione corrente e non salva le modifiche.|
|[CDaoWorkspace::SetDefaultPassword](#setdefaultpassword)|Imposta la password utilizzata dal motore di database quando viene creato un oggetto dell'area di lavoro senza una password specifica.|
|[CDaoWorkspace::SetDefaultUser](#setdefaultuser)|Imposta il nome utente utilizzato dal motore di database quando viene creato un oggetto dell'area di lavoro senza un nome utente specifico.|
|[CDaoWorkspace:: SetIniPath](#setinipath)|Imposta il percorso delle impostazioni di inizializzazione del motore di database di Microsoft Jet nel registro di sistema di Windows.|
|[CDaoWorkspace:: SetIsolateODBCTrans](#setisolateodbctrans)|Specifica se più transazioni che interessano la stessa origine dati ODBC sono isolate forzando più connessioni all'origine dati.|
|[CDaoWorkspace::SetLoginTimeout](#setlogintimeout)|Imposta il numero di secondi prima che si verifichi un errore quando l'utente tenta di accedere a un'origine dati ODBC.|

### <a name="public-data-members"></a>Membri dati pubblici

|Name|Descrizione|
|----------|-----------------|
|[CDaoWorkspace:: m_pDAOWorkspace](#m_pdaoworkspace)|Punta all'oggetto area di lavoro DAO sottostante.|

## <a name="remarks"></a>Osservazioni

Nella maggior parte dei casi, non è necessario disporre di più aree di lavoro e non sarà necessario creare oggetti dell'area di lavoro espliciti. Quando si aprono oggetti database e recordset, viene utilizzata l'area di lavoro predefinita di DAO. Tuttavia, se necessario, è possibile eseguire più sessioni alla volta creando altri oggetti dell'area di lavoro. Ogni oggetto area di lavoro può contenere più oggetti di database aperti nella propria raccolta di database. In MFC, un'area di lavoro è principalmente una gestione transazioni, specificando un set di database aperti nello stesso "spazio di transazione".

> [!NOTE]
>  Le classi di database DAO sono diverse dalle classi di database MFC basate su Open Database Connectivity (ODBC). Tutti i nomi delle classi di database DAO hanno un prefisso "CDao". In generale, le classi MFC basate su DAO sono più idonee delle classi MFC basate su ODBC. Le classi basate su DAO accedono ai dati tramite il motore di database di Microsoft Jet, inclusi i driver ODBC. Supportano anche operazioni DDL (Data Definition Language), ad esempio la creazione di database e l'aggiunta di tabelle e campi tramite le classi, senza la necessità di chiamare direttamente DAO.

## <a name="capabilities"></a>Funzionalità

La classe `CDaoWorkspace` fornisce gli elementi seguenti:

- Accesso esplicito, se necessario, a un'area di lavoro predefinita, creato inizializzando il motore di database. In genere si usa l'area di lavoro predefinita di DAO in modo implicito creando oggetti di database e recordset.

- Spazio di transazione in cui le transazioni si applicano a tutti i database aperti nell'area di lavoro. È possibile creare aree di lavoro aggiuntive per gestire spazi di transazione distinti.

- Interfaccia per molte proprietà del motore di database Microsoft Jet sottostante (vedere funzioni membro statiche). L'apertura o la creazione di un'area di lavoro o la chiamata di una funzione membro statica prima di aprire o creare Inizializza il motore di database.

- Accesso alla raccolta di aree di lavoro del motore di database, in cui sono archiviate tutte le aree di lavoro attive che sono state aggiunte. È inoltre possibile creare e utilizzare le aree di lavoro senza aggiungerle alla raccolta.

## <a name="security"></a>Sicurezza

MFC non implementa le raccolte utenti e gruppi in DAO, che vengono utilizzate per il controllo di sicurezza. Se sono necessari questi aspetti di DAO, è necessario programmarli autonomamente tramite chiamate dirette a interfacce DAO. Per informazioni, vedere la [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).

## <a name="usage"></a>Uso

È possibile usare la classe `CDaoWorkspace` per:

- Aprire in modo esplicito l'area di lavoro predefinita.

   In genere l'uso dell'area di lavoro predefinita è implicito, quando si aprono nuovi oggetti [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) . Potrebbe tuttavia essere necessario accedervi in modo esplicito, ad esempio per accedere alle proprietà del motore di database o alla raccolta di aree di lavoro. Vedere "uso implicito dell'area di lavoro predefinita" di seguito.

- Creare nuove aree di lavoro. Chiamare [Append](#append) se si desidera aggiungerli alla raccolta di aree di lavoro.

- Aprire un'area di lavoro esistente nella raccolta di aree di lavoro.

La creazione di una nuova area di lavoro che non esiste già nella raccolta di aree di lavoro è descritta nella funzione membro [create](#create) . Gli oggetti dell'area di lavoro non vengono mantenuti in alcun modo tra le sessioni del motore di datababase. Se l'applicazione collega in modo statico MFC, la terminazione dell'applicazione consente di inizializzare il motore di database. Se l'applicazione si collega a MFC in modo dinamico, il motore di database non viene inizializzato quando viene scaricata la DLL MFC.

L'apertura esplicita dell'area di lavoro predefinita o l'apertura di un'area di lavoro esistente nella raccolta di aree di lavoro viene descritta sotto la funzione membro [Open](#open) .

Terminare una sessione dell'area di lavoro chiudendo l'area di lavoro con la funzione membro [Close](#close) . `Close` chiude tutti i database non chiusi in precedenza, eseguendo il rollback di tutte le transazioni di cui non è stato eseguito il commit.

## <a name="transactions"></a>Transazioni

DAO gestisce le transazioni a livello di area di lavoro. Pertanto, le transazioni in un'area di lavoro con più database aperti si applicano a tutti i database. Ad esempio, se due database hanno aggiornamenti di cui non è stato eseguito il commit e si chiama [CommitTrans](#committrans), viene eseguito il commit di tutti gli aggiornamenti. Se si desidera limitare le transazioni a un singolo database, è necessario disporre di un oggetto area di lavoro separato.

## <a name="implicit-use-of-the-default-workspace"></a>Uso implicito dell'area di lavoro predefinita

MFC utilizza in modo implicito l'area di lavoro predefinita di DAO nei casi seguenti:

- Se si crea un nuovo oggetto `CDaoDatabase` ma non si esegue questa operazione tramite un oggetto `CDaoWorkspace` esistente, MFC crea automaticamente un oggetto area di lavoro temporaneo, che corrisponde all'area di lavoro predefinita di DAO. Se si esegue questa operazione per più database, tutti gli oggetti di database sono associati all'area di lavoro predefinita. È possibile accedere all'area di lavoro di un database tramite un membro dati `CDaoDatabase`.

- Analogamente, se si crea un oggetto `CDaoRecordset` senza fornire un puntatore a un oggetto `CDaoDatabase`, MFC crea un oggetto di database temporaneo e, per estensione, un oggetto area di lavoro temporaneo. È possibile accedere al database di un recordset e all'area di lavoro indirettamente tramite un membro dati `CDaoRecordset`.

## <a name="other-operations"></a>Altre operazioni

Vengono inoltre fornite altre operazioni del database, ad esempio il ripristino di un database danneggiato o la compattazione di un database.

Per informazioni sulla chiamata diretta di DAO e sulla sicurezza di DAO, vedere la [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CDaoWorkspace`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

##  <a name="append"></a>CDaoWorkspace:: Append

Chiamare questa funzione membro dopo aver chiamato [create](#create).

```
virtual void Append();
```

### <a name="remarks"></a>Osservazioni

`Append` aggiunge un oggetto area di lavoro appena creato alla raccolta di aree di lavoro del motore di database. Le aree di lavoro non vengono mantenute tra le sessioni del motore di database. sono archiviati solo in memoria, non su disco. Non è necessario aggiungere un'area di lavoro; in caso contrario, è comunque possibile utilizzarlo.

Un'area di lavoro accodata rimane nella raccolta Workspaces, in uno stato attivo e aperto, fino a quando non viene chiamata la relativa funzione membro [Close](#close) .

Per informazioni correlate, vedere l'argomento "metodo Append" nella Guida di DAO.

##  <a name="begintrans"></a>CDaoWorkspace:: BeginTrans

Chiamare questa funzione membro per avviare una transazione.

```
void BeginTrans();
```

### <a name="remarks"></a>Osservazioni

Dopo aver chiamato `BeginTrans`, gli aggiornamenti apportati alla struttura dei dati o del database diventano effettivi quando si esegue il commit della transazione. Poiché l'area di lavoro definisce un solo spazio di transazione, la transazione viene applicata a tutti i database aperti nell'area di lavoro. Esistono due modi per completare la transazione:

- Chiamare la funzione membro [CommitTrans](#committrans) per eseguire il commit della transazione e salvare le modifiche apportate all'origine dati.

- In alternativa, chiamare la funzione membro [rollback](#rollback) per annullare la transazione.

La chiusura dell'oggetto dell'area di lavoro o di un oggetto di database mentre una transazione è in sospeso esegue il rollback di tutte le transazioni in sospeso.

Se è necessario isolare le transazioni in un'origine dati ODBC da quelle in un'altra origine dati ODBC, vedere la funzione membro [SetIsolateODBCTrans](#setisolateodbctrans) .

##  <a name="cdaoworkspace"></a>CDaoWorkspace:: CDaoWorkspace

Costruisce un oggetto `CDaoWorkspace`.

```
CDaoWorkspace();
```

### <a name="remarks"></a>Osservazioni

Dopo la costruzione dell' C++ oggetto, sono disponibili due opzioni:

- Chiamare la funzione membro [aperta](#open) dell'oggetto per aprire l'area di lavoro predefinita o per aprire un oggetto esistente nella raccolta di aree di lavoro.

- In alternativa, chiamare la funzione membro [create](#create) dell'oggetto per creare un nuovo oggetto area di lavoro DAO. Viene avviata in modo esplicito una nuova sessione dell'area di lavoro, a cui è possibile fare riferimento tramite l'oggetto `CDaoWorkspace`. Dopo la chiamata di `Create`, è possibile chiamare il metodo [Append](#append) se si desidera aggiungere l'area di lavoro alla raccolta di aree di lavoro del motore di database.

Vedere Panoramica della classe per [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) per informazioni su quando è necessario creare un oggetto `CDaoWorkspace` in modo esplicito. In genere, si usano le aree di lavoro create in modo implicito quando si apre un oggetto [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) senza specificare un'area di lavoro o quando si apre un oggetto [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) senza specificare un oggetto di database. Gli oggetti DAO MFC creati in questo modo utilizzano l'area di lavoro predefinita di DAO, che viene creata una sola volta e riutilizzata.

Per rilasciare un'area di lavoro e i relativi oggetti contenuti, chiamare la funzione membro [Close](#close) dell'oggetto dell'area di lavoro.

##  <a name="close"></a>CDaoWorkspace:: Close

Chiamare questa funzione membro per chiudere l'oggetto area di lavoro.

```
virtual void Close();
```

### <a name="remarks"></a>Osservazioni

La chiusura di un oggetto area di lavoro aperto rilascia l'oggetto DAO sottostante e, se l'area di lavoro è un membro della raccolta di aree di lavoro, la rimuove dalla raccolta. La chiamata di `Close` è un'ottima pratica di programmazione.

> [!CAUTION]
>  La chiusura di un oggetto dell'area di lavoro chiude tutti i database aperti nell'area di lavoro. In questo modo, anche tutti i recordset aperti nei database vengono chiusi e viene eseguito il rollback di eventuali modifiche o aggiornamenti in sospeso. Per informazioni correlate, vedere le funzioni membro [CDaoDatabase:: Close](../../mfc/reference/cdaodatabase-class.md#close), [CDaoRecordset:: Close](../../mfc/reference/cdaorecordset-class.md#close), [CDaoTableDef:: Close](../../mfc/reference/cdaotabledef-class.md#close)e [CDaoQueryDef:: Close](../../mfc/reference/cdaoquerydef-class.md#close) .

Oggetti dell'area di lavoro non permanenti. esistono solo se vi sono riferimenti. Ciò significa che quando termina la sessione del motore di database, l'area di lavoro e la relativa raccolta di database non vengono mantenute. È necessario ricrearli per la sessione successiva aprendo di nuovo l'area di lavoro e i database.

Per informazioni correlate, vedere l'argomento relativo al metodo Close nella Guida di DAO.

##  <a name="committrans"></a>CDaoWorkspace:: CommitTrans

Chiamare questa funzione membro per eseguire il commit di una transazione: salvare un gruppo di modifiche e aggiornamenti in uno o più database nell'area di lavoro.

```
void CommitTrans();
```

### <a name="remarks"></a>Osservazioni

Una transazione è costituita da una serie di modifiche apportate ai dati del database o alla relativa struttura, a partire da una chiamata a [BeginTrans](#begintrans). Quando si completa la transazione, eseguirne il commit o eseguirne il rollback (annullare le modifiche) con [rollback](#rollback). Per impostazione predefinita, senza transazioni, viene eseguito immediatamente il commit degli aggiornamenti ai record. La chiamata di `BeginTrans` comporta un ritardo del commit degli aggiornamenti fino a quando non viene chiamato `CommitTrans`.

> [!CAUTION]
>  All'interno di un'area di lavoro, le transazioni sono sempre globali per l'area di lavoro e non sono limitate a un solo database o recordset. Se si eseguono operazioni su più di un database o di un recordset all'interno di una transazione dell'area di lavoro, `CommitTrans` esegue il commit di tutti gli aggiornamenti in sospeso e `Rollback` Ripristina tutte le operazioni su tali database e recordset.

Quando si chiude un database o un'area di lavoro con transazioni in sospeso, viene eseguito il rollback delle transazioni.

> [!NOTE]
>  Non si tratta di un meccanismo di commit in due fasi. Se non è possibile eseguire il commit di un aggiornamento, altri ancora eseguiranno il commit.

##  <a name="compactdatabase"></a>CDaoWorkspace:: CompactDatabase

Chiamare questa funzione membro per comprimere un Microsoft Jet specificato (. MDB) database.

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
Nome di un database chiuso esistente. Può essere un percorso completo e un nome file, ad esempio "C:\\\MYDB. MDB ". Se il nome file ha un'estensione, è necessario specificarlo. Se la rete supporta la convenzione di denominazione uniforme (UNC), è anche possibile specificare un percorso di rete, ad esempio "\\\\\\\MYSERVER\\\MYSHARE\\\MYDIR\\\MYDB. MDB ". (Le barre rovesciate doppie sono obbligatorie nelle stringhe di percorso perché "\\" è C++ il carattere di escape).

*lpszDestName*<br/>
Percorso completo del database compresso che si sta creando. È anche possibile specificare un percorso di rete come con *lpszSrcName*. Non è possibile usare l'argomento *lpszDestName* per specificare lo stesso file di database di *lpszSrcName*.

*lpszPassword*<br/>
Password utilizzata quando si desidera compattare un database protetto da password. Si noti che se si usa la versione di `CompactDatabase` che accetta una password, è necessario specificare tutti i parametri. Inoltre, dal momento che si tratta di un parametro Connect, è necessaria una formattazione speciale, come indicato di seguito:; PWD = *lpszPassword*. Ad esempio:; PWD = "felice". (Il punto e virgola principale è obbligatorio).

*lpszLocale*<br/>
Espressione stringa utilizzata per specificare l'ordine delle regole di confronto per la creazione di *lpszDestName*. Se si omette questo argomento accettando il valore predefinito di `dbLangGeneral` (vedere di seguito), le impostazioni locali del nuovo database sono uguali a quelle del database precedente. I valori possibili sono:

- `dbLangGeneral` inglese, tedesco, francese, portoghese, italiano e spagnolo moderno

- `dbLangArabic` arabo

- `dbLangCyrillic` russo

- `dbLangCzech` ceco

- `dbLangDutch` olandese

- `dbLangGreek` greco

- `dbLangHebrew` ebraico

- Ungherese `dbLangHungarian`

- `dbLangIcelandic` islandese

- `dbLangNordic` lingue nordiche (solo Microsoft Jet Database Engine versione 1,0)

- `dbLangNorwdan` norvegese e danese

- `dbLangPolish` polacco

- `dbLangSpanish` spagnolo tradizionale

- `dbLangSwedfin` svedese e finlandese

- `dbLangTurkish` turco

*nOptions*<br/>
Indica una o più opzioni per il database di destinazione, *lpszDestName*. Se si omette questo argomento accettando il valore predefinito, *lpszDestName* avrà la stessa crittografia e la stessa versione di *lpszSrcName*. È possibile combinare l'opzione `dbEncrypt` o `dbDecrypt` con una delle opzioni di versione utilizzando l'operatore OR bit per bit. I valori possibili, che specificano un formato di database, non una versione del motore di database, sono i seguenti:

- `dbEncrypt` crittografare il database durante la compattazione.

- `dbDecrypt` decrittografare il database durante la compattazione.

- `dbVersion10` creare un database che usa il motore di database di Microsoft Jet versione 1,0 durante la compattazione.

- `dbVersion11` creare un database che usa il motore di database di Microsoft Jet versione 1,1 durante la compattazione.

- `dbVersion20` creare un database che usa il motore di database di Microsoft Jet versione 2,0 durante la compattazione.

- `dbVersion30` creare un database che usa il motore di database di Microsoft Jet versione 3,0 durante la compattazione.

È possibile utilizzare `dbEncrypt` o `dbDecrypt` nell'argomento options per specificare se crittografare o decrittografare il database durante la compattazione. Se si omette una costante di crittografia o si includono sia `dbDecrypt` che `dbEncrypt`, *lpszDestName* avrà la stessa crittografia di *lpszSrcName*. È possibile utilizzare una delle costanti di versione nell'argomento options per specificare la versione del formato dati per il database compresso. Questa costante ha effetto solo sulla versione del formato dati di *lpszDestName*. È possibile specificare una sola costante Version. Se si omette una costante di versione, *lpszDestName* avrà la stessa versione di *lpszSrcName*. È possibile compattare *lpszDestName* solo in una versione uguale o successiva a quella di *lpszSrcName*.

> [!CAUTION]
>  Se un database non è crittografato, è possibile, anche se si implementa la sicurezza utente/password, per leggere direttamente il file su disco binario che costituisce il database.

### <a name="remarks"></a>Osservazioni

Quando si modificano i dati in un database, il file di database può diventare frammentato e utilizzare più spazio su disco del necessario. Periodicamente, è necessario compattare il database per deframmentare il file di database. Il database compresso è in genere più piccolo. È inoltre possibile scegliere di modificare l'ordine delle regole di confronto, la crittografia o la versione del formato dati durante la copia e la compattazione del database.

> [!CAUTION]
>  La funzione membro `CompactDatabase` non converte correttamente un database di Microsoft Access completo da una versione a un'altra. Viene convertito solo il formato dati. Gli oggetti definiti da Microsoft Access, ad esempio moduli e report, non vengono convertiti. Tuttavia, i dati vengono convertiti correttamente.

> [!TIP]
>  È inoltre possibile utilizzare `CompactDatabase` per copiare un file di database.

Per ulteriori informazioni sulla compattazione dei database, vedere l'argomento "metodo CompactDatabase" nella Guida di DAO.

##  <a name="create"></a>CDaoWorkspace:: create

Chiamare questa funzione membro per creare un nuovo oggetto area di lavoro DAO e associarlo all'oggetto `CDaoWorkspace` MFC.

```
virtual void Create(
    LPCTSTR lpszName,
    LPCTSTR lpszUserName,
    LPCTSTR lpszPassword);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Stringa con un massimo di 14 caratteri che assegna un nome univoco al nuovo oggetto area di lavoro. È necessario specificare un nome. Per informazioni correlate, vedere l'argomento relativo alla proprietà Name nella Guida di DAO.

*lpszUserName*<br/>
Nome utente del proprietario dell'area di lavoro. Per i requisiti, vedere il parametro *lpszDefaultUser* per la funzione membro [SetDefaultUser](#setdefaultuser) . Per informazioni correlate, vedere l'argomento "proprietà UserName" nella Guida di DAO.

*lpszPassword*<br/>
Password per il nuovo oggetto dell'area di lavoro. Una password può contenere un massimo di 14 caratteri e può contenere qualsiasi carattere eccetto ASCII 0 (null). Per le password viene fatta distinzione tra maiuscole e minuscole. Per informazioni correlate, vedere l'argomento "proprietà password" nella Guida di DAO.

### <a name="remarks"></a>Osservazioni

Il processo di creazione globale è:

1. Costruisce un oggetto [CDaoWorkspace](#cdaoworkspace) .

1. Chiamare la funzione membro `Create` dell'oggetto per creare l'area di lavoro DAO sottostante. È necessario specificare un nome per l'area di lavoro.

1. Facoltativamente, chiamare [Append](#append) se si vuole aggiungere l'area di lavoro alla raccolta di aree di lavoro del motore di database. È possibile utilizzare l'area di lavoro senza accodarla.

Dopo la chiamata di `Create`, l'oggetto area di lavoro si trova in uno stato aperto, pronto per l'utilizzo. Non è possibile chiamare `Open` dopo l'`Create`. Non si chiama `Create` se l'area di lavoro esiste già nella raccolta di aree di lavoro. `Create` Inizializza il motore di database se non è già stato inizializzato per l'applicazione.

##  <a name="getdatabasecount"></a>CDaoWorkspace:: GetDatabaseCount

Chiamare questa funzione membro per recuperare il numero di oggetti di database DAO nella raccolta di database dell'area di lavoro, ovvero il numero di database aperti nell'area di lavoro.

```
short GetDatabaseCount();
```

### <a name="return-value"></a>Valore restituito

Numero di database aperti nell'area di lavoro.

### <a name="remarks"></a>Osservazioni

`GetDatabaseCount` è utile se è necessario eseguire il ciclo di tutti i database definiti nella raccolta di database dell'area di lavoro. Per ottenere informazioni su un determinato database nella raccolta, vedere [GetDatabaseInfo](#getdatabaseinfo). L'utilizzo tipico consiste nel chiamare `GetDatabaseCount` per il numero di database aperti, quindi utilizzare tale numero come indice di ciclo per le chiamate ripetute al `GetDatabaseInfo`.

##  <a name="getdatabaseinfo"></a>CDaoWorkspace:: GetDatabaseInfo

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
Indice in base zero dell'oggetto di database nella raccolta di database dell'area di lavoro, per la ricerca in base all'indice.

*dbinfo*<br/>
Riferimento a un oggetto [CDaoDatabaseInfo](../../mfc/reference/cdaodatabaseinfo-structure.md) che restituisce le informazioni richieste.

*dwInfoOptions*<br/>
Opzioni che specificano le informazioni sul database da recuperare. Le opzioni disponibili sono elencate qui insieme alla cosa che determina la restituzione della funzione:

- Nome AFX_DAO_PRIMARY_INFO (impostazione predefinita), aggiornabile, transazioni

- AFX_DAO_SECONDARY_INFO informazioni primarie più: versione, ordine di confronto, timeout query

- AFX_DAO_ALL_INFO informazioni primarie e secondarie più: Connetti

*lpszName*<br/>
Nome dell'oggetto di database per la ricerca in base al nome. Il nome è una stringa con un massimo di 14 caratteri che assegna un nome univoco al nuovo oggetto area di lavoro.

### <a name="remarks"></a>Osservazioni

Una versione della funzione consente di cercare un database in base all'indice. L'altra versione consente di cercare un database in base al nome.

Per una descrizione delle informazioni restituite in *dbinfo*, vedere la struttura [CDaoDatabaseInfo](../../mfc/reference/cdaodatabaseinfo-structure.md) . Questa struttura dispone di membri che corrispondono agli elementi delle informazioni sopra elencate nella descrizione di *dwInfoOptions*. Quando si richiedono informazioni a un livello, si ottengono anche informazioni per i livelli precedenti.

##  <a name="getinipath"></a>CDaoWorkspace:: GetIniPath

Chiamare questa funzione membro per ottenere il percorso delle impostazioni di inizializzazione del motore di database di Microsoft Jet nel registro di sistema di Windows.

```
static CString PASCAL GetIniPath();
```

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che contiene il percorso del registro di sistema.

### <a name="remarks"></a>Osservazioni

È possibile utilizzare il percorso per ottenere informazioni sulle impostazioni per il motore di database. Le informazioni restituite sono in realtà il nome di una sottochiave del registro di sistema.

Per informazioni correlate, vedere gli argomenti "proprietà IniPath" e "personalizzazione delle impostazioni del registro di sistema di Windows per l'accesso ai dati" nella Guida di DAO.

##  <a name="getisolateodbctrans"></a>CDaoWorkspace:: GetIsolateODBCTrans

Chiamare questa funzione membro per ottenere il valore corrente della proprietà IsolateODBCTrans di DAO per l'area di lavoro.

```
BOOL GetIsolateODBCTrans();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se le transazioni ODBC sono isolate; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

In alcune situazioni, potrebbe essere necessario disporre di più transazioni simultanee in sospeso nello stesso database ODBC. A tale scopo, è necessario aprire un'area di lavoro separata per ogni transazione. Tenere presente che, anche se ogni area di lavoro può avere una propria connessione ODBC al database, questo rallenta le prestazioni di sistema. Poiché l'isolamento delle transazioni non è in genere necessario, le connessioni ODBC da più oggetti dell'area di lavoro aperti dallo stesso utente vengono condivise per impostazione predefinita.

Alcuni server ODBC, ad esempio Microsoft SQL Server, non consentono transazioni simultanee su una singola connessione. Se è necessario disporre di più di una transazione alla volta in sospeso su tale database, impostare la proprietà IsolateODBCTrans su TRUE in ogni area di lavoro non appena viene aperta. Questa operazione impone una connessione ODBC separata per ogni area di lavoro.

Per informazioni correlate, vedere l'argomento "Proprietà IsolateODBCTrans" nella Guida di DAO.

##  <a name="getlogintimeout"></a>CDaoWorkspace:: GetLoginTimeout

Chiamare questa funzione membro per ottenere il valore corrente della proprietà LoginTimeout di DAO per l'area di lavoro.

```
static short PASCAL GetLoginTimeout();
```

### <a name="return-value"></a>Valore restituito

Il numero di secondi prima che si verifichi un errore quando si tenta di accedere a un database ODBC.

### <a name="remarks"></a>Osservazioni

Questo valore rappresenta il numero di secondi prima che si verifichi un errore quando si tenta di accedere a un database ODBC. L'impostazione predefinita di LoginTimeout è 20 secondi. Quando LoginTimeout è impostato su 0, non si verifica alcun timeout e la comunicazione con l'origine dati potrebbe smettere di rispondere.

Quando si tenta di accedere a un database ODBC, ad esempio Microsoft SQL Server, la connessione potrebbe non riuscire a causa di errori di rete o perché il server non è in esecuzione. Anziché attendere la connessione dei 20 secondi predefiniti, è possibile specificare il tempo di attesa del motore di database prima che venga generato un errore. L'accesso al server viene eseguito in modo implicito come parte di una serie di eventi diversi, ad esempio l'esecuzione di una query su un database del server esterno.

Per informazioni correlate, vedere l'argomento "proprietà LoginTimeout" nella Guida di DAO.

##  <a name="getname"></a>CDaoWorkspace:: GetName

Chiamare questa funzione membro per ottenere il nome definito dall'utente dell'oggetto dell'area di lavoro DAO sottostante l'oggetto `CDaoWorkspace`.

```
CString GetName();
```

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) contenente il nome definito dall'utente dell'oggetto dell'area di lavoro DAO.

### <a name="remarks"></a>Osservazioni

Il nome è utile per accedere all'oggetto dell'area di lavoro DAO nella raccolta di aree di lavoro del motore di database in base al nome.

Per informazioni correlate, vedere l'argomento relativo alla proprietà Name nella Guida di DAO.

##  <a name="getusername"></a>CDaoWorkspace:: GetUserName

Chiamare questa funzione membro per ottenere il nome del proprietario dell'area di lavoro.

```
CString GetUserName();
```

### <a name="return-value"></a>Valore restituito

[CString](../../atl-mfc-shared/reference/cstringt-class.md) che rappresenta il proprietario dell'oggetto dell'area di lavoro.

### <a name="remarks"></a>Osservazioni

Per ottenere o impostare le autorizzazioni per il proprietario dell'area di lavoro, chiamare direttamente DAO per verificare l'impostazione della proprietà delle autorizzazioni. determina le autorizzazioni di cui dispone l'utente. Per lavorare con le autorizzazioni, è necessario un sistema. File MDA.

Per informazioni sulla chiamata diretta di DAO, vedere la [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md). Per informazioni correlate, vedere l'argomento "proprietà UserName" nella Guida di DAO.

##  <a name="getversion"></a>CDaoWorkspace:: GetVersion

Chiamare questa funzione membro per determinare la versione del motore di database di Microsoft Jet in uso.

```
static CString PASCAL GetVersion();
```

### <a name="return-value"></a>Valore restituito

[CString](../../atl-mfc-shared/reference/cstringt-class.md) che indica la versione del motore di database associata all'oggetto.

### <a name="remarks"></a>Osservazioni

Il valore restituito rappresenta il numero di versione nel formato "Major. minor"; ad esempio, "3,0". Il numero di versione del prodotto (ad esempio, 3,0) è costituito dal numero di versione (3), da un punto e dal numero di versione (0).

Per informazioni correlate, vedere l'argomento "proprietà Version" nella Guida di DAO.

##  <a name="getworkspacecount"></a>CDaoWorkspace:: GetWorkspaceCount

Chiamare questa funzione membro per recuperare il numero di oggetti dell'area di lavoro DAO nell'insieme di aree di lavoro del motore di database.

```
short GetWorkspaceCount();
```

### <a name="return-value"></a>Valore restituito

Numero di aree di lavoro aperte nella raccolta di aree di lavoro.

### <a name="remarks"></a>Osservazioni

Questo conteggio non include le aree di lavoro aperte non accodate alla raccolta. `GetWorkspaceCount` è utile se è necessario scorrere in ciclo tutte le aree di lavoro definite nella raccolta di aree di lavoro. Per ottenere informazioni su una determinata area di lavoro nella raccolta, vedere [GetWorkspaceInfo](#getworkspaceinfo). L'utilizzo tipico consiste nel chiamare `GetWorkspaceCount` per il numero di aree di lavoro aperte, quindi utilizzare tale numero come indice di ciclo per le chiamate ripetute al `GetWorkspaceInfo`.

##  <a name="getworkspaceinfo"></a>CDaoWorkspace:: GetWorkspaceInfo

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
Indice in base zero dell'oggetto di database nella raccolta Workspaces, per la ricerca in base all'indice.

*wkspcinfo*<br/>
Riferimento a un oggetto [CDaoWorkspaceInfo](../../mfc/reference/cdaoworkspaceinfo-structure.md) che restituisce le informazioni richieste.

*dwInfoOptions*<br/>
Opzioni che specificano le informazioni sull'area di lavoro da recuperare. Le opzioni disponibili sono elencate qui insieme alla cosa che determina la restituzione della funzione:

- Nome AFX_DAO_PRIMARY_INFO (impostazione predefinita)

- AFX_DAO_SECONDARY_INFO informazioni primarie più: nome utente

- AFX_DAO_ALL_INFO informazioni primarie e secondarie più: isolare ODBCTrans

*lpszName*<br/>
Nome dell'oggetto dell'area di lavoro, per la ricerca in base al nome. Il nome è una stringa con un massimo di 14 caratteri che assegna un nome univoco al nuovo oggetto area di lavoro.

### <a name="remarks"></a>Osservazioni

Per una descrizione delle informazioni restituite in *wkspcinfo*, vedere la struttura [CDaoWorkspaceInfo](../../mfc/reference/cdaoworkspaceinfo-structure.md) . Questa struttura dispone di membri che corrispondono agli elementi delle informazioni sopra elencate nella descrizione di *dwInfoOptions*. Quando si richiedono informazioni a un livello, si ottengono anche informazioni per i livelli precedenti.

##  <a name="idle"></a>CDaoWorkspace:: Idle

Chiamare `Idle` per fornire al motore di database la possibilità di eseguire attività in background che potrebbero non essere aggiornate a causa di una intensa elaborazione dei dati.

```
static void PASCAL Idle(int nAction = dbFreeLocks);
```

### <a name="parameters"></a>Parametri

*nAction*<br/>
Azione da eseguire durante l'elaborazione inattiva. Attualmente l'unica azione valida è `dbFreeLocks`.

### <a name="remarks"></a>Osservazioni

Questa situazione è spesso vera negli ambienti multiutente e multitasking in cui non è disponibile tempo di elaborazione in background sufficiente per la conservazione di tutti i record in un recordset corrente.

> [!NOTE]
>  La chiamata di `Idle` non è necessaria con i database creati con la versione 3,0 del motore di database di Microsoft Jet. Utilizzare `Idle` solo per i database creati con versioni precedenti.

In genere, i blocchi di lettura vengono rimossi e i dati negli oggetti recordset di tipo dynaset locale vengono aggiornati solo quando si verificano altre azioni (inclusi i movimenti del mouse). Se si chiama periodicamente `Idle`, fornire al motore di database il tempo necessario per recuperare le attività di elaborazione in background rilasciando i blocchi di lettura non necessari. Specificando la costante `dbFreeLocks` come argomento viene ritardata l'elaborazione fino a quando non vengono rilasciati tutti i blocchi di lettura.

Questa funzione membro non è necessaria negli ambienti a utente singolo a meno che non siano in esecuzione più istanze di un'applicazione. La funzione membro `Idle` può migliorare le prestazioni in un ambiente multiutente, perché impone al motore di database di scaricare i dati su disco, rilasciando blocchi sulla memoria. È anche possibile rilasciare i blocchi di lettura rendendo le operazioni parte di una transazione.

Per informazioni correlate, vedere l'argomento "metodo inattivo" nella Guida di DAO.

##  <a name="isopen"></a>CDaoWorkspace:: Open

Chiamare questa funzione membro per determinare se l'oggetto `CDaoWorkspace` è aperto, ovvero se l'oggetto MFC è stato inizializzato da una chiamata a [Open](#open) o da una chiamata a [create](#create).

```
BOOL IsOpen() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto dell'area di lavoro è aperto. in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

È possibile chiamare qualsiasi funzione membro di un'area di lavoro in uno stato aperto.

##  <a name="m_pdaoworkspace"></a>CDaoWorkspace:: m_pDAOWorkspace

Puntatore all'oggetto dell'area di lavoro DAO sottostante.

### <a name="remarks"></a>Osservazioni

Utilizzare questo membro dati se è necessario l'accesso diretto all'oggetto DAO sottostante. È possibile chiamare le interfacce dell'oggetto DAO tramite questo puntatore.

Per informazioni sull'accesso diretto agli oggetti DAO, vedere la [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).

##  <a name="open"></a>CDaoWorkspace:: Open

Apre in modo esplicito un oggetto area di lavoro associato all'area di lavoro predefinita di DAO.

```
virtual void Open(LPCTSTR lpszName = NULL);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Nome dell'oggetto dell'area di lavoro DAO da aprire, ovvero una stringa con un massimo di 14 caratteri che assegna un nome univoco all'area di lavoro. Accettare il valore predefinito NULL per aprire in modo esplicito l'area di lavoro predefinita. Per i requisiti di denominazione, vedere il parametro *lpszName* per [create](#create). Per informazioni correlate, vedere l'argomento relativo alla proprietà Name nella Guida di DAO.

### <a name="remarks"></a>Osservazioni

Dopo la costruzione di un oggetto `CDaoWorkspace`, chiamare questa funzione membro per eseguire una delle operazioni seguenti:

- Aprire in modo esplicito l'area di lavoro predefinita. Passare NULL per *lpszName*.

- Aprire un oggetto `CDaoWorkspace` esistente, un membro della raccolta di aree di lavoro, in base al nome. Passare un nome valido per un oggetto dell'area di lavoro esistente.

`Open` inserisce l'oggetto area di lavoro in uno stato aperto e inizializza anche il motore di database se non è già stato inizializzato per l'applicazione.

Sebbene molte `CDaoWorkspace` funzioni membro possono essere chiamate solo dopo l'apertura dell'area di lavoro, le seguenti funzioni membro, che operano sul motore di database, sono disponibili dopo la C++ costruzione dell'oggetto, ma prima di una chiamata a `Open`:

||||
|-|-|-|
|[Creare](#create)|[GetVersion](#getversion)|[SetDefaultUser](#setdefaultuser)|
|[GetIniPath](#getinipath)|[Idle](#idle)|[SetIniPath](#setinipath)|
|[GetLoginTimeout](#getlogintimeout)|[SetDefaultPassword](#setdefaultpassword)|[SetLoginTimeout](#setlogintimeout)|

##  <a name="repairdatabase"></a>CDaoWorkspace:: RepairDatabase

Chiamare questa funzione membro se è necessario tentare di ripristinare un database danneggiato che accede al motore di database di Microsoft Jet.

```
static void PASCAL RepairDatabase(LPCTSTR lpszName);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Il percorso e il nome file di un file di database del motore Microsoft Jet esistente. Se si omette il percorso, viene eseguita la ricerca solo nella directory corrente. Se il sistema supporta la convenzione di denominazione uniforme (UNC), è anche possibile specificare un percorso di rete, ad esempio: "\\\\\\\MYSERVER\\\MYSHARE\\\MYDIR\\\MYDB. MDB ". Le barre rovesciate doppie sono obbligatorie nella stringa di percorso perché "\\" è il C++ carattere di escape.

### <a name="remarks"></a>Osservazioni

Prima di eseguire il ripristino, è necessario chiudere il database specificato da *lpszName* . In un ambiente multiutente, gli altri utenti non possono avere *lpszName* aperti durante il ripristino. Se *lpszName* non è chiuso o non è disponibile per l'utilizzo esclusivo, si verifica un errore.

Questa funzione membro tenta di ripristinare un database contrassegnato come potenzialmente danneggiato da un'operazione di scrittura incompleta. Questa situazione può verificarsi se un'applicazione che utilizza il motore di database di Microsoft Jet viene chiusa in modo imprevisto a causa di un problema di interruzione dell'alimentazione o hardware del computer. Se si completa l'operazione e si chiama la funzione membro [Close](../../mfc/reference/cdaodatabase-class.md#close) o si esce dall'applicazione in un modo consueto, il database non verrà contrassegnato come danneggiato.

> [!NOTE]
>  Dopo aver ripristinato un database, è anche consigliabile compattarlo utilizzando la funzione membro [CompactDatabase](#compactdatabase) per deframmentare il file e recuperare spazio su disco.

Per ulteriori informazioni sul ripristino dei database, vedere l'argomento "metodo RepairDatabase" nella Guida di DAO.

##  <a name="rollback"></a>CDaoWorkspace:: rollback

Chiamare questa funzione membro per terminare la transazione corrente e ripristinare tutti i database nell'area di lavoro alla condizione prima che la transazione sia stata avviata.

```
void Rollback();
```

### <a name="remarks"></a>Osservazioni

> [!CAUTION]
>  All'interno di un oggetto area di lavoro, le transazioni sono sempre globali per l'area di lavoro e non sono limitate a un solo database o recordset. Se si eseguono operazioni su più di un database o di un recordset all'interno di una transazione dell'area di lavoro, `Rollback` Ripristina tutte le operazioni su tutti i database e i recordset.

Se si chiude un oggetto dell'area di lavoro senza salvare o eseguire il rollback di tutte le transazioni in sospeso, viene eseguito automaticamente il rollback delle transazioni. Se si chiama [CommitTrans](#committrans) o `Rollback` senza prima chiamare [BeginTrans](#begintrans), si verificherà un errore.

> [!NOTE]
>  Quando si avvia una transazione, il motore di database registra le operazioni in un file mantenuto nella directory specificata dalla variabile di ambiente TEMP nella workstation. Se il file di log delle transazioni esaurisce lo spazio di archiviazione disponibile nell'unità temporanea, il motore di database causerà la generazione di un `CDaoException` (errore DAO 2004). A questo punto, se si chiama `CommitTrans`, viene eseguito il commit di un numero indeterminato di operazioni, ma le restanti operazioni non completate vengono perse e l'operazione deve essere riavviata. Chiamando `Rollback` il log delle transazioni viene rilasciato ed eseguito il rollback di tutte le operazioni nella transazione.

##  <a name="setdefaultpassword"></a>CDaoWorkspace:: SetDefaultPassword

Chiamare questa funzione membro per impostare la password predefinita utilizzata dal motore di database quando viene creato un oggetto dell'area di lavoro senza una password specifica.

```
static void PASCAL SetDefaultPassword(LPCTSTR lpszPassword);
```

### <a name="parameters"></a>Parametri

*lpszPassword*<br/>
Password predefinita. Una password può contenere un massimo di 14 caratteri e può contenere qualsiasi carattere eccetto ASCII 0 (null). Per le password viene fatta distinzione tra maiuscole e minuscole.

### <a name="remarks"></a>Osservazioni

La password predefinita impostata si applica alle nuove aree di lavoro create dopo la chiamata. Quando si creano le aree di lavoro successive, non è necessario specificare una password nella chiamata di [creazione](#create) .

Per usare questa funzione membro:

1. Costruire un oggetto `CDaoWorkspace` ma non chiamare `Create`.

1. Chiamare `SetDefaultPassword` e, se si desidera, [SetDefaultUser](#setdefaultuser).

1. Chiamare `Create` per questo oggetto area di lavoro o per quelli successivi, senza specificare una password.

Per impostazione predefinita, la proprietà DefaultUser è impostata su "admin" e la proprietà DefaultPassword è impostata su una stringa vuota ("").

Per ulteriori informazioni sulla sicurezza, vedere l'argomento "proprietà delle autorizzazioni" nella Guida di DAO. Per informazioni correlate, vedere gli argomenti "Proprietà DefaultPassword" e "Proprietà DefaultUser" nella Guida di DAO.

##  <a name="setdefaultuser"></a>CDaoWorkspace:: SetDefaultUser

Chiamare questa funzione membro per impostare il nome utente predefinito utilizzato dal motore di database quando viene creato un oggetto dell'area di lavoro senza un nome utente specifico.

```
static void PASCAL SetDefaultUser(LPCTSTR lpszDefaultUser);
```

### <a name="parameters"></a>Parametri

*lpszDefaultUser*<br/>
Nome utente predefinito. Un nome utente può avere una lunghezza di 1-20 caratteri e includere caratteri alfabetici, caratteri accentati, numeri, spazi e simboli ad eccezione di: "(virgolette),/(barra), \ (barra rovesciata), \[ \] (parentesi quadre),: &#124; (due punti), (pipe), \< (segno minore di), > (segno maggiore di), + (segno più), = (segno di uguale),; (punto e virgola),, (virgola), (punto interrogativo), \* (asterisco), spazi iniziali e caratteri di controllo (da ASCII 00 a ASCII 31). Per informazioni correlate, vedere l'argomento "proprietà UserName" nella Guida di DAO.

### <a name="remarks"></a>Osservazioni

Il nome utente predefinito impostato si applica alle nuove aree di lavoro create dopo la chiamata. Quando si creano le aree di lavoro successive, non è necessario specificare un nome utente nella chiamata di [creazione](#create) .

Per usare questa funzione membro:

1. Costruire un oggetto `CDaoWorkspace` ma non chiamare `Create`.

1. Chiamare `SetDefaultUser` e, se si desidera, [SetDefaultPassword](#setdefaultpassword).

1. Chiamare `Create` per questo oggetto area di lavoro o per quelli successivi, senza specificare un nome utente.

Per impostazione predefinita, la proprietà DefaultUser è impostata su "admin" e la proprietà DefaultPassword è impostata su una stringa vuota ("").

Per informazioni correlate, vedere gli argomenti "Proprietà DefaultUser" e "Proprietà DefaultPassword" nella Guida di DAO.

##  <a name="setinipath"></a>CDaoWorkspace:: SetIniPath

Chiamare questa funzione membro per specificare il percorso delle impostazioni del registro di sistema di Windows per il motore di database di Microsoft Jet.

```
static void PASCAL SetIniPath(LPCTSTR lpszRegistrySubKey);
```

### <a name="parameters"></a>Parametri

*lpszRegistrySubkey*<br/>
Stringa che contiene il nome di una sottochiave del registro di sistema di Windows per il percorso delle impostazioni o dei parametri del motore di database di Microsoft Jet necessari per i database ISAM installabili.

### <a name="remarks"></a>Osservazioni

Chiamare `SetIniPath` solo se è necessario specificare impostazioni speciali. Per ulteriori informazioni, vedere l'argomento "proprietà IniPath" nella Guida di DAO.

> [!NOTE]
>  Chiamare `SetIniPath` durante l'installazione dell'applicazione, non quando viene eseguita l'applicazione. prima di aprire le aree di lavoro, i database o i recordset, è necessario chiamare `SetIniPath`. in caso contrario, MFC genera un'eccezione.

È possibile utilizzare questo meccanismo per configurare il motore di database con le impostazioni del registro di sistema fornite dall'utente. L'ambito di questo attributo è limitato all'applicazione e non può essere modificato senza riavviare l'applicazione.

##  <a name="setisolateodbctrans"></a>CDaoWorkspace:: SetIsolateODBCTrans

Chiamare questa funzione membro per impostare il valore della proprietà IsolateODBCTrans di DAO per l'area di lavoro.

```
void SetIsolateODBCTrans(BOOL bIsolateODBCTrans);
```

### <a name="parameters"></a>Parametri

*bIsolateODBCTrans*<br/>
Passare TRUE se si desidera iniziare a isolare le transazioni ODBC. Passare FALSE se si desidera arrestare l'isolamento delle transazioni ODBC.

### <a name="remarks"></a>Osservazioni

In alcune situazioni, potrebbe essere necessario disporre di più transazioni simultanee in sospeso nello stesso database ODBC. A tale scopo, è necessario aprire un'area di lavoro separata per ogni transazione. Sebbene ogni area di lavoro possa avere una propria connessione ODBC al database, questo rallenta le prestazioni di sistema. Poiché l'isolamento delle transazioni non è in genere necessario, le connessioni ODBC da più oggetti dell'area di lavoro aperti dallo stesso utente vengono condivise per impostazione predefinita.

Alcuni server ODBC, ad esempio Microsoft SQL Server, non consentono transazioni simultanee su una singola connessione. Se è necessario disporre di più di una transazione alla volta in sospeso su tale database, impostare la proprietà IsolateODBCTrans su TRUE in ogni area di lavoro non appena viene aperta. Questa operazione impone una connessione ODBC separata per ogni area di lavoro.

##  <a name="setlogintimeout"></a>CDaoWorkspace:: SetLoginTimeout

Chiamare questa funzione membro per impostare il valore della proprietà LoginTimeout di DAO per l'area di lavoro.

```
static void PASCAL SetLoginTimeout(short nSeconds);
```

### <a name="parameters"></a>Parametri

*nSeconds*<br/>
Il numero di secondi prima che si verifichi un errore quando si tenta di accedere a un database ODBC.

### <a name="remarks"></a>Osservazioni

Questo valore rappresenta il numero di secondi prima che si verifichi un errore quando si tenta di accedere a un database ODBC. L'impostazione predefinita di LoginTimeout è 20 secondi. Quando LoginTimeout è impostato su 0, non si verifica alcun timeout e la comunicazione con l'origine dati potrebbe smettere di rispondere.

Quando si tenta di accedere a un database ODBC, ad esempio Microsoft SQL Server, la connessione potrebbe non riuscire a causa di errori di rete o perché il server non è in esecuzione. Anziché attendere la connessione dei 20 secondi predefiniti, è possibile specificare il tempo di attesa del motore di database prima che venga generato un errore. L'accesso al server viene eseguito in modo implicito come parte di una serie di eventi diversi, ad esempio l'esecuzione di una query su un database del server esterno. Il valore di timeout è determinato dall'impostazione corrente della proprietà LoginTimeout.

Per informazioni correlate, vedere l'argomento "proprietà LoginTimeout" nella Guida di DAO.

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CDaoDatabase](../../mfc/reference/cdaodatabase-class.md)<br/>
[Classe CDaoRecordset](../../mfc/reference/cdaorecordset-class.md)<br/>
[Classe CDaoTableDef](../../mfc/reference/cdaotabledef-class.md)<br/>
[Classe CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md)<br/>
[Classe CDaoException](../../mfc/reference/cdaoexception-class.md)
