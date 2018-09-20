---
title: Classe CDaoWorkspace | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 964fab6030e0a89ef69730fd4867973e402db614
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46442019"
---
# <a name="cdaoworkspace-class"></a>Classe CDaoWorkspace

Gestisce una sessione di database denominata e protetta da password, dall'accesso alla disconnessione, di un singolo utente.

## <a name="syntax"></a>Sintassi

```
class CDaoWorkspace : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoWorkspace::CDaoWorkspace](#cdaoworkspace)|Costruisce un oggetto dell'area di lavoro. Successivamente, chiamare `Create` o `Open`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoWorkspace::Append](#append)|Aggiunge un'area di lavoro appena creato alla raccolta di aree di lavoro del motore di database.|
|[CDaoWorkspace::BeginTrans](#begintrans)|Inizia una nuova transazione, che viene applicato a tutti i database aperto nell'area di lavoro.|
|[CDaoWorkspace::Close](#close)|Chiude l'area di lavoro e tutti gli oggetti contenuti. Le transazioni in sospeso il rollback.|
|[CDaoWorkspace:: CommitTrans](#committrans)|Completa la transazione corrente e Salva le modifiche.|
|[CDaoWorkspace:: CompactDatabase](#compactdatabase)|Consente di compattare un database (o Duplica).|
|[CDaoWorkspace:: Create](#create)|Crea un nuovo oggetto dell'area di lavoro DAO.|
|[CDaoWorkspace::GetDatabaseCount](#getdatabasecount)|Restituisce il numero di oggetti di database DAO nella raccolta di database dell'area di lavoro.|
|[CDaoWorkspace::GetDatabaseInfo](#getdatabaseinfo)|Restituisce informazioni su un database DAO specificato definito nella raccolta di database dell'area di lavoro.|
|[CDaoWorkspace::GetIniPath](#getinipath)|Restituisce la posizione del database Microsoft Jet di impostazioni di inizializzazione del modulo nel Registro di sistema Windows.|
|[CDaoWorkspace::GetIsolateODBCTrans](#getisolateodbctrans)|Restituisce un valore che indica se più transazioni che interessano la stessa origine dati ODBC sono isolate tramite forzato più connessioni all'origine dati.|
|[CDaoWorkspace::GetLoginTimeout](#getlogintimeout)|Restituisce il numero di secondi prima che si verifica un errore quando l'utente tenta di accedere a un database ODBC.|
|[CDaoWorkspace::GetName](#getname)|Restituisce il nome definito dall'utente per l'oggetto dell'area di lavoro.|
|[CDaoWorkspace::GetUserName](#getusername)|Restituisce che il nome utente specificato quando è stato creato l'area di lavoro. Si tratta del nome del proprietario dell'area di lavoro.|
|[CDaoWorkspace::GetVersion](#getversion)|Restituisce una stringa che contiene la versione del motore di database associato con l'area di lavoro.|
|[CDaoWorkspace::GetWorkspaceCount](#getworkspacecount)|Restituisce il numero di oggetti DAO dell'area di lavoro nella raccolta di aree di lavoro del motore di database.|
|[CDaoWorkspace::GetWorkspaceInfo](#getworkspaceinfo)|Restituisce informazioni su un'area di lavoro DAO specificato definito nella raccolta di aree di lavoro del motore di database.|
|[CDaoWorkspace::Idle](#idle)|Consente al motore di database eseguire le attività in background.|
|[CDaoWorkspace::IsOpen](#isopen)|Aprire restituisce diverso da zero se l'area di lavoro.|
|[Inutilizzabile](#open)|Verrà aperto in modo esplicito un oggetto dell'area di lavoro associato all'area di lavoro predefinita del DAO.|
|[CDaoWorkspace::RepairDatabase](#repairdatabase)|Prova a ripristinare un database danneggiato.|
|[CDaoWorkspace::Rollback](#rollback)|Termina la transazione corrente e non salva le modifiche.|
|[CDaoWorkspace::SetDefaultPassword](#setdefaultpassword)|Imposta la password utilizzata dal motore di database quando viene creato un oggetto dell'area di lavoro senza una password specifica.|
|[CDaoWorkspace::SetDefaultUser](#setdefaultuser)|Imposta il nome utente utilizzato dal motore di database quando viene creato un oggetto dell'area di lavoro senza un nome utente specifico.|
|[CDaoWorkspace::SetIniPath](#setinipath)|Imposta il percorso del database Microsoft Jet di impostazioni di inizializzazione del modulo nel Registro di sistema Windows.|
|[CDaoWorkspace::SetIsolateODBCTrans](#setisolateodbctrans)|Specifica se più transazioni che interessano la stessa origine dati ODBC vengono isolate, forzando più connessioni all'origine dati.|
|[CDaoWorkspace::SetLoginTimeout](#setlogintimeout)|Imposta il numero di secondi prima che si verifica un errore quando l'utente tenta di accedere a un'origine dati ODBC.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoWorkspace::m_pDAOWorkspace](#m_pdaoworkspace)|Punta all'oggetto DAO dell'area di lavoro sottostante.|

## <a name="remarks"></a>Note

Nella maggior parte dei casi, non sarà necessario più aree di lavoro e non è necessario creare gli oggetti dell'area di lavoro esplicita; Quando si aprono gli oggetti di database e recordset, utilizzano l'area di lavoro predefinita del DAO. Tuttavia, se necessario, è possibile eseguire più sessioni alla volta mediante la creazione di oggetti aggiuntivi dell'area di lavoro. Ogni oggetto dell'area di lavoro può contenere più oggetti di database aperta nella propria raccolta di database. In MFC, un'area di lavoro è principalmente un gestore delle transazioni, specificare un set di database aperti tutti nella stessa "lo spazio delle transazioni".

> [!NOTE]
>  Le classi database DAO sono diverse dalle classi di database MFC basate su Open Database Connectivity (ODBC). Tutti i nomi delle classi database DAO hanno un prefisso "CDao". In generale, le classi MFC basate su DAO sono più in grado di supportare rispetto alle classi MFC basate su ODBC. Le classi basate su DAO accedere ai dati tramite il motore di database Microsoft Jet, inclusi i driver ODBC. Supportano inoltre le operazioni di Data Definition Language (DDL), ad esempio la creazione di database e l'aggiunta di tabelle e campi tramite le classi, senza la necessità di chiamare direttamente DAO.

## <a name="capabilities"></a>Funzionalità

Classe `CDaoWorkspace` presenta le caratteristiche seguenti:

- Accesso esplicito, se necessario, per un'area di lavoro predefinito, creato per l'inizializzazione del motore di database. In genere l'area di lavoro predefinita del DAO è utilizzare in modo implicito tramite la creazione di oggetti di database e recordset.

- Uno spazio di transazione in cui le transazioni si applicano a tutti i database aprire nell'area di lavoro. È possibile creare nuove aree di lavoro per gestire spazi di transazione separata.

- Un'interfaccia per molte proprietà del motore di database Microsoft Jet sottostante (vedere le funzioni membro statiche). Apertura o creazione di un'area di lavoro o si chiama una funzione membro statico prima di aprire o creare, inizializza il motore di database.

- Accesso alla raccolta di aree di lavoro del motore di database, che archivia tutte le aree di lavoro attive che sono stati accodati a esso. È anche possibile creare e utilizzare aree di lavoro senza aggiungerli alla raccolta.

## <a name="security"></a>Sicurezza

MFC non implementa le raccolte di utenti e gruppi in DAO, utilizzati per il controllo di sicurezza. Se è necessario gli aspetti del DAO, è necessario programmarle tramite le chiamate dirette alle interfacce DAO. Per informazioni, vedere [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).

## <a name="usage"></a>Utilizzo

È possibile usare classi `CDaoWorkspace` per:

- Aprire in modo esplicito l'area di lavoro predefinita.

     In genere l'uso dell'area di lavoro predefinita è implicito, quando si apre nuove [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) oppure [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetti. Ma potrebbe essere necessario accedervi in modo esplicito, ad esempio, per accedere alle proprietà del motore di database o la raccolta di aree di lavoro. Vedere "Uso implicito di area di lavoro predefinita" più avanti.

- Creare nuove aree di lavoro. Chiamare [Append](#append) se si desidera aggiungerli nella raccolta di aree di lavoro.

- Aprire un'area di lavoro esistente nella raccolta di aree di lavoro.

Creazione di una nuova area di lavoro che non esiste già nelle aree di lavoro è descritta nella raccolta di [Create](#create) funzione membro. Gli oggetti dell'area di lavoro non vengono mantenute in alcun modo tra le sessioni del motore di un database. Se l'applicazione collegata a MFC in modo statico, terminare l'applicazione non inizializza il motore di database. Se l'applicazione si collega con MFC in modo dinamico, il motore di database non è inizializzato quando la DLL MFC viene scaricata.

Aprendo l'area di lavoro predefinita in modo esplicito o aprire un'area di lavoro esistente nella raccolta di aree di lavoro, viene descritto sotto il [Open](#open) funzione membro.

Terminare una sessione di area di lavoro chiudendo l'area di lavoro con il [Chiudi](#close) funzione membro. `Close` Chiude tutti i database che non è stata chiusa in precedenza, eseguire il rollback delle transazioni non sottoposte a commit.

## <a name="transactions"></a>Transazioni

DAO gestisce transazioni a livello di area di lavoro; di conseguenza, le transazioni in un'area di lavoro con più database aperti si applicano a tutti i database. Ad esempio, se due database hanno commit degli aggiornamenti e si chiama [CommitTrans](#committrans), tutti gli aggiornamenti viene eseguito il commit. Se si desidera limitare le transazioni a un singolo database, è necessario un oggetto area di lavoro separata per tale.

## <a name="implicit-use-of-the-default-workspace"></a>Uso implicito di area di lavoro predefinita

MFC utilizza area di lavoro predefinita del DAO in modo implicito nelle circostanze seguenti:

- Se si crea una nuova `CDaoDatabase` dell'oggetto, ma non viene specificato tramite un oggetto esistente `CDaoWorkspace` dell'oggetto, MFC crea un oggetto dell'area di lavoro temporanee, che corrisponde all'area di lavoro predefinita del DAO. Se in questo caso per più database, tutti gli oggetti di database associati all'area di lavoro predefinita. È possibile accedere a area di lavoro di un database tramite un `CDaoDatabase` (membro dati).

- Analogamente, se si crea una `CDaoRecordset` oggetto senza specificare un puntatore a un `CDaoDatabase` dell'oggetto, MFC crea un oggetto di database temporaneo e, di conseguenza, un oggetto temporaneo dell'area di lavoro. È possibile accedere a database di un oggetto recordset e indirettamente relativa area di lavoro, tramite un `CDaoRecordset` (membro dati).

## <a name="other-operations"></a>Altre operazioni

Vengono fornite anche altre operazioni di database, ad esempio il ripristino di un database danneggiato o la compattazione di un database.

Per informazioni sulla chiamata a DAO direttamente e sulla sicurezza DAO, vedere [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CDaoWorkspace`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdao. h

##  <a name="append"></a>  CDaoWorkspace::Append

Chiamare questa funzione membro dopo aver chiamato [Create](#create).

```
virtual void Append();
```

### <a name="remarks"></a>Note

`Append` Aggiunge un oggetto dell'area di lavoro appena creato alla raccolta di aree di lavoro del motore di database. Le aree di lavoro non vengono mantenute tra le sessioni del motore di database; sono archiviati solo in memoria, non su disco. Non è necessario aggiungere un'area di lavoro; in caso contrario, si può comunque usarlo.

Un'area di lavoro accodato rimane nella raccolta di aree di lavoro, in un oggetto attivo, stato aperto, finché non si chiama il [Chiudi](#close) funzione membro.

Per informazioni correlate, vedere l'argomento "Aggiunta Method" nella Guida di DAO.

##  <a name="begintrans"></a>  CDaoWorkspace::BeginTrans

Chiamare questa funzione membro per avviare una transazione.

```
void BeginTrans();
```

### <a name="remarks"></a>Note

Dopo aver chiamato `BeginTrans`, gli aggiornamenti apportati alla struttura del database o i dati vengono applicate quando si esegue il commit della transazione. Dato che l'area di lavoro definisce uno spazio di singola transazione, la transazione si applica a tutti i database aperti nell'area di lavoro. Esistono due modi per completare la transazione:

- Chiamare il [CommitTrans](#committrans) funzione membro per il commit della transazione e salvare le modifiche apportate all'origine dati.

- O chiamare il [Rollback](#rollback) funzione membro di annullare la transazione.

Chiudere l'oggetto dell'area di lavoro o un oggetto di database, mentre una transazione è in sospeso rollback di tutte le transazioni in sospeso.

Se è necessario isolare le transazioni in un'origine dati ODBC rispetto a quelli in un'altra origine dati ODBC, vedere la [SetIsolateODBCTrans](#setisolateodbctrans) funzione membro.

##  <a name="cdaoworkspace"></a>  CDaoWorkspace::CDaoWorkspace

Costruisce un oggetto `CDaoWorkspace`.

```
CDaoWorkspace();
```

### <a name="remarks"></a>Note

Dopo la costruzione dell'oggetto di C++, sono disponibili due opzioni:

- Chiamare l'oggetto [aprire](#open) funzione membro per aprire l'area di lavoro predefinito o per aprire un oggetto esistente nella raccolta di aree di lavoro.

- O chiamare l'oggetto [Create](#create) funzione membro per creare un nuovo oggetto dell'area di lavoro DAO. Verrà avviata in modo esplicito una nuova sessione di area di lavoro, è possibile fare riferimento tramite il `CDaoWorkspace` oggetto. Dopo avere chiamato `Create`, è possibile chiamare [Append](#append) se si desidera aggiungere l'area di lavoro alla raccolta di aree di lavoro del motore di database.

Vedere i cenni preliminari sulla classe [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) per informazioni su quando è necessario creare in modo esplicito un `CDaoWorkspace` oggetto. In genere, si usano le aree di lavoro create in modo implicito quando si apre un [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) oggetto senza specificare un'area di lavoro o quando si apre un [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto senza specificare un oggetto di database. Gli oggetti DAO MFC creati in questo modo usano area di lavoro predefinita del DAO, viene creata una sola volta e riutilizzata.

Per rilasciare un'area di lavoro e oggetti in essa contenuti, chiamare l'oggetto workspace [Chiudi](#close) funzione membro.

##  <a name="close"></a>  CDaoWorkspace::Close

Chiamare questa funzione membro per chiudere l'oggetto dell'area di lavoro.

```
virtual void Close();
```

### <a name="remarks"></a>Note

Chiusura di un oggetto Apri area di lavoro rilascia l'oggetto DAO sottostante e, se l'area di lavoro è un membro della raccolta di aree di lavoro, lo rimuove dalla raccolta. La chiamata `Close` è buona norma.

> [!CAUTION]
>  Chiusura di un oggetto dell'area di lavoro chiude tutti i database aperti nell'area di lavoro. Ciò comporta in tutti i recordset aperti nei database in corso la chiusura anche ed eventuali modifiche in sospeso o gli aggiornamenti vengono eseguito il rollback. Per informazioni correlate, vedere la [CDaoDatabase::Close](../../mfc/reference/cdaodatabase-class.md#close), [CDaoRecordset::Close](../../mfc/reference/cdaorecordset-class.md#close), [CDaoTableDef::Close](../../mfc/reference/cdaotabledef-class.md#close), e [CDaoQueryDef::Close](../../mfc/reference/cdaoquerydef-class.md#close) funzioni membro.

Gli oggetti dell'area di lavoro non sono permanenti; Esistono solo mentre sono presenti riferimenti a essi. Ciò significa che al termine della sessione di motore di database, l'area di lavoro e la relativa raccolta di database non vengono mantenute. È necessario ricreare tali per la sessione successiva, aprire l'area di lavoro e i database nuovamente.

Per informazioni correlate, vedere l'argomento "Chiudi Method" nella Guida di DAO.

##  <a name="committrans"></a>  CDaoWorkspace:: CommitTrans

Chiamare questa funzione membro per eseguire il commit di una transazione, salvare un gruppo di aggiornamenti e modifiche in uno o più database nell'area di lavoro.

```
void CommitTrans();
```

### <a name="remarks"></a>Note

Una transazione è costituito da una serie di modifiche ai dati del database o la relativa struttura, a partire da una chiamata a [BeginTrans](#begintrans). Al termine della transazione, uno esegue il commit o rollback, (annullare le modifiche) con [Rollback](#rollback). Per impostazione predefinita, senza transazioni, gli aggiornamenti dei record vengono eseguito il commit immediatamente. La chiamata `BeginTrans` impegno degli aggiornamenti per essere ritardata fino alla chiamata comporta `CommitTrans`.

> [!CAUTION]
>  All'interno di un'area di lavoro, le transazioni sono sempre globali all'area di lavoro e non sono limitate a un solo database o un recordset. Se si eseguono operazioni su più di un database o un recordset in una transazione, dell'area di lavoro `CommitTrans` commit tutti gli aggiornamenti, in sospeso e `Rollback` Ripristina tutte le operazioni su tali database e Recordset.

Quando si chiude un database o l'area di lavoro con le transazioni in sospeso, il rollback delle transazioni vengono tutti.

> [!NOTE]
>  Ciò non è un meccanismo di commit in due fasi. Se un aggiornamento non riesce a eseguire il commit, altri ancora eseguirà il commit.

##  <a name="compactdatabase"></a>  CDaoWorkspace:: CompactDatabase

Chiamare questa funzione membro per compattare un specificata di Microsoft Jet (. Database MDB).

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
Il nome di un oggetto esistente, chiuso del database. Può essere un percorso completo e nome file, ad esempio "c:\\\MYDB. MDB". Se il nome del file ha un'estensione, è necessario specificarlo. Se la rete supporta la convenzione di denominazione uniforme (UNC), è possibile anche specificare un percorso di rete, ad esempio "\\\\\\\MYSERVER\\\MYSHARE\\\MYDIR\\\MYDB. MDB". (Sono necessarie le barre rovesciate doppie nelle stringhe di percorso perché "\\" è il carattere di escape di C++.)

*lpszDestName*<br/>
Il percorso completo del database compattato che si sta creando. È anche possibile specificare un percorso di rete come con *lpszSrcName*. Non è possibile usare la *lpszDestName* argomento per specificare il file del database stesso *lpszSrcName*.

*lpszPassword*<br/>
Una password, usata quando si desidera compattare un database protetto da password. Si noti che se si usa la versione di `CompactDatabase` che accetta una password, è necessario fornire tutti i parametri. Inoltre, poiché si tratta di un parametro di connect, richiede una formattazione speciale, come indicato di seguito:; PWD = *lpszPassword*. Ad esempio:; PWD = "Buona". (Il punto e virgola iniziale è obbligatorio).

*lpszLocale*<br/>
Un'espressione stringa utilizzata per specificare l'ordinamento per la creazione *lpszDestName*. Se si omette questo argomento per accettare il valore predefinito di `dbLangGeneral` (vedere sotto), le impostazioni locali del nuovo database sono uguale a quello del database precedente. I possibili valori sono:

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

*nOptions*<br/>
Indica una o più opzioni per il database di destinazione *lpszDestName*. Se si omette questo argomento per accettare il valore predefinito, il *lpszDestName* avrà la stessa versione e la crittografia stessa *lpszSrcName*. È possibile combinare le `dbEncrypt` o `dbDecrypt` opzione con una delle opzioni di versione usando l'operatore OR bit per bit. I valori possibili, che specificano un formato di database, non una versione del motore del database, sono:

- `dbEncrypt` Crittografare il database durante la compattazione.

- `dbDecrypt` Decrittografare il database durante la compattazione.

- `dbVersion10` Creare un database che utilizza la versione del motore di database Microsoft Jet 1.0 durante la compattazione.

- `dbVersion11` Creare un database che utilizza la versione del motore di database Microsoft Jet 1.1 durante la compattazione.

- `dbVersion20` Creare un database che utilizza la versione del motore di database Microsoft Jet 2.0 durante la compattazione.

- `dbVersion30` Creare un database che utilizza la versione del motore di database Microsoft Jet 3.0 durante la compattazione.

È possibile usare `dbEncrypt` o `dbDecrypt` nell'argomento le opzioni per specificare se crittografare o decrittografare il database come alla compattazione. Se si omette una costante di crittografia o se si includono entrambe `dbDecrypt` e `dbEncrypt`, *lpszDestName* avranno la stessa crittografia come *lpszSrcName*. È possibile usare una delle costanti di versione nell'argomento di opzioni per specificare la versione del formato dati per il database compattato. Questa costante interessa solo la versione del formato dei dati *lpszDestName*. È possibile specificare solo una costante di versione. Se si omette una costante, versione *lpszDestName* avrà la stessa versione *lpszSrcName*. È possibile compattare *lpszDestName* solo a una versione uguale o successiva a quella dei *lpszSrcName*.

> [!CAUTION]
>  Se un database non è crittografato, è possibile, anche se si implementa protezione utente/password, per leggere direttamente il file del disco binario che costituisce il database.

### <a name="remarks"></a>Note

Quando si modificano i dati in un database, il file di database può diventare frammentato e usare più spazio su disco necessario. Periodicamente, è necessario compattare il database per deframmentare il file di database. Il database compattato è generalmente più piccolo. È anche possibile scegliere modificare la sequenza di ordinamento, la crittografia o la versione del formato dati durante la copia e la compressione del database.

> [!CAUTION]
>  Il `CompactDatabase` funzione membro non correttamente convertirà un database Microsoft Access completo da una versione a altra. Solo il formato dei dati viene convertito. Microsoft Access-oggetti definiti, ad esempio moduli e report, non vengono convertiti. Tuttavia, i dati vengono convertiti in modo corretto.

> [!TIP]
>  È anche possibile usare `CompactDatabase` per copiare un file di database.

Per altre informazioni sulla compattazione dei database, vedere l'argomento "CompactDatabase Method" nella Guida di DAO.

##  <a name="create"></a>  CDaoWorkspace:: Create

Chiamare questa funzione membro per creare un nuovo oggetto dell'area di lavoro DAO e associarlo a MFC `CDaoWorkspace` oggetto.

```
virtual void Create(
    LPCTSTR lpszName,
    LPCTSTR lpszUserName,
    LPCTSTR lpszPassword);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Stringa con un massimo di 14 caratteri che identifica in modo univoco il nuovo oggetto dell'area di lavoro. È necessario fornire un nome. Per informazioni correlate, vedere l'argomento "Proprietà di nome" nella Guida di DAO.

*lpszUserName*<br/>
Il nome utente del proprietario dell'area di lavoro. Per informazioni sui requisiti, vedere la *lpszDefaultUser* parametro per il [SetDefaultUser](#setdefaultuser) funzione membro. Per informazioni correlate, vedere l'argomento "Proprietà UserName" nella Guida di DAO.

*lpszPassword*<br/>
La password per il nuovo oggetto dell'area di lavoro. Una password può essere lunga fino a 14 caratteri e può contenere qualsiasi carattere tranne ASCII 0 (null). Le password sono tra maiuscole e minuscole. Per informazioni correlate, vedere l'argomento "Proprietà della Password" nella Guida di DAO.

### <a name="remarks"></a>Note

Il processo di creazione generale è:

1. Creare un [CDaoWorkspace](#cdaoworkspace) oggetto.

1. Chiamare l'oggetto `Create` funzione membro per creare l'area di lavoro DAO sottostante. È necessario specificare un nome dell'area di lavoro.

1. Facoltativamente è possibile chiamare [Append](#append) se si desidera aggiungere l'area di lavoro alla raccolta di aree di lavoro del motore di database. È possibile lavorare con l'area di lavoro senza accodarlo.

Dopo il `Create` chiamata, l'oggetto dell'area di lavoro è nello stato aperto, pronto per l'uso. Non è necessario chiamare `Open` dopo aver `Create`. Non è necessario chiamare `Create` se l'area di lavoro esiste già nella raccolta di aree di lavoro. `Create` Inizializza il motore di database se non è già stato inizializzato per l'applicazione.

##  <a name="getdatabasecount"></a>  CDaoWorkspace::GetDatabaseCount

Chiamare questa funzione membro per recuperare il numero di oggetti di database DAO nella raccolta di database dell'area di lavoro, ovvero il numero di database aperti nell'area di lavoro.

```
short GetDatabaseCount();
```

### <a name="return-value"></a>Valore restituito

Il numero di database aperti nell'area di lavoro.

### <a name="remarks"></a>Note

`GetDatabaseCount` è utile se è necessario eseguire un ciclo attraverso tutti i database definiti nella raccolta di database dell'area di lavoro. Per ottenere informazioni su un database specificato nella raccolta, vedere [GetDatabaseInfo](#getdatabaseinfo). Utilizzo tipico consiste nel chiamare `GetDatabaseCount` per il numero di database aperti, quindi utilizzare tale numero come un indice di ciclo per chiamate ripetute a `GetDatabaseInfo`.

##  <a name="getdatabaseinfo"></a>  CDaoWorkspace::GetDatabaseInfo

Chiamare questa funzione membro per ottenere i vari tipi di informazioni su un database aperto nell'area di lavoro.

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
Indice a base zero dell'oggetto di database nella raccolta di database dell'area di lavoro, per la ricerca in base all'indice.

*DBINFO*<br/>
Un riferimento a un [CDaoDatabaseInfo](../../mfc/reference/cdaodatabaseinfo-structure.md) oggetto che restituisce le informazioni richieste.

*dwInfoOptions*<br/>
Opzioni che specificano le informazioni relative al database da recuperare. Le opzioni disponibili sono elencate di seguito insieme a ciò che provocano la funzione restituisce:

- Nome AFX_DAO_PRIMARY_INFO (impostazione predefinita), aggiornabili, le transazioni

- Informazioni AFX_DAO_SECONDARY_INFO primaria oltre: Timeout della Query versione, ordine di ordinamento,

- AFX_DAO_ALL_INFO primario e più informazioni sul database secondari: Connect

*lpszName*<br/>
Il nome dell'oggetto di database, per la ricerca in base al nome. Il nome è una stringa con un massimo di 14 caratteri che identifica in modo univoco il nuovo oggetto dell'area di lavoro.

### <a name="remarks"></a>Note

Una versione della funzione consente di cercare un database in base all'indice. L'altra versione consente di cercare un database in base al nome.

Per una descrizione delle informazioni restituite *dbinfo*, vedere la [CDaoDatabaseInfo](../../mfc/reference/cdaodatabaseinfo-structure.md) struttura. Questa struttura contiene membri che corrispondono agli elementi elencati in precedenza nella descrizione del *dwInfoOptions*. Quando si richiedono informazioni su un unico livello, si ottiene le informazioni dei livelli precedenti oltre.

##  <a name="getinipath"></a>  CDaoWorkspace::GetIniPath

Chiamare questa funzione membro per ottenere la posizione del database Microsoft Jet di impostazioni di inizializzazione del modulo nel Registro di sistema Windows.

```
static CString PASCAL GetIniPath();
```

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) contenente il percorso del Registro di sistema.

### <a name="remarks"></a>Note

È possibile usare il percorso per ottenere informazioni sulle impostazioni per il motore di database. Le informazioni restituite sono effettivamente il nome di una sottochiave del Registro di sistema.

Per informazioni correlate, vedere gli argomenti "Proprietà IniPath" e "Personalizzazione di Windows del Registro di sistema le impostazioni per l'accesso dei dati" nella Guida di DAO.

##  <a name="getisolateodbctrans"></a>  CDaoWorkspace::GetIsolateODBCTrans

Chiamare questa funzione membro per ottenere il valore corrente della proprietà DAO IsolateODBCTrans per l'area di lavoro.

```
BOOL GetIsolateODBCTrans();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se le transazioni ODBC sono isolate; in caso contrario 0.

### <a name="remarks"></a>Note

In alcune situazioni, è necessario disporre di più transazioni simultanee in attesa sullo stesso database ODBC. A tale scopo, è necessario aprire un'area di lavoro separato per ogni transazione. Tenere presente che anche se ogni area di lavoro può avere la propria connessione ODBC per il database, ciò riduce le prestazioni del sistema. Poiché l'isolamento delle transazioni non è necessario in genere, le connessioni ODBC da più oggetti dell'area di lavoro aperti dall'utente stesso sono condivise per impostazione predefinita.

Alcuni server ODBC, ad esempio Microsoft SQL Server, non consentire le transazioni simultanee su una singola connessione. Se è necessario avere più di una transazione alla volta in sospeso su un database di questo tipo, impostare la proprietà IsolateODBCTrans su TRUE in ogni area di lavoro, non appena è aprirlo. Forza una connessione ODBC separata per ogni area di lavoro.

Per informazioni correlate, vedere l'argomento "Proprietà IsolateODBCTrans" nella Guida di DAO.

##  <a name="getlogintimeout"></a>  CDaoWorkspace::GetLoginTimeout

Chiamare questa funzione membro per ottenere il valore corrente della proprietà DAO LoginTimeout per l'area di lavoro.

```
static short PASCAL GetLoginTimeout();
```

### <a name="return-value"></a>Valore restituito

Il numero di secondi prima che si verifica un errore quando si tenta di accedere a un database ODBC.

### <a name="remarks"></a>Note

Questo valore rappresenta il numero di secondi prima che si verifica un errore quando si tenta di accedere a un database ODBC. L'impostazione di LoginTimeout predefinita è 20 secondi. Quando LoginTimeout viene impostato su 0, si verifica alcun timeout e la comunicazione con l'origine dati potrebbe smettere di rispondere.

Quando si sta tentando di accedere a un database ODBC, ad esempio Microsoft SQL Server, la connessione potrebbe non riuscire a causa di errori di rete o perché il server non è in esecuzione. Anziché attendere l'impostazione predefinita 20 secondi per la connessione, è possibile specificare il tempo di attesa motore di database prima di produrre un errore. Accesso al server avviene in modo implicito come parte di un numero di eventi diversi, ad esempio l'esecuzione di una query su un database del server esterno.

Per informazioni correlate, vedere l'argomento "Proprietà LoginTimeout" nella Guida di DAO.

##  <a name="getname"></a>  CDaoWorkspace::GetName

Chiamare questa funzione membro per ottenere il nome definito dall'utente di DAO dell'area di lavoro oggetto sottostante la `CDaoWorkspace` oggetto.

```
CString GetName();
```

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) contenente il nome dell'oggetto DAO dell'area di lavoro definiti dall'utente.

### <a name="remarks"></a>Note

Il nome è utile per l'accesso all'oggetto di workspace DAO nella raccolta di aree di lavoro del motore di database in base al nome.

Per informazioni correlate, vedere l'argomento "Proprietà di nome" nella Guida di DAO.

##  <a name="getusername"></a>  CDaoWorkspace::GetUserName

Chiamare questa funzione membro per ottenere il nome del proprietario dell'area di lavoro.

```
CString GetUserName();
```

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che rappresenta il proprietario dell'oggetto dell'area di lavoro.

### <a name="remarks"></a>Note

Per ottenere o impostare le autorizzazioni per il proprietario dell'area di lavoro, chiamare DAO direttamente per controllare l'impostazione della proprietà; le autorizzazioni Questa impostazione determina le autorizzazioni di cui dispone l'utente. Per lavorare con le autorizzazioni, è necessario un sistema. File assistente al debug gestito.

Per informazioni sulla chiamata di DAO direttamente, vedere [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md). Per informazioni correlate, vedere l'argomento "Proprietà UserName" nella Guida di DAO.

##  <a name="getversion"></a>  CDaoWorkspace::GetVersion

Chiamare questa funzione membro per determinare la versione del motore di database Microsoft Jet in uso.

```
static CString PASCAL GetVersion();
```

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) indica la versione del motore di database associato all'oggetto.

### <a name="remarks"></a>Note

Il valore restituito rappresenta il numero di versione nel formato "Major. minor"; ad esempio, "3.0". Il numero di versione del prodotto (ad esempio, 3.0) è costituito da un periodo, il numero di versione (3) e il numero di versione (0).

Per informazioni correlate, vedere l'argomento "Proprietà Version" nella Guida di DAO.

##  <a name="getworkspacecount"></a>  CDaoWorkspace::GetWorkspaceCount

Chiamare questa funzione membro per recuperare il numero di oggetti dell'area di lavoro DAO nella raccolta di aree di lavoro del motore di database.

```
short GetWorkspaceCount();
```

### <a name="return-value"></a>Valore restituito

Il numero di aree di lavoro aperti nella raccolta di aree di lavoro.

### <a name="remarks"></a>Note

Questo numero non include le aree di lavoro aperti non aggiunti alla raccolta. `GetWorkspaceCount` è utile se è necessario eseguire un ciclo attraverso tutte le aree di lavoro definiti nella raccolta di aree di lavoro. Per ottenere informazioni su un'area di lavoro nella raccolta, vedere [funzione membro GetWorkspaceInfo](#getworkspaceinfo). Utilizzo tipico consiste nel chiamare `GetWorkspaceCount` per il numero di aree di lavoro aperti, quindi utilizzare tale numero come un indice di ciclo per chiamate ripetute a `GetWorkspaceInfo`.

##  <a name="getworkspaceinfo"></a>  CDaoWorkspace::GetWorkspaceInfo

Chiamare questa funzione membro per ottenere i vari tipi di informazioni su un'area di lavoro aperta nella sessione.

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
Indice a base zero dell'oggetto di database dell'insieme di aree di lavoro, per la ricerca in base all'indice.

*wkspcinfo*<br/>
Un riferimento a un [CDaoWorkspaceInfo](../../mfc/reference/cdaoworkspaceinfo-structure.md) oggetto che restituisce le informazioni richieste.

*dwInfoOptions*<br/>
Opzioni che specificano le informazioni sull'area di lavoro da recuperare. Le opzioni disponibili sono elencate di seguito insieme a ciò che provocano la funzione restituisce:

- Nome AFX_DAO_PRIMARY_INFO (impostazione predefinita)

- Informazioni AFX_DAO_SECONDARY_INFO primaria oltre: nome utente

- AFX_DAO_ALL_INFO primario e più informazioni sul database secondari: isolare ODBCTrans

*lpszName*<br/>
Il nome dell'oggetto dell'area di lavoro, per la ricerca in base al nome. Il nome è una stringa con un massimo di 14 caratteri che identifica in modo univoco il nuovo oggetto dell'area di lavoro.

### <a name="remarks"></a>Note

Per una descrizione delle informazioni restituite *wkspcinfo*, vedere la [CDaoWorkspaceInfo](../../mfc/reference/cdaoworkspaceinfo-structure.md) struttura. Questa struttura contiene membri che corrispondono agli elementi elencati in precedenza nella descrizione del *dwInfoOptions*. Quando si richiedono informazioni su un unico livello, si ottiene informazioni per i livelli precedenti oltre.

##  <a name="idle"></a>  CDaoWorkspace::Idle

Chiamare `Idle` per fornire il motore di database con la possibilità di eseguire attività in background che potrebbe non essere aggiornata a causa l'elaborazione dati complesse.

```
static void PASCAL Idle(int nAction = dbFreeLocks);
```

### <a name="parameters"></a>Parametri

*nAction*<br/>
Un'azione da eseguire durante l'elaborazione inattiva. È attualmente l'unica azione valida `dbFreeLocks`.

### <a name="remarks"></a>Note

Ciò avviene spesso in ambienti multiutente e multitasking in cui non è sufficiente tempo di elaborazione in background per mantenere tutti i record in un recordset corrente.

> [!NOTE]
>  La chiamata a `Idle` non è necessaria con i database creati con la versione 3.0 del motore di database Microsoft Jet. Usare `Idle` solo per i database creati con le versioni precedenti.

In genere, vengono rimossi i blocchi di lettura e i dati in oggetti recordset di tipo dynaset locale viene aggiornata solo quando si verifica alcuna azione altri (inclusi gli spostamenti del mouse). Se si chiama periodicamente `Idle`, si forniscono il motore di database usando la durata aggiornati su rilasciando le attività di elaborazione in background non necessari blocchi in lettura. Specifica il `dbFreeLocks` costante come argomento Ritarda l'elaborazione fino a quando non vengono rilasciati tutti i blocchi in lettura.

Questa funzione membro non è necessaria negli ambienti di utente singolo, a meno che non si eseguono più istanze di un'applicazione. Il `Idle` funzione membro può migliorare le prestazioni in un ambiente multiutente poiché viene forzato il motore di database devono essere scaricate su disco, rilascio di blocchi di memoria. È inoltre possibile rilasciare i blocchi in lettura, rendendo parte di operazioni di una transazione.

Per informazioni correlate, vedere l'argomento "Idle Method" nella Guida di DAO.

##  <a name="isopen"></a>  CDaoWorkspace::IsOpen

Chiamare questa funzione membro per determinare se il `CDaoWorkspace` oggetto è aperto, vale a dire, se l'oggetto MFC è stato inizializzato da una chiamata a [aprire](#open) o una chiamata al [Create](#create).

```
BOOL IsOpen() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto dell'area di lavoro è aperta; in caso contrario 0.

### <a name="remarks"></a>Note

È possibile chiamare qualsiasi del membro le funzioni di un'area di lavoro che si trova in stato aperto.

##  <a name="m_pdaoworkspace"></a>  CDaoWorkspace::m_pDAOWorkspace

Un puntatore all'oggetto DAO dell'area di lavoro sottostante.

### <a name="remarks"></a>Note

Usare questo membro dei dati se è necessario indirizzare l'accesso all'oggetto DAO sottostante. È possibile chiamare le interfacce dell'oggetto DAO tramite puntatore ' this '.

Per informazioni sull'accesso a oggetti DAO direttamente, vedere [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).

##  <a name="open"></a>  Inutilizzabile

Verrà aperto in modo esplicito un oggetto dell'area di lavoro associato all'area di lavoro predefinita del DAO.

```
virtual void Open(LPCTSTR lpszName = NULL);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Il nome dell'oggetto DAO dell'area di lavoro per aprire, ovvero una stringa con un massimo di 14 caratteri che identifica in modo univoco l'area di lavoro. Accettare il valore predefinito NULL aprire in modo esplicito l'area di lavoro predefinita. Per requisiti di denominazione, vedere la *lpszName* parametro per [crea](#create). Per informazioni correlate, vedere l'argomento "Proprietà di nome" nella Guida di DAO.

### <a name="remarks"></a>Note

Al termine della creazione un `CDaoWorkspace` oggetto, chiamare questa funzione membro per eseguire una delle operazioni seguenti:

- Aprire in modo esplicito l'area di lavoro predefinita. Passare NULL come *lpszName*.

- Aprire un oggetto esistente `CDaoWorkspace` (oggetto), un membro della raccolta di aree di lavoro, in base al nome. Passare un nome valido per un oggetto dell'area di lavoro esistente.

`Open` Inserisce l'oggetto dell'area di lavoro in stato aperto e inizializza anche il motore di database se non è già stato inizializzato per l'applicazione.

Anche se molte `CDaoWorkspace` funzioni possono essere chiamate solo dopo che è stata aperta l'area di lavoro, le funzioni membro seguenti, che operano sul motore di database, sono disponibili dopo la costruzione dell'oggetto C++, ma prima della chiamata a `Open`:

||||
|-|-|-|
|[creare](#create)|[GetVersion](#getversion)|[SetDefaultUser](#setdefaultuser)|
|[GetIniPath](#getinipath)|[Inattività](#idle)|[SetIniPath](#setinipath)|
|[GetLoginTimeout](#getlogintimeout)|[SetDefaultPassword](#setdefaultpassword)|[SetLoginTimeout](#setlogintimeout)|

##  <a name="repairdatabase"></a>  CDaoWorkspace::RepairDatabase

Chiamare questa funzione membro, se è necessario tentare di ripristinare un database danneggiato che accede al motore di database Microsoft Jet.

```
static void PASCAL RepairDatabase(LPCTSTR lpszName);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Il percorso e nome file per un file di database di gestione di Microsoft Jet esistenti. Se si omette il percorso, viene eseguita la ricerca solo la directory corrente. Se il sistema supporta la convenzione di denominazione uniforme (UNC), è possibile anche specificare un percorso di rete, ad esempio: "\\\\\\\MYSERVER\\\MYSHARE\\\MYDIR\\\MYDB. MDB". (Sono necessarie le barre rovesciate doppie nella stringa di percorso perché "\\" è il carattere di escape di C++.)

### <a name="remarks"></a>Note

È necessario chiudere il database specificato da *lpszName* prima di ripararlo. In un ambiente multiutente, gli altri utenti non possono avere *lpszName* apre mentre si stanno ripristinando lo. Se *lpszName* non è stato chiuso o non è disponibile per l'utilizzo esclusivo, si verifica un errore.

Questa funzione membro tenta di ripristinare un database in cui è stato contrassegnato come danneggiato da un'operazione di scrittura incompleta. Ciò può verificarsi se un'applicazione che usa il motore di database Microsoft Jet viene chiusa in modo imprevisto a causa di un problema hardware power interruzione o del computer. Se si completa l'operazione e chiamata di [Chiudi](../../mfc/reference/cdaodatabase-class.md#close) funzione membro o si chiude l'applicazione in modo normale, il database non verrà contrassegnato come potenzialmente danneggiato.

> [!NOTE]
>  Dopo il ripristino di un database, è anche consigliabile compattare usando il [CompactDatabase](#compactdatabase) funzione membro per deframmentare il file e per recuperare spazio su disco.

Per altre informazioni su come ripristinare i database, vedere l'argomento "RepairDatabase Method" nella Guida di DAO.

##  <a name="rollback"></a>  CDaoWorkspace::Rollback

Chiamare questa funzione membro per terminare la transazione corrente e ripristinare tutti i database nell'area di lavoro alla loro condizione prima che la transazione è stata iniziata.

```
void Rollback();
```

### <a name="remarks"></a>Note

> [!CAUTION]
>  All'interno di un oggetto dell'area di lavoro, le transazioni sono sempre globali all'area di lavoro e non sono limitate a un solo database o un recordset. Se si eseguono operazioni su più di un database o un recordset in una transazione area di lavoro, `Rollback` Ripristina tutte le operazioni su tutti i database e Recordset.

Se si chiude un oggetto dell'area di lavoro senza salvare o eseguire il rollback delle eventuali transazioni in sospeso, il rollback delle transazioni automaticamente. Se si chiama [CommitTrans](#committrans) oppure `Rollback` senza prima chiamare [BeginTrans](#begintrans), si verifica un errore.

> [!NOTE]
>  Quando si inizia una transazione, il motore di database registra le operazioni in un file che si trova nella directory specificata dalla variabile di ambiente TEMP nella workstation. Se il file di log delle transazioni esaurisce la memoria disponibile nell'unità TEMP, il motore di database causa MFC generare un `CDaoException` (errore DAO 2004). A questo punto, se si chiama `CommitTrans`, un numero indeterminato di operazioni viene eseguito il commit ma le operazioni rimanenti incompiute vengono perse e l'operazione deve essere riavviato. La chiamata a `Rollback` rilascia il log delle transazioni e il rollback di tutte le operazioni nella transazione.

##  <a name="setdefaultpassword"></a>  CDaoWorkspace::SetDefaultPassword

Chiamare questa funzione membro per impostare la password predefinito utilizzato dal motore di database quando viene creato un oggetto dell'area di lavoro senza una password specifica.

```
static void PASCAL SetDefaultPassword(LPCTSTR lpszPassword);
```

### <a name="parameters"></a>Parametri

*lpszPassword*<br/>
La password predefinita. Una password può essere lunga fino a 14 caratteri e può contenere qualsiasi carattere tranne ASCII 0 (null). Le password sono tra maiuscole e minuscole.

### <a name="remarks"></a>Note

La password predefinita è impostata si applica a nuove aree di lavoro che dopo la chiamata è stato creato. Quando si creano le aree di lavoro successivi, è necessario specificare una password nel [Create](#create) chiamare.

Per usare questa funzione membro:

1. Creare un `CDaoWorkspace` dell'oggetto, ma non chiamare `Create`.

1. Chiamare `SetDefaultPassword` e, se vuoi [SetDefaultUser](#setdefaultuser).

1. Chiamare `Create` per questo oggetto dell'area di lavoro o quelle successive, senza specificare una password.

Per impostazione predefinita, la proprietà DefaultUser è impostata su "admin" e la proprietà DefaultPassword è impostata su una stringa vuota ("").

Per altre informazioni su sicurezza, vedere l'argomento "Proprietà Permissions" nella Guida di DAO. Per informazioni correlate, vedere gli argomenti "DefaultPassword proprietà" e "DefaultUser Property" nella Guida di DAO.

##  <a name="setdefaultuser"></a>  CDaoWorkspace::SetDefaultUser

Chiamare questa funzione membro per impostare il nome utente predefinito utilizzato dal motore di database quando viene creato un oggetto dell'area di lavoro senza un nome utente specifico.

```
static void PASCAL SetDefaultUser(LPCTSTR lpszDefaultUser);
```

### <a name="parameters"></a>Parametri

*lpszDefaultUser*<br/>
Il nome utente predefinito. Un nome utente può essere 1 e 20 caratteri e includere i caratteri alfabetici, accenti, numeri, spazi e simboli, ad eccezione di: "(virgolette), / (barra), \ (barra rovesciata), \[ \] (parentesi),: (due punti), &#124; ( barra verticale), \< (meno-segno di maggiore di), > (maggiore-segno di maggiore di), + (segno più), = (segno di uguale), (punto e virgola,), (virgola), (punto interrogativo), \* (asterisco), spazi iniziali e caratteri di controllo (ASCII 00 a 31 ASCII). Per informazioni correlate, vedere l'argomento "Proprietà UserName" nella Guida di DAO.

### <a name="remarks"></a>Note

Il nome utente predefinito impostato si applica a nuove aree di lavoro che dopo la chiamata è stato creato. Quando si creano le aree di lavoro successivi, è necessario specificare un nome utente nel [Create](#create) chiamare.

Per usare questa funzione membro:

1. Creare un `CDaoWorkspace` dell'oggetto, ma non chiamare `Create`.

1. Chiamare `SetDefaultUser` e, se vuoi [SetDefaultPassword](#setdefaultpassword).

1. Chiamare `Create` per questo oggetto dell'area di lavoro o quelle successive, senza specificare un nome utente.

Per impostazione predefinita, la proprietà DefaultUser è impostata su "admin" e la proprietà DefaultPassword è impostata su una stringa vuota ("").

Per informazioni correlate, vedere gli argomenti "DefaultUser proprietà" e "DefaultPassword Property" nella Guida di DAO.

##  <a name="setinipath"></a>  CDaoWorkspace::SetIniPath

Chiamare questa funzione membro per specificare il percorso delle impostazioni del Registro di sistema di Windows per il motore di database Microsoft Jet.

```
static void PASCAL SetIniPath(LPCTSTR lpszRegistrySubKey);
```

### <a name="parameters"></a>Parametri

*lpszRegistrySubkey*<br/>
Stringa contenente il nome di una sottochiave del Registro di sistema di Windows per il percorso dei parametri necessari per i database ISAM installabili o le impostazioni del motore di database Microsoft Jet.

### <a name="remarks"></a>Note

Chiamare `SetIniPath` solo se è necessario specificare impostazioni speciali. Per altre informazioni, vedere l'argomento "Proprietà IniPath" nella Guida di DAO.

> [!NOTE]
>  Chiamare `SetIniPath` durante l'installazione dell'applicazione, non quando viene eseguita l'applicazione. `SetIniPath` deve essere chiamato prima di aprire eventuali aree di lavoro, un database o un recordset; in caso contrario, MFC genera un'eccezione.

È possibile utilizzare questo meccanismo per configurare il motore di database con le impostazioni del Registro di sistema fornito dall'utente. L'ambito di questo attributo è limitato all'applicazione e non può essere modificato senza dover riavviare l'applicazione.

##  <a name="setisolateodbctrans"></a>  CDaoWorkspace::SetIsolateODBCTrans

Chiamare questa funzione membro per impostare il valore della proprietà DAO IsolateODBCTrans per l'area di lavoro.

```
void SetIsolateODBCTrans(BOOL bIsolateODBCTrans);
```

### <a name="parameters"></a>Parametri

*bIsolateODBCTrans*<br/>
Passare TRUE se si desidera iniziare l'isolamento delle transazioni ODBC. Passare FALSE se si desidera interrompere l'isolamento delle transazioni ODBC.

### <a name="remarks"></a>Note

In alcune situazioni, è necessario disporre di più transazioni simultanee in attesa sullo stesso database ODBC. A tale scopo, è necessario aprire un'area di lavoro separato per ogni transazione. Anche se ogni area di lavoro può avere la propria connessione ODBC per il database, ciò determina un rallentamento delle prestazioni del sistema. Poiché l'isolamento delle transazioni non è necessario in genere, le connessioni ODBC da più oggetti dell'area di lavoro aperti dall'utente stesso sono condivise per impostazione predefinita.

Alcuni server ODBC, ad esempio Microsoft SQL Server, non consentire le transazioni simultanee su una singola connessione. Se è necessario avere più di una transazione alla volta in sospeso su un database di questo tipo, impostare la proprietà IsolateODBCTrans su TRUE in ogni area di lavoro, non appena è aprirlo. Forza una connessione ODBC separata per ogni area di lavoro.

##  <a name="setlogintimeout"></a>  CDaoWorkspace::SetLoginTimeout

Chiamare questa funzione membro per impostare il valore della proprietà DAO LoginTimeout per l'area di lavoro.

```
static void PASCAL SetLoginTimeout(short nSeconds);
```

### <a name="parameters"></a>Parametri

*nSecondi*<br/>
Il numero di secondi prima che si verifica un errore quando si tenta di accedere a un database ODBC.

### <a name="remarks"></a>Note

Questo valore rappresenta il numero di secondi prima che si verifica un errore quando si tenta di accedere a un database ODBC. L'impostazione di LoginTimeout predefinita è 20 secondi. Quando LoginTimeout viene impostato su 0, si verifica alcun timeout e la comunicazione con l'origine dati potrebbe smettere di rispondere.

Quando si sta tentando di accedere a un database ODBC, ad esempio Microsoft SQL Server, la connessione potrebbe non riuscire a causa di errori di rete o perché il server non è in esecuzione. Anziché attendere l'impostazione predefinita 20 secondi per la connessione, è possibile specificare il tempo di attesa motore di database prima di produrre un errore. L'accesso al server avviene in modo implicito come parte di un numero di eventi diversi, ad esempio l'esecuzione di una query su un database del server esterno. Il valore di timeout è determinato dall'impostazione corrente della proprietà LoginTimeout.

Per informazioni correlate, vedere l'argomento "Proprietà LoginTimeout" nella Guida di DAO.

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CDaoDatabase](../../mfc/reference/cdaodatabase-class.md)<br/>
[Classe CDaoRecordset](../../mfc/reference/cdaorecordset-class.md)<br/>
[Classe CDaoTableDef](../../mfc/reference/cdaotabledef-class.md)<br/>
[Classe CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md)<br/>
[Classe CDaoException](../../mfc/reference/cdaoexception-class.md)
