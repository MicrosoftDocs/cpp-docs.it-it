---
title: Classe CDaoWorkspace | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDaoWorkspace
dev_langs:
- C++
helpviewer_keywords:
- DAO workspaces [C++]
- transaction spaces [C++], DAO workspace
- ODBC classes [C++], vs. DAO classes
- default workspaces [C++], DAO
- workspaces [C++], DAO
- sessions [C++], DAO workspace
- Workspace class
- CDaoWorkspace class
- workspaces [C++], interface to database engine
- Workspaces collection
- persistence [C++], DAO workspace
- workspaces [C++], default
- defaults [C++], workspaces
- DAO workspaces [C++], CDaoWorkspace class
- security [MFC], DAO workspaces
- security [MFC]
- database engine [C++], accessing via workspace
- transaction spaces [C++]
- DDLs [C++]
- workspaces [C++], persistence
- default workspaces [C++]
ms.assetid: 64f60de6-4df1-4d4a-a65b-c489b5257d52
caps.latest.revision: 24
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 5d7f9aea6fa4913641bc92662b3cf5dfeaddb9d8
ms.lasthandoff: 02/24/2017

---
# <a name="cdaoworkspace-class"></a>CDaoWorkspace (classe)
Gestisce una sessione di database denominata e protetta da password, dall'accesso alla disconnessione, di un singolo utente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CDaoWorkspace : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoWorkspace::CDaoWorkspace](#cdaoworkspace)|Costruisce un oggetto dell'area di lavoro. Successivamente, chiamare **crea** o **aprire**.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoWorkspace::Append](#append)|Aggiunge un'area di lavoro appena creato alla raccolta di aree di lavoro del motore di database.|  
|[CDaoWorkspace::BeginTrans](#begintrans)|Inizia una nuova transazione, si applica a tutti i database aperti nell'area di lavoro.|  
|[CDaoWorkspace::Close](#close)|Chiude l'area di lavoro e tutti gli oggetti contenuti. Le transazioni in sospeso il rollback.|  
|[CDaoWorkspace:: CommitTrans](#committrans)|Completa la transazione corrente e Salva le modifiche.|  
|[CDaoWorkspace:: CompactDatabase](#compactdatabase)|Compatta un database (o duplicati).|  
|[CDaoWorkspace:: Create](#create)|Crea un nuovo oggetto workspace DAO.|  
|[CDaoWorkspace::GetDatabaseCount](#getdatabasecount)|Restituisce il numero di oggetti di database DAO nella raccolta di database dell'area di lavoro.|  
|[CDaoWorkspace::GetDatabaseInfo](#getdatabaseinfo)|Restituisce informazioni su un database DAO specificato definito nell'insieme di database dell'area di lavoro.|  
|[CDaoWorkspace::GetIniPath](#getinipath)|Restituisce il percorso del database Microsoft Jet impostazioni di inizializzazione del modulo del Registro di sistema.|  
|[CDaoWorkspace::GetIsolateODBCTrans](#getisolateodbctrans)|Restituisce un valore che indica se più transazioni che interessano la stessa origine dati ODBC sono isolate tramite più connessioni all'origine dati.|  
|[CDaoWorkspace::GetLoginTimeout](#getlogintimeout)|Restituisce il numero di secondi prima che si verifica un errore quando l'utente tenta di accedere a un database ODBC.|  
|[CDaoWorkspace::GetName](#getname)|Restituisce il nome definito dall'utente per l'oggetto workspace.|  
|[CDaoWorkspace::GetUserName](#getusername)|Restituisce che il nome utente specificato quando è stato creato l'area di lavoro. Questo è il nome del proprietario dell'area di lavoro.|  
|[CDaoWorkspace::GetVersion](#getversion)|Restituisce una stringa che contiene la versione del motore di database associata all'area di lavoro.|  
|[CDaoWorkspace::GetWorkspaceCount](#getworkspacecount)|Restituisce il numero di oggetti DAO dell'area di lavoro nella raccolta di aree di lavoro del motore di database.|  
|[CDaoWorkspace::GetWorkspaceInfo](#getworkspaceinfo)|Restituisce informazioni su un'area di lavoro DAO specificato definito nella raccolta di aree di lavoro del motore di database.|  
|[CDaoWorkspace::Idle](#idle)|Consente al motore di database di eseguire attività in background.|  
|[CDaoWorkspace::IsOpen](#isopen)|Aprire restituisce diverso da zero se l'area di lavoro.|  
|[Inutilizzabile](#open)|Verrà aperto in modo esplicito un oggetto dell'area di lavoro associato all'area di lavoro predefinita DAO.|  
|[CDaoWorkspace::RepairDatabase](#repairdatabase)|Tenta di ripristinare un database danneggiato.|  
|[CDaoWorkspace::Rollback](#rollback)|Termina la transazione corrente e non salvare le modifiche.|  
|[CDaoWorkspace::SetDefaultPassword](#setdefaultpassword)|Imposta la password utilizzata dal motore di database quando viene creato un oggetto dell'area di lavoro senza una password specifica.|  
|[CDaoWorkspace::SetDefaultUser](#setdefaultuser)|Imposta il nome utente utilizzato dal motore di database quando viene creato un oggetto dell'area di lavoro senza un nome utente specifico.|  
|[CDaoWorkspace::SetIniPath](#setinipath)|Imposta il percorso del database Microsoft Jet impostazioni di inizializzazione del modulo del Registro di sistema.|  
|[CDaoWorkspace::SetIsolateODBCTrans](#setisolateodbctrans)|Specifica se più transazioni che interessano la stessa origine dati ODBC vengono isolate forzando più connessioni all'origine dati.|  
|[CDaoWorkspace::SetLoginTimeout](#setlogintimeout)|Imposta il numero di secondi prima che si verifica un errore quando l'utente tenta di accedere a un'origine dati ODBC.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoWorkspace::m_pDAOWorkspace](#m_pdaoworkspace)|Punta all'oggetto workspace DAO sottostante.|  
  
## <a name="remarks"></a>Note  
 Nella maggior parte dei casi, non sarà necessario più aree di lavoro e non è necessario creare gli oggetti workspace espliciti; Quando si aprono database e gli oggetti recordset, utilizzano l'area di lavoro predefinita DAO. Tuttavia, se necessario, è possibile eseguire più sessioni contemporaneamente creando oggetti aggiuntive dell'area di lavoro. Ogni oggetto dell'area di lavoro può contenere più oggetti di database aperti in un proprio insieme di database. In MFC, un'area di lavoro è principalmente un gestore delle transazioni, specificare un set di database aperti tutti nella stessa "spazio di transazione".  
  
> [!NOTE]
>  Le classi di database DAO sono distinte dalle classi di database MFC basate su ODBC Open Database Connectivity (). Tutti i nomi delle classi di database DAO hanno un prefisso "CDao". In generale, le classi MFC basate su DAO sono più in grado di supportare più classi MFC basate su ODBC. Le classi basate su DAO accedere ai dati tramite il motore di database Microsoft Jet, inclusi i driver ODBC. Supportano inoltre le operazioni di Data Definition Language (DDL), ad esempio la creazione e l'aggiunta di tabelle e campi tramite le classi, senza dover chiamare direttamente DAO.  
  
## <a name="capabilities"></a>Funzionalità  
 Classe `CDaoWorkspace` fornisce quanto segue:  
  
-   Accesso esplicito, se necessario, per un'area di lavoro predefinito, creato per l'inizializzazione del motore di database. In genere l'area di lavoro predefinita DAO è utilizzare in modo implicito mediante la creazione di database e gli oggetti recordset.  
  
-   Apertura di uno spazio di transazione in cui le transazioni si applicano a tutti i database nell'area di lavoro. È possibile creare ulteriori aree di lavoro per gestire gli spazi di transazione separata.  
  
-   Un'interfaccia per molte proprietà del motore di database Microsoft Jet sottostante (vedere le funzioni membro statiche). Apertura o creazione di un'area di lavoro o la chiamata a una funzione membro statica prima di aprire o creare, consente di inizializzare il motore di database.  
  
-   Accesso alla raccolta di aree di lavoro del motore di database, che archivia tutte le aree di lavoro active che sono stati accodati a esso. È inoltre possibile creare e utilizzare aree di lavoro senza aggiungerli alla raccolta.  
  
## <a name="security"></a>Sicurezza  
 MFC non implementano le raccolte di utenti e gruppi in DAO, che vengono utilizzati per il controllo di sicurezza. Se è necessario quegli aspetti di DAO, è necessario programmarle tramite chiamate dirette alle interfacce DAO. Per informazioni, vedere [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).  
  
## <a name="usage"></a>Utilizzo  
 È possibile utilizzare una classe `CDaoWorkspace` per:  
  
-   Aprire in modo esplicito l'area di lavoro predefinito.  
  
     In genere l'utilizzo dell'area di lavoro predefinito è implicito, quando si apre nuove [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetti. Ma è possibile accedervi in modo esplicito, ad esempio, per proprietà di accesso ai database del motore o la raccolta di aree di lavoro. Vedere "Utilizzo implicito di area di lavoro predefinita" di seguito.  
  
-   Creare nuove aree di lavoro. Chiamare [Append](#append) se si desidera aggiungerli alla raccolta di aree di lavoro.  
  
-   Aprire un'area di lavoro nella raccolta di aree di lavoro.  
  
 Creazione di una nuova area di lavoro che non esiste già in aree di lavoro di raccolta è descritto nel [crea](#create) funzione membro. Gli oggetti dell'area di lavoro non vengono mantenute in alcun modo tra le sessioni del motore di database. Se l'applicazione collegata a MFC in modo statico, terminare l'applicazione non inizializza il motore di database. Se l'applicazione si collega con MFC in modo dinamico, il motore di database è non inizializzato quando la DLL di MFC viene scaricata.  
  
 Viene descritta in modo esplicito aprendo l'area di lavoro predefinito, o l'apertura di un'area di lavoro nella raccolta di aree di lavoro, nel [aprire](#open) funzione membro.  
  
 Terminare una sessione di area di lavoro, chiudere l'area di lavoro con il [Chiudi](#close) funzione membro. **Chiudi** chiude tutti i database non è stata chiusa in precedenza, eseguire il rollback di tutte le transazioni non salvate.  
  
## <a name="transactions"></a>Transazioni  
 DAO gestisce transazioni a livello di area di lavoro; di conseguenza, le transazioni in un'area di lavoro con più database aperti si applicano a tutti i database. Ad esempio, se due database hanno commit degli aggiornamenti e si chiama [CommitTrans](#committrans), tutti gli aggiornamenti viene eseguito il commit. Se si desidera limitare le transazioni a un singolo database, è necessario un oggetto area di lavoro separata per esso.  
  
## <a name="implicit-use-of-the-default-workspace"></a>Utilizzo implicito di area di lavoro predefinita  
 MFC utilizza l'area di lavoro predefinita DAO in modo implicito nelle circostanze seguenti:  
  
-   Se si crea un nuovo `CDaoDatabase` oggetto ma non viene specificato tramite un oggetto esistente `CDaoWorkspace` dell'oggetto, MFC crea un oggetto temporaneo dell'area di lavoro, che corrisponde all'area di lavoro predefinita DAO. In tal caso per più database, tutti gli oggetti di database associati all'area di lavoro predefinita. È possibile accedere a area di lavoro del database tramite un `CDaoDatabase` (membro dati).  
  
-   Analogamente, se si crea un `CDaoRecordset` oggetto senza fornire un puntatore a un `CDaoDatabase` dell'oggetto, MFC crea un oggetto di database temporaneo e, di conseguenza, un oggetto temporaneo dell'area di lavoro. È possibile accedere a database di un oggetto recordset e indirettamente relativa area di lavoro, tramite un `CDaoRecordset` (membro dati).  
  
## <a name="other-operations"></a>Altre operazioni  
 Vengono forniti anche altre operazioni di database, ad esempio il ripristino di un database danneggiato o la compattazione di un database.  
  
 Per informazioni sulla chiamata a DAO direttamente e sulla protezione DAO, vedere [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CDaoWorkspace`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
##  <a name="a-nameappenda--cdaoworkspaceappend"></a><a name="append"></a>CDaoWorkspace::Append  
 Chiamare questa funzione membro dopo la chiamata [crea](#create).  
  
```  
virtual void Append();
```  
  
### <a name="remarks"></a>Note  
 **Aggiungere** aggiunge un oggetto dell'area di lavoro appena creato alla raccolta di aree di lavoro del motore di database. Aree di lavoro non vengono mantenute tra le sessioni del motore di database; vengono archiviati solo in memoria, non su disco. Non è necessario aggiungere un'area di lavoro; in caso contrario, è possibile utilizzarlo.  
  
 Un'area di lavoro accodato rimane nella raccolta di aree di lavoro, in un oggetto attivo, stato aperto, finché non si chiama il relativo [Chiudi](#close) funzione membro.  
  
 Per informazioni correlate, vedere l'argomento "Metodo Append" nella Guida di DAO.  
  
##  <a name="a-namebegintransa--cdaoworkspacebegintrans"></a><a name="begintrans"></a>CDaoWorkspace::BeginTrans  
 Chiamare questa funzione membro per avviare una transazione.  
  
```  
void BeginTrans();
```  
  
### <a name="remarks"></a>Note  
 Dopo aver chiamato **BeginTrans**, gli aggiornamenti apportati alla struttura di dati o database hanno effetto quando si esegue il commit della transazione. Poiché l'area di lavoro definisce un unico spazio di transazione, la transazione si applica a tutti i database aperti nell'area di lavoro. Esistono due modi per completare la transazione:  
  
-   Chiamare il [CommitTrans](#committrans) funzione membro per il commit della transazione e salvare le modifiche all'origine dati.  
  
-   O chiamare il [Rollback](#rollback) funzione membro di annullare la transazione.  
  
 Chiudere l'oggetto dell'area di lavoro o un oggetto di database mentre è in sospeso una transazione rollback tutte le transazioni in sospeso.  
  
 Se si desidera isolare le transazioni in un'origine dati ODBC da quelle presenti in un'altra origine dati ODBC, vedere il [SetIsolateODBCTrans](#setisolateodbctrans) funzione membro.  
  
##  <a name="a-namecdaoworkspacea--cdaoworkspacecdaoworkspace"></a><a name="cdaoworkspace"></a>CDaoWorkspace::CDaoWorkspace  
 Costruisce un oggetto `CDaoWorkspace`.  
  
```  
CDaoWorkspace();
```  
  
### <a name="remarks"></a>Note  
 Dopo la costruzione dell'oggetto C++, sono disponibili due opzioni:  
  
-   Chiamare l'oggetto [aprire](#open) funzione membro per aprire l'area di lavoro predefinito o per aprire un oggetto esistente nella raccolta di aree di lavoro.  
  
-   O chiamare l'oggetto [crea](#create) funzione membro per creare un nuovo oggetto workspace DAO. Verrà avviata in modo esplicito una nuova sessione di area di lavoro, è possibile fare riferimento tramite il `CDaoWorkspace` oggetto. Dopo la chiamata **crea**, è possibile chiamare [Append](#append) se si desidera aggiungere l'area di lavoro alla raccolta di aree di lavoro del motore di database.  
  
 Vedere i cenni preliminari sulla classe [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) per informazioni su quando è necessario creare in modo esplicito un `CDaoWorkspace` oggetto. In genere, si utilizzano le aree di lavoro creati in modo implicito quando si apre un [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) oggetto senza specificare un'area di lavoro o quando si apre un [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto senza specificare un oggetto di database. Gli oggetti DAO MFC creati in questo modo utilizzano area di lavoro predefinita del DAO, viene creata una sola volta e riutilizzato.  
  
 Per rilasciare un'area di lavoro e i relativi oggetti contenuti, chiamare l'oggetto workspace [Chiudi](#close) funzione membro.  
  
##  <a name="a-nameclosea--cdaoworkspaceclose"></a><a name="close"></a>CDaoWorkspace::Close  
 Chiamare questa funzione membro per chiudere l'oggetto dell'area di lavoro.  
  
```  
virtual void Close();
```  
  
### <a name="remarks"></a>Note  
 Chiusura di un oggetto workspace aperto rilascia l'oggetto DAO sottostante e, se l'area di lavoro è un membro della raccolta di aree di lavoro, rimuove dalla raccolta. La chiamata a **Chiudi** è buona norma programmazione.  
  
> [!CAUTION]
>  Chiusura di un oggetto dell'area di lavoro chiude qualsiasi database aperti nell'area di lavoro. Di conseguenza, tutti i recordset aperti nei database viene chiuso e le modifiche in sospeso o gli aggiornamenti verranno annullati. Per informazioni correlate, vedere il [CDaoDatabase::Close](../../mfc/reference/cdaodatabase-class.md#close), [CDaoRecordset::Close](../../mfc/reference/cdaorecordset-class.md#close), [CDaoTableDef::Close](../../mfc/reference/cdaotabledef-class.md#close), e [CDaoQueryDef::Close](../../mfc/reference/cdaoquerydef-class.md#close) funzioni membro.  
  
 Gli oggetti dell'area di lavoro non sono permanenti; sono presenti solo mentre esistono riferimenti ad esse. Ciò significa che al termine della sessione di motore di database, l'area di lavoro e la relativa raccolta di database non vengono mantenute. È necessario crearli nuovamente la sessione successiva, aprire l'area di lavoro e i database nuovamente.  
  
 Per informazioni correlate, vedere l'argomento "Close (metodo)" nella Guida di DAO.  
  
##  <a name="a-namecommittransa--cdaoworkspacecommittrans"></a><a name="committrans"></a>CDaoWorkspace:: CommitTrans  
 Chiamare questa funzione membro per eseguire il commit di una transazione, salvare un gruppo di modifiche e aggiornamenti in uno o più database nell'area di lavoro.  
  
```  
void CommitTrans();
```  
  
### <a name="remarks"></a>Note  
 Una transazione è costituita da una serie di modifiche ai dati del database o la relativa struttura, a partire da una chiamata a [BeginTrans](#begintrans). Quando si completa la transazione, commit o il rollback (annullare le modifiche) con [Rollback](#rollback). Per impostazione predefinita, senza transazioni, gli aggiornamenti dei record vengano eseguiti immediatamente. La chiamata a **BeginTrans** provoca l'impegno degli aggiornamenti deve essere ritardata fino a quando non si chiama **CommitTrans**.  
  
> [!CAUTION]
>  All'interno di un'area di lavoro, le transazioni sono sempre globali all'area di lavoro e non sono limitate a un solo database o un recordset. Se si eseguono operazioni su più di un database o un recordset in una transazione dell'area di lavoro, **CommitTrans** commit tutti gli aggiornamenti, in sospeso e **Rollback** Ripristina tutte le operazioni su tali database e Recordset.  
  
 Quando si chiude un database o l'area di lavoro con le transazioni in sospeso, il rollback delle transazioni sono tutti.  
  
> [!NOTE]
>  Non è un meccanismo di commit in due fasi. Se un aggiornamento non riesce a eseguire il commit, altri ancora verrà eseguito il commit.  
  
##  <a name="a-namecompactdatabasea--cdaoworkspacecompactdatabase"></a><a name="compactdatabase"></a>CDaoWorkspace:: CompactDatabase  
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
 `lpszSrcName`  
 Il nome di un oggetto esistente, chiuso database. Può essere un percorso completo e il nome del file, ad esempio "c:\\\MYDB. MDB". Se il nome del file ha un'estensione, è necessario specificarlo. Se la rete supporta la convenzione di denominazione uniforme (UNC), è possibile anche specificare un percorso di rete, ad esempio "\\\\\\\MYSERVER\\\MYSHARE\\\MYDIR\\\MYDB. MDB". (Barre rovesciate sono necessari nelle stringhe di percorso perché "\\" è il carattere di escape di C++.)  
  
 `lpszDestName`  
 Il percorso completo del database compattato che si sta creando. È inoltre possibile specificare un percorso di rete come con `lpszSrcName`. Non è possibile utilizzare il `lpszDestName` argomento per specificare lo stesso file di database `lpszSrcName`.  
  
 `lpszPassword`  
 Una password, utilizzata quando si desidera compattare un database protetto da password. Si noti che se si utilizza la versione di `CompactDatabase` che accetta una password, è necessario fornire tutti i parametri. Inoltre, poiché si tratta di un parametro di connessione, richiede una formattazione speciale, come segue:; PWD= `lpszPassword`. Ad esempio:; PWD = "Felice". (Il punto e virgola iniziale è obbligatorio).  
  
 `lpszLocale`  
 Un'espressione stringa utilizzata per specificare l'ordinamento per la creazione di `lpszDestName`. Se si omette questo argomento per accettare il valore predefinito di **dbLangGeneral** (vedere sotto), le impostazioni locali del nuovo database sono uguale a quello del database esistente. I possibili valori sono:  
  
- **dbLangGeneral** inglese, tedesco, francese, portoghese, italiano e spagnolo moderno  
  
- **dbLangArabic** arabo  
  
- **dbLangCyrillic** russo  
  
- **dbLangCzech** ceco  
  
- **dbLangDutch** olandese  
  
- **dbLangGreek** greco  
  
- **dbLangHebrew** ebraico  
  
- **dbLangHungarian** ungherese  
  
- **dbLangIcelandic** islandese  
  
- **dbLangNordic** lingue nordiche (Microsoft Jet database engine solo versione 1.0)  
  
- **dbLangNorwdan** norvegese e danese  
  
- **dbLangPolish** polacco  
  
- **dbLangSpanish** spagnolo tradizionale  
  
- **dbLangSwedfin** svedese e finlandese  
  
- **dbLangTurkish** turco  
  
 `nOptions`  
 Indica una o più opzioni per il database di destinazione, `lpszDestName`. Se si omette questo argomento per accettare il valore predefinito, il `lpszDestName` avrà la stessa versione e la crittografia stessa `lpszSrcName`. È possibile combinare il **dbEncrypt** o **dbDecrypt** opzione con una delle opzioni di versione utilizzando l'operatore OR bit per bit. I valori possibili, che specificano un formato di database, non una versione del motore del database, sono:  
  
- **dbEncrypt** crittografare il database durante la compattazione.  
  
- **dbDecrypt** decrittografare il database durante la compattazione.  
  
- **dbVersion10** creare un database che utilizza la versione del motore di database Microsoft Jet 1.0 durante la compattazione.  
  
- **dbVersion11** creare un database che utilizza la versione del motore di database Microsoft Jet 1.1 durante la compattazione.  
  
- **dbVersion20** creare un database che utilizza la versione 2.0 del motore del database Microsoft Jet durante la compattazione.  
  
- **dbVersion30** creare un database che utilizza la versione 3.0 del motore del database Microsoft Jet durante la compattazione.  
  
 È possibile utilizzare **dbEncrypt** o **dbDecrypt** nell'argomento opzioni per specificare se crittografare o decrittografare il database come viene compattato. Se si omette una costante di crittografia o se si include sia **dbDecrypt** e **dbEncrypt**, `lpszDestName` avrà la stessa crittografia del `lpszSrcName`. È possibile utilizzare una delle costanti versione nell'argomento opzioni per specificare la versione del formato dati per il database compattato. Questa costante interessa solo la versione del formato dei dati `lpszDestName`. È possibile specificare solo una costante di versione. Se si omette una costante di versione, `lpszDestName` avrà la stessa versione `lpszSrcName`. È possibile compattare `lpszDestName` solo a una versione uguale o successiva a quella di `lpszSrcName`.  
  
> [!CAUTION]
>  Se un database non è crittografato, è possibile, anche se si implementa la protezione utente/password, per leggere direttamente il file del disco binari che costituiscono il database.  
  
### <a name="remarks"></a>Note  
 Come si modificano i dati in un database, il file di database può diventare frammentato e più spazio su disco più necessario. Periodicamente, è necessario compattare il database per deframmentare il file di database. Il database compattato è generalmente più piccolo. È inoltre possibile scegliere modificare l'ordinamento, la crittografia o la versione del formato dati durante la copia e la compressione del database.  
  
> [!CAUTION]
>  Il `CompactDatabase` funzione membro non correttamente convertirà un database Microsoft Access completo da una versione a altra. Solo il formato dei dati viene convertito. Microsoft Access oggetti definiti, ad esempio maschere e report, non vengono convertiti. Tuttavia, i dati vengono convertiti correttamente.  
  
> [!TIP]
>  È inoltre possibile utilizzare `CompactDatabase` per copiare un file di database.  
  
 Per ulteriori informazioni sulla compattazione dei database, vedere l'argomento "Metodo CompactDatabase" nella Guida di DAO.  
  
##  <a name="a-namecreatea--cdaoworkspacecreate"></a><a name="create"></a>CDaoWorkspace:: Create  
 Chiamare questa funzione membro per creare un nuovo oggetto workspace DAO e associarlo a MFC `CDaoWorkspace` oggetto.  
  
```  
virtual void Create(
    LPCTSTR lpszName,  
    LPCTSTR lpszUserName,  
    LPCTSTR lpszPassword);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszName`  
 Una stringa con un massimo di 14 caratteri che identifica in modo univoco il nuovo oggetto workspace. È necessario fornire un nome. Per informazioni correlate, vedere l'argomento "Proprietà di nome" nella Guida di DAO.  
  
 *lpszUserName*  
 Il nome utente del proprietario dell'area di lavoro. Per requisiti, vedere il `lpszDefaultUser` parametro per il [SetDefaultUser](#setdefaultuser) funzione membro. Per informazioni correlate, vedere l'argomento "Proprietà UserName" nella Guida di DAO.  
  
 `lpszPassword`  
 La password per il nuovo oggetto workspace. Una password può contenere fino a 14 caratteri e può contenere qualsiasi carattere eccetto ASCII 0 (null). Le password tra maiuscole e minuscole. Per informazioni correlate, vedere l'argomento "Proprietà della Password" nella Guida di DAO.  
  
### <a name="remarks"></a>Note  
 Il processo di creazione generale è:  
  
1.  Costruire un [CDaoWorkspace](#cdaoworkspace) oggetto.  
  
2.  Chiamare l'oggetto **crea** funzione membro per creare l'area di lavoro DAO sottostante. È necessario specificare un nome di area di lavoro.  
  
3.  Se lo si desidera chiamare [Append](#append) se si desidera aggiungere l'area di lavoro alla raccolta di aree di lavoro del motore di database. È possibile utilizzare con l'area di lavoro senza accodarlo.  
  
 Dopo il **crea** chiamata, l'oggetto dell'area di lavoro è nello stato aperto, pronto per l'uso. Non è necessario chiamare **aprire** dopo **crea**. Non è necessario chiamare **crea** se l'area di lavoro esiste già nella raccolta di aree di lavoro. **Creare** consente di inizializzare il motore di database se non è già stato inizializzato per l'applicazione.  
  
##  <a name="a-namegetdatabasecounta--cdaoworkspacegetdatabasecount"></a><a name="getdatabasecount"></a>CDaoWorkspace::GetDatabaseCount  
 Chiamare questa funzione membro per recuperare il numero di oggetti di database DAO nella raccolta di database dell'area di lavoro, ovvero il numero di database aperti nell'area di lavoro.  
  
```  
short GetDatabaseCount();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di database aperti nell'area di lavoro.  
  
### <a name="remarks"></a>Note  
 `GetDatabaseCount`è utile se è necessario scorrere tutti i database definiti nella raccolta di database dell'area di lavoro. Per ottenere informazioni su un database specificato nella raccolta, vedere [GetDatabaseInfo](#getdatabaseinfo). Utilizzo tipico consiste nel chiamare `GetDatabaseCount` per il numero di database aperti, quindi utilizzare tale numero come un indice di ciclo per chiamate ripetute a `GetDatabaseInfo`.  
  
##  <a name="a-namegetdatabaseinfoa--cdaoworkspacegetdatabaseinfo"></a><a name="getdatabaseinfo"></a>CDaoWorkspace::GetDatabaseInfo  
 Chiamare questa funzione membro per ottenere diversi tipi di informazioni su un database aperto nell'area di lavoro.  
  
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
 `nIndex`  
 Indice in base zero dell'oggetto di database nella raccolta di database dell'area di lavoro, per la ricerca in base all'indice.  
  
 `dbinfo`  
 Un riferimento a un [CDaoDatabaseInfo](../../mfc/reference/cdaodatabaseinfo-structure.md) oggetto che restituisce le informazioni richieste.  
  
 `dwInfoOptions`  
 Opzioni che specificano quali informazioni sul database per il recupero. Le opzioni disponibili sono elencate di seguito insieme a ciò che provocano la restituzione della funzione:  
  
- `AFX_DAO_PRIMARY_INFO`(Impostazione predefinita) Nome, aggiornabili, le transazioni  
  
- `AFX_DAO_SECONDARY_INFO`Informazioni principali più: versione, ordine di ordinamento, il Timeout Query  
  
- `AFX_DAO_ALL_INFO`Più informazioni primarie e secondarie: la connessione  
  
 `lpszName`  
 Il nome dell'oggetto di database, per la ricerca in base al nome. Il nome è una stringa con un massimo di 14 caratteri che identifica in modo univoco il nuovo oggetto workspace.  
  
### <a name="remarks"></a>Note  
 Una versione della funzione consente di cercare un database in base all'indice. L'altra versione consente di cercare un database in base al nome.  
  
 Per una descrizione delle informazioni restituite `dbinfo`, vedere il [CDaoDatabaseInfo](../../mfc/reference/cdaodatabaseinfo-structure.md) struttura. Questa struttura dispone di membri che corrispondono agli elementi elencati in precedenza nella sezione Descrizione del `dwInfoOptions`. Quando si richiedono informazioni su un unico livello, ottenere informazioni dei livelli precedenti oltre.  
  
##  <a name="a-namegetinipatha--cdaoworkspacegetinipath"></a><a name="getinipath"></a>CDaoWorkspace::GetIniPath  
 Chiamare questa funzione membro per ottenere il percorso del database Microsoft Jet impostazioni di inizializzazione del modulo del Registro di sistema.  
  
```  
static CString PASCAL GetIniPath();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) contenente il percorso del Registro di sistema.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare il percorso per ottenere informazioni sulle impostazioni per il motore di database. Le informazioni restituite sono effettivamente il nome di una sottochiave del Registro di sistema.  
  
 Per informazioni correlate, vedere gli argomenti "Proprietà IniPath" e "Personalizzazione di Windows del Registro di sistema le impostazioni per l'accesso dati" nella Guida di DAO.  
  
##  <a name="a-namegetisolateodbctransa--cdaoworkspacegetisolateodbctrans"></a><a name="getisolateodbctrans"></a>CDaoWorkspace::GetIsolateODBCTrans  
 Chiamare questa funzione membro per ottenere il valore corrente della proprietà DAO IsolateODBCTrans per l'area di lavoro.  
  
```  
BOOL GetIsolateODBCTrans();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se le transazioni ODBC sono isolate; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 In alcune situazioni, potrebbe essere necessario disporre di più transazioni simultanee in sospeso nello stesso database ODBC. A tale scopo, è necessario aprire un'area di lavoro separato per ogni transazione. Tenere presente che anche se ogni area di lavoro può avere una propria connessione ODBC per il database, ciò riduce le prestazioni del sistema. Poiché l'isolamento delle transazioni non è in genere richiesto, le connessioni ODBC da più oggetti dell'area di lavoro aperti dallo stesso utente vengono condivisi per impostazione predefinita.  
  
 Alcuni server ODBC, ad esempio Microsoft SQL Server, non consentono transazioni simultanee in una singola connessione. Se è necessario disporre di più di una transazione alla volta in sospeso per tale database, impostare la proprietà IsolateODBCTrans **TRUE** ciascuna area di lavoro, non appena viene aperto. In tal modo una connessione ODBC distinta per ogni area di lavoro.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà IsolateODBCTrans" nella Guida di DAO.  
  
##  <a name="a-namegetlogintimeouta--cdaoworkspacegetlogintimeout"></a><a name="getlogintimeout"></a>CDaoWorkspace::GetLoginTimeout  
 Chiamare questa funzione membro per ottenere il valore corrente della proprietà DAO LoginTimeout per l'area di lavoro.  
  
```  
static short PASCAL GetLoginTimeout();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di secondi prima che si verifica un errore quando si tenta di accedere a un database ODBC.  
  
### <a name="remarks"></a>Note  
 Questo valore rappresenta il numero di secondi prima che si verifica un errore quando si tenta di accedere a un database ODBC. L'impostazione LoginTimeout predefinita è 20 secondi. Quando LoginTimeout è impostato su 0, si verifica alcun timeout e la comunicazione con l'origine dati potrebbe bloccarsi.  
  
 Quando si sta tentando di accedere a un database ODBC, ad esempio Microsoft SQL Server, la connessione potrebbe non riuscire a seguito di errori di rete o perché il server non è in esecuzione. Anziché attendere l'impostazione predefinita 20 secondi per la connessione, è possibile specificare il tempo di attesa del motore di database prima di produrre un errore. Accesso al server avviene in modo implicito come parte di un numero di eventi diversi, ad esempio l'esecuzione di una query su un database del server esterno.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà LoginTimeout" nella Guida di DAO.  
  
##  <a name="a-namegetnamea--cdaoworkspacegetname"></a><a name="getname"></a>CDaoWorkspace::GetName  
 Chiamare questa funzione membro per ottenere il nome definito dall'utente dell'oggetto workspace DAO sottostante il `CDaoWorkspace` oggetto.  
  
```  
CString GetName();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) contenente il nome dell'oggetto workspace DAO definito dall'utente.  
  
### <a name="remarks"></a>Note  
 Il nome è utile per l'accesso all'oggetto di area di lavoro DAO nella raccolta di aree di lavoro del motore di database in base al nome.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà di nome" nella Guida di DAO.  
  
##  <a name="a-namegetusernamea--cdaoworkspacegetusername"></a><a name="getusername"></a>CDaoWorkspace::GetUserName  
 Chiamare questa funzione membro per ottenere il nome del proprietario dell'area di lavoro.  
  
```  
CString GetUserName();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che rappresenta il proprietario dell'oggetto workspace.  
  
### <a name="remarks"></a>Note  
 Per ottenere o impostare le autorizzazioni per il proprietario dell'area di lavoro, chiamare DAO direttamente per controllare l'impostazione della proprietà delle autorizzazioni; Questo parametro determina quali autorizzazioni dispone di tale utente. Per funzionare con le autorizzazioni, è necessario un sistema. File assistente al debug gestito.  
  
 Per informazioni sulla chiamata di DAO direttamente, vedere [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md). Per informazioni correlate, vedere l'argomento "Proprietà UserName" nella Guida di DAO.  
  
##  <a name="a-namegetversiona--cdaoworkspacegetversion"></a><a name="getversion"></a>CDaoWorkspace::GetVersion  
 Chiamare questa funzione membro per determinare la versione del motore di database Microsoft Jet in uso.  
  
```  
static CString PASCAL GetVersion();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che indica la versione del motore di database associato all'oggetto.  
  
### <a name="remarks"></a>Note  
 Il valore restituito rappresenta il numero di versione nel formato "secondaria"; ad esempio, "3.0". Il numero di versione del prodotto (ad esempio 3.0) costituito dal numero di versione (3), un periodo e il numero di versione (0).  
  
 Per informazioni correlate, vedere l'argomento "Proprietà Version" nella Guida di DAO.  
  
##  <a name="a-namegetworkspacecounta--cdaoworkspacegetworkspacecount"></a><a name="getworkspacecount"></a>CDaoWorkspace::GetWorkspaceCount  
 Chiamare questa funzione membro per recuperare il numero di oggetti dell'area di lavoro DAO nella raccolta di aree di lavoro del motore di database.  
  
```  
short GetWorkspaceCount();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di aree di lavoro aprire la raccolta di aree di lavoro.  
  
### <a name="remarks"></a>Note  
 Questo conteggio non include eventuali aree di lavoro aperti non aggiunti alla raccolta. `GetWorkspaceCount`è utile se è necessario scorrere tutte le aree di lavoro definiti nella raccolta di aree di lavoro. Per ottenere informazioni su un'area di lavoro nella raccolta, vedere [funzione membro GetWorkspaceInfo](#getworkspaceinfo). Utilizzo tipico consiste nel chiamare `GetWorkspaceCount` per il numero di aree di lavoro aperte, quindi utilizzare tale numero come un indice di ciclo per chiamate ripetute a `GetWorkspaceInfo`.  
  
##  <a name="a-namegetworkspaceinfoa--cdaoworkspacegetworkspaceinfo"></a><a name="getworkspaceinfo"></a>CDaoWorkspace::GetWorkspaceInfo  
 Chiamare questa funzione membro per ottenere diversi tipi di informazioni su un'area di lavoro aperta nella sessione.  
  
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
 `nIndex`  
 Indice in base zero dell'oggetto di database nella raccolta di aree di lavoro, per la ricerca in base all'indice.  
  
 `wkspcinfo`  
 Un riferimento a un [CDaoWorkspaceInfo](../../mfc/reference/cdaoworkspaceinfo-structure.md) oggetto che restituisce le informazioni richieste.  
  
 `dwInfoOptions`  
 Opzioni che specificano le informazioni sull'area di lavoro da recuperare. Le opzioni disponibili sono elencate di seguito insieme a ciò che provocano la restituzione della funzione:  
  
- `AFX_DAO_PRIMARY_INFO`(Impostazione predefinita) Nome  
  
- `AFX_DAO_SECONDARY_INFO`Informazioni principali più: nome utente  
  
- `AFX_DAO_ALL_INFO`Più informazioni primarie e secondarie: isolare ODBCTrans  
  
 `lpszName`  
 Il nome dell'oggetto dell'area di lavoro, per la ricerca in base al nome. Il nome è una stringa con un massimo di 14 caratteri che identifica in modo univoco il nuovo oggetto workspace.  
  
### <a name="remarks"></a>Note  
 Per una descrizione delle informazioni restituite `wkspcinfo`, vedere il [CDaoWorkspaceInfo](../../mfc/reference/cdaoworkspaceinfo-structure.md) struttura. Questa struttura dispone di membri che corrispondono agli elementi elencati in precedenza nella sezione Descrizione del `dwInfoOptions`. Quando si richiedono informazioni su un unico livello, ottenere informazioni per anche livelli precedenti.  
  
##  <a name="a-nameidlea--cdaoworkspaceidle"></a><a name="idle"></a>CDaoWorkspace::Idle  
 Chiamare **inattivo** per fornire il motore di database con la possibilità di eseguire attività in background che potrebbe non essere aggiornata a causa di elaborazione dati complesse.  
  
```  
static void PASCAL Idle(int nAction = dbFreeLocks);
```  
  
### <a name="parameters"></a>Parametri  
 `nAction`  
 Un'azione da intraprendere durante l'elaborazione di inattività. Attualmente è l'unica azione valida **dbFreeLocks**.  
  
### <a name="remarks"></a>Note  
 Ciò si verifica in ambienti multiutente e multitasking in cui non c'è sufficiente tempo di elaborazione in background per mantenere tutti i record in un recordset corrente.  
  
> [!NOTE]
>  La chiamata a **inattivo** con i database creati con la versione 3.0 del motore di database Microsoft Jet non è necessario. Utilizzare **inattivo** solo per i database creati con le versioni precedenti.  
  
 In genere, vengono rimossi i blocchi di lettura e i dati in oggetti recordset di tipo dynaset locale verrà aggiornata solo quando non si verificano altre azioni (inclusi i movimenti del mouse). Se si chiama periodicamente **inattivo**, si fornisce il motore di database con tempo di attività di elaborazione rilasciando in background i blocchi in lettura. Specifica il **dbFreeLocks** costante come argomento Ritarda l'elaborazione finché non vengono rilasciati tutti i blocchi di lettura.  
  
 Questa funzione membro non è necessaria in ambienti utente singolo, a meno che non eseguono più istanze di un'applicazione. Il **inattivo** funzione membro può migliorare le prestazioni in un ambiente multiutente perché forza il motore di database devono essere scaricate su disco, rilascio di blocchi di memoria. È inoltre possibile rilasciare i blocchi in lettura effettuando le operazioni in una transazione.  
  
 Per informazioni correlate, vedere l'argomento "Inattività Method" nella Guida di DAO.  
  
##  <a name="a-nameisopena--cdaoworkspaceisopen"></a><a name="isopen"></a>CDaoWorkspace::IsOpen  
 Chiamare questa funzione membro per determinare se il `CDaoWorkspace` oggetto è aperto, ovvero, se l'oggetto MFC è stato inizializzato da una chiamata a [aprire](#open) o una chiamata a [crea](#create).  
  
```  
BOOL IsOpen() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'oggetto dell'area di lavoro è aperto. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 È possibile chiamare qualsiasi membro funzioni di un'area di lavoro è aperta.  
  
##  <a name="a-namempdaoworkspacea--cdaoworkspacempdaoworkspace"></a><a name="m_pdaoworkspace"></a>CDaoWorkspace::m_pDAOWorkspace  
 Puntatore all'oggetto workspace DAO sottostante.  
  
### <a name="remarks"></a>Note  
 Se è necessario indirizzare l'accesso all'oggetto DAO sottostante, utilizzare il membro dati. È possibile chiamare le interfacce dell'oggetto DAO tramite questo puntatore.  
  
 Per informazioni sull'accesso direttamente gli oggetti DAO, vedere [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).  
  
##  <a name="a-nameopena--cdaoworkspaceopen"></a><a name="open"></a>Inutilizzabile  
 Verrà aperto in modo esplicito un oggetto dell'area di lavoro associato all'area di lavoro predefinita DAO.  
  
```  
virtual void Open(LPCTSTR lpszName = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszName`  
 Il nome dell'oggetto workspace DAO per aprire, ovvero una stringa con un massimo di 14 caratteri che identifica in modo univoco l'area di lavoro. Accettare il valore predefinito **NULL** aprire in modo esplicito l'area di lavoro predefinito. Per requisiti di denominazione, vedere il `lpszName` parametro per [crea](#create). Per informazioni correlate, vedere l'argomento "Proprietà di nome" nella Guida di DAO.  
  
### <a name="remarks"></a>Note  
 Al termine della creazione un `CDaoWorkspace` dell'oggetto, chiamare questa funzione membro per eseguire una delle operazioni seguenti:  
  
-   Aprire in modo esplicito l'area di lavoro predefinito. Pass **NULL** for `lpszName`.  
  
-   Aprire un oggetto esistente `CDaoWorkspace` oggetto, un membro della raccolta di aree di lavoro, in base al nome. Passare un nome valido per un oggetto dell'area di lavoro esistente.  
  
 **Aprire** inserisce l'oggetto dell'area di lavoro in uno stato aperto e inizializza anche il motore di database se non è già stato inizializzato per l'applicazione.  
  
 Sebbene molti `CDaoWorkspace` membro funzioni possono essere chiamate solo dopo aver aperto l'area di lavoro, le seguenti funzioni membro, che operano nel motore di database, sono disponibili dopo la costruzione dell'oggetto C++, ma prima di chiamare **aprire**:  
  
||||  
|-|-|-|  
|[Creare](#create)|[GetVersion](#getversion)|[SetDefaultUser](#setdefaultuser)|  
|[GetIniPath](#getinipath)|[Inattività](#idle)|[SetIniPath](#setinipath)|  
|[GetLoginTimeout](#getlogintimeout)|[SetDefaultPassword](#setdefaultpassword)|[SetLoginTimeout](#setlogintimeout)|  
  
##  <a name="a-namerepairdatabasea--cdaoworkspacerepairdatabase"></a><a name="repairdatabase"></a>CDaoWorkspace::RepairDatabase  
 Chiamare questa funzione membro se è necessario tentare di riparare un database danneggiato che accede al motore di database Microsoft Jet.  
  
```  
static void PASCAL RepairDatabase(LPCTSTR lpszName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszName`  
 Il percorso e il nome di un file di database di gestione di Microsoft Jet esistenti. Se si omette il percorso, viene cercata solo nella directory corrente. Se il sistema supporta la convenzione di denominazione uniforme (UNC), è possibile anche specificare un percorso di rete, ad esempio: "\\\\\\\MYSERVER\\\MYSHARE\\\MYDIR\\\MYDB. MDB". (Barre rovesciate sono necessari nella stringa del percorso poiché "\\" è il carattere di escape di C++.)  
  
### <a name="remarks"></a>Note  
 È necessario chiudere il database specificato da `lpszName` prima di ripararlo. In un ambiente multiutente, altri utenti non possono avere `lpszName` aprire mentre si esegue il ripristino. Se `lpszName` non viene chiusa o non è disponibile per l'uso esclusivo, si verifica un errore.  
  
 Questa funzione membro tenta di ripristinare un database in cui è stato contrassegnato come danneggiato da un'operazione di scrittura incompleta. Ciò può verificarsi se un'applicazione che utilizza il motore di database Microsoft Jet viene chiusa in modo imprevisto a causa di un problema di hardware computer o un'interruzione dell'alimentazione. Se si completa l'operazione e chiamata di [Chiudi](../../mfc/reference/cdaodatabase-class.md#close) funzione membro oppure chiudere l'applicazione in modo normale, il database non verrà contrassegnato come danneggiato.  
  
> [!NOTE]
>  Dopo aver ripristinato un database, è inoltre consigliabile compattare utilizzando il [CompactDatabase](#compactdatabase) funzione membro per deframmentare il file e di recuperare spazio su disco.  
  
 Per ulteriori informazioni sul ripristino dei database, vedere l'argomento "Metodo RepairDatabase" nella Guida di DAO.  
  
##  <a name="a-namerollbacka--cdaoworkspacerollback"></a><a name="rollback"></a>CDaoWorkspace::Rollback  
 Chiamare questa funzione membro per terminare la transazione corrente e ripristinare tutti i database nell'area di lavoro della condizione prima che la transazione è stata iniziata.  
  
```  
void Rollback();
```  
  
### <a name="remarks"></a>Note  
  
> [!CAUTION]
>  All'interno di un oggetto dell'area di lavoro, le transazioni sono sempre globali all'area di lavoro e non sono limitate a un solo database o un recordset. Se si eseguono operazioni su più di un database o un recordset in una transazione dell'area di lavoro, **Rollback** Ripristina tutte le operazioni su tutti i database e Recordset.  
  
 Se si chiude un oggetto dell'area di lavoro senza salvare o eseguire il rollback di tutte le transazioni in sospeso, il rollback delle transazioni vengono automaticamente. Se si chiama [CommitTrans](#committrans) o **Rollback** senza prima chiamare [BeginTrans](#begintrans), si verifica un errore.  
  
> [!NOTE]
>  Quando si inizia una transazione, il motore di database registra le operazioni in un file che si trova nella directory specificata dalla variabile di ambiente TEMP nella workstation. Se il file di log delle transazioni esaurisce l'archiviazione disponibile nell'unità TEMP, il motore di database causa MFC generare un `CDaoException` (errore DAO 2004). A questo punto, se si chiama **CommitTrans**, un numero indeterminato di operazioni viene eseguito il commit ma le operazioni rimanenti non completate vengono perse e l'operazione deve essere riavviato. La chiamata a **Rollback** rilascia il log delle transazioni e il rollback di tutte le operazioni nella transazione.  
  
##  <a name="a-namesetdefaultpassworda--cdaoworkspacesetdefaultpassword"></a><a name="setdefaultpassword"></a>CDaoWorkspace::SetDefaultPassword  
 Chiamare questa funzione membro per impostare la password predefinita utilizzata dal motore di database quando viene creato un oggetto dell'area di lavoro senza una password specifica.  
  
```  
static void PASCAL SetDefaultPassword(LPCTSTR lpszPassword);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszPassword`  
 La password predefinita. Una password può contenere fino a 14 caratteri e può contenere qualsiasi carattere eccetto ASCII 0 (null). Le password tra maiuscole e minuscole.  
  
### <a name="remarks"></a>Note  
 La password predefinita è impostata si applica alle nuove aree di lavoro creati dopo la chiamata. Quando si crea aree di lavoro successivi, non è necessario specificare una password nel [crea](#create) chiamare.  
  
 Per utilizzare questa funzione membro:  
  
1.  Costruire un `CDaoWorkspace` oggetto ma non si chiama **crea**.  
  
2.  Chiamare `SetDefaultPassword` e, se si desidera, [SetDefaultUser](#setdefaultuser).  
  
3.  Chiamare **crea** per questo oggetto dell'area di lavoro o quelli successivi, senza specificare una password.  
  
 Per impostazione predefinita, la proprietà DefaultUser è impostata su "admin" e la proprietà DefaultPassword è impostata su una stringa vuota ("").  
  
 Per ulteriori informazioni sulla sicurezza, vedere l'argomento "Proprietà Permissions" nella Guida di DAO. Per informazioni correlate, vedere gli argomenti "Proprietà DefaultPassword" e "DefaultUser Property" nella Guida di DAO.  
  
##  <a name="a-namesetdefaultusera--cdaoworkspacesetdefaultuser"></a><a name="setdefaultuser"></a>CDaoWorkspace::SetDefaultUser  
 Chiamare questa funzione membro per impostare il nome utente predefinito utilizzato dal motore di database quando viene creato un oggetto dell'area di lavoro senza un nome utente specifico.  
  
```  
static void PASCAL SetDefaultUser(LPCTSTR lpszDefaultUser);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszDefaultUser`  
 Il nome utente predefinito. Può essere 1 – 20 caratteri e può includere caratteri alfabetici, caratteri accentati, numeri, spazi e simboli, ad eccezione di un nome utente: "(virgolette) / (barra), \ (barra rovesciata), \[ \] (parentesi): (due punti), | (barra verticale), \< (meno-il segno di maggiore), > (maggiore-il segno di maggiore), + (segno) = (segno di uguale), (punto e virgola), (virgola), (punto interrogativo) * (asterisco), spazi iniziali e caratteri di controllo (ASCII 00 ad ASCII 31). Per informazioni correlate, vedere l'argomento "Proprietà UserName" nella Guida di DAO.  
  
### <a name="remarks"></a>Note  
 Il nome utente predefinito impostato si applica a nuove aree di lavoro creati dopo la chiamata. Quando si crea aree di lavoro successivi, non è necessario specificare un nome utente nella [crea](#create) chiamare.  
  
 Per utilizzare questa funzione membro:  
  
1.  Costruire un `CDaoWorkspace` oggetto ma non si chiama **crea**.  
  
2.  Chiamare `SetDefaultUser` e, se si desidera, [SetDefaultPassword](#setdefaultpassword).  
  
3.  Chiamare **crea** per questo oggetto dell'area di lavoro o quelli successivi, senza specificare un nome utente.  
  
 Per impostazione predefinita, la proprietà DefaultUser è impostata su "admin" e la proprietà DefaultPassword è impostata su una stringa vuota ("").  
  
 Per informazioni correlate, vedere gli argomenti "Proprietà DefaultUser" e "DefaultPassword Property" nella Guida di DAO.  
  
##  <a name="a-namesetinipatha--cdaoworkspacesetinipath"></a><a name="setinipath"></a>CDaoWorkspace::SetIniPath  
 Chiamare questa funzione membro per specificare il percorso delle impostazioni del Registro di sistema di Windows per il motore di database Microsoft Jet.  
  
```  
static void PASCAL SetIniPath(LPCTSTR lpszRegistrySubKey);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszRegistrySubkey*  
 Stringa contenente il nome di una sottochiave del Registro di sistema di Windows per la posizione dei parametri necessari per database ISAM installabili o le impostazioni del motore di database Microsoft Jet.  
  
### <a name="remarks"></a>Note  
 Chiamare `SetIniPath` solo se è necessario specificare le impostazioni speciali. Per ulteriori informazioni, vedere l'argomento "Proprietà IniPath" nella Guida di DAO.  
  
> [!NOTE]
>  Chiamare `SetIniPath` durante l'installazione dell'applicazione, non quando viene eseguita l'applicazione. `SetIniPath`deve essere chiamato prima di aprire eventuali aree di lavoro, un database o un recordset. MFC in caso contrario, genera un'eccezione.  
  
 È possibile utilizzare questo meccanismo per configurare il motore di database con le impostazioni del Registro di sistema fornito dall'utente. L'ambito di questo attributo è limitato all'applicazione e non può essere modificato senza riavviare l'applicazione.  
  
##  <a name="a-namesetisolateodbctransa--cdaoworkspacesetisolateodbctrans"></a><a name="setisolateodbctrans"></a>CDaoWorkspace::SetIsolateODBCTrans  
 Chiamare questa funzione membro per impostare il valore della proprietà DAO IsolateODBCTrans per l'area di lavoro.  
  
```  
void SetIsolateODBCTrans(BOOL bIsolateODBCTrans);
```  
  
### <a name="parameters"></a>Parametri  
 *bIsolateODBCTrans*  
 Passare **TRUE** se si desidera iniziare l'isolamento delle transazioni ODBC. Passare **FALSE** se si desidera interrompere l'isolamento delle transazioni ODBC.  
  
### <a name="remarks"></a>Note  
 In alcune situazioni, potrebbe essere necessario disporre di più transazioni simultanee in sospeso nello stesso database ODBC. A tale scopo, è necessario aprire un'area di lavoro separato per ogni transazione. Anche se ogni area di lavoro può avere una propria connessione ODBC per il database, ciò riduce le prestazioni del sistema. Poiché l'isolamento delle transazioni non è in genere richiesto, le connessioni ODBC da più oggetti dell'area di lavoro aperti dallo stesso utente vengono condivisi per impostazione predefinita.  
  
 Alcuni server ODBC, ad esempio Microsoft SQL Server, non consentono transazioni simultanee in una singola connessione. Se è necessario disporre di più di una transazione alla volta in sospeso per tale database, impostare la proprietà IsolateODBCTrans **TRUE** ciascuna area di lavoro, non appena viene aperto. In tal modo una connessione ODBC distinta per ogni area di lavoro.  
  
##  <a name="a-namesetlogintimeouta--cdaoworkspacesetlogintimeout"></a><a name="setlogintimeout"></a>CDaoWorkspace::SetLoginTimeout  
 Chiamare questa funzione membro per impostare il valore della proprietà DAO LoginTimeout per l'area di lavoro.  
  
```  
static void PASCAL SetLoginTimeout(short nSeconds);
```  
  
### <a name="parameters"></a>Parametri  
 `nSeconds`  
 Il numero di secondi prima che si verifica un errore quando si tenta di accedere a un database ODBC.  
  
### <a name="remarks"></a>Note  
 Questo valore rappresenta il numero di secondi prima che si verifica un errore quando si tenta di accedere a un database ODBC. L'impostazione LoginTimeout predefinita è 20 secondi. Quando LoginTimeout è impostato su 0, si verifica alcun timeout e la comunicazione con l'origine dati potrebbe bloccarsi.  
  
 Quando si sta tentando di accedere a un database ODBC, ad esempio Microsoft SQL Server, la connessione potrebbe non riuscire a seguito di errori di rete o perché il server non è in esecuzione. Anziché attendere l'impostazione predefinita 20 secondi per la connessione, è possibile specificare il tempo di attesa del motore di database prima di produrre un errore. L'accesso al server avviene in modo implicito come parte di un numero di eventi diversi, ad esempio l'esecuzione di una query su un database del server esterno. Il valore di timeout è determinato dall'impostazione corrente della proprietà LoginTimeout.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà LoginTimeout" nella Guida di DAO.  
  
## <a name="see-also"></a>Vedere anche  
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDaoDatabase (classe)](../../mfc/reference/cdaodatabase-class.md)   
 [CDaoRecordset (classe)](../../mfc/reference/cdaorecordset-class.md)   
 [Classe CDaoTableDef](../../mfc/reference/cdaotabledef-class.md)   
 [CDaoQueryDef (classe)](../../mfc/reference/cdaoquerydef-class.md)   
 [Classe CDaoException](../../mfc/reference/cdaoexception-class.md)

