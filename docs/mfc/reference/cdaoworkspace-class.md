---
title: "CDaoWorkspace Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDaoWorkspace"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDaoWorkspace class"
  - "DAO workspaces [C++]"
  - "DAO workspaces [C++], CDaoWorkspace class"
  - "database engine [C++], accessing via workspace"
  - "DDLs [C++]"
  - "default workspaces [C++]"
  - "default workspaces [C++], DAO"
  - "impostazioni predefinite [C++], aree di lavoro"
  - "classi ODBC [C++], vs. DAO classes"
  - "persistence [C++], DAO workspace"
  - "security [MFC]"
  - "security [MFC], DAO workspaces"
  - "sessions [C++], DAO workspace"
  - "transaction spaces [C++]"
  - "transaction spaces [C++], DAO workspace"
  - "Workspace class"
  - "workspaces [C++], DAO"
  - "workspaces [C++], default"
  - "workspaces [C++], interface to database engine"
  - "workspaces [C++], persistenza"
  - "Workspaces collection"
ms.assetid: 64f60de6-4df1-4d4a-a65b-c489b5257d52
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# CDaoWorkspace Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Gestisce una sessione denominata e password sicura del database dall'accesso per disconnettersi, da un singolo utente.  
  
## Sintassi  
  
```  
class CDaoWorkspace : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoWorkspace::CDaoWorkspace](../Topic/CDaoWorkspace::CDaoWorkspace.md)|Costruisce un oggetto dell'area di lavoro.  In seguito, chiamata **Crea** o **Apri**.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoWorkspace::Append](../Topic/CDaoWorkspace::Append.md)|Aggiunge un'area di lavoro appena creato alle aree di lavoro del motore di database della raccolta.|  
|[CDaoWorkspace::BeginTrans](../Topic/CDaoWorkspace::BeginTrans.md)|Avvia una nuova transazione, che si applica a tutti i database aperti nell'area di lavoro.|  
|[CDaoWorkspace::Close](../Topic/CDaoWorkspace::Close.md)|Chiudere l'area di lavoro e tutti gli oggetti che contiene.  Le transazioni in sospeso sono verrà eseguito il rollback di.|  
|[CDaoWorkspace::CommitTrans](../Topic/CDaoWorkspace::CommitTrans.md)|Completamento della transazione corrente e salvare le modifiche.|  
|[CDaoWorkspace::CompactDatabase](../Topic/CDaoWorkspace::CompactDatabase.md)|Comprime o duplicati di un database.|  
|[CDaoWorkspace::Create](../Topic/CDaoWorkspace::Create.md)|Crea un nuovo oggetto dell'area di lavoro di DAO.|  
|[CDaoWorkspace::GetDatabaseCount](../Topic/CDaoWorkspace::GetDatabaseCount.md)|Restituisce il numero di oggetti di database DAO nell'area di lavoro di raccolta.|  
|[CDaoWorkspace::GetDatabaseInfo](../Topic/CDaoWorkspace::GetDatabaseInfo.md)|Restituisce informazioni su un database DAO specificato definito nell'area di lavoro di raccolta.|  
|[CDaoWorkspace::GetIniPath](../Topic/CDaoWorkspace::GetIniPath.md)|Restituisce la posizione delle impostazioni di inizializzazione del modulo di gestione di database Microsoft Jet in Windows Registro di sistema.|  
|[CDaoWorkspace::GetIsolateODBCTrans](../Topic/CDaoWorkspace::GetIsolateODBCTrans.md)|Restituisce un valore che indica se più transazioni che includono la stessa origine dati ODBC sono isolati tramite più connessioni si impone all'origine dati.|  
|[CDaoWorkspace::GetLoginTimeout](../Topic/CDaoWorkspace::GetLoginTimeout.md)|Restituisce il numero di secondi prima che si verifichi un errore quando l'utente tenta di accedere a un database ODBC.|  
|[CDaoWorkspace::GetName](../Topic/CDaoWorkspace::GetName.md)|Restituisce il nome definito dall'utente per l'oggetto dell'area di lavoro.|  
|[CDaoWorkspace::GetUserName](../Topic/CDaoWorkspace::GetUserName.md)|Restituisce il nome utente specificato quando l'area di lavoro creata.  Si tratta del nome del proprietario dell'area di lavoro.|  
|[CDaoWorkspace::GetVersion](../Topic/CDaoWorkspace::GetVersion.md)|Restituisce una stringa contenente la versione del motore di database associato all'area di lavoro.|  
|[CDaoWorkspace::GetWorkspaceCount](../Topic/CDaoWorkspace::GetWorkspaceCount.md)|Restituisce il numero di oggetti dell'area di lavoro di DAO le aree di lavoro del motore di database della raccolta.|  
|[CDaoWorkspace::GetWorkspaceInfo](../Topic/CDaoWorkspace::GetWorkspaceInfo.md)|Restituisce informazioni su un'area di lavoro specificata di DAO definita in aree di lavoro del motore di database della raccolta.|  
|[CDaoWorkspace::Idle](../Topic/CDaoWorkspace::Idle.md)|Consente al motore di database eseguire attività in background.|  
|[CDaoWorkspace::IsOpen](../Topic/CDaoWorkspace::IsOpen.md)|Restituisce diverso da zero se l'area di lavoro è aperta.|  
|[CDaoWorkspace::Open](../Topic/CDaoWorkspace::Open.md)|Esplicitamente aperto un oggetto dell'area di lavoro associato all'area di lavoro dell'impostazione predefinita di DAO.|  
|[CDaoWorkspace::RepairDatabase](../Topic/CDaoWorkspace::RepairDatabase.md)|Tentativo di ripristinare un database danneggiato.|  
|[CDaoWorkspace::Rollback](../Topic/CDaoWorkspace::Rollback.md)|Termina la transazione corrente e senza salvare le modifiche.|  
|[CDaoWorkspace::SetDefaultPassword](../Topic/CDaoWorkspace::SetDefaultPassword.md)|Imposta la password che il motore di database utilizza quando un oggetto dell'area di lavoro viene creato senza una password specifico.|  
|[CDaoWorkspace::SetDefaultUser](../Topic/CDaoWorkspace::SetDefaultUser.md)|Imposta il nome utente che il motore di database utilizza quando un oggetto dell'area di lavoro viene creato senza nome utente specifico.|  
|[CDaoWorkspace::SetIniPath](../Topic/CDaoWorkspace::SetIniPath.md)|Imposta la posizione delle impostazioni di inizializzazione del modulo di gestione di database Microsoft Jet in Windows Registro di sistema.|  
|[CDaoWorkspace::SetIsolateODBCTrans](../Topic/CDaoWorkspace::SetIsolateODBCTrans.md)|Specifica se più transazioni che includono la stessa origine dati ODBC sono isolate imposto più connessioni all'origine dati.|  
|[CDaoWorkspace::SetLoginTimeout](../Topic/CDaoWorkspace::SetLoginTimeout.md)|Imposta il numero di secondi prima che si verifichi un errore quando l'utente tenta di accedere a un'origine dati ODBC.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoWorkspace::m\_pDAOWorkspace](../Topic/CDaoWorkspace::m_pDAOWorkspace.md)|Punti all'oggetto sottostante dell'area di lavoro di DAO.|  
  
## Note  
 Nella maggior parte dei casi, non è necessario disporre di più aree di lavoro e non sarà necessario creare gli oggetti espliciti dell'area di lavoro, quando si apre il database e gli oggetti recordset, utilizzare l'area di lavoro predefinita di DAO.  Tuttavia, se necessario, è possibile eseguire le più sessioni contemporaneamente creazione di oggetti aggiuntivi dell'area di lavoro.  Ciascun oggetto dell'area di lavoro può contenere oggetti di database aperti multipli nel proprio database della raccolta.  In MFC, un'area di lavoro è principalmente una gestione transazioni, specificando un set di database aperti tutti nello stesso "spazio di transazione."  
  
> [!NOTE]
>  Le classi di database DAO sono differenziate dalle classi di database MFC basate su ODBC.  Tutti i nomi delle classi di database DAO presentano un prefisso "di CDao".  Le classi MFC basate su DAO risulta in genere più in grado delle classi MFC basate su ODBC.  Le classi basate su DAO accedono ai dati con il modulo di gestione di database Microsoft Jet, inclusi i driver ODBC.  Supportano le operazioni di Data Definition Language \(DDL\), la creazione di database e aggiungere le tabelle e i campi tramite le classi, senza dover chiamare direttamente le API DAO.  
  
## Funzionalità  
 La classe fornisce `CDaoWorkspace` quanto segue:  
  
-   Accesso esplicito, se necessario, a un'area di lavoro predefinita, creata mediante l'inizializzazione del motore di database.  Nell'area di lavoro predefinita di utilizzare DAO in modo implicito creazione di database e gli oggetti recordset.  
  
-   Uno spazio di transazioni in cui le transazioni si applicano a tutti i database aperti nell'area di lavoro.  È possibile creare aree di lavoro aggiuntive per la gestione degli spazi separati di transazione.  
  
-   Un'interfaccia a molte proprietà del modulo di gestione di database Microsoft Jet sottostante \(vedere le funzioni membro statico\).  Aprire o creare un'area di lavoro, oppure chiamare una funzione membro static prima di aprire o creare, inizializza il motore di database.  
  
-   Accesso alla raccolta di aree di lavoro del motore di database, che archivia tutte le aree di lavoro attiva che sono state aggiunte su.  È inoltre possibile creare e utilizzare le aree di lavoro senza accodarle alla raccolta.  
  
## Sicurezza  
 MFC non implementa gli utenti e non raggruppa le raccolte in DAO, utilizzate per il controllo di sicurezza.  Se sono necessari gli aspetti di DAO, è possibile programmarli stessi tramite chiamate dirette alle interfacce DAO.  Per informazioni, vedere [nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).  
  
## Utilizzo  
 È possibile utilizzare la classe `CDaoWorkspace` :  
  
-   In modo esplicito aprire l'area di lavoro predefinita.  
  
     Nell'utilizzo dell'area di lavoro predefinita è implicito — quando si apre nuovi oggetti [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) o [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md).  Ma potrebbe essere necessario accedervi in modo esplicito ad esempio, di accedere alle proprietà del motore di database o le aree di lavoro di raccolta.  Vedere "l'utilizzo implicito dell'area di lavoro predefinita" in.  
  
-   Creare nuove aree di lavoro.  Chiamare [Aggiungere](../Topic/CDaoWorkspace::Append.md) se si desidera aggiungerli alle aree di lavoro di raccolta.  
  
-   Aprire un'area di lavoro esistente in aree di lavoro di raccolta.  
  
 Creare una nuova area di lavoro che non esiste nella raccolta di aree di lavoro viene descritto nella funzione membro [Crea](../Topic/CDaoWorkspace::Create.md).  Gli oggetti dell'area di lavoro non vengono mantenuti in alcun modo tra le sessioni del motore di datababase.  Se i si collega MFC in modo statico, terminando l'applicazione uninitializes il motore di database.  Se i si collega a MFC in modo dinamico, il motore di database inizializzato quando la DLL MFC viene scaricato.  
  
 In modo esplicito aprire l'area di lavoro predefinita, o aprire un'area di lavoro esistente in aree di lavoro raccolta, è descritto nella funzione membro [Apri](../Topic/CDaoWorkspace::Open.md).  
  
 Termina la sessione dell'area di lavoro se l'area di lavoro con la funzione membro [Chiudi](../Topic/CDaoWorkspace::Close.md).  **Chiudi** chiude tutti i database che non sia stato chiuso in precedenza, rollback le transazioni di cui non è stato eseguito il commit.  
  
## Transazioni  
 DAO gestisce le transazioni a livello di area di lavoro, pertanto, le transazioni in un'area di lavoro con database aperti multipli si applicano a tutti i database.  Ad esempio, se due database hanno aggiornamenti che non è stato eseguito il commit e chiamate [CommitTrans](../Topic/CDaoWorkspace::CommitTrans.md), tutti gli aggiornamenti viene eseguito il commit.  Se si desidera limitare le transazioni in un solo database, sono necessari un oggetto separato dell'area di lavoro di.  
  
## Utilizzo implicito dell'area di lavoro predefinita  
 Area di lavoro predefinita di utilizzare DAO MFC in modo implicito nelle seguenti circostanze:  
  
-   Se si crea un nuovo oggetto `CDaoDatabase` ma non questa operazione tramite un oggetto esistente `CDaoWorkspace`, MFC crea un oggetto temporaneo dell'area di lavoro di, che corrisponde all'area di lavoro dell'impostazione predefinita di DAO.  In tal modo per i database, tutti gli oggetti di database sono associati all'area di lavoro predefinita.  È possibile accedere all'area di lavoro di un database tramite un membro dati `CDaoDatabase`.  
  
-   Analogamente, se si crea un oggetto `CDaoRecordset` senza fornire un puntatore a un oggetto `CDaoDatabase`, MFC crea un oggetto di database temporaneo e, per estensione, un oggetto temporaneo area di lavoro.  È possibile accedere al database di un recordset e indirettamente all'area di lavoro, tramite un membro dati `CDaoRecordset`.  
  
## Altre operazioni  
 Altre operazioni del database vengono fornite, come ripristinare un database danneggiato o comprimere un database.  
  
 Per informazioni su chiamare direttamente le API DAO e sulla sicurezza di DAO, vedere [nota tecnica 54](../../mfc/tn054-calling-dao-directly-while-using-mfc-dao-classes.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CDaoWorkspace`  
  
## Requisiti  
 **Header:** afxdao.h  
  
## Vedere anche  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDaoDatabase Class](../../mfc/reference/cdaodatabase-class.md)   
 [CDaoRecordset Class](../../mfc/reference/cdaorecordset-class.md)   
 [CDaoTableDef Class](../../mfc/reference/cdaotabledef-class.md)   
 [CDaoQueryDef Class](../../mfc/reference/cdaoquerydef-class.md)   
 [CDaoException Class](../../mfc/reference/cdaoexception-class.md)