---
title: 'Record Field Exchange: Funzionamento di RFX'
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
ms.openlocfilehash: 7da9d480f16dcb6bc5ded0a1dff559b1b1ac4b38
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59032677"
---
# <a name="record-field-exchange-how-rfx-works"></a>Record Field Exchange: Funzionamento di RFX

In questo argomento viene illustrato il processo RFX. Si tratta di un'avanzata copertura argomento:

- [RFX e recordset](#_core_rfx_and_the_recordset)

- [Il processo di RFX](#_core_the_record_field_exchange_process)

> [!NOTE]
>  Questo argomento si applica alle classi derivate da `CRecordset` in quale riga bulk il recupero non è stato implementato. Se si usa il recupero di righe bulk, viene implementata exchange di massa di campi di record (RFX di massa). RFX di massa è simile a RFX. Per comprendere le differenze, vedere [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

##  <a name="_core_rfx_and_the_recordset"></a> RFX e Recordset

Membri di dati campo dell'oggetto recordset, complessivamente, costituiscono un buffer di modifica che contiene le colonne selezionate di un record. Quando il recordset prima apertura della finestra e sta per leggere il primo record, RFX associa ogni colonna selezionata per l'indirizzo del membro dati campo appropriato. Chiamate di funzioni API ODBC per l'invio di un database SQL quando il recordset aggiorna un record, RFX **UPDATE** oppure **Inserisci** istruzione per il driver. RFX utilizza le informazioni dei membri dati del campo per specificare le colonne da scrivere.

Il framework esegue il backup del buffer di modifica in momenti diversi, in modo che il relativo contenuto può ripristinare se necessario. RFX esegue il backup del buffer di modifica prima di aggiungere un nuovo record e prima di modificare un record esistente. Il buffer di modifica in alcuni casi, ad esempio, viene ripristinato dopo un' `Update` chiamata seguente `AddNew`. Buffer di modifica non è ripristinato se si annulla un buffer di modifica appena modificata, ad esempio, lo spostamento in un altro record prima di chiamare `Update`.

Oltre a scambiare dati tra l'origine dati e i membri dati di campo del recordset, RFX gestisce i parametri di associazione. Quando il recordset è aperto, qualsiasi membro dati di parametro è associati in base all'ordine dei "?" segnaposto nell'istruzione SQL che `CRecordset::Open` costrutti. Per altre informazioni, vedere [Recordset: Parametrizzazione di un Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).

Eseguire l'override della classe dell'oggetto recordset di `DoFieldExchange` esegue tutte le operazioni, lo spostamento dei dati in entrambe le direzioni. Come dialog data exchange (DDX), RFX necessita di informazioni sui membri dati della classe. La procedura guidata fornisce le informazioni necessarie per la scrittura di un'implementazione specifica di recordset di `DoFieldExchange` , in base ai dati del campo membro nomi e tipi di dati specificato con la procedura guidata.

##  <a name="_core_the_record_field_exchange_process"></a> Processo di scambio di campi di record

In questa sezione viene descritta la sequenza di eventi RFX come un oggetto recordset è aperto e l'aggiunta, aggiornamento ed eliminazione di record. Nella tabella [sequenza delle RFX operazioni durante il Recordset apertura](#_core_sequence_of_rfx_operations_during_recordset_open) e la tabella [sequenza delle operazioni di RFX durante lo scorrimento](#_core_sequence_of_rfx_operations_during_scrolling) in questo argomento mostrano il processo come processi RFX un `Move` comando il Recordset e come gestione di un aggiornamento. Durante questi processi [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) viene chiamato per eseguire diverse operazioni. Il `m_nOperation` membro dati del [CFieldExchange](../../mfc/reference/cfieldexchange-class.md) oggetto determina quale operazione è richiesto. Può risultare utile leggere [Recordset: Selezione dei record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md) e [Recordset: Modo in cui i record di aggiornamento di recordset (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md) prima di leggere questa documentazione.

###  <a name="_mfc_rfx.3a_.initial_binding_of_columns_and_parameters"></a> RFX: Associazione iniziale di parametri e colonne

Si verificano le seguenti attività RFX, nell'ordine indicato, quando si chiama un oggetto recordset [aperto](../../mfc/reference/crecordset-class.md#open) funzione membro:

- Se il set di record dispone di membri dati di parametro, il framework chiama `DoFieldExchange` per associare i parametri per segnaposto di parametri nella stringa dell'istruzione SQL del recordset. Una data dipendente dal tipo di rappresentazione del valore del parametro viene usato per ogni segnaposto trovato nel **seleziona** istruzione. Ciò si verifica dopo che viene preparata l'istruzione SQL ma prima che venga eseguito. Per informazioni sulla preparazione di istruzioni, vedere la `::SQLPrepare` funzione in ODBC *riferimento per programmatori*.

- Il framework chiama `DoFieldExchange` una seconda volta per associare i valori delle colonne selezionate a membri dati di campo corrispondente nel set di record. Questo comportamento stabilisce l'oggetto recordset come buffer di modifica contenente le colonne del primo record.

- Il recordset esegue l'istruzione SQL e l'origine dati consente di selezionare il primo record. Le colonne del record vengono caricate in membri dati di campi del recordset.

Nella tabella seguente viene illustrata la sequenza di operazioni RFX quando si apre un set di record.

### <a name="_core_sequence_of_rfx_operations_during_recordset_open"></a> Sequenza di operazioni RFX durante l'apertura di Recordset

|L'operazione|Operazione DoFieldExchange|Operazione di database/SQL|
|--------------------|-------------------------------|-----------------------------|
|1. Aprire recordset.|||
||2. Compilare un'istruzione SQL.||
|||3. Invio dell'istruzione SQL.|
||4. Associare i membri dati di parametro.||
||5. Membri dati di campo può essere associata alle colonne.||
|||6. ODBC non lo spostamento e inserisce i dati.|
||7. Correzione dei dati di C++.||

Recordset usano esecuzione preparata ODBC per consentire la ripetizione rapida della query con la stessa istruzione SQL. Per altre informazioni sull'esecuzione preparata, vedere il SDK di ODBC *di riferimento per programmatori* in MSDN Library.

###  <a name="_mfc_rfx.3a_.scrolling"></a> RFX: Scorrimento

Quando si passa da un record a un altro, il framework chiama `DoFieldExchange` per sostituire i valori precedentemente memorizzati nei membri di dati di campo con i valori per il nuovo record.

Nella tabella seguente viene illustrata la sequenza di operazioni RFX quando l'utente sposta per ogni record.

### <a name="_core_sequence_of_rfx_operations_during_scrolling"></a> Sequenza di operazioni RFX durante lo scorrimento

|L'operazione|Operazione DoFieldExchange|Operazione di database/SQL|
|--------------------|-------------------------------|-----------------------------|
|1. Chiamare `MoveNext` o una delle altre funzioni di spostamento.|||
|||2. ODBC non lo spostamento e inserisce i dati.|
||3. Correzione dei dati di C++.||

###  <a name="_mfc_rfx.3a_.adding_new_records_and_editing_existing_records"></a> RFX: Aggiunta di nuovi record e modifica di record esistente

Se si aggiunge un nuovo record, il set di record funziona come un buffer di modifica per ottenere il contenuto del nuovo record. Come con l'aggiunta di record, record di modifica comporta la modifica dei valori dei membri dati di campo del recordset. Dal punto di vista RFX, la sequenza è come segue:

1. La chiamata per il recordset [AddNew](../../mfc/reference/crecordset-class.md#addnew) oppure [modificare](../../mfc/reference/crecordset-class.md#edit) funzione membro determina RFX archiviare i buffer di modifica corrente che può essere ripristinato in un secondo momento.

1. `AddNew` o `Edit` prepara i campi nel buffer di modifica in modo RFX può rilevare i membri dati di campo modificato.

   Poiché un nuovo record non ha alcun valore precedente per confrontare i nuovi valori, `AddNew` imposta il valore di ogni membro di dati del campo sul valore PSEUDO_NULL. Successivamente, quando si chiama `Update`, RFX confronta il valore di ciascun membro dati con il valore PSEUDO_NULL. Se è presente una differenza, il membro dati è stato impostato. (Lo stesso come colonna di record con un valore Null PSEUDO_NULL è uno di questi è lo stesso come C++ NULL.)

   A differenza di `Update` chiamare per `AddNew`, il `Update` chiamare per `Edit` confronta i valori aggiornati con i valori memorizzati in precedenza, anziché utilizzare PSEUDO_NULL. La differenza è che `AddNew` senza valori memorizzati in precedenza per il confronto.

1. Vengono impostati direttamente i valori dei campi dati membri i cui valori che si desidera modificare o che desidera pieno per un nuovo record. Ciò può comportare la chiamata `SetFieldNull`.

1. La chiamata a [Update](../../mfc/reference/crecordset-class.md#update) controlla i membri di dati campo modificato, come descritto nel passaggio 2 (vedere la tabella [sequenza delle operazioni di RFX durante lo scorrimento](#_core_sequence_of_rfx_operations_during_scrolling)). Se nessuno è stato modificato, `Update` restituisce 0. Se sono stati modificati alcuni membri di dati di campi, `Update` Prepara ed esegue un database SQL **Inserisci** istruzione che contiene i valori per tutti i campi aggiornati nel record.

1. Per la `AddNew`, `Update` termina ripristinando i valori memorizzati in precedenza il record corrente prima di `AddNew` chiamare. Per `Edit`, i valori modificati rimangono invariati.

Nella tabella seguente viene illustrata la sequenza di operazioni RFX quando si aggiunge un nuovo record o modifica un record esistente.

### <a name="sequence-of-rfx-operations-during-addnew-and-edit"></a>Sequenza di operazioni RFX durante AddNew e modifica

|L'operazione|Operazione DoFieldExchange|Operazione di database/SQL|
|--------------------|-------------------------------|-----------------------------|
|1. Chiamare `AddNew` o `Edit`.|||
||2. Eseguire il backup del buffer di modifica.||
||3. Per `AddNew`, contrassegnare i membri dati di campo come "pulita" e Null.||
|4. Assegnare valori ai membri dati di campo del recordset.|||
|5. Chiamare il metodo `Update`.|||
||6. Controllo dei campi modificati.||
||7. Creare SQL **inserire** istruzione per `AddNew` oppure **UPDATE** istruzione per `Edit`.||
|||8. Invio dell'istruzione SQL.|
||9. Per `AddNew`, ripristinare il buffer di modifica in base al contenuto di backup. Per `Edit`, eliminare il backup.||

### <a name="rfx-deleting-existing-records"></a>RFX: L'eliminazione di record esistente

Quando si elimina un record, ricordare che il record viene eliminato ed è necessario spostare sposterà RFX imposta tutti i campi su NULL. Non è necessario qualsiasi altra informazione di sequenza RFX.

## <a name="see-also"></a>Vedere anche

[Trasferimento di campi di record (RFX)](../../data/odbc/record-field-exchange-rfx.md)<br/>
[Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)<br/>
[Macro, funzioni globali e variabili globali](../../mfc/reference/mfc-macros-and-globals.md)<br/>
[Classe CFieldExchange](../../mfc/reference/cfieldexchange-class.md)<br/>
[CRecordset::DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange)