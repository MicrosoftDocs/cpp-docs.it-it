---
description: 'Ulteriori informazioni su: Recordset: ulteriori informazioni sugli aggiornamenti (ODBC)'
title: 'Recordset: ulteriori informazioni sugli aggiornamenti (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- records, updating
- transactions, updating recordsets
- ODBC recordsets, updating
- multiuser environments, updates to recordsets
- scrolling, updates to recordsets
- updating recordsets
- recordsets, updating
ms.assetid: 0353a742-d226-4fe2-8881-a7daeffe86cd
ms.openlocfilehash: 9d125456189828d50f1fbfd4aece00a16790424f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97304441"
---
# <a name="recordset-more-about-updates-odbc"></a>Recordset: ulteriori informazioni sugli aggiornamenti (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

In questo argomento:

- [Come le altre operazioni, ad esempio le transazioni, influiscono sugli aggiornamenti](#_core_how_transactions_affect_updates).

- [Gli aggiornamenti e quelli di altri utenti](#_core_your_updates_and_the_updates_of_other_users).

- [Ulteriori informazioni sulle funzioni membro Update ed Delete](#_core_more_about_update_and_delete).

> [!NOTE]
> Questo argomento si applica agli oggetti derivati da `CRecordset` in cui non è stato implementato il recupero di massa di righe. Se è stato implementato il recupero di righe bulk, alcune informazioni non sono valide. Ad esempio, non è possibile chiamare `AddNew` le `Edit` funzioni membro,, e, ma `Delete` `Update` è possibile eseguire transazioni. Per ulteriori informazioni sul recupero di righe in blocco, vedere [Recordset: recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

## <a name="how-other-operations-affect-updates"></a><a name="_core_how_other_operations_affect_updates"></a> Come le altre operazioni influiscono sugli aggiornamenti

Gli aggiornamenti sono interessati dalle transazioni attive al momento dell'aggiornamento, chiudendo il recordset prima di completare una transazione e scorrendo prima di completare una transazione.

### <a name="how-transactions-affect-updates"></a><a name="_core_how_transactions_affect_updates"></a> Effetti delle transazioni sugli aggiornamenti

Oltre a comprendere come `AddNew` , `Edit` e `Delete` funzionano, è importante comprendere in che modo le `BeginTrans` `CommitTrans` funzioni membro, e `Rollback` di [CDatabase](../../mfc/reference/cdatabase-class.md) funzionano con le funzioni di aggiornamento di [CRecordset](../../mfc/reference/crecordset-class.md).

Per impostazione predefinita, le chiamate a `AddNew` e `Edit` influiscono sull'origine dati immediatamente quando si chiama `Update` . `Delete` le chiamate hanno effetto immediato. È tuttavia possibile stabilire una transazione ed eseguire un batch di chiamate di questo tipo. Gli aggiornamenti non sono permanenti fino a quando non vengono sottomessi a commit. Se si cambia idea, è possibile eseguire il rollback della transazione anziché eseguirne il commit.

Per ulteriori informazioni sulle transazioni, vedere [Transaction (ODBC)](../../data/odbc/transaction-odbc.md).

### <a name="how-closing-the-recordset-affects-updates"></a><a name="_core_how_closing_the_recordset_affects_updates"></a> Effetti della chiusura del recordset sugli aggiornamenti

Se si chiude un recordset o l'oggetto associato `CDatabase` , con una transazione in corso (non è stato chiamato [CDatabase:: CommitTrans](../../mfc/reference/cdatabase-class.md#committrans) o [CDatabase:: rollback](../../mfc/reference/cdatabase-class.md#rollback)), viene eseguito il rollback automatico della transazione, a meno che il back-end del database non sia il motore di database di Microsoft Jet.

> [!CAUTION]
> Se si utilizza il motore di database di Microsoft Jet, la chiusura di un recordset all'interno di una transazione esplicita non comporta il rilascio di alcuna riga modificata o di blocchi posizionati fino a quando non viene eseguito il commit o il rollback della transazione esplicita. Si consiglia di aprire e chiudere sempre i recordset all'interno o all'esterno di una transazione jet esplicita.

### <a name="how-scrolling-affects-updates"></a><a name="_core_how_scrolling_affects_updates"></a> Effetti dello scorrimento sugli aggiornamenti

Quando si esegue il [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) in un recordset, il buffer di modifica viene riempito con ogni nuovo record corrente (il record precedente non viene archiviato per primo). Lo scorrimento ignora i record eliminati precedentemente. Se si scorre dopo una `AddNew` `Edit` chiamata a o senza `Update` chiamare `CommitTrans` prima, o, `Rollback` tutte le modifiche andranno perse (senza alcun avviso) quando un nuovo record viene inserito nel buffer di modifica. Il buffer di modifica viene riempito con il record a scorrimento, il record archiviato viene liberato e non si verifica alcuna modifica nell'origine dati. Questa condizione si applica sia a `AddNew` che a `Edit` .

## <a name="your-updates-and-the-updates-of-other-users"></a><a name="_core_your_updates_and_the_updates_of_other_users"></a> Aggiornamenti e aggiornamenti di altri utenti

Quando si usa un recordset per aggiornare i dati, gli aggiornamenti interessano altri utenti. Analogamente, gli aggiornamenti di altri utenti durante il ciclo di vita del recordset influiscono sull'utente.

In un ambiente multiutente, gli altri utenti possono aprire recordset che contengono alcuni degli stessi record selezionati nel recordset. Le modifiche apportate a un record prima di recuperarle vengono riflesse nel recordset. Poiché i dynaset recuperano un record ogni volta che lo si scorre, i dynaset riflettono le modifiche ogni volta che si scorre in un record. Gli snapshot recuperano un record la prima volta che si scorre, quindi gli snapshot riflettono solo le modifiche che si verificano prima di scorrere inizialmente il record.

I record aggiunti da altri utenti dopo l'apertura del recordset non vengono visualizzati nel recordset, a meno che non si esegua nuovamente la query. Se il recordset è di un dynaset, le modifiche ai record esistenti da parte di altri utenti vengono visualizzate nel dynaset quando si scorre il record interessato. Se il recordset è uno snapshot, le modifiche non vengono visualizzate fino a quando non si esegue nuovamente la query dello snapshot. Se si desidera visualizzare i record aggiunti o eliminati da altri utenti nello snapshot o record aggiunti da altri utenti nel dynaset, chiamare [CRecordset:: Requery](../../mfc/reference/crecordset-class.md#requery) per ricompilare il recordset. Si noti che le eliminazioni di altri utenti vengono visualizzate nel dynaset. È anche possibile chiamare `Requery` per visualizzare i record aggiunti, ma non per visualizzare le eliminazioni.

> [!TIP]
> Per forzare la memorizzazione nella cache di un intero snapshot contemporaneamente, chiamare `MoveLast` immediatamente dopo l'apertura dello snapshot. Chiamare quindi `MoveFirst` per iniziare a lavorare con i record. `MoveLast` equivale allo scorrimento di tutti i record, ma li recupera tutti in una sola volta. Si noti, tuttavia, che questo può ridurre le prestazioni e potrebbe non essere necessario per alcuni driver.

Gli effetti degli aggiornamenti su altri utenti sono simili a quelli dell'utente.

## <a name="more-about-update-and-delete"></a><a name="_core_more_about_update_and_delete"></a> Ulteriori informazioni su Update ed Delete

In questa sezione vengono fornite informazioni aggiuntive per semplificare l'utilizzo di `Update` e `Delete` .

### <a name="update-success-and-failure"></a>Aggiornamento riuscito ed esito negativo

Se ha `Update` esito positivo, la `AddNew` `Edit` modalità o termina. Per iniziare una `AddNew` `Edit` nuova modalità o, chiamare `AddNew` o `Edit` .

Se `Update` ha esito negativo (restituisce false o genera un'eccezione), si rimane in `AddNew` `Edit` modalità o, a seconda della funzione che è stata chiamata per ultima. A quel punto, è possibile eseguire una di queste operazioni:

- Modificare un membro dati campo e riprovare `Update` .

- Chiamare `AddNew` per reimpostare i membri dati del campo su null, impostare i valori dei membri dati del campo e quindi chiamare di `Update` nuovo.

- Chiamare `Edit` per ricaricare i valori presenti nel recordset prima della prima chiamata a `AddNew` o `Edit` , impostare i valori dei membri dati del campo e quindi chiamare di `Update` nuovo. Dopo una chiamata eseguita correttamente `Update` (ad eccezione di una `AddNew` chiamata), i membri dati del campo conservano i nuovi valori.

- Chiamare `Move` (incluso `Move` con un parametro di AFX_MOVE_REFRESH, o 0), che Scarica tutte le modifiche e termina qualsiasi `AddNew` `Edit` modalità o attiva.

### <a name="update-and-delete"></a>Aggiornamento ed eliminazione

Questa sezione si applica sia a `Update` che a `Delete` .

In un' `Update` `Delete` operazione o, deve essere aggiornato un solo record. Tale record è il record corrente, che corrisponde ai valori dei dati nei campi del recordset. Se per qualche motivo non sono interessati record o più record, viene generata un'eccezione contenente uno dei valori di **RETCODE** seguenti:

- AFX_SQL_ERROR_NO_ROWS_AFFECTED

- AFX_SQL_ERROR_MULTIPLE_ROWS_AFFECTED

Quando vengono generate queste eccezioni, si rimane nello `AddNew` stato o in cui `Edit` si trovava quando è stato chiamato `Update` o `Delete` . Di seguito sono riportati gli scenari più comuni in cui verranno visualizzate le eccezioni. È più probabile che venga visualizzato quanto segue:

- AFX_SQL_ERROR_NO_ROWS_AFFECTED quando si utilizza la modalità di blocco ottimistico e un altro utente ha modificato il record in modo da impedire al Framework di identificare il record corretto da aggiornare o eliminare.

- AFX_SQL_ERROR_MULTIPLE_ROWS_AFFECTED quando la tabella da aggiornare non dispone di una chiave primaria o di un indice univoco e non si dispone di un numero sufficiente di colonne nel recordset per identificare in modo univoco una riga della tabella.

## <a name="see-also"></a>Vedi anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: selezione di record in recordset (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md)<br/>
[Trasferimento di campi di record (RFX)](../../data/odbc/record-field-exchange-rfx.md)<br/>
[SQL](../../data/odbc/sql.md)<br/>
[Eccezioni: eccezioni di database](../../mfc/exceptions-database-exceptions.md)
