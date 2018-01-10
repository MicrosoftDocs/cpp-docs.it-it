---
title: Struttura CDaoQueryDefInfo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: CDaoQueryDefInfo
dev_langs: C++
helpviewer_keywords:
- DAO (Data Access Objects), QueryDefs collection
- CDaoQueryDefInfo structure [MFC]
ms.assetid: e20837dc-e78d-4171-a195-1b4075fb5d2a
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e476fd8e95b48b59bbb3bae41d9ad84829ca8fa9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cdaoquerydefinfo-structure"></a>Struttura CDaoQueryDefInfo
Il `CDaoQueryDefInfo` struttura contiene informazioni su un oggetto querydef definito per l'accesso oggetti DAO (data).  
  
## <a name="syntax"></a>Sintassi  
  
```  
struct CDaoQueryDefInfo  
{  
    CString m_strName;               // Primary  
    short m_nType;   // Primary  
    COleDateTime m_dateCreated;      // Secondary  
    COleDateTime m_dateLastUpdated;  // Secondary  
    BOOL m_bUpdatable;               // Secondary  
    BOOL m_bReturnsRecords;          // Secondary  
    CString m_strSQL;                // All  
    CString m_strConnect;            // All  
    short m_nODBCTimeout;            // All  
};  
```  
  
#### <a name="parameters"></a>Parametri  
 `m_strName`  
 Identifica in modo univoco l'oggetto querydef. Per ulteriori informazioni, vedere l'argomento "Proprietà di nome" nella Guida di DAO. Chiamare [CDaoQueryDef::GetName](../../mfc/reference/cdaoquerydef-class.md#getname) per recuperare direttamente questa proprietà.  
  
 `m_nType`  
 Un valore che indica il tipo di un oggetto querydef operativo. Il valore può essere uno dei seguenti:  
  
- **dbQSelect** selezionare, la query Seleziona record.  
  
- **dbQAction** azione, la query viene spostato o modifica i dati ma non restituisce i record.  
  
- **dbQCrosstab** a campi incrociati, la query restituisce i dati in un formato di foglio di calcolo.  
  
- **dbQDelete** Elimina, la query consente di eliminare un set di righe specificate.  
  
- **dbQUpdate** aggiornamento, la query diventa un set di record.  
  
- **dbQAppend** accodamento, la query aggiunge nuovi record alla fine di una tabella o query.  
  
- **dbQMakeTable** tabella: la query crea una nuova tabella da un oggetto recordset.  
  
- **dbQDDL** definizione dei dati, la query interessa la struttura delle tabelle o le relative parti.  
  
- **dbQSQLPassThrough** pass-through, l'istruzione SQL viene passata direttamente al database back-end, senza elaborazione intermedia.  
  
- **dbQSetOperation** unione, la query viene creato un oggetto recordset di tipo snapshot contenente dati dai record specificati completamente in due o più tabelle con record duplicati rimossi. Per includere i duplicati, aggiungere la parola chiave **tutti** nell'istruzione SQL dell'oggetto querydef.  
  
- **dbQSPTBulk** utilizzato con **dbQSQLPassThrough** per specificare una query che non restituisce i record.  
  
> [!NOTE]
>  Per creare una query pass-through SQL, non si imposta la **dbQSQLPassThrough** costante. Questo viene impostato automaticamente dal motore di database Microsoft Jet quando si crea un oggetto querydef e impostare la proprietà di connessione.  
  
 Per ulteriori informazioni, vedere l'argomento "Proprietà di tipo" nella Guida di DAO.  
  
 `m_dateCreated`  
 Data e ora di che creazione di tale oggetto. Per recuperare direttamente la data di creazione oggetto querydef, chiamare il [GetDateCreated](../../mfc/reference/cdaotabledef-class.md#getdatecreated) funzione membro del `CDaoTableDef` oggetto associato alla tabella. Per ulteriori informazioni, vedere i commenti di seguito. Vedere anche l'argomento "Proprietà DateCreated e LastUpdated" nella Guida di DAO.  
  
 `m_dateLastUpdated`  
 La data e l'ora della modifica più recente apportata all'oggetto querydef. Per recuperare direttamente la data dell'ultimo aggiornamento della tabella, chiamare il [GetDateLastUpdated](../../mfc/reference/cdaoquerydef-class.md#getdatelastupdated) funzione membro di tale oggetto. Per ulteriori informazioni, vedere i commenti di seguito. Vedere l'argomento "Proprietà DateCreated e LastUpdated" nella Guida di DAO.  
  
 `m_bUpdatable`  
 Indica se è possibile apportare modifiche a un oggetto querydef. Se questa proprietà è **TRUE**querydef è aggiornabile; in caso contrario, non è. Aggiornabile significa che la definizione di query dell'oggetto querydef può essere modificata. La proprietà di un oggetto querydef aggiornabile è impostata su **TRUE** se la definizione della query può essere aggiornata, anche se il recordset risulta non è aggiornabile. Per recuperare direttamente questa proprietà, chiamare l'oggetto querydef [CanUpdate](../../mfc/reference/cdaoquerydef-class.md#canupdate) funzione membro. Per ulteriori informazioni, vedere l'argomento "Proprietà aggiornabile" nella Guida di DAO.  
  
 *m_bReturnsRecords*  
 Indica se una query pass-through SQL a un database esterno restituisce i record. Se questa proprietà è **TRUE**, la query restituisce i record. Per recuperare direttamente questa proprietà, chiamare [CDaoQueryDef::GetReturnsRecords](../../mfc/reference/cdaoquerydef-class.md#getreturnsrecords). Non tutte le query pass-through a SQL per i database esterni di restituiscono i record. Ad esempio, un database SQL **aggiornamento** istruzione aggiorna i record senza restituire alcun record, mentre un database SQL **selezionare** istruzione restituisce i record. Per ulteriori informazioni, vedere l'argomento "Proprietà Restituisci" nella Guida di DAO.  
  
 *m_strSQL*  
 L'istruzione SQL che definisce la query eseguita da un oggetto querydef. La proprietà SQL contiene l'istruzione SQL che determina come vengono selezionati record, raggruppamento e ordinamento quando si esegue la query. È possibile utilizzare la query per selezionare i record da includere in un oggetto recordset di tipo dynaset o snapshot. È inoltre possibile definire le query di massa per modificare i dati senza restituzione di record. È possibile recuperare il valore di questa proprietà chiamando direttamente l'oggetto querydef [GetSQL](../../mfc/reference/cdaoquerydef-class.md#getsql) funzione membro.  
  
 `m_strConnect`  
 Vengono fornite informazioni sull'origine di un database utilizzato in una query pass-through. Queste informazioni sotto forma di una stringa di connessione. Per ulteriori informazioni sulle stringhe di connessione e per informazioni sul recupero direttamente il valore di questa proprietà, vedere il [CDaoDatabase::GetConnect](../../mfc/reference/cdaodatabase-class.md#getconnect) funzione membro.  
  
 *m_nODBCTimeout*  
 Il numero di secondi di che attesa prima di un errore di timeout del motore di database Microsoft Jet si verifica quando viene eseguita una query su un database ODBC. Quando si utilizza un database ODBC, ad esempio Microsoft SQL Server, a causa di rete del traffico o all'uso intensivo del server ODBC potrebbero verificarsi ritardi. Invece di attendere indefinitamente, è possibile specificare il tempo di attesa prima di produrre un errore di gestione Microsoft Jet. Il valore di timeout predefinito è 60 secondi. È possibile recuperare il valore di questa proprietà chiamando direttamente l'oggetto querydef [GetODBCTimeout](../../mfc/reference/cdaoquerydef-class.md#getodbctimeout) funzione membro. Per ulteriori informazioni, vedere l'argomento "Proprietà ODBCTimeout" nella Guida di DAO.  
  
## <a name="remarks"></a>Note  
 L'oggetto querydef è un oggetto della classe [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md). I riferimenti al database primario, secondario e tutti sopra indicano la modalità in cui vengono restituite le informazioni per il [funzione membro GetQueryDefInfo](../../mfc/reference/cdaodatabase-class.md#getquerydefinfo) funzione membro nella classe `CDaoDatabase`.  
  
 Le informazioni recuperate dal [CDaoDatabase::GetQueryDefInfo](../../mfc/reference/cdaodatabase-class.md#getquerydefinfo) le funzioni membro vengono archiviate un `CDaoQueryDefInfo` struttura. Chiamare `GetQueryDefInfo` per l'oggetto di database in cui raccolta QueryDefs è archiviato l'oggetto querydef. `CDaoQueryDefInfo`definisce inoltre un `Dump` compila la funzione membro in modalità debug. È possibile utilizzare `Dump` per scaricare il contenuto di un `CDaoQueryDefInfo` oggetto. Classe `CDaoDatabase` fornisce inoltre funzioni membro per accedere direttamente a tutte le proprietà restituite in un `CDaoQueryDefInfo` dell'oggetto, pertanto è necessario chiamare probabilmente raramente `GetQueryDefInfo`.  
  
 Quando si aggiunge un nuovo campo o un oggetto parametro alla raccolta di parametri o campi di un oggetto querydef, viene generata un'eccezione se il database sottostante non supporta il tipo di dati specificato per il nuovo oggetto.  
  
 Le impostazioni di data e ora derivano dal computer in cui tale oggetto è stato creato o ultimo aggiornamento. In un ambiente multiutente, gli utenti dovrebbero prendere queste impostazioni direttamente dal file server mediante il **net ora** comando per evitare eventuali discrepanze nelle impostazioni delle proprietà DateCreated e LastUpdated.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDaoQueryDef (classe)](../../mfc/reference/cdaoquerydef-class.md)   
 [Classe CDaoDatabase](../../mfc/reference/cdaodatabase-class.md)
