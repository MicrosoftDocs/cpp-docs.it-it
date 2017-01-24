---
title: "Recordset: aggiunta, aggiornamento ed eliminazione di record (ODBC) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AddNew (metodo)"
  - "dati in recordset [C++]"
  - "ODBC (recordset) [C++], aggiunta di record"
  - "ODBC (recordset) [C++], eliminazione di record"
  - "ODBC (recordset) [C++], modifica di record"
  - "modifica di record [C++]"
  - "modifica di record [C++], in recordset"
  - "record [C++], aggiunta"
  - "record [C++], eliminazione"
  - "record [C++], modifica"
  - "record [C++], aggiornamento"
  - "recordset [C++], aggiunta di record"
  - "recordset [C++], eliminazione di record"
  - "recordset [C++], modifica di record"
  - "recordset [C++], aggiornamento"
ms.assetid: 760c8889-bec4-482b-a8f2-319792a6af98
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Recordset: aggiunta, aggiornamento ed eliminazione di record (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'argomento è relativo alle classi ODBC MFC.  
  
> [!NOTE]
>  Ora è possibile effettuare l'aggiunta di massa dei record in modo più efficace.  Per ulteriori informazioni, vedere [Recordset: aggiunta di massa di record \(ODBC\)](../../data/odbc/recordset-adding-records-in-bulk-odbc.md).  
  
> [!NOTE]
>  L'argomento è relativo agli oggetti derivati da `CRecordset` per cui il recupero di massa di righe non è ancora stato implementato.  Se si utilizza il recupero di massa di righe, vedere [Recordset: recupero di massa di record \(ODBC\)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Gli snapshot e i dynaset aggiornabili consentono di aggiungere, modificare \(aggiornare\) ed eliminare i record.  In questo argomento vengono fornite informazioni su:  
  
-   [Come determinare se il recordset è aggiornabile](#_core_determining_whether_your_recordset_is_updatable).  
  
-   [Aggiunta di un record a un recordset](#_core_adding_a_record_to_a_recordset).  
  
-   [Modifica di un record in un recordset](#_core_editing_a_record_in_a_recordset).  
  
-   [Eliminazione di un record da un recordset](#_core_deleting_a_record_from_a_recordset).  
  
 Per ulteriori informazioni sull'esecuzione degli aggiornamenti e sulla relativa visualizzazione per altri utenti, vedere [Recordset: aggiornamento dei record \(ODBC\)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md).  Quando si aggiunge, si modifica o si elimina un record, l'origine dati viene in genere modificata immediatamente dal recordset.  È anche possibile raggruppare gli aggiornamenti correlati nelle transazioni.  Se una transazione è in corso, l'aggiornamento non è definitivo fino a quando non si esegue il commit della transazione stessa.  In tal modo, è possibile annullare le modifiche tramite il rollback.  Per informazioni sulle transazioni, vedere [Transazione \(ODBC\)](../../data/odbc/transaction-odbc.md).  
  
 Nella tabella riportata di seguito vengono riepilogate le opzioni disponibili per i recordset con caratteristiche di aggiornamento differenti.  
  
### Opzioni di lettura\/aggiornamento dei recordset  
  
|Type|Read|Modifica di record|Eliminazione di record|Aggiunta di nuovi record|  
|----------|----------|------------------------|----------------------------|------------------------------|  
|Sola lettura|Y|N|N|N|  
|Solo accodamento|Y|N|N|Y|  
|Completamente aggiornabile|Y|Y|Y|Y|  
  
##  <a name="_core_determining_whether_your_recordset_is_updatable"></a> Come determinare se il recordset è aggiornabile  
 Se l'origine dati è aggiornabile e il recordset viene aperto come aggiornabile, l'oggetto recordset sarà aggiornabile.  L'aggiornabilità del recordset dipende inoltre dall'istruzione SQL utilizzata, dalle proprietà del driver ODBC e dalla presenza in memoria della libreria di cursori ODBC.  Non è possibile aggiornare un'origine dati o un recordset in sola lettura.  
  
#### Per determinare se il recordset è aggiornabile  
  
1.  Chiamare la funzione membro [CanUpdate](../Topic/CRecordset::CanUpdate.md) dell'oggetto recordset.  
  
     Se il recordset è aggiornabile, `CanUpdate` restituirà un valore diverso da zero.  
  
 Per impostazione predefinita, i recordset supportano l'aggiornamento completo, ovvero su di essi è possibile effettuare le operazioni `AddNew`, **Edit** e **Delete**.  Anche l'opzione [appendOnly](../Topic/CRecordset::Open.md) consente di aprire i recordset aggiornabili.  Se un recordset viene aperto in questo modo, è solo possibile aggiungere nuovi record con `AddNew`.  Non è infatti possibile modificare o eliminare i record esistenti.  È possibile verificare se un recordset è aperto solo per operazioni di aggiunta chiamando la funzione membro [CanAppend](../Topic/CRecordset::CanAppend.md).  `CanAppend` restituisce un valore diverso da zero se il recordset è completamente aggiornabile o aperto solo per operazioni di aggiunta.  
  
 Nel codice seguente viene illustrato l'utilizzo di `CanUpdate` per un oggetto recordset denominato `rsStudentSet`:  
  
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
>  Quando si prepara l'aggiornamento di un recordset chiamando **Update**, verificare che il recordset includa tutte le colonne che costituiscono la chiave primaria della tabella o tutte le colonne di qualsiasi indice univoco della tabella.  In alcuni casi, il framework può utilizzare solo le colonne selezionate nel recordset per identificare il record da aggiornare nella tabella.  Senza tutte le colonne necessarie, l'aggiornamento di più record nella tabella potrebbe compromettere l'integrità referenziale della tabella.  In tal caso, quando si chiama **Update**, il framework genera eccezioni.  
  
##  <a name="_core_adding_a_record_to_a_recordset"></a> Aggiunta di un record a un recordset  
 Se la funzione membro [CanAppend](../Topic/CRecordset::CanAppend.md) di un recordset restituisce un valore diverso da zero, è possibile aggiungere nuovi record al recordset.  
  
#### Per aggiungere un nuovo record a un recordset  
  
1.  Assicurarsi che il recordset sia abilitato per le aggiunte.  
  
2.  Chiamare la funzione membro [AddNew](../Topic/CRecordset::AddNew.md) dell'oggetto recordset.  
  
     `AddNew` preparerà il recordset in modo che funga da buffer di modifica.  Tutti i membri dati di campo vengono impostati sul valore speciale Null e contrassegnati come invariati. In tal modo, quando si chiama [Update](../Topic/CRecordset::Update.md), verranno scritti nell'origine dati solo i valori modificati.  
  
3.  Impostare i valori dei membri dati di campo del nuovo record.  
  
     Assegnare i valori ai membri dati di campo.  I membri dati a cui non vengono assegnati valori non verranno scritti nell'origine dati.  
  
4.  Chiamare la funzione membro **Update** dell'oggetto recordset.  
  
     **Update** completa l'aggiunta scrivendo il nuovo record nell'origine dati.  Per informazioni sugli effetti della mancata riuscita della chiamata a **Update**, vedere [Recordset: aggiornamento dei record \(ODBC\)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md).  
  
 Per informazioni sull'aggiunta di record e sui casi in cui è possibile visualizzare i record aggiunti nel recordset, vedere [Recordset: funzionamento dei metodi AddNew, Edit e Delete \(ODBC\)](../../data/odbc/recordset-how-addnew-edit-and-delete-work-odbc.md).  
  
 Nell’esempio seguente viene illustrata l'aggiunta di un nuovo record:  
  
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
>  Per annullare una chiamata ad `AddNew` o a **Edit**, è sufficiente eseguire un'altra chiamata ad `AddNew` o a **Edit** oppure chiamare **Move** con il parametro **AFX\_MOVE\_REFRESH**.  Verranno ripristinati i valori precedenti dei membri dati e continuerà a essere attivata la modalità **Edit** o **Add**.  
  
##  <a name="_core_editing_a_record_in_a_recordset"></a> Modifica di un record in un recordset  
 Se la funzione membro [CanUpdate](../Topic/CRecordset::CanUpdate.md) del recordset restituisce un valore diverso da zero, è possibile modificare i record esistenti.  
  
#### Per modificare un record esistente in un recordset  
  
1.  Assicurarsi che il recordset sia aggiornabile.  
  
2.  Passare al record che si desidera aggiornare.  
  
3.  Chiamare la funzione membro [Edit](../Topic/CRecordset::Edit.md) dell'oggetto recordset.  
  
     **Edit** preparerà il recordset in modo che funga da buffer di modifica.  Tutti i membri dati di campo vengono contrassegnati in modo che il recordset possa in seguito indicare eventuali modifiche apportate a tali membri.  Quando si chiama [Update](../Topic/CRecordset::Update.md), i nuovi valori dei membri dati di campo modificati vengono scritti nell'origine dati.  
  
4.  Impostare i valori dei membri dati di campo del nuovo record.  
  
     Assegnare i valori ai membri dati di campo.  I membri dati a cui non si assegnano valori resteranno invariati.  
  
5.  Chiamare la funzione membro **Update** dell'oggetto recordset.  
  
     **Update** completa la modifica scrivendo il record modificato nell'origine dati.  Per informazioni sugli effetti della mancata riuscita della chiamata a **Update**, vedere [Recordset: aggiornamento dei record \(ODBC\)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md).  
  
 Dopo che un record viene modificato, esso rimane il record corrente.  
  
 Nell'esempio riportato di seguito viene illustrata un'operazione **Edit**.  Si suppone che l'utente sia passato a un record che desidera modificare.  
  
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
>  Per annullare una chiamata ad `AddNew` o a **Edit**, è sufficiente eseguire un'altra chiamata ad `AddNew` o a **Edit** oppure chiamare **Move** con il parametro **AFX\_MOVE\_REFRESH**.  Verranno ripristinati i valori precedenti dei membri dati e continuerà a essere attivata la modalità **Edit** o **Add**.  
  
##  <a name="_core_deleting_a_record_from_a_recordset"></a> Eliminazione di un record da un recordset  
 Se la funzione membro [CanUpdate](../Topic/CRecordset::CanUpdate.md) del recordset restituisce un valore diverso da zero, è possibile eliminare i record.  
  
#### Per eliminare un record  
  
1.  Assicurarsi che il recordset sia aggiornabile.  
  
2.  Passare al record che si desidera aggiornare.  
  
3.  Chiamare la funzione membro [Delete](../Topic/CRecordset::Delete.md) dell'oggetto recordset.  
  
     **Delete** contrassegnerà immediatamente il record come eliminato, sia nel recordset che nell'origine dati.  
  
     A differenza di `AddNew` ed **Edit**, **Delete** non ha una chiamata a **Update** corrispondente.  
  
4.  Passare a un altro record.  
  
    > [!NOTE]
    >  Quando ci si sposta all'interno di un recordset, non è possibile ignorare i record eliminati.  Per ulteriori informazioni, vedere la funzione membro [IsDeleted](../Topic/CRecordset::IsDeleted.md).  
  
 Nell'esempio riportato di seguito viene illustrata un'operazione **Delete**.  Si suppone che l'utente sia passato a un record che desidera eliminare.  Dopo la chiamata a **Delete**, è necessario spostarsi su un nuovo record.  
  
```  
rsStudent.Delete( );  
rsStudent.MoveNext( );  
```  
  
 Per ulteriori informazioni sugli effetti delle funzioni membro `AddNew`, **Edit** e **Delete**, vedere [Recordset: aggiornamento dei record \(ODBC\)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md).  
  
## Vedere anche  
 [Recordset \(ODBC\)](../../data/odbc/recordset-odbc.md)   
 [Recordset: blocco dei record \(ODBC\)](../../data/odbc/recordset-locking-records-odbc.md)