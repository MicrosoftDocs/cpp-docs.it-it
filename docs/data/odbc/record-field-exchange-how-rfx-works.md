---
title: "Trasferimento di campi di record: funzionamento di RFX | Microsoft Docs"
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
  - "associazione dati [C++], DFX"
  - "ODBC [C++], RFX"
  - "modifica di record [C++], mediante RFX"
  - "RFX (ODBC) [C++], associazione di campi e parametri"
  - "RFX (ODBC) [C++], aggiornamento di dati in recordset"
  - "scorrimento [C++]"
  - "scorrimento [C++], RFX"
ms.assetid: e647cacd-62b0-4b80-9e20-b392deca5a88
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Trasferimento di campi di record: funzionamento di RFX
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato il processo RFX.  Si tratta di un argomento avanzato, che comprende:  
  
-   [RFX e recordset](#_core_rfx_and_the_recordset)  
  
-   [Processo di trasferimento di campi di record](#_core_the_record_field_exchange_process)  
  
> [!NOTE]
>  L'argomento è relativo alle classi derivate da `CRecordset` per cui il recupero di massa di righe non è ancora stato implementato.  Se si sta utilizzando il recupero di massa di righe, verrà implementato l'RFX di massa.  L'RFX di massa è simile all'RFX.  Per comprenderne le differenze, vedere [Recordset: recupero di massa di record \(ODBC\)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
##  <a name="_core_rfx_and_the_recordset"></a> RFX e recordset  
 I membri dati di campo dell'oggetto Recordset costituiscono insieme un buffer di modifica contenente le colonne selezionate di un record.  Quando il recordset viene aperto per la prima volta e sta per leggere il primo record, RFX associa ciascuna colonna selezionata all'indirizzo del membro dati di campo appropriato.  Quando il recordset aggiorna un record, RFX chiama le funzioni dell'API ODBC per inviare al driver l'istruzione SQL **UPDATE** o **INSERT**.  RFX utilizza le informazioni dei membri dati di campo per specificare le colonne da scrivere.  
  
 In determinate fasi del processo, il framework esegue una copia di backup del buffer di modifica, in modo da poterne ripristinare il contenuto, se necessario.  RFX effettua il backup del buffer di modifica prima di aggiungere un nuovo record e prima di modificare un record esistente.  In alcuni casi, il buffer di modifica viene ripristinato, ad esempio dopo aver eseguito una chiamata a **Update** successiva ad `AddNew`.  Il buffer di modifica non viene ripristinato se si annulla un buffer cui si sono appena apportate delle modifiche, come avviene, ad esempio, se ci si sposta su un altro record prima di richiamare **Update**.  
  
 Oltre allo scambio di dati tra l'origine dati e i membri dati di campo del recordset, RFX gestisce anche l'associazione di parametri.  Quando si apre il recordset, tutti i membri dati dei parametri vengono associati in base all'ordine dei segnaposto ? presenti nell'istruzione SQL creata da `CRecordset::Open`.  Per ulteriori informazioni, vedere [Recordset: applicazione di parametri a un recordset \(ODBC\)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).  
  
 L'override di `DoFieldExchange`, eseguito dalla classe recordset, effettua automaticamente tutte le operazioni, spostando i dati in entrambe le direzioni.  Analogamente a DDX \(Dialog Data Exchange\), RFX richiede informazioni sui membri dati della classe.  La procedura guidata fornisce le informazioni necessarie scrivendo un'implementazione di `DoFieldExchange` specifica del recordset, in base ai nomi dei membri dati di campo e ai tipi di dati specificati.  
  
##  <a name="_core_the_record_field_exchange_process"></a> Processo di trasferimento di campi di record  
 In questa sezione viene descritta la sequenza degli eventi RFX all'apertura di un oggetto recordset e durante l'aggiunta, l'aggiornamento e l'eliminazione dei record.  Nelle tabelle [Sequenza delle operazioni di RFX durante l'apertura di un recordset](#_core_sequence_of_rfx_operations_during_recordset_open) e [Sequenza delle operazioni di RFX durante lo scorrimento](#_core_sequence_of_rfx_operations_during_scrolling) contenute in questo argomento vengono illustrati i processi di elaborazione di un comando **Move** nel recordset e di gestione di un aggiornamento da parte di RFX.  Durante questi processi viene chiamata la funzione [DoFieldExchange](../Topic/CRecordset::DoFieldExchange.md) per l'esecuzione di diverse operazioni.  Il membro dati **m\_nOperation** dell'oggetto [CFieldExchange](../../mfc/reference/cfieldexchange-class.md) determina il tipo di operazione richiesta.  Prima di leggere questa documentazione, potrebbe essere utile consultare [Recordset: selezione dei record \(ODBC\)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md) e [Recordset: aggiornamento dei record \(ODBC\)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md).  
  
###  <a name="_mfc_rfx.3a_.initial_binding_of_columns_and_parameters"></a> RFX: associazione iniziale di colonne e parametri  
 Le attività RFX riportate di seguito vengono eseguite nello stesso ordine quando si chiama la funzione membro [Open](../Topic/CRecordset::Open.md) di un oggetto recordset.  
  
-   Se nel recordset sono inclusi i membri dati dei parametri, il framework chiamerà `DoFieldExchange` per associare i parametri ai relativi segnaposto presenti nella stringa dell'istruzione SQL del recordset.  Per ciascun segnaposto individuato nell'istruzione **SELECT** viene utilizzata una rappresentazione del valore del parametro dipendente dal tipo di dati.  Questa operazione viene effettuata dopo che l'istruzione SQL è stata preparata, ma prima che venga eseguita.  Per informazioni sulla preparazione dell'istruzione, vedere la funzione **::SQLPrepare** in ODBC *Programmer's Reference*.  
  
-   Il framework chiama `DoFieldExchange` una seconda volta per associare i valori delle colonne selezionate ai corrispondenti membri dati di campo del recordset.  In tal modo, l'oggetto Recordset viene identificato come buffer di modifica contenente le colonne del primo record.  
  
-   Il recordset esegue l'istruzione SQL e l'origine dati seleziona il primo record.  Le colonne del record vengono caricate nei membri dati di campo del recordset.  
  
 Nella tabella riportata di seguito viene illustrata la sequenza delle operazioni di RFX durante l'apertura di un recordset.  
  
### Sequenza delle operazioni di RFX durante l'apertura di un recordset  
  
|Operazione di programmazione|Operazione di DoFieldExchange|Operazione del database\/di SQL|  
|----------------------------------|-----------------------------------|-------------------------------------|  
|1.  Apertura del recordset.|||  
||2.  Compilazione di un'istruzione SQL.||  
|||3.  Invio dell'istruzione SQL.|  
||4.  Associazione dei membri dati di parametro.||  
||5.  Associazione dei membri dati di campo alle colonne.||  
|||6.  ODBC effettua lo spostamento e l'inserimento dei dati.|  
||7.  Trasformazione dei dati per C\+\+.||  
  
 Per consentire una rapida ripetizione della query con la stessa istruzione SQL, i recordset utilizzano la esecuzione preparata di ODBC.  Per ulteriori informazioni sull'esecuzione preparata, vedere ODBC SDK *Programmer's Reference* nel CD di MSDN Library.  
  
###  <a name="_mfc_rfx.3a_.scrolling"></a> RFX: scorrimento  
 Quando si passa da un record a un altro, il framework chiama `DoFieldExchange` per sostituire i valori memorizzati in precedenza nei membri dati di campo con i valori del nuovo record.  
  
 Nella tabella riportata di seguito viene illustrata la sequenza delle operazioni di RFX quando si passa da un record a un altro.  
  
### Sequenza delle operazioni di RFX durante lo scorrimento  
  
|Operazione di programmazione|Operazione di DoFieldExchange|Operazione del database\/di SQL|  
|----------------------------------|-----------------------------------|-------------------------------------|  
|1.  Chiamata a `MoveNext` o a una delle altre funzioni Move.|||  
|||2.  ODBC effettua lo spostamento e l'inserimento dei dati.|  
||3.  Trasformazione dei dati per C\+\+.||  
  
###  <a name="_mfc_rfx.3a_.adding_new_records_and_editing_existing_records"></a> RFX: aggiunta di nuovi record e modifica di record esistenti  
 Se si aggiunge un nuovo record, il recordset funzionerà come buffer di modifica per compilare il contenuto del nuovo record.  L'eliminazione dei record comporta, come l'operazione di aggiunta di record, la modifica dei valori dei membri dati di campo del recordset.  La sequenza delle operazioni dal punto di vista di RFX è descritta di seguito.  
  
1.  La chiamata alla funzione membro [AddNew](../Topic/CRecordset::AddNew.md) o [Edit](../Topic/CRecordset::Edit.md) del recordset comporta la memorizzazione in RFX del buffer di modifica corrente che potrà essere ripristinato in un secondo momento.  
  
2.  La funzione `AddNew` o **Edit** prepara i campi nel buffer di modifica, in modo che RFX possa rilevare i membri dati di campo modificati.  
  
     Poiché un nuovo record non contiene valori precedenti con i quali confrontare i nuovi valori, `AddNew` imposta il valore di ciascun membro dati di campo sul valore **PSEUDO\_NULL**.  In seguito, quando si chiama **Update**, RFX confronterà il valore di ciascun membro dati con il valore **PSEUDO\_NULL**.  Se viene rilevata una differenza, significa che il membro dati è stato impostato **PSEUDO\_NULL** è diverso dalla colonna di un record contenente un valore Null e dal valore **NULL** del linguaggio C\+\+.  
  
     A differenza della chiamata a **Update** per `AddNew`, la chiamata a **Update** per **Edit** confronta i valori aggiornati con i valori memorizzati in precedenza anziché utilizzare **PSEUDO\_NULL**.  La differenza sta nel fatto che per `AddNew` non vengono memorizzati valori precedenti da utilizzare per il confronto.  
  
3.  Impostare direttamente i valori dei membri dati di campo di cui si desidera modificare i valori o da includere in un nuovo record.  Tale operazione può comportare la chiamata a `SetFieldNull`.  
  
4.  La chiamata a [Update](../Topic/CRecordset::Update.md) controlla i membri dati di campo modificati, come descritto nel passaggio 2 \(vedere la tabella [Sequenza delle operazioni di RFX durante lo scorrimento](#_core_sequence_of_rfx_operations_during_scrolling)\).  Se non sono state apportate modifiche, **Update** restituisce 0.  Se alcuni membri dati del campo sono stati modificati, **Update** prepara ed esegue un'istruzione SQL **INSERT** contenente i valori relativi a tutti i campi aggiornati nel record.  
  
5.  Per `AddNew`, **Update** termina ripristinando i valori memorizzati in precedenza nel record corrente prima della chiamata a `AddNew`.  Per **Edit** vengono mantenuti i nuovi valori modificati.  
  
 Nella tabella riportata di seguito viene illustrata la sequenza delle operazioni di RFX durante l'aggiunta di un nuovo record o la modifica di un record esistente.  
  
### Sequenza delle operazioni di RFX durante la chiamata ad AddNew e a Edit  
  
|Operazione di programmazione|Operazione di DoFieldExchange|Operazione del database\/di SQL|  
|----------------------------------|-----------------------------------|-------------------------------------|  
|1.  Chiamata ad `AddNew` o **Edit**.|||  
||2.  Backup del buffer di modifica.||  
||3.  Per `AddNew`, i membri dati di campo vengono contrassegnati come "clean" e Null.||  
|4.  Assegnazione dei valori ai membri dati di campo del recordset.|||  
|5.  Chiamata a **Update**.|||  
||6.  Controllo dei campi modificati.||  
||7.  Compilazione dell'istruzione SQL **INSERT** per `AddNew` oppure dell'istruzione **UPDATE** per **Edit**.||  
|||8.  Invio dell'istruzione SQL.|  
||9.  Per `AddNew`, ripristino del contenuto del buffer di modifica di cui è stato eseguito il backup.  Per **Edit**, eliminazione della copia di backup.||  
  
### RFX: eliminazione di record esistenti  
 Quando si elimina un record, RFX imposta tutti i campi su **NULL**, il che indica che il record è stato eliminato ed è necessario cambiare posizione.  Non sono necessarie altre informazioni sulla sequenza delle operazioni di RFX.  
  
## Vedere anche  
 [Trasferimento di campi di record \(RFX\)](../../data/odbc/record-field-exchange-rfx.md)   
 [Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)   
 [Macro, funzioni globali e variabili globali](../Topic/Macros,%20Global%20Functions,%20and%20Global%20Variables.md)   
 [CFieldExchange Class](../../mfc/reference/cfieldexchange-class.md)   
 [CRecordset::DoFieldExchange](../Topic/CRecordset::DoFieldExchange.md)