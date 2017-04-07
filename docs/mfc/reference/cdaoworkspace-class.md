---
title: Classe CDaoWorkspace | Documenti Microsoft
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
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: 72fcabd7db70050ba95f142bea92e69f441dd717
ms.lasthandoff: 04/01/2017

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
|[CDaoWorkspace::Append](#append)|Aggiunge un'area di lavoro appena creata alla raccolta di aree di lavoro del motore di database.|  
|[CDaoWorkspace::BeginTrans](#begintrans)|Avvia una nuova transazione, si applica a tutti i database aperto nell'area di lavoro.|  
|[CDaoWorkspace::Close](#close)|Chiude l'area di lavoro e tutti gli oggetti contenuti. Le transazioni in sospeso il rollback.|  
|[CDaoWorkspace:: CommitTrans](#committrans)|Completa la transazione corrente e Salva le modifiche.|  
|[CDaoWorkspace:: CompactDatabase](#compactdatabase)|Compatta un database (o duplicati).|  
|[CDaoWorkspace:: Create](#create)|Crea un nuovo oggetto dell'area di lavoro DAO.|  
|[CDaoWorkspace::GetDatabaseCount](#getdatabasecount)|Restituisce il numero di oggetti di database DAO nella raccolta di database dell'area di lavoro.|  
|[CDaoWorkspace::GetDatabaseInfo](#getdatabaseinfo)|Restituisce informazioni su un database DAO specificato definito nell'insieme di database dell'area di lavoro.|  
|[CDaoWorkspace::GetIniPath](#getinipath)|Restituisce il percorso del database Microsoft Jet impostazioni di inizializzazione del modulo del Registro di sistema.|  
|[CDaoWorkspace::GetIsolateODBCTrans](#getisolateodbctrans)|Restituisce un valore che indica se più transazioni che implicano la stessa origine dati ODBC sono isolate tramite più connessioni all'origine dati.|  
|[CDaoWorkspace::GetLoginTimeout](#getlogintimeout)|Restituisce il numero di secondi prima che si verifica un errore quando l'utente tenta di accedere a un database ODBC.|  
|[CDaoWorkspace::GetName](#getname)|Restituisce il nome definito dall'utente per l'oggetto dell'area di lavoro.|  
|[CDaoWorkspace::GetUserName](#getusername)|Restituisce che il nome utente specificato quando è stata creata l'area di lavoro. Questo è il nome del proprietario dell'area di lavoro.|  
|[CDaoWorkspace::GetVersion](#getversion)|Restituisce una stringa che contiene la versione del motore di database associata all'area di lavoro.|  
|[CDaoWorkspace::GetWorkspaceCount](#getworkspacecount)|Restituisce il numero di oggetti DAO dell'area di lavoro nella raccolta di aree di lavoro del motore di database.|  
|[CDaoWorkspace::GetWorkspaceInfo](#getworkspaceinfo)|Restituisce informazioni su un'area di lavoro DAO specificato definito nell'insieme di aree di lavoro del motore di database.|  
|[CDaoWorkspace::Idle](#idle)|Consente al motore di database di eseguire le attività in background.|  
|[CDaoWorkspace::IsOpen](#isopen)|Aprire restituisce diverso da zero se l'area di lavoro.|  
|[Inutilizzabile](#open)|Verrà aperto in modo esplicito un oggetto dell'area di lavoro associato all'area di lavoro predefinita DAO.|  
|[CDaoWorkspace::RepairDatabase](#repairdatabase)|Tenta di ripristinare un database danneggiato.|  
|[CDaoWorkspace::Rollback](#rollback)|Termina la transazione corrente e non salvare le modifiche.|  
|[CDaoWorkspace::SetDefaultPassword](#setdefaultpassword)|Imposta la password utilizzata dal motore di database quando viene creato un oggetto di area di lavoro senza una password specifica.|  
|[CDaoWorkspace::SetDefaultUser](#setdefaultuser)|Imposta il nome utente utilizzato dal motore di database quando viene creato un oggetto di area di lavoro senza un nome utente specifico.|  
|[CDaoWorkspace::SetIniPath](#setinipath)|Imposta il percorso del database Microsoft Jet impostazioni di inizializzazione del modulo del Registro di sistema.|  
|[CDaoWorkspace::SetIsolateODBCTrans](#setisolateodbctrans)|Specifica se più transazioni che implicano la stessa origine dati ODBC vengono isolate forzando l'uso più connessioni all'origine dati.|  
|[CDaoWorkspace::SetLoginTimeout](#setlogintimeout)|Imposta il numero di secondi prima che si verifica un errore quando l'utente tenta di accedere a un'origine dati ODBC.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoWorkspace::m_pDAOWorkspace](#m_pdaoworkspace)|Punta all'oggetto sottostante di DAO dell'area di lavoro.|  
  
## <a name="remarks"></a>Note  
 Nella maggior parte dei casi, non occorre più aree di lavoro e non è necessario creare oggetti esplicita dell'area di lavoro. Quando si aprono database e gli oggetti recordset, utilizzano l'area di lavoro predefinita DAO. Tuttavia, se necessario, è possibile eseguire più sessioni contemporaneamente mediante la creazione dell'area di lavoro di altri oggetti. Ogni oggetto dell'area di lavoro può contenere più oggetti di database aperti nella propria raccolta di database. In MFC, un'area di lavoro è principalmente un gestore delle transazioni, specificare un set di database aperti tutti nella stessa "spazio di transazione".  
  
> [!NOTE]
>  Classi di database DAO sono distinte dalle classi di database MFC basate su ODBC Open Database Connectivity (). Tutti i nomi delle classi database DAO hanno un prefisso "CDao". In generale, le classi MFC basate su DAO sono più in grado di classi MFC basate su ODBC. Le classi basate su DAO accedere ai dati tramite il motore di database Microsoft Jet, inclusi i driver ODBC. Supportano inoltre le operazioni di Data Definition Language (DDL), ad esempio la creazione di database e l'aggiunta di tabelle e campi tramite le classi, senza dover chiamare direttamente DAO.  
  
## <a name="capabilities"></a>Funzionalità  
 Classe `CDaoWorkspace` offre quanto segue:  
  
-   Accesso esplicito, se necessario, per un'area di lavoro predefinito, creato per l'inizializzazione del motore di database. In genere l'area di lavoro predefinita DAO viene utilizzato in modo implicito mediante la creazione di database e gli oggetti recordset.  
  
-   Apertura di uno spazio di transazione in cui le transazioni si applicano a tutti i database nell'area di lavoro. È possibile creare altre aree di lavoro per gestire gli spazi di transazione separata.  
  
-   Un'interfaccia per molte delle proprietà del motore di database Microsoft Jet sottostante (vedere le funzioni membro statiche). Apertura o creazione di un'area di lavoro o la chiamata a una funzione membro statica prima di aprire o creare, inizializza il motore di database.  
  
-   Accesso alla raccolta di aree di lavoro del motore di database, che archivia tutte le aree di lavoro attivi che sono stati accodati a esso. È anche possibile creare e utilizzare aree di lavoro senza aggiungerli alla raccolta.  
  
## <a name="security"></a>Sicurezza  
 MFC non implementa le raccolte di utenti e gruppi in DAO, che vengono utilizzati per il controllo di sicurezza. Se è necessario gli aspetti di DAO, è necessario programmare li manualmente tramite chiamate dirette alle interfacce DAO. Per informazioni, vedere [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).  
  
## <a name="usage"></a>Utilizzo  
 È possibile utilizzare una classe `CDaoWorkspace` per:  
  
-   Aprire in modo esplicito l'area di lavoro predefinita.  
  
     In genere l'uso di area di lavoro predefinita è implicito, quando si apre nuove [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetti. Ma potrebbe essere necessario accedervi in modo esplicito, ad esempio, per accedere alle proprietà del motore di database o la raccolta di aree di lavoro. Vedere "Uso implicito dell'area di lavoro predefinita" di seguito.  
  
-   Creare nuove aree di lavoro. Chiamare [Append](#append) se si desidera aggiungerli alla raccolta di aree di lavoro.  
  
-   Aprire un'area di lavoro esistente nella raccolta di aree di lavoro.  
  
 La creazione di una nuova area di lavoro che non esiste già in aree di lavoro di raccolta è descritta sotto il [crea](#create) funzione membro. Gli oggetti dell'area di lavoro non vengono mantenute in alcun modo tra le sessioni di motore di database. Se l'applicazione collegata a MFC in modo statico, terminare l'applicazione non inizializza il motore di database. Se l'applicazione si collega con MFC in modo dinamico, il motore di database è non inizializzato quando la DLL di MFC è scaricata.  
  
 Aprire l'area di lavoro predefinita in modo esplicito o apertura di un'area di lavoro esistente nella raccolta di aree di lavoro, descritta nel [aprire](#open) funzione membro.  
  
 Terminare una sessione di area di lavoro, chiudere l'area di lavoro con la [Chiudi](#close) funzione membro. **Chiudi** chiude tutti i database non è stata chiusa in precedenza, il rollback di tutte le transazioni non salvate.  
  
## <a name="transactions"></a>Transazioni  
 DAO gestisce transazioni a livello di area di lavoro; di conseguenza, le transazioni in un'area di lavoro con più database aperti si applicano a tutti i database. Ad esempio, se due database sono commit degli aggiornamenti e si chiama [CommitTrans](#committrans), tutti gli aggiornamenti viene eseguito il commit. Se si desidera limitare le transazioni a un singolo database, è necessario un oggetto di area di lavoro separata per tale.  
  
## <a name="implicit-use-of-the-default-workspace"></a>Uso implicito dell'area di lavoro predefinito  
 MFC utilizza l'area di lavoro predefinita DAO in modo implicito nelle circostanze seguenti:  
  
-   Se si crea un nuovo `CDaoDatabase` oggetto ma non viene specificato tramite un oggetto esistente `CDaoWorkspace` oggetto MFC crea un oggetto di area di lavoro temporanea, che corrisponde all'area di lavoro predefinita DAO. Se si rinominano per più database, tutti gli oggetti di database associati all'area di lavoro predefinita. È possibile accedere a area di lavoro di un database tramite un `CDaoDatabase` (membro dati).  
  
-   Analogamente, se si crea un `CDaoRecordset` oggetto senza fornire un puntatore a un `CDaoDatabase` dell'oggetto, MFC crea un oggetto di database temporaneo e, di conseguenza, un oggetto temporaneo dell'area di lavoro. È possibile accedere a database di un oggetto recordset e indirettamente l'area di lavoro, tramite un `CDaoRecordset` (membro dati).  
  
## <a name="other-operations"></a>Altre operazioni  
 Vengono fornite anche altre operazioni di database, ad esempio il ripristino di un database danneggiato o la compattazione di un database.  
  
 Per informazioni sulla chiamata a DAO direttamente e sulla sicurezza DAO, vedere [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CDaoWorkspace`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
##  <a name="append"></a>CDaoWorkspace::Append  
 Chiamare questa funzione membro dopo aver chiamato [crea](#create).  
  
```  
virtual void Append();
```  
  
### <a name="remarks"></a>Note  
 **Aggiungere** aggiunge un oggetto di area di lavoro appena creata alla raccolta di aree di lavoro del motore di database. Aree di lavoro non vengono mantenute tra sessioni di motore di database. Poiché sono archiviati solo in memoria, non su disco. Non è necessario aggiungere un'area di lavoro; in caso contrario, è possibile utilizzare la.  
  
 Un'area di lavoro accodato rimane nella raccolta aree di lavoro, in un oggetto attivo, stato aperto, finché non si chiama il relativo [Chiudi](#close) funzione membro.  
  
 Per informazioni correlate, vedere l'argomento "Metodo Append" nella Guida di DAO.  
  
##  <a name="begintrans"></a>CDaoWorkspace::BeginTrans  
 Chiamare questa funzione membro per avviare una transazione.  
  
```  
void BeginTrans();
```  
  
### <a name="remarks"></a>Note  
 Dopo aver chiamato **BeginTrans**, gli aggiornamenti apportati alla struttura di dati o database hanno effetto quando si esegue il commit della transazione. Poiché l'area di lavoro definisce un unico spazio di transazione, la transazione si applica a tutti i database aperti nell'area di lavoro. Esistono due modi per completare la transazione:  
  
-   Chiamare il [CommitTrans](#committrans) funzione membro per il commit della transazione e salvare le modifiche apportate all'origine dati.  
  
-   Oppure chiamare il [Rollback](#rollback) funzione membro di annullare la transazione.  
  
 Chiudere l'oggetto dell'area di lavoro o un oggetto di database mentre è in sospeso una transazione rollback di tutte le transazioni in sospeso.  
  
 Se si desidera isolare le transazioni in un'origine dati ODBC da quelli in un'altra origine dati ODBC, vedere il [SetIsolateODBCTrans](#setisolateodbctrans) funzione membro.  
  
##  <a name="cdaoworkspace"></a>CDaoWorkspace::CDaoWorkspace  
 Costruisce un oggetto `CDaoWorkspace`.  
  
```  
CDaoWorkspace();
```  
  
### <a name="remarks"></a>Note  
 Dopo la costruzione dell'oggetto di C++, sono disponibili due opzioni:  
  
-   Chiamare l'oggetto [aprire](#open) funzione membro per aprire l'area di lavoro predefinita o aprire un oggetto esistente nella raccolta di aree di lavoro.  
  
-   O chiamare l'oggetto [crea](#create) funzione membro per creare un nuovo oggetto dell'area di lavoro DAO. Verrà avviata in modo esplicito una nuova sessione di area di lavoro, è possibile fare riferimento tramite il `CDaoWorkspace` oggetto. Dopo la chiamata **crea**, è possibile chiamare [Append](#append) se si desidera aggiungere l'area di lavoro alla raccolta di aree di lavoro del motore di database.  
  
 Vedere la panoramica della classe per [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) per informazioni su quando è necessario creare in modo esplicito un `CDaoWorkspace` oggetto. In genere, è utilizzare aree di lavoro create in modo implicito quando si apre un [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) oggetto senza specificare un'area di lavoro o quando si apre un [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto senza specificare un oggetto di database. Gli oggetti DAO MFC creati in questo modo usano area di lavoro predefinita del DAO, viene creata una sola volta e riutilizzata.  
  
 Per rilasciare un'area di lavoro e i relativi oggetti contenuti, chiamare l'oggetto di workspace [Chiudi](#close) funzione membro.  
  
##  <a name="close"></a>CDaoWorkspace::Close  
 Chiamare questa funzione membro per chiudere l'oggetto dell'area di lavoro.  
  
```  
virtual void Close();
```  
  
### <a name="remarks"></a>Note  
 Chiusura di un oggetto dell'area di lavoro aperto rilascia l'oggetto DAO sottostante e, se l'area di lavoro è un membro della raccolta di aree di lavoro, rimuove dalla raccolta. La chiamata **Chiudi** buona norma di programmazione.  
  
> [!CAUTION]
>  Chiusura di un oggetto dell'area di lavoro consente di chiudere tutti i database nell'area di lavoro aperti. Di conseguenza, tutti i recordset aperti nei database viene chiuso anche e qualsiasi modifica in sospeso o l'aggiornamento viene eseguito il rollback. Per informazioni correlate, vedere il [CDaoDatabase::Close](../../mfc/reference/cdaodatabase-class.md#close), [CDaoRecordset::Close](../../mfc/reference/cdaorecordset-class.md#close), [CDaoTableDef::Close](../../mfc/reference/cdaotabledef-class.md#close), e [CDaoQueryDef::Close](../../mfc/reference/cdaoquerydef-class.md#close) funzioni membro.  
  
 Gli oggetti dell'area di lavoro non sono permanenti; Esistono solo mentre sono presenti riferimenti a essi. Ciò significa che al termine della sessione di motore di database, l'area di lavoro e la relativa raccolta di database non vengono mantenute. È necessario crearli nuovamente la sessione successiva, aprire l'area di lavoro e i database nuovamente.  
  
 Per informazioni correlate, vedere l'argomento "Close (metodo)" nella Guida di DAO.  
  
##  <a name="committrans"></a>CDaoWorkspace:: CommitTrans  
 Chiamare questa funzione membro per eseguire il commit di una transazione, salvare uno o più database nell'area di lavoro di un gruppo di modifiche e aggiornamenti.  
  
```  
void CommitTrans();
```  
  
### <a name="remarks"></a>Note  
 Una transazione è costituita da una serie di modifiche per i dati del database o sulla relativa struttura, a partire da una chiamata a [BeginTrans](#begintrans). Quando si completa la transazione, commit o rollback (annullare le modifiche) con [Rollback](#rollback). Per impostazione predefinita, senza transazioni, gli aggiornamenti dei record vengano eseguiti immediatamente. La chiamata **BeginTrans** provoca l'impegno di aggiornamenti per essere ritardata fino a quando non si chiama **CommitTrans**.  
  
> [!CAUTION]
>  All'interno di un'area di lavoro, le transazioni sono sempre globali all'area di lavoro e non sono limitate a un solo database o un recordset. Se si eseguono operazioni su più di un database o recordset in una transazione area di lavoro, **CommitTrans** commit tutti gli aggiornamenti, in sospeso e **Rollback** consente di ripristinare tutte le operazioni su tali database e di un recordset.  
  
 Quando si chiude un database o l'area di lavoro con le transazioni in sospeso, il rollback delle transazioni vengono tutti.  
  
> [!NOTE]
>  Non è un meccanismo di commit in due fasi. Se un aggiornamento non riesce a eseguire il commit, altri ancora eseguirà il commit.  
  
##  <a name="compactdatabase"></a>CDaoWorkspace:: CompactDatabase  
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
 Il nome di un oggetto esistente, chiuso database. Può essere un percorso completo e nome file, ad esempio "c:\\\MYDB. MDB". Se il nome del file ha un'estensione, è necessario specificarlo. Se la rete supporta la convenzione di denominazione uniforme (UNC), è possibile anche specificare un percorso di rete, ad esempio "\\\\\\\MYSERVER\\\MYSHARE\\\MYDIR\\\MYDB. MDB". (Barre rovesciate sono necessari nelle stringhe di percorso perché "\\" è il carattere di escape di C++.)  
  
 `lpszDestName`  
 Il percorso completo del database compattato che si sta creando. È inoltre possibile specificare un percorso di rete come con `lpszSrcName`. Non è possibile utilizzare il `lpszDestName` argomento per specificare lo stesso file di database `lpszSrcName`.  
  
 `lpszPassword`  
 Password utilizzata quando si desidera compattare un database protetto da password. Si noti che se si utilizza la versione di `CompactDatabase` che accetta una password, è necessario specificare tutti i parametri. Inoltre, poiché si tratta di un parametro di connessione, richiede una formattazione speciale, come indicato di seguito:; PWD= `lpszPassword`. Ad esempio:; PWD = "I". (Il punto e virgola iniziale è obbligatorio).  
  
 `lpszLocale`  
 Un'espressione stringa utilizzata per specificare l'ordinamento per la creazione di `lpszDestName`. Se si omette questo argomento per accettare il valore predefinito di **dbLangGeneral** (vedere sotto), le impostazioni locali del nuovo database sono uguale a quello del database precedente. I possibili valori sono:  
  
- **dbLangGeneral** inglese, tedesco, francese, portoghese, italiano e spagnolo moderno  
  
- **dbLangArabic** arabo  
  
- **dbLangCyrillic** russo  
  
- **dbLangCzech** ceco  
  
- **dbLangDutch** olandese  
  
- **dbLangGreek** greco  
  
- **dbLangHebrew** ebraico  
  
- **dbLangHungarian** ungherese  
  
- **dbLangIcelandic** islandese  
  
- **dbLangNordic** lingue dei (database Microsoft Jet motore versione 1.0 solo)  
  
- **dbLangNorwdan** norvegese e danese  
  
- **dbLangPolish** polacco  
  
- **dbLangSpanish** spagnolo tradizionale  
  
- **dbLangSwedfin** svedese e finlandese  
  
- **dbLangTurkish** turco  
  
 `nOptions`  
 Indica una o più opzioni per il database di destinazione, `lpszDestName`. Se si omette questo argomento per accettare il valore predefinito, il `lpszDestName` avrà la stessa crittografia e la stessa versione `lpszSrcName`. È possibile combinare la **dbEncrypt** o **dbDecrypt** opzione con una delle opzioni di versione utilizzando l'operatore OR bit per bit. I valori possibili, che specificano un formato di database, non una versione del motore del database, sono:  
  
- **dbEncrypt** crittografare il database durante la compattazione.  
  
- **dbDecrypt** decrittografare il database durante la compattazione.  
  
- **dbVersion10** creare un database che utilizza la versione del motore di database Microsoft Jet 1.0 durante la compattazione.  
  
- **dbVersion11** creare un database che utilizza la versione del motore di database Microsoft Jet 1.1 durante la compattazione.  
  
- **dbVersion20** creare un database che utilizza la versione 2.0 del motore del database Microsoft Jet durante la compattazione.  
  
- **dbVersion30** creare un database che utilizza la versione 3.0 del motore del database Microsoft Jet durante la compattazione.  
  
 È possibile utilizzare **dbEncrypt** o **dbDecrypt** nell'argomento di opzioni per specificare se crittografare o decrittografare il database come alla compattazione. Se si omette una costante di crittografia o se si includono entrambe **dbDecrypt** e **dbEncrypt**, `lpszDestName` avrà la stessa crittografia come `lpszSrcName`. È possibile utilizzare una delle costanti versione nell'argomento opzioni per specificare la versione del formato dati per il database compattato. Questa costante interessa solo la versione del formato dei dati `lpszDestName`. È possibile specificare solo una costante di versione. Se si omette una costante, versione `lpszDestName` avrà la stessa versione `lpszSrcName`. È possibile compattare `lpszDestName` solo a una versione uguale o successiva a quella di `lpszSrcName`.  
  
> [!CAUTION]
>  Se un database non è crittografato, è possibile, anche se si implementa protezione utente/password, per leggere direttamente il file del disco binario che costituisce il database.  
  
### <a name="remarks"></a>Note  
 Mentre si modificano i dati in un database, il file di database può diventare frammentato e usare più spazio su disco maggiore del necessario. Periodicamente, è necessario compattare il database per deframmentare il file di database. Il database compattato risultano di solito inferiore. È anche possibile scegliere modificare l'ordinamento, la crittografia o la versione del formato di dati durante la copia e la compressione del database.  
  
> [!CAUTION]
>  Il `CompactDatabase` funzione membro non correttamente convertirà un database Microsoft Access completo da una versione a altra. Solo il formato dei dati viene convertito. Microsoft Access oggetti definiti, ad esempio moduli e report, non vengono convertiti. Tuttavia, i dati vengano convertiti correttamente.  
  
> [!TIP]
>  È inoltre possibile utilizzare `CompactDatabase` per copiare un file di database.  
  
 Per ulteriori informazioni sulla compattazione dei database, vedere l'argomento "Metodo CompactDatabase" nella Guida di DAO.  
  
##  <a name="create"></a>CDaoWorkspace:: Create  
 Chiamare questa funzione membro per creare un nuovo oggetto dell'area di lavoro DAO e associarlo a MFC `CDaoWorkspace` oggetto.  
  
```  
virtual void Create(
    LPCTSTR lpszName,  
    LPCTSTR lpszUserName,  
    LPCTSTR lpszPassword);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszName`  
 Una stringa con un massimo di 14 caratteri che identifica in modo univoco il nuovo oggetto dell'area di lavoro. È necessario fornire un nome. Per informazioni correlate, vedere l'argomento "Proprietà di nome" nella Guida di DAO.  
  
 *lpszUserName*  
 Il nome utente del proprietario dell'area di lavoro. Per requisiti, vedere il `lpszDefaultUser` parametro per il [SetDefaultUser](#setdefaultuser) funzione membro. Per informazioni correlate, vedere l'argomento "Proprietà UserName" nella Guida di DAO.  
  
 `lpszPassword`  
 La password per il nuovo oggetto dell'area di lavoro. Una password può contenere un massimo di 14 caratteri e può contenere qualsiasi carattere eccetto ASCII 0 (null). Le password maiuscole e minuscole. Per informazioni correlate, vedere l'argomento "Proprietà della Password" nella Guida di DAO.  
  
### <a name="remarks"></a>Note  
 È il processo generale di creazione:  
  
1.  Costruire un [CDaoWorkspace](#cdaoworkspace) oggetto.  
  
2.  Chiamare l'oggetto **crea** funzione membro per creare l'area di lavoro DAO sottostante. È necessario specificare un nome dell'area di lavoro.  
  
3.  Se lo si desidera chiamare [Append](#append) se si desidera aggiungere l'area di lavoro alla raccolta di aree di lavoro del motore di database. È possibile utilizzare con l'area di lavoro senza accodarlo.  
  
 Dopo il **crea** chiamata, l'oggetto dell'area di lavoro è stato aperto, pronto per l'utilizzo. Non è necessario chiamare **aprire** dopo **crea**. Non è necessario chiamare **crea** se l'area di lavoro esiste già nella raccolta di aree di lavoro. **Creare** Inizializza il motore di database, se non è già stato inizializzato per l'applicazione.  
  
##  <a name="getdatabasecount"></a>CDaoWorkspace::GetDatabaseCount  
 Chiamare questa funzione membro per recuperare il numero di oggetti di database DAO nella raccolta di database dell'area di lavoro, ovvero il numero di database aperti nell'area di lavoro.  
  
```  
short GetDatabaseCount();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di database aperti nell'area di lavoro.  
  
### <a name="remarks"></a>Note  
 `GetDatabaseCount`è utile se è necessario eseguire un ciclo in tutti i database definiti nella raccolta di database dell'area di lavoro. Per ottenere informazioni su un database specificato nella raccolta, vedere [GetDatabaseInfo](#getdatabaseinfo). Utilizzo tipico consiste nel chiamare `GetDatabaseCount` per il numero di database aperti, quindi utilizzare tale numero come un indice di ciclo per chiamate ripetute a `GetDatabaseInfo`.  
  
##  <a name="getdatabaseinfo"></a>CDaoWorkspace::GetDatabaseInfo  
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
 `nIndex`  
 Indice in base zero dell'oggetto di database nella raccolta di database dell'area di lavoro, per la ricerca in base all'indice.  
  
 `dbinfo`  
 Un riferimento a un [CDaoDatabaseInfo](../../mfc/reference/cdaodatabaseinfo-structure.md) oggetto che restituisce le informazioni richieste.  
  
 `dwInfoOptions`  
 Opzioni che specificano le informazioni relative al database da recuperare. Le opzioni disponibili sono elencate di seguito insieme a ciò che provocano la restituzione della funzione:  
  
- `AFX_DAO_PRIMARY_INFO`(Impostazione predefinita) Nome, aggiornabile, transazioni  
  
- `AFX_DAO_SECONDARY_INFO`Le informazioni primarie più: versione, l'ordine di ordinamento, il Timeout Query  
  
- `AFX_DAO_ALL_INFO`Più informazioni primarie e secondarie: la connessione  
  
 `lpszName`  
 Il nome dell'oggetto di database, per la ricerca in base al nome. Il nome è una stringa che identifica in modo univoco il nuovo oggetto dell'area di lavoro con un massimo di 14 caratteri.  
  
### <a name="remarks"></a>Note  
 Una versione della funzione consente di cercare un database in base all'indice. L'altra versione consente di cercare un database in base al nome.  
  
 Per una descrizione delle informazioni restituite `dbinfo`, vedere il [CDaoDatabaseInfo](../../mfc/reference/cdaodatabaseinfo-structure.md) struttura. Questa struttura dispone di membri che corrispondono agli elementi elencati in precedenza nella sezione Descrizione del `dwInfoOptions`. Quando si richiedono informazioni su un unico livello, ottenere informazioni per tutti i livelli precedenti oltre.  
  
##  <a name="getinipath"></a>CDaoWorkspace::GetIniPath  
 Chiamare questa funzione membro per ottenere il percorso del database Microsoft Jet impostazioni di inizializzazione del modulo del Registro di sistema.  
  
```  
static CString PASCAL GetIniPath();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) contenente il percorso del Registro di sistema.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare il percorso per ottenere informazioni sulle impostazioni per il motore di database. Le informazioni restituite sono effettivamente il nome di una sottochiave del Registro di sistema.  
  
 Per informazioni correlate, vedere gli argomenti "Proprietà IniPath" e "Personalizzazione di Windows del Registro di sistema le impostazioni per l'accesso dati" nella Guida di DAO.  
  
##  <a name="getisolateodbctrans"></a>CDaoWorkspace::GetIsolateODBCTrans  
 Chiamare questa funzione membro per ottenere il valore corrente della proprietà DAO IsolateODBCTrans per l'area di lavoro.  
  
```  
BOOL GetIsolateODBCTrans();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se le transazioni ODBC sono isolate; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 In alcuni casi, potrebbe essere necessario disporre di più transazioni simultanee in sospeso nello stesso database ODBC. A tale scopo, è necessario aprire l'area di lavoro separata per ogni transazione. Tenere presente che, anche se ogni area di lavoro può avere la propria connessione ODBC per il database, questo riduce le prestazioni del sistema. Poiché l'isolamento delle transazioni non è normalmente necessaria, le connessioni ODBC da più oggetti dell'area di lavoro aperti dallo stesso utente vengono condivisi per impostazione predefinita.  
  
 Alcuni server ODBC, ad esempio Microsoft SQL Server, non consentire le transazioni simultanee su una singola connessione. Se è necessario disporre di più di una transazione alla volta in sospeso su un database, impostare la proprietà IsolateODBCTrans **TRUE** in ogni area di lavoro, non appena viene aperto. Forza una connessione ODBC separata per ogni area di lavoro.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà IsolateODBCTrans" nella Guida di DAO.  
  
##  <a name="getlogintimeout"></a>CDaoWorkspace::GetLoginTimeout  
 Chiamare questa funzione membro per ottenere il valore corrente della proprietà DAO LoginTimeout per l'area di lavoro.  
  
```  
static short PASCAL GetLoginTimeout();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di secondi prima che si verifica un errore quando si tenta di accedere a un database ODBC.  
  
### <a name="remarks"></a>Note  
 Questo valore rappresenta il numero di secondi prima che si verifica un errore quando si tenta di accedere a un database ODBC. L'impostazione di LoginTimeout predefinita è 20 secondi. Quando LoginTimeout è impostata su 0, si verifica alcun timeout e la comunicazione con l'origine dati potrebbe bloccarsi.  
  
 Quando si sta tentando di accedere a un database ODBC, ad esempio Microsoft SQL Server, la connessione potrebbe non riuscire a causa di errori di rete o perché il server non è in esecuzione. Anziché attendere che l'impostazione predefinita 20 secondi per la connessione, è possibile specificare il tempo di attesa del motore di database prima di produrre un errore. Accesso al server avviene in modo implicito come parte di un numero di eventi diversi, ad esempio eseguendo una query in un database del server esterno.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà LoginTimeout" nella Guida di DAO.  
  
##  <a name="getname"></a>CDaoWorkspace::GetName  
 Chiamare questa funzione membro per ottenere il nome definito dall'utente dell'oggetto dell'area di lavoro DAO sottostante il `CDaoWorkspace` oggetto.  
  
```  
CString GetName();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che contiene il nome definito dall'utente dell'oggetto di workspace DAO.  
  
### <a name="remarks"></a>Note  
 Il nome è utile per l'accesso all'oggetto di workspace DAO nella raccolta di aree di lavoro del motore di database in base al nome.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà di nome" nella Guida di DAO.  
  
##  <a name="getusername"></a>CDaoWorkspace::GetUserName  
 Chiamare questa funzione membro per ottenere il nome del proprietario dell'area di lavoro.  
  
```  
CString GetUserName();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che rappresenta il proprietario dell'oggetto dell'area di lavoro.  
  
### <a name="remarks"></a>Note  
 Per ottenere o impostare le autorizzazioni per il proprietario dell'area di lavoro, chiamare DAO direttamente per controllare l'impostazione della proprietà; le autorizzazioni Questo determina le autorizzazioni di tale utente. Per lavorare con le autorizzazioni, è necessario un sistema. File assistente al debug gestito.  
  
 Per informazioni sulla chiamata di DAO direttamente, vedere [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md). Per informazioni correlate, vedere l'argomento "Proprietà UserName" nella Guida di DAO.  
  
##  <a name="getversion"></a>CDaoWorkspace::GetVersion  
 Chiamare questa funzione membro per determinare la versione del motore di database Microsoft Jet in uso.  
  
```  
static CString PASCAL GetVersion();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che indica la versione del motore di database associato all'oggetto.  
  
### <a name="remarks"></a>Note  
 Il valore restituito rappresenta il numero di versione nel formato "principale e secondaria"; ad esempio, "3.0". Il numero di versione del prodotto (ad esempio, 3.0) include il numero di versione (3), un periodo e il numero di versione (0).  
  
 Per informazioni correlate, vedere l'argomento "Proprietà Version" nella Guida di DAO.  
  
##  <a name="getworkspacecount"></a>CDaoWorkspace::GetWorkspaceCount  
 Chiamare questa funzione membro per recuperare il numero di oggetti DAO dell'area di lavoro nella raccolta di aree di lavoro del motore di database.  
  
```  
short GetWorkspaceCount();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di aree di lavoro aperti nella raccolta di aree di lavoro.  
  
### <a name="remarks"></a>Note  
 Questo conteggio non include eventuali aree di lavoro aperti, non è stato aggiunti alla raccolta. `GetWorkspaceCount`è utile se è necessario eseguire un ciclo in tutte le aree di lavoro definiti nella raccolta di aree di lavoro. Per ottenere informazioni su un'area di lavoro specificato nella raccolta, vedere [funzione membro GetWorkspaceInfo](#getworkspaceinfo). Utilizzo tipico consiste nel chiamare `GetWorkspaceCount` per il numero di aree di lavoro aperte, quindi utilizzare tale numero come un indice di ciclo per chiamate ripetute a `GetWorkspaceInfo`.  
  
##  <a name="getworkspaceinfo"></a>CDaoWorkspace::GetWorkspaceInfo  
 Chiamare questa funzione membro per ottenere i vari tipi di informazione per aprire un'area di lavoro nella sessione.  
  
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
  
- `AFX_DAO_SECONDARY_INFO`Le informazioni primarie più: nome utente  
  
- `AFX_DAO_ALL_INFO`Più informazioni primarie e secondarie: isolare ODBCTrans  
  
 `lpszName`  
 Il nome dell'oggetto dell'area di lavoro, per la ricerca in base al nome. Il nome è una stringa che identifica in modo univoco il nuovo oggetto dell'area di lavoro con un massimo di 14 caratteri.  
  
### <a name="remarks"></a>Note  
 Per una descrizione delle informazioni restituite `wkspcinfo`, vedere il [CDaoWorkspaceInfo](../../mfc/reference/cdaoworkspaceinfo-structure.md) struttura. Questa struttura dispone di membri che corrispondono agli elementi elencati in precedenza nella sezione Descrizione del `dwInfoOptions`. Quando si richiedono informazioni su un unico livello, ottenere informazioni per i livelli precedenti oltre.  
  
##  <a name="idle"></a>CDaoWorkspace::Idle  
 Chiamare **Idle** per fornire il motore di database con la possibilità di eseguire attività in background che potrebbe non essere aggiornata a causa di elaborazione dati complesse.  
  
```  
static void PASCAL Idle(int nAction = dbFreeLocks);
```  
  
### <a name="parameters"></a>Parametri  
 `nAction`  
 Un'operazione da eseguire durante l'elaborazione di inattività. Attualmente l'unica azione valida è **dbFreeLocks**.  
  
### <a name="remarks"></a>Note  
 Ciò si verifica in ambienti multiutente e multitasking in cui non c'è sufficiente tempo di elaborazione in background per mantenere tutti i record in un recordset corrente.  
  
> [!NOTE]
>  La chiamata **Idle** con i database creati con la versione 3.0 del motore di database Microsoft Jet non è necessario. Utilizzare **Idle** solo per i database creati con le versioni precedenti.  
  
 In genere, vengono rimossi i blocchi di lettura e di dati degli oggetti recordset di tipo dynaset locale viene aggiornato solo quando si verifica alcun altre azioni (inclusi i movimenti del mouse). Se si chiama periodicamente **Idle**, si forniscono il motore di database con il tempo di attività per il rilascio di elaborazione in background non necessari di blocchi di lettura. Specifica il **dbFreeLocks** costante come argomento Ritarda l'elaborazione finché non vengono rilasciati tutti i blocchi di lettura.  
  
 Questa funzione membro non è necessario in ambienti a utente singolo, a meno che non eseguono più istanze di un'applicazione. Il **Idle** funzione membro può migliorare le prestazioni in un ambiente multiutente perché forzano il motore di database devono essere scaricate su disco, rilasciando i blocchi di memoria. È inoltre possibile rilasciare i blocchi di lettura effettuando le operazioni in una transazione.  
  
 Per informazioni correlate, vedere l'argomento "Idle Method" nella Guida di DAO.  
  
##  <a name="isopen"></a>CDaoWorkspace::IsOpen  
 Chiamare questa funzione membro per determinare se il `CDaoWorkspace` oggetto è aperto, vale a dire, se l'oggetto MFC è stato inizializzato da una chiamata a [aprire](#open) o una chiamata a [crea](#create).  
  
```  
BOOL IsOpen() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'oggetto dell'area di lavoro è aperta; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 È possibile chiamare qualsiasi del membro le funzioni di un'area di lavoro è stato aperto.  
  
##  <a name="m_pdaoworkspace"></a>CDaoWorkspace::m_pDAOWorkspace  
 Un puntatore all'oggetto sottostante di DAO dell'area di lavoro.  
  
### <a name="remarks"></a>Note  
 Se è necessario accesso diretto all'oggetto DAO sottostante, utilizzare il membro dati. È possibile chiamare interfacce dell'oggetto DAO tramite l'indicatore di misura.  
  
 Per informazioni sull'accesso a oggetti DAO direttamente, vedere [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).  
  
##  <a name="open"></a>Inutilizzabile  
 Verrà aperto in modo esplicito un oggetto dell'area di lavoro associato all'area di lavoro predefinita DAO.  
  
```  
virtual void Open(LPCTSTR lpszName = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszName`  
 Il nome dell'oggetto DAO dell'area di lavoro per aprire, ovvero una stringa che identifica in modo univoco l'area di lavoro con un massimo di 14 caratteri. Accettare il valore predefinito **NULL** aprire in modo esplicito l'area di lavoro predefinita. Per la denominazione dei requisiti, vedere il `lpszName` parametro per [crea](#create). Per informazioni correlate, vedere l'argomento "Proprietà di nome" nella Guida di DAO.  
  
### <a name="remarks"></a>Note  
 Al termine della creazione un `CDaoWorkspace` dell'oggetto, chiamare questa funzione membro per eseguire una delle operazioni seguenti:  
  
-   Aprire in modo esplicito l'area di lavoro predefinita. Pass **NULL** for `lpszName`.  
  
-   Aprire un oggetto esistente `CDaoWorkspace` oggetto, un membro della raccolta di aree di lavoro, in base al nome. Passare un nome valido per un oggetto dell'area di lavoro esistente.  
  
 **Aprire** inserisce l'oggetto dell'area di lavoro in uno stato aperto e inizializza anche il motore di database se non è già stato inizializzato per l'applicazione.  
  
 Sebbene molti `CDaoWorkspace` membro funzioni possono essere chiamate solo dopo aver aperto l'area di lavoro, le seguenti funzioni membro che operano nel motore di database, sono disponibili dopo la costruzione dell'oggetto C++, ma prima di chiamare **aprire**:  
  
||||  
|-|-|-|  
|[Creare](#create)|[GetVersion](#getversion)|[SetDefaultUser](#setdefaultuser)|  
|[GetIniPath](#getinipath)|[Inattività](#idle)|[SetIniPath](#setinipath)|  
|[GetLoginTimeout](#getlogintimeout)|[SetDefaultPassword](#setdefaultpassword)|[SetLoginTimeout](#setlogintimeout)|  
  
##  <a name="repairdatabase"></a>CDaoWorkspace::RepairDatabase  
 Chiamare questa funzione membro se si desidera tentare di ripristinare un database danneggiato che accede al motore di database Microsoft Jet.  
  
```  
static void PASCAL RepairDatabase(LPCTSTR lpszName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszName`  
 Il percorso e il nome di un file di database esistente di gestione di Microsoft Jet. Se si omette il percorso, viene cercata solo nella directory corrente. Se il sistema supporta la convenzione di denominazione uniforme (UNC), è possibile anche specificare un percorso di rete, ad esempio: "\\\\\\\MYSERVER\\\MYSHARE\\\MYDIR\\\MYDB. MDB". (Barre rovesciate sono necessari nella stringa di percorso perché "\\" è il carattere di escape di C++.)  
  
### <a name="remarks"></a>Note  
 È necessario chiudere il database specificato da `lpszName` prima di ripararlo. In un ambiente multiutente, altri utenti non possono avere `lpszName` apre mentre si stanno ripristinando il. Se `lpszName` non è chiuso o non è disponibile per l'uso esclusivo, si verifica un errore.  
  
 Questa funzione membro tenta di ripristinare un database che è stato contrassegnato come danneggiato da un'operazione di scrittura incompleta. Ciò può verificarsi se un'applicazione che utilizza il motore di database Microsoft Jet viene chiusa in modo imprevisto a causa di un problema di hardware computer o un'interruzione dell'alimentazione. Se si completa l'operazione e chiamare il [Chiudi](../../mfc/reference/cdaodatabase-class.md#close) funzione membro o si chiude l'applicazione in modo normale, il database non verranno contrassegnato come potrebbe essere danneggiato.  
  
> [!NOTE]
>  Dopo aver ripristinato un database, è inoltre consigliabile compattarlo utilizzando il [CompactDatabase](#compactdatabase) funzione membro per deframmentare il file e per recuperare spazio su disco.  
  
 Per ulteriori informazioni sul ripristino dei database, vedere l'argomento "Metodo RepairDatabase" nella Guida di DAO.  
  
##  <a name="rollback"></a>CDaoWorkspace::Rollback  
 Chiamare questa funzione membro per terminare la transazione corrente e ripristinare le relative condizioni di tutti i database nell'area di lavoro prima che la transazione è stata iniziata.  
  
```  
void Rollback();
```  
  
### <a name="remarks"></a>Note  
  
> [!CAUTION]
>  All'interno di un oggetto dell'area di lavoro, le transazioni sono sempre globali all'area di lavoro e non sono limitate a un solo database o un recordset. Se si eseguono operazioni su più di un database o recordset in una transazione area di lavoro, **Rollback** consente di ripristinare tutte le operazioni su tutti i database e di un recordset.  
  
 Se si chiude un oggetto dell'area di lavoro senza salvare o il rollback di tutte le transazioni in sospeso, il rollback delle transazioni vengono automaticamente. Se si chiama [CommitTrans](#committrans) o **Rollback** senza prima chiamare [BeginTrans](#begintrans), si verifica un errore.  
  
> [!NOTE]
>  Quando si inizia una transazione, il motore di database registra le operazioni in un file che si trova nella directory specificata dalla variabile di ambiente TEMP nella workstation. Se il file di log delle transazioni esaurisce lo spazio di archiviazione disponibile sul disco TEMPORANEO, il motore di database, causerà MFC per generare un `CDaoException` (errore DAO 2004). A questo punto, se si chiama **CommitTrans**, un numero indeterminato di operazioni viene eseguito il commit ma le operazioni non completate rimanenti vengono perse e l'operazione deve essere riavviato. La chiamata **Rollback** rilascia il log delle transazioni e il rollback di tutte le operazioni nella transazione.  
  
##  <a name="setdefaultpassword"></a>CDaoWorkspace::SetDefaultPassword  
 Chiamare questa funzione membro per impostare la password predefinita usata dal motore di database quando viene creato un oggetto di area di lavoro senza una password specifica.  
  
```  
static void PASCAL SetDefaultPassword(LPCTSTR lpszPassword);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszPassword`  
 La password predefinita. Una password può contenere un massimo di 14 caratteri e può contenere qualsiasi carattere eccetto ASCII 0 (null). Le password maiuscole e minuscole.  
  
### <a name="remarks"></a>Note  
 La password predefinita è impostata si applica alle nuove aree di lavoro creati dopo la chiamata. Quando si crea successive aree di lavoro, non è necessario specificare una password di [crea](#create) chiamare.  
  
 Per utilizzare questa funzione membro:  
  
1.  Costruire un `CDaoWorkspace` oggetto ma non viene chiamato **crea**.  
  
2.  Chiamare `SetDefaultPassword` e, se si desidera, [SetDefaultUser](#setdefaultuser).  
  
3.  Chiamare **crea** per questo oggetto dell'area di lavoro o quelli successivi, senza specificare una password.  
  
 Per impostazione predefinita, la proprietà di DefaultUser è impostata su "admin" e la proprietà DefaultPassword è impostata su una stringa vuota ("").  
  
 Per ulteriori informazioni sulla sicurezza, vedere l'argomento "Proprietà Permissions" nella Guida di DAO. Per informazioni correlate, vedere gli argomenti "Proprietà DefaultPassword" e "Proprietà DefaultUser" nella Guida di DAO.  
  
##  <a name="setdefaultuser"></a>CDaoWorkspace::SetDefaultUser  
 Chiamare questa funzione membro per impostare il nome utente predefinito utilizzato dal motore di database quando viene creato un oggetto di area di lavoro senza un nome utente specifico.  
  
```  
static void PASCAL SetDefaultUser(LPCTSTR lpszDefaultUser);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszDefaultUser`  
 Il nome utente predefinito. Può essere 1 a 20 caratteri e può includere caratteri accentati, caratteri alfabetici, numeri, spazi e simboli, ad eccezione di un nome utente: "(virgolette) / (barra), \ (barra rovesciata), \[ \] (parentesi quadre,): (due punti), | barra verticale (), \< (meno-segno di maggiore di), > (maggiore-segno di maggiore di), + (segno) = (segno di uguale), (punto e virgola,), (virgola), (punto interrogativo) * (asterisco), spazi iniziali e caratteri di controllo (ASCII 00 e 31 ASCII). Per informazioni correlate, vedere l'argomento "Proprietà UserName" nella Guida di DAO.  
  
### <a name="remarks"></a>Note  
 Il nome utente predefinito impostato si applica a nuove aree di lavoro creati dopo la chiamata. Quando si crea aree di lavoro successivi, sarà necessario specificare un nome utente nel [crea](#create) chiamare.  
  
 Per utilizzare questa funzione membro:  
  
1.  Costruire un `CDaoWorkspace` oggetto ma non viene chiamato **crea**.  
  
2.  Chiamare `SetDefaultUser` e, se si desidera, [SetDefaultPassword](#setdefaultpassword).  
  
3.  Chiamare **crea** per questo oggetto dell'area di lavoro o quelli successivi, senza specificare un nome utente.  
  
 Per impostazione predefinita, la proprietà di DefaultUser è impostata su "admin" e la proprietà DefaultPassword è impostata su una stringa vuota ("").  
  
 Per informazioni correlate, vedere gli argomenti "Proprietà DefaultUser" e "Proprietà DefaultPassword" nella Guida di DAO.  
  
##  <a name="setinipath"></a>CDaoWorkspace::SetIniPath  
 Chiamare questa funzione membro per specificare il percorso delle impostazioni del Registro di sistema di Windows per il motore di database Microsoft Jet.  
  
```  
static void PASCAL SetIniPath(LPCTSTR lpszRegistrySubKey);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszRegistrySubkey*  
 Stringa contenente il nome di una sottochiave del Registro di sistema di Windows per il percorso di impostazioni di motore di database Microsoft Jet o i parametri necessari per il database ISAM installabili.  
  
### <a name="remarks"></a>Note  
 Chiamare `SetIniPath` solo se è necessario specificare le impostazioni speciali. Per ulteriori informazioni, vedere l'argomento "Proprietà IniPath" nella Guida di DAO.  
  
> [!NOTE]
>  Chiamare `SetIniPath` durante l'installazione dell'applicazione, non quando viene eseguita l'applicazione. `SetIniPath`deve essere chiamato prima di aprire eventuali aree di lavoro, un database o un recordset. in caso contrario, MFC genera un'eccezione.  
  
 È possibile utilizzare questo meccanismo per configurare il motore di database con le impostazioni del Registro di sistema fornito dall'utente. L'ambito di questo attributo è limitato all'applicazione e non può essere modificato senza riavviare l'applicazione.  
  
##  <a name="setisolateodbctrans"></a>CDaoWorkspace::SetIsolateODBCTrans  
 Chiamare questa funzione membro per impostare il valore della proprietà DAO IsolateODBCTrans per l'area di lavoro.  
  
```  
void SetIsolateODBCTrans(BOOL bIsolateODBCTrans);
```  
  
### <a name="parameters"></a>Parametri  
 *bIsolateODBCTrans*  
 Passare **TRUE** se si desidera iniziare l'isolamento delle transazioni ODBC. Passare **FALSE** se si desidera interrompere l'isolamento delle transazioni ODBC.  
  
### <a name="remarks"></a>Note  
 In alcuni casi, potrebbe essere necessario disporre di più transazioni simultanee in sospeso nello stesso database ODBC. A tale scopo, è necessario aprire l'area di lavoro separata per ogni transazione. Anche se ogni area di lavoro può avere la propria connessione ODBC per il database, ciò riduce le prestazioni del sistema. Poiché l'isolamento delle transazioni non è normalmente necessaria, le connessioni ODBC da più oggetti dell'area di lavoro aperti dallo stesso utente vengono condivisi per impostazione predefinita.  
  
 Alcuni server ODBC, ad esempio Microsoft SQL Server, non consentire le transazioni simultanee su una singola connessione. Se è necessario disporre di più di una transazione alla volta in sospeso su un database, impostare la proprietà IsolateODBCTrans **TRUE** in ogni area di lavoro, non appena viene aperto. Forza una connessione ODBC separata per ogni area di lavoro.  
  
##  <a name="setlogintimeout"></a>CDaoWorkspace::SetLoginTimeout  
 Chiamare questa funzione membro per impostare il valore della proprietà DAO LoginTimeout per l'area di lavoro.  
  
```  
static void PASCAL SetLoginTimeout(short nSeconds);
```  
  
### <a name="parameters"></a>Parametri  
 `nSeconds`  
 Il numero di secondi prima che si verifica un errore quando si tenta di accedere a un database ODBC.  
  
### <a name="remarks"></a>Note  
 Questo valore rappresenta il numero di secondi prima che si verifica un errore quando si tenta di accedere a un database ODBC. L'impostazione di LoginTimeout predefinita è 20 secondi. Quando LoginTimeout è impostata su 0, si verifica alcun timeout e la comunicazione con l'origine dati potrebbe bloccarsi.  
  
 Quando si sta tentando di accedere a un database ODBC, ad esempio Microsoft SQL Server, la connessione potrebbe non riuscire a causa di errori di rete o perché il server non è in esecuzione. Anziché attendere che l'impostazione predefinita 20 secondi per la connessione, è possibile specificare il tempo di attesa del motore di database prima di produrre un errore. L'accesso al server avviene in modo implicito come parte di un numero di eventi diversi, ad esempio eseguendo una query in un database del server esterno. Il valore di timeout è determinato dall'impostazione corrente della proprietà LoginTimeout.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà LoginTimeout" nella Guida di DAO.  
  
## <a name="see-also"></a>Vedere anche  
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDaoDatabase (classe)](../../mfc/reference/cdaodatabase-class.md)   
 [CDaoRecordset (classe)](../../mfc/reference/cdaorecordset-class.md)   
 [Classe CDaoTableDef](../../mfc/reference/cdaotabledef-class.md)   
 [CDaoQueryDef (classe)](../../mfc/reference/cdaoquerydef-class.md)   
 [Classe CDaoException](../../mfc/reference/cdaoexception-class.md)

