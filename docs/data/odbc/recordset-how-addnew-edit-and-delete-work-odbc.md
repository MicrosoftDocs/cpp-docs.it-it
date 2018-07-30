---
title: 'Recordset: Dei metodi AddNew, Edit e Delete funzionamento (ODBC) | Microsoft Docs'
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
- AddNew method
- ODBC recordsets [C++], deleting records
- records [C++], deleting in recordsets
- data in recordsets [C++]
- recordsets [C++], deleting records
- ODBC recordsets [C++], editing records
- records [C++], editing
ms.assetid: cab43d43-235a-4bed-ac05-67d10e94f34e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 52b469a53d48dcde8c28c0a0c984598875684778
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39338314"
---
# <a name="recordset-how-addnew-edit-and-delete-work-odbc"></a>Recordset: funzionamento dei metodi AddNew, Edit e Delete (ODBC)
Questo argomento si applica alle classi ODBC MFC.  
  
 Questo argomento viene illustrato come la `AddNew`, `Edit`, e `Delete` funzioni membro della classe `CRecordset` di lavoro. Gli argomenti trattati comprendono:  
  
-   [Sull'aggiunta di record](#_core_adding_a_record)  
  
-   [Visibilità dei record aggiunti](#_core_visibility_of_added_records)  
  
-   [Modifica di record](#_core_editing_an_existing_record)  
  
-   [Eliminazione di record](#_core_deleting_a_record)  
  
> [!NOTE]
>  In questo argomento si applica a oggetti derivati da `CRecordset` in quale riga bulk il recupero non è stato implementato. Se si usa il recupero di righe bulk, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Come supplemento, si potrebbe voler leggere [Record Field Exchange: How RFX Works](../../data/odbc/record-field-exchange-how-rfx-works.md), che descrive il ruolo corrispondente di RFX nelle operazioni di aggiornamento.  
  
##  <a name="_core_adding_a_record"></a> Aggiunta di un Record  

 Aggiungere un nuovo record a un recordset, è necessario chiamare il recordset [AddNew](../../mfc/reference/crecordset-class.md#addnew) funzione membro, l'impostazione dei valori dei membri dati di campo del nuovo record e chiamando la [Update](../../mfc/reference/crecordset-class.md#update) funzione membro da scrivere il record nell'origine dati.  
  
 Come condizione preliminare per la chiamata `AddNew`, il set di record non sia stato aperto in sola lettura. Il `CanUpdate` e `CanAppend` funzioni membro consentono di determinare le condizioni.  
  
 Quando si chiama `AddNew`:  
  
-   Il record nel buffer di modifica viene archiviato, in modo che il relativo contenuto può essere ripristinato se l'operazione è annullata.  
  
-   Membri dati del campo vengono contrassegnati in modo che è possibile rilevare le modifiche apportate in essi contenuti in un secondo momento. I dati dei campi membri contrassegnati anche pulire (non modificato) e impostato su un valore Null.  
  
 Dopo aver chiamato `AddNew`, rappresenta un nuovo buffer di modifica, record vuoto e pronto per essere compilato con i valori. A tale scopo, è impostare manualmente i valori assegnando a loro. Anziché specificare un valore effettivo dei dati per un campo, è possibile chiamare `SetFieldNull` per specificare il valore Null.  
  
 Per eseguire il commit delle modifiche, si chiama `Update`. Quando si chiama `Update` per il nuovo record:  
  
-   Se il driver ODBC supporta la `::SQLSetPos` funzione API ODBC, MFC utilizza la funzione per aggiungere il record nell'origine dati. Con `::SQLSetPos`, MFC può aggiungere un record in modo più efficiente perché non è necessario creare ed elaborare un'istruzione SQL.  
  
-   Se `::SQLSetPos` non può essere usato, MFC effettua le seguenti operazioni:  
  
    1.  Se viene rilevata alcuna modifica, `Update` non esegue alcuna operazione e restituisce 0.  
  
    2.  Se sono state apportate modifiche, `Update` costruisce un database SQL **Inserisci** istruzione. Sono elencate le colonne rappresentate da tutti i membri di dati dei campi modificati nella **Inserisci** istruzione. Per forzare una colonna da includere, chiamare il [SetFieldDirty](../../mfc/reference/crecordset-class.md#setfielddirty) funzione membro:  
  
        ```  
        SetFieldDirty( &m_dataMember, TRUE );  
        ```  
  
    3.  `Update` esegue il commit del nuovo record, ovvero il **Inserisci** istruzione viene eseguita e il record viene eseguito il commit alla tabella nell'origine dati (e set di record, se non uno snapshot) a meno che non è in corso una transazione.  
  
    4.  Viene ripristinato il record memorizzato nel buffer di modifica. Il record corrente prima la `AddNew` chiamata è corrente nuovamente indipendentemente dal fatto che il **Inserisci** istruzione è stata eseguita correttamente.  
  
    > [!TIP]
    >  Per il controllo completo di un nuovo record, effettuare le operazioni seguenti: impostare i valori di tutti i campi che hanno valori e quindi impostare in modo esplicito tutti i campi che rimangono Null chiamando `SetFieldNull` con un puntatore al campo e il parametro TRUE (impostazione predefinita). Se si desidera garantire che un campo non viene scritto all'origine dati, chiamata `SetFieldDirty` con un puntatore al campo e il parametro FALSE e non modificano il valore del campo. Per determinare se un campo può essere Null, chiamare `IsFieldNullable`.  
  
    > [!TIP]
    >  Per rilevare quando i membri dati di recordset Modifica valore, MFC utilizza un valore PSEUDO_NULL appropriato per ogni tipo di dati che è possibile archiviare in un recordset. Se è necessario impostare esplicitamente un campo sul valore PSEUDO_NULL e il campo è già contrassegnato come Null, è necessario chiamare anche `SetFieldNull`, passando l'indirizzo del campo nel primo parametro e FALSE nel secondo parametro.  
  
##  <a name="_core_visibility_of_added_records"></a> Visibilità dei record aggiunti  
 Quando un record aggiunto è visibile per il recordset? I record aggiunti compaiono in alcuni casi e in alcuni casi non sono visibili, a seconda delle due operazioni:  
  
-   Quali il driver è in grado di.  
  
-   Quali framework possono sfruttare.  
  
 Se il driver ODBC supporta la `::SQLSetPos` funzione API ODBC, MFC utilizza la funzione per aggiungere i record. Con `::SQLSetPos`, aggiungere i record sono visibili a qualsiasi aggiornabile recordset MFC. Senza il supporto per la funzione, aggiungere i record non sono visibili e sarà necessario rivolgersi `Requery` per visualizzarli. Usando `::SQLSetPos` risulta anche più efficiente.  
  
##  <a name="_core_editing_an_existing_record"></a> Per modificare un Record esistente  
 Per modificare un record esistente in un set di record è necessario scorrere fino al record, la chiamata del recordset [Edit](../../mfc/reference/crecordset-class.md#edit) funzione membro, impostare i valori dei membri dati di campo del nuovo record e chiamare il [aggiornare](../../mfc/reference/crecordset-class.md#update)funzione di membro scriva il record modificato all'origine dati.  
  
 Come condizione preliminare per la chiamata `Edit`, il set di record deve essere aggiornabile e su un record. Il `CanUpdate` e `IsDeleted` funzioni membro consentono di determinare le condizioni. Inoltre è necessario che il record corrente non sia già stato eliminato e deve esistere record del recordset (entrambe `IsBOF` e `IsEOF` restituiscono 0).  
  
 Quando si chiama `Edit`, viene archiviato il record nel buffer di modifica (il record corrente). I valori del record archiviato in un secondo momento consentono di rilevare se tutti i campi sono stati modificati.  
  
 Dopo aver chiamato `Edit`, buffer di modifica comunque rappresenta il record corrente ma a questo punto è pronto ad accettare le modifiche ai membri di dati del campo. Per modificare il record, impostare manualmente i valori dei membri di dati qualsiasi campo che si desidera modificare. Anziché specificare un valore effettivo dei dati per un campo, è possibile chiamare `SetFieldNull` per specificare il valore Null. Per eseguire il commit delle modifiche, chiamare `Update`.  
  
> [!TIP]
>  Per sfruttare `AddNew` oppure `Edit` modalità, chiamare `Move` con il parametro *AFX_MOVE_REFRESH*.  
  
 Come condizione preliminare per la chiamata `Update`, il set di record non deve essere vuoto e non sia stato eliminato il record corrente. `IsBOF`, `IsEOF`, e `IsDeleted` restituiscano 0.  
  
 Quando si chiama `Update` per il record modificato:  
  
-   Se il driver ODBC supporta la `::SQLSetPos` funzione API ODBC, MFC utilizza la funzione per aggiornare il record nell'origine dati. Con `::SQLSetPos`, il driver confronta il buffer di modifica con il record corrispondente nel server di aggiornamento del record nel server se i due sono diversi. Con `::SQLSetPos`, MFC può aggiornare un record in modo più efficiente perché non è necessario creare ed elaborare un'istruzione SQL.  
  
     oppure  
  
-   Se `::SQLSetPos` non può essere usato, MFC effettua le seguenti operazioni:  
  
    1.  Se non sono state apportate modifiche, `Update` non esegue alcuna operazione e restituisce 0.  
  
    2.  Se sono state apportate modifiche, `Update` costruisce un database SQL **UPDATE** istruzione. Le colonne elencate nella **UPDATE** istruzione si basano su membri di dati del campo che sono stati modificati.  
  
    3.  `Update` Conferma le modifiche apportate, esegue la **UPDATE** istruzione e il record viene modificato nell'origine dati, ma non eseguito se una transazione è in corso (vedere [transazione: esecuzione di una transazione in un Recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md) per informazioni sull'impatto dell'aggiornamento da parte della transazione). ODBC mantiene una copia del record, anch ' essa modificata.  
  
    4.  A differenza del processo per `AddNew`, il `Edit` processo non ripristina il record memorizzato. Il record modificato rimane sul posto come record corrente.  
  
    > [!CAUTION]
    >  Quando ci si prepara aggiornare un recordset chiamando `Update`, prestare attenzione che il recordset includa tutte le colonne che costituiscono la chiave primaria della tabella (o tutte le colonne di un indice univoco nella tabella o di colonne insufficiente per identificare in modo univoco la riga). In alcuni casi, il framework può usare solo le colonne selezionate nel set di record per identificare i record nella tabella da aggiornare. Senza tutte le colonne necessari, potrebbe essere aggiornato più record nella tabella. In questo caso, il framework genera eccezioni quando si chiama `Update`.  
  
    > [!TIP]
    >  Se si chiama `AddNew` oppure `Edit` dopo aver chiamato due funzioni sia in precedenza, ma prima di chiamare `Update`, buffer di modifica viene aggiornato con il record memorizzato, sostituendo il record nuovo o modificato in corso. Questo comportamento offre un modo per interrompere un' `AddNew` oppure `Edit` e iniziare una nuova: se si determina che il record in corso è guasto, è sufficiente chiamare `Edit` o `AddNew` nuovamente.  
  
##  <a name="_core_deleting_a_record"></a> Eliminazione di un Record  
 Eliminazione di un record da un recordset è necessario scorrere verso il record e chiamare il recordset [eliminare](../../mfc/reference/crecordset-class.md#delete) funzione membro. A differenza `AddNew` e `Edit`, `Delete` non richiede una chiamata corrispondente a `Update`.  
  
 Come condizione preliminare per la chiamata `Delete`, il set di record deve essere aggiornabile e deve essere inclusa in un record. Il `CanUpdate`, `IsBOF`, `IsEOF`, e `IsDeleted` funzioni membro consentono di determinare le condizioni.  
  
 Quando si chiama `Delete`:  
  
-   Se il driver ODBC supporta la `::SQLSetPos` funzione API ODBC, MFC utilizza la funzione per eliminare il record nell'origine dati. Usando `::SQLSetPos` viene in genere più efficiente rispetto all'uso di SQL.  
  
     oppure  
  
-   Se `::SQLSetPos` non può essere usato, MFC effettua le seguenti operazioni:  
  
    1.  Il record corrente nel buffer di modifica non viene eseguito come in `AddNew` e `Edit`.  
  
    2.  `Delete` Crea un database SQL **eliminare** istruzione che rimuove il record.  
  
         Il record corrente nel buffer di modifica non viene archiviato come in `AddNew` e `Edit`.  
  
    3.  `Delete` esegue il commit dell'eliminazione, ovvero esegue il **eliminare** istruzione. Il record viene contrassegnato come eliminato nell'origine dati e, se il record è uno snapshot, in ODBC.  
  
    4.  I valori del record eliminato sono ancora in membri di dati del campo del set di record, ma i membri di dati di campo vengono contrassegnati come Null e il recordset `IsDeleted` funzione membro restituisce un valore diverso da zero.  
  
    > [!NOTE]
    >  Dopo l'eliminazione di un record, è necessario passare a un altro record per reinserire il buffer di modifica con i dati del nuovo record. Si tratta di un errore chiamare `Delete` nuovamente o chiamare `Edit`.  
  
 Per informazioni sulle istruzioni SQL utilizzate nelle operazioni di aggiornamento, vedere [SQL](../../data/odbc/sql.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Recordset (ODBC)](../../data/odbc/recordset-odbc.md)   
 [Recordset: Ulteriori informazioni sugli aggiornamenti (ODBC)](../../data/odbc/recordset-more-about-updates-odbc.md)   
 [Trasferimento di campi di record (RFX)](../../data/odbc/record-field-exchange-rfx.md)