---
description: 'Ulteriori informazioni su: Recordset: aggiunta, aggiornamento ed eliminazione di record (ODBC)'
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
ms.openlocfilehash: 20af392182481cc786d65567b4db1547d703ba0e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97186142"
---
# <a name="recordset-adding-updating-and-deleting-records-odbc"></a>Recordset: aggiunta, aggiornamento ed eliminazione di record (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

> [!NOTE]
> È ora possibile aggiungere i record in blocco in modo più efficiente. Per ulteriori informazioni, vedere [Recordset: aggiunta di record in blocco (ODBC)](../../data/odbc/recordset-adding-records-in-bulk-odbc.md).

> [!NOTE]
> Questo argomento si applica agli oggetti derivati da `CRecordset` in cui non è stato implementato il recupero di massa di righe. Se si utilizza il recupero di righe bulk, vedere [Recordset: recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Gli snapshot e i dynaset aggiornabili consentono di aggiungere, modificare (aggiornare) ed eliminare record. In questo argomento:

- [Come determinare se il recordset è aggiornabile](#_core_determining_whether_your_recordset_is_updatable).

- [Come aggiungere un nuovo record](#_core_adding_a_record_to_a_recordset).

- [Come modificare un record esistente](#_core_editing_a_record_in_a_recordset).

- [Come eliminare un record](#_core_deleting_a_record_from_a_recordset).

Per ulteriori informazioni sul modo in cui vengono eseguiti gli aggiornamenti e sul modo in cui gli aggiornamenti vengono visualizzati ad altri utenti, vedere [Recordset: aggiornamento dei record (ODBC) dei recordset](../../data/odbc/recordset-how-recordsets-update-records-odbc.md). In genere, quando si aggiunge, modifica o Elimina un record, il recordset modifica immediatamente l'origine dati. È invece possibile raggruppare in batch i gruppi di aggiornamenti correlati nelle transazioni. Se è in corso una transazione, l'aggiornamento non diventa finale fino a quando non si esegue il commit della transazione. In questo modo è possibile eseguire il rollback o il rollback delle modifiche. Per informazioni sulle transazioni, vedere [Transaction (ODBC)](../../data/odbc/transaction-odbc.md).

Nella tabella seguente sono riepilogate le opzioni disponibili per i recordset con caratteristiche di aggiornamento diverse.

### <a name="recordset-readupdate-options"></a>Opzioni di lettura/aggiornamento Recordset

|Tipo|Lettura|Modificare il record|Eliminare il record|Aggiungi nuovo (Accodamento)|
|----------|----------|-----------------|-------------------|------------------------|
|Sola lettura|S|N|N|N|
|Solo Accodamento|S|N|N|S|
|Completamente aggiornabile|S|S|S|S|

## <a name="determining-whether-your-recordset-is-updateable"></a><a name="_core_determining_whether_your_recordset_is_updatable"></a> Determinare se il recordset è aggiornabile

Un oggetto recordset è aggiornabile se l'origine dati è aggiornabile e il recordset è stato aperto come aggiornabile. L'aggiornamento dipende inoltre dall'istruzione SQL utilizzata, dalle funzionalità del driver ODBC e dal fatto che la libreria di cursori ODBC sia in memoria. Non è possibile aggiornare un recordset o un'origine dati di sola lettura.

#### <a name="to-determine-whether-your-recordset-is-updatable"></a>Per determinare se il recordset è aggiornabile

1. Chiamare la funzione membro [CanUpdate](../../mfc/reference/crecordset-class.md#canupdate) dell'oggetto recordset.

   `CanUpdate` Restituisce un valore diverso da zero se il recordset è aggiornabile.

Per impostazione predefinita, i recordset sono completamente aggiornabili (è possibile `AddNew` eseguire `Edit` operazioni, e `Delete` ). È anche possibile usare l'opzione [appendOnly](../../mfc/reference/crecordset-class.md#open) per aprire i recordset aggiornabili. Un recordset aperto in questo modo consente solo l'aggiunta di nuovi record con `AddNew` . Non è possibile modificare o eliminare i record esistenti. È possibile verificare se un recordset è aperto solo per l'accodamento chiamando la funzione membro [CanAppend](../../mfc/reference/crecordset-class.md#canappend) . `CanAppend` Restituisce un valore diverso da zero se il recordset è completamente aggiornabile o aperto solo per l'accodamento.

Nel codice seguente viene illustrato come utilizzare `CanUpdate` per un oggetto recordset denominato `rsStudentSet` :

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
> Quando si prepara l'aggiornamento di un recordset chiamando `Update` , prestare attenzione che il recordset includa tutte le colonne che costituiscono la chiave primaria della tabella o tutte le colonne di qualsiasi indice univoco nella tabella. In alcuni casi, il Framework può utilizzare solo le colonne selezionate nel recordset per identificare il record nella tabella da aggiornare. Senza tutte le colonne necessarie, più record potrebbero essere aggiornati nella tabella, danneggiando l'integrità referenziale della tabella. In questo caso, il Framework genera eccezioni quando si chiama `Update` .

## <a name="adding-a-record-to-a-recordset"></a><a name="_core_adding_a_record_to_a_recordset"></a> Aggiunta di un record a un recordset

È possibile aggiungere nuovi record a un recordset se la funzione membro [CanAppend](../../mfc/reference/crecordset-class.md#canappend) restituisce un valore diverso da zero.

#### <a name="to-add-a-new-record-to-a-recordset"></a>Per aggiungere un nuovo record a un recordset

1. Verificare che il recordset sia accodabile.

1. Chiamare la funzione membro [AddNew](../../mfc/reference/crecordset-class.md#addnew) dell'oggetto recordset.

   `AddNew` prepara il recordset affinché funga da buffer di modifica. Tutti i membri dati di campo vengono impostati sul valore speciale null e contrassegnati come invariati, in modo che vengano scritti nell'origine dati solo i valori modificati (Dirty) quando si chiama [Update](../../mfc/reference/crecordset-class.md#update).

1. Impostare i valori dei membri dati del campo del nuovo record.

   Assegnare i valori ai membri dati del campo. Quelli non assegnati non vengono scritti nell'origine dati.

1. Chiamare la funzione membro dell'oggetto recordset `Update` .

   `Update` completa l'aggiunta scrivendo il nuovo record nell'origine dati. Per informazioni su si verifica se non è possibile chiamare `Update` , vedere [Recordset: aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md).

Per informazioni sul funzionamento dell'aggiunta dei record e sui casi in cui i record aggiunti sono visibili nel recordset, vedere [Recordset: come usare AddNew, Edit e Delete (ODBC)](../../data/odbc/recordset-how-addnew-edit-and-delete-work-odbc.md).

Nell'esempio seguente viene illustrato come aggiungere un nuovo record:

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
> Per annullare una `AddNew` `Edit` chiamata a o, è sufficiente effettuare un'altra chiamata a `AddNew` o `Edit` o chiamare `Move` con il parametro *AFX_MOVE_REFRESH* . I membri dati vengono reimpostati sui valori precedenti e si è ancora in `Edit` `Add` modalità o.

## <a name="editing-a-record-in-a-recordset"></a><a name="_core_editing_a_record_in_a_recordset"></a> Modifica di un record in un recordset

È possibile modificare i record esistenti se la funzione membro [CanUpdate](../../mfc/reference/crecordset-class.md#canupdate) del recordset restituisce un valore diverso da zero.

#### <a name="to-edit-an-existing-record-in-a-recordset"></a>Per modificare un record esistente in un recordset

1. Verificare che il recordset sia aggiornabile.

1. Scorrere fino al record che si desidera aggiornare.

1. Chiamare la funzione membro [Edit](../../mfc/reference/crecordset-class.md#edit) dell'oggetto recordset.

   `Edit` prepara il recordset affinché funga da buffer di modifica. Tutti i membri dati di campo sono contrassegnati in modo che il recordset possa determinare in seguito se sono stati modificati. I nuovi valori per i membri dati del campo modificati vengono scritti nell'origine dati quando si chiama [Aggiorna](../../mfc/reference/crecordset-class.md#update).

1. Impostare i valori dei membri dati del campo del nuovo record.

   Assegnare i valori ai membri dati del campo. I valori non assegnati rimangono invariati.

1. Chiamare la funzione membro dell'oggetto recordset `Update` .

   `Update` completa la modifica scrivendo il record modificato nell'origine dati. Per informazioni su si verifica se non è possibile chiamare `Update` , vedere [Recordset: aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md).

Dopo aver modificato un record, il record modificato rimane il record corrente.

Nell'esempio seguente viene illustrata un' `Edit` operazione. Si presuppone che l'utente sia stato spostato in un record che desidera modificare.

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
> Per annullare una `AddNew` `Edit` chiamata a o, è sufficiente effettuare un'altra chiamata a `AddNew` o `Edit` o chiamare `Move` con il parametro *AFX_MOVE_REFRESH* . I membri dati vengono reimpostati sui valori precedenti e si è ancora in `Edit` `Add` modalità o.

## <a name="deleting-a-record-from-a-recordset"></a><a name="_core_deleting_a_record_from_a_recordset"></a> Eliminazione di un record da un recordset

È possibile eliminare i record se la funzione membro [CanUpdate](../../mfc/reference/crecordset-class.md#canupdate) del recordset restituisce un valore diverso da zero.

#### <a name="to-delete-a-record"></a>Per eliminare un record

1. Verificare che il recordset sia aggiornabile.

1. Scorrere fino al record che si desidera aggiornare.

1. Chiamare la funzione membro [Delete](../../mfc/reference/crecordset-class.md#delete) dell'oggetto recordset.

   `Delete` contrassegna immediatamente il record come eliminato, sia nel recordset che nell'origine dati.

   A differenza `AddNew` di e `Edit` , `Delete` non ha una `Update` chiamata corrispondente.

1. Scorrere fino a un altro record.

   > [!NOTE]
   >  Quando si esegue il passaggio del recordset, i record eliminati potrebbero non essere ignorati. Per ulteriori informazioni, vedere la funzione membro è stata [eliminata](../../mfc/reference/crecordset-class.md#isdeleted) .

Nell'esempio seguente viene illustrata un' `Delete` operazione. Si presuppone che l'utente sia stato spostato in un record che l'utente desidera eliminare. Dopo la `Delete` chiamata a, è importante passare a un nuovo record.

```
rsStudent.Delete( );
rsStudent.MoveNext( );
```

Per ulteriori informazioni sugli effetti delle `AddNew` `Edit` `Delete` funzioni membro, e, vedere [Recordset: aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md).

## <a name="see-also"></a>Vedi anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: blocco di record (ODBC)](../../data/odbc/recordset-locking-records-odbc.md)
