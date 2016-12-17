---
title: "Recordset: funzionamento dei metodi AddNew, Edit e Delete (ODBC) | Microsoft Docs"
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
  - "modifica di record [C++], in recordset"
  - "record [C++], aggiunta"
  - "record [C++], eliminazione in recordset"
  - "record [C++], modifica"
  - "record [C++], aggiornamento"
  - "recordset [C++], aggiunta di record"
  - "recordset [C++], eliminazione di record"
  - "recordset [C++], modifica di record"
  - "recordset [C++], aggiornamento"
ms.assetid: cab43d43-235a-4bed-ac05-67d10e94f34e
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Recordset: funzionamento dei metodi AddNew, Edit e Delete (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'argomento è relativo alle classi ODBC MFC.  
  
 In questo argomento viene illustrato il funzionamento delle funzioni membro `AddNew`, **Edit** e **Delete** della classe `CRecordset`.  Vengono trattati i seguenti argomenti:  
  
-   [Aggiunta di record](#_core_adding_a_record)  
  
-   [Visibilità dei record aggiunti](#_core_visibility_of_added_records)  
  
-   [Modifica di record](#_core_editing_an_existing_record)  
  
-   [Eliminazione di record](#_core_deleting_a_record)  
  
> [!NOTE]
>  L'argomento è relativo agli oggetti derivati da `CRecordset` per cui il recupero di massa di righe non è ancora stato implementato.  Se si utilizza il recupero di massa di righe, vedere [Recordset: recupero di massa di record \(ODBC\)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Vedere inoltre [Trasferimento di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md), in cui viene descritto il corrispondente ruolo di RFX nelle operazioni di aggiornamento.  
  
##  <a name="_core_adding_a_record"></a> Aggiunta di record  
 Per aggiungere un record a un recordset, è necessario chiamare la funzione membro [AddNew](../Topic/CRecordset::AddNew.md) del recordset, impostare i valori dei membri dati di campo del nuovo record e chiamare la funzione membro [Update](../Topic/CRecordset::Update.md) per scrivere il record nell'origine dati.  
  
 Come condizione preliminare per chiamare `AddNew`, è necessario che il recordset non sia aperto in modalità in sola lettura.  Le funzioni membro `CanUpdate` e `CanAppend` consentono di determinare tali condizioni.  
  
 Quando si chiama `AddNew`:  
  
-   Il record nel buffer di modifica viene memorizzato, in modo da consentirne il ripristino del contenuto nel caso in cui l'operazione venga annullata.  
  
-   Ai membri dati di campo viene assegnato un flag, in modo che sia possibile rilevarne in seguito le modifiche.  I membri dati di campo vengono inoltre contrassegnati come non modificati e impostati su Null.  
  
 Una volta chiamata la funzione `AddNew`, il buffer di modifica rappresenta un nuovo record vuoto e pronto per l'inserimento dei valori.  Per eseguire l'operazione di inserimento, impostare manualmente i valori assegnandoli ai membri dati di campo.  Per specificare il valore Null, anziché specificare un valore effettivo per un campo, è possibile chiamare `SetFieldNull`.  
  
 Per eseguire il commit delle modifiche, chiamare **Update**.  Quando si chiama **Update** per il nuovo record accade quanto segue.  
  
-   Se il driver ODBC supporta la funzione API ODBC **::SQLSetPos**, tale funzione viene utilizzata per aggiungere il record nell'origine dati.  Mediante **::SQLSetPos**, l'aggiunta di un record con MFC è più efficace, in quanto non è necessario creare ed elaborare un'istruzione SQL.  
  
-   Se non è possibile utilizzare **::SQLSetPos**, vengono effettuate le operazioni descritte di seguito.  
  
    1.  Se non viene rilevata alcuna modifica, **Update** non effettua alcuna operazione e restituisce 0.  
  
    2.  Se vengono rilevate modifiche, **Update** crea un'istruzione SQL **INSERT**.  Le colonne rappresentate da tutti i membri dati di campo modificati vengono elencate nell'istruzione **INSERT**.  Per imporre l'inclusione di una colonna, chiamare la funzione membro [SetFieldDirty](../Topic/CRecordset::SetFieldDirty.md):  
  
        ```  
        SetFieldDirty( &m_dataMember, TRUE );  
        ```  
  
    3.  **Update** esegue il commit del nuovo record. L'istruzione **INSERT** viene eseguita e il record viene assegnato alla tabella nell'origine dati e nel recordset, se non è di tipo snapshot, a meno che non sia in corso una transazione.  
  
    4.  Il record memorizzato viene ripristinato nel buffer di modifica.  Il record corrente prima della chiamata ad `AddNew` diventa di nuovo corrente, indipendentemente dalla corretta esecuzione dell'istruzione **INSERT**.  
  
    > [!TIP]
    >  Per il controllo completo di un nuovo record, effettuare le operazioni seguenti: impostare i valori di tutti i campi contenenti valori, quindi impostare in modo esplicito tutti i campi che conserveranno valori Null chiamando `SetFieldNull` con un puntatore al campo e con il parametro **TRUE** \(impostazione predefinita\).  Se si desidera che un campo non venga scritto nell'origine dati, chiamare `SetFieldDirty` con un puntatore al campo e il parametro **FALSE** e non modificare il valore del campo.  Per determinare se è possibile impostare un campo su Null, chiamare `IsFieldNullable`.  
  
    > [!TIP]
    >  Per rilevare l'eventuale modifica successiva del valore dei membri dati del recordset, MFC utilizza un valore **PSEUDO\_NULL** appropriato per ciascun tipo di dati che è possibile memorizzare in un recordset.  Se è necessario impostare in modo esplicito un campo su un valore **PSEUDO\_NULL** e il campo è già contrassegnato come Null, è necessario chiamare anche `SetFieldNull`, passando l'indirizzo del campo nel primo parametro e **FALSE** nel secondo.  
  
##  <a name="_core_visibility_of_added_records"></a> Visibilità dei record aggiunti  
 Per stabilire quando un record aggiunto è visibile per il recordset,  è necessario considerare due fattori:  
  
-   la capacità del driver utilizzato  
  
-   le funzionalità a disposizione del framework  
  
 Se il driver ODBC supporta la funzione API ODBC **::SQLSetPos**, tale funzione viene utilizzata per aggiungere i record.  Con **::SQLSetPos** i record aggiunti sono visibili per qualsiasi recordset MFC aggiornabile.  Se la funzione non è supportata, i record aggiunti non sono visibili ed è necessario chiamare **Requery** per visualizzarli.  L'utilizzo di **::SQLSetPos** risulta inoltre più efficace.  
  
##  <a name="_core_editing_an_existing_record"></a> Modifica di record esistenti  
 Per modificare un record esistente in un recordset, è necessario scorrere fino al record, chiamare la funzione membro [Edit](../Topic/CRecordset::Edit.md) del recordset, impostare i valori dei membri dati di campo del nuovo record e chiamare la funzione membro [Update](../Topic/CRecordset::Update.md) per scrivere il record modificato nell'origine dati.  
  
 Come condizione preliminare per chiamare **Edit**, è necessario che il recordset sia aggiornabile e sia posizionato su un record.  Le funzioni membro `CanUpdate` e `IsDeleted` consentono di determinare tali condizioni.  È inoltre necessario che il record corrente non sia ancora stato eliminato e che nel recordset siano presenti record, ovvero sia `IsBOF` che `IsEOF` devono restituire 0.  
  
 Quando si chiama **Edit**, il record nel buffer di modifica, ovvero il record corrente, viene archiviato.  I valori del record memorizzato vengono in seguito utilizzati per rilevare eventuali modifiche dei campi.  
  
 Dopo la chiamata alla funzione **Edit**, il buffer di modifica continua a rappresentare il record corrente, ma a questo punto è pronto per accettare le modifiche apportate ai membri dati di campo.  Per modificare il record, impostare manualmente i valori di qualsiasi membro dati di campo che si desidera modificare.  Per specificare il valore Null, anziché specificare un valore effettivo per un campo, è possibile chiamare `SetFieldNull`.  Per eseguire il commit delle modifiche, chiamare **Update**.  
  
> [!TIP]
>  Per disattivare la modalità `AddNew` o **Edit**, chiamare **Move** con il parametro **AFX\_MOVE\_REFRESH**.  
  
 Come condizione preliminare per chiamare **Update**, è necessario che il recordset non sia vuoto e che il record corrente non sia stato eliminato.  È necessario pertanto che `IsBOF`, `IsEOF` e `IsDeleted` restituiscano 0.  
  
 Quando si chiama **Update** per il record eliminato accade quanto segue.  
  
-   Se il driver ODBC supporta la funzione API ODBC **::SQLSetPos**, tale funzione viene utilizzata per aggiornare il record nell'origine dati.  Mediante **::SQLSetPos**, il driver confronta il buffer di modifica con il record corrispondente del server e aggiorna quest'ultimo nel caso in cui vengano rilevate delle differenze tra i due.  Mediante **::SQLSetPos**, l'aggiornamento di un record con MFC è più efficace, in quanto non è necessario creare ed elaborare un'istruzione SQL.  
  
     \- oppure \-  
  
-   Se non è possibile utilizzare **::SQLSetPos**, vengono effettuate le operazioni descritte di seguito.  
  
    1.  Se non viene rilevata alcuna modifica, **Update** non effettua alcuna operazione e restituisce 0.  
  
    2.  Se vengono rilevate modifiche, **Update** crea un'istruzione SQL **UPDATE**.  Le colonne elencate nell'istruzione **UPDATE** sono basate sui membri dati di campo modificati.  
  
    3.  **Update** esegue il commit delle modifiche, ovvero esegue l'istruzione **UPDATE**, e il record viene modificato nell'origine dati. Tuttavia, nel caso in cui sia in corso una transazione, il commit non viene eseguito. Per informazioni sugli effetti delle transazioni sul processo di aggiornamento, vedere [Transazione: esecuzione di una transazione in un recordset \(ODBC\)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md).  In ODBC è presente una copia del record, anch'essa modificata.  
  
    4.  A differenza del processo di `AddNew`, il processo di **Edit** non ripristina il record memorizzato.  Il record modificato resterà nella posizione originaria come record corrente.  
  
    > [!CAUTION]
    >  Quando si prepara l'aggiornamento di un recordset chiamando **Update**, verificare che il recordset includa tutte le colonne che costituiscono la chiave primaria della tabella o tutte le colonne di tutti gli indici univoci della tabella oppure colonne sufficienti per l'identificazione univoca della riga.  In alcuni casi, il framework può utilizzare solo le colonne selezionate nel recordset per identificare il record da aggiornare nella tabella.  È possibile aggiornare più record nella tabella senza disporre di tutte le colonne necessarie.  In tal caso, quando si chiama **Update**, il framework genera eccezioni.  
  
    > [!TIP]
    >  Se si chiama `AddNew` o **Edit** una seconda volta prima di chiamare **Update**, il buffer di modifica viene aggiornato con il record memorizzato, che sostituisce il record nuovo o modificato.  In tal modo, è possibile annullare un'operazione `AddNew` o **Edit** e iniziarne una nuova. Se si verificano errori nel record in fase di modifica, è infatti sufficiente chiamare nuovamente **Edit** o `AddNew`.  
  
##  <a name="_core_deleting_a_record"></a> Eliminazione di record  
 Per eliminare un record da un recordset, è necessario scorrere fino al record desiderato e chiamare la funzione membro [Delete](../Topic/CRecordset::Delete.md) del recordset.  A differenza di `AddNew` ed **Edit**, **Delete** non richiede una corrispondente chiamata a **Update**.  
  
 Come condizione preliminare per chiamare **Delete**, è necessario che il recordset sia aggiornabile e sia posizionato su un record.  Le funzioni membro `CanUpdate`, `IsBOF`, `IsEOF` e `IsDeleted` consentono di determinare queste condizioni.  
  
 Quando si chiama **Delete** accade quanto segue.  
  
-   Se il driver ODBC supporta la funzione API ODBC **::SQLSetPos**, tale funzione viene utilizzata per eliminare il record nell'origine dati.  L'utilizzo di **::SQLSetPos** risulta in genere più efficace dell'utilizzo di SQL.  
  
     \- oppure \-  
  
-   Se non è possibile utilizzare **::SQLSetPos**, vengono effettuate le operazioni descritte di seguito.  
  
    1.  Non viene eseguito il backup del record corrente nel buffer di modifica, come nel caso di `AddNew` ed **Edit**.  
  
    2.  **Delete** crea un'istruzione SQL **DELETE** che rimuove il record.  
  
         Il record corrente nel buffer di modifica non viene memorizzato come avviene in `AddNew` ed **Edit**.  
  
    3.  **Delete** effettua il commit dell'eliminazione eseguendo l'istruzione **DELETE**.  Il record viene contrassegnato come eliminato nell'origine dati e in ODBC, se è uno snapshot.  
  
    4.  I valori del record eliminato continuano a essere presenti nei membri dati di campo del recordset, ma tali membri vengono contrassegnati come Null e la funzione membro `IsDeleted` del recordset restituisce un valore diverso da zero.  
  
    > [!NOTE]
    >  Dopo l'eliminazione di un record, è necessario passare a un altro record per reinserire i dati del nuovo record nel buffer di modifica.  È un errore chiamare nuovamente **Delete** o **Edit**.  
  
 Per informazioni sulle istruzioni SQL utilizzate nelle operazioni di aggiornamento, vedere [SQL](../../data/odbc/sql.md).  
  
## Vedere anche  
 [Recordset \(ODBC\)](../../data/odbc/recordset-odbc.md)   
 [Recordset: ulteriori informazioni sugli aggiornamenti \(ODBC\)](../../data/odbc/recordset-more-about-updates-odbc.md)   
 [Trasferimento di campi di record \(RFX\)](../../data/odbc/record-field-exchange-rfx.md)