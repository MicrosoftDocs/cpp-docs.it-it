---
title: CDaoDatabase (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 30e6ac1f1ed780415e7f0a10d82175c2b287fb29
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36953896"
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
|[CDaoDatabase::CanTransact](#cantransact)|Restituisce diverso da zero se il database supporta le transazioni.|  
|[CDaoDatabase::CanUpdate](#canupdate)|Restituisce diverso da zero se la `CDaoDatabase` oggetto è aggiornabile (non sola lettura).|  
|[CDaoDatabase::Close](#close)|Chiude la connessione al database.|  
|[CDaoDatabase::Create](#create)|Oggetto di database DAO sottostante crea e inizializza il `CDaoDatabase` oggetto.|  
|[CDaoDatabase::CreateRelation](#createrelation)|Definisce una nuova relazione tra le tabelle nel database.|  
|[CDaoDatabase::DeleteQueryDef](#deletequerydef)|Elimina un oggetto querydef salvato nella raccolta QueryDefs del database.|  
|[CDaoDatabase::DeleteRelation](#deleterelation)|Elimina una relazione esistente tra le tabelle nel database.|  
|[CDaoDatabase::DeleteTableDef](#deletetabledef)|Elimina la definizione di una tabella nel database. Questo elimina la tabella effettiva e tutti i relativi dati.|  
|[CDaoDatabase::Execute](#execute)|Esegue una query. La chiamata `Execute` per una query che restituisce risultati genera un'eccezione.|  
|[CDaoDatabase::GetConnect](#getconnect)|Restituisce la stringa di connessione utilizzata per la connessione di `CDaoDatabase` oggetto a un database. Utilizzato per ODBC.|  
|[CDaoDatabase::GetName](#getname)|Restituisce il nome del database attualmente in uso.|  
|[CDaoDatabase::GetQueryDefCount](#getquerydefcount)|Restituisce il numero di query definite per il database.|  
|[CDaoDatabase::GetQueryDefInfo](#getquerydefinfo)|Restituisce informazioni relative a una query specificata definita nel database.|  
|[CDaoDatabase::GetQueryTimeout](#getquerytimeout)|Restituisce il numero di secondi dopo il quale database per operazioni di query si verifica il timeout. Interessa tutte le successive aprire, aggiungere nuovi, aggiornare e modificare le operazioni e altre operazioni sulle origini dati ODBC (solo), ad esempio `Execute` chiamate.|  
|[CDaoDatabase::GetRecordsAffected](#getrecordsaffected)|Restituisce il numero di record interessato dall'ultimo aggiornamento, modifica o l'operazione di aggiunta o da una chiamata a `Execute`.|  
|[CDaoDatabase::GetRelationCount](#getrelationcount)|Restituisce il numero di relazioni definite tra le tabelle nel database.|  
|[CDaoDatabase::GetRelationInfo](#getrelationinfo)|Restituisce informazioni su una specificato relazione definita tra le tabelle nel database.|  
|[CDaoDatabase:](#gettabledefcount)|Restituisce il numero di tabelle definite nel database.|  
|[CDaoDatabase:: GetTableDefInfo](#gettabledefinfo)|Restituisce informazioni su una tabella specificata nel database.|  
|[CDaoDatabase::GetVersion](#getversion)|Restituisce la versione del motore di database associato al database.|  
|[CDaoDatabase::IsOpen](#isopen)|Restituisce diverso da zero se la `CDaoDatabase` oggetto è attualmente collegato a un database.|  
|[CDaoDatabase::Open](#open)|Stabilisce una connessione a un database.|  
|[CDaoDatabase::SetQueryTimeout](#setquerytimeout)|Imposta il numero di secondi dopo il quale database operazioni (in origini dati ODBC solo) di query si verifica il timeout. Interessa tutte le successive apre, aggiunta nuovi, aggiornarla e le operazioni di eliminazione.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoDatabase::m_pDAODatabase](#m_pdaodatabase)|Un puntatore all'oggetto di database DAO sottostante.|  
|[CDaoDatabase::m_pWorkspace](#m_pworkspace)|Un puntatore per il [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) oggetto che contiene il database e definisce il relativo spazio di transazione.|  
  
## <a name="remarks"></a>Note  
 Per informazioni sui formati di database supportate, vedere la [GetName](../../mfc/reference/cdaoworkspace-class.md#getname) funzione membro. È possibile avere uno o più `CDaoDatabase` oggetti attivi in un momento determinato "area di lavoro di" rappresentato da un [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) oggetto. L'area di lavoro gestisce una raccolta di oggetti di database aperti, denominato database (raccolta).  
  
> [!NOTE]
>  Le classi database DAO MFC sono distinte da classi di database MFC basate su ODBC. Tutti i nomi delle classi database DAO hanno il prefisso "CDao". Classe `CDaoDatabase` fornisce un'interfaccia analoga a quella della classe ODBC [CDatabase](../../mfc/reference/cdatabase-class.md). La differenza principale è che `CDatabase` accede DBMS tramite Open Database Connectivity (ODBC) e un driver ODBC per DBMS. `CDaoDatabase` accede ai dati tramite un oggetto DAO (Data Access) basato sul motore di database Microsoft Jet. In generale, le classi MFC basate su DAO sono più in grado di supportare più classi MFC basate su ODBC; le classi basate su DAO possono accedere ai dati, ad esempio tramite driver ODBC, tramite i propri motore di database. Le classi basate su DAO supportano anche le operazioni di Data Definition Language (DDL), ad esempio l'aggiunta di tabelle tramite le classi, senza dover chiamare direttamente DAO.  
  
## <a name="usage"></a>Utilizzo  
 È possibile creare oggetti di database in modo implicito, quando si creano oggetti recordset. Ma è anche possibile creare oggetti di database in modo esplicito. Per utilizzare un database esistente in modo esplicito con `CDaoDatabase`, effettuare una delle operazioni seguenti:  
  
-   Costruire un `CDaoDatabase` oggetto, passando un puntatore a un oggetto aperto [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) oggetto.  
  
-   O si crea un `CDaoDatabase` oggetto senza specificare l'area di lavoro (MFC crea un oggetto temporaneo dell'area di lavoro).  
  
 Per creare un nuovo di Microsoft Jet (. Database MDB), costruire un `CDaoDatabase` oggetti e chiamare il relativo [crea](#create) funzione membro. Effettuare *non* chiamare `Open` dopo `Create`.  
  
 Per aprire un database esistente, creare una `CDaoDatabase` oggetti e chiamare il relativo [aprire](#open) funzione membro.  
  
 Una di queste tecniche aggiunge l'oggetto di database DAO alla raccolta di database dell'area di lavoro e si apre una connessione ai dati. Quando si creano quindi [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md), [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md), o [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) gli oggetti per l'uso di database connesso, passano i costruttori per questi oggetti una Puntatore al `CDaoDatabase` oggetto. Al termine dell'utilizzo della connessione, chiamare il [Close](#close) membro funzione ed eliminare definitivamente il `CDaoDatabase` oggetto. `Close` Chiude tutti i recordset che non sia stato precedentemente chiuso.  
  
## <a name="transactions"></a>Transazioni  
 L'elaborazione delle transazioni del database viene fornito a livello di area di lavoro, vedere la [BeginTrans](../../mfc/reference/cdaoworkspace-class.md#begintrans), [CommitTrans](../../mfc/reference/cdaoworkspace-class.md#committrans), e [Rollback](../../mfc/reference/cdaoworkspace-class.md#rollback) funzioni membro della classe `CDaoWorkspace` .  
  
## <a name="odbc-connections"></a>Connessioni ODBC  
 Il metodo consigliato per lavorare con origini dati ODBC è collegare le tabelle esterne a un Microsoft Jet (. Database MDB).  
  
## <a name="collections"></a>Raccolte  
 Ogni database mantiene il proprio raccolte di tabledef, querydef, recordset e gli oggetti della relazione. Classe `CDaoDatabase` fornisce le funzioni membro per la modifica di questi oggetti.  
  
> [!NOTE]
>  Gli oggetti vengono archiviati in DAO, non nell'oggetto di database MFC. MFC fornisce classi per oggetti tabledef, querydef e recordset, ma non per gli oggetti della relazione.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CDaoDatabase`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
##  <a name="cantransact"></a>  CDaoDatabase::CanTransact  
 Chiamare questa funzione membro per determinare se il database consente alle transazioni.  
  
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
 Diverso da zero se la `CDaoDatabase` oggetto consente aggiornamenti; in caso contrario, 0, che indica uno che sono stati passati **TRUE** in *bReadOnly* quando aperto il `CDaoDatabase` oggetto o che il database stesso è sola lettura. Vedere la [Open](#open) funzione membro.  
  
### <a name="remarks"></a>Note  
 Per informazioni sull'aggiornamento di database, vedere l'argomento "Proprietà aggiornabile" nella Guida di DAO.  
  
##  <a name="cdaodatabase"></a>  CDaoDatabase::CDaoDatabase  
 Costruisce un oggetto `CDaoDatabase`.  
  
```  
CDaoDatabase(CDaoWorkspace* pWorkspace = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *pWorkspace*  
 Un puntatore al `CDaoWorkspace` oggetto che conterrà il nuovo oggetto di database. Se si accetta il valore predefinito di **NULL**, il costruttore crea una password temporanea `CDaoWorkspace` oggetto che utilizza l'area di lavoro predefinita DAO. È possibile ottenere un puntatore all'oggetto dell'area di lavoro tramite il [m_pWorkspace](#m_pworkspace) (membro dati).  
  
### <a name="remarks"></a>Note  
 Dopo la costruzione dell'oggetto, se si sta creando un nuovo di Microsoft Jet (. MDB) del database, chiamare l'oggetto [crea](#create) funzione membro. Se si è, invece, apertura di un database esistente, chiamare l'oggetto [Open](#open) funzione membro.  
  
 Quando finisce con l'oggetto, è necessario chiamare il relativo [Chiudi](#close) membro funzione e quindi eliminare il `CDaoDatabase` oggetto.  
  
 È possibile fare in modo da incorporare la `CDaoDatabase` oggetto nella classe del documento.  
  
> [!NOTE]
>  Un `CDaoDatabase` oggetto viene anche creato in modo implicito se si apre un [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto senza passando un puntatore a un oggetto esistente `CDaoDatabase` oggetto. Questo oggetto di database viene chiuso quando si chiude l'oggetto recordset.  
  
##  <a name="close"></a>  CDaoDatabase::Close  
 Chiamare questa funzione membro per disconnettersi da un database e si chiude qualsiasi recordset aperti, tabledefs e querydefs associati al database.  
  
```  
virtual void Close();
```  
  
### <a name="remarks"></a>Note  
 È consigliabile chiudere questi oggetti manualmente prima di chiamare questa funzione membro. Chiusura di un `CDaoDatabase` oggetto rimuove dalla raccolta di database associato [area di lavoro](../../mfc/reference/cdaoworkspace-class.md). Poiché `Close` non elimina definitivamente il `CDaoDatabase` dell'oggetto, è possibile riutilizzare l'oggetto aprendo lo stesso database o un database diverso.  
  
> [!CAUTION]
>  Chiamare il [aggiornamento](../../mfc/reference/cdaorecordset-class.md#update) funzione membro (se sono presenti modifiche in sospeso) e il `Close` funzione membro su tutti gli oggetti recordset aperta prima di chiudere un database. Se si esce da una funzione che dichiara [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) o `CDaoDatabase` oggetti nello stack, il database viene chiuso, eventuali modifiche non salvate vengono perse, viene eseguito il rollback di tutte le transazioni in sospeso e le modifiche in sospeso per i dati vengono perse.  
  
> [!CAUTION]
>  Se si tenta di chiudere un oggetto di database, mentre tutti gli oggetti recordset sono aperti o se si tenta di chiudere un oggetto dell'area di lavoro mentre sono aperti oggetti di database appartenenti all'area di lavoro specifica, tali oggetti recordset verranno chiuse e tutti gli aggiornamenti in sospeso o le modifiche saranno eseguire il rollback. Se si tenta di chiudere un oggetto dell'area di lavoro mentre sono aperti oggetti di database appartenenti a esso, l'operazione chiude tutti gli oggetti di database che appartengono a tale oggetto specifico dell'area di lavoro, che potrebbe comportare oggetti recordset non chiusa viene chiusi. Se non si chiude l'oggetto di database, MFC segnala un errore di asserzione nelle build di debug.  
  
 Se l'oggetto di database viene definito all'esterno dell'ambito di una funzione, e si esce dalla funzione senza chiuderlo, rimarrà aperta fino a quando non vengono chiusi esplicitamente l'oggetto di database o il modulo in cui è definito esula dall'ambito.  
  
##  <a name="create"></a>  CDaoDatabase::Create  
 Per creare un nuovo di Microsoft Jet (. MDB) del database, chiamare questa funzione membro dopo aver creato un `CDaoDatabase` oggetto.  
  
```  
virtual void Create(
    LPCTSTR lpszName,  
    LPCTSTR lpszLocale = dbLangGeneral,  
    int dwOptions = 0);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszName*  
 Un'espressione stringa che rappresenta il nome del file di database che si sta creando. Può essere il percorso completo e nome file, ad esempio "c:\\\MYDB. MDB". È necessario fornire un nome. Se non si specifica un'estensione di file. MDB viene aggiunto. Se la rete supporta la convenzione di denominazione uniforme (UNC), è possibile anche specificare un percorso di rete, ad esempio "\\\\\\\MYSERVER\\\MYSHARE\\\MYDIR\\\MYDB". Solo Microsoft Jet (. File di database MDB) possono essere creati mediante questa funzione membro. (Barre rovesciate doppie sono necessari nei valori letterali stringa perché "\\" è il carattere di escape di C++.)  
  
 *lpszLocale*  
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
  
 *dwOptions*  
 Valore intero che indica una o più opzioni. I possibili valori sono:  
  
- **dbEncrypt** creare un database crittografato.  
  
- **dbVersion10** creare un database con database Microsoft Jet versione 1.0.  
  
- **dbVersion11** creare un database con database Microsoft Jet versione 1.1.  
  
- **dbVersion20** creare un database con database Microsoft Jet versione 2.0.  
  
- **dbVersion30** creare un database con database Microsoft Jet versione 3.0.  
  
 Se si omette la costante di crittografia, viene creato un database non crittografato. È possibile specificare solo una costante di versione. Se si omette una costante di versione, viene creato un database che utilizza la versione del database Microsoft Jet 3.0.  
  
> [!CAUTION]
>  Se un database non è crittografato, è possibile, anche se implementare la protezione utente/password, per leggere direttamente il file del disco binario che costituisce il database.  
  
### <a name="remarks"></a>Note  
 `Create` Crea il file di database e l'oggetto di database DAO sottostante e inizializza l'oggetto di C++. L'oggetto viene aggiunto alla raccolta di database dell'area di lavoro associati. L'oggetto di database è stato aperto; non chiamare `Open*` dopo `Create`.  
  
> [!NOTE]
>  Con `Create`, è possibile creare solo Microsoft Jet (. Database MDB). È possibile creare database ISAM o database ODBC.  
  
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
 *lpszName*  
 Il nome univoco dell'oggetto relation. Il nome deve iniziare con una lettera e può contenere un massimo di 40 caratteri. Può includere numeri e caratteri di sottolineatura caratteri, ma non può includere spazi o segni di punteggiatura.  
  
 *lpszTable*  
 Il nome della tabella primaria della relazione. Se la tabella non esiste, MFC genera un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md).  
  
 *lpszForeignTable*  
 Il nome della tabella esterna nella relazione. Se la tabella non esiste, MFC genera un'eccezione di tipo `CDaoException`.  
  
 *lAttributes*  
 Valore long che contiene informazioni sul tipo di relazione. Per applicare l'integrità referenziale, tra le altre cose, è possibile utilizzare questo valore. È possibile usare l'operatore OR bit per bit ( **&#124;**) per combinare i valori seguenti (fino a quando la combinazione ha senso):  
  
- **dbRelationUnique** relazione è uno a uno.  
  
- **dbRelationDontEnforce** relazione non è applicato (non l'integrità referenziale).  
  
- **dbRelationInherited** relazione esiste in un database non correnti che contiene le due tabelle collegate.  
  
- **dbRelationUpdateCascade** deve essere propagata in aggiornamenti (per altre informazioni su unarie a catena, vedere la sezione Osservazioni).  
  
- **dbRelationDeleteCascade** verranno eseguite le operazioni di eliminazione a catena.  
  
 *lpszField*  
 Un puntatore a una stringa con terminazione null che contiene il nome di un campo nella tabella primaria (denominato da *lpszTable*).  
  
 *lpszForeignField*  
 Un puntatore a una stringa con terminazione null che contiene il nome di un campo nella tabella esterna (denominato da *lpszForeignTable*).  
  
 *relinfo*  
 Un riferimento a un [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) oggetto che contiene informazioni sulla relazione che si desidera creare.  
  
### <a name="remarks"></a>Note  
 La relazione non può comportare una query o una tabella collegata da un database esterno.  
  
 Utilizzare la prima versione della funzione quando la relazione include un campo in ognuna delle due tabelle. Utilizzare la seconda versione quando la relazione include più campi. Il numero massimo di campi in una relazione è 14.  
  
 Questa azione crea un oggetto di relazione DAO sottostante, ma si tratta di un dettaglio di implementazione MFC poiché incapsulamento in MFC di oggetti relazione è contenuta nella classe `CDaoDatabase`. MFC non fornisce una classe per le relazioni.  
  
 Se si impostano la relazione attributi dell'oggetto per attivare operazioni cascade, il motore di database automaticamente aggiorna o Elimina i record in una o più tabelle quando vengono apportate modifiche alle tabelle correlate di chiave primarie.  
  
 Si supponga, ad esempio, che viene stabilita una relazione di eliminazione a catena tra una tabella Customers e una tabella Orders. Quando si eliminano i record dalla tabella Customers, vengono eliminati anche i record nella tabella ordini correlati al cliente in questione. Inoltre, se si stabilisce cascade Elimina relazioni tra la tabella Orders e in altre tabelle, record di tali tabelle vengono eliminati automaticamente quando si eliminano record dalla tabella Customers.  
  
 Per informazioni correlate, vedere l'argomento "CreateRelation Method" nella Guida di DAO.  
  
##  <a name="deletequerydef"></a>  CDaoDatabase::DeleteQueryDef  
 Chiamare questa funzione membro per eliminare l'oggetto specificato querydef, ovvero query salvata, ovvero dal `CDaoDatabase` raccolta QueryDefs dell'oggetto.  
  
```  
void DeleteQueryDef(LPCTSTR lpszName);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszName*  
 Il nome della query salvata da eliminare.  
  
### <a name="remarks"></a>Note  
 In un secondo momento, tale query non è più definito nel database.  
  
 Per informazioni sulla creazione di oggetti querydef, vedere la classe [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md). Un oggetto querydef viene associato a un determinato `CDaoDatabase` dell'oggetto quando si costruisce la `CDaoQueryDef` oggetto, passando un puntatore all'oggetto di database.  
  
##  <a name="deleterelation"></a>  CDaoDatabase::DeleteRelation  
 Chiamare questa funzione membro per eliminare una relazione esistente dalla raccolta Relations dell'oggetto di database.  
  
```  
void DeleteRelation(LPCTSTR lpszName);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszName*  
 Il nome della relazione da eliminare.  
  
### <a name="remarks"></a>Note  
 Successivamente, la relazione non esiste.  
  
 Per informazioni correlate, vedere l'argomento "Eliminare Method" nella Guida di DAO.  
  
##  <a name="deletetabledef"></a>  CDaoDatabase::DeleteTableDef  
 Chiamare questa funzione membro per eliminare la tabella specificata e tutti i relativi dati dal `CDaoDatabase` raccolta TableDefs dell'oggetto.  
  
```  
void DeleteTableDef(LPCTSTR lpszName);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszName*  
 Il nome dell'oggetto tabledef da eliminare.  
  
### <a name="remarks"></a>Note  
 Successivamente, tale tabella non è più definita nel database.  
  
> [!NOTE]
>  Prestare molta attenzione a non eliminare le tabelle di sistema.  
  
 Per informazioni sulla creazione di oggetti tabledef, vedere la classe [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md). Un oggetto tabledef viene associato a un determinato `CDaoDatabase` dell'oggetto quando si costruisce la `CDaoTableDef` oggetto, passando un puntatore all'oggetto di database.  
  
 Per informazioni correlate, vedere l'argomento "Eliminare Method" nella Guida di DAO.  
  
##  <a name="execute"></a>  CDaoDatabase::Execute  
 Chiamare questa funzione membro per eseguire una query o eseguire un'istruzione SQL sul database.  
  
```  
void Execute(
    LPCTSTR lpszSQL,  
    int nOptions = dbFailOnError);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszSQL*  
 Puntatore a una stringa con terminazione null che contiene un comando SQL valido per l'esecuzione.  
  
 *nOptions*  
 Valore intero che specifica le opzioni relative all'integrità della query. È possibile usare l'operatore OR bit per bit ( **&#124;**) per combinare le costanti seguenti (purché la combinazione ha senso, ad esempio, non è necessario combinare **dbInconsistent** con **dbConsistent**):  
  
- **dbDenyWrite** Nega l'autorizzazione di scrittura ad altri utenti.  
  
- **dbInconsistent** aggiornamenti non consistenti (impostazione predefinita).  
  
- **dbConsistent** aggiornamenti consistenti.  
  
- **dbSQLPassThrough** pass-through SQL. Fa sì che l'istruzione SQL deve essere passato a un'origine dati ODBC per l'elaborazione.  
  
- **dbFailOnError** rollback degli aggiornamenti se si verifica un errore.  
  
- **dbSeeChanges** genera un errore di run-time se un altro utente modifica i dati che si sta modificando.  
  
> [!NOTE]
>  Se entrambi **dbInconsistent** e **dbConsistent** sono inclusi o se non è inclusa, il risultato è il valore predefinito. Per una spiegazione di queste costanti, vedere l'argomento "Esegui metodo" nella Guida di DAO.  
  
### <a name="remarks"></a>Note  
 `Execute` opzione disponibile solo per le query di azione o le query pass-through SQL che non restituiscono risultati. Non funziona per le query select che restituiscono i record.  
  
 Per una definizione e informazioni sulle query, vedere gli argomenti "Azione Query" e "Esegui metodo" nella Guida di DAO.  
  
> [!TIP]
>  Base a un'istruzione SQL sintatticamente corretta e delle autorizzazioni appropriate, il `Execute` funzione membro non avrà esito negativo anche se non è una singola riga può essere modificata o eliminata. Pertanto, utilizzare sempre il **dbFailOnError** opzione quando si utilizza il `Execute` funzione membro per eseguire un aggiornamento o eliminazione di query. Questa opzione causa MFC generare un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md) e rollback di tutte le modifiche ha esito positivo se uno qualsiasi dei record interessati vengono bloccato e non può essere aggiornato o eliminato. Si noti che è possibile chiamare sempre il metodo `GetRecordsAffected` per visualizzare il numero di record sono stato interessato.  
  
 Chiamare il [GetRecordsAffected](#getrecordsaffected) funzione membro dell'oggetto di database per determinare il numero di record interessati dalla più recente `Execute` chiamare. Ad esempio, `GetRecordsAffected` restituisce informazioni sul numero di record eliminati, aggiornati o inseriti quando si esegue una query. Il conteggio restituito non riflette le modifiche nelle tabelle correlate quando cascade aggiorna o Elimina sono attive.  
  
 `Execute` non restituisce un oggetto recordset. Utilizzo `Execute` in una query che seleziona i record causa MFC generare un'eccezione di tipo `CDaoException`. (È presente alcun `ExecuteSQL` analoga alla funzione membro `CDatabase::ExecuteSQL`.)  
  
##  <a name="getconnect"></a>  CDaoDatabase::GetConnect  
 Chiamare questa funzione membro per recuperare la stringa di connessione utilizzata per la connessione di `CDaoDatabase` oggetto a un database ODBC o ISAM.  
  
```  
CString GetConnect();
```  
  
### <a name="return-value"></a>Valore restituito  
 La stringa di connessione se [Open](#open) è stato chiamato in un'origine dati ODBC; in caso contrario, una stringa vuota. Per un Microsoft Jet (. Database MDB), la stringa è sempre vuota a meno che non è impostato per l'utilizzo con il **dbSQLPassThrough** opzione utilizzata con il [Execute](#execute) funzione membro o utilizzato durante l'apertura di un recordset.  
  
### <a name="remarks"></a>Note  
 La stringa fornisce informazioni sull'origine di un database aperto o un database utilizzato in una query pass-through. La stringa di connessione è costituita da un identificatore di tipo di database e zero o più parametri separati da punti e virgola.  
  
> [!NOTE]
>  Utilizzo delle classi DAO MFC per connettersi a un'origine dati tramite ODBC è meno efficace rispetto alla connessione tramite una tabella collegata.  
  
> [!NOTE]
>  La stringa di connessione viene utilizzata per passare informazioni aggiuntive a ODBC e ad alcuni driver ISAM in base alle esigenze. Non è utilizzato per. Database MDB. Per tabelle di base del database Microsoft Jet, la stringa di connessione è una stringa vuota (""), ad eccezione di quando si utilizza, per una query pass-through SQL come descritto nel valore restituito precedente.  
  
 Vedere la [Open](#open) funzione membro per una descrizione delle modalità di creazione della stringa di connessione. Dopo la stringa di connessione è stata impostata `Open` chiamata, è possibile in un secondo momento usarlo per controllare l'impostazione per determinare il tipo, percorso, l'origine di dati ODBC, la Password o ID utente del database.  
  
##  <a name="getname"></a>  CDaoDatabase::GetName  
 Chiamare questa funzione membro per recuperare il nome del database attualmente aperto, ovvero il nome di un file di database esistente o il nome di un'origine dati ODBC registrato.  
  
```  
CString GetName();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il percorso completo e nome file del database, se ha esito positivo. in caso contrario, un oggetto vuoto [CString](../../atl-mfc-shared/reference/cstringt-class.md).  
  
### <a name="remarks"></a>Note  
 Se la rete supporta la convenzione di denominazione uniforme (UNC), è anche possibile specificare un percorso di rete, ad esempio, "\\\\\\\MYSERVER\\\MYSHARE\\\MYDIR\\\MYDB. MDB". (Barre rovesciate doppie sono necessari nei valori letterali stringa perché "\\" è il carattere di escape di C++.)  
  
 Ad esempio, voler visualizzare il nome specificato in un'intestazione. Se si verifica un errore mentre viene recuperato il nome, MFC genera un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md).  
  
> [!NOTE]
>  Per ottenere prestazioni migliori quando accedono ai database esterni, è consigliabile collegare le tabelle di database esterno a un database Microsoft Jet (. MDB) invece di connettersi direttamente all'origine dati.  
  
 Il tipo di database è indicato da file o alla directory che il percorso punta a, come segue:  
  
|Nome del percorso punta a...|Tipo di database|  
|--------------------------|-------------------|  
|. File con estensione MDB|Database Microsoft Jet (Microsoft Access)|  
|Directory che contiene. File DBF|database dBASE|  
|Directory che contiene. File XLS|Database di Microsoft Excel|  
|Directory che contiene. File PDX|Database Paradox|  
|Directory contenente i file di database di testo formattato in modo appropriato|Database nel formato di testo|  
  
 Per i database ODBC, ad esempio SQL Server e Oracle, la stringa di connessione del database identifica un nome di origine dati (DSN) che viene registrato in ODBC.  
  
##  <a name="getquerydefcount"></a>  CDaoDatabase::GetQueryDefCount  
 Chiamare questa funzione membro per recuperare il numero di query definite nella raccolta QueryDefs del database.  
  
```  
short GetQueryDefCount();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di query definite nel database.  
  
### <a name="remarks"></a>Note  
 `GetQueryDefCount` è utile se è necessario scorrere tutte querydefs nella raccolta QueryDefs. Per ottenere informazioni su una determinata query nella raccolta, vedere [funzione membro GetQueryDefInfo](#getquerydefinfo).  
  
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
 *nIndex*  
 Indice della query già definita nella raccolta QueryDefs del database, per la ricerca in base all'indice.  
  
 *querydefinfo*  
 Un riferimento a un [CDaoQueryDefInfo](../../mfc/reference/cdaoquerydefinfo-structure.md) oggetto che restituisce le informazioni richieste.  
  
 *dwInfoOptions*  
 Oggetto  oggetto che contiene un valore che convalida i dati in un record come viene modificato o aggiunto a una tabella. Le opzioni disponibili sono elencate di seguito insieme a ciò che provocano la restituzione all'interno del recordset funzione:  
  
- `AFX_DAO_PRIMARY_INFO` (Impostazione predefinita) Nome, tipo  
  
- `AFX_DAO_SECONDARY_INFO` Più informazioni primarie: Created Date, data dell'ultimo aggiornamento, restituire i record, renderli aggiornabili  
  
- `AFX_DAO_ALL_INFO` Più informazioni primarie e secondarie: ODBCTimeout SQL, Connect,  
  
 *lpszName*  
 Stringa contenente il nome di una query definita nel database, per la ricerca in base al nome.  
  
### <a name="remarks"></a>Note  
 Vengono fornite due versioni della funzione in modo è possibile selezionare una query in base all'indice nella raccolta QueryDefs del database o al nome della query.  
  
 Per una descrizione delle informazioni restituite nei *querydefinfo*, vedere il [CDaoQueryDefInfo](../../mfc/reference/cdaoquerydefinfo-structure.md) struttura. Questa struttura dispone di membri che corrispondono agli elementi elencati in precedenza nella descrizione del *dwInfoOptions*. Se si richiede un livello di informazioni, si ottengono qualsiasi precedenti livelli di informazioni anche.  
  
##  <a name="getquerytimeout"></a>  CDaoDatabase::GetQueryTimeout  
 Chiamare questa funzione membro per recuperare il numero corrente di secondi consentiti prima che le successive operazioni sul database connesso si verifica il timeout.  
  
```  
short GetQueryTimeout();
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore short integer contenente il valore di timeout in secondi.  
  
### <a name="remarks"></a>Note  
 Un'operazione potrebbe essere previsto un timeout a causa di problemi di accesso di rete, il tempo di elaborazione di un numero eccessivo di query e così via. Mentre l'impostazione è attiva, influisce aperti, aggiungere nuovi, aggiornare ed eliminare le operazioni su tutti i recordset associati a questo `CDaoDatabase` oggetto. È possibile modificare l'impostazione di timeout corrente chiamando [SetQueryTimeout](#setquerytimeout). Il valore di timeout di query per un oggetto recordset dopo l'apertura non modifica il valore per il recordset. Ad esempio, le successive [spostare](../../mfc/reference/cdaorecordset-class.md#move) operazioni non utilizzano il nuovo valore. Il valore predefinito è impostato inizialmente quando viene inizializzato il motore di database.  
  
 Il valore predefinito per i timeout di query viene recuperato dal Registro di sistema Windows. Se è disponibile alcuna impostazione del Registro di sistema, il valore predefinito è 60 secondi. Non tutti i database supportano la possibilità di impostare un valore di timeout della query. Se si imposta un valore di timeout query pari a 0, si verifica alcun timeout. e la comunicazione con il database potrebbe non rispondere. Questo comportamento può essere utile durante lo sviluppo. Se la chiamata non riesce, MFC genera un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md).  
  
 Per informazioni correlate, vedere l'argomento "Proprietà QueryTimeout" nella Guida di DAO.  
  
##  <a name="getrecordsaffected"></a>  CDaoDatabase::GetRecordsAffected  
 Chiamare questa funzione membro per determinare il numero di record interessati dall'ultima chiamata di [Execute](#execute) funzione membro.  
  
```  
long GetRecordsAffected();
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore long integer contenente il numero di record interessati.  
  
### <a name="remarks"></a>Note  
 Il valore restituito include il numero di record eliminati, aggiornati o inseriti da una query eseguita con `Execute`. Il conteggio restituito non riflette le modifiche nelle tabelle correlate quando cascade aggiorna o Elimina sono attive.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà RecordsAffected" nella Guida di DAO.  
  
##  <a name="getrelationcount"></a>  CDaoDatabase::GetRelationCount  
 Chiamare questa funzione membro per ottenere il numero di relazioni definite tra le tabelle nel database.  
  
```  
short GetRelationCount();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di relazioni definite tra le tabelle nel database.  
  
### <a name="remarks"></a>Note  
 **GetRelationCount** è utile se è necessario scorrere tutte le relazioni definite nella raccolta di relazioni del database. Per ottenere informazioni su una determinata relazione nella raccolta, vedere [GetRelationInfo](#getrelationinfo).  
  
 Per illustrare il concetto di una relazione, si consideri una tabella Suppliers e una tabella dei prodotti, che potrebbe avere una relazione uno-a-molti. In questa relazione, un fornitore può fornire più di un prodotto. Altre relazioni sono uno a uno e molti-a-molti.  
  
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
 *nIndex*  
 L'indice dell'oggetto relazione nella raccolta di relazioni del database, per la ricerca in base all'indice.  
  
 *relinfo*  
 Un riferimento a un [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) oggetto che restituisce le informazioni richieste.  
  
 *dwInfoOptions*  
 Opzioni che specificano le informazioni sulla relazione da recuperare. Le opzioni disponibili sono elencate di seguito insieme a ciò che provocano la funzione restituisca sulla relazione:  
  
- `AFX_DAO_PRIMARY_INFO` (Impostazione predefinita) Nome, tabella, tabella esterna  
  
- `AFX_DAO_SECONDARY_INFO` Attributi, le informazioni sui campi  
  
 Informazioni sui campi è un [CDaoRelationFieldInfo](../../mfc/reference/cdaorelationfieldinfo-structure.md) oggetto contenente i campi della tabella primaria coinvolti nella relazione.  
  
 *lpszName*  
 Stringa contenente il nome dell'oggetto relazione per la ricerca in base al nome.  
  
### <a name="remarks"></a>Note  
 Due versioni di questa funzione forniscono l'accesso in base all'indice o al nome. Per una descrizione delle informazioni restituite nei *relinfo*, vedere il [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) struttura. Questa struttura dispone di membri che corrispondono agli elementi elencati in precedenza nella descrizione del *dwInfoOptions*. Se si richiedono informazioni su un unico livello, anche possibile ottenere informazioni in tutti i livelli precedenti oltre.  
  
> [!NOTE]
>  Se si imposta la relazione attributi dell'oggetto per attivare operazioni cascade ( **dbRelationUpdateCascades** oppure **dbRelationDeleteCascades**), il motore di database Microsoft Jet Aggiorna automaticamente o Elimina i record in una o più tabelle quando vengono apportate modifiche alle tabelle correlate di chiave primarie. Si supponga, ad esempio, che viene stabilita una relazione di eliminazione a catena tra una tabella Customers e una tabella Orders. Quando si eliminano i record dalla tabella Customers, vengono eliminati anche i record nella tabella ordini correlati al cliente in questione. Inoltre, se si stabilisce cascade Elimina relazioni tra la tabella Orders e in altre tabelle, record di tali tabelle vengono eliminati automaticamente quando si eliminano record dalla tabella Customers.  
  
##  <a name="gettabledefcount"></a>  CDaoDatabase:  
 Chiamare questa funzione membro per recuperare il numero di tabelle definite nel database.  
  
```  
short GetTableDefCount();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di tabledefs definiti nel database.  
  
### <a name="remarks"></a>Note  
 `GetTableDefCount` è utile se è necessario scorrere tutte tabledefs nella raccolta TableDefs del database. Per ottenere informazioni su una tabella specificata nella raccolta, vedere [GetTableDefInfo](#gettabledefinfo).  
  
##  <a name="gettabledefinfo"></a>  CDaoDatabase:: GetTableDefInfo  
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
 *nIndex*  
 Indice dell'oggetto tabledef raccolta TableDefs del database, per la ricerca in base all'indice.  
  
 *tabledefinfo*  
 Un riferimento a un [CDaoTableDefInfo](../../mfc/reference/cdaotabledefinfo-structure.md) oggetto che restituisce le informazioni richieste.  
  
 *dwInfoOptions*  
 Opzioni che specificano le informazioni sulla tabella da recuperare. Le opzioni disponibili sono elencate di seguito insieme a ciò che provocano la funzione restituisca sulla relazione:  
  
- `AFX_DAO_PRIMARY_INFO` (Impostazione predefinita) Nome, aggiornabili, gli attributi  
  
- `AFX_DAO_SECONDARY_INFO` Più informazioni primarie: data di creazione, data dell'ultimo aggiornamento, il nome di tabella di origine, connessione  
  
- `AFX_DAO_ALL_INFO` Più informazioni primarie e secondarie: regola di convalida, testo di convalida, conteggio di Record  
  
 *lpszName*  
 Il nome dell'oggetto tabledef, per la ricerca in base al nome.  
  
### <a name="remarks"></a>Note  
 Vengono fornite due versioni della funzione in modo è possibile selezionare una tabella in base all'indice nella raccolta TableDefs del database o al nome della tabella.  
  
 Per una descrizione delle informazioni restituite nei *tabledefinfo*, vedere il [CDaoTableDefInfo](../../mfc/reference/cdaotabledefinfo-structure.md) struttura. Questa struttura dispone di membri che corrispondono agli elementi elencati in precedenza nella descrizione del *dwInfoOptions*. Se si richiedono informazioni su un unico livello, ottenere informazioni dei livelli precedenti oltre.  
  
> [!NOTE]
>  Il `AFX_DAO_ALL_INFO` opzione vengono fornite informazioni che possono essere lente da ottenere. In questo caso, i record nella tabella di conteggio potrebbe richiedere molto tempo se sono presenti molti record.  
  
##  <a name="getversion"></a>  CDaoDatabase::GetVersion  
 Chiamare questa funzione membro per determinare la versione del file di database Microsoft Jet.  
  
```  
CString GetVersion();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un [CString](../../atl-mfc-shared/reference/cstringt-class.md) che indica la versione del file di database associato all'oggetto.  
  
### <a name="remarks"></a>Note  
 Il valore restituito rappresenta il numero di versione nel formato "principale e secondaria"; ad esempio, "3.0". Il numero di versione del prodotto (ad esempio, 3.0) include il numero di versione (3), un periodo e il numero di versione (0). Le versioni a data sono 1.0, 1.1, 2.0 e 3.0.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà Version" nella Guida di DAO.  
  
##  <a name="isopen"></a>  CDaoDatabase::IsOpen  
 Chiamare questa funzione membro per determinare se il `CDaoDatabase` oggetto è attualmente aperto in un database.  
  
```  
BOOL IsOpen() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la `CDaoDatabase` oggetto è attualmente aperta; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
  
##  <a name="m_pdaodatabase"></a>  CDaoDatabase::m_pDAODatabase  
 Contiene un puntatore all'interfaccia OLE per oggetti di database DAO sottostante il `CDaoDatabase` oggetto.  
  
### <a name="remarks"></a>Note  
 Usare l'indicatore di misura se è necessario accedere direttamente all'interfaccia DAO.  
  
 Per informazioni sulla chiamata di DAO direttamente, vedere [Nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).  
  
##  <a name="m_pworkspace"></a>  CDaoDatabase::m_pWorkspace  
 Contiene un puntatore per il [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) oggetto che contiene l'oggetto di database.  
  
### <a name="remarks"></a>Note  
 Utilizzare l'indicatore di misura se è necessario accedere direttamente l'area di lavoro, ad esempio, per ottenere puntatori ad altri oggetti di database nella raccolta di database dell'area di lavoro.  
  
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
 *lpszName*  
 Un'espressione stringa che rappresenta il nome di una versione esistente di Microsoft Jet (. File di database MDB). Se il nome del file ha un'estensione, è necessario. Se la rete supporta la convenzione di denominazione uniforme (UNC), è possibile anche specificare un percorso di rete, ad esempio "\\\\\\\MYSERVER\\\MYSHARE\\\MYDIR\\\MYDB. MDB". (Barre rovesciate doppie sono necessari nei valori letterali stringa perché "\\" è il carattere di escape di C++.)  
  
 Alcune considerazioni si applicano quando si utilizza *lpszName*. Se è:  
  
-   Fa riferimento a un database che è già aperto in modo esclusivo da un altro utente, MFC genera un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md). Intercettare l'eccezione per informare l'utente che il database è disponibile.  
  
-   È una stringa vuota ("") e *lpszConnect* è "ODBC;", viene visualizzata una finestra di dialogo elenco registrati tutti i nomi delle origini dati ODBC in modo che l'utente può selezionare un database. È consigliabile evitare di connessioni dirette a origini dati ODBC. utilizzare una tabella collegata.  
  
-   In caso contrario, non fare riferimento a un database esistente o valido DSN ODBC, MFC genera un'eccezione di tipo `CDaoException`.  
  
> [!NOTE]
>  Per ulteriori informazioni sui codici di errore DAO, vedere il DAOERR. File H. Per informazioni correlate, vedere l'argomento "Intercettabile dati errori di accesso" nella Guida di DAO.  
  
 *bExclusive*  
 Un valore booleano che è **TRUE** se il database è necessario aprire in modo esclusivo (condiviso) e **FALSE** se il database deve essere aperto per l'accesso condiviso. Se si omette questo argomento, il database è aperto per l'accesso condiviso.  
  
 *bReadOnly*  
 Un valore booleano che è **TRUE** se il database è necessario aprire per l'accesso in sola lettura e **FALSE** se il database deve essere aperto per l'accesso in lettura/scrittura. Se si omette questo argomento, il database è aperto per l'accesso in lettura/scrittura. Tutti i dipendenti recordset ereditano l'attributo.  
  
 *lpszConnect*  
 Un'espressione stringa utilizzata per aprire il database. Questa stringa costituisce ODBC connettersi argomenti. È necessario fornire gli argomenti esclusivi e di sola lettura per fornire una stringa di origine. Se il database è un database Microsoft Jet (. MDB), questa stringa è vuota (""). La sintassi per il valore predefinito, ovvero **t**(""), fornisce la portabilità per Unicode, nonché ANSI build dell'applicazione.  
  
### <a name="remarks"></a>Note  
 **Apri** associa il database con l'oggetto DAO sottostante. È possibile utilizzare l'oggetto di database per costruire recordset, tabledef o querydef oggetti fino a quando non viene inizializzato. **Apri** aggiunge l'oggetto di database alla raccolta di database dell'area di lavoro associati.  
  
 Utilizzare i parametri come segue:  
  
-   Se si sta aprendo un Microsoft Jet (. Database MDB), usare il *lpszName* parametro e passare una stringa vuota per il *lpszConnect* parametro o passare una stringa di password nel formato "; PWD = password "se il database è protetto da password (. MDB solo database).  
  
-   Se si sta aprendo un'origine dati ODBC, passare una stringa di connessione ODBC valida in *lpszConnect* e una stringa vuota in *lpszName*.  
  
 Per informazioni correlate, vedere l'argomento "OpenDatabase Method" nella Guida di DAO.  
  
> [!NOTE]
>  Per ottenere prestazioni migliori quando si accede a database esterni, tra cui database ISAM e origini dati ODBC, è consigliabile collegare le tabelle di database esterno a un database di gestione di Microsoft Jet (. MDB) invece di connettersi direttamente all'origine dati.  
  
 È possibile che un tentativo di connessione al timeout se, ad esempio, non è disponibile l'host del sistema DBMS. Se il tentativo di connessione ha esito negativo, `Open` genera un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md).  
  
 La sezione Osservazioni rimanente vengono applicate solo a database ODBC:  
  
 Se il database è un database ODBC e i parametri di `Open` chiamata non contengono informazioni sufficienti per stabilire la connessione, il driver ODBC viene aperta una finestra di dialogo per ottenere le informazioni necessarie da parte dell'utente. Quando si chiama `Open`, la stringa di connessione *lpszConnect*, viene archiviato in locale senza che sia disponibile chiamando il [GetConnect](#getconnect) funzione membro.  
  
 Se si desidera, è possibile aprire una propria finestra di dialogo prima di chiamare `Open` per ottenere informazioni da parte dell'utente, ad esempio una password, quindi aggiungere tali informazioni alla stringa di connessione si passa a `Open`. Oppure è possibile salvare la stringa di connessione passata (ad esempio nel Registro di sistema Windows) in modo da poterla riutilizzare alla successiva ora l'applicazione chiama `Open` su un `CDaoDatabase` oggetto.  
  
 È inoltre possibile utilizzare la stringa di connessione per più livelli di autorizzazione di accesso (ognuno per un altro `CDaoDatabase` oggetto) o per fornire altre informazioni specifiche del database.  
  
##  <a name="setquerytimeout"></a>  CDaoDatabase::SetQueryTimeout  
 Chiamare questa funzione membro per sostituire il numero predefinito di secondi consentiti prima delle operazioni successive sul timeout del database connesso.  
  
```  
void SetQueryTimeout(short nSeconds);
```  
  
### <a name="parameters"></a>Parametri  
 *nSecondi*  
 Il numero di secondi consentiti prima di un tentativo di query timeout.  
  
### <a name="remarks"></a>Note  
 Un'operazione potrebbe essere previsto un timeout a causa di problemi di accesso di rete, il tempo di elaborazione di un numero eccessivo di query e così via. Chiamare `SetQueryTimeout` prima dell'apertura del recordset o prima di chiamare il recordset [AddNew](../../mfc/reference/cdaorecordset-class.md#addnew), [Update](../../mfc/reference/cdaorecordset-class.md#update), o [eliminare](../../mfc/reference/cdaorecordset-class.md#delete) se si desidera modificare la query, le funzioni membro valore di timeout. L'impostazione influisce su tutte le successive [Open](../../mfc/reference/cdaorecordset-class.md#open), `AddNew`, `Update`, e `Delete` chiamate a qualsiasi recordset associato a questo `CDaoDatabase` oggetto. Il valore di timeout di query per un oggetto recordset dopo l'apertura non modifica il valore per il recordset. Ad esempio, le successive [spostare](../../mfc/reference/cdaorecordset-class.md#move) operazioni non utilizzano il nuovo valore.  
  
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
