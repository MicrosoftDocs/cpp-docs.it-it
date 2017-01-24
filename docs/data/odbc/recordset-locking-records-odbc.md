---
title: "Recordset: blocco dei record (ODBC) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "dati [C++], blocco"
  - "blocchi [C++], recordset"
  - "ODBC (recordset) [C++], blocco di record"
  - "blocco ottimistico"
  - "blocco ottimistico, ODBC"
  - "blocco pessimistico in ODBC"
  - "recordset [C++], blocco di record"
ms.assetid: 8fe8fcfe-b55a-41a8-9136-94a7cd1e4806
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Recordset: blocco dei record (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'argomento è relativo alle classi ODBC MFC.  
  
 In questo argomento vengono fornite informazioni su:  
  
-   [Modalità di blocco dei record](#_core_record.2d.locking_modes).  
  
-   [Blocco dei record nel recordset](#_core_locking_records_in_your_recordset).  
  
 Quando si utilizza un recordset per aggiornare un record nell'origine dati, è possibile che l'applicazione blocchi il record per non consentire ad altri utenti di aggiornarlo nello stesso momento.  Lo stato di un record aggiornato da due utenti contemporaneamente non è definito, a meno che il sistema non garantisca l'impossibilità da parte di due utenti di aggiornare un record contemporaneamente.  
  
> [!NOTE]
>  L'argomento è relativo agli oggetti derivati da `CRecordset` per cui il recupero di massa di righe non è ancora stato implementato.  Se si implementa il recupero di massa di righe, alcune delle informazioni riportate in questo argomento non saranno applicabili.  Non è possibile ad esempio chiamare le funzioni membro **Edit** e **Update**.  Per ulteriori informazioni sul recupero di massa di righe, vedere [Recordset: recupero di massa di record \(ODBC\)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
##  <a name="_core_record.2d.locking_modes"></a> Modalità di blocco dei record  
 Le classi di database forniscono due [modalità di blocco dei record](../Topic/CRecordset::SetLockingMode.md):  
  
-   blocco ottimistico \(impostazione predefinita\)  
  
-   blocco pessimistico  
  
 Per aggiornare un record, attenersi alla procedura riportata di seguito.  
  
1.  Chiamare dapprima la funzione membro [Edit](../Topic/CRecordset::Edit.md).  
  
2.  Modificare i campi appropriati del record corrente.  
  
3.  Per terminare l'operazione ed eseguire normalmente il commit dell'aggiornamento, chiamare la funzione membro [Update](../Topic/CRecordset::Update.md).  
  
 Il blocco ottimistico consente di bloccare il record nell'origine dati solo durante la chiamata a **Update**.  Se si utilizza il blocco ottimistico in un ambiente multiutente, l'applicazione dovrà gestire una condizione di mancata riuscita della chiamata a **Update**.  Il blocco pessimistico blocca il record non appena si chiama **Edit** e non lo rilascia fino a quando non si chiama **Update**. La mancata riuscita delle operazioni è indicata tramite il meccanismo `CDBException`, non mediante il valore **FALSE** restituito da **Update**.  Il blocco pessimistico comporta una potenziale penalizzazione delle prestazioni per gli altri utenti, in quanto potrebbe essere necessario ritardare l'accesso contemporaneo allo stesso record fino al completamento del processo **Update** dell'applicazione.  
  
##  <a name="_core_locking_records_in_your_recordset"></a> Blocco dei record nel recordset  
 Se si desidera modificare l'impostazione predefinita per la [modalità di blocco](#_core_record.2d.locking_modes) di un oggetto recordset, è necessario modificarla prima di chiamare **Edit**.  
  
#### Per modificare la modalità di blocco corrente per il recordset  
  
1.  Chiamare la funzione membro [SetLockingMode](../Topic/CRecordset::SetLockingMode.md), specificando **CRecordset::pessimistic** o **CRecordset::optimistic**.  
  
 La nuova modalità di blocco continua ad avere effetto fino alla chiusura del recordset o fino a quando non viene modificata nuovamente.  
  
> [!NOTE]
>  Il blocco pessimistico è attualmente supportato da un numero relativamente limitato di driver ODBC.  
  
## Vedere anche  
 [Recordset \(ODBC\)](../../data/odbc/recordset-odbc.md)   
 [Recordset: esecuzione di un join \(ODBC\)](../../data/odbc/recordset-performing-a-join-odbc.md)   
 [Recordset: aggiunta, aggiornamento ed eliminazione di record \(ODBC\)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md)