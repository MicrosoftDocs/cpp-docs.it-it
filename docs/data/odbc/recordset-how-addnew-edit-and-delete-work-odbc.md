---
description: 'Altre informazioni su: Recordset: funzionamento di AddNew, Edit e Delete (ODBC)'
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
ms.openlocfilehash: 44211b6e1b1a0fc80c874e86ba83c2e6ea0ea43e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97151398"
---
# <a name="recordset-how-addnew-edit-and-delete-work-odbc"></a>Recordset: funzionamento dei metodi AddNew, Edit e Delete (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

In questo argomento viene illustrato `AddNew` il `Edit` `Delete` funzionamento delle funzioni membro, e della classe `CRecordset` . Gli argomenti trattati includono:

- [Funzionamento dell'aggiunta di record](#_core_adding_a_record)

- [Visibilità dei record aggiunti](#_core_visibility_of_added_records)

- [Funzionamento delle modifiche ai record](#_core_editing_an_existing_record)

- [Funzionamento dell'eliminazione di record](#_core_deleting_a_record)

> [!NOTE]
> Questo argomento si applica agli oggetti derivati da `CRecordset` in cui non è stato implementato il recupero di massa di righe. Se si utilizza il recupero di righe bulk, vedere [Recordset: recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Come supplemento, potrebbe essere necessario leggere lo [scambio di campi di record:](../../data/odbc/record-field-exchange-how-rfx-works.md)funzionamento di RFX, che descrive il ruolo corrispondente di RFX nelle operazioni di aggiornamento.

## <a name="adding-a-record"></a><a name="_core_adding_a_record"></a> Aggiunta di un record

L'aggiunta di un nuovo record a un recordset comporta la chiamata della funzione membro [AddNew](../../mfc/reference/crecordset-class.md#addnew) del recordset, l'impostazione dei valori dei membri dati del campo del nuovo record e la chiamata della funzione membro [Update](../../mfc/reference/crecordset-class.md#update) per scrivere il record nell'origine dati.

Come precondizione per la chiamata a `AddNew` , il recordset non deve essere aperto come di sola lettura. Le `CanUpdate` `CanAppend` funzioni membro e consentono di determinare queste condizioni.

Quando si chiama `AddNew` :

- Il record nel buffer di modifica è archiviato, quindi il relativo contenuto può essere ripristinato se l'operazione viene annullata.

- I membri dati del campo sono contrassegnati in modo che sia possibile rilevare le modifiche in un secondo momento. Anche i membri dati del campo vengono contrassegnati come puliti (senza modifiche) e impostati su un valore null.

Dopo aver chiamato `AddNew` , il buffer di modifica rappresenta un nuovo record vuoto, pronto per essere compilato con i valori. A tale scopo, è necessario impostare manualmente i valori assegnando loro i valori. Anziché specificare un valore di dati effettivo per un campo, è possibile chiamare `SetFieldNull` per specificare il valore null.

Per eseguire il commit delle modifiche, chiamare `Update` . Quando si chiama `Update` per il nuovo record:

- Se il driver ODBC supporta la `::SQLSetPos` funzione API ODBC, MFC utilizza la funzione per aggiungere il record nell'origine dati. Con `::SQLSetPos` , MFC può aggiungere un record in modo più efficiente perché non è necessario creare ed elaborare un'istruzione SQL.

- Se `::SQLSetPos` non è possibile utilizzare, MFC esegue le operazioni seguenti:

   1. Se non vengono rilevate modifiche, `Update` non esegue alcuna operazione e restituisce 0.

   1. Se sono presenti modifiche, `Update` costruisce un'istruzione SQL **Insert** . Le colonne rappresentate da tutti i membri dati di campo Dirty sono elencate nell'istruzione **Insert** . Per forzare l'inclusione di una colonna, chiamare la funzione membro [SetFieldDirty](../../mfc/reference/crecordset-class.md#setfielddirty) :

        ```cpp
        SetFieldDirty( &m_dataMember, TRUE );
        ```

   1. `Update` esegue il commit del nuovo record, ovvero viene eseguita l'istruzione **Insert** e viene eseguito il commit del record nella tabella dell'origine dati (e del recordset, se non è uno snapshot), a meno che non sia in corso una transazione.

   1. Il record archiviato viene ripristinato nel buffer di modifica. Il record che era corrente prima della `AddNew` chiamata è nuovamente corrente, indipendentemente dal fatto che l'istruzione **Insert** sia stata eseguita correttamente.

   > [!TIP]
   > Per il controllo completo di un nuovo record, adottare l'approccio seguente: impostare i valori di tutti i campi che avranno valori, quindi impostare in modo esplicito tutti i campi che rimarranno null chiamando `SetFieldNull` con un puntatore al campo e il parametro true (impostazione predefinita). Se si desidera assicurarsi che un campo non venga scritto nell'origine dati, chiamare `SetFieldDirty` con un puntatore al campo e il parametro false e non modificare il valore del campo. Per determinare se un campo può essere null, chiamare `IsFieldNullable` .

   > [!TIP]
   > Per rilevare quando i membri dati del recordset modificano il valore, MFC utilizza un PSEUDO_NULL valore appropriato per ogni tipo di dati che è possibile archiviare in un recordset. Se è necessario impostare in modo esplicito un campo sul valore PSEUDO_NULL e il campo è già contrassegnato come null, è necessario chiamare anche `SetFieldNull` , passando l'indirizzo del campo nel primo parametro e false nel secondo parametro.

## <a name="visibility-of-added-records"></a><a name="_core_visibility_of_added_records"></a> Visibilità dei record aggiunti

Quando un record aggiunto è visibile al recordset? I record aggiunti a volte vengono visualizzati e talvolta non sono visibili, a seconda di due elementi:

- Funzionalità del driver.

- Il Framework può trarre vantaggio da.

Se il driver ODBC supporta la `::SQLSetPos` funzione API ODBC, MFC utilizza la funzione per aggiungere i record. Con `::SQLSetPos` , i record aggiunti sono visibili a tutti i recordset MFC aggiornabili. Senza supporto per la funzione, i record aggiunti non sono visibili ed è necessario chiamare `Requery` per visualizzarli. Anche l'uso di `::SQLSetPos` è più efficiente.

## <a name="editing-an-existing-record"></a><a name="_core_editing_an_existing_record"></a> Modifica di un record esistente

Per modificare un record esistente in un recordset è necessario scorrere fino al record, chiamare la funzione membro [Edit](../../mfc/reference/crecordset-class.md#edit) del recordset, impostare i valori dei membri dati del campo del nuovo record e chiamare la funzione membro [Update](../../mfc/reference/crecordset-class.md#update) per scrivere il record modificato nell'origine dati.

Come precondizione per la chiamata a `Edit` , il recordset deve essere aggiornabile e su un record. Le `CanUpdate` `IsDeleted` funzioni membro e consentono di determinare queste condizioni. Anche il record corrente non deve essere già stato eliminato ed è necessario che nel recordset siano presenti record (sia `IsBOF` che `IsEOF` restituiscono 0).

Quando si chiama `Edit` , il record nel buffer di modifica (il record corrente) viene archiviato. I valori del record archiviato verranno usati in un secondo momento per rilevare se sono stati modificati i campi.

Dopo aver chiamato `Edit` , il buffer di modifica rappresenta ancora il record corrente, ma è ora pronto ad accettare le modifiche ai membri dati del campo. Per modificare il record, impostare manualmente i valori di tutti i membri dati di campo che si desidera modificare. Anziché specificare un valore di dati effettivo per un campo, è possibile chiamare `SetFieldNull` per specificare il valore null. Per eseguire il commit delle modifiche, chiamare `Update` .

> [!TIP]
> Per uscire dalla `AddNew` modalità o `Edit` , chiamare `Move` con il parametro *AFX_MOVE_REFRESH*.

Come precondizione per la chiamata a `Update` , il recordset non deve essere vuoto e il record corrente non deve essere stato eliminato. `IsBOF`, `IsEOF` e `IsDeleted` devono restituire tutti 0.

Quando si chiama `Update` per il record modificato:

- Se il driver ODBC supporta la `::SQLSetPos` funzione API ODBC, MFC utilizza la funzione per aggiornare il record nell'origine dati. Con `::SQLSetPos` , il driver confronta il buffer di modifica con il record corrispondente sul server, aggiornando il record sul server se i due sono diversi. Con `::SQLSetPos` , MFC può aggiornare un record in modo più efficiente perché non è necessario creare ed elaborare un'istruzione SQL.

   \- - oppure -

- Se `::SQLSetPos` non è possibile utilizzare, MFC esegue le operazioni seguenti:

   1. Se non sono state apportate modifiche, `Update` non esegue alcuna operazione e restituisce 0.

   1. Se sono presenti modifiche, `Update` costruisce un'istruzione SQL **Update** . Le colonne elencate nell'istruzione **Update** sono basate sui membri dati del campo che sono stati modificati.

   1. `Update` esegue il commit delle modifiche: esegue l'istruzione **Update** e il record viene modificato nell'origine dati, ma non viene eseguito il commit se è in corso una transazione (vedere [Transaction: esecuzione di una transazione in un recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md) per informazioni su come la transazione influisca sull'aggiornamento). ODBC mantiene una copia del record, che cambia anche.

   1. A differenza del processo di `AddNew` , il `Edit` processo non ripristina il record archiviato. Il record modificato rimane sul posto come record corrente.

   > [!CAUTION]
   > Quando si prepara l'aggiornamento di un recordset chiamando `Update` , verificare che il recordset includa tutte le colonne che costituiscono la chiave primaria della tabella (o tutte le colonne di qualsiasi indice univoco nella tabella o un numero sufficiente di colonne per identificare in modo univoco la riga). In alcuni casi, il Framework può utilizzare solo le colonne selezionate nel recordset per identificare il record nella tabella da aggiornare. Senza tutte le colonne necessarie, più record potrebbero essere aggiornati nella tabella. In questo caso, il Framework genera eccezioni quando si chiama `Update` .

   > [!TIP]
   > Se si chiama `AddNew` o `Edit` dopo aver chiamato una funzione in precedenza ma prima di chiamare `Update` , il buffer di modifica viene aggiornato con il record archiviato, sostituendo il record nuovo o modificato in corso. Questo comportamento consente di interrompere una `AddNew` o `Edit` e di iniziare una nuova: se si determina che il record in corso è difettoso, è sufficiente chiamare o di `Edit` `AddNew` nuovo.

## <a name="deleting-a-record"></a><a name="_core_deleting_a_record"></a> Eliminazione di un record

L'eliminazione di un record da un recordset comporta lo scorrimento al record e la chiamata della funzione membro [Delete](../../mfc/reference/crecordset-class.md#delete) del recordset. A differenza `AddNew` `Edit` di e, non `Delete` richiede una chiamata corrispondente a `Update` .

Come precondizione per la chiamata a `Delete` , il recordset deve essere aggiornabile e deve trovarsi in un record. Le `CanUpdate` `IsBOF` `IsEOF` funzioni membro,, e consentono di `IsDeleted` determinare queste condizioni.

Quando si chiama `Delete` :

- Se il driver ODBC supporta la `::SQLSetPos` funzione API ODBC, MFC utilizza la funzione per eliminare il record nell'origine dati. L'uso `::SQLSetPos` di è in genere più efficiente rispetto all'uso di SQL.

   \- - oppure -

- Se `::SQLSetPos` non è possibile utilizzare, MFC esegue le operazioni seguenti:

   1. Non viene eseguito il backup del record corrente nel buffer di modifica come in `AddNew` e `Edit` .

   1. `Delete` costruisce un'istruzione SQL **Delete** che rimuove il record.

      Il record corrente nel buffer di modifica non è archiviato come in `AddNew` e `Edit` .

   1. `Delete` esegue il commit dell'eliminazione: esegue l'istruzione **Delete** . Il record viene contrassegnato come eliminato nell'origine dati e, se il record è uno snapshot, in ODBC.

   1. I valori del record eliminato sono ancora nei membri dati del campo del recordset, ma i membri dati del campo sono contrassegnati come null e la `IsDeleted` funzione membro del recordset restituisce un valore diverso da zero.

   > [!NOTE]
   > Dopo l'eliminazione di un record, è necessario scorrere fino a un altro record per riempire il buffer di modifica con i dati del nuovo record. Non è possibile chiamare `Delete` nuovamente o chiamare `Edit` .

Per informazioni sulle istruzioni SQL utilizzate nelle operazioni di aggiornamento, vedere [SQL](../../data/odbc/sql.md).

## <a name="see-also"></a>Vedi anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: ulteriori informazioni sugli aggiornamenti (ODBC)](../../data/odbc/recordset-more-about-updates-odbc.md)<br/>
[Trasferimento di campi di record (RFX)](../../data/odbc/record-field-exchange-rfx.md)
