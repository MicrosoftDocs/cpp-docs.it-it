---
title: 'Recordset: Aggiunta, aggiornamento ed eliminazione di record (ODBC)'
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
ms.openlocfilehash: 28c885119816c1df662cc0b941e02cb3cf747f3d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62395625"
---
# <a name="recordset-adding-updating-and-deleting-records-odbc"></a>Recordset: Aggiunta, aggiornamento ed eliminazione di record (ODBC)

Questo argomento si applica alle classi ODBC MFC.

> [!NOTE]
>  È ora possibile aggiungere i record in blocco in modo più efficiente. Per altre informazioni, vedere [Recordset: Aggiunta di record nel blocco (ODBC)](../../data/odbc/recordset-adding-records-in-bulk-odbc.md).

> [!NOTE]
>  In questo argomento si applica a oggetti derivati da `CRecordset` in quale riga bulk il recupero non è stato implementato. Se si usa il recupero di righe bulk, vedere [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Dynaset e aggiornabili snapshot consentono di aggiungere, modificare (aggiornamento) ed eliminare record. Questo argomento viene illustrato:

- [Come determinare se il recordset è aggiornabile](#_core_determining_whether_your_recordset_is_updatable).

- [Come aggiungere un nuovo record](#_core_adding_a_record_to_a_recordset).

- [Come modificare un record esistente](#_core_editing_a_record_in_a_recordset).

- [Come eliminare un record](#_core_deleting_a_record_from_a_recordset).

Per altre informazioni sull'esecuzione degli aggiornamenti e come vengono visualizzati gli aggiornamenti ad altri utenti, vedere [Recordset: Aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md). In genere, quando si aggiungere, modificare o eliminare un record, il set di record viene modificato l'origine dati immediatamente. È anche possibile raggruppare gli aggiornamenti correlati in transazioni. Se è in corso una transazione, l'aggiornamento non è definitivo finché non si esegue il commit della transazione. In questo modo è possibile riportare o il rollback delle modifiche. Per informazioni sulle transazioni, vedere [transazione (ODBC)](../../data/odbc/transaction-odbc.md).

Nella tabella seguente vengono riepilogate le opzioni disponibili per i recordset con caratteristiche di aggiornamento diversi.

### <a name="recordset-readupdate-options"></a>Opzioni di lettura/aggiornamento di recordset

|Tipo|Lettura|Modifica record|Eliminazione del record|Aggiungi nuovo (aggiungere)|
|----------|----------|-----------------|-------------------|------------------------|
|Sola lettura|Y|N|N|N|
|Solo l'accodamento|Y|N|N|Y|
|Completamente aggiornabile|Y|Y|Y|Y|

##  <a name="_core_determining_whether_your_recordset_is_updatable"></a> Determinare se il Recordset è aggiornabile

Un oggetto recordset è aggiornabile se l'origine dati sia aggiornabile ed è stato aperto il recordset in aggiornabili. Relativo aggiornabilità dipende inoltre l'istruzione SQL si usa, le funzionalità del driver ODBC, e se la libreria di cursori ODBC è in memoria. È possibile aggiornare un'origine dati o recordset sola lettura.

#### <a name="to-determine-whether-your-recordset-is-updatable"></a>Per determinare se il recordset è aggiornabile

1. Chiamare il metodo dell'oggetto recordset [CanUpdate](../../mfc/reference/crecordset-class.md#canupdate) funzione membro.

   `CanUpdate` Restituisce un valore diverso da zero se il recordset è aggiornabile.

Per impostazione predefinita, vengono completamente aggiornabili recordset (è possibile eseguire `AddNew`, `Edit`, e `Delete` operazioni). Ma è anche possibile usare la [appendOnly](../../mfc/reference/crecordset-class.md#open) opzione per aprire recordset aggiornabili. Un recordset aperto in questo modo consente solo l'aggiunta di nuovi record con `AddNew`. È possibile modificare o eliminare i record esistenti. È possibile verificare se un recordset è aperto solo per l'aggiunta chiamando il [CanAppend](../../mfc/reference/crecordset-class.md#canappend) funzione membro. `CanAppend` Restituisce un valore diverso da zero se il recordset è aggiornabile o completamente aperto solo per l'aggiunta.

Il codice seguente illustra come è possibile usare `CanUpdate` per un oggetto recordset denominato `rsStudentSet`:

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
>  Quando ci si prepara aggiornare un recordset chiamando `Update`, prestare attenzione che il recordset includa tutte le colonne che costituiscono la chiave primaria della tabella (o tutte le colonne di un indice univoco nella tabella). In alcuni casi, il framework può usare solo le colonne selezionate nel set di record per identificare i record nella tabella da aggiornare. Senza tutte le colonne necessari, potrebbe essere aggiornato più record nella tabella, compromettere l'integrità referenziale della tabella. In questo caso, il framework genera eccezioni quando si chiama `Update`.

##  <a name="_core_adding_a_record_to_a_recordset"></a> Aggiungere un Record a un Recordset

È possibile aggiungere nuovi record a un oggetto recordset se relativi [CanAppend](../../mfc/reference/crecordset-class.md#canappend) funzione membro restituisce un valore diverso da zero.

#### <a name="to-add-a-new-record-to-a-recordset"></a>Per aggiungere un nuovo record a un set di record

1. Assicurarsi che il recordset è abilitato per le aggiunte.

1. Chiamare il metodo dell'oggetto recordset [AddNew](../../mfc/reference/crecordset-class.md#addnew) funzione membro.

   `AddNew` Prepara il recordset di agire come buffer di modifica. Tutti i membri dati di campo vengono impostati sul valore speciale Null e contrassegnati come non modificate (dirty) stati modificati soltanto i valori vengono scritti nell'origine dati quando si chiama [Update](../../mfc/reference/crecordset-class.md#update).

1. Impostare i valori dei membri dati di campo del nuovo record.

   Assegnare valori ai membri dati del campo. Questi che non vengono assegnate non vengono scritte nell'origine dati.

1. Chiamare il metodo dell'oggetto recordset `Update` funzione membro.

   `Update` completa l'aggiunta mediante la scrittura del nuovo record nell'origine dati. Per informazioni sugli effetti se non si riesce a chiamare `Update`, vedere [Recordset: Aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md).

Per informazioni sull'aggiunta di record e su quando i record aggiunti sono visibili nel set di record, vedere [Recordset: Come dei metodi AddNew, Edit e Delete (ODBC) lavoro](../../data/odbc/recordset-how-addnew-edit-and-delete-work-odbc.md).

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
>  Per annullare un' `AddNew` o `Edit` chiamare, è sufficiente eseguire un'altra chiamata a `AddNew` o `Edit` oppure chiamare `Move` con le *AFX_MOVE_REFRESH* parametro. I membri dati vengono reimpostati ai valori precedenti e trovano ancora nello `Edit` o `Add` modalità.

##  <a name="_core_editing_a_record_in_a_recordset"></a> Modifica di un Record in un Recordset

Se è possibile modificare i record esistenti del recordset [CanUpdate](../../mfc/reference/crecordset-class.md#canupdate) funzione membro restituisce un valore diverso da zero.

#### <a name="to-edit-an-existing-record-in-a-recordset"></a>Per modificare un record esistente in un recordset

1. Assicurarsi che il recordset è aggiornabile.

1. Scorrere verso il record da aggiornare.

1. Chiamare il metodo dell'oggetto recordset [modifica](../../mfc/reference/crecordset-class.md#edit) funzione membro.

   `Edit` Prepara il recordset di agire come buffer di modifica. Tutti i membri dati di campo sono contrassegnati in modo che il recordset può indicare in un secondo momento se sono stati modificati. I nuovi valori per i membri del campo modificato i dati vengono scritti nell'origine dati quando si chiama [Update](../../mfc/reference/crecordset-class.md#update).

1. Impostare i valori dei membri dati di campo del nuovo record.

   Assegnare valori ai membri dati del campo. Quelli che non si assegnano valori rimangono invariati.

1. Chiamare il metodo dell'oggetto recordset `Update` funzione membro.

   `Update` completa la modifica mediante la scrittura del record modificato all'origine dati. Per informazioni sugli effetti se non si riesce a chiamare `Update`, vedere [Recordset: Aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md).

Dopo aver modificato un record, il record modificato rimane il record corrente.

L'esempio seguente mostra un `Edit` operazione. Si presuppone che l'utente è stato spostato in un record che desidera modificare.

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
> Per annullare un' `AddNew` o `Edit` chiamare, è sufficiente eseguire un'altra chiamata a `AddNew` o `Edit` oppure chiamare `Move` con le *AFX_MOVE_REFRESH* parametro. I membri dati vengono reimpostati ai valori precedenti e trovano ancora nello `Edit` o `Add` modalità.

##  <a name="_core_deleting_a_record_from_a_recordset"></a> Eliminazione di un Record da un Recordset

Se è possibile eliminare i record del recordset [CanUpdate](../../mfc/reference/crecordset-class.md#canupdate) funzione membro restituisce un valore diverso da zero.

#### <a name="to-delete-a-record"></a>Per eliminare un record

1. Assicurarsi che il recordset è aggiornabile.

1. Scorrere verso il record da aggiornare.

1. Chiamare il metodo dell'oggetto recordset [eliminare](../../mfc/reference/crecordset-class.md#delete) funzione membro.

   `Delete` Contrassegna immediatamente come eliminato sia nel set di record nell'origine dati.

   A differenza `AddNew` e `Edit`, `Delete` non esiste alcun corrispondente `Update` chiamare.

1. Scorrere fino a un altro record.

   > [!NOTE]
   >  Quando si sposta nel recordset, non è possibile ignorare i record eliminati. Per altre informazioni, vedere la [IsDeleted](../../mfc/reference/crecordset-class.md#isdeleted) funzione membro.

L'esempio seguente mostra un `Delete` operazione. Si presuppone che l'utente è stato spostato in un record che l'utente vuole eliminare. Dopo aver `Delete` viene chiamato, è importante spostare in un nuovo record.

```
rsStudent.Delete( );
rsStudent.MoveNext( );
```

Per altre informazioni sugli effetti della `AddNew`, `Edit`, e `Delete` funzioni membro, vedere [Recordset: Aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md).

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: blocco di record (ODBC)](../../data/odbc/recordset-locking-records-odbc.md)