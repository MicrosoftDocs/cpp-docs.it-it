---
title: "Struttura CDaoQueryDefInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDaoQueryDefInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDaoQueryDefInfo (struttura)"
  - "DAO (Data Access Objects), raccolta QueryDefs"
ms.assetid: e20837dc-e78d-4171-a195-1b4075fb5d2a
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# Struttura CDaoQueryDefInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura di `CDaoQueryDefInfo` contiene informazioni su un oggetto di querydef definito per gli oggetti di accesso ai dati \(DAO\).  
  
## Sintassi  
  
```  
  
      struct CDaoQueryDefInfo  
{  
   CString m_strName;               // Primary  
   short m_nType;                   // Primary  
   COleDateTime m_dateCreated;      // Secondary  
   COleDateTime m_dateLastUpdated;  // Secondary  
   BOOL m_bUpdatable;               // Secondary  
   BOOL m_bReturnsRecords;          // Secondary  
   CString m_strSQL;                // All  
   CString m_strConnect;            // All  
   short m_nODBCTimeout;            // All  
};  
```  
  
#### Parametri  
 `m_strName`  
 In modo univoco assegnare all'oggetto di querydef.  Per ulteriori informazioni, vedere l'argomento "proprietà name" nella Guida di DAO.  Chiamata [CDaoQueryDef::GetName](../Topic/CDaoQueryDef::GetName.md) per recuperare direttamente questa proprietà.  
  
 `m_nType`  
 Un valore che indica il tipo di oggetto operativo di querydef.  Il valore può essere:  
  
-   **dbQSelect** selezionato ovvero la query seleziona i record.  
  
-   azione di**dbQAction** ovvero la query si sposta o i dati delle modifiche ma non restituisce record.  
  
-   **dbQCrosstab** Crosstab ovvero la query restituisce i dati in un formato di tipo foglio.  
  
-   eliminazione di**dbQDelete** ovvero la query di eliminazione di un set di righe specificate.  
  
-   aggiornamento di**dbQUpdate** ovvero la query modifica un insieme di record.  
  
-   **dbQAppend** aggiunge ovvero la query aggiunge nuovi record al termine di una tabella o di una query.  
  
-   Fare\- tabella di**dbQMakeTable** ovvero la query viene creata una nuova tabella da un recordset.  
  
-   definizione dei dati di**dbQDDL** ovvero la query danneggia la struttura delle tabelle o delle relative parti.  
  
-   pass\-through di**dbQSQLPassThrough**\- l'istruzione SQL viene passato direttamente al back\-end del database, senza elaborazione intermedia.  
  
-   unione di**dbQSetOperation** ovvero la query crea un oggetto recordset di tipo snapshot che contiene i dati di tutti i record specificati in due o più tabelle con tutti i record duplicati rimossi.  Per importare i duplicati, aggiungere la parola chiave **TUTTI** nell'istruzione SQL di querydef.  
  
-   **dbQSPTBulk** utilizzato con **dbQSQLPassThrough** per specificare una query che non restituisce record.  
  
> [!NOTE]
>  Per creare una query pass\-through SQL, non occorre impostare la costante di **dbQSQLPassThrough**.  Ciò viene impostata automaticamente dal motore di database Microsoft Jet quando si crea un oggetto di querydef e la proprietà della connessione.  
  
 Per ulteriori informazioni, vedere l'argomento "proprietà tipo" nella Guida di DAO.  
  
 `m_dateCreated`  
 La data e l'ora che il querydef è stato creato.  Per recuperare direttamente la data in cui il querydef è stato creato, di chiamare la funzione membro di [GetDateCreated](../Topic/CDaoTableDef::GetDateCreated.md) dell'oggetto di `CDaoTableDef` associato alla tabella.  Vedere le note di seguito per ulteriori informazioni.  Vedere anche l'argomento "DateCreated, le proprietà di LastUpdated" nella Guida di DAO.  
  
 `m_dateLastUpdated`  
 La data e l'ora della modifica più recente effettuata a querydef.  Per recuperare direttamente la data in cui la tabella è stata aggiornata, di chiamare ultima funzione membro di [GetDateLastUpdated](../Topic/CDaoQueryDef::GetDateLastUpdated.md) di querydef.  Vedere le note di seguito per ulteriori informazioni.  E vedere l'argomento "DateCreated, le proprietà di LastUpdated" nella Guida di DAO.  
  
 `m_bUpdatable`  
 Indica se le modifiche possono essere applicate a un oggetto di querydef.  Se questa proprietà è **TRUE**, il querydef è aggiornabile; in caso contrario, non lo è.  I mezzi aggiornabili la definizione della query l'oggetto pulsante querydef possono essere modificati.  La proprietà aggiornabile di un oggetto di querydef è impostata su **TRUE** se la definizione della query può essere aggiornata, anche se il recordset risultante non è aggiornabile.  Per recuperare direttamente questa proprietà, chiamare la funzione membro di [CanUpdate](../Topic/CDaoQueryDef::CanUpdate.md) di querydef.  Per ulteriori informazioni, vedere l'argomento "proprietà" aggiornabile nella Guida di DAO.  
  
 *m\_bReturnsRecords*  
 Indica se una query pass\-through SQL in un database esterno restituisce record.  Se questa proprietà è **TRUE**, la query restituisce record.  Per recuperare direttamente questa proprietà, chiamare [CDaoQueryDef::GetReturnsRecords](../Topic/CDaoQueryDef::GetReturnsRecords.md).  Non tutte le query pass\-through SQL a restituiscono record di database esterni.  Ad esempio, un'istruzione SQL **AGGIORNA** aggiorna i record senza restituire i record, mentre un'istruzione SQL **SELEZIONA** restituisce record.  Per ulteriori informazioni, vedere l'argomento "proprietà di ReturnsRecords" nella Guida di DAO.  
  
 *m\_strSQL*  
 L'istruzione SQL che definisce la query è stata eseguita da un oggetto di querydef.  La proprietà SQL contiene l'istruzione SQL che determina quali record sono selezionati, raggruppati e sono riportati quando si esegue la query.  È possibile utilizzare la query per selezionare i record da includere in un oggetto recordset di tipo dynaset o snapshot.  È inoltre possibile definire query di massa per modificare i dati senza restituire i record.  È possibile recuperare il valore di questa proprietà direttamente chiamando la funzione membro di [GetSQL](../Topic/CDaoQueryDef::GetSQL.md) di querydef.  
  
 `m_strConnect`  
 Vengono fornite informazioni sull'origine di un database utilizzato in una query pass\-through.  Queste informazioni hanno il formato di una stringa di connessione.  Per ulteriori informazioni su connettere le stringhe e per informazioni sul recupero del valore di questa proprietà direttamente, vedere la funzione membro di [CDaoDatabase::GetConnect](../Topic/CDaoDatabase::GetConnect.md).  
  
 *m\_nODBCTimeout*  
 Il numero di secondi che il modulo di gestione di database Microsoft Jet attesa prima che un errore di timeout si verifica quando una query viene eseguito in un database ODBC.  Quando si utilizza un database ODBC, quale Microsoft SQL Server, possono essere ritardi a causa del traffico di rete o di un ingente utilizzo di ODBC.  Anziché aspettare infinito, è possibile specificare la durata il motore di Microsoft Jet prima che generano un errore.  Il valore di timeout predefinito è 60 secondi.  È possibile recuperare il valore di questa proprietà direttamente chiamando la funzione membro di [GetODBCTimeout](../Topic/CDaoQueryDef::GetODBCTimeout.md) di querydef.  Per ulteriori informazioni, vedere l'argomento "proprietà di ODBCTimeout" nella Guida di DAO.  
  
## Note  
 Il querydef è un oggetto di classe [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md).  I riferimenti a principale, secondario e a tutti su indicano quali le informazioni restituite dalla funzione membro di [GetQueryDefInfo](../Topic/CDaoDatabase::GetQueryDefInfo.md) nella classe `CDaoDatabase`.  
  
 Le informazioni recuperate dalla funzione membro di [CDaoDatabase::GetQueryDefInfo](../Topic/CDaoDatabase::GetQueryDefInfo.md) vengono archiviate in una struttura di `CDaoQueryDefInfo`.  Chiamare `GetQueryDefInfo` per l'oggetto di database che nella raccolta di QueryDefs l'oggetto di querydef viene archiviato.  `CDaoQueryDefInfo` definisce anche una funzione membro di `Dump` nelle build di debug.  È possibile utilizzare `Dump` per eseguire il dump del contenuto di un oggetto di `CDaoQueryDefInfo`.  La classe `CDaoDatabase` fornisce inoltre le funzioni membro per accedere direttamente a tutte le proprietà restituite in un oggetto di `CDaoQueryDefInfo`, pertanto sarà probabilmente raramente chiamare `GetQueryDefInfo`.  
  
 Quando si aggiungono un nuovo campo o oggetto Parameter a campi o raccolta di parametri di oggetto di querydef, viene generata un'eccezione se il database sottostante non supporta il tipo di dati specificato per il nuovo oggetto.  
  
 Le impostazioni di data e ora sono derivate dal computer nel quale querydef è stato creato o l'ultimo aggiornamento.  In un ambiente multiutente, gli utenti devono ottenere queste impostazioni direttamente dal file server utilizzando il comando di **net time** evitare le differenze nelle impostazioni delle proprietà di LastUpdated e di DateCreated.  
  
## Requisiti  
 **Intestazione:** afxdao.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDaoQueryDef Class](../../mfc/reference/cdaoquerydef-class.md)   
 [CDaoDatabase Class](../../mfc/reference/cdaodatabase-class.md)