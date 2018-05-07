---
title: 'Recordset: Aggiunta, aggiornamento ed eliminazione di record (ODBC) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: af3a3eb08ce5749c0cfe5ca2d1f59213826ff7ce
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="recordset-adding-updating-and-deleting-records-odbc"></a>Recordset: aggiunta, aggiornamento ed eliminazione di record (ODBC)
Questo argomento si applica alle classi ODBC MFC.  
  
> [!NOTE]
>  È ora possibile aggiungere i record in blocco in modo più efficiente. Per ulteriori informazioni, vedere [Recordset: aggiunta di massa di record (ODBC)](../../data/odbc/recordset-adding-records-in-bulk-odbc.md).  
  
> [!NOTE]
>  Questo argomento si applica agli oggetti derivati da `CRecordset` in quale riga bulk recupero non è stato implementato. Se si utilizza il recupero di righe di massa, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Dynaset e snapshot aggiornabile consente di aggiungere, modificare (aggiornamento) ed eliminare record. Questo argomento viene illustrato:  
  
-   [Come determinare se il recordset è aggiornabile](#_core_determining_whether_your_recordset_is_updatable).  
  
-   [Come aggiungere un nuovo record](#_core_adding_a_record_to_a_recordset).  
  
-   [Come modificare un record esistente](#_core_editing_a_record_in_a_recordset).  
  
-   [Come eliminare un record](#_core_deleting_a_record_from_a_recordset).  
  
 Per ulteriori informazioni sull'esecuzione degli aggiornamenti e la modalità di aggiornamenti ad altri utenti, vedere [Recordset: aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md). In genere, quando si aggiungere, modificare o eliminare un record, il recordset viene modificato l'origine dati immediatamente. È anche possibile raggruppare gli aggiornamenti correlati in transazioni. Se una transazione è in corso, l'aggiornamento non è definitivo finché non si esegue il commit della transazione. Ciò consente di riportare o il rollback delle modifiche. Per informazioni sulle transazioni, vedere [transazione (ODBC)](../../data/odbc/transaction-odbc.md).  
  
 Nella tabella seguente sono riepilogate le opzioni disponibili per i recordset con caratteristiche di aggiornamento diversi.  
  
### <a name="recordset-readupdate-options"></a>Opzioni di lettura o l'aggiornamento di recordset  
  
|Tipo|Lettura|Modifica di record|Elimina record|Aggiungi nuovo (aggiungere)|  
|----------|----------|-----------------|-------------------|------------------------|  
|Sola lettura|Y|N|N|N|  
|Solo di Accodamento|Y|N|N|Y|  
|Completamente aggiornabili|Y|Y|Y|Y|  
  
##  <a name="_core_determining_whether_your_recordset_is_updatable"></a> Determinare se il Recordset è aggiornabile  
 Se l'origine dati è aggiornabile e aperto il recordset come aggiornabile, un oggetto recordset è aggiornabile. La possibilità di aggiornamento dipende inoltre l'istruzione SQL, utilizzare le funzionalità del driver ODBC e se la libreria di cursori ODBC è in memoria. È possibile aggiornare un'origine dati o recordset sola lettura.  
  
#### <a name="to-determine-whether-your-recordset-is-updatable"></a>Per determinare se il recordset è aggiornabile  
  
1.  Chiamare il metodo dell'oggetto recordset [CanUpdate](../../mfc/reference/crecordset-class.md#canupdate) funzione membro.  
  
     `CanUpdate` Restituisce un valore diverso da zero se il recordset è aggiornabile.  
  
 Per impostazione predefinita, sono completamente aggiornabili recordset (è possibile eseguire `AddNew`, **modifica**, e **eliminare** operazioni). Ma è anche possibile usare il [appendOnly](../../mfc/reference/crecordset-class.md#open) opzione per aprire i recordset aggiornabili. Un recordset aperto in questo modo consente solo l'aggiunta di nuovi record con `AddNew`. È possibile modificare o eliminare i record esistenti. È possibile verificare se un recordset è aperto solo per operazioni di aggiunta chiamando il [CanAppend](../../mfc/reference/crecordset-class.md#canappend) funzione membro. `CanAppend` Restituisce un valore diverso da zero se il recordset è aggiornabile o completamente aperto solo per l'aggiunta.  
  
 Il codice seguente viene illustrato come è possibile utilizzare `CanUpdate` per un oggetto recordset denominato `rsStudentSet`:  
  
```  
if( !rsStudentSet.Open( ) )  
    return FALSE;  
if( !rsStudentSet.CanUpdate( ) )  
{  
    AfxMessageBox( "Unable to update the Student recordset." );  
    return;  
}  
```  
  
> [!CAUTION]
>  Quando si prepara l'aggiornamento di un recordset chiamando **aggiornare**, verificare che il recordset includa tutte le colonne che costituiscono la chiave primaria della tabella (o tutte le colonne di un indice univoco nella tabella). In alcuni casi, il framework può utilizzare solo le colonne selezionate nel recordset per identificare il record della tabella da aggiornare. Senza tutte le colonne necessarie, è possibile aggiornare più record nella tabella, compromettere l'integrità referenziale della tabella. In questo caso, il framework genera eccezioni quando si chiama **aggiornamento**.  
  
##  <a name="_core_adding_a_record_to_a_recordset"></a> Aggiungere un Record a un Recordset  
 È possibile aggiungere nuovi record a un oggetto recordset, se il relativo [CanAppend](../../mfc/reference/crecordset-class.md#canappend) funzione membro restituisce un valore diverso da zero.  
  
#### <a name="to-add-a-new-record-to-a-recordset"></a>Per aggiungere un nuovo record a un recordset  
  
1.  Assicurarsi che quest'ultimo è abilitato per le aggiunte.  
  
2.  Chiamare il metodo dell'oggetto recordset [AddNew](../../mfc/reference/crecordset-class.md#addnew) funzione membro.  
  
     `AddNew` Prepara il recordset di agire come buffer di modifica. Tutti i membri di dati di campo vengono impostati sul valore speciale Null e contrassegnati come invariati modificato (dirty) soltanto i valori vengono scritti nell'origine dati quando si chiama [aggiornamento](../../mfc/reference/crecordset-class.md#update).  
  
3.  Impostare i valori dei membri dati di campo del nuovo record.  
  
     Assegnare valori ai membri di dati del campo. Quelli che non si assegna non vengono scritti nell'origine dati.  
  
4.  Chiamare il metodo dell'oggetto recordset **aggiornamento** funzione membro.  
  
     **Aggiornamento** viene completata l'aggiunta mediante la scrittura del nuovo record per l'origine dati. Per informazioni sugli effetti se non è possibile chiamare **aggiornamento**, vedere [Recordset: aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md).  
  
 Per informazioni sull'aggiunta di record e su quando i record aggiunti sono visibili nel recordset, vedere [Recordset: funzionamento dei metodi AddNew, Edit e Delete (ODBC)](../../data/odbc/recordset-how-addnew-edit-and-delete-work-odbc.md).  
  
 Nell'esempio seguente viene illustrato come aggiungere un nuovo record:  
  
```  
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
>  Per annullare un `AddNew` o **modifica** chiamare, è sufficiente eseguire un'altra chiamata a `AddNew` o **modifica** o chiamare **spostare** con il **AFX_MOVE_REFRESH**  parametro. Membri dati vengono reimpostati ai valori precedenti e continuerà a essere **modifica** o **Aggiungi** modalità.  
  
##  <a name="_core_editing_a_record_in_a_recordset"></a> Modifica di un Record in un Recordset  
 È possibile modificare i record esistenti se il recordset [CanUpdate](../../mfc/reference/crecordset-class.md#canupdate) funzione membro restituisce un valore diverso da zero.  
  
#### <a name="to-edit-an-existing-record-in-a-recordset"></a>Per modificare un record esistente in un recordset  
  
1.  Verificare che il recordset è aggiornabile.  
  
2.  Scorrere verso il record che si desidera aggiornare.  
  
3.  Chiamare il metodo dell'oggetto recordset [modifica](../../mfc/reference/crecordset-class.md#edit) funzione membro.  
  
     **Modifica** Prepara il recordset di agire come buffer di modifica. Tutti i membri di dati di campo sono contrassegnati in modo che il recordset può indicare in un secondo momento se sono stati modificati. Quando si chiama all'origine dati vengono scritti i nuovi valori per i membri dati di campo modificato [aggiornamento](../../mfc/reference/crecordset-class.md#update).  
  
4.  Impostare i valori dei membri dati di campo del nuovo record.  
  
     Assegnare valori ai membri di dati del campo. Quelli che non si assegnano valori rimangono invariati.  
  
5.  Chiamare il metodo dell'oggetto recordset **aggiornamento** funzione membro.  
  
     **Aggiornamento** completa la modifica per la scrittura del record modificato all'origine dati. Per informazioni sugli effetti se non è possibile chiamare **aggiornamento**, vedere [Recordset: aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md).  
  
 Dopo aver modificato un record, record modificato rimane il record corrente.  
  
 Nell'esempio seguente un **modifica** operazione. Si presuppone che l'utente è stato spostato in un record che desidera modificare.  
  
```  
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
>  Per annullare un `AddNew` o **modifica** chiamare, è sufficiente eseguire un'altra chiamata a `AddNew` o **modifica** o chiamare **spostare** con il **AFX_MOVE_REFRESH**  parametro. Membri dati vengono reimpostati ai valori precedenti e continuerà a essere **modifica** o **Aggiungi** modalità.  
  
##  <a name="_core_deleting_a_record_from_a_recordset"></a> Eliminazione di un Record da un Recordset  
 Se è possibile eliminare i record del recordset [CanUpdate](../../mfc/reference/crecordset-class.md#canupdate) funzione membro restituisce un valore diverso da zero.  
  
#### <a name="to-delete-a-record"></a>Per eliminare un record  
  
1.  Verificare che il recordset è aggiornabile.  
  
2.  Scorrere verso il record che si desidera aggiornare.  
  
3.  Chiamare il metodo dell'oggetto recordset [eliminare](../../mfc/reference/crecordset-class.md#delete) funzione membro.  
  
     **Eliminare** immediatamente contrassegna il record come eliminati, del recordset e sull'origine dati.  
  
     A differenza di `AddNew` e **modifica**, **eliminare** non ha corrispondente **aggiornamento** chiamare.  
  
4.  Scorrere fino a un altro record.  
  
    > [!NOTE]
    >  Quando si scorre un recordset, non è possibile ignorare i record eliminati. Per ulteriori informazioni, vedere il [IsDeleted](../../mfc/reference/crecordset-class.md#isdeleted) funzione membro.  
  
 Nell'esempio seguente un **eliminare** operazione. Si presuppone che l'utente è stato spostato in un record che si desidera eliminare. Dopo aver **eliminare** viene chiamato, è importante spostare in un nuovo record.  
  
```  
rsStudent.Delete( );  
rsStudent.MoveNext( );  
```  
  
 Per ulteriori informazioni sugli effetti del `AddNew`, **modifica**, e **eliminare** funzioni membro, vedere [Recordset: aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Recordset (ODBC)](../../data/odbc/recordset-odbc.md)   
 [Recordset: blocco dei record (ODBC)](../../data/odbc/recordset-locking-records-odbc.md)