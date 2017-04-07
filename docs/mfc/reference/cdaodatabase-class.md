---
title: Classe CDaoDatabase | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- database classes [C++], DAO
- CDaoDatabase class, vs. CDatabase class
- CDaoDatabase class, and workspace
- CDaoDatabase class
- CDatabase class, vs. CDaoDatabase class
ms.assetid: 8ff5b342-964d-449d-bef1-d0ff56aadf6d
caps.latest.revision: 23
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
ms.openlocfilehash: c173ea0c0132752c08504053d9b00cdec8d3f69b
ms.lasthandoff: 02/24/2017

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
|[CDaoDatabase::CDaoDatabase](#cdaodatabase)|Costruisce un oggetto `CDaoDatabase`. Chiamare **aprire** per connettere l'oggetto a un database.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoDatabase::CanTransact](#cantransact)|Restituisce zero se il database supporta le transazioni.|  
|[CDaoDatabase::CanUpdate](#canupdate)|Restituisce zero se la `CDaoDatabase` oggetto è aggiornabile (non sola lettura).|  
|[CDaoDatabase::Close](#close)|Chiude la connessione al database.|  
|[CDaoDatabase::Create](#create)|Oggetto di database DAO sottostante crea e inizializza il `CDaoDatabase` oggetto.|  
|[CDaoDatabase::CreateRelation](#createrelation)|Definisce una nuova relazione tra le tabelle nel database.|  
|[CDaoDatabase::DeleteQueryDef](#deletequerydef)|Elimina un oggetto querydef salvato nella raccolta QueryDefs del database.|  
|[CDaoDatabase::DeleteRelation](#deleterelation)|Elimina una relazione esistente tra le tabelle nel database.|  
|[CDaoDatabase::DeleteTableDef](#deletetabledef)|Elimina la definizione di una tabella nel database. Questo elimina la tabella effettiva e tutti i dati.|  
|[CDaoDatabase::Execute](#execute)|Esegue una query. La chiamata a **Execute** per una query che restituisce risultati genera un'eccezione.|  
|[CDaoDatabase::GetConnect](#getconnect)|Restituisce la stringa di connessione utilizzata per la connessione di `CDaoDatabase` oggetto a un database. Utilizzato per ODBC.|  
|[CDaoDatabase::GetName](#getname)|Restituisce il nome del database attualmente in uso.|  
|[CDaoDatabase::GetQueryDefCount](#getquerydefcount)|Restituisce il numero di query definite per il database.|  
|[CDaoDatabase::GetQueryDefInfo](#getquerydefinfo)|Restituisce informazioni su una determinata query definita nel database.|  
|[CDaoDatabase::GetQueryTimeout](#getquerytimeout)|Restituisce il numero di secondi dopo il database per operazioni di query si verifica un timeout. Influisce su tutte le successive aprire, aggiungere, aggiornare e modificare operazioni e altre operazioni su origini dati ODBC (solo), ad esempio **Execute** chiamate.|  
|[CDaoDatabase::GetRecordsAffected](#getrecordsaffected)|Restituisce il numero di record interessato dall'ultimo aggiornamento, modificare o aggiungere un'operazione o da una chiamata a **Execute**.|  
|[CDaoDatabase::GetRelationCount](#getrelationcount)|Restituisce il numero di relazioni definite tra le tabelle del database.|  
|[CDaoDatabase::GetRelationInfo](#getrelationinfo)|Restituisce informazioni su una relazione specificata definita tra le tabelle nel database.|  
|[CDaoDatabase:](#gettabledefcount)|Restituisce il numero di tabelle definite nel database.|  
|[CDaoDatabase:: GetTableDefInfo](#gettabledefinfo)|Restituisce informazioni su una tabella specificata nel database.|  
|[CDaoDatabase::GetVersion](#getversion)|Restituisce la versione del motore di database associato al database.|  
|[CDaoDatabase::IsOpen](#isopen)|Restituisce zero se la `CDaoDatabase` è attualmente collegato a un database.|  
|[CDaoDatabase::Open](#open)|Stabilisce una connessione a un database.|  
|[CDaoDatabase::SetQueryTimeout](#setquerytimeout)|Imposta il numero di secondi dopo il quale database query operations (su origini dati ODBC solo) si verifica un timeout. Influisce su tutte le successive aprire, aggiungere nuovi, aggiornare ed eliminare le operazioni.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoDatabase::m_pDAODatabase](#m_pdaodatabase)|Puntatore all'oggetto di database DAO sottostante.|  
|[CDaoDatabase::m_pWorkspace](#m_pworkspace)|Un puntatore per il [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) oggetto che contiene il database e definisce il relativo spazio di transazione.|  
  
## <a name="remarks"></a>Note  
 Per informazioni sui formati di database supportate, vedere il [GetName](../../mfc/reference/cdaoworkspace-class.md#getname) funzione membro. È possibile configurare uno o più `CDaoDatabase` oggetti attivi contemporaneamente in un' "area di lavoro," rappresentato da un [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) oggetto. L'area di lavoro gestisce una raccolta di oggetti di database aperti, denominata raccolta di database.  
  
> [!NOTE]
>  Le classi di database DAO MFC sono distinte dalle classi di database MFC basate su ODBC. Tutti i nomi delle classi di database DAO hanno il prefisso "CDao". Classe `CDaoDatabase` fornisce un'interfaccia simile a quello della classe ODBC [CDatabase](../../mfc/reference/cdatabase-class.md). La differenza principale è che `CDatabase` accede DBMS tramite Open Database Connectivity (ODBC) e un driver ODBC per uno specifico DBMS. `CDaoDatabase`accede ai dati tramite un oggetto DAO (Data Access) basato sul motore di database Microsoft Jet. In generale, le classi MFC basate su DAO sono più in grado di supportare più classi MFC basate su ODBC; le classi basate su DAO possono accedere ai dati, ad esempio tramite driver ODBC, tramite i propri motore di database. Le classi basate su DAO supportano anche operazioni linguaggio DDL (Data Definition), ad esempio l'aggiunta di tabelle tramite le classi, senza dover chiamare direttamente DAO.  
  
## <a name="usage"></a>Utilizzo  
 È possibile creare oggetti di database in modo implicito, quando si creano oggetti recordset. Ma è anche possibile creare oggetti di database in modo esplicito. Per utilizzare un database esistente in modo esplicito con `CDaoDatabase`, effettuare una delle operazioni seguenti:  
  
-   Costruire un `CDaoDatabase` oggetto, passando un puntatore a un oggetto aperto [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) oggetto.  
  
-   O si crea un `CDaoDatabase` oggetto senza specificare l'area di lavoro (MFC crea un oggetto temporaneo dell'area di lavoro).  
  
 Per creare un nuovo Microsoft Jet (. Database MDB), costruire un `CDaoDatabase` oggetto e chiamare il relativo [crea](#create) funzione membro. Eseguire *non* chiamare **aprire** dopo **crea**.  
  
 Per aprire un database esistente, creare un `CDaoDatabase` oggetto e chiamare il relativo [aprire](#open) funzione membro.  
  
 Una di queste tecniche aggiunge l'oggetto di database DAO alla raccolta di database dell'area di lavoro e si apre una connessione ai dati. Quando si creano quindi [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md), [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md), o [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) oggetti per l'utilizzo dei database connesso, passare i costruttori per questi oggetti a un puntatore a di `CDaoDatabase` oggetto. Al termine dell'utilizzo della connessione, chiamare il [Chiudi](#close) membro funzione ed eliminare il `CDaoDatabase` oggetto. **Chiudi** chiude qualsiasi recordset non sia stato precedentemente chiuso.  
  
## <a name="transactions"></a>Transazioni  
 L'elaborazione delle transazioni del database viene fornito a livello di area di lavoro, vedere il [BeginTrans](../../mfc/reference/cdaoworkspace-class.md#begintrans), [CommitTrans](../../mfc/reference/cdaoworkspace-class.md#committrans), e [Rollback](../../mfc/reference/cdaoworkspace-class.md#rollback) funzioni membro della classe `CDaoWorkspace`.  
  
## <a name="odbc-connections"></a>Connessioni ODBC  
 Il metodo consigliato per la gestione delle origini dati ODBC consiste nel collegare le tabelle esterne a un Microsoft Jet (. Database MDB).  
  
## <a name="collections"></a>Raccolte  
 Ogni database mantiene il proprio raccolte di tabledef, querydef, recordset e gli oggetti della relazione. Classe `CDaoDatabase` fornisce le funzioni membro per la modifica di questi oggetti.  
  
> [!NOTE]
>  Gli oggetti sono archiviati in DAO, non nell'oggetto di database MFC. MFC fornisce classi per gli oggetti recordset, tabledef e querydef ma non per gli oggetti della relazione.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CDaoDatabase`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
##  <a name="cantransact"></a>CDaoDatabase::CanTransact  
 Chiamare questa funzione membro per determinare se il database consente alle transazioni.  
  
```  
BOOL CanTransact();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il database supporta le transazioni. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Le transazioni vengono gestite nell'area di lavoro del database.  
  
##  <a name="canupdate"></a>CDaoDatabase::CanUpdate  
 Chiamare questa funzione membro per determinare se il `CDaoDatabase` oggetto consente aggiornamenti.  
  
```  
BOOL CanUpdate();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la `CDaoDatabase` oggetto consente aggiornamenti; in caso contrario, 0, che indicano entrambi che si passato **TRUE** in `bReadOnly` quando viene aperto il `CDaoDatabase` oggetto o che il database è di sola lettura. Vedere il [aprire](#open) funzione membro.  
  
### <a name="remarks"></a>Note  
 Per informazioni sull'aggiornamento di database, vedere l'argomento "Proprietà aggiornabile" nella Guida di DAO.  
  
##  <a name="cdaodatabase"></a>CDaoDatabase::CDaoDatabase  
 Costruisce un oggetto `CDaoDatabase`.  
  
```  
CDaoDatabase(CDaoWorkspace* pWorkspace = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *pWorkspace*  
 Un puntatore per il `CDaoWorkspace` che conterrà il nuovo oggetto di database. Se si accetta il valore predefinito di **NULL**, il costruttore crea un temporaneo `CDaoWorkspace` oggetto che utilizza l'area di lavoro predefinita DAO. È possibile ottenere un puntatore all'oggetto dell'area di lavoro tramite il [m_pWorkspace](#m_pworkspace) (membro dati).  
  
### <a name="remarks"></a>Note  
 Dopo la costruzione dell'oggetto, se si sta creando un nuovo Microsoft Jet (. MDB) del database, chiamare l'oggetto [crea](#create) funzione membro. Se si è, invece, aprire un database esistente, chiamare l'oggetto [aprire](#open) funzione membro.  
  
 Terminato con l'oggetto, è necessario chiamare il relativo [Chiudi](#close) membro funzione e quindi eliminare il `CDaoDatabase` oggetto.  
  
 È possibile fare in modo da incorporare la `CDaoDatabase` oggetto nella classe del documento.  
  
> [!NOTE]
>  Oggetto `CDaoDatabase` oggetto viene anche creato in modo implicito se si apre un [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto senza passando un puntatore a un oggetto esistente `CDaoDatabase` oggetto. Questo oggetto di database viene chiuso quando si chiude l'oggetto recordset.  
  
##  <a name="close"></a>CDaoDatabase::Close  
 Chiamare questa funzione membro per disconnettersi da un database e chiudere qualsiasi recordset aperti tabledefs e querydefs associati al database.  
  
```  
virtual void Close();
```  
  
### <a name="remarks"></a>Note  
 È consigliabile chiudere questi oggetti manualmente prima di chiamare questa funzione membro. Chiusura di un `CDaoDatabase` oggetto rimuove dalla raccolta di database associato [area di lavoro](../../mfc/reference/cdaoworkspace-class.md). Poiché **Chiudi** non elimina il `CDaoDatabase` dell'oggetto, è possibile riutilizzare l'oggetto aprendo lo stesso database o un database diverso.  
  
> [!CAUTION]
>  Chiamare il [aggiornamento](../../mfc/reference/cdaorecordset-class.md#update) funzione membro (se sono presenti modifiche in sospeso) e **chiudere** funzione membro per tutti gli oggetti recordset aperti prima di chiudere un database. Se si esce da una funzione che dichiara [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) o `CDaoDatabase` oggetti nello stack, il database viene chiuso, le modifiche non salvate andranno perse, viene eseguito il rollback di tutte le transazioni in sospeso e tutte le modifiche in sospeso per i dati vengono perse.  
  
> [!CAUTION]
>  Se si tenta di chiudere un oggetto di database, mentre tutti gli oggetti recordset sono aperti o se si tenta di chiudere un oggetto dell'area di lavoro mentre sono aperti oggetti di database appartenenti all'area di lavoro specifico, gli oggetti recordset verranno chiusa e le modifiche o aggiornamenti in sospeso verranno annullate. Se si tenta di chiudere un oggetto dell'area di lavoro mentre sono aperti oggetti di database appartenenti a esso, l'operazione chiude tutti gli oggetti di database appartenenti a tale oggetto specifico dell'area di lavoro, che potrebbe comportare di oggetti recordset viene chiusi. Se non si chiude l'oggetto di database, un errore di asserzione nelle build di debug MFC.  
  
 L'oggetto di database è definito all'esterno dell'ambito di una funzione, se si esce dalla funzione senza chiuderlo, rimarrà aperta fino a quando non chiusa in modo esplicito l'oggetto di database o il modulo in cui è definito esula dall'ambito.  
  
##  <a name="create"></a>CDaoDatabase::Create  
 Per creare un nuovo Microsoft Jet (. MDB) del database, chiamare questa funzione membro dopo la creazione un `CDaoDatabase` oggetto.  
  
```  
virtual void Create(
    LPCTSTR lpszName,  
    LPCTSTR lpszLocale = dbLangGeneral,  
    int dwOptions = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszName`  
 Un'espressione stringa che rappresenta il nome del file di database che si sta creando. Può essere il percorso completo e nome file, ad esempio "c:\\\MYDB. MDB". È necessario fornire un nome. Se non si specifica un'estensione. MDB viene aggiunto. Se la rete supporta la convenzione di denominazione uniforme (UNC), è possibile anche specificare un percorso di rete, ad esempio "\\\\\\\MYSERVER\\\MYSHARE\\\MYDIR\\\MYDB". Solo Microsoft Jet (. File di database MDB) possono essere creati tramite la funzione membro. (Barre rovesciate sono necessari nei valori letterali stringa perché "\\" è il carattere di escape di C++.)  
  
 `lpszLocale`  
 Un'espressione stringa utilizzata per specificare l'ordinamento per la creazione del database. Il valore predefinito è **dbLangGeneral**. I possibili valori sono:  
  
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
  
 `dwOptions`  
 Valore intero che indica una o più opzioni. I possibili valori sono:  
  
- **dbEncrypt** creare un database crittografato.  
  
- **dbVersion10** creare un database con database Microsoft Jet versione 1.0.  
  
- **dbVersion11** creare un database con database Microsoft Jet versione 1.1.  
  
- **dbVersion20** creare un database con database Microsoft Jet versione 2.0.  
  
- **dbVersion30** creare un database con database Microsoft Jet versione 3.0.  
  
 Se si omette la costante di crittografia, viene creato un database crittografato. È possibile specificare solo una costante di versione. Se si omette una costante di versione, viene creato un database che utilizza il database Microsoft Jet versione 3.0.  
  
> [!CAUTION]
>  Se un database non è crittografato, è possibile, anche se si implementa la protezione utente/password, per leggere direttamente il file del disco binari che costituiscono il database.  
  
### <a name="remarks"></a>Note  
 **Creare** crea il file di database e l'oggetto di database DAO sottostante e inizializza l'oggetto C++. L'oggetto viene aggiunto alla raccolta di database dell'area di lavoro associati. L'oggetto di database è nello stato aperto; non chiamare **aprire** dopo **crea**.  
  
> [!NOTE]
>  Con **crea**, è possibile creare solo Microsoft Jet (. Database MDB). È possibile creare database ISAM o database ODBC.  
  
##  <a name="createrelation"></a>CDaoDatabase::CreateRelation  
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
 `lpszName`  
 Il nome univoco dell'oggetto relation. Il nome deve iniziare con una lettera e può contenere un massimo di 40 caratteri. Può includere numeri e caratteri di sottolineatura ma non può includere spazi o punteggiatura.  
  
 `lpszTable`  
 Il nome della tabella primaria della relazione. Se la tabella non esiste, MFC genera un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md).  
  
 `lpszForeignTable`  
 Il nome della tabella esterna nella relazione. Se la tabella non esiste, MFC genera un'eccezione di tipo `CDaoException`.  
  
 `lAttributes`  
 Valore long che contiene informazioni sul tipo di relazione. Per applicare l'integrità referenziale, tra le altre cose, è possibile utilizzare questo valore. È possibile utilizzare l'operatore OR bit per bit ( **|**) per combinare i valori seguenti (a condizione che la combinazione senso):  
  
- **dbRelationUnique** relazione è uno a uno.  
  
- **dbRelationDontEnforce** relazione non è (non l'integrità referenziale).  
  
- **dbRelationInherited** relazione esiste in un database non correnti che contiene le due tabelle collegate.  
  
- **dbRelationUpdateCascade** aggiornamenti sovrapporranno (per ulteriori informazioni sulla catena, vedere la sezione Osservazioni).  
  
- **dbRelationDeleteCascade** verranno eseguite le operazioni di eliminazione a catena.  
  
 *lpszField*  
 Un puntatore a una stringa con terminazione null contenente il nome di un campo nella tabella primaria (denominato da `lpszTable`).  
  
 *lpszForeignField*  
 Un puntatore a una stringa con terminazione null contenente il nome di un campo della tabella esterna (denominato da `lpszForeignTable`).  
  
 *relinfo*  
 Un riferimento a un [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) oggetto che contiene informazioni sulla relazione che si desidera creare.  
  
### <a name="remarks"></a>Note  
 La relazione non può interessare una query o una tabella collegata da un database esterno.  
  
 Utilizzare la prima versione della funzione quando la relazione include un campo in ognuna delle due tabelle. Utilizzare la seconda versione quando la relazione include più campi. Il numero massimo di campi in una relazione è 14.  
  
 Questa azione crea un oggetto relation DAO sottostante, ma questo è un dettaglio di implementazione MFC dall'incapsulamento in MFC degli oggetti di relazione è contenuta nella classe `CDaoDatabase`. MFC fornisce una classe per le relazioni.  
  
 Se si impostano la relazione degli attributi dell'oggetto per attivare operazioni cascade, il motore di database automaticamente aggiorna o Elimina i record in una o più tabelle quando vengono apportate modifiche alle tabelle correlate di chiave primarie.  
  
 Si supponga, ad esempio, che si stabilisce una relazione di eliminazione a catena tra una tabella Customers e una tabella Orders. Quando si eliminano record dalla tabella Customers, vengono eliminati anche i record nella tabella Orders correlate a tale cliente. Inoltre, se si stabilisce cascade delete relazioni tra la tabella Orders e altre tabelle, i record di tali tabelle vengono eliminati automaticamente quando si eliminano record dalla tabella Customers.  
  
 Per informazioni correlate, vedere l'argomento "Metodo CreateRelation" nella Guida di DAO.  
  
##  <a name="deletequerydef"></a>CDaoDatabase::DeleteQueryDef  
 Chiamare questa funzione membro per eliminare l'oggetto specificato, ovvero query salvata, ovvero dal `CDaoDatabase` raccolta QueryDefs dell'oggetto.  
  
```  
void DeleteQueryDef(LPCTSTR lpszName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszName`  
 Il nome della query salvata da eliminare.  
  
### <a name="remarks"></a>Note  
 Successivamente, tale query non è definito nel database.  
  
 Per informazioni sulla creazione di oggetti querydef, vedere la classe [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md). Un oggetto querydef viene associato a un particolare `CDaoDatabase` oggetto quando si costruisce il `CDaoQueryDef` oggetto, passando un puntatore all'oggetto di database.  
  
##  <a name="deleterelation"></a>CDaoDatabase::DeleteRelation  
 Chiamare questa funzione membro per eliminare una relazione esistente dalla raccolta Relations dell'oggetto di database.  
  
```  
void DeleteRelation(LPCTSTR lpszName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszName`  
 Il nome della relazione da eliminare.  
  
### <a name="remarks"></a>Note  
 Successivamente, la relazione non esiste.  
  
 Per informazioni correlate, vedere l'argomento "Metodo Delete" nella Guida di DAO.  
  
##  <a name="deletetabledef"></a>CDaoDatabase::DeleteTableDef  
 Chiamare questa funzione membro per eliminare la tabella specificata e tutti i dati dal `CDaoDatabase` insieme TableDefs dell'oggetto.  
  
```  
void DeleteTableDef(LPCTSTR lpszName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszName`  
 Nome dell'oggetto tabledef da eliminare.  
  
### <a name="remarks"></a>Note  
 Successivamente, tale tabella non è definita nel database.  
  
> [!NOTE]
>  Prestare molta attenzione a non eliminare le tabelle di sistema.  
  
 Per informazioni sulla creazione di oggetti tabledef, vedere la classe [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md). Un oggetto tabledef viene associato a un particolare `CDaoDatabase` oggetto quando si costruisce il `CDaoTableDef` oggetto, passando un puntatore all'oggetto di database.  
  
 Per informazioni correlate, vedere l'argomento "Metodo Delete" nella Guida di DAO.  
  
##  <a name="execute"></a>CDaoDatabase::Execute  
 Chiamare questa funzione membro per eseguire una query o eseguire un'istruzione SQL sul database.  
  
```  
void Execute(
    LPCTSTR lpszSQL,  
    int nOptions = dbFailOnError);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszSQL`  
 Puntatore a una stringa con terminazione null che contiene un comando SQL valido da eseguire.  
  
 `nOptions`  
 Valore intero che specifica le opzioni relative all'integrità della query. È possibile utilizzare l'operatore OR bit per bit ( **|**) per combinare le costanti seguenti (purché la combinazione senso, ad esempio, non è necessario combinare **dbInconsistent** con **dbConsistent**):  
  
- **dbDenyWrite** Nega l'autorizzazione in scrittura ad altri utenti.  
  
- **dbInconsistent** aggiornamenti non coerenti (impostazione predefinita).  
  
- **dbConsistent** aggiornamenti consistenti.  
  
- **dbSQLPassThrough** pass-through SQL. L'istruzione SQL deve essere passato a un'origine dati ODBC per l'elaborazione.  
  
- **dbFailOnError** rollback degli aggiornamenti se si verifica un errore.  
  
- **dbSeeChanges** genera un errore di run-time se un altro utente modifica i dati che si sta modificando.  
  
> [!NOTE]
>  Se entrambi **dbInconsistent** e **dbConsistent** sono inclusi o se non è incluso, il risultato è il valore predefinito. Per una spiegazione di queste costanti, vedere l'argomento "Esegui metodo" nella Guida di DAO.  
  
### <a name="remarks"></a>Note  
 **Eseguire** funziona solo per le query di comando o pass-through SQL che non restituiscono risultati. Non funziona per le query select che restituiscono i record.  
  
 Per una definizione e informazioni sulle query, vedere gli argomenti "Azione Query" e "Esegui metodo" nella Guida di DAO.  
  
> [!TIP]
>  Specificata un'istruzione SQL sintatticamente corretta e delle autorizzazioni appropriate, il **Execute** funzione membro non avrà esito negativo anche se non è una singola riga può essere modificata o eliminata. Pertanto, utilizzare sempre il **dbFailOnError** opzione quando si utilizza il **Execute** funzione membro per eseguire un aggiornamento o eliminazione di query. Questa opzione consente di generare un'eccezione di tipo MFC [CDaoException](../../mfc/reference/cdaoexception-class.md) e rollback di tutte le modifiche apportate se uno qualsiasi dei record interessati vengono bloccato e non può essere aggiornato o eliminato. Si noti che è sempre possibile chiamare `GetRecordsAffected` per visualizzare il numero di record interessato.  
  
 Chiamare il [GetRecordsAffected](#getrecordsaffected) funzione membro dell'oggetto di database per determinare il numero di record interessati dall'ultima **Execute** chiamare. Ad esempio, `GetRecordsAffected` restituisce informazioni sul numero di record eliminati, aggiornati o inseriti durante l'esecuzione di una query. Il conteggio restituito non riflette le modifiche nelle tabelle correlate quando cascade aggiorna o Elimina sono attive.  
  
 **Eseguire** non restituisce un oggetto recordset. Utilizzando **Execute** su una query che seleziona i record determina MFC generare un'eccezione di tipo `CDaoException`. (Non esiste alcun `ExecuteSQL` funzione membro analogo a `CDatabase::ExecuteSQL`.)  
  
##  <a name="getconnect"></a>CDaoDatabase::GetConnect  
 Chiamare questa funzione membro per recuperare la stringa di connessione utilizzata per la connessione di `CDaoDatabase` oggetto a un database ODBC o ISAM.  
  
```  
CString GetConnect();
```  
  
### <a name="return-value"></a>Valore restituito  
 La stringa di connessione se [aprire](#open) è stato chiamato in un'origine dati ODBC; in caso contrario, una stringa vuota. Per un Microsoft Jet (. Database MDB), la stringa è sempre vuota a meno che non impostate per l'utilizzo con il **dbSQLPassThrough** opzione utilizzata con la [Execute](#execute) funzione membro o utilizzati in apertura di un recordset.  
  
### <a name="remarks"></a>Note  
 La stringa fornisce informazioni sull'origine di un database utilizzato in una query pass-through o di un database aperto. La stringa di connessione è composta da un identificatore del tipo di database e zero o più parametri separati da punti e virgola.  
  
> [!NOTE]
>  Utilizzo delle classi DAO MFC per connettersi a un'origine dati tramite ODBC è meno efficiente rispetto alla connessione tramite una tabella collegata.  
  
> [!NOTE]
>  La stringa di connessione viene utilizzata per passare informazioni aggiuntive a ODBC e ad alcuni driver ISAM in base alle esigenze. Non è utilizzato per. Database MDB. Per tabelle di base del database Microsoft Jet, la stringa di connessione è una stringa vuota (""), ad eccezione di quando viene usato per una query pass-through SQL come descritto in restituire valore.  
  
 Vedere il [aprire](#open) funzione membro per una descrizione di come viene creata la stringa di connessione. Dopo aver impostata la stringa di connessione **aprire** chiamata, più avanti consente di controllare l'impostazione per determinare il tipo, percorso, l'origine di dati ODBC, la Password o ID utente del database.  
  
##  <a name="getname"></a>CDaoDatabase::GetName  
 Chiamare questa funzione membro per recuperare il nome del database attualmente aperto, ovvero il nome di un file di database esistente o il nome di un'origine dati ODBC registrato.  
  
```  
CString GetName();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il percorso completo e nome file del database, se ha esito positivo. in caso contrario, un oggetto vuoto [CString](../../atl-mfc-shared/reference/cstringt-class.md).  
  
### <a name="remarks"></a>Note  
 Se la rete supporta la convenzione di denominazione uniforme (UNC), è inoltre possibile specificare un percorso di rete, ad esempio, "\\\\\\\MYSERVER\\\MYSHARE\\\MYDIR\\\MYDB. MDB". (Barre rovesciate sono necessari nei valori letterali stringa perché "\\" è il carattere di escape di C++.)  
  
 Potrebbe, ad esempio, da visualizzare il nome in un'intestazione. Se si verifica un errore mentre viene recuperato il nome, MFC genera un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md).  
  
> [!NOTE]
>  Per ottenere prestazioni migliori quando accedono ai database esterni, è consigliabile collegare le tabelle di database esterno a un database Microsoft Jet (. MDB) invece di connettersi direttamente all'origine dati.  
  
 Il tipo di database è indicato da file o directory che il percorso punta a, come segue:  
  
|Punti di percorso per...|Tipo di database|  
|--------------------------|-------------------|  
|. File con estensione MDB|Database Microsoft Jet (Microsoft Access)|  
|Directory che contiene. File DBF|database dBASE|  
|Directory che contiene. File XLS|Database di Microsoft Excel|  
|Directory che contiene. File PDX|Database Paradox|  
|Directory contenente il testo formattato in modo appropriato i file di database|Database nel formato di testo|  
  
 Per i database ODBC, ad esempio SQL Server e Oracle, la stringa di connessione del database identifica un nome origine dati (DSN) che viene registrato in ODBC.  
  
##  <a name="getquerydefcount"></a>CDaoDatabase::GetQueryDefCount  
 Chiamare questa funzione membro per recuperare il numero di query definite nella raccolta QueryDefs del database.  
  
```  
short GetQueryDefCount();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di query definiti nel database.  
  
### <a name="remarks"></a>Note  
 `GetQueryDefCount`è utile se è necessario scorrere tutti gli oggetti QueryDef nella raccolta QueryDefs. Per ottenere informazioni su una determinata query nella raccolta, vedere [funzione membro GetQueryDefInfo](#getquerydefinfo).  
  
##  <a name="getquerydefinfo"></a>CDaoDatabase::GetQueryDefInfo  
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
 `nIndex`  
 Indice della query già definita nella raccolta QueryDefs del database, per la ricerca in base all'indice.  
  
 *querydefinfo*  
 Un riferimento a un [CDaoQueryDefInfo](../../mfc/reference/cdaoquerydefinfo-structure.md) oggetto che restituisce le informazioni richieste.  
  
 `dwInfoOptions`  
 Opzioni che specificano quali informazioni del recordset da recuperare. Le opzioni disponibili sono elencate di seguito con la funzione restituire all'interno del recordset provocano:  
  
- `AFX_DAO_PRIMARY_INFO`(Impostazione predefinita) Nome, tipo  
  
- `AFX_DAO_SECONDARY_INFO`Informazioni principali più: Data creazione, data dell'ultimo aggiornamento, restituisce i record, renderli aggiornabili  
  
- `AFX_DAO_ALL_INFO`Più informazioni primarie e secondarie: ODBCTimeout SQL, Connect,  
  
 `lpszName`  
 Stringa contenente il nome di una query definita nel database, per la ricerca in base al nome.  
  
### <a name="remarks"></a>Note  
 È possibile selezionare una query in base all'indice nella raccolta QueryDefs del database o dal nome della query, vengono fornite due versioni della funzione.  
  
 Per una descrizione delle informazioni restituite *querydefinfo*, vedere il [CDaoQueryDefInfo](../../mfc/reference/cdaoquerydefinfo-structure.md) struttura. Questa struttura dispone di membri che corrispondono agli elementi elencati in precedenza nella sezione Descrizione del `dwInfoOptions`. Se si richiede un livello di informazioni, si ottengono livelli precedenti oltre a informazioni.  
  
##  <a name="getquerytimeout"></a>CDaoDatabase::GetQueryTimeout  
 Chiamare questa funzione membro per recuperare il numero corrente di secondi di attesa prima che le operazioni successive sul database connesso si verifica il timeout.  
  
```  
short GetQueryTimeout();
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore short integer contenente il valore di timeout in secondi.  
  
### <a name="remarks"></a>Note  
 Un'operazione potrebbe essere un timeout a causa di problemi di accesso di rete, il tempo di elaborazione di un numero eccessivo di query e così via. Durante l'impostazione è attiva, influisce su tutte, aggiungere nuovi, aggiornare ed eliminare le operazioni su tutti i recordset associati a questo `CDaoDatabase` oggetto. È possibile modificare l'impostazione di timeout corrente chiamando [SetQueryTimeout](#setquerytimeout). Modificando il valore di timeout di query per un oggetto recordset dopo l'apertura non si modifica il valore per il recordset. Ad esempio, le successive [spostare](../../mfc/reference/cdaorecordset-class.md#move) operazioni non utilizzano il nuovo valore. Il valore predefinito è inizialmente impostato quando viene inizializzato il motore di database.  
  
 Il valore predefinito per i timeout di query viene acquisito dal Registro di sistema Windows. Se è disponibile alcuna impostazione del Registro di sistema, il valore predefinito è 60 secondi. Non tutti i database supportano la possibilità di impostare un valore di timeout di query. Se si imposta un valore di timeout query pari a 0, si verifica alcun timeout. e la comunicazione con il database potrebbe non rispondere. Questo comportamento può essere utile durante lo sviluppo. Se la chiamata non riesce, MFC genera un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md).  
  
 Per informazioni correlate, vedere l'argomento "Proprietà QueryTimeout" nella Guida di DAO.  
  
##  <a name="getrecordsaffected"></a>CDaoDatabase::GetRecordsAffected  
 Chiamare questa funzione membro per determinare il numero di record interessati dall'ultima chiamata di [Execute](#execute) funzione membro.  
  
```  
long GetRecordsAffected();
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore long integer contenente il numero di record interessati.  
  
### <a name="remarks"></a>Note  
 Il valore restituito include il numero di record eliminati, aggiornati o inseriti da una query eseguita con **Execute**. Il conteggio restituito non riflette le modifiche nelle tabelle correlate quando cascade aggiorna o Elimina sono attive.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà RecordsAffected" nella Guida di DAO.  
  
##  <a name="getrelationcount"></a>CDaoDatabase::GetRelationCount  
 Chiamare questa funzione membro per ottenere il numero delle relazioni definite tra le tabelle del database.  
  
```  
short GetRelationCount();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di relazioni definite tra le tabelle del database.  
  
### <a name="remarks"></a>Note  
 **GetRelationCount** è utile se è necessario scorrere tutte le relazioni definite nella raccolta di relazioni del database. Per ottenere informazioni su una determinata relazione nella raccolta, vedere [GetRelationInfo](#getrelationinfo).  
  
 Per illustrare il concetto di una relazione, si consideri una tabella fornitori e una tabella dei prodotti, che potrebbe disporre di una relazione uno-a-molti. Questa relazione, un fornitore può fornire più di un prodotto. Altre relazioni sono uno a uno e molti-a-molti.  
  
##  <a name="getrelationinfo"></a>CDaoDatabase::GetRelationInfo  
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
 `nIndex`  
 L'indice dell'oggetto relation nella raccolta di relazioni del database, per la ricerca in base all'indice.  
  
 *relinfo*  
 Un riferimento a un [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) oggetto che restituisce le informazioni richieste.  
  
 `dwInfoOptions`  
 Opzioni che specificano le informazioni sulla relazione da recuperare. Le opzioni disponibili sono elencate di seguito con la funzione restituire sulla relazione provocano:  
  
- `AFX_DAO_PRIMARY_INFO`(Impostazione predefinita) Nome tabella, tabella esterna  
  
- `AFX_DAO_SECONDARY_INFO`Attributi, le informazioni sui campi  
  
 Le informazioni del campo è un [CDaoRelationFieldInfo](../../mfc/reference/cdaorelationfieldinfo-structure.md) oggetto contenente i campi della tabella primaria coinvolto nella relazione.  
  
 `lpszName`  
 Stringa contenente il nome dell'oggetto relazione per la ricerca in base al nome.  
  
### <a name="remarks"></a>Note  
 Due versioni di questa funzione forniscono l'accesso in base all'indice o al nome. Per una descrizione delle informazioni restituite *relinfo*, vedere il [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) struttura. Questa struttura dispone di membri che corrispondono agli elementi elencati in precedenza nella sezione Descrizione del `dwInfoOptions`. Se si richiedono informazioni su un unico livello, è inoltre ottenere informazioni in tutti i livelli precedenti oltre.  
  
> [!NOTE]
>  Se si imposta la relazione con gli attributi dell'oggetto per attivare le operazioni di propagazione ( **dbRelationUpdateCascades** o **dbRelationDeleteCascades**), il motore di database Microsoft Jet automaticamente aggiorna o Elimina i record in uno o più tabelle quando vengono apportate modifiche alle relative tabelle di chiave primaria. Si supponga, ad esempio, che si stabilisce una relazione di eliminazione a catena tra una tabella Customers e una tabella Orders. Quando si eliminano record dalla tabella Customers, vengono eliminati anche i record nella tabella Orders correlate a tale cliente. Inoltre, se si stabilisce cascade delete relazioni tra la tabella Orders e altre tabelle, i record di tali tabelle vengono eliminati automaticamente quando si eliminano record dalla tabella Customers.  
  
##  <a name="gettabledefcount"></a>CDaoDatabase:  
 Chiamare questa funzione membro per recuperare il numero di tabelle definite nel database.  
  
```  
short GetTableDefCount();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di tabledefs definiti nel database.  
  
### <a name="remarks"></a>Note  
 `GetTableDefCount`è utile se si desidera riprodurre a ciclo continuo tabledefs tutti insieme TableDefs del database. Per ottenere informazioni su una tabella specificata nella raccolta, vedere [GetTableDefInfo](#gettabledefinfo).  
  
##  <a name="gettabledefinfo"></a>CDaoDatabase:: GetTableDefInfo  
 Chiamare questa funzione membro per ottenere diversi tipi di informazioni su una tabella definita nel database.  
  
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
 `nIndex`  
 L'indice dell'oggetto tabledef nella raccolta TableDefs del database, per la ricerca in base all'indice.  
  
 `tabledefinfo`  
 Un riferimento a un [CDaoTableDefInfo](../../mfc/reference/cdaotabledefinfo-structure.md) oggetto che restituisce le informazioni richieste.  
  
 `dwInfoOptions`  
 Opzioni che specificano quali informazioni sulla tabella da recuperare. Le opzioni disponibili sono elencate di seguito con la funzione restituire sulla relazione provocano:  
  
- `AFX_DAO_PRIMARY_INFO`(Impostazione predefinita) Nome, aggiornabile, gli attributi  
  
- `AFX_DAO_SECONDARY_INFO`Informazioni principali più: data di creazione, data dell'ultimo aggiornamento, il nome di tabella di origine, Connect  
  
- `AFX_DAO_ALL_INFO`Più informazioni primarie e secondarie: regola di convalida, convalida il testo, numero di Record  
  
 `lpszName`  
 Il nome dell'oggetto tabledef, per la ricerca in base al nome.  
  
### <a name="remarks"></a>Note  
 È possibile selezionare una tabella in base all'indice nella raccolta TableDefs del database o dal nome della tabella, vengono fornite due versioni della funzione.  
  
 Per una descrizione delle informazioni restituite `tabledefinfo`, vedere il [CDaoTableDefInfo](../../mfc/reference/cdaotabledefinfo-structure.md) struttura. Questa struttura dispone di membri che corrispondono agli elementi elencati in precedenza nella sezione Descrizione del `dwInfoOptions`. Se si richiedono informazioni su un unico livello, ottenere informazioni dei livelli precedenti oltre.  
  
> [!NOTE]
>  Il `AFX_DAO_ALL_INFO` opzione fornisce informazioni che possono essere lente da ottenere. In questo caso, i record nella tabella di conteggio potrebbe richiedere molto tempo se sono presenti molti record.  
  
##  <a name="getversion"></a>CDaoDatabase::GetVersion  
 Chiamare questa funzione membro per determinare la versione del file di database Microsoft Jet.  
  
```  
CString GetVersion();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che indica la versione del file di database associato all'oggetto.  
  
### <a name="remarks"></a>Note  
 Il valore restituito rappresenta il numero di versione nel formato "secondaria"; ad esempio, "3.0". Il numero di versione del prodotto (ad esempio 3.0) costituito dal numero di versione (3), un periodo e il numero di versione (0). Le versioni di data sono 1.0, 1.1, 2.0 e 3.0.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà Version" nella Guida di DAO.  
  
##  <a name="isopen"></a>CDaoDatabase::IsOpen  
 Chiamare questa funzione membro per determinare se il `CDaoDatabase` oggetto è aperto in un database.  
  
```  
BOOL IsOpen() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la `CDaoDatabase` oggetto è aperto; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
  
##  <a name="m_pdaodatabase"></a>CDaoDatabase::m_pDAODatabase  
 Contiene un puntatore all'interfaccia OLE per l'oggetto di database DAO sottostante il `CDaoDatabase` oggetto.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo puntatore se è necessario accedere direttamente all'interfaccia DAO.  
  
 Per informazioni sulla chiamata di DAO direttamente, vedere [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).  
  
##  <a name="m_pworkspace"></a>CDaoDatabase::m_pWorkspace  
 Contiene un puntatore per il [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) oggetto che contiene l'oggetto di database.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo puntatore, se è necessario accedere direttamente l'area di lavoro, ad esempio, per ottenere i puntatori a oggetti di database nella raccolta di database dell'area di lavoro.  
  
##  <a name="open"></a>CDaoDatabase::Open  
 È necessario chiamare questa funzione membro per inizializzare un oggetto appena costruito `CDaoDatabase` oggetto che rappresenta un database esistente.  
  
```  
virtual void Open(
    LPCTSTR lpszName,  
    BOOL bExclusive = FALSE,  
    BOOL bReadOnly = FALSE,  
    LPCTSTR lpszConnect = _T(""));
```  
  
### <a name="parameters"></a>Parametri  
 `lpszName`  
 Un'espressione stringa che rappresenta il nome di una versione esistente di Microsoft Jet (. File di database MDB). Se il nome del file ha un'estensione, è necessario. Se la rete supporta la convenzione di denominazione uniforme (UNC), è possibile anche specificare un percorso di rete, ad esempio "\\\\\\\MYSERVER\\\MYSHARE\\\MYDIR\\\MYDB. MDB". (Barre rovesciate sono necessari nei valori letterali stringa perché "\\" è il carattere di escape di C++.)  
  
 Considerazioni applicabili quando si utilizza `lpszName`. Se è:  
  
-   Fa riferimento a un database che è già aperto in modo esclusivo da un altro utente, MFC genera un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md). Intercettare l'eccezione per informare l'utente che il database è disponibile.  
  
-   È una stringa vuota ("") e *lpszConnect* è "ODBC;", verrà visualizzata una finestra di dialogo elenca i nomi delle origini dati ODBC tutte registrate in modo che l'utente può selezionare un database. È consigliabile evitare di connessioni dirette a origini dati ODBC. utilizzare una tabella collegata.  
  
-   In caso contrario non fa riferimento a un database esistente o valido DSN ODBC, MFC genera un'eccezione di tipo `CDaoException`.  
  
> [!NOTE]
>  Per ulteriori informazioni sui codici di errore DAO, vedere il DAOERR. File H. Per informazioni correlate, vedere l'argomento "Dati accesso errori intercettabili" nella Guida di DAO.  
  
 `bExclusive`  
 Valore booleano che è **TRUE** se il database è da aprire per l'accesso esclusivo (condiviso) e **FALSE** se il database deve essere aperto per l'accesso condiviso. Se si omette questo argomento, il database è aperto per l'accesso condiviso.  
  
 `bReadOnly`  
 Valore booleano che è **TRUE** se il database è per essere aperto per l'accesso di sola lettura e **FALSE** se il database deve essere aperto per l'accesso in lettura/scrittura. Se si omette questo argomento, il database è aperto per l'accesso in lettura/scrittura. Tutti i dipendenti recordset ereditano l'attributo.  
  
 `lpszConnect`  
 Un'espressione stringa utilizzata per l'apertura del database. Questa stringa costituisce ODBC connettersi argomenti. È necessario specificare gli argomenti esclusivi e di sola lettura per fornire una stringa di origine. Se il database è un database Microsoft Jet (. MDB), questa stringa è vuota (""). La sintassi per il valore predefinito, ovvero **t**(""), fornisce le compilazioni per Unicode e ANSI portabilità dell'applicazione.  
  
### <a name="remarks"></a>Note  
 **Aprire** associa l'oggetto DAO sottostante del database. È possibile utilizzare l'oggetto di database per costruire l'oggetto recordset, tabledef o querydef oggetti fino a quando non viene inizializzato. **Aprire** aggiunge l'oggetto di database alla raccolta di database dell'area di lavoro associati.  
  
 Utilizzare i parametri come segue:  
  
-   Se si sta aprendo un Microsoft Jet (. Database MDB), utilizzare il `lpszName` parametro e passare una stringa vuota per il `lpszConnect` parametro oppure passare una stringa della password nel formato "; PWD = password "se il database è protetto da password (. MDB solo database).  
  
-   Se si apre un'origine dati ODBC, passare una stringa di connessione ODBC valida in `lpszConnect` e una stringa vuota in `lpszName`.  
  
 Per informazioni correlate, vedere l'argomento "Metodo OpenDatabase" nella Guida di DAO.  
  
> [!NOTE]
>  Per ottenere prestazioni migliori quando si accede a database esterni, inclusi database ISAM e origini dati ODBC, è consigliabile collegare le tabelle di database esterno a un database di gestione di Microsoft Jet (. MDB) invece di connettersi direttamente all'origine dati.  
  
 È possibile che un tentativo di connessione per il timeout se, ad esempio, non è disponibile l'host DBMS. Se il tentativo di connessione non riesce, **aprire** genera un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md).  
  
 Le rimanenti note si applicano solo ai database ODBC:  
  
 Se il database è un database ODBC e i parametri di **aprire** chiamata non contengono informazioni sufficienti per stabilire la connessione, il driver ODBC apre una finestra di dialogo per ottenere le informazioni necessarie da parte dell'utente. Quando si chiama **aprire**, la stringa di connessione, `lpszConnect`, viene archiviato in locale ed è disponibile chiamando il [GetConnect](#getconnect) funzione membro.  
  
 Se si desidera, è possibile aprire la propria finestra di dialogo prima di chiamare **aprire** per ottenere informazioni dall'utente, ad esempio una password, quindi aggiungere le informazioni per la stringa di connessione si passa a **aprire**. Oppure è possibile salvare la stringa di connessione passata (ad esempio nel Registro di sistema Windows) in modo da poterla riutilizzare alla successiva ora l'applicazione chiama **aprire** su un `CDaoDatabase` oggetto.  
  
 È inoltre possibile utilizzare la stringa di connessione per più livelli di autorizzazione di accesso (per un diverso ogni `CDaoDatabase` oggetto) o per fornire altre informazioni specifiche del database.  
  
##  <a name="setquerytimeout"></a>CDaoDatabase::SetQueryTimeout  
 Chiamare questa funzione membro per sostituire il numero predefinito di secondi consentiti prima le operazioni successive sul timeout database connesso.  
  
```  
void SetQueryTimeout(short nSeconds);
```  
  
### <a name="parameters"></a>Parametri  
 `nSeconds`  
 Il numero di secondi di attesa prima di un tentativo di query timeout.  
  
### <a name="remarks"></a>Note  
 Un'operazione potrebbe essere un timeout a causa di problemi di accesso di rete, il tempo di elaborazione di un numero eccessivo di query e così via. Chiamare `SetQueryTimeout` prima dell'apertura del recordset o prima di chiamare il recordset [AddNew](../../mfc/reference/cdaorecordset-class.md#addnew), [aggiornamento](../../mfc/reference/cdaorecordset-class.md#update), o [eliminare](../../mfc/reference/cdaorecordset-class.md#delete) funzioni membro, se si desidera modificare il valore di timeout di query. L'impostazione influisce su tutte le successive [aprire](../../mfc/reference/cdaorecordset-class.md#open), `AddNew`, **aggiornamento**, e **eliminare** chiamate a qualsiasi recordset associato a questo `CDaoDatabase` oggetto. Modificando il valore di timeout di query per un oggetto recordset dopo l'apertura non si modifica il valore per il recordset. Ad esempio, le successive [spostare](../../mfc/reference/cdaorecordset-class.md#move) operazioni non utilizzano il nuovo valore.  
  
 Il valore predefinito di timeout delle query è 60 secondi. Non tutti i database supportano la possibilità di impostare un valore di timeout di query. Se si imposta un valore di timeout query pari a 0, si verifica alcun timeout. la comunicazione con il database potrebbe non rispondere. Questo comportamento può essere utile durante lo sviluppo.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà QueryTimeout" nella Guida di DAO.  
  
## <a name="see-also"></a>Vedere anche  
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDaoWorkspace (classe)](../../mfc/reference/cdaoworkspace-class.md)   
 [CDaoRecordset (classe)](../../mfc/reference/cdaorecordset-class.md)   
 [Classe CDaoTableDef](../../mfc/reference/cdaotabledef-class.md)   
 [CDaoQueryDef (classe)](../../mfc/reference/cdaoquerydef-class.md)   
 [CDatabase (classe)](../../mfc/reference/cdatabase-class.md)   
 [Classe CDaoException](../../mfc/reference/cdaoexception-class.md)

