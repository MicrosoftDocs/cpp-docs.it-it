---
title: 'Recordset: aggiunta, aggiornamento ed eliminazione di record (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- records [C++], updating
- record editing [C++], in recordsets
- recordsets [C++], adding records
- records [C++], adding
- ODBC recordsets [C++], adding records
- recordsets [C++], editing records
- recordsets [C++], updating
- records [C++], deleting
- AddNew method
- ODBC recordsets [C++], deleting records
- data in recordsets [C++]
- record editing [C++]
- recordsets [C++], deleting records
- ODBC recordsets [C++], editing records
- records [C++], editing
ms.assetid: 760c8889-bec4-482b-a8f2-319792a6af98
ms.openlocfilehash: 628ffb2feee385a4114b0dbea074f81678c529d4
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367100"
---
# <a name="recordset-adding-updating-and-deleting-records-odbc"></a>Recordset: aggiunta, aggiornamento ed eliminazione di record (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

> [!NOTE]
> È ora possibile aggiungere record in massa in modo più efficiente. Per ulteriori informazioni, vedere [Recordset: aggiunta di record in blocco (ODBC)](../../data/odbc/recordset-adding-records-in-bulk-odbc.md).

> [!NOTE]
> Questo argomento si applica agli oggetti derivati da `CRecordset` in cui non è stato implementato il recupero di massa di righe. Se si utilizza il recupero di massa di righe, vedere [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Le istantanee e i dynaset aggiornabili consentono di aggiungere, modificare (aggiornare) ed eliminare record. In questo argomento:

- [Come determinare se il recordset è aggiornabile.](#_core_determining_whether_your_recordset_is_updatable)

- [Come aggiungere un nuovo record](#_core_adding_a_record_to_a_recordset).

- [Come modificare un record esistente](#_core_editing_a_record_in_a_recordset).

- [Come eliminare un record](#_core_deleting_a_record_from_a_recordset).

Per ulteriori informazioni sull'eistruzione degli aggiornamenti e sull'aspetto degli aggiornamenti da parte di altri utenti, vedere Recordset: come i record di [aggiornamento dell'oggetto Recordset (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md). In genere, quando si aggiunge, modifica o elimina un record, il recordset modifica immediatamente l'origine dati. È invece possibile creare batch gruppi di aggiornamenti correlati nelle transazioni. Se è in corso una transazione, l'aggiornamento non diventa finale fino a quando non si esegue il commit della transazione. In questo modo è possibile riprendere o ripristinare le modifiche. Per informazioni sulle transazioni, vedere [Transazione (ODBC)](../../data/odbc/transaction-odbc.md).

Nella tabella seguente sono riepilogate le opzioni disponibili per i recordset con caratteristiche di aggiornamento diverse.

### <a name="recordset-readupdate-options"></a>Opzioni di lettura/aggiornamento del recordset

|Type|Lettura|Modificare il record|Eliminare il record|Aggiungi nuovo (aggiungi)|
|----------|----------|-----------------|-------------------|------------------------|
|Sola lettura|S|N|N|N|
|Solo accodamento|S|N|N|S|
|Completamente aggiornabile|S|S|S|S|

## <a name="determining-whether-your-recordset-is-updateable"></a><a name="_core_determining_whether_your_recordset_is_updatable"></a>Determinare se il recordset è aggiornabileDetermining whether Your Recordset is Updateable

Un oggetto recordset è aggiornabile se l'origine dati è aggiornabile ed è stato aperto il recordset come aggiornabile. La sua aggiornabilità dipende anche dall'istruzione SQL utilizzata, dalle funzionalità del driver ODBC e dal fatto che la libreria di cursori ODBC sia in memoria. Non è possibile aggiornare un recordset di sola lettura o un'origine dati.

#### <a name="to-determine-whether-your-recordset-is-updatable"></a>Per determinare se il recordset è aggiornabile

1. Chiamare la funzione membro [CanUpdate](../../mfc/reference/crecordset-class.md#canupdate) dell'oggetto recordset.

   `CanUpdate`restituisce un valore diverso da zero se il recordset è aggiornabile.

Per impostazione predefinita, i recordset sono `AddNew` `Edit`completamente `Delete` aggiornabili (è possibile eseguire operazioni e , e ). Ma è anche possibile utilizzare l'opzione [appendOnly](../../mfc/reference/crecordset-class.md#open) per aprire i recordset aggiornabili. Un recordset aperto in questo modo consente `AddNew`solo l'aggiunta di nuovi record con . Non è possibile modificare o eliminare record esistenti. È possibile verificare se un recordset è aperto solo per l'aggiunta chiamando il [CanAppend](../../mfc/reference/crecordset-class.md#canappend) funzione membro. `CanAppend`restituisce un valore diverso da zero se il recordset è completamente aggiornabile o aperto solo per l'aggiunta.

Nel codice riportato di `CanUpdate` seguito viene `rsStudentSet`illustrato come utilizzare per un oggetto recordset denominato :

```cpp
if( !rsStudentSet.Open( ) )
    return FALSE;
if( !rsStudentSet.CanUpdate( ) )
{
    AfxMessageBox( "Unable to update the Student recordset." );
    return;
}
```

> [!CAUTION]
> Quando si prepara l'aggiornamento `Update`di un recordset chiamando , assicurarsi che il recordset includa tutte le colonne che costituiscono la chiave primaria della tabella (o tutte le colonne di qualsiasi indice univoco nella tabella). In alcuni casi, il framework può utilizzare solo le colonne selezionate nel recordset per identificare il record nella tabella da aggiornare. Senza tutte le colonne necessarie, più record potrebbero essere aggiornati nella tabella, danneggiando l'integrità referenziale della tabella. In questo caso, il framework genera `Update`eccezioni quando si chiama .

## <a name="adding-a-record-to-a-recordset"></a><a name="_core_adding_a_record_to_a_recordset"></a>Aggiunta di un Record a un Recordset

È possibile aggiungere nuovi record a un recordset se la relativa funzione membro [CanAppend](../../mfc/reference/crecordset-class.md#canappend) restituisce un valore diverso da zero.

#### <a name="to-add-a-new-record-to-a-recordset"></a>Per aggiungere un nuovo record a un recordset

1. Assicurarsi che il recordset sia isolabile.

1. Chiamare la funzione membro [AddNew](../../mfc/reference/crecordset-class.md#addnew) dell'oggetto recordset.

   `AddNew`prepara il recordset in modo che funga da buffer di modifica. Tutti i membri dati di campo vengono impostati sul valore speciale Null e contrassegnati come invariati in modo che solo i valori modificati (dirty) vengano scritti nell'origine dati quando si chiama [Update](../../mfc/reference/crecordset-class.md#update).

1. Impostare i valori dei membri dati di campo del nuovo record.

   Assegnare valori ai membri dati di campo. Quelli non assegnati non vengono scritti nell'origine dati.

1. Chiamare la funzione `Update` membro dell'oggetto recordset.

   `Update`completa l'aggiunta scrivendo il nuovo record nell'origine dati. Per informazioni sul verificarsi `Update`se non si riesce a chiamare , vedere [Recordset: modalità di aggiornamento dei record dell'oggetto Recordset (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md).

Per informazioni sul funzionamento e il funzionamento dell'aggiunta di record quando i record aggiunti sono visibili nel recordset, vedere [Recordset: come AddNew, Edit ed Delete Work (ODBC)](../../data/odbc/recordset-how-addnew-edit-and-delete-work-odbc.md).

Nell'esempio seguente viene illustrato come aggiungere un nuovo record:The following example shows how to add a new record:

```cpp
if( !rsStudent.Open( ) )
    return FALSE;
if( !rsStudent.CanAppend( ) )
    return FALSE;                      // no field values were set
rsStudent.AddNew( );
rsStudent.m_strName = strName;
rsStudent.m_strCity = strCity;
rsStudent.m_strStreet = strStreet;
if( !rsStudent.Update( ) )
{
    AfxMessageBox( "Record not added; no field values were set." );
    return FALSE;
}
```

> [!TIP]
> Per `AddNew` annullare `Edit` un o chiamare, `AddNew` `Edit` è `Move` sufficiente effettuare un'altra chiamata a o o chiamare con il *parametro AFX_MOVE_REFRESH.* I membri dati vengono reimpostati sui `Edit` `Add` valori precedenti e si è ancora in modalità o mode.

## <a name="editing-a-record-in-a-recordset"></a><a name="_core_editing_a_record_in_a_recordset"></a>Modifica di un record in un Recordset

È possibile modificare i record esistenti se la funzione membro [CanUpdate](../../mfc/reference/crecordset-class.md#canupdate) del recordset restituisce un valore diverso da zero.

#### <a name="to-edit-an-existing-record-in-a-recordset"></a>Per modificare un record esistente in un recordset

1. Assicurarsi che il recordset sia aggiornabile.

1. Scorrere fino al record che si desidera aggiornare.

1. Chiamare la funzione membro [Edit](../../mfc/reference/crecordset-class.md#edit) dell'oggetto recordset.

   `Edit`prepara il recordset in modo che funga da buffer di modifica. Tutti i membri dati di campo sono contrassegnati in modo che il recordset possa indicare in un secondo momento se sono stati modificati. I nuovi valori per i membri dati di campo modificati vengono scritti nell'origine dati quando si chiama [Update](../../mfc/reference/crecordset-class.md#update).

1. Impostare i valori dei membri dati di campo del nuovo record.

   Assegnare valori ai membri dati di campo. Quelli che non assegni i valori rimangono invariati.

1. Chiamare la funzione `Update` membro dell'oggetto recordset.

   `Update`completa la modifica scrivendo il record modificato nell'origine dati. Per informazioni sul verificarsi `Update`se non si riesce a chiamare , vedere [Recordset: modalità di aggiornamento dei record dell'oggetto Recordset (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md).

Dopo aver modificato un record, il record modificato rimane il record corrente.

Nell'esempio seguente `Edit` viene illustrata un'operazione. Si presuppone che l'utente si sia spostato in un record che desidera modificare.

```cpp
rsStudent.Edit( );
rsStudent.m_strStreet = strNewStreet;
rsStudent.m_strCity = strNewCity;
rsStudent.m_strState = strNewState;
rsStudent.m_strPostalCode = strNewPostalCode;
if( !rsStudent.Update( ) )
{
    AfxMessageBox( "Record not updated; no field values were set." );
    return FALSE;
}
```

> [!TIP]
> Per `AddNew` annullare `Edit` un o chiamare, `AddNew` `Edit` è `Move` sufficiente effettuare un'altra chiamata a o o chiamare con il *parametro AFX_MOVE_REFRESH.* I membri dati vengono reimpostati sui `Edit` `Add` valori precedenti e si è ancora in modalità o mode.

## <a name="deleting-a-record-from-a-recordset"></a><a name="_core_deleting_a_record_from_a_recordset"></a>Eliminazione di un record da un RecordsetDeleting a Record from a Recordset

È possibile eliminare i record se la funzione membro [CanUpdate](../../mfc/reference/crecordset-class.md#canupdate) del recordset restituisce un valore diverso da zero.

#### <a name="to-delete-a-record"></a>Per eliminare un record

1. Assicurarsi che il recordset sia aggiornabile.

1. Scorrere fino al record che si desidera aggiornare.

1. Chiamare la funzione membro [Delete](../../mfc/reference/crecordset-class.md#delete) dell'oggetto recordset.

   `Delete`contrassegna immediatamente il record come eliminato, sia nel recordset che nell'origine dati.

   A `AddNew` `Edit`differenza `Delete` di `Update` e , non ha alcuna chiamata corrispondente.

1. Scorrere fino a un altro record.

   > [!NOTE]
   >  Quando ci si sposta all'intatto, i record eliminati potrebbero non essere ignorati. Per altre informazioni, vedere la funzione membro [IsDeleted.For](../../mfc/reference/crecordset-class.md#isdeleted) more information, see the IsDeleted member function.

Nell'esempio seguente `Delete` viene illustrata un'operazione. Si presuppone che l'utente è stato spostato in un record che l'utente desidera eliminare. Dopo `Delete` la chiamata, è importante passare a un nuovo record.

```
rsStudent.Delete( );
rsStudent.MoveNext( );
```

Per ulteriori informazioni sugli `AddNew`effetti `Edit`delle `Delete` funzioni membro , , e , vedere [Recordset: modalità di controllo](../../data/odbc/recordset-how-recordsets-update-records-odbc.md)dei record di aggiornamento (ODBC) .

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: blocco dei record (ODBC)](../../data/odbc/recordset-locking-records-odbc.md)
