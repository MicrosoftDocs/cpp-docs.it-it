---
title: "CDatabase Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDatabase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDatabase (classe)"
  - "classi di database [C++], ODBC"
  - "connessioni di database [C++], CDatabase (classe)"
  - "MFC [C++], ODBC"
  - "ODBC [C++], CDatabase (classe)"
  - "ODBC database class"
ms.assetid: bd0de70a-e3c3-4441-bcaa-bbf434426ca8
caps.latest.revision: 24
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDatabase Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta una connessione a un'origine dati, con cui è possibile operare nell'origine dati.  
  
## Sintassi  
  
```  
  
class CDatabase : public CObject  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDatabase::CDatabase](../Topic/CDatabase::CDatabase.md)|Costruisce un oggetto `CDatabase`.  È necessario inizializzare l'oggetto chiamando `OpenEx` o **Apri**.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDatabase::BeginTrans](../Topic/CDatabase::BeginTrans.md)|Inizia "una transazione" — una serie di chiamate reversibili a `AddNew`, a **Modifica**, a **Elimina**e funzioni membro **Aggiorna** di classe `CRecordset` —origine dati collegata.  L'origine dati deve supportare le transazioni per **BeginTrans** di qualsiasi effetto.|  
|[CDatabase::BindParameters](../Topic/CDatabase::BindParameters.md)|Consente ai parametri di correlazione prima di chiamare `CDatabase::ExecuteSQL`.|  
|[CDatabase::Cancel](../Topic/CDatabase::Cancel.md)|Annulla un'operazione asincrona o un processo da un secondo thread.|  
|[CDatabase::CanTransact](../Topic/CDatabase::CanTransact.md)|Restituisce diverso da zero se l'origine dati supporta le transazioni.|  
|[CDatabase::CanUpdate](../Topic/CDatabase::CanUpdate.md)|Restituisce diverso da zero se l'oggetto `CDatabase` è aggiornabile non di sola lettura\).|  
|[CDatabase::Close](../Topic/CDatabase::Close.md)|Chiude la connessione a un'origine dati.|  
|[CDatabase::CommitTrans](../Topic/CDatabase::CommitTrans.md)|Completamento di una transazione avviata da **BeginTrans**.  I controlli della transazione che modificano l'origine dati viene eseguito.|  
|[CDatabase::ExecuteSQL](../Topic/CDatabase::ExecuteSQL.md)|Esegue un'istruzione SQL.  Nessun record di dati restituiti.|  
|[CDatabase::GetBookmarkPersistence](../Topic/CDatabase::GetBookmarkPersistence.md)|Identifica le operazioni con cui i segnalibri persistenti sugli oggetti recordset.|  
|[CDatabase::GetConnect](../Topic/CDatabase::GetConnect.md)|Restituisce la stringa di connessione ODBC utilizzata per connettere l'oggetto `CDatabase` a un'origine dati.|  
|[CDatabase::GetCursorCommitBehavior](../Topic/CDatabase::GetCursorCommitBehavior.md)|Identifica l'effetto del commit di una transazione in un oggetto recordset aperto.|  
|[CDatabase::GetCursorRollbackBehavior](../Topic/CDatabase::GetCursorRollbackBehavior.md)|Identifica l'effetto di annullamento una transazione in un oggetto recordset aperto.|  
|[CDatabase::GetDatabaseName](../Topic/CDatabase::GetDatabaseName.md)|Restituisce l'oggetto attualmente il nome del database in uso.|  
|[CDatabase::IsOpen](../Topic/CDatabase::IsOpen.md)|Restituisce diverso da zero se l'oggetto `CDatabase` è attualmente connesso a un'origine dati.|  
|[CDatabase::OnSetOptions](../Topic/CDatabase::OnSetOptions.md)|Chiamato dal framework per impostare le opzioni di connessione standard.  L'implementazione predefinita di impostare il valore di timeout delle query.  È possibile impostare queste opzioni prima del tempo chiamando `SetQueryTimeout`.|  
|[CDatabase::Open](../Topic/CDatabase::Open.md)|Stabilisce una connessione a un'origine dati \(tramite un driver ODBC\).|  
|[CDatabase::OpenEx](../Topic/CDatabase::OpenEx.md)|Stabilisce una connessione a un'origine dati \(tramite un driver ODBC\).|  
|[CDatabase::Rollback](../Topic/CDatabase::Rollback.md)|Inverte di modifiche apportate durante una transazione corrente.  Restituisce l'oggetto di origine dati allo stato precedente, come definito nella chiamata **BeginTrans**, invariata.|  
|[CDatabase::SetLoginTimeout](../Topic/CDatabase::SetLoginTimeout.md)|Imposta il numero di secondi dopo di che un tentativo di connessione all'origine dati è scaduto.|  
|[CDatabase::SetQueryTimeout](../Topic/CDatabase::SetQueryTimeout.md)|Imposta il numero di secondi dopo di che le operazioni di query di database saranno è scaduto.  Influisce su qualsiasi recordset successivo **Apri**, `AddNew`, **Modifica**e chiamate **Elimina**.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDatabase::m\_hdbc](../Topic/CDatabase::m_hdbc.md)|Handle di connessione ODBC \(open database connectivity\) a un'origine dati.  Tipo **HDBC**.|  
  
## Note  
 Un'origine dati è un'istanza specifica dei dati memorizzati da un sistema di gestione di database \(DBMS\).  Gli esempi includono dBASE di Microsoft SQL Server, Microsoft Access, di Borland e il xBASE.  È possibile avere più di uno o più oggetti `CDatabase` contemporaneamente nell'applicazione.  
  
> [!NOTE]
>  Se si utilizzano gli oggetti di accesso ai dati che \(DAO\) classi anziché le classi ODBC \(open database connectivity\), la classe [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) di utilizzare.  Per ulteriori informazioni, vedere l'articolo [cenni preliminari: La programmazione di database](../../data/data-access-programming-mfc-atl.md).  
  
 Per utilizzare `CDatabase`, costruire un oggetto `CDatabase` e chiamare la funzione membro `OpenEx`.  Verrà aperta una connessione.  Quando si costruisce oggetti `CRecordset` per funzionare nell'origine dati collegata, passare al costruttore del recordset un puntatore all'oggetto `CDatabase`.  Dopo avere utilizzato la connessione, chiamare la funzione membro **Chiudi** ed eliminare l'oggetto `CDatabase`.  **Chiudi** chiude tutti i recordset che non sia stato chiuso in precedenza.  
  
 Per ulteriori informazioni su `CDatabase`, vedere gli articoli [origine dati \(ODBC\)](../../data/odbc/data-source-odbc.md) e [cenni preliminari: La programmazione di database](../../data/data-access-programming-mfc-atl.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CDatabase`  
  
## Requisiti  
 **Header:** afxdb.h  
  
## Vedere anche  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CRecordset Class](../../mfc/reference/crecordset-class.md)