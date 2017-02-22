---
title: "Struttura CDaoTableDefInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDaoTableDefInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDaoTableDefInfo (struttura)"
  - "DAO (Data Access Objects), raccolta TableDefs"
ms.assetid: c01ccebb-5615-434e-883c-4f60eac943dd
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# Struttura CDaoTableDefInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura di `CDaoTableDefInfo` contiene informazioni su un oggetto di così definito per gli oggetti di accesso ai dati \(DAO\).  
  
## Sintassi  
  
```  
  
      struct CDaoTableDefInfo  
{  
   CString m_strName;               // Primary  
   BOOL m_bUpdatable;               // Primary  
   long m_lAttributes;              // Primary  
   COleDateTime m_dateCreated;      // Secondary  
   COleDateTime m_dateLastUpdated;  // Secondary  
   CString m_strSrcTableName;       // Secondary  
   CString m_strConnect;            // Secondary  
   CString m_strValidationRule;     // All  
   CString m_strValidationText;     // All  
   long m_lRecordCount;             // All  
};  
```  
  
#### Parametri  
 `m_strName`  
 In modo univoco assegnare all'oggetto di TableDef.  Per recuperare direttamente il valore di questa proprietà, chiamare la funzione membro di [GetName](../Topic/CDaoTableDef::GetName.md) dell'oggetto di TableDef.  Per ulteriori informazioni, vedere l'argomento "proprietà name" nella Guida di DAO.  
  
 `m_bUpdatable`  
 Indica se le modifiche possono essere apportate alla tabella.  La modalità veloce determinare se una tabella è aggiornabile è di aprire un oggetto di `CDaoTableDef` per la tabella e di chiamare la funzione membro di [CanUpdate](../Topic/CDaoTableDef::CanUpdate.md) dell'oggetto.  `CanUpdate` restituisce sempre diverso da zero \(**TRUE**\) per un oggetto e un 0 appena creata di così \(**FALSE**\) per un oggetto allegato di TableDef.  Un nuovo oggetto così può essere comporta solo a un database per cui l'utente corrente dispone delle autorizzazioni di scrittura.  Se la tabella contiene solo i campi nonupdatable, restituisce 0 di `CanUpdate`.  Quando uno o più campi sono aggiornabili, `CanUpdate` restituisce diverso da zero.  È possibile modificare solo i campi aggiornabili.  Per ulteriori informazioni, vedere l'argomento "proprietà" aggiornabile nella Guida di DAO.  
  
 `m_lAttributes`  
 Specifica le caratteristiche della tabella rappresentata dall'oggetto di TableDef.  Per recuperare attributi correnti di un TableDef, chiamare la funzione membro di [GetAttributes](../Topic/CDaoTableDef::GetAttributes.md).  Il valore restituito può essere una combinazione di queste costanti lunghe mediante il bit per bit \(OR  **&#124;**operatore\)\):  
  
-   **dbAttachExclusive** per i database che utilizzano il modulo di gestione di database Microsoft Jet, indica che la tabella è una tabella collegata aperto in modo esclusivo.  
  
-   **dbAttachSavePWD** per i database che utilizzano il modulo di gestione di database Microsoft Jet, indica che l'id utente e la password della tabella collegata vengono salvati con le informazioni di connessione.  
  
-   **dbSystemObject** indica che la tabella è una tabella di sistema fornita dal modulo di gestione di database Microsoft Jet. \(di sola lettura\).  
  
-   **dbHiddenObject** indica che la tabella è una tabella nascosta fornita dal modulo di gestione di database Microsoft Jet \(per l'utilizzo di gestione temporanea\). \(di sola lettura\).  
  
-   **dbAttachedTable** indica che la tabella viene collegata una tabella da un database non ODBC, ad esempio un database di Paradox.  
  
-   **dbAttachedODBC** indica che la tabella viene collegata una tabella da un database ODBC, quale Microsoft SQL Server.  
  
 `m_dateCreated`  
 La data e l'ora che la tabella è stata creata.  Per recuperare direttamente la data in cui la tabella è stata creata, di chiamare la funzione membro di [GetDateCreated](../Topic/CDaoTableDef::GetDateCreated.md) dell'oggetto di `CDaoTableDef` associato alla tabella.  Vedere le note di seguito per ulteriori informazioni.  Per informazioni correlate, vedere l'argomento "DateCreated, le proprietà di LastUpdated" nella Guida di DAO.  
  
 `m_dateLastUpdated`  
 La data e l'ora della modifica più recente effettuata alla progettazione della tabella.  Per recuperare direttamente la data in cui la tabella è stata aggiornata, di chiamare ultima funzione membro di [GetDateLastUpdated](../Topic/CDaoTableDef::GetDateLastUpdated.md) dell'oggetto di `CDaoTableDef` associato alla tabella.  Vedere le note di seguito per ulteriori informazioni.  Per informazioni correlate, vedere l'argomento "DateCreated, le proprietà di LastUpdated" nella Guida di DAO.  
  
 *m\_strSrcTableName*  
 Specifica il nome di una tabella collegata se presente.  Per recuperare direttamente il nome della tabella di origine, chiamare la funzione membro di [GetSourceTableName](../Topic/CDaoTableDef::GetSourceTableName.md) dell'oggetto di `CDaoTableDef` associato alla tabella.  
  
 `m_strConnect`  
 Vengono fornite informazioni sull'origine di un database aperto.  È possibile controllare la proprietà chiamando la funzione membro di [GetConnect](../Topic/CDaoTableDef::GetConnect.md) dell'oggetto di `CDaoTableDef`.  Per ulteriori informazioni su connettere le stringhe, vedere `GetConnect`.  
  
 `m_strValidationRule`  
 Un valore per la convalida dei dati in così sistema modificati o aggiunte a una tabella.  La convalida è supportata solo per i database che utilizzano il modulo di gestione di database Microsoft Jet.  Per recuperare direttamente la regola di convalida, chiamare la funzione membro di [GetValidationRule](../Topic/CDaoTableDef::GetValidationRule.md) dell'oggetto di `CDaoTableDef` associato alla tabella.  Per informazioni correlate, vedere l'argomento "proprietà di ValidationRule" nella Guida di DAO.  
  
 `m_strValidationText`  
 Un valore che specifica il testo del messaggio che l'applicazione deve essere visualizzato se la regola di convalida specificata dalla proprietà di ValidationRule non viene soddisfatta.  Per informazioni correlate, vedere l'argomento "proprietà di ValidationText" nella Guida di DAO.  
  
 *m\_lRecordCount*  
 Il numero di record eseguito in un oggetto di TableDef.  Questa impostazione delle proprietà è in sola lettura.  Per recuperare direttamente il numero di record, chiamare la funzione membro di [GetRecordCount](../Topic/CDaoTableDef::GetRecordCount.md) dell'oggetto di `CDaoTableDef`.  La documentazione per `GetRecordCount` indica il numero di record ulteriormente.  Si noti che recupera questo conteggio può essere un'operazione dispendiosa in termini di tempo se la tabella contiene molti record.  
  
## Note  
 Il così è un oggetto di classe [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md).  I riferimenti a principale, secondario e a tutti su indicano quali le informazioni restituite dalla funzione membro di [GetTableDefInfo](../Topic/CDaoDatabase::GetTableDefInfo.md) nella classe `CDaoDatabase`.  
  
 Le informazioni recuperate dalla funzione membro di [CDaoDatabase::GetTableDefInfo](../Topic/CDaoDatabase::GetTableDefInfo.md) vengono archiviate in una struttura di `CDaoTableDefInfo`.  Chiamare la funzione membro di `GetTableDefInfo` dell'oggetto di cui `CDaoDatabase` nella raccolta di così l'oggetto di così viene archiviato.  `CDaoTableDefInfo` definisce anche una funzione membro di `Dump` nelle build di debug.  È possibile utilizzare `Dump` per eseguire il dump del contenuto di un oggetto di `CDaoTableDefInfo`.  
  
 Le impostazioni di data e ora sono derivate dal computer su cui la tabella di base è stata creata o ultimo aggiornato.  In un ambiente multiutente, gli utenti devono ottenere queste impostazioni direttamente dal file server per evitare le differenze nelle impostazioni delle proprietà di LastUpdated e di DateCreated.  
  
## Requisiti  
 **Intestazione:** afxdao.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDaoTableDef Class](../../mfc/reference/cdaotabledef-class.md)   
 [CDaoDatabase Class](../../mfc/reference/cdaodatabase-class.md)   
 [CDaoTableDef::CanUpdate](../Topic/CDaoTableDef::CanUpdate.md)   
 [CDaoTableDef::GetAttributes](../Topic/CDaoTableDef::GetAttributes.md)   
 [CDaoTableDef::GetDateCreated](../Topic/CDaoTableDef::GetDateCreated.md)   
 [CDaoTableDef::GetDateLastUpdated](../Topic/CDaoTableDef::GetDateLastUpdated.md)   
 [CDaoTableDef::GetRecordCount](../Topic/CDaoTableDef::GetRecordCount.md)   
 [CDaoTableDef::GetSourceTableName](../Topic/CDaoTableDef::GetSourceTableName.md)   
 [CDaoTableDef::GetValidationRule](../Topic/CDaoTableDef::GetValidationRule.md)   
 [CDaoTableDef::GetValidationText](../Topic/CDaoTableDef::GetValidationText.md)