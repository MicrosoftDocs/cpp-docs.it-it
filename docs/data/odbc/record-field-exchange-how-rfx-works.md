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
ms.openlocfilehash: 903acf4f55fb2708f4998a2babf3f143c895429b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367164"
---
# <a name="record-field-exchange-how-rfx-works"></a>Trasferimento di campi di record: funzionamento di RFX

In questo argomento viene illustrato il processo Di rifx. Questo è un argomento avanzato che copre:

- [RFX e il recordset](#_core_rfx_and_the_recordset)

- [Processo RFX](#_core_the_record_field_exchange_process)

> [!NOTE]
> Questo argomento si applica alle classi derivate da `CRecordset` in cui non è stato implementato il recupero di massa di righe. Se si usa il recupero di massa di righe, viene implementato il trasferimento di massa di campi di record (RFX di massa). RFX di massa è simile a RFX. Per informazioni sulle differenze, vedere [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

## <a name="rfx-and-the-recordset"></a><a name="_core_rfx_and_the_recordset"></a>RFX e il recordset

I membri dati di campo dell'oggetto recordset, messi insieme, costituiscono un buffer di modifica che contiene le colonne selezionate di un record. Quando il recordset viene aperto per la prima volta e sta per leggere il primo record, RFX associa (associa) ogni colonna selezionata all'indirizzo del membro dati di campo appropriato. Quando il recordset aggiorna un record, RFX chiama le funzioni dell'API ODBC per inviare un'istruzione SQL **UPDATE** o **INSERT** al driver. RFX utilizza la conoscenza dei membri dati di campo per specificare le colonne da scrivere.

Il framework esegue il backup del buffer di modifica in determinate fasi in modo da poter ripristinare il contenuto, se necessario. RFX esegue il backup del buffer di modifica prima di aggiungere un nuovo record e prima di modificare un record esistente. Ripristina il buffer di modifica in alcuni casi, ad esempio dopo una `Update` chiamata successiva `AddNew`a . Il buffer di modifica non viene ripristinato se si abbandona un buffer `Update`di modifica appena modificato, ad esempio passando a un altro record prima di chiamare .

Oltre allo scambio di dati tra l'origine dati e i membri dati di campo del recordset, RFX gestisce i parametri di associazione. Quando il recordset viene aperto, tutti i membri dati di parametro sono `CRecordset::Open` associati nell'ordine dei segnaposto "?" nell'istruzione SQL che costruisce. Per ulteriori informazioni, vedere [Recordset: applicazione di parametri a un recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).

L'override della `DoFieldExchange` classe recordset esegue tutto il lavoro, spostando i dati in entrambe le direzioni. Analogamente allo scambio di dati della finestra di dialogo (DDX), RFX richiede informazioni sui membri dati della classe. La procedura guidata fornisce le informazioni necessarie `DoFieldExchange` scrivendo automaticamente un'implementazione specifica del recordset, in base ai nomi dei membri dati di campo e ai tipi di dati specificati con la procedura guidata.

## <a name="record-field-exchange-process"></a><a name="_core_the_record_field_exchange_process"></a>Processo di scambio dei campi di record

In questa sezione viene descritta la sequenza degli eventi RFX all'apertura di un oggetto recordset e durante l'aggiunta, l'aggiornamento e l'eliminazione di record. La tabella [Sequenza delle operazioni RFX durante l'apertura dell'oggetto](#_core_sequence_of_rfx_operations_during_recordset_open) e la [tabella Sequenza delle operazioni RFX durante lo scorrimento](#_core_sequence_of_rfx_operations_during_scrolling) in questo argomento mostrano il processo come RFX elabora un `Move` comando nel recordset e come RFX gestisce un aggiornamento. Durante questi processi, [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) viene chiamato per eseguire molte operazioni diverse. Il `m_nOperation` membro dati dell'oggetto [CFieldExchange](../../mfc/reference/cfieldexchange-class.md) determina l'operazione richiesta. Potrebbe essere utile leggere [Recordset: Come Recordset Seleziona record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md) e [Recordset: Come Recordset Aggiorna record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md) prima di leggere questo materiale.

### <a name="rfx-initial-binding-of-columns-and-parameters"></a><a name="_mfc_rfx.3a_.initial_binding_of_columns_and_parameters"></a>RFX: associazione iniziale di colonne e parametri

Le seguenti attività RFX si verificano, nell'ordine indicato, quando si chiama la funzione membro [Open](../../mfc/reference/crecordset-class.md#open) di un oggetto recordset:

- Se il recordset dispone di membri `DoFieldExchange` dati di parametro, il framework chiama per associare i parametri ai segnaposto di parametro nella stringa dell'istruzione SQL del recordset. Per ogni segnaposto trovato nell'istruzione **SELECT** viene utilizzata una rappresentazione dipendente dal tipo di dati del valore del parametro. Ciò si verifica dopo la preparazione dell'istruzione SQL, ma prima che venga eseguita. Per informazioni sulla preparazione `::SQLPrepare` delle istruzioni, vedere la funzione in ODBC *Programmer's Reference*.

- Il framework `DoFieldExchange` chiama una seconda volta per associare i valori delle colonne selezionate ai membri dati di campo corrispondenti nel recordset. In questo modo l'oggetto recordset viene stabilito come buffer di modifica contenente le colonne del primo record.

- Il recordset esegue l'istruzione SQL e l'origine dati seleziona il primo record. Le colonne del record vengono caricate nei membri dati di campo del recordset.

Nella tabella seguente viene illustrata la sequenza delle operazioni RFX quando si apre un recordset.

### <a name="sequence-of-rfx-operations-during-recordset-open"></a><a name="_core_sequence_of_rfx_operations_during_recordset_open"></a>Sequenza di operazioni RFX durante l'apertura dell'oggetto RecordsetSequence of RFX Operations During Recordset Open

|L'operazione|Operazione DoFieldExchange|Operazione database/SQL|
|--------------------|-------------------------------|-----------------------------|
|1. Aprire il recordset.|||
||2. Creare un'istruzione SQL.||
|||3. Inviare il codice SQL.|
||4. Associare i membri dati dei parametri.||
||5. Associare i membri dati di campo alle colonne.||
|||6. ODBC esegue lo spostamento e inserisce i dati.|
||7. Correggere i dati per i c.||

I recordset utilizzano l'esecuzione preparata di ODBC per consentire una rapida riesecuzione di query con la stessa istruzione SQL. Per ulteriori informazioni sull'esecuzione preparata, vedere ODBC SDK *Programmer's Reference* in MSDN Library.

### <a name="rfx-scrolling"></a><a name="_mfc_rfx.3a_.scrolling"></a>RFX: scorrimento

Quando si scorre da un record `DoFieldExchange` a un altro, il framework chiama per sostituire i valori precedentemente memorizzati nei membri dati di campo con i valori per il nuovo record.

Nella tabella seguente viene illustrata la sequenza delle operazioni RFX quando l'utente si sposta da un record all'altro.

### <a name="sequence-of-rfx-operations-during-scrolling"></a><a name="_core_sequence_of_rfx_operations_during_scrolling"></a>Sequenza di operazioni RFX durante lo scorrimentoSequence of RFX Operations During Scrolling

|L'operazione|Operazione DoFieldExchange|Operazione database/SQL|
|--------------------|-------------------------------|-----------------------------|
|1. `MoveNext` Chiamare o una delle altre funzioni Move.|||
|||2. ODBC esegue lo spostamento e inserisce i dati.|
||3. Correggere i dati per i c.||

### <a name="rfx-adding-new-records-and-editing-existing-records"></a><a name="_mfc_rfx.3a_.adding_new_records_and_editing_existing_records"></a>RFX: Aggiunta di nuovi record e modifica di record esistenti

Se si aggiunge un nuovo record, il recordset funge da buffer di modifica per compilare il contenuto del nuovo record. Come per l'aggiunta di record, la modifica dei record comporta la modifica dei valori dei membri dati di campo del recordset. Dal punto di vista di RFX, la sequenza è la seguente:

1. La chiamata alla funzione membro [AddNew](../../mfc/reference/crecordset-class.md#addnew) o [Edit](../../mfc/reference/crecordset-class.md#edit) del recordset fa sì che RFX memorizzi il buffer di modifica corrente in modo che possa essere ripristinato in un secondo momento.

1. `AddNew`oppure `Edit` prepara i campi nel buffer di modifica in modo che RFX possa rilevare i membri dati di campo modificati.

   Poiché un nuovo record non ha valori `AddNew` precedenti con cui confrontare quelli nuovi, imposta il valore di ogni membro dati di campo su un valore PSEUDO_NULL. Successivamente, quando `Update`si chiama , RFX confronta il valore di ogni membro dati con il valore PSEUDO_NULL. Se c'è una differenza, il membro dati è stato impostato. (PSEUDO_NULL non è la stessa di una colonna di record con un valore Null true né è uno di questi è lo stesso di C , NULL.)

   A `Update` differenza `AddNew`della `Update` chiamata `Edit` per , la chiamata per confronta i valori aggiornati con i valori memorizzati in precedenza anziché l'utilizzo di PSEUDO_NULL. La differenza `AddNew` è che non ha valori memorizzati in precedenza per il confronto.

1. Impostare direttamente i valori dei membri dati di campo di cui si desidera modificare i valori o che si desidera compilare per un nuovo record. Ciò può `SetFieldNull`includere la chiamata a .

1. La chiamata a [Update](../../mfc/reference/crecordset-class.md#update) controlla i membri dati di campo modificati, come descritto nel passaggio 2 (vedere la tabella [Sequenza di operazioni RFX durante lo scorrimento](#_core_sequence_of_rfx_operations_during_scrolling)). Se nessuno è `Update` stato modificato, restituisce 0. Se alcuni membri dati `Update` di campo sono stati modificati, prepara ed esegue un'istruzione SQL **INSERT** che contiene i valori per tutti i campi aggiornati nel record.

1. For `AddNew` `Update` , conclude ripristinando i valori precedentemente memorizzati `AddNew` del record corrente prima della chiamata. Per `Edit`, i nuovi valori modificati rimangono attivi.

Nella tabella seguente viene illustrata la sequenza delle operazioni RFX quando si aggiunge un nuovo record o si modifica un record esistente.

### <a name="sequence-of-rfx-operations-during-addnew-and-edit"></a>Sequenza di operazioni RFX durante AddNew e Edit

|L'operazione|Operazione DoFieldExchange|Operazione database/SQL|
|--------------------|-------------------------------|-----------------------------|
|1. `AddNew` Chiamare `Edit`o .|||
||2. Eseguire il backup del buffer di modifica.||
||3. `AddNew`Per , contrassegnare i membri dati di campo come "puliti" e Null.||
|4. Assegnare valori ai membri dati del campo del recordset.|||
|5. `Update`Chiamare .|||
||6. Verificare la presenza di campi modificati.||
||7. Creare un'istruzione SQL `Edit` **INSERT** per `AddNew` o **un'istruzione UPDATE** per .||
|||8. Inviare il codice SQL.|
||9. `AddNew`Per , ripristinare il buffer di modifica al contenuto di cui è stato eseguito il backup. Per `Edit`, eliminare il backup.||

### <a name="rfx-deleting-existing-records"></a>RFX: eliminazione di record esistenti

Quando si elimina un record, RFX imposta tutti i campi su NULL come promemoria che il record viene eliminato ed è necessario spostarlo. Non sono necessarie altre informazioni sulla sequenza RFX.

## <a name="see-also"></a>Vedere anche

[Scambio di campi record (RFX)](../../data/odbc/record-field-exchange-rfx.md)<br/>
[Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)<br/>
[Macro, funzioni globali e variabili globali](../../mfc/reference/mfc-macros-and-globals.md)<br/>
[Classe CFieldExchange](../../mfc/reference/cfieldexchange-class.md)<br/>
[CRecordset::DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange)
