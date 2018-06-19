---
title: 'Recordset: Ulteriori informazioni su aggiornamenti (ODBC) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- records, updating
- transactions, updating recordsets
- ODBC recordsets, updating
- multiuser environments, updates to recordsets
- scrolling, updates to recordsets
- updating recordsets
- recordsets, updating
ms.assetid: 0353a742-d226-4fe2-8881-a7daeffe86cd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: ea46e0462f3763e04ec18ad9bff2b0d3ded1deee
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33098667"
---
# <a name="recordset-more-about-updates-odbc"></a>Recordset: ulteriori informazioni sugli aggiornamenti (ODBC)
Questo argomento si applica alle classi ODBC MFC.  
  
 Questo argomento viene illustrato:  
  
-   [Influenzano gli aggiornamenti da parte di altre operazioni, quali transazioni,](#_core_how_transactions_affect_updates).  
  
-   [Gli aggiornamenti e quelli di altri utenti](#_core_your_updates_and_the_updates_of_other_users).  
  
-   [Altre informazioni sulle funzioni di membro Update e Delete](#_core_more_about_update_and_delete).  
  
> [!NOTE]
>  Questo argomento si applica agli oggetti derivati da `CRecordset` in quale riga bulk recupero non è stato implementato. Se è stato implementato il recupero di massa di righe, alcune delle informazioni non si applica. Ad esempio, non è possibile chiamare il `AddNew`, **modifica**, **eliminare**, e **aggiornamento** funzioni membro; tuttavia, è possibile eseguire le transazioni. Per ulteriori informazioni sulle righe di massa, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
##  <a name="_core_how_other_operations_affect_updates"></a> Influenza gli aggiornamenti delle altre operazioni  
 Gli aggiornamenti sono interessati dalle transazioni attive al momento dell'aggiornamento, chiudendo il recordset prima del completamento di una transazione e scorrendo prima del completamento di una transazione.  
  
###  <a name="_core_how_transactions_affect_updates"></a> Effetti delle transazioni sugli aggiornamenti  
 Oltre a informazioni sulle modalità `AddNew`, **modifica**, e **eliminare** , è importante comprendere come **BeginTrans**, **CommitTrans**, e **Rollback** funzioni membro di [CDatabase](../../mfc/reference/cdatabase-class.md) con le funzioni di aggiornamento di [CRecordset](../../mfc/reference/crecordset-class.md).  
  
 Per impostazione predefinita, le chiamate a `AddNew` e **modifica** influenzano l'origine dati quando si chiama **aggiornamento**. **Eliminare** chiamate avranno effetto immediatamente. Ma è possibile stabilire una transazione ed eseguire un batch di tali chiamate. Gli aggiornamenti non sono permanenti, fino a quando non si esegue il commit. Se si cambia idea, è possibile eseguire il rollback della transazione anziché il commit.  
  
 Per ulteriori informazioni sulle transazioni, vedere [transazione (ODBC)](../../data/odbc/transaction-odbc.md).  
  
###  <a name="_core_how_closing_the_recordset_affects_updates"></a> Chiusura del Recordset influenza gli aggiornamenti  
 Se si chiude un recordset o a essa associati `CDatabase` oggetto, con una transazione in corso (non è stato chiamato [CDatabase:: CommitTrans](../../mfc/reference/cdatabase-class.md#committrans) o [CDatabase:: rollback](../../mfc/reference/cdatabase-class.md#rollback)), viene eseguito il rollback della transazione eseguire il backup automaticamente (a meno che il database back-end è il motore di database Microsoft Jet).  
  
> [!CAUTION]
>  Se si utilizza il motore di database Microsoft Jet, la chiusura di un recordset in una transazione esplicita non comporta il rilascio delle righe che sono state modificate o blocchi che sono stati inclusi fino a quando non è stato eseguito il commit o il rollback della transazione esplicita. È consigliabile aprire e chiudere sempre i recordset all'interno o all'esterno di una transazione esplicita di Jet.  
  
###  <a name="_core_how_scrolling_affects_updates"></a> Lo scorrimento influenza gli aggiornamenti  
 Quando si [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) in un recordset, viene riempito il buffer di modifica con ogni nuovo record corrente (il record precedente non viene prima memorizzato). Scorrimento di record eliminato in precedenza viene ignorata. Se si scorre dopo un `AddNew` o **modifica** senza chiamare **aggiornamento**, **CommitTrans**, o **Rollback** innanzitutto tutte le modifiche Quando un nuovo record viene inserito nel buffer di modifica, vengono perse (senza alcun avviso all'utente). Il record corrente a cui viene riempito il buffer di modifica, il record memorizzato viene liberato e si verifica alcuna modifica nell'origine dati. Si applica a entrambe `AddNew` e **modifica**.  
  
##  <a name="_core_your_updates_and_the_updates_of_other_users"></a> Gli aggiornamenti e gli aggiornamenti di altri utenti  
 Quando si utilizza un recordset per aggiornare i dati, gli aggiornamenti riguardano gli altri utenti. Analogamente, l'impatto degli aggiornamenti di altri utenti nel corso della durata del recordset.  
  
 In un ambiente multiutente, altri utenti possono aprire recordset contenenti alcuni dei record selezionato nel recordset. Per un record prima che il recupero vengono riflesse nel recordset. Poiché i dynaset recuperano un record di ogni volta che si scorre, dynaset riflettono le modifiche ogni volta che un record. Snapshot di recuperare un record la prima volta che si scorre, pertanto riflettono solo le modifiche che si verificano prima dello scorrimento inizialmente il record.  
  
 I record aggiunti da altri utenti dopo l'apertura del recordset non vengono visualizzati nel recordset pertanto riformulare la query. Se il recordset è un dynaset, le modifiche apportate ai record esistenti da altri utenti vengono visualizzati in dynaset durante lo scorrimento di record interessati. Se il recordset è uno snapshot, le modifiche non vengono visualizzate fino a quando non si requery lo snapshot. Se si desidera visualizzare i record aggiunti o eliminati da altri utenti in uno snapshot o i record aggiunti da altri utenti nel dynaset, chiamare [CRecordset:: Requery](../../mfc/reference/crecordset-class.md#requery) per ricompilare il recordset. Si noti che le eliminazioni di altri utenti visualizzati in dynaset. È inoltre possibile chiamare **Requery** per visualizzare i record aggiunti personalmente, ma non per vedere le eliminazioni.  
  
> [!TIP]
>  Per forzare la memorizzazione nella cache di un intero snapshot in una sola volta, chiamare `MoveLast` subito dopo l'apertura dello snapshot. Chiamare quindi **MoveFirst** di iniziare a lavorare con i record. `MoveLast` equivale a scorrimento su tutti i record, ma vengono recuperati tutti contemporaneamente. Si noti tuttavia che questo può ridurre le prestazioni e potrebbe non essere necessario per alcuni driver.  
  
 Gli effetti degli aggiornamenti per altri utenti sono simili per gli effetti per l'utente.  
  
##  <a name="_core_more_about_update_and_delete"></a> Ulteriori informazioni su Update e Delete  
 Questa sezione vengono fornite informazioni aggiuntive per l'utilizzo con **aggiornamento** e **eliminare**.  
  
### <a name="update-success-and-failure"></a>Aggiornamento completate e non riuscite  
 Se **aggiornamento** ha esito positivo, il `AddNew` o **modifica** modalità termina. Per iniziare un `AddNew` o **modifica** modalità nuovamente, chiamare `AddNew` o **modifica**.  
  
 Se **aggiornamento** ha esito negativo (restituisce **FALSE** o genera un'eccezione), si ha sempre `AddNew` o **modifica** modalità, a seconda di quale funzione dell'ultima chiamata. È quindi possibile eseguire una delle operazioni seguenti:  
  
-   Modifica di un membro dati di campo e si tenta di **aggiornamento** nuovamente.  
  
-   Chiamare `AddNew` per reimpostare i membri di dati del campo su Null, impostare i valori dei membri di dati di campo e quindi chiamare **aggiornamento** nuovamente.  
  
-   Chiamare **modifica** per ricaricare i valori contenuti nell'oggetto recordset prima della prima chiamata a `AddNew` o **modifica**, impostare i valori dei membri di dati di campo e quindi chiamare **aggiornare**nuovamente. Dopo una corretta **aggiornamento** chiamare (eccetto dopo un `AddNew` chiamare), i membri di dati di campo mantengono i nuovi valori.  
  
-   Chiamare **spostare** (inclusi **spostare** con un parametro di **AFX_MOVE_REFRESH**, oppure 0), per eliminare tutte le modifiche e terminare qualsiasi `AddNew` o **modifica** modalità attiva.  
  
### <a name="update-and-delete"></a>Update e Delete  
 In questa sezione si applica sia **aggiornamento** e **eliminare**.  
  
 In un **aggiornamento** o **eliminare** operazione, è necessario aggiornare un unico record. Tale record è il record corrente, che corrisponde ai valori dei dati nei campi del recordset. Se per qualche ragione non i record vengono modificati o più di un record è interessato, viene generata un'eccezione contenente uno dei seguenti **RETCODE** valori:  
  
-   **AFX_SQL_ERROR_NO_ROWS_AFFECTED**  
  
-   **AFX_SQL_ERROR_MULTIPLE_ROWS_AFFECTED**  
  
 Quando vengono generate queste eccezioni, rimane il `AddNew` o **modifica** stato in cui trovavano quando è stato chiamato **aggiornamento** o **eliminare**. Ecco gli scenari più comuni in cui sarebbe queste eccezioni. Si è più probabile che vengano visualizzati:  
  
-   **AFX_SQL_ERROR_NO_ROWS_AFFECTED** quando si utilizza la modalità di blocco ottimistico e un altro utente ha modificato il record in modo da impedisce che il framework di identificare il record corretto da aggiornare o eliminare.  
  
-   **AFX_SQL_ERROR_MULTIPLE_ROWS_AFFECTED** quando la tabella che si sta aggiornando non dispone di alcuna chiave primaria o indice univoco e non dispone di colonne insufficiente nel recordset per identificare in modo univoco una riga della tabella.  
  
## <a name="see-also"></a>Vedere anche  
 [Recordset (ODBC)](../../data/odbc/recordset-odbc.md)   
 [Recordset: Selezione dei record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md)   
 [Campi di record (RFX)](../../data/odbc/record-field-exchange-rfx.md)   
 [SQL](../../data/odbc/sql.md)   
 [Eccezioni: eccezioni di database](../../mfc/exceptions-database-exceptions.md)