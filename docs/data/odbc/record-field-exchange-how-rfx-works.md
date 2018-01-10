---
title: 'Campi di record: Funzionamento di RFX | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- record editing [C++], using RFX
- RFX (ODBC) [C++], updating data in recordsets
- scrolling [C++]
- ODBC [C++], RFX
- data binding [C++], DFX
- scrolling [C++], RFX
- RFX (ODBC) [C++], binding fields and parameters
ms.assetid: e647cacd-62b0-4b80-9e20-b392deca5a88
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 5eac97bb87103bd72dfd721515baf58324fc851f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="record-field-exchange-how-rfx-works"></a>Trasferimento di campi di record: funzionamento di RFX
In questo argomento viene illustrato il processo RFX. Si tratta di un avanzato copertura argomento:  
  
-   [RFX e recordset](#_core_rfx_and_the_recordset)  
  
-   [Il processo RFX](#_core_the_record_field_exchange_process)  
  
> [!NOTE]
>  Questo argomento si applica alle classi derivate da `CRecordset` in quale riga bulk recupero non è stato implementato. Se si utilizza il recupero di massa di righe, viene implementata exchange di massa di campi di record (RFX di massa). RFX di massa è simile a RFX. Per comprendere le differenze, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
##  <a name="_core_rfx_and_the_recordset"></a>RFX e Recordset  
 Membri dati di campo dell'oggetto recordset, complessivamente, costituiscono un buffer che contiene le colonne selezionate di un record di modifica. Quando il recordset è aperto e sta per leggere il primo record, RFX associa ogni selezionate colonne per l'indirizzo del membro dei dati di campo appropriato. Quando il recordset aggiorna un record, RFX chiama le funzioni API ODBC per l'invio di un database SQL **aggiornamento** o **inserire** istruzione per il driver. RFX utilizza le informazioni dei membri di dati campo per specificare le colonne da scrivere.  
  
 Il framework esegue il backup nel buffer di modifica in momenti diversi, pertanto è possibile ripristinare il relativo contenuto, se necessario. RFX esegue il backup del buffer di modifica prima di aggiungere un nuovo record e prima di modificare un record esistente. Il buffer di modifica in alcuni casi, ad esempio, viene ripristinato dopo un **aggiornamento** chiamata seguente `AddNew`. Il buffer di modifica non è ripristinato se si annulla un buffer di modifica appena modificato da, ad esempio, lo spostamento in un altro record prima di chiamare **aggiornamento**.  
  
 Oltre allo scambio di dati tra l'origine dati e i membri dati di campo del recordset, RFX gestisce i parametri di associazione. Quando il recordset è aperto, membri di dati di parametro vengono associati in base all'ordine dei "?" segnaposto nell'istruzione SQL che `CRecordset::Open` costrutti. Per ulteriori informazioni, vedere [Recordset: applicazione di parametri a un Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).  
  
 Eseguire l'override della classe recordset di `DoFieldExchange` tutte le operazioni, lo spostamento dei dati in entrambe le direzioni. Ad esempio dati della finestra di dialogo di exchange (DDX), RFX necessita di informazioni sui membri dati della classe. La procedura guidata fornisce le informazioni necessarie per la scrittura di un'implementazione specifica di `DoFieldExchange` , in base ai dati del campo membro nomi e tipi di dati specificato con la procedura guidata.  
  
##  <a name="_core_the_record_field_exchange_process"></a>Processo di scambio di campi di record  
 Questa sezione descrive la sequenza di eventi RFX come un oggetto recordset è aperto e come aggiungere, aggiornare ed eliminare record. La tabella [sequenza di operazioni di RFX durante Recordset apertura](#_core_sequence_of_rfx_operations_during_recordset_open) e la tabella [sequenza delle operazioni di RFX durante lo scorrimento](#_core_sequence_of_rfx_operations_during_scrolling) in questo argomento Mostra il processo come processi RFX un **spostare**comando del recordset e gestione di un aggiornamento. Durante questi processi, [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) viene chiamato per eseguire diverse operazioni. Il **m_nOperation** membro dati di [CFieldExchange](../../mfc/reference/cfieldexchange-class.md) oggetto determina quale operazione richiesta. Può risultare utile leggere [Recordset: selezione dei record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md) e [Recordset: aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md) prima di leggere questo materiale.  
  
###  <a name="_mfc_rfx.3a_.initial_binding_of_columns_and_parameters"></a>RFX: Associazione iniziale di colonne e parametri  
 Si verificano le seguenti attività RFX, nell'ordine indicato, quando si chiama un oggetto recordset [aprire](../../mfc/reference/crecordset-class.md#open) funzione membro:  
  
-   Se il set di record contiene membri dati di parametro, il framework chiama `DoFieldExchange` per associare i parametri per i segnaposto dei parametri nella stringa di istruzione SQL del recordset. Un dipendente dal tipo di rappresentazione del valore del parametro viene utilizzato per ogni segnaposto di dati, vedere il **selezionare** istruzione. Questo errore si verifica dopo che viene preparata l'istruzione SQL ma prima che venga eseguito. Per informazioni sulla preparazione dell'istruzione, vedere il **:: SQLPrepare** funzione ODBC *di riferimento per programmatori*.  
  
-   Il framework chiama `DoFieldExchange` una seconda volta per associare i valori delle colonne selezionate ai corrispondenti membri dati di campo nel recordset. Ciò consente di stabilire l'oggetto recordset come buffer di modifica contenente le colonne del primo record.  
  
-   Il recordset esegue l'istruzione SQL e l'origine dati seleziona il primo record. Le colonne del record vengono caricate in membri di dati di campo del recordset.  
  
 Nella tabella seguente viene illustrata la sequenza delle operazioni di RFX quando si apre un recordset.  
  
### <a name="_core_sequence_of_rfx_operations_during_recordset_open"></a>Sequenza di operazioni di RFX durante l'apertura di Recordset  
  
|L'operazione|DoFieldExchange operazione|Operazione di database di SQL|  
|--------------------|-------------------------------|-----------------------------|  
|1. Aprire l'oggetto recordset.|||  
||2. Compilare un'istruzione SQL.||  
|||3. Invio dell'istruzione SQL.|  
||4. Associare i membri dati di parametro.||  
||5. Membri dati di campo può essere associata alle colonne.||  
|||6. ODBC effettua lo spostamento e inserisce i dati.|  
||7. Trasformazione dei dati per C++.||  
  
 Recordset utilizzare esecuzione preparata di ODBC per consentire la rapida ripetizione della query con la stessa istruzione SQL. Per ulteriori informazioni sull'esecuzione preparata, vedere il SDK di ODBC *di riferimento per programmatori* in MSDN Library.  
  
###  <a name="_mfc_rfx.3a_.scrolling"></a>RFX: lo scorrimento  
 Quando si passa da un record a altro, il framework chiama `DoFieldExchange` per sostituire i valori archiviati in precedenza nei membri di dati di campo con i valori per il nuovo record.  
  
 Nella tabella seguente viene illustrata la sequenza delle operazioni di RFX quando si sposta da un record a altro.  
  
### <a name="_core_sequence_of_rfx_operations_during_scrolling"></a>Sequenza di operazioni di RFX durante lo scorrimento  
  
|L'operazione|DoFieldExchange operazione|Operazione di database di SQL|  
|--------------------|-------------------------------|-----------------------------|  
|1. Chiamare `MoveNext` o una delle altre funzioni di spostamento.|||  
|||2. ODBC effettua lo spostamento e inserisce i dati.|  
||3. Trasformazione dei dati per C++.||  
  
###  <a name="_mfc_rfx.3a_.adding_new_records_and_editing_existing_records"></a>RFX: Aggiunta di nuovi record e modifica di record esistenti  
 Se si aggiunge un nuovo record, il recordset funziona come un buffer di modifica per compilare il contenuto del nuovo record. Come con l'aggiunta di record, la modifica di record comporta la modifica dei valori dei membri dati di campo del recordset. Dal punto di vista RFX, la sequenza è come segue:  
  
1.  La chiamata per il recordset [AddNew](../../mfc/reference/crecordset-class.md#addnew) o [modifica](../../mfc/reference/crecordset-class.md#edit) funzione membro comporta RFX archiviare i buffer di modifica corrente che può essere ripristinato in un secondo momento.  
  
2.  `AddNew`o **modifica** prepara i campi nel buffer di modifica in modo che RFX possa rilevare i membri di dati di campo modificato.  
  
     Poiché un nuovo record non contiene valori precedenti per confrontare i nuovi valori, `AddNew` imposta il valore di ogni membro del campo dati da un **PSEUDO_NULL** valore. Successivamente, quando si chiama **aggiornamento**, RFX confronta il valore di ciascun membro dati con il **PSEUDO_NULL** valore. Se è presente una differenza, il membro dati è stato impostato. (**PSEUDO_NULL** non corrisponde a una colonna di record con un valore Null non è uno di questi elementi come C++ **NULL**.)  
  
     A differenza di **aggiornamento** chiamare per `AddNew`, il **aggiornamento** chiamare per **modifica** confronta i valori aggiornati con i valori memorizzati in precedenza, anziché utilizzare **PSEUDO_NULL**. La differenza è che `AddNew` senza valori memorizzati in precedenza per il confronto.  
  
3.  Impostare direttamente i valori dei membri dati di campo cui si desidera modificare i valori o che si desidera pieno per un nuovo record. Questo può comportare la chiamata `SetFieldNull`.  
  
4.  La chiamata a [aggiornamento](../../mfc/reference/crecordset-class.md#update) controlla i membri di dati di campo modificato, come descritto nel passaggio 2 (vedere la tabella [sequenza delle operazioni di RFX durante lo scorrimento](#_core_sequence_of_rfx_operations_during_scrolling)). Se non sono stati modificati, **aggiornamento** restituisce 0. Se sono stati modificati alcuni membri dati di campo, **aggiornamento** Prepara ed esegue un database SQL **inserire** istruzione che contiene i valori per tutti i campi aggiornati nel record.  
  
5.  Per `AddNew`, **aggiornamento** termina ripristinando i valori memorizzati in precedenza del record corrente prima di `AddNew` chiamare. Per **modifica**, i valori modificati rimangono invariati.  
  
 Nella tabella seguente viene illustrata la sequenza delle operazioni di RFX quando si aggiunge un nuovo record o modificare un record esistente.  
  
### <a name="sequence-of-rfx-operations-during-addnew-and-edit"></a>Sequenza di operazioni di RFX durante AddNew e modifica  
  
|L'operazione|DoFieldExchange operazione|Operazione di database di SQL|  
|--------------------|-------------------------------|-----------------------------|  
|1. Chiamare `AddNew` o **modifica**.|||  
||2. Eseguire il backup del buffer di modifica.||  
||3. Per `AddNew`, contrassegna i membri dati di campo come "clean" e Null.||  
|4. Assegnare valori ai membri dati di campo del recordset.|||  
|5. Chiamare **aggiornamento**.|||  
||6. Controllo dei campi modificati.||  
||7. Compilazione SQL **inserire** istruzione per `AddNew` o **aggiornamento** istruzione per **modifica**.||  
|||8. Invio dell'istruzione SQL.|  
||9. Per `AddNew`, ripristinare il buffer di modifica il contenuto di backup. Per **modifica**, eliminare il backup.||  
  
### <a name="rfx-deleting-existing-records"></a>RFX: Eliminazione di record esistenti  
 Quando si elimina un record, RFX imposta tutti i campi **NULL** ricordare che il record è stato eliminato ed è necessario cambiare posizione. Non è necessario eventuali altre informazioni sulla sequenza RFX.  
  
## <a name="see-also"></a>Vedere anche  
 [Campi di record (RFX)](../../data/odbc/record-field-exchange-rfx.md)   
 [Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)   
 [Macro, funzioni globali e variabili globali](../../mfc/reference/mfc-macros-and-globals.md)  
 [Classe CFieldExchange](../../mfc/reference/cfieldexchange-class.md)   
 [CRecordset::DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange)