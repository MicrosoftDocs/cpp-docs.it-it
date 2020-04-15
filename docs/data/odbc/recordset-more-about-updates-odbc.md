---
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
ms.openlocfilehash: 955b26137ce976514d84f95f4d819779b93bd78a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368683"
---
# <a name="recordset-more-about-updates-odbc"></a>Recordset: ulteriori informazioni sugli aggiornamenti (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

In questo argomento:

- [In che modo altre operazioni, ad esempio le transazioni, influiscono sugli aggiornamenti.](#_core_how_transactions_affect_updates)

- [Gli aggiornamenti e quelli di altri utenti](#_core_your_updates_and_the_updates_of_other_users).

- [Ulteriori informazioni sulle funzioni membro Update ed Delete](#_core_more_about_update_and_delete).

> [!NOTE]
> Questo argomento si applica agli oggetti derivati da `CRecordset` in cui non è stato implementato il recupero di massa di righe. Se è stato implementato il recupero di massa di righe, alcune delle informazioni non sono valide. Ad esempio, non `AddNew`è `Edit` `Delete`possibile `Update` chiamare le funzioni membro , , , e ; tuttavia, è possibile eseguire le transazioni. Per ulteriori informazioni sul recupero di massa di righe, vedere Recordset: recupero di massa di [record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

## <a name="how-other-operations-affect-updates"></a><a name="_core_how_other_operations_affect_updates"></a>Effetti di altre operazioni sugli aggiornamenti

Gli aggiornamenti sono interessati dalle transazioni in vigore al momento dell'aggiornamento, chiudendo il recordset prima di completare una transazione e scorrendo prima di completare una transazione.

### <a name="how-transactions-affect-updates"></a><a name="_core_how_transactions_affect_updates"></a>Influenza delle transazioni sugli aggiornamenti

Oltre a `AddNew` `Edit`comprendere `Delete` il funzionamento di , e `BeginTrans` `CommitTrans`, `Rollback` è importante comprendere il funzionamento delle funzioni membro , , e [di CDatabase](../../mfc/reference/cdatabase-class.md) con le funzioni di aggiornamento di [CRecordset](../../mfc/reference/crecordset-class.md).

Per impostazione `AddNew` predefinita, le chiamate all'origine dati e `Edit` influiscono immediatamente sull'origine dati quando si chiama `Update`. `Delete`chiamate hanno effetto immediato. Ma è possibile stabilire una transazione ed eseguire un batch di tali chiamate. Gli aggiornamenti non sono permanenti fino a quando non vengono impegnati. Se si cambia idea, è possibile eseguire il rollback della transazione anziché eseguirne il commit.

Per ulteriori informazioni sulle transazioni, vedere [Transazione (ODBC)](../../data/odbc/transaction-odbc.md).

### <a name="how-closing-the-recordset-affects-updates"></a><a name="_core_how_closing_the_recordset_affects_updates"></a>Effetti della chiusura del recordset sugli aggiornamenti

Se si chiude un recordset `CDatabase` o il relativo oggetto associato con una transazione in corso (non è stato chiamato [CDatabase::CommitTrans](../../mfc/reference/cdatabase-class.md#committrans) o [CDatabase::Rollback](../../mfc/reference/cdatabase-class.md#rollback)), viene eseguito automaticamente il rollback della transazione (a meno che il back-end del database non sia il modulo di gestione di database Microsoft Jet).

> [!CAUTION]
> Se si utilizza il modulo di gestione di database Microsoft Jet, la chiusura di un recordset all'interno di una transazione esplicita non comporta il rilascio di una delle righe modificate o dei blocchi inseriti fino al commit o al rollback della transazione esplicita. Si consiglia di aprire e chiudere sempre i recordset all'interno o all'esterno di una transazione Jet esplicita.

### <a name="how-scrolling-affects-updates"></a><a name="_core_how_scrolling_affects_updates"></a>Effetti dello scorrimento sugli aggiornamenti

Quando si [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md) in un recordset, il buffer di modifica viene riempito con ogni nuovo record corrente (il record precedente non viene archiviato per primo). Lo scorrimento salta i record eliminati in precedenza. Se si scorre `AddNew` `Edit` dopo una `Update` `CommitTrans`chiamata `Rollback` o senza chiamare , , o prima, tutte le modifiche andranno perse (senza alcun avviso) quando un nuovo record viene inserito nel buffer di modifica. Il buffer di modifica viene riempito con il record a scorrimento, il record archiviato viene liberato e non viene apportata alcuna modifica all'origine dati. Questo vale `AddNew` sia `Edit`per entrambi che per .

## <a name="your-updates-and-the-updates-of-other-users"></a><a name="_core_your_updates_and_the_updates_of_other_users"></a>Gli aggiornamenti e gli aggiornamenti di altri utenti

Quando si utilizza un recordset per aggiornare i dati, gli aggiornamenti influiscono sugli altri utenti. Analogamente, gli aggiornamenti di altri utenti durante la durata del recordset influiscono sull'utente.

In un ambiente multiutente, altri utenti possono aprire recordset che contengono alcuni degli stessi record selezionati nel recordset. Le modifiche apportate a un record prima di recuperarlo vengono riflesse nel recordset. Poiché i dynaset recuperano un record ogni volta che si scorre su di esso, i dynaset riflettono le modifiche ogni volta che si scorre fino a un record. Gli snapshot recuperano un record la prima volta che si scorre su di esso, in modo che gli snapshot riflettano solo le modifiche che si verificano prima di scorrere il record inizialmente.

I record aggiunti da altri utenti dopo l'apertura del recordset non vengono visualizzati nel recordset a meno che non si riesegui una query. Se il recordset è un dynaset, le modifiche apportate ai record esistenti di altri utenti vengono visualizzate nel dynaset quando si scorre fino al record interessato. Se il recordset è uno snapshot, le modifiche non vengono visualizzate fino a quando non si riesegui una query sullo snapshot. Se si desidera visualizzare i record aggiunti o eliminati da altri utenti nello snapshot o i record aggiunti da altri utenti nel dynaset, chiamare [CRecordset::Requery](../../mfc/reference/crecordset-class.md#requery) per ricompilare il recordset. (Si noti che le eliminazioni di altri utenti vengono visualizzati nel dynaset.) È anche `Requery` possibile chiamare per visualizzare i record aggiunti, ma non per visualizzare le eliminazioni.

> [!TIP]
> Per forzare la memorizzazione nella `MoveLast` cache di un intero snapshot contemporaneamente, chiamare immediatamente dopo aver aperto lo snapshot. Chiamare `MoveFirst` quindi per iniziare a lavorare con i record. `MoveLast`equivale a scorrere tutti i record, ma li recupera tutti in una volta. Si noti, tuttavia, che questo può ridurre le prestazioni e potrebbe non essere necessario per alcuni driver.

Gli effetti dei tuoi aggiornamenti su altri utenti sono simili ai loro effetti su di te.

## <a name="more-about-update-and-delete"></a><a name="_core_more_about_update_and_delete"></a>Ulteriori informazioni su Aggiornamento ed eliminazione

In questa sezione vengono fornite `Update` informazioni `Delete`aggiuntive utili per l'utilizzo e .

### <a name="update-success-and-failure"></a>Aggiornamento riuscito e non riuscito

Se `Update` la modalità ha esito positivo, la `AddNew` modalità o `Edit` termina. Per avviare nuovamente una `AddNew` modalità `Edit` o , chiamare `AddNew` o `Edit`.

Se `Update` ha esito negativo (restituisce FALSE `AddNew` `Edit` o genera un'eccezione), si rimane in o in modalità, a seconda della funzione chiamata per ultima. A quel punto, è possibile eseguire una di queste operazioni:

- Modificare un membro dati `Update` di campo e riprovare.

- Chiamare `AddNew` per reimpostare i membri dati di campo su Null, `Update` impostare i valori dei membri dati di campo e quindi chiamare nuovamente.

- Chiamare `Edit` per ricaricare i valori che erano nel `AddNew` `Edit`recordset prima della prima chiamata a o `Update` , impostare i valori dei membri dati di campo e quindi chiamare nuovamente. Dopo una `Update` chiamata riuscita `AddNew` (tranne dopo una chiamata), i membri dati di campo mantengono i nuovi valori.

- Chiamata `Move` (incluso `Move` con un parametro di AFX_MOVE_REFRESH, o 0), che scarica le modifiche e termina qualsiasi `AddNew` o `Edit` modalità in vigore.

### <a name="update-and-delete"></a>Aggiorna ed elimina

Questa sezione si `Update` `Delete`applica a entrambi e .

In `Update` un'operazione o, `Delete` un solo record deve essere aggiornato. Tale record è il record corrente, che corrisponde ai valori dei dati nei campi del recordset. Se per qualche motivo non è interessato alcun record o sono interessati più record, viene generata un'eccezione contenente uno dei seguenti valori **RETCODE:**

- AFX_SQL_ERROR_NO_ROWS_AFFECTED

- AFX_SQL_ERROR_MULTIPLE_ROWS_AFFECTED

Quando queste eccezioni vengono generate, `AddNew` `Edit` si rimane nello stato `Update` `Delete`o ci si trovava quando è stato chiamato o . Di seguito sono riportati gli scenari più comuni in cui vengono visualizzate queste eccezioni. È più probabile che tu veda:

- AFX_SQL_ERROR_NO_ROWS_AFFECTED quando si utilizza la modalità di blocco ottimistico e un altro utente ha modificato il record in modo da impedire al framework di identificare il record corretto da aggiornare o eliminare.

- AFX_SQL_ERROR_MULTIPLE_ROWS_AFFECTED quando la tabella che si sta aggiornando non dispone di una chiave primaria o di un indice univoco e non si dispone di un numero sufficiente di colonne nel recordset per identificare in modo univoco una riga della tabella.

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: selezione dei record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md)<br/>
[Scambio di campi record (RFX)](../../data/odbc/record-field-exchange-rfx.md)<br/>
[SQL](../../data/odbc/sql.md)<br/>
[Eccezioni: eccezioni di database](../../mfc/exceptions-database-exceptions.md)
