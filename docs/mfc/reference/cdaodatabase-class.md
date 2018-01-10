---
title: CDaoDatabase (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
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
dev_langs: C++
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
caps.latest.revision: "23"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 48646e0635098aceea957f93015a5de93515096d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
|[CDaoDatabase::CanUpdate](#canupdate)|Restituisce zero se la `CDaoDatabase` oggetto è aggiornabile (non solo lettura).|  
|[CDaoDatabase::Close](#close)|Chiude la connessione al database.|  
|[CDaoDatabase::Create](#create)|Oggetto di database DAO sottostante crea e inizializza il `CDaoDatabase` oggetto.|  
|[CDaoDatabase::CreateRelation](#createrelation)|Definisce una nuova relazione tra le tabelle nel database.|  
|[CDaoDatabase::DeleteQueryDef](#deletequerydef)|Elimina un oggetto querydef salvato nella raccolta QueryDefs del database.|  
|[CDaoDatabase::DeleteRelation](#deleterelation)|Elimina una relazione esistente tra le tabelle nel database.|  
|[CDaoDatabase::DeleteTableDef](#deletetabledef)|Elimina la definizione di una tabella nel database. Questo elimina la tabella effettiva e tutti i dati.|  
|[CDaoDatabase::Execute](#execute)|Esegue una query. La chiamata **Execute** per una query che restituisce risultati genera un'eccezione.|  
|[CDaoDatabase::GetConnect](#getconnect)|Restituisce la stringa di connessione utilizzata per la connessione di `CDaoDatabase` oggetto a un database. Utilizzato per ODBC.|  
|[CDaoDatabase::GetName](#getname)|Restituisce il nome del database attualmente in uso.|  
|[CDaoDatabase::GetQueryDefCount](#getquerydefcount)|Restituisce il numero di query definite per il database.|  
|[CDaoDatabase::GetQueryDefInfo](#getquerydefinfo)|Restituisce informazioni su una query specificata, definita nel database.|  
|[CDaoDatabase::GetQueryTimeout](#getquerytimeout)|Restituisce il numero di secondi dopo il database delle operazioni di query saranno. Interessa tutte le successive aprire, aggiungere nuovi, aggiornare e modificare le operazioni e le altre operazioni su origini dati ODBC (solo), ad esempio **Execute** chiamate.|  
|[CDaoDatabase::GetRecordsAffected](#getrecordsaffected)|Restituisce il numero di record interessato dall'ultimo aggiornamento, modifica o l'operazione di aggiunta o da una chiamata a **Execute**.|  
|[CDaoDatabase::GetRelationCount](#getrelationcount)|Restituisce il numero di relazioni definite tra le tabelle nel database.|  
|[CDaoDatabase::GetRelationInfo](#getrelationinfo)|Restituisce informazioni su un specificato relazione definita tra le tabelle nel database.|  
|[GetTableDefCount](#gettabledefcount)|Restituisce il numero di tabelle definite nel database.|  
|[CDaoDatabase:: GetTableDefInfo](#gettabledefinfo)|Restituisce informazioni su una tabella specificata nel database.|  
|[CDaoDatabase::GetVersion](#getversion)|Restituisce la versione del motore di database associato al database.|  
|[CDaoDatabase::IsOpen](#isopen)|Restituisce zero se la `CDaoDatabase` è attualmente collegato a un database.|  
|[CDaoDatabase::Open](#open)|Stabilisce una connessione a un database.|  
|[CDaoDatabase::SetQueryTimeout](#setquerytimeout)|Imposta il numero di secondi dopo il database a cui eseguire una query operazioni (in origini dati ODBC solo) scadrà. Interessa tutte le successive apre, aggiunta nuovi, aggiornarla e le operazioni di eliminazione.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoDatabase::m_pDAODatabase](#m_pdaodatabase)|Un puntatore all'oggetto di database DAO sottostante.|  
|[CDaoDatabase::m_pWorkspace](#m_pworkspace)|Un puntatore al [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) oggetto che contiene il database e definisce il relativo spazio di transazione.|  
  
## <a name="remarks"></a>Note  
 Per informazioni sui formati di database supportate, vedere il [GetName](../../mfc/reference/cdaoworkspace-class.md#getname) funzione membro. È possibile avere uno o più `CDaoDatabase` oggetti attivi in un momento determinato "area di lavoro di" rappresentato da un [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) oggetto. L'area di lavoro gestisce una raccolta di oggetti di database aperti, denominato raccolta di database.  
  
> [!NOTE]
>  Le classi di database DAO MFC sono distinte dalle classi di database MFC basate su ODBC. Tutti i nomi delle classi database DAO hanno il prefisso "CDao". Classe `CDaoDatabase` fornisce un'interfaccia analoga a quella della classe ODBC [CDatabase](../../mfc/reference/cdatabase-class.md). La differenza principale è che `CDatabase` accede DBMS tramite Open Database Connectivity (ODBC) e un driver ODBC per DBMS. `CDaoDatabase`accede ai dati tramite un oggetto DAO (Data Access) basato sul motore di database Microsoft Jet. In generale, le classi MFC basate su DAO sono più in grado di classi MFC basate su ODBC; le classi basate su DAO possono accedere a dati, ad esempio tramite il driver ODBC, tramite i propri motore di database. Le classi basate su DAO supportano anche le operazioni di Data Definition Language (DDL), ad esempio l'aggiunta di tabelle tramite le classi, senza dover chiamare direttamente DAO.  
  
## <a name="usage"></a>Utilizzo  
 È possibile creare oggetti di database in modo implicito, quando si creano oggetti recordset. Ma è anche possibile creare oggetti di database in modo esplicito. Per utilizzare un database esistente in modo esplicito con `CDaoDatabase`, effettuare una delle operazioni seguenti:  
  
-   Costruire un `CDaoDatabase` oggetto, passando un puntatore a un oggetto aperto [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) oggetto.  
  
-   O si crea un `CDaoDatabase` oggetto senza specificare l'area di lavoro (MFC crea un oggetto di area di lavoro temporanea).  
  
 Per creare un nuovo di Microsoft Jet (. Database MDB), costruire un `CDaoDatabase` oggetto e chiamare il relativo [crea](#create) funzione membro. Eseguire *non* chiamare **aprire** dopo **crea**.  
  
 Per aprire un database esistente, è possibile costruire un `CDaoDatabase` oggetto e chiamare il relativo [aprire](#open) funzione membro.  
  
 Una di queste tecniche aggiunge l'oggetto di database DAO alla raccolta di database dell'area di lavoro e si apre una connessione ai dati. Quando si creano quindi [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md), [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md), o [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) gli oggetti per l'uso del database connesso, passano i costruttori per questi oggetti una Puntatore al `CDaoDatabase` oggetto. Al termine dell'utilizzo della connessione, chiamare il [Chiudi](#close) membro funzione ed eliminare definitivamente il `CDaoDatabase` oggetto. **Chiudi** chiude tutti i recordset non sia stato precedentemente chiuso.  
  
## <a name="transactions"></a>Transazioni  
 L'elaborazione delle transazioni del database viene fornito a livello di area di lavoro, vedere il [BeginTrans](../../mfc/reference/cdaoworkspace-class.md#begintrans), [CommitTrans](../../mfc/reference/cdaoworkspace-class.md#committrans), e [Rollback](../../mfc/reference/cdaoworkspace-class.md#rollback) funzioni membro della classe `CDaoWorkspace` .  
  
## <a name="odbc-connections"></a>Connessioni ODBC  
 È consigliabile utilizzare le origini dati ODBC per collegare le tabelle esterne a un Microsoft Jet (. Database MDB).  
  
## <a name="collections"></a>Raccolte  
 Ogni database gestisce i proprio insiemi di tabledef, querydef, recordset e gli oggetti della relazione. Classe `CDaoDatabase` fornisce le funzioni membro per la modifica di questi oggetti.  
  
> [!NOTE]
>  Gli oggetti sono archiviati in DAO, non nell'oggetto di database MFC. MFC fornisce classi per oggetti tabledef, querydef e recordset, ma non per gli oggetti della relazione.  
  
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
 Diverso da zero se la `CDaoDatabase` oggetto consente aggiornamenti; in caso contrario, 0, che indica uno che sono stati passati **TRUE** in `bReadOnly` quando aperto il `CDaoDatabase` oggetto o che il database è di sola lettura. Vedere il [aprire](#open) funzione membro.  
  
### <a name="remarks"></a>Note  
 Per informazioni sull'aggiornamento di database, vedere l'argomento "Proprietà aggiornabile" nella Guida di DAO.  
  
##  <a name="cdaodatabase"></a>CDaoDatabase::CDaoDatabase  
 Costruisce un oggetto `CDaoDatabase`.  
  
```  
CDaoDatabase(CDaoWorkspace* pWorkspace = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *pWorkspace*  
 Un puntatore al `CDaoWorkspace` che conterrà il nuovo oggetto di database. Se si accetta il valore predefinito di **NULL**, il costruttore crea una password temporanea `CDaoWorkspace` oggetto che utilizza l'area di lavoro predefinita DAO. È possibile ottenere un puntatore all'oggetto dell'area di lavoro tramite il [m_pWorkspace](#m_pworkspace) (membro dati).  
  
### <a name="remarks"></a>Note  
 Dopo la costruzione dell'oggetto, se si sta creando un nuovo di Microsoft Jet (. MDB) del database, chiamare l'oggetto [crea](#create) funzione membro. Se, invece, sono l'apertura di un database esistente, chiamare l'oggetto [aprire](#open) funzione membro.  
  
 Quando finisce con l'oggetto, è necessario chiamare il relativo [Chiudi](#close) membro funzione e quindi eliminare il `CDaoDatabase` oggetto.  
  
 È possibile fare in modo da incorporare la `CDaoDatabase` oggetto nella classe del documento.  
  
> [!NOTE]
>  Oggetto `CDaoDatabase` oggetto viene anche creato in modo implicito se si apre un [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto senza passando un puntatore a un oggetto esistente `CDaoDatabase` oggetto. Questo oggetto di database viene chiuso quando si chiude l'oggetto recordset.  
  
##  <a name="close"></a>CDaoDatabase::Close  
 Chiamare questa funzione membro per disconnettersi da un database e chiudere qualsiasi recordset aperti tabledefs e querydefs associati al database.  
  
```  
virtual void Close();
```  
  
### <a name="remarks"></a>Note  
 È consigliabile chiudere questi oggetti manualmente prima di chiamare questa funzione membro. Chiusura di un `CDaoDatabase` oggetto rimuove dalla raccolta di database associato [dell'area di lavoro](../../mfc/reference/cdaoworkspace-class.md). Poiché **Chiudi** non elimina il `CDaoDatabase` dell'oggetto, è possibile riutilizzare l'oggetto aprendo lo stesso database o un database diverso.  
  
> [!CAUTION]
>  Chiamare il [aggiornamento](../../mfc/reference/cdaorecordset-class.md#update) funzione membro (se sono presenti modifiche in sospeso) e **chiudere** funzione membro su tutti gli oggetti recordset aperti prima di chiudere un database. Se si esce da una funzione che dichiara [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) o `CDaoDatabase` oggetti nello stack, il database viene chiuso, le modifiche non salvate vengono perse, viene eseguito il rollback di tutte le transazioni in sospeso e le modifiche in sospeso per i dati vengono perse.  
  
> [!CAUTION]
>  Se si tenta di chiudere un oggetto di database, mentre tutti gli oggetti recordset sono aperti o se si tenta di chiudere un oggetto dell'area di lavoro mentre sono aperti oggetti di database appartenenti all'area di lavoro specifica, tali oggetti recordset verranno chiuse e verranno modifiche o aggiornamenti in sospeso eseguire il rollback. Se si tenta di chiudere un oggetto dell'area di lavoro, mentre gli oggetti di database appartenenti a esso sono aperti, l'operazione chiude tutti gli oggetti di database che appartengono a tale oggetto specifico dell'area di lavoro, che potrebbe comportare negli oggetti recordset viene chiusi. Se non si chiude l'oggetto di database, un errore di asserzione nelle build di debug MFC.  
  
 L'oggetto di database è definito all'esterno dell'ambito di una funzione, se si esce dalla funzione senza chiuderlo, rimarrà aperta fino a quando non vengono chiusi esplicitamente l'oggetto di database o il modulo in cui è definito esula dall'ambito.  
  
##  <a name="create"></a>CDaoDatabase::Create  
 Per creare un nuovo di Microsoft Jet (. MDB) del database, chiamare questa funzione membro dopo aver creato un `CDaoDatabase` oggetto.  
  
```  
virtual void Create(
    LPCTSTR lpszName,  
    LPCTSTR lpszLocale = dbLangGeneral,  
    int dwOptions = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszName`  
 Un'espressione stringa che rappresenta il nome del file di database che si sta creando. Può essere il percorso completo e nome file, ad esempio "c:\\\MYDB. MDB". È necessario fornire un nome. Se non si specifica un'estensione di file. MDB viene aggiunto. Se la rete supporta la convenzione di denominazione uniforme (UNC), è possibile anche specificare un percorso di rete, ad esempio "\\\\\\\MYSERVER\\\MYSHARE\\\MYDIR\\\MYDB". Solo Microsoft Jet (. File di database MDB) possono essere creati tramite la funzione membro. (Barre rovesciate sono necessari nei valori letterali stringa perché "\\" è il carattere di escape di C++.)  
  
 `lpszLocale`  
 Un'espressione stringa utilizzata per specificare l'ordine di confronto per la creazione del database. Il valore predefinito è **dbLangGeneral**. I possibili valori sono:  
  
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
  
 `dwOptions`  
 Valore intero che indica una o più opzioni. I possibili valori sono:  
  
- **dbEncrypt** creare un database crittografato.  
  
- **dbVersion10** creare un database con database Microsoft Jet versione 1.0.  
  
- **dbVersion11** creare un database con database Microsoft Jet versione 1.1.  
  
- **dbVersion20** creare un database con database Microsoft Jet versione 2.0.  
  
- **dbVersion30** creare un database con database Microsoft Jet versione 3.0.  
  
 Se si omette la costante di crittografia, viene creato un database non crittografato. È possibile specificare solo una costante di versione. Se si omette una costante di versione, viene creato un database che utilizza il database Microsoft Jet versione 3.0.  
  
> [!CAUTION]
>  Se un database non è crittografato, è possibile, anche se si implementa protezione utente/password, per leggere direttamente il file del disco binario che costituisce il database.  
  
### <a name="remarks"></a>Note  
 **Creare** crea il file di database e l'oggetto di database DAO sottostante e inizializza l'oggetto C++. L'oggetto viene aggiunto alla raccolta di database dell'area di lavoro associati. L'oggetto di database è stato aperto; non chiamare **aprire** dopo **crea**.  
  
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
 Il nome univoco dell'oggetto relation. Il nome deve iniziare con una lettera e può contenere un massimo di 40 caratteri. Può includere numeri e caratteri di sottolineatura ma non può includere spazi o segni di punteggiatura.  
  
 `lpszTable`  
 Il nome della tabella primaria della relazione. Se la tabella non esiste, MFC genera un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md).  
  
 `lpszForeignTable`  
 Il nome della tabella esterna nella relazione. Se la tabella non esiste, MFC genera un'eccezione di tipo `CDaoException`.  
  
 `lAttributes`  
 Valore long che contiene informazioni sul tipo di relazione. Per applicare l'integrità referenziale, tra le altre cose, è possibile utilizzare questo valore. È possibile utilizzare l'operatore OR bit per bit ( **&#124;**) per combinare i valori seguenti (fino a quando la combinazione ha senso):  
  
- **dbRelationUnique** relazione è uno a uno.  
  
- **dbRelationDontEnforce** relazione non è (non l'integrità referenziale).  
  
- **dbRelationInherited** relazione esiste in un database non correnti che contiene le due tabelle collegate.  
  
- **dbRelationUpdateCascade** aggiornamenti deve essere propagata (per altre informazioni sulla catena, vedere la sezione Osservazioni).  
  
- **dbRelationDeleteCascade** verranno eseguite le operazioni di eliminazione a catena.  
  
 *lpszField*  
 Un puntatore a una stringa con terminazione null contenente il nome di un campo nella tabella primaria (denominato da `lpszTable`).  
  
 *lpszForeignField*  
 Un puntatore a una stringa con terminazione null contenente il nome di un campo nella tabella esterna (denominato da `lpszForeignTable`).  
  
 *relinfo*  
 Un riferimento a un [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) oggetto che contiene informazioni sulla relazione che si desidera creare.  
  
### <a name="remarks"></a>Note  
 La relazione non è possibile prevedere una query o una tabella collegata da un database esterno.  
  
 Utilizzare la prima versione della funzione quando la relazione include un campo in ognuna delle due tabelle. Utilizzare la seconda versione quando la relazione include più campi. Il numero massimo di campi in una relazione è 14.  
  
 Questa azione crea un oggetto di relazione DAO sottostante, ma questo è un dettaglio di implementazione MFC dall'incapsulamento in MFC di oggetti relazione è contenuta nella classe `CDaoDatabase`. MFC fornisce una classe per le relazioni.  
  
 Se si impostano la relazione attributi dell'oggetto per attivare operazioni di catena, il motore di database automaticamente aggiorna o Elimina i record in una o più tabelle quando vengono apportate modifiche alle tabelle correlate di chiave primarie.  
  
 Si supponga, ad esempio, che viene stabilita una relazione di delete cascade tra una tabella Customers e una tabella Orders. Quando si eliminano record dalla tabella Customers, vengono eliminati anche i record nella tabella ordini relativi a quel cliente. Inoltre, se si stabilisce una catena Elimina relazioni tra la tabella Orders e in altre tabelle, record di tali tabelle vengono eliminati automaticamente quando si eliminano record dalla tabella Customers.  
  
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
 Successivamente, tale query non è più definito nel database.  
  
 Per informazioni sulla creazione di oggetti querydef, vedere la classe [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md). Un oggetto querydef viene associato a un particolare `CDaoDatabase` oggetto quando si costruisce la `CDaoQueryDef` oggetto, passando un puntatore all'oggetto di database.  
  
##  <a name="deleterelation"></a>CDaoDatabase::DeleteRelation  
 Chiamare questa funzione membro per eliminare una relazione esistente dalla raccolta di relazioni dell'oggetto di database.  
  
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
 Chiamare questa funzione membro per eliminare la tabella specificata e tutti i dati dal `CDaoDatabase` raccolta TableDefs dell'oggetto.  
  
```  
void DeleteTableDef(LPCTSTR lpszName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszName`  
 Il nome dell'oggetto tabledef da eliminare.  
  
### <a name="remarks"></a>Note  
 Successivamente, tale tabella non è definita nel database.  
  
> [!NOTE]
>  Prestare molta attenzione a non eliminare le tabelle di sistema.  
  
 Per informazioni sulla creazione di oggetti tabledef, vedere la classe [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md). Un oggetto tabledef viene associato a un particolare `CDaoDatabase` oggetto quando si costruisce la `CDaoTableDef` oggetto, passando un puntatore all'oggetto di database.  
  
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
 Puntatore a una stringa con terminazione null che contiene un comando SQL valido per l'esecuzione.  
  
 `nOptions`  
 Valore intero che specifica le opzioni relative all'integrità della query. È possibile utilizzare l'operatore OR bit per bit ( **&#124;**) per combinare le costanti seguenti (fornito ha senso la combinazione, ad esempio, non è necessario combinare **dbInconsistent** con **dbConsistent**):  
  
- **dbDenyWrite** Nega l'autorizzazione di scrittura ad altri utenti.  
  
- **dbInconsistent** aggiornamenti incoerenti (impostazione predefinita).  
  
- **dbConsistent** aggiornamenti consistenti.  
  
- **dbSQLPassThrough** pass-through SQL. L'istruzione SQL deve essere passato a un'origine dati ODBC per l'elaborazione.  
  
- **dbFailOnError** rollback degli aggiornamenti se si verifica un errore.  
  
- **dbSeeChanges** genera un errore di run-time, se un altro utente modifica i dati che si sta modificando.  
  
> [!NOTE]
>  Se entrambi **dbInconsistent** e **dbConsistent** sono inclusi o se non è inclusa, il risultato è il valore predefinito. Per una spiegazione di queste costanti, vedere l'argomento "Esegui metodo" nella Guida di DAO.  
  
### <a name="remarks"></a>Note  
 **Eseguire** funziona solo per le query di azione o le query pass-through SQL che non restituiscono risultati. Non funziona per le query select che restituiscono i record.  
  
 Per una definizione e informazioni sulle query, vedere gli argomenti "Azione Query" e "Esegui metodo" nella Guida di DAO.  
  
> [!TIP]
>  Ha un'istruzione SQL sintatticamente corretta e delle autorizzazioni appropriate, il **Execute** funzione membro non avrà esito negativo anche se non è una singola riga può essere modificata o eliminata. Pertanto, utilizzare sempre il **dbFailOnError** opzione quando si utilizza il **Execute** funzione membro per eseguire un aggiornamento o eliminazione di query. Questa opzione consente di generare un'eccezione di tipo MFC [CDaoException](../../mfc/reference/cdaoexception-class.md) e il rollback di tutte le modifiche ha esito positivo se uno qualsiasi dei record interessati vengono bloccato e non può essere aggiornato o eliminato. Si noti che è sempre possibile chiamare `GetRecordsAffected` per visualizzare il numero di record interessato.  
  
 Chiamare il [GetRecordsAffected](#getrecordsaffected) funzione membro dell'oggetto di database per determinare il numero di record interessati dall'ultima **Execute** chiamare. Ad esempio, `GetRecordsAffected` restituisce informazioni sul numero di record eliminati, aggiornati o inseriti durante l'esecuzione di una query. Il conteggio restituito non riflette le modifiche nelle tabelle correlate quando cascade aggiorna o Elimina sono attive.  
  
 **Eseguire** non restituisce un oggetto recordset. Utilizzando **Execute** in una query che seleziona i record causa MFC generare un'eccezione di tipo `CDaoException`. (È presente alcun `ExecuteSQL` analoga alla funzione di membro `CDatabase::ExecuteSQL`.)  
  
##  <a name="getconnect"></a>CDaoDatabase::GetConnect  
 Chiamare questa funzione membro per recuperare la stringa di connessione utilizzata per la connessione di `CDaoDatabase` oggetto a un database ODBC o ISAM.  
  
```  
CString GetConnect();
```  
  
### <a name="return-value"></a>Valore restituito  
 La stringa di connessione se [aprire](#open) è stato chiamato in un'origine dati ODBC; in caso contrario, una stringa vuota. Per un Microsoft Jet (. Database MDB), la stringa è sempre vuota a meno che non impostate per l'utilizzo con il **dbSQLPassThrough** opzione utilizzata con la [Execute](#execute) funzione membro o utilizzato durante l'apertura di un recordset.  
  
### <a name="remarks"></a>Note  
 La stringa fornisce informazioni sull'origine di un database utilizzato in una query pass-through o di un database aperto. La stringa di connessione è costituita da un identificatore di tipo di database e zero o più parametri separati da punti e virgola.  
  
> [!NOTE]
>  Utilizzo delle classi DAO MFC per connettersi a un'origine dati tramite ODBC è meno efficace rispetto alla connessione tramite una tabella collegata.  
  
> [!NOTE]
>  La stringa di connessione viene utilizzata per passare informazioni aggiuntive a ODBC e ad alcuni driver ISAM in base alle esigenze. Non è usato per. Database MDB. Per tabelle di base del database Microsoft Jet, la stringa di connessione è una stringa vuota (""), ad eccezione di quando si utilizza, per una query pass-through SQL come descritto in restituire valore.  
  
 Vedere il [aprire](#open) funzione membro per una descrizione delle modalità di creazione della stringa di connessione. Dopo aver impostata la stringa di connessione **aprire** chiamata, è possibile in un secondo momento usarlo per controllare l'impostazione per determinare il tipo, percorso, l'origine di dati ODBC, la Password o ID utente del database.  
  
##  <a name="getname"></a>CDaoDatabase::GetName  
 Chiamare questa funzione membro per recuperare il nome del database attualmente aperto, ovvero il nome di un file di database esistente o il nome dell'origine dati ODBC registrata.  
  
```  
CString GetName();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il percorso completo e nome file del database, se ha esito positivo. in caso contrario, un oggetto vuoto [CString](../../atl-mfc-shared/reference/cstringt-class.md).  
  
### <a name="remarks"></a>Note  
 Se la rete supporta la convenzione di denominazione uniforme (UNC), è anche possibile specificare un percorso di rete, ad esempio, "\\\\\\\MYSERVER\\\MYSHARE\\\MYDIR\\\MYDB. MDB". (Barre rovesciate sono necessari nei valori letterali stringa perché "\\" è il carattere di escape di C++.)  
  
 Potrebbe, ad esempio, da visualizzare il nome in un'intestazione. Se si verifica un errore durante il recupero il nome, MFC genera un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md).  
  
> [!NOTE]
>  Per ottenere prestazioni migliori quando accedono ai database esterni, è consigliabile collegare le tabelle di database esterno a un database Microsoft Jet (. MDB) invece di connettersi direttamente all'origine dati.  
  
 Il tipo di database è indicato da file o della directory che il percorso punta a, come segue:  
  
|Nome del percorso punta a...|Tipo di database|  
|--------------------------|-------------------|  
|. File MDB|Database Microsoft Jet (Microsoft Access)|  
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
 `GetQueryDefCount`è utile se è necessario scorrere tutti querydefs nella raccolta QueryDefs. Per ottenere informazioni su una query nella raccolta, vedere [funzione membro GetQueryDefInfo](#getquerydefinfo).  
  
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
 Opzioni che specificano quali informazioni sul recordset da recuperare. Vengono elencate le opzioni disponibili con la funzione restituisca sul recordset provocano:  
  
- `AFX_DAO_PRIMARY_INFO`(Impostazione predefinita) Nome, tipo  
  
- `AFX_DAO_SECONDARY_INFO`Le informazioni primarie più: Data creazione, data dell'ultimo aggiornamento, restituisce i record, aggiornabile  
  
- `AFX_DAO_ALL_INFO`Più informazioni primarie e secondarie: ODBCTimeout SQL, Connect,  
  
 `lpszName`  
 Stringa contenente il nome di una query definita nel database, per la ricerca in base al nome.  
  
### <a name="remarks"></a>Note  
 È possibile scegliere una query in base all'indice nella raccolta QueryDefs del database o dal nome della query, vengono fornite due versioni della funzione.  
  
 Per una descrizione delle informazioni restituite *querydefinfo*, vedere il [CDaoQueryDefInfo](../../mfc/reference/cdaoquerydefinfo-structure.md) struttura. Questa struttura dispone di membri che corrispondono agli elementi elencati in precedenza nella sezione Descrizione del `dwInfoOptions`. Se si richiede un livello di informazioni, si ottengono tutti i livelli precedenti oltre a informazioni.  
  
##  <a name="getquerytimeout"></a>CDaoDatabase::GetQueryTimeout  
 Chiamare questa funzione membro per recuperare il numero corrente di secondi di attesa prima che le successive operazioni sul database connesso si verifica il timeout.  
  
```  
short GetQueryTimeout();
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore short integer contenente il valore di timeout in secondi.  
  
### <a name="remarks"></a>Note  
 Un'operazione potrebbe essere previsto un timeout a causa di problemi di accesso di rete, il tempo di elaborazione di un numero eccessivo di query e così via. Durante l'impostazione è attiva, influisce su tutte, aggiungere nuovi, aggiornare e operazioni delete in tutti i recordset associati a questo `CDaoDatabase` oggetto. È possibile modificare l'impostazione di timeout corrente chiamando [SetQueryTimeout](#setquerytimeout). Il valore di timeout di query per un oggetto recordset dopo l'apertura non modifica il valore per il recordset. Ad esempio, le successive [spostare](../../mfc/reference/cdaorecordset-class.md#move) operazioni non utilizzano il nuovo valore. Il valore predefinito è inizialmente quando viene inizializzato il motore di database.  
  
 Il valore predefinito di timeout delle query viene eseguito dal Registro di sistema Windows. Se è presente alcuna impostazione del Registro di sistema, il valore predefinito è 60 secondi. Non tutti i database supportano la possibilità di impostare un valore di timeout della query. Se si imposta un valore di timeout query pari a 0, si verifica alcun timeout. e la comunicazione con il database potrebbe non rispondere. Questo comportamento può essere utile durante lo sviluppo. Se la chiamata non riesce, MFC genera un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md).  
  
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
 Chiamare questa funzione membro per ottenere il numero di relazioni definite tra le tabelle nel database.  
  
```  
short GetRelationCount();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di relazioni definite tra le tabelle del database.  
  
### <a name="remarks"></a>Note  
 **GetRelationCount** è utile se è necessario eseguire un ciclo in tutte le relazioni definite nella raccolta di relazioni del database. Per ottenere informazioni su una determinata relazione nella raccolta, vedere [GetRelationInfo](#getrelationinfo).  
  
 Per illustrare il concetto di una relazione, si consideri una tabella di fornitori e una tabella dei prodotti, che potrebbe avere una relazione uno-a-molti. In questa relazione, un fornitore può fornire più di un prodotto. Altre relazioni sono uno a uno e molti-a-molti.  
  
##  <a name="getrelationinfo"></a>CDaoDatabase::GetRelationInfo  
 Chiamare questa funzione membro per ottenere informazioni su una relazione nella raccolta di relazioni del database specificata.  
  
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
 Indice dell'oggetto relation nella raccolta di relazioni del database, per la ricerca in base all'indice.  
  
 *relinfo*  
 Un riferimento a un [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) oggetto che restituisce le informazioni richieste.  
  
 `dwInfoOptions`  
 Opzioni che specificano le informazioni sulla relazione da recuperare. Vengono elencate le opzioni disponibili con la funzione restituisca sulla relazione provocano:  
  
- `AFX_DAO_PRIMARY_INFO`(Impostazione predefinita) Nome tabella, nella tabella esterna  
  
- `AFX_DAO_SECONDARY_INFO`Attributi, informazioni sui campi  
  
 Le informazioni del campo è un [CDaoRelationFieldInfo](../../mfc/reference/cdaorelationfieldinfo-structure.md) oggetto contenente i campi della tabella primaria coinvolto nella relazione.  
  
 `lpszName`  
 Stringa contenente il nome dell'oggetto relazione per la ricerca in base al nome.  
  
### <a name="remarks"></a>Note  
 Due versioni di questa funzione forniscono l'accesso in base all'indice o al nome. Per una descrizione delle informazioni restituite *relinfo*, vedere il [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) struttura. Questa struttura dispone di membri che corrispondono agli elementi elencati in precedenza nella sezione Descrizione del `dwInfoOptions`. Se si richiedono informazioni su un unico livello, è inoltre ottenere informazioni in tutti i livelli precedenti oltre.  
  
> [!NOTE]
>  Se si imposta la relazione con gli attributi dell'oggetto per attivare operazioni cascade ( **dbRelationUpdateCascades** o **dbRelationDeleteCascades**), il motore di database Microsoft Jet Aggiorna automaticamente o Elimina i record in una o più tabelle quando vengono apportate modifiche alle tabelle correlate di chiave primarie. Si supponga, ad esempio, che viene stabilita una relazione di delete cascade tra una tabella Customers e una tabella Orders. Quando si eliminano record dalla tabella Customers, vengono eliminati anche i record nella tabella ordini relativi a quel cliente. Inoltre, se si stabilisce una catena Elimina relazioni tra la tabella Orders e in altre tabelle, record di tali tabelle vengono eliminati automaticamente quando si eliminano record dalla tabella Customers.  
  
##  <a name="gettabledefcount"></a>GetTableDefCount  
 Chiamare questa funzione membro per recuperare il numero di tabelle definite nel database.  
  
```  
short GetTableDefCount();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di tabledefs definiti nel database.  
  
### <a name="remarks"></a>Note  
 `GetTableDefCount`è utile se è necessario scorrere tutti tabledefs nella raccolta TableDefs del database. Per ottenere informazioni su una tabella specificata nella raccolta, vedere [GetTableDefInfo](#gettabledefinfo).  
  
##  <a name="gettabledefinfo"></a>CDaoDatabase:: GetTableDefInfo  
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
 `nIndex`  
 Indice dell'oggetto tabledef nella raccolta TableDefs del database, per la ricerca in base all'indice.  
  
 `tabledefinfo`  
 Un riferimento a un [CDaoTableDefInfo](../../mfc/reference/cdaotabledefinfo-structure.md) oggetto che restituisce le informazioni richieste.  
  
 `dwInfoOptions`  
 Opzioni che specificano le informazioni sulla tabella da recuperare. Vengono elencate le opzioni disponibili con la funzione restituisca sulla relazione provocano:  
  
- `AFX_DAO_PRIMARY_INFO`(Impostazione predefinita) Nome, aggiornabili, gli attributi  
  
- `AFX_DAO_SECONDARY_INFO`Le informazioni primarie più: data di creazione, data dell'ultimo aggiornamento, il nome di tabella di origine, connessione  
  
- `AFX_DAO_ALL_INFO`Più informazioni primarie e secondarie: regola di convalida, il testo di convalida, numero di Record  
  
 `lpszName`  
 Il nome dell'oggetto tabledef, per la ricerca in base al nome.  
  
### <a name="remarks"></a>Note  
 Per poter selezionare una tabella in base all'indice nella raccolta TableDefs del database o dal nome della tabella, vengono fornite due versioni della funzione.  
  
 Per una descrizione delle informazioni restituite `tabledefinfo`, vedere il [CDaoTableDefInfo](../../mfc/reference/cdaotabledefinfo-structure.md) struttura. Questa struttura dispone di membri che corrispondono agli elementi elencati in precedenza nella sezione Descrizione del `dwInfoOptions`. Se si richiedono informazioni su un unico livello, si ottiene le informazioni dei livelli precedenti oltre.  
  
> [!NOTE]
>  Il `AFX_DAO_ALL_INFO` opzione fornisce informazioni che possono essere lente da ottenere. In questo caso, potrebbe essere molto tempo se sono presenti molti record Conteggio record nella tabella.  
  
##  <a name="getversion"></a>CDaoDatabase::GetVersion  
 Chiamare questa funzione membro per determinare la versione del file di database Microsoft Jet.  
  
```  
CString GetVersion();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che indica la versione del file di database associato all'oggetto.  
  
### <a name="remarks"></a>Note  
 Il valore restituito rappresenta il numero di versione nel formato "principale e secondaria"; ad esempio, "3.0". Il numero di versione del prodotto (ad esempio, 3.0) include il numero di versione (3), un periodo e il numero di versione (0). Le versioni data sono 1.0, 1.1, 2.0 e 3.0.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà Version" nella Guida di DAO.  
  
##  <a name="isopen"></a>CDaoDatabase::IsOpen  
 Chiamare questa funzione membro per determinare se il `CDaoDatabase` oggetto è attualmente aperto in un database.  
  
```  
BOOL IsOpen() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la `CDaoDatabase` oggetto è attualmente aperta; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
  
##  <a name="m_pdaodatabase"></a>CDaoDatabase::m_pDAODatabase  
 Contiene un puntatore all'interfaccia OLE per oggetti di database DAO sottostante il `CDaoDatabase` oggetto.  
  
### <a name="remarks"></a>Note  
 Utilizzare l'indicatore di misura se è necessario accedere direttamente all'interfaccia DAO.  
  
 Per informazioni sulla chiamata di DAO direttamente, vedere [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).  
  
##  <a name="m_pworkspace"></a>CDaoDatabase::m_pWorkspace  
 Contiene un puntatore al [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) oggetto che contiene l'oggetto di database.  
  
### <a name="remarks"></a>Note  
 Utilizzare l'indicatore di misura se è necessario accedere direttamente l'area di lavoro, ad esempio, per ottenere i puntatori a oggetti di database nella raccolta di database dell'area di lavoro.  
  
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
  
 Alcune considerazioni si applicano quando si utilizza `lpszName`. Se è:  
  
-   Fa riferimento a un database che è già aperto in modo esclusivo da un altro utente, MFC genera un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md). Intercettare l'eccezione per informare l'utente che il database è disponibile.  
  
-   È una stringa vuota ("") e *lpszConnect* è "ODBC;", viene visualizzata una finestra di dialogo elenco registrati tutti i nomi delle origini dati che è possibile selezionare un database. È consigliabile evitare di connessioni dirette a origini dati ODBC. In alternativa, usare una tabella collegata.  
  
-   In caso contrario non fa riferimento a un database esistente o valido DSN ODBC, MFC genera un'eccezione di tipo `CDaoException`.  
  
> [!NOTE]
>  Per ulteriori informazioni sui codici di errore DAO, vedere il DAOERR. File H. Per informazioni correlate, vedere l'argomento "Dati accesso errori intercettabili" nella Guida di DAO.  
  
 `bExclusive`  
 Un valore booleano che è **TRUE** se il database è necessario aprire in modo esclusivo (condiviso) e **FALSE** se il database da aprire per l'accesso condiviso. Se si omette questo argomento, il database è aperto per l'accesso condiviso.  
  
 `bReadOnly`  
 Un valore booleano che è **TRUE** se il database è necessario aprire per l'accesso in sola lettura e **FALSE** se il database da aprire per l'accesso in lettura/scrittura. Se si omette questo argomento, il database è aperto per l'accesso in lettura/scrittura. Tutti i dipendenti recordset ereditano l'attributo.  
  
 `lpszConnect`  
 Un'espressione stringa utilizzata per l'apertura del database. Questa stringa costituisce ODBC connettersi argomenti. È necessario fornire gli argomenti esclusivi e di sola lettura per fornire una stringa di origine. Se il database è un database Microsoft Jet (. MDB), questa stringa è vuota (""). La sintassi per il valore predefinito, ovvero **t**(""), fornisce la portabilità per Unicode, nonché ANSI build dell'applicazione.  
  
### <a name="remarks"></a>Note  
 **Aprire** associa il database con l'oggetto DAO sottostante. È possibile utilizzare l'oggetto di database per costruire l'oggetto recordset, tabledef o querydef oggetti fino a quando non viene inizializzato. **Aprire** aggiunge l'oggetto di database alla raccolta di database dell'area di lavoro associati.  
  
 Utilizzare i parametri come segue:  
  
-   Se si sta aprendo un Microsoft Jet (. Database MDB), utilizzare il `lpszName` parametro e passare una stringa vuota per il `lpszConnect` parametro o passare una stringa di password nel formato "; PWD = password "se il database è protetto da password (. MDB solo database).  
  
-   Se si apre un'origine dati ODBC, passare una stringa di connessione ODBC valida in `lpszConnect` e una stringa vuota in `lpszName`.  
  
 Per informazioni correlate, vedere l'argomento "Metodo OpenDatabase" nella Guida di DAO.  
  
> [!NOTE]
>  Per ottenere prestazioni migliori quando si accede a database esterni, inclusi i database ISAM e origini dati ODBC, è consigliabile collegare le tabelle di database esterno a un database di gestione di Microsoft Jet (. MDB) invece di connettersi direttamente all'origine dati.  
  
 È possibile che un tentativo di connessione di timeout se, ad esempio, non è disponibile l'host DBMS. Se il tentativo di connessione non riesce, **aprire** genera un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md).  
  
 Le rimanenti note si applicano solo a database ODBC:  
  
 Se il database è un database ODBC e i parametri del **aprire** chiamata non contengono informazioni sufficienti per stabilire la connessione, il driver ODBC verrà visualizzata una finestra di dialogo per ottenere le informazioni necessarie da parte dell'utente. Quando si chiama **aprire**, la stringa di connessione, `lpszConnect`, viene archiviato in locale ed è disponibile tramite la chiamata di [GetConnect](#getconnect) funzione membro.  
  
 Se si desidera, è possibile aprire la propria finestra di dialogo prima di chiamare **aprire** per ottenere informazioni da parte dell'utente, ad esempio una password, quindi aggiungere tali informazioni alla stringa di connessione si passa a **aprire**. Oppure è possibile salvare la stringa di connessione passare (ad esempio nel Registro di sistema Windows), pertanto è possibile riutilizzare la successiva ora l'applicazione chiama **aprire** su un `CDaoDatabase` oggetto.  
  
 È inoltre possibile utilizzare la stringa di connessione per più livelli di autorizzazione di accesso (per un altro `CDaoDatabase` oggetto) o per fornire altre informazioni specifiche del database.  
  
##  <a name="setquerytimeout"></a>CDaoDatabase::SetQueryTimeout  
 Chiamare questa funzione membro per sostituire il numero predefinito di secondi di attesa prima le operazioni successive il timeout del database connesso.  
  
```  
void SetQueryTimeout(short nSeconds);
```  
  
### <a name="parameters"></a>Parametri  
 `nSeconds`  
 Il numero di secondi di attesa prima di un tentativo di query timeout.  
  
### <a name="remarks"></a>Note  
 Un'operazione potrebbe essere previsto un timeout a causa di problemi di accesso di rete, il tempo di elaborazione di un numero eccessivo di query e così via. Chiamare `SetQueryTimeout` prima dell'apertura del recordset oppure prima di chiamare il recordset [AddNew](../../mfc/reference/cdaorecordset-class.md#addnew), [aggiornamento](../../mfc/reference/cdaorecordset-class.md#update), o [eliminare](../../mfc/reference/cdaorecordset-class.md#delete) se si desidera modificare la query, le funzioni membro valore di timeout. L'impostazione influisce su tutte le successive [aprire](../../mfc/reference/cdaorecordset-class.md#open), `AddNew`, **aggiornamento**, e **eliminare** chiamate a tutti i recordset associati a questo `CDaoDatabase` oggetto. Il valore di timeout di query per un oggetto recordset dopo l'apertura non modifica il valore per il recordset. Ad esempio, le successive [spostare](../../mfc/reference/cdaorecordset-class.md#move) operazioni non utilizzano il nuovo valore.  
  
 Il valore predefinito di timeout delle query è 60 secondi. Non tutti i database supportano la possibilità di impostare un valore di timeout della query. Se si imposta un valore di timeout query pari a 0, si verifica alcun timeout. la comunicazione con il database potrebbe non rispondere. Questo comportamento può essere utile durante lo sviluppo.  
  
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
