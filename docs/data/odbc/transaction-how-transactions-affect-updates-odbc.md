---
title: 'Transazione: Effetti delle transazioni sugli aggiornamenti (ODBC) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- transactions, updating recordsets
- ODBC recordsets, transactions
- transactions, rolling back
- CommitTrans method
- Rollback method, ODBC transactions
ms.assetid: 9e00bbf4-e9fb-4332-87fc-ec8ac61b3f68
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 59eb8aecbf2dd2138c8a0469d71364b55fd82774
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="transaction-how-transactions-affect-updates-odbc"></a>Transazione: effetti delle transazioni sugli aggiornamenti (ODBC)
Gli aggiornamenti di [origine dati](../../data/odbc/data-source-odbc.md) gestiti durante le transazioni tramite l'utilizzo di un buffer di modifica (lo stesso metodo utilizzato di fuori di transazioni). Membri dati di campo di un recordset collettivamente fungono da un buffer di modifica che contiene il record corrente, il recordset temporaneamente durante il backup un `AddNew` o **modifica**. Durante un **eliminare** operazione, il record corrente non viene eseguito il in una transazione. Per ulteriori informazioni sui buffer di modifica e la modalità di memorizzazione del record corrente gli aggiornamenti, vedere [Recordset: aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md).  
  
> [!NOTE]
>  Se è stato implementato il recupero di massa di righe, non è possibile chiamare `AddNew`, **modifica**, o **eliminare**. In alternativa, è necessario scrivere funzioni personalizzate per eseguire gli aggiornamenti all'origine dati. Per ulteriori informazioni sulle righe di massa, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Durante le transazioni `AddNew`, **modifica**, e **eliminare** operazioni possono essere eseguito il commit o rollback. Gli effetti di **CommitTrans** e **Rollback** potrebbe causare il record corrente non è possibile ripristinare nel buffer di modifica. Per assicurarsi che il record corrente è stato ripristinato correttamente, è importante comprendere come **CommitTrans** e **Rollback** funzioni membro di `CDatabase` con le funzioni di aggiornamento di `CRecordset`.  
  
##  <a name="_core_how_committrans_affects_updates"></a>Effetti CommitTrans sugli aggiornamenti  
 Nella tabella seguente illustra gli effetti di **CommitTrans** nelle transazioni.  
  
### <a name="how-committrans-affects-updates"></a>Effetti CommitTrans sugli aggiornamenti  
  
|Operazione|Stato dell'origine dati|  
|---------------|---------------------------|  
|`AddNew`e **aggiornamento**e quindi **CommitTrans**|Nuovo record vengono aggiunti all'origine dati.|  
|`AddNew`(senza **aggiornamento**), quindi **CommitTrans**|Nuovo record viene persa. Record non è stato aggiunto all'origine dati.|  
|**Modifica** e **aggiornamento**e quindi **CommitTrans**|Modifiche vengono applicate all'origine dati.|  
|**Modifica** (senza **aggiornamento**), quindi **CommitTrans**|Modifiche al record vengono perse. Record non subisce modifiche nell'origine dati.|  
|**Eliminare** quindi **CommitTrans**|Record eliminati dall'origine dati.|  
  
##  <a name="_core_how_rollback_affects_updates"></a>La modalità di Rollback sulle transazioni  
 Nella tabella seguente illustra gli effetti di **Rollback** nelle transazioni.  
  
### <a name="how-rollback-affects-transactions"></a>La modalità di Rollback sulle transazioni  
  
|Operazione|Stato del record corrente|È inoltre necessario|Stato dell'origine dati|  
|---------------|------------------------------|-------------------|---------------------------|  
|`AddNew`e **aggiornamento**, quindi **Rollback**|Contenuto del record corrente viene archiviato temporaneamente per liberare spazio per nuovi record. Nuovo record viene inserito nel buffer di modifica. Dopo aver **aggiornamento** viene chiamato, corrente record viene ripristinato nel buffer di modifica.||Aggiunta all'origine dati apportata da **aggiornamento** è invertito.|  
|`AddNew`(senza **aggiornamento**), quindi **Rollback**|Contenuto del record corrente viene archiviato temporaneamente per liberare spazio per nuovi record. Modificare il buffer contiene il nuovo record.|Chiamare `AddNew` nuovamente per ripristinare il buffer di modifica per un nuovo record vuoto. O chiamare **spostare**(0) per ripristinare i valori precedenti nel buffer di modifica.|Poiché **aggiornamento** non è stato chiamato, nessuna modifica apportata all'origine dati.|  
|**Modifica** e **aggiornamento**, quindi **Rollback**|Una versione non modificata del record corrente verrà archiviata temporaneamente. Le modifiche sono apportate al contenuto del buffer di modifica. Dopo aver **aggiornamento** viene chiamato, il non modificato il record di versione è ancora memorizzata temporaneamente.|*Dynaset*: scorrere oltre il record corrente, quindi tornare indietro per ripristinare la versione non modificata del record nel buffer di modifica.<br /><br /> *Snapshot*: chiamare **Requery** per aggiornare il recordset dall'origine dati.|Modifiche nell'origine dati apportata da **aggiornamento** sono invertiti.|  
|**Modifica** (senza **aggiornamento**), quindi **Rollback**|Una versione non modificata del record corrente verrà archiviata temporaneamente. Le modifiche sono apportate al contenuto del buffer di modifica.|Chiamare **modifica** nuovamente per ripristinare la versione non modificata del record nel buffer di modifica.|Poiché **aggiornamento** non è stato chiamato, nessuna modifica apportata all'origine dati.|  
|**Eliminare** quindi **Rollback**|Contenuto del record corrente viene eliminato.|Chiamare **Requery** per ripristinare il contenuto del record corrente dall'origine dati.|L'eliminazione dei dati dall'origine dati è invertita.|  
  
## <a name="see-also"></a>Vedere anche  
 [Transazione (ODBC)](../../data/odbc/transaction-odbc.md)   
 [Transazione (ODBC)](../../data/odbc/transaction-odbc.md)   
 [Transazione: Esecuzione di una transazione in un Recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md)   
 [CDatabase (classe)](../../mfc/reference/cdatabase-class.md)   
 [Classe CRecordset](../../mfc/reference/crecordset-class.md)