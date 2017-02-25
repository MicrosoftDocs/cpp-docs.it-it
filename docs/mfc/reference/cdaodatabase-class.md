---
title: "CDaoDatabase Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDaoDatabase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDaoDatabase class"
  - "CDaoDatabase class, and workspace"
  - "CDaoDatabase class, vs. CDatabase class"
  - "CDatabase (classe), vs. CDaoDatabase class"
  - "classi di database [C++], DAO"
ms.assetid: 8ff5b342-964d-449d-bef1-d0ff56aadf6d
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# CDaoDatabase Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta una connessione a un database tramite cui è possibile eseguire operazioni sui dati.  
  
## Sintassi  
  
```  
class CDaoDatabase : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoDatabase::CDaoDatabase](../Topic/CDaoDatabase::CDaoDatabase.md)|Costruisce un oggetto `CDaoDatabase`.  Chiamare **Apri** per connettere l'oggetto a un database.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoDatabase::CanTransact](../Topic/CDaoDatabase::CanTransact.md)|Restituisce diverso da zero se le transazioni dei supporti del database.|  
|[CDaoDatabase::CanUpdate](../Topic/CDaoDatabase::CanUpdate.md)|Restituisce diverso da zero se l'oggetto `CDaoDatabase` è aggiornabile non di sola lettura\).|  
|[CDaoDatabase::Close](../Topic/CDaoDatabase::Close.md)|Chiude la connessione di database.|  
|[CDaoDatabase::Create](../Topic/CDaoDatabase::Create.md)|Crea l'oggetto di database DAO sottostante e inizializza l'oggetto `CDaoDatabase`.|  
|[CDaoDatabase::CreateRelation](../Topic/CDaoDatabase::CreateRelation.md)|Definisce una nuova relazione tra le tabelle del database.|  
|[CDaoDatabase::DeleteQueryDef](../Topic/CDaoDatabase::DeleteQueryDef.md)|Rimuove un oggetto di querydef salvato nella libreria di QueryDefs del database.|  
|[CDaoDatabase::DeleteRelation](../Topic/CDaoDatabase::DeleteRelation.md)|Elimina una relazione esistente tra le tabelle del database.|  
|[CDaoDatabase::DeleteTableDef](../Topic/CDaoDatabase::DeleteTableDef.md)|Elimina la definizione di una tabella nel database.  Ciò consente di eliminare la tabella e i relativi dati.|  
|[CDaoDatabase::Execute](../Topic/CDaoDatabase::Execute.md)|Esegue una query di azione.  Chiamando **Execute** per una query che restituisce i risultati genera un'eccezione.|  
|[CDaoDatabase::GetConnect](../Topic/CDaoDatabase::GetConnect.md)|Restituisce la stringa di connessione utilizzata per connettere l'oggetto `CDaoDatabase` in un database.  Utilizzato per ODBC.|  
|[CDaoDatabase::GetName](../Topic/CDaoDatabase::GetName.md)|Restituisce l'oggetto attualmente il nome del database in uso.|  
|[CDaoDatabase::GetQueryDefCount](../Topic/CDaoDatabase::GetQueryDefCount.md)|Restituisce il numero di query definiti per il database.|  
|[CDaoDatabase::GetQueryDefInfo](../Topic/CDaoDatabase::GetQueryDefInfo.md)|Restituisce informazioni su una query specificata definito nel database.|  
|[CDaoDatabase::GetQueryTimeout](../Topic/CDaoDatabase::GetQueryTimeout.md)|Restituisce il numero di secondi dopo di che le operazioni di query di database saranno è scaduto.  Aperto su qualsiasi successivo, aggiungere un nuovo, aggiornamento ed eliminazione di modifica e altre operazioni sulle origini dati ODBC \(solo\) come chiamate Execute.|  
|[CDaoDatabase::GetRecordsAffected](../Topic/CDaoDatabase::GetRecordsAffected.md)|Restituisce il numero di record sull'ultimo aggiornamento, modifica, o aggiungere l'operazione o da una chiamata a **Execute**.|  
|[CDaoDatabase::GetRelationCount](../Topic/CDaoDatabase::GetRelationCount.md)|Restituisce il numero delle relazioni definite tra le tabelle del database.|  
|[CDaoDatabase::GetRelationInfo](../Topic/CDaoDatabase::GetRelationInfo.md)|Restituisce informazioni su una relazione specificata definita tra le tabelle del database.|  
|[CDaoDatabase::GetTableDefCount](../Topic/CDaoDatabase::GetTableDefCount.md)|Restituisce il numero di tabelle definito nel database.|  
|[CDaoDatabase::GetTableDefInfo](../Topic/CDaoDatabase::GetTableDefInfo.md)|Restituisce informazioni su una tabella specificata nel database.|  
|[CDaoDatabase::GetVersion](../Topic/CDaoDatabase::GetVersion.md)|Restituisce la versione del motore di database associato al database.|  
|[CDaoDatabase::IsOpen](../Topic/CDaoDatabase::IsOpen.md)|Restituisce diverso da zero se l'oggetto `CDaoDatabase` è attualmente connesso a un database.|  
|[CDaoDatabase::Open](../Topic/CDaoDatabase::Open.md)|Stabilisce una connessione a un database.|  
|[CDaoDatabase::SetQueryTimeout](../Topic/CDaoDatabase::SetQueryTimeout.md)|Imposta il numero di secondi dopo di che le operazioni di query di database \(nelle origini dati ODBC solo\) è scaduto.  Aperto su qualsiasi successivo, aggiungere un nuovo, di aggiornamento e di eliminazione.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoDatabase::m\_pDAODatabase](../Topic/CDaoDatabase::m_pDAODatabase.md)|Un puntatore all'oggetto di database DAO sottostante.|  
|[CDaoDatabase::m\_pWorkspace](../Topic/CDaoDatabase::m_pWorkspace.md)|Un puntatore all'oggetto [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) che contiene il database e definisce lo spazio delle transazioni.|  
  
## Note  
 Per informazioni sui formati di database supportate, vedere la funzione membro [GetName](../Topic/CDaoWorkspace::GetName.md).  È possibile avere più di uno o più oggetti `CDaoDatabase` per volta "in un'area di lavoro specificata," rappresentato da un oggetto [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md).  L'area di lavoro gestisce una raccolta di oggetti di database aperti, chiamare la raccolta di database.  
  
> [!NOTE]
>  Le classi di database DAO MFC sono differenziate dalle classi di database MFC basate su ODBC.  Tutti i nomi delle classi di database DAO dispongono del prefisso "di CDao".  La classe `CDaoDatabase` fornisce un'interfaccia simile a quella della classe [CDatabase](../../mfc/reference/cdatabase-class.md)ODBC.  La differenza principale è che `CDatabase` accede al DBMS con ODBC \(open database connectivity\) e un driver ODBC per il DBMS.  `CDaoDatabase` accede ai dati tramite un oggetto di accesso ai dati \(DAO\) in base al modulo di gestione di database Microsoft Jet.  Le classi MFC basate su DAO risulta in genere più in grado delle classi MFC basate su ODBC, le classi basate su DAO possono accedere ai dati, ad esempio tramite driver ODBC, tramite proprio motore di database.  Le classi basate su DAO supportano le operazioni di Data Definition Language \(DDL\), ad esempio aggiunta di tabelle tramite le classi, senza dover chiamare direttamente le API DAO.  
  
## Utilizzo  
 È possibile creare oggetti di database in modo implicito, quando si creano oggetti recordset.  Ma è anche possibile creare oggetti di database in modo esplicito.  Per utilizzare un database esistente in modo esplicito con `CDaoDatabase`, effettuare una delle operazioni seguenti:  
  
-   Costruisce un oggetto `CDaoDatabase`, passando un puntatore a un oggetto aperto [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md).  
  
-   O costruire un oggetto `CDaoDatabase` senza specificare l'area di lavoro \(MFC crea un oggetto temporaneo dell'area di lavoro\).  
  
 Per creare un nuovo database Microsoft Jet \(.MDB\), costruire un oggetto `CDaoDatabase` e chiamare la funzione membro [Crea](../Topic/CDaoDatabase::Create.md).  Non chiamare **Apri** dopo **Crea**.  
  
 Per aprire un database esistente, costruire un oggetto `CDaoDatabase` e chiamare la funzione membro [Apri](../Topic/CDaoDatabase::Open.md).  
  
 Queste tecniche aggiunge l'oggetto di database DAO a database raccolta dell'area di lavoro e apre una connessione ai dati.  Quando si costruisce oggetti [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md), [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md), o [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) da eseguire nel database collegato, passare ai costruttori per questi oggetti un puntatore all'oggetto `CDaoDatabase`.  Dopo avere utilizzato la connessione, chiamare la funzione membro [Chiudi](../Topic/CDaoDatabase::Close.md) ed eliminare l'oggetto `CDaoDatabase`.  **Chiudi** chiude tutti i recordset che non sia stato chiuso in precedenza.  
  
## Transazioni  
 L'elaborazione delle transazioni di database è concessa a livello di area di lavoro \(vedere le funzioni membro [BeginTrans](../Topic/CDaoWorkspace::BeginTrans.md), [CommitTrans](../Topic/CDaoWorkspace::CommitTrans.md)e [Rollback](../Topic/CDaoWorkspace::Rollback.md) di classe `CDaoWorkspace`.  
  
## Connessioni ODBC  
 La modalità consigliata per l'utilizzo di origini dati ODBC è di collegamento di tabelle esterne a un database Microsoft Jet \(.MDB\).  
  
## Raccolte  
 Ogni database gestisce le proprie raccolte di TableDef, di querydef, di recordset di oggetti e delle relazioni.  La classe `CDaoDatabase` fornisce le funzioni membro per modificare questi oggetti.  
  
> [!NOTE]
>  Gli oggetti vengono archiviati in DAO, non nell'oggetto di database MFC.  MFC fornisce classi per il TableDef, il tra e gli oggetti recordset ma non per gli oggetti della relazione.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CDaoDatabase`  
  
## Requisiti  
 **Header:** afxdao.h  
  
## Vedere anche  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDaoWorkspace Class](../../mfc/reference/cdaoworkspace-class.md)   
 [CDaoRecordset Class](../../mfc/reference/cdaorecordset-class.md)   
 [CDaoTableDef Class](../../mfc/reference/cdaotabledef-class.md)   
 [CDaoQueryDef Class](../../mfc/reference/cdaoquerydef-class.md)   
 [CDatabase Class](../../mfc/reference/cdatabase-class.md)   
 [CDaoException Class](../../mfc/reference/cdaoexception-class.md)