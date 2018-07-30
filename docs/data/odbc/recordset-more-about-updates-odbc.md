---
title: 'Recordset: Informazioni su aggiornamenti (ODBC) | Microsoft Docs'
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
ms.openlocfilehash: 9b781935a43c8ac4626385b5e2ea683f9c481978
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39339627"
---
# <a name="recordset-more-about-updates-odbc"></a>Recordset: ulteriori informazioni sugli aggiornamenti (ODBC)
Questo argomento si applica alle classi ODBC MFC.  
  
 Questo argomento viene illustrato:  
  
-   [Effetti di altre operazioni, quali transazioni, aggiornamenti](#_core_how_transactions_affect_updates).  
  
-   [Gli aggiornamenti e quelli di altri utenti](#_core_your_updates_and_the_updates_of_other_users).  
  
-   [Ulteriori informazioni sulle funzioni membro di aggiornamento ed eliminazione](#_core_more_about_update_and_delete).  
  
> [!NOTE]
>  In questo argomento si applica a oggetti derivati da `CRecordset` in quale riga bulk il recupero non è stato implementato. Se è stato implementato il recupero di righe bulk, alcune informazioni non è applicabile. Ad esempio, non è possibile chiamare il `AddNew`, `Edit`, `Delete`, e `Update` funzioni membro; tuttavia, è possibile eseguire le transazioni. Per altre informazioni sul recupero di righe bulk, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
##  <a name="_core_how_other_operations_affect_updates"></a> Effetti delle altre operazioni sugli aggiornamenti  
 Gli aggiornamenti sono interessati dalle transazioni in vigore al momento dell'aggiornamento, chiudendo il recordset prima di completare una transazione e scorrendo prima di completare una transazione.  
  
###  <a name="_core_how_transactions_affect_updates"></a> Effetti delle transazioni sugli aggiornamenti  
 Oltre a informazioni su come `AddNew`, `Edit`, e `Delete` lavoro, è importante comprendere come il `BeginTrans`, `CommitTrans`, e `Rollback` funzioni membro della [CDatabase](../../mfc/reference/cdatabase-class.md) funzionano con le funzioni di aggiornamento dei [CRecordset](../../mfc/reference/crecordset-class.md).  
  
 Per impostazione predefinita, le chiamate a `AddNew` e `Edit` influenzano l'origine dati immediatamente quando si chiama `Update`. `Delete` le chiamate vengono applicate immediatamente. Ma è possibile stabilire una transazione ed eseguire un batch di tali chiamate. Gli aggiornamenti non sono permanenti, fino a quando non si esegue il commit. Se si cambia idea, è possibile eseguire il rollback della transazione anziché eseguirne il commit.  
  
 Per altre informazioni sulle transazioni, vedere [transazione (ODBC)](../../data/odbc/transaction-odbc.md).  
  
###  <a name="_core_how_closing_the_recordset_affects_updates"></a> Chiusura di Recordset influenza gli aggiornamenti  
 Se si chiude un recordset, o a essa associati `CDatabase` oggetti, con una transazione in corso (non è stato chiamato [CDatabase:: CommitTrans](../../mfc/reference/cdatabase-class.md#committrans) oppure [CDatabase:: rollback](../../mfc/reference/cdatabase-class.md#rollback)), viene eseguito il rollback della transazione eseguire il backup automaticamente (a meno che il back-end di database è il motore di database Microsoft Jet).  
  
> [!CAUTION]
>  Se si usa il motore di database Microsoft Jet, la chiusura di un set di record all'interno di una transazione esplicita non comporta il rilascio delle righe che sono state modificate o blocchi che sono stati inseriti fino a quando non è stato eseguito il commit o il rollback della transazione esplicita. È consigliabile aprire e chiudere sempre i recordset all'interno o all'esterno di una transazione esplicita di Jet.  
  
###  <a name="_core_how_scrolling_affects_updates"></a> Lo scorrimento influenza gli aggiornamenti  
 Quando si [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) in un recordset, viene riempito il buffer di modifica con ogni nuovo record corrente (il record precedente non viene prima memorizzato). Lo scorrimento viene ignorata su record eliminato in precedenza. Se si scorre dopo un' `AddNew` oppure `Edit` senza chiamare `Update`, `CommitTrans`, o `Rollback` in primo luogo, le modifiche vengono perse (senza alcun avviso all'utente) come un nuovo record vengono inseriti nel buffer di modifica. Con il record di scorrimento viene riempito il buffer di modifica, viene liberato il record memorizzato e viene apportata alcuna modifica nell'origine dati. Questo vale per entrambi `AddNew` e `Edit`.  
  
##  <a name="_core_your_updates_and_the_updates_of_other_users"></a> Gli aggiornamenti e gli aggiornamenti di altri utenti  
 Quando si usa un set di record per aggiornare i dati, gli aggiornamenti interessano ad altri utenti. Analogamente, l'impatto degli aggiornamenti di altri utenti nel corso della durata del recordset.  
  
 In un ambiente multiutente, altri utenti possono aprire recordset che contengono alcuni dei record selezionato nel set di record. Modifiche a un record prima che il recupero si riflettono nel set di record. Poiché dynaset recuperare un record di ogni volta che si scorre, dynaset riflette le modifiche ogni volta che si scorre verso un record. Snapshot di recuperare un record la prima volta che lo scorrimento, in modo che gli snapshot riflettano solo le modifiche che si verificano prima dello scorrimento inizialmente il record.  
  
 I record aggiunti da altri utenti dopo l'apertura del recordset non vengono visualizzati nel set di record a meno che non viene ripetuta la query. Se il recordset è di tipo snapshot, le modifiche ai record esistenti da altri utenti vengono visualizzati in dynaset durante lo scorrimento di record interessati. Se il recordset è uno snapshot, le modifiche non vengono visualizzate fino a quando non viene ripetuta la query dello snapshot. Se si desidera visualizzare i record aggiunti o eliminati da altri utenti in uno snapshot o i record aggiunti da altri utenti in dynaset, chiamare [CRecordset:: Requery](../../mfc/reference/crecordset-class.md#requery) per ricompilare il recordset. (Si noti che le eliminazioni ad altri utenti visualizzati in dynaset). È inoltre possibile chiamare `Requery` per visualizzare i record aggiunti personalmente, ma non per vedere le eliminazioni.  
  
> [!TIP]
>  Per forzare la memorizzazione nella cache di un intero snapshot in una sola volta, chiamare `MoveLast` immediatamente dopo l'apertura dello snapshot. Chiamare quindi `MoveFirst` per iniziare a usare i record. `MoveLast` equivalente allo scorrimento di tutti i record, ma li recupera tutti contemporaneamente. Si noti tuttavia che questo può ridurre le prestazioni e potrebbe non essere necessario per alcuni driver.  
  
 Gli effetti degli aggiornamenti sugli altri utenti sono simili per i relativi effetti per l'utente.  
  
##  <a name="_core_more_about_update_and_delete"></a> Informazioni su Update e Delete  
 In questa sezione fornisce informazioni aggiuntive per semplificare l'uso con `Update` e `Delete`.  
  
### <a name="update-success-and-failure"></a>Aggiornamento e non riuscite  
 Se `Update` ha esito positivo, il `AddNew` o `Edit` termini modalità. Per iniziare un' `AddNew` oppure `Edit` modalità anche in questo caso, chiamare `AddNew` o `Edit`.  
  
 Se `Update` ha esito negativo (restituisce FALSE o genera un'eccezione), si rimane nel `AddNew` o `Edit` modalità, a seconda di quale funzione è chiamato per ultimo. È quindi possibile eseguire una delle operazioni seguenti:  
  
-   Modificare un membro dati di campo e riprovare la `Update` nuovamente.  
  
-   Chiamare `AddNew` per reimpostare i membri di dati di campo su Null, impostare i valori dei membri dati del campo e quindi chiamare `Update` nuovamente.  
  
-   Chiamare `Edit` ricaricare i valori che erano del recordset prima della prima chiamata a `AddNew` oppure `Edit`, impostare i valori dei membri dati del campo e quindi chiamare `Update` nuovamente. Dopo il successo `Update` chiamare (eccetto dopo un `AddNew` chiamare), i membri dati dei campi mantengono i nuovi valori.  
  
-   Chiamare `Move` (tra cui `Move` con un parametro di AFX_MOVE_REFRESH o 0), per eliminare tutte le modifiche e terminare qualsiasi `AddNew` o `Edit` modalità attiva.  
  
### <a name="update-and-delete"></a>Update e Delete  
 Questa sezione si applica a entrambe `Update` e `Delete`.  
  
 In un' `Update` o `Delete` operazione, è necessario aggiornare solo un record. Tale record corrisponde al record corrente, che corrisponde ai valori di dati nei campi del set di record. Se per qualche ragione non di record interessati o più di un record è interessato, viene generata un'eccezione contenente uno dei seguenti **RETCODE** valori:  
  
-   AFX_SQL_ERROR_NO_ROWS_AFFECTED  
  
-   AFX_SQL_ERROR_MULTIPLE_ROWS_AFFECTED  
  
 Quando vengono generate queste eccezioni, rimane il `AddNew` oppure `Edit` stato in cui trovavano quando è stato chiamato `Update` o `Delete`. Ecco gli scenari più comuni in cui si vedrebbe queste eccezioni. Si è più probabile visualizzare:  
  
-   AFX_SQL_ERROR_NO_ROWS_AFFECTED quando si usa la modalità di blocco ottimistico e un altro utente ha modificato il record in modo che impedisce il framework di identificare il record corretto per aggiornare o eliminare.  
  
-   AFX_SQL_ERROR_MULTIPLE_ROWS_AFFECTED quando la tabella che si sta aggiornando viene assegnata alcuna chiave primaria o indice univoco e non necessario di colonne insufficiente del recordset per identificare in modo univoco una riga della tabella.  
  
## <a name="see-also"></a>Vedere anche  
 [Recordset (ODBC)](../../data/odbc/recordset-odbc.md)   
 [Recordset: Selezione dei record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md)   
 [Campi di record (RFX)](../../data/odbc/record-field-exchange-rfx.md)   
 [SQL](../../data/odbc/sql.md)   
 [Eccezioni: eccezioni di database](../../mfc/exceptions-database-exceptions.md)