---
title: 'Recordset: Blocco dei record (ODBC) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- locks [C++], recordsets
- optimistic locking
- pessimistic locking in ODBC
- recordsets [C++], locking records
- optimistic locking, ODBC
- ODBC recordsets [C++], locking records
- data [C++], locking
ms.assetid: 8fe8fcfe-b55a-41a8-9136-94a7cd1e4806
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 76d7ab2df01e485ffff70120609227b9fbae6ac5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="recordset-locking-records-odbc"></a>Recordset: blocco dei record (ODBC)
Questo argomento si applica alle classi ODBC MFC.  
  
 Questo argomento viene illustrato:  
  
-   [I tipi di blocco dei record disponibili](#_core_record.2d.locking_modes).  
  
-   [Blocco dei record del recordset durante gli aggiornamenti](#_core_locking_records_in_your_recordset).  
  
 Quando si utilizza un recordset per aggiornare un record nell'origine dati, l'applicazione può bloccare il record in modo da nessun altro utente può aggiornare il record contemporaneamente. Lo stato di un record aggiornato da due utenti allo stesso tempo è definito, a meno che il sistema in grado di garantire che due utenti non è possibile aggiornare un record contemporaneamente.  
  
> [!NOTE]
>  Questo argomento si applica agli oggetti derivati da `CRecordset` in quale riga bulk recupero non è stato implementato. Se è stato implementato il recupero di massa di righe, alcune delle informazioni non si applica. Ad esempio, non è possibile chiamare il **modifica** e **aggiornamento** funzioni membro. Per ulteriori informazioni sulle righe di massa, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
##  <a name="_core_record.2d.locking_modes"></a>Modalità di blocco dei record  
 Le classi di database forniscono due [modalità di blocco dei record](../../mfc/reference/crecordset-class.md#setlockingmode):  
  
-   (Predefinito) di blocco ottimistico  
  
-   blocco pessimistico  
  
 Aggiornamento di un record si svolge in tre passaggi:  
  
1.  Per avviare l'operazione, chiamare il [modifica](../../mfc/reference/crecordset-class.md#edit) funzione membro.  
  
2.  Modificare i campi appropriati del record corrente.  
  
3.  Per terminare l'operazione ed eseguire il commit in genere l'aggiornamento, chiamando la [aggiornare](../../mfc/reference/crecordset-class.md#update) funzione membro.  
  
 Blocco ottimistico blocca il record nell'origine dati solo durante la **aggiornamento** chiamare. Se si utilizza il blocco ottimistico in un ambiente multiutente, l'applicazione deve gestire un **aggiornamento** condizione di errore. Blocco pessimistico blocca il record appena chiama **modifica** e lo rilascia finché non verrà chiamata **aggiornamento** (errori sono indicati tramite il `CDBException` meccanismo, non da un valore di **FALSE** restituito da **aggiornamento**). Blocco pessimistico comporta una riduzione delle prestazioni potenziali di altri utenti, perché l'accesso simultaneo allo stesso record potrebbe essere necessario attendere fino al completamento di un'applicazione **aggiornamento** processo.  
  
##  <a name="_core_locking_records_in_your_recordset"></a>Blocco dei record del recordset  
 Se si desidera modificare un oggetto recordset [la modalità di blocco](#_core_record.2d.locking_modes) da quello predefinito, è necessario modificare la modalità prima di chiamare **modifica**.  
  
#### <a name="to-change-the-current-locking-mode-for-your-recordset"></a>Per modificare la modalità di blocco corrente per il recordset  
  
1.  Chiamare il [SetLockingMode](../../mfc/reference/crecordset-class.md#setlockingmode) funzione membro, specificando **CRecordset:: pessimistic** o **CRecordset:: optimistic**.  
  
 La nuova modalità di blocco rimane attiva fino a quando non si modificherà nuovamente o viene chiuso il recordset.  
  
> [!NOTE]
>  Un numero relativamente basso di driver ODBC supporta attualmente il blocco pessimistico.  
  
## <a name="see-also"></a>Vedere anche  
 [Recordset (ODBC)](../../data/odbc/recordset-odbc.md)   
 [Recordset: Esecuzione di un Join (ODBC)](../../data/odbc/recordset-performing-a-join-odbc.md)   
 [Recordset: aggiunta, aggiornamento ed eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md)