---
title: 'Recordset: funzionamento dei metodi AddNew, Edit e Delete (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- records [C++], updating
- record editing [C++], in recordsets
- recordsets [C++], adding records
- records [C++], adding
- ODBC recordsets [C++], adding records
- recordsets [C++], editing records
- recordsets [C++], updating
- AddNew method
- ODBC recordsets [C++], deleting records
- records [C++], deleting in recordsets
- data in recordsets [C++]
- recordsets [C++], deleting records
- ODBC recordsets [C++], editing records
- records [C++], editing
ms.assetid: cab43d43-235a-4bed-ac05-67d10e94f34e
ms.openlocfilehash: 63718a6be3a9ce19ddbce923a84def21448c42a0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366996"
---
# <a name="recordset-how-addnew-edit-and-delete-work-odbc"></a>Recordset: funzionamento dei metodi AddNew, Edit e Delete (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

In questo argomento `AddNew`viene `Edit`illustrato `Delete` il funzionamento `CRecordset` delle funzioni membro , , e della classe . Gli argomenti trattati includono:

- [Funzionamento dell'aggiunta di record](#_core_adding_a_record)

- [Visibilità dei record aggiunti](#_core_visibility_of_added_records)

- [Funzionamento della modifica dei record](#_core_editing_an_existing_record)

- [Funzionamento dell'eliminazione di record](#_core_deleting_a_record)

> [!NOTE]
> Questo argomento si applica agli oggetti derivati da `CRecordset` in cui non è stato implementato il recupero di massa di righe. Se si utilizza il recupero di massa di righe, vedere [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Come supplemento, è possibile leggere [Record Field Exchange: How RFX Works](../../data/odbc/record-field-exchange-how-rfx-works.md), che descrive il ruolo corrispondente di RFX nelle operazioni di aggiornamento.

## <a name="adding-a-record"></a><a name="_core_adding_a_record"></a>Aggiunta di un record

L'aggiunta di un nuovo record a un recordset comporta la chiamata della funzione membro [AddNew](../../mfc/reference/crecordset-class.md#addnew) del recordset, l'impostazione dei valori dei membri dati di campo del nuovo record e la chiamata alla funzione membro [Update](../../mfc/reference/crecordset-class.md#update) per scrivere il record nell'origine dati.

Come condizione preliminare `AddNew`per la chiamata a , il recordset non deve essere stato aperto in sola lettura. Le `CanUpdate` `CanAppend` funzioni membro e consentono di determinare queste condizioni.

Quando si `AddNew`chiama :

- Il record nel buffer di modifica viene archiviato, pertanto il relativo contenuto può essere ripristinato se l'operazione viene annullata.

- I membri dati di campo vengono contrassegnati in modo che sia possibile rilevare le modifiche in essi in un secondo momento. The field data members are also marked clean (unchanged) and set to a Null.

Dopo aver `AddNew`chiamato , il buffer di modifica rappresenta un nuovo record vuoto, pronto per essere compilato con valori. A tale scopo, impostare manualmente i valori assegnando loro. Anziché specificare un valore di dati effettivo `SetFieldNull` per un campo, è possibile chiamare per specificare il valore Null.

Per eseguire il commit `Update`delle modifiche, chiamare . Quando si `Update` chiama per il nuovo record:

- Se il driver ODBC `::SQLSetPos` supporta la funzione API ODBC, MFC utilizza la funzione per aggiungere il record nell'origine dati. Con `::SQLSetPos`, MFC può aggiungere un record in modo più efficiente perché non è necessario costruire ed elaborare un'istruzione SQL.

- Se `::SQLSetPos` non è possibile utilizzare, MFC esegue le operazioni seguenti:

   1. Se non vengono `Update` rilevate modifiche, non esegue alcuna operazione e restituisce 0.

   1. Se sono presenti `Update` modifiche, costruisce un'istruzione SQL **INSERT.** Le colonne rappresentate da tutti i membri dati di campo dirty sono elencate nell'istruzione **INSERT.** Per forzare l'includere in una colonna, chiamare la funzione membro [SetFieldDirty:To](../../mfc/reference/crecordset-class.md#setfielddirty) force a column to be included, call the SetFieldDirty member function:

        ```cpp
        SetFieldDirty( &m_dataMember, TRUE );
        ```

   1. `Update`esegue il commit del nuovo record: viene eseguita l'istruzione **INSERT** e viene eseguito il commit del record nella tabella nell'origine dati (e nel recordset, se non uno snapshot) a meno che non sia in corso una transazione.

   1. Il record archiviato viene ripristinato nel buffer di modifica. Il record corrente prima `AddNew` della chiamata è di nuovo corrente indipendentemente dal fatto che l'istruzione **INSERT** sia stata eseguita correttamente.

   > [!TIP]
   > Per il controllo completo di un nuovo record, adottare l'approccio seguente: impostare i valori `SetFieldNull` di tutti i campi che avranno valori e quindi impostare in modo esplicito tutti i campi che rimarranno Null chiamando con un puntatore al campo e il parametro TRUE (impostazione predefinita). Se si desidera assicurarsi che un campo non `SetFieldDirty` venga scritto nell'origine dati, chiamare con un puntatore al campo e al parametro FALSE e non modificare il valore del campo. Per determinare se un campo può `IsFieldNullable`essere Null, chiamare .

   > [!TIP]
   > Per rilevare quando i membri dati del recordset cambiano valore, MFC utilizza un valore di PSEUDO_NULL appropriato per ogni tipo di dati che è possibile archiviare in un recordset. Se è necessario impostare in modo esplicito un campo sul valore di `SetFieldNull`PSEUDO_NULL e il campo sembra già contrassegnato come Null, è necessario chiamare anche , passando l'indirizzo del campo nel primo parametro e FALSE nel secondo parametro.

## <a name="visibility-of-added-records"></a><a name="_core_visibility_of_added_records"></a>Visibilità dei record aggiunti

Quando è visibile un record aggiunto al recordset? I record aggiunti a volte vengono visualizzati e talvolta non sono visibili, a seconda di due elementi:

- Ciò di cui il tuo autista è capace.

- Ciò che il quadro può trarre vantaggio.

Se il driver ODBC `::SQLSetPos` supporta la funzione API ODBC, MFC utilizza la funzione per aggiungere record. Con `::SQLSetPos`, i record aggiunti sono visibili a qualsiasi recordset MFC aggiornabile. Senza il supporto per la funzione, i `Requery` record aggiunti non sono visibili ed è necessario chiamare per visualizzarli. L'uso `::SQLSetPos` è anche più efficiente.

## <a name="editing-an-existing-record"></a><a name="_core_editing_an_existing_record"></a>Modifica di un record esistente

La modifica di un record esistente in un recordset comporta lo scorrimento del record, la chiamata della funzione membro [Edit](../../mfc/reference/crecordset-class.md#edit) del recordset, l'impostazione dei valori dei membri dati di campo del nuovo record e la chiamata alla funzione membro [Update](../../mfc/reference/crecordset-class.md#update) per scrivere il record modificato nell'origine dati.

Come condizione preliminare `Edit`per la chiamata a , il recordset deve essere aggiornabile e su un record. Le `CanUpdate` `IsDeleted` funzioni membro e consentono di determinare queste condizioni. Inoltre, il record corrente non deve essere già stato eliminato `IsBOF` e `IsEOF` devono essere presenti record nel recordset (entrambi e restituire 0).

Quando si `Edit`chiama , il record nel buffer di modifica (il record corrente) viene memorizzato. I valori del record archiviato vengono successivamente utilizzati per rilevare se i campi sono stati modificati.

Dopo aver `Edit`chiamato , il buffer di modifica rappresenta ancora il record corrente, ma è ora pronto per accettare le modifiche ai membri dati di campo. Per modificare il record, impostare manualmente i valori di tutti i membri dati di campo che si desidera modificare. Anziché specificare un valore di dati effettivo `SetFieldNull` per un campo, è possibile chiamare per specificare il valore Null. Per eseguire il `Update`commit delle modifiche, chiamare .

> [!TIP]
> Per uscire `AddNew` dalla `Edit` modalità `Move` o, chiamare con il parametro *AFX_MOVE_REFRESH*.

Come precondizione per `Update`la chiamata , il recordset non deve essere vuoto e il record corrente non deve essere stato eliminato. `IsBOF`, `IsEOF`, `IsDeleted` e devono restituire 0.

Quando si `Update` chiama per il record modificato:

- Se il driver ODBC `::SQLSetPos` supporta la funzione API ODBC, MFC utilizza la funzione per aggiornare il record nell'origine dati. Con `::SQLSetPos`, il driver confronta il buffer di modifica con il record corrispondente sul server, aggiornando il record sul server se i due sono diversi. Con `::SQLSetPos`, MFC può aggiornare un record in modo più efficiente perché non è necessario costruire ed elaborare un'istruzione SQL.

   \- - oppure -

- Se `::SQLSetPos` non è possibile utilizzare, MFC esegue le operazioni seguenti:

   1. Se non sono state `Update` apportate modifiche, non esegue alcuna operazione e restituisce 0.

   1. Se sono presenti `Update` modifiche, costruisce un'istruzione SQL **UPDATE.** Le colonne elencate nell'istruzione **UPDATE** si basano sui membri dati di campo che sono stati modificati.

   1. `Update`esegue il commit delle modifiche, ovvero esegue l'istruzione **UPDATE,** e il record viene modificato nell'origine dati, ma non ne viene eseguito il commit se è in corso una transazione (vedere [Transazione: esecuzione di una transazione in un recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md) per informazioni su come la transazione influisce sull'aggiornamento). ODBC mantiene una copia del record, che cambia anche.

   1. A differenza `AddNew`del `Edit` processo per , il processo non ripristina il record archiviato. Il record modificato rimane presente come record corrente.

   > [!CAUTION]
   > Quando si prepara l'aggiornamento `Update`di un recordset chiamando , assicurarsi che il recordset includa tutte le colonne che costituiscono la chiave primaria della tabella (o tutte le colonne di qualsiasi indice univoco nella tabella o colonne sufficienti per identificare in modo univoco la riga). In alcuni casi, il framework può utilizzare solo le colonne selezionate nel recordset per identificare il record nella tabella da aggiornare. Senza tutte le colonne necessarie, più record potrebbero essere aggiornati nella tabella. In questo caso, il framework genera `Update`eccezioni quando si chiama .

   > [!TIP]
   > Se si `AddNew` `Edit` chiama o dopo aver chiamato `Update`una delle due funzioni in precedenza ma prima della chiamata, il buffer di modifica viene aggiornato con il record archiviato, sostituendo il record nuovo o modificato in corso. Questo comportamento consente di interrompere `AddNew` `Edit` un o e iniziare uno nuovo: se si determina che il `Edit` `AddNew` record in corso è difettoso, è sufficiente chiamare o ricominciare.

## <a name="deleting-a-record"></a><a name="_core_deleting_a_record"></a>Eliminazione di un record

L'eliminazione di un record da un recordset comporta lo scorrimento al record e la chiamata alla funzione membro [Delete](../../mfc/reference/crecordset-class.md#delete) del recordset. A `AddNew` `Edit`differenza `Delete` di e , `Update`non richiede una chiamata corrispondente a .

Come condizione preliminare `Delete`per la chiamata di , il recordset deve essere aggiornabile e deve trovarsi su un record. Le `CanUpdate` `IsBOF`funzioni `IsEOF`membro `IsDeleted` , , e consentono di determinare queste condizioni.

Quando si `Delete`chiama :

- Se il driver ODBC `::SQLSetPos` supporta la funzione API ODBC, MFC utilizza la funzione per eliminare il record nell'origine dati. L'utilizzo `::SQLSetPos` è in genere più efficiente rispetto all'utilizzo di SQL.

   \- - oppure -

- Se `::SQLSetPos` non è possibile utilizzare, MFC esegue le operazioni seguenti:

   1. Non viene eseguito il backup del `AddNew` record `Edit`corrente nel buffer di modifica come in e .

   1. `Delete`costruisce un'istruzione SQL **DELETE** che rimuove il record.

      Il record corrente nel buffer di `AddNew` modifica `Edit`non viene memorizzato come in e .

   1. `Delete`esegue il commit dell'eliminazione: esegue l'istruzione **DELETE.** Il record viene contrassegnato come eliminato nell'origine dati e, se il record è uno snapshot, in ODBC.

   1. I valori del record eliminato sono ancora nei membri dati di campo del recordset, ma `IsDeleted` i membri dati di campo sono contrassegnati come Null e la funzione membro del recordset restituisce un valore diverso da zero.

   > [!NOTE]
   > Dopo aver eliminato un record, è necessario scorrere verso un altro record per riempire il buffer di modifica con i dati del nuovo record. È un errore `Delete` chiamare di `Edit`nuovo o chiamare .

Per informazioni sulle istruzioni SQL utilizzate nelle operazioni di aggiornamento, vedere [SQL](../../data/odbc/sql.md).

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: ulteriori informazioni sugli aggiornamenti (ODBC)](../../data/odbc/recordset-more-about-updates-odbc.md)<br/>
[Scambio di campi record (RFX)](../../data/odbc/record-field-exchange-rfx.md)
