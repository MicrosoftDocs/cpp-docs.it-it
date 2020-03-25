---
title: 'Trasferimento di campi di record: funzionamento di RFX'
ms.date: 11/04/2016
helpviewer_keywords:
- record editing [C++], using RFX
- RFX (ODBC) [C++], updating data in recordsets
- scrolling [C++]
- ODBC [C++], RFX
- data binding [C++], DFX
- scrolling [C++], RFX
- RFX (ODBC) [C++], binding fields and parameters
ms.assetid: e647cacd-62b0-4b80-9e20-b392deca5a88
ms.openlocfilehash: 0661e61bceeedc0dd049ef47f5a0a0b71a8d82ed
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213070"
---
# <a name="record-field-exchange-how-rfx-works"></a>Trasferimento di campi di record: funzionamento di RFX

In questo argomento viene illustrato il processo RFX. Si tratta di un argomento avanzato che illustra:

- [RFX e recordset](#_core_rfx_and_the_recordset)

- [Il processo RFX](#_core_the_record_field_exchange_process)

> [!NOTE]
>  Questo argomento si applica alle classi derivate da `CRecordset` in cui non è stato implementato il recupero di massa di righe. Se si usa il recupero di massa di righe, viene implementato il trasferimento di massa di campi di record (RFX di massa). RFX di massa è simile a RFX. Per comprendere le differenze, vedere [Recordset: recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

##  <a name="rfx-and-the-recordset"></a><a name="_core_rfx_and_the_recordset"></a>RFX e recordset

I membri dati di campo dell'oggetto recordset, combinati, costituiscono un buffer di modifica che include le colonne selezionate di un record. Quando il recordset viene aperto per la prima volta e sta per leggere il primo record, RFX associa (associa) ogni colonna selezionata all'indirizzo del membro dati del campo appropriato. Quando il recordset aggiorna un record, RFX chiama le funzioni API ODBC per inviare un'istruzione SQL **Update** o **Insert** al driver. RFX utilizza la conoscenza dei membri dati del campo per specificare le colonne da scrivere.

Il Framework esegue il backup del buffer di modifica in determinate fasi, in modo da poterne ripristinare il contenuto, se necessario. RFX esegue il backup del buffer di modifica prima di aggiungere un nuovo record e prima di modificare un record esistente. In alcuni casi, il buffer di modifica viene ripristinato, ad esempio, dopo una chiamata di `Update` dopo la `AddNew`. Il buffer di modifica non viene ripristinato se si abbandona un buffer di modifica appena modificato da, ad esempio, passando a un altro record prima di chiamare `Update`.

Oltre a scambiare dati tra l'origine dati e i membri dati di campo del recordset, RFX gestisce i parametri di associazione. Quando il recordset viene aperto, i membri dati dei parametri vengono associati nell'ordine dei segnaposto "?" nell'istruzione SQL che `CRecordset::Open` costrutti. Per ulteriori informazioni, vedere [Recordset: parametrizzazione di un recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).

L'override della classe recordset di `DoFieldExchange` esegue tutte le operazioni, lo stato di trasferimento dei dati in entrambe le direzioni. Analogamente a DDX (Dialog Data Exchange), RFX necessita di informazioni sui membri dati della classe. La procedura guidata fornisce le informazioni necessarie scrivendo un'implementazione specifica del recordset di `DoFieldExchange` per l'utente, in base ai nomi dei membri dati del campo e ai tipi di dati specificati con la procedura guidata.

##  <a name="record-field-exchange-process"></a><a name="_core_the_record_field_exchange_process"></a>Processo di scambio di campi di record

In questa sezione viene descritta la sequenza di eventi RFX durante l'apertura di un oggetto recordset e l'aggiunta, l'aggiornamento e l'eliminazione di record. La [sequenza di tabella delle operazioni RFX durante l'apertura del recordset](#_core_sequence_of_rfx_operations_during_recordset_open) e la [sequenza di tabella delle operazioni RFX durante lo scorrimento](#_core_sequence_of_rfx_operations_during_scrolling) in questo argomento illustrano il processo durante il quale rfx elabora un comando `Move` nel recordset e come RFX gestisce un aggiornamento. Durante questi processi, viene chiamato [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) per eseguire molte operazioni diverse. Il membro dati `m_nOperation` dell'oggetto [CFieldExchange](../../mfc/reference/cfieldexchange-class.md) determina l'operazione richiesta. Potrebbe risultare utile leggere [Recordset: come i recordset selezionano i record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md) e [Recordset: come i recordset aggiornano i record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md) prima di leggere questo materiale.

###  <a name="rfx-initial-binding-of-columns-and-parameters"></a><a name="_mfc_rfx.3a_.initial_binding_of_columns_and_parameters"></a>RFX: associazione iniziale di colonne e parametri

Le attività RFX seguenti si verificano nell'ordine indicato quando si chiama la funzione membro [Open](../../mfc/reference/crecordset-class.md#open) di un oggetto Recordset:

- Se il recordset contiene membri dati di parametro, il Framework chiama `DoFieldExchange` per associare i parametri ai segnaposto dei parametri nella stringa dell'istruzione SQL del recordset. Una rappresentazione dipendente dal tipo di dati del valore del parametro viene utilizzata per ogni segnaposto trovato nell'istruzione **Select** . Questo errore si verifica dopo che l'istruzione SQL è stata preparata, ma prima che venga eseguita. Per informazioni sulla preparazione delle istruzioni, vedere la funzione `::SQLPrepare` in ODBC *Programmer ' s Reference*.

- Il Framework chiama `DoFieldExchange` una seconda volta per associare i valori delle colonne selezionate ai membri dati del campo corrispondenti nel recordset. In questo modo l'oggetto recordset viene stabilito come buffer di modifica contenente le colonne del primo record.

- Il recordset esegue l'istruzione SQL e l'origine dati seleziona il primo record. Le colonne del record vengono caricate nei membri dati di campo del recordset.

Nella tabella seguente viene illustrata la sequenza delle operazioni RFX quando si apre un recordset.

### <a name="sequence-of-rfx-operations-during-recordset-open"></a><a name="_core_sequence_of_rfx_operations_during_recordset_open"></a>Sequenza di operazioni RFX durante l'apertura del recordset

|L'operazione|Operazione DoFieldExchange|Operazione database/SQL|
|--------------------|-------------------------------|-----------------------------|
|1. Aprire il recordset.|||
||2. compilare un'istruzione SQL.||
|||3. inviare il SQL.|
||4. associare i membri dati del parametro.||
||5. associare i membri dati del campo alle colonne.||
|||6. ODBC esegue lo spostamento e compila i dati.|
||7. correggere i dati per C++.||

I recordset utilizzano l'esecuzione preparata di ODBC per consentire una rapida riesecuzione delle query con la stessa istruzione SQL. Per ulteriori informazioni sull'esecuzione preparata, vedere ODBC SDK *Programmer ' s Reference* in MSDN Library.

###  <a name="rfx-scrolling"></a><a name="_mfc_rfx.3a_.scrolling"></a>RFX: scorrimento

Quando si scorre da un record a un altro, il Framework chiama `DoFieldExchange` per sostituire i valori archiviati in precedenza nei membri dati del campo con i valori per il nuovo record.

Nella tabella seguente viene illustrata la sequenza di operazioni RFX quando l'utente passa da un record a un record.

### <a name="sequence-of-rfx-operations-during-scrolling"></a><a name="_core_sequence_of_rfx_operations_during_scrolling"></a>Sequenza di operazioni RFX durante lo scorrimento

|L'operazione|Operazione DoFieldExchange|Operazione database/SQL|
|--------------------|-------------------------------|-----------------------------|
|1. chiamare `MoveNext` o una delle altre funzioni Move.|||
|||2. ODBC esegue lo spostamento e compila i dati.|
||3. correggere i dati per C++.||

###  <a name="rfx-adding-new-records-and-editing-existing-records"></a><a name="_mfc_rfx.3a_.adding_new_records_and_editing_existing_records"></a>RFX: aggiunta di nuovi record e modifica di record esistenti

Se si aggiunge un nuovo record, il recordset funge da buffer di modifica per creare il contenuto del nuovo record. Come per l'aggiunta di record, la modifica dei record comporta la modifica dei valori dei membri dati di campo del recordset. Dal punto di vista di RFX, la sequenza è la seguente:

1. La chiamata alla funzione membro [AddNew](../../mfc/reference/crecordset-class.md#addnew) o [Edit](../../mfc/reference/crecordset-class.md#edit) del recordset fa in modo che RFX memorizzi il buffer di modifica corrente in modo che possa essere ripristinato in un secondo momento.

1. `AddNew` o `Edit` prepara i campi nel buffer di modifica in modo che RFX possa rilevare i membri dati dei campi modificati.

   Poiché un nuovo record non contiene valori precedenti per confrontare quelli nuovi con, `AddNew` imposta il valore di ogni membro dati del campo su un valore PSEUDO_NULL. Successivamente, quando si chiama `Update`, RFX confronta il valore di ogni membro dati con il valore di PSEUDO_NULL. Se è presente una differenza, il membro dati è stato impostato. (PSEUDO_NULL non è uguale a una colonna di record con un valore null true né uno di questi equivale a C++ null).

   A differenza della chiamata `Update` per `AddNew`, la chiamata `Update` per `Edit` Confronta i valori aggiornati con i valori archiviati in precedenza invece di usare PSEUDO_NULL. La differenza è che `AddNew` non dispone di valori archiviati in precedenza per il confronto.

1. È possibile impostare direttamente i valori dei membri dati del campo di cui si desidera modificare i valori o che si desidera compilare per un nuovo record. Questo può includere la chiamata `SetFieldNull`.

1. La chiamata a [Update](../../mfc/reference/crecordset-class.md#update) controlla i membri dati dei campi modificati, come descritto nel passaggio 2 (vedere la [sequenza di tabella delle operazioni RFX durante lo scorrimento](#_core_sequence_of_rfx_operations_during_scrolling)). Se non è stato modificato alcun valore, `Update` restituisce 0. Se alcuni membri dati di campo sono stati modificati, `Update` prepara ed esegue un'istruzione SQL **Insert** che contiene i valori per tutti i campi aggiornati nel record.

1. Per `AddNew`, `Update` termina restituendo i valori archiviati in precedenza del record che era corrente prima della chiamata di `AddNew`. Per `Edit`, i nuovi valori modificati rimangono invariati.

Nella tabella seguente viene illustrata la sequenza delle operazioni RFX quando si aggiunge un nuovo record o si modifica un record esistente.

### <a name="sequence-of-rfx-operations-during-addnew-and-edit"></a>Sequenza di operazioni RFX durante AddNew e Edit

|L'operazione|Operazione DoFieldExchange|Operazione database/SQL|
|--------------------|-------------------------------|-----------------------------|
|1. chiamare `AddNew` o `Edit`.|||
||2. eseguire il backup del buffer di modifica.||
||3. per `AddNew`, contrassegnare i membri dati del campo come "clean" e null.||
|4. assegnare valori ai membri dati di campo del recordset.|||
|5. chiamare `Update`.|||
||6. verificare la presenza di campi modificati.||
||7. compilare l'istruzione SQL **Insert** per `AddNew` o l'istruzione **Update** per `Edit`.||
|||8. inviare il SQL.|
||9. per `AddNew`, ripristinare il buffer di modifica nel contenuto di cui è stato eseguito il backup. Per `Edit`, eliminare il backup.||

### <a name="rfx-deleting-existing-records"></a>RFX: eliminazione di record esistenti

Quando si elimina un record, RFX imposta tutti i campi su NULL come promemoria che il record viene eliminato ed è necessario spostarlo. Non sono necessarie altre informazioni sulla sequenza RFX.

## <a name="see-also"></a>Vedere anche

[Trasferimento di campi di record (RFX)](../../data/odbc/record-field-exchange-rfx.md)<br/>
[Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)<br/>
[Macro, funzioni globali e variabili globali](../../mfc/reference/mfc-macros-and-globals.md)<br/>
[Classe CFieldExchange](../../mfc/reference/cfieldexchange-class.md)<br/>
[CRecordset::D oFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange)
