---
title: Struttura CDaoQueryDefInfo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CDaoQueryDefInfo
dev_langs:
- C++
helpviewer_keywords:
- DAO (Data Access Objects), QueryDefs collection
- CDaoQueryDefInfo structure [MFC]
ms.assetid: e20837dc-e78d-4171-a195-1b4075fb5d2a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a31928bc98b8b2fd403f1db40c040357c388b104
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36952287"
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
 *m_strName*  
 Identifica in modo univoco l'oggetto querydef. Per altre informazioni, vedere l'argomento "Proprietà Name" nella Guida di DAO. Chiamare [CDaoQueryDef::GetName](../../mfc/reference/cdaoquerydef-class.md#getname) per recuperare direttamente questa proprietà.  
  
 *m_nType*  
 Un valore che indica il tipo di un oggetto querydef operativo. Il valore può essere uno dei seguenti:  
  
- **dbQSelect** selezionare, ovvero la query Seleziona record.  
  
- **dbQAction** azione, ovvero la query viene spostato o modifica dati ma non restituisce i record.  
  
- **dbQCrosstab** a campi incrociati, ovvero la query restituisce i dati in un formato di foglio di calcolo.  
  
- **dbQDelete** Elimina, la query consente di eliminare un set di righe specificate.  
  
- **dbQUpdate** Update, ovvero la query diventa un set di record.  
  
- **dbQAppend** Append, ovvero la query aggiunge i nuovi record alla fine di una tabella o query.  
  
- **dbQMakeTable** tabella: la query crea una nuova tabella da un oggetto recordset.  
  
- **dbQDDL** definizione dei dati, ovvero la query interessa la struttura delle tabelle o le relative parti.  
  
- **dbQSQLPassThrough** pass-through, l'istruzione SQL viene passata direttamente al database back-end, senza elaborazione intermedia.  
  
- **dbQSetOperation** unione, la query viene creato un oggetto recordset di tipo snapshot che contiene i dati dai record specificati completamente in due o più tabelle con record duplicati rimossi. Per includere i duplicati, aggiungere la parola chiave **tutti** nell'istruzione SQL dell'oggetto querydef.  
  
- **dbQSPTBulk** abbinata **dbQSQLPassThrough** per specificare una query che non restituisce i record.  
  
> [!NOTE]
>  Per creare una query pass-through SQL, non viene impostato il **dbQSQLPassThrough** costante. Ciò viene impostato automaticamente dal motore di database Microsoft Jet quando si crea un oggetto querydef e impostare la proprietà di connessione.  
  
 Per altre informazioni, vedere l'argomento "Proprietà di tipo" nella Guida di DAO.  
  
 *m_dateCreated*  
 Data e ora di che creazione oggetto querydef. Per recuperare direttamente la data di creazione oggetto querydef, chiamare il [GetDateCreated](../../mfc/reference/cdaotabledef-class.md#getdatecreated) funzione membro del `CDaoTableDef` oggetto associato alla tabella. Per ulteriori informazioni, vedere i commenti di seguito. Vedere anche l'argomento "Proprietà DateCreated e LastUpdated" nella Guida di DAO.  
  
 *m_dateLastUpdated*  
 Data e ora dell'ultima modifica apportata all'oggetto querydef. Per recuperare direttamente la data dell'ultimo aggiornamento della tabella, chiamare il [GetDateLastUpdated](../../mfc/reference/cdaoquerydef-class.md#getdatelastupdated) funzione membro di tale oggetto. Per ulteriori informazioni, vedere i commenti di seguito. Vedere l'argomento "Proprietà DateCreated e LastUpdated" nella Guida di DAO.  
  
 *m_bUpdatable*  
 Indica se è possibile apportare modifiche a un oggetto querydef. Se questa proprietà è **TRUE**querydef è aggiornabile; in caso contrario, questo non. Renderli aggiornabili, che definizione di query dell'oggetto querydef può essere modificata. La proprietà di un oggetto querydef aggiornabile è impostata su **TRUE** se la definizione della query può essere aggiornata, anche quando il recordset risulta non è aggiornabile. Per recuperare direttamente questa proprietà, chiamare l'oggetto querydef [CanUpdate](../../mfc/reference/cdaoquerydef-class.md#canupdate) funzione membro. Per altre informazioni, vedere l'argomento "Proprietà aggiornabile" nella Guida di DAO.  
  
 *m_bReturnsRecords*  
 Indica se una query pass-through SQL a un database esterno restituisce i record. Se questa proprietà è **TRUE**, la query restituisce i record. Per recuperare direttamente questa proprietà, chiamare [CDaoQueryDef::GetReturnsRecords](../../mfc/reference/cdaoquerydef-class.md#getreturnsrecords). Non tutte le query pass-through a SQL per i database esterni di restituiscono i record. Ad esempio, un database SQL **aggiornamento** istruzione aggiorna i record senza restituzione dei record, mentre un database SQL **selezionare** istruzione restituire i record. Per altre informazioni, vedere l'argomento "Proprietà Restituisci" nella Guida di DAO.  
  
 *m_strSQL*  
 L'istruzione SQL che definisce la query eseguita da un oggetto querydef. La proprietà SQL contiene l'istruzione SQL che determina come i record sono selezionati, raggruppamento e ordinamento quando si esegue la query. È possibile utilizzare la query per selezionare i record da includere in un oggetto recordset di tipo dynaset o snapshot. È inoltre possibile definire le query di blocco per modificare i dati senza restituzione dei record. È possibile recuperare il valore di questa proprietà chiamando direttamente l'oggetto querydef [GetSQL](../../mfc/reference/cdaoquerydef-class.md#getsql) funzione membro.  
  
 *m_strConnect*  
 Vengono fornite informazioni sull'origine di un database utilizzato in una query pass-through. Queste informazioni sotto forma di una stringa di connessione. Per ulteriori informazioni sulle stringhe di connessione e per informazioni sul recupero direttamente il valore di questa proprietà, vedere la [CDaoDatabase::GetConnect](../../mfc/reference/cdaodatabase-class.md#getconnect) funzione membro.  
  
 *m_nODBCTimeout*  
 Il numero di secondi di che attesa del motore di database Microsoft Jet prima di un errore di timeout si verifica quando viene eseguita una query su un database ODBC. Quando si utilizza un database ODBC, ad esempio Microsoft SQL Server, a causa dell'uso di traffico o elevati in termini di rete del server ODBC potrebbero verificarsi ritardi. Anziché restare in attesa per un periodo illimitato, è possibile specificare il tempo di attesa prima di produrre un errore di gestione Microsoft Jet. Il valore di timeout predefinito è 60 secondi. È possibile recuperare il valore di questa proprietà chiamando direttamente l'oggetto querydef [GetODBCTimeout](../../mfc/reference/cdaoquerydef-class.md#getodbctimeout) funzione membro. Per altre informazioni, vedere l'argomento "Proprietà ODBCTimeout" nella Guida di DAO.  
  
## <a name="remarks"></a>Note  
 L'oggetto querydef è un oggetto della classe [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md). I riferimenti al database primario, secondario e tutti gli sopra indicano la modalità in cui vengono restituite le informazioni per il [funzione membro GetQueryDefInfo](../../mfc/reference/cdaodatabase-class.md#getquerydefinfo) funzione membro nella classe `CDaoDatabase`.  
  
 Le informazioni recuperate dal [CDaoDatabase::GetQueryDefInfo](../../mfc/reference/cdaodatabase-class.md#getquerydefinfo) le funzioni membro vengono archiviate un `CDaoQueryDefInfo` struttura. Chiamare `GetQueryDefInfo` per l'oggetto di database in cui raccolta QueryDefs è archiviato l'oggetto querydef. `CDaoQueryDefInfo` definisce inoltre un `Dump` compila la funzione membro in modalità debug. È possibile utilizzare `Dump` per scaricare il contenuto di un `CDaoQueryDefInfo` oggetto. Classe `CDaoDatabase` fornisce inoltre funzioni membro per accedere direttamente a tutte le proprietà restituite in un `CDaoQueryDefInfo` dell'oggetto, in modo probabilmente raramente è necessario chiamare `GetQueryDefInfo`.  
  
 Quando si aggiunge un nuovo campo o un oggetto parametro per la raccolta di campi o parametri di un oggetto querydef, viene generata un'eccezione se il database sottostante non supporta il tipo di dati specificato per il nuovo oggetto.  
  
 Le impostazioni di data e ora derivano dal computer in cui l'oggetto querydef è stato creato o dell'ultimo aggiornamento. In un ambiente multiutente, gli utenti dovrebbero prendere queste impostazioni direttamente dal file server mediante il **net ora** comando per evitare eventuali discrepanze nelle impostazioni di proprietà DateCreated e LastUpdated.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDaoQueryDef (classe)](../../mfc/reference/cdaoquerydef-class.md)   
 [Classe CDaoDatabase](../../mfc/reference/cdaodatabase-class.md)
