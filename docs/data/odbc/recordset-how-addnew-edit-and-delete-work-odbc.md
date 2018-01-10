---
title: 'Recordset: AddNew, Edit e Delete funzionamento (ODBC) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
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
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: dbbf224797bd7d2eed2b085a6a7dd8eb1865de1c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="recordset-how-addnew-edit-and-delete-work-odbc"></a>Recordset: funzionamento dei metodi AddNew, Edit e Delete (ODBC)
Questo argomento si applica alle classi ODBC MFC.  
  
 Questo argomento viene illustrato come la `AddNew`, **modifica**, e **eliminare** funzioni membro della classe `CRecordset` di lavoro. Gli argomenti trattati includono:  
  
-   [Aggiunta di record](#_core_adding_a_record)  
  
-   [Visibilità dei record aggiunti](#_core_visibility_of_added_records)  
  
-   [Modifica di record](#_core_editing_an_existing_record)  
  
-   [Eliminazione di record](#_core_deleting_a_record)  
  
> [!NOTE]
>  Questo argomento si applica agli oggetti derivati da `CRecordset` in quale riga bulk recupero non è stato implementato. Se si utilizza il recupero di righe di massa, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Come complemento, è possibile leggere [campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md), che descrive il ruolo corrispondente di RFX nelle operazioni di aggiornamento.  
  
##  <a name="_core_adding_a_record"></a>Aggiunta di un Record  

 Aggiungere un nuovo record a un recordset, è necessario chiamare il recordset [AddNew](../../mfc/reference/crecordset-class.md#addnew) funzione membro, impostare i valori dei membri dati di campo del nuovo record e chiamare il [aggiornamento](../../mfc/reference/crecordset-class.md#update) funzione membro da scrivere il record nell'origine dati.  
  
 Come condizione preliminare per chiamare `AddNew`, il recordset non sia stato aperto in sola lettura. Il `CanUpdate` e `CanAppend` funzioni membro consentono di determinare tali condizioni.  
  
 Quando si chiama `AddNew`:  
  
-   Il record nel buffer di modifica viene archiviato, pertanto il relativo contenuto può essere ripristinato se l'operazione è stata annullata.  
  
-   Membri dati di campo vengono contrassegnati in modo è possibile rilevare le modifiche apportate in essi contenuti in un secondo momento. I dati del campo membri vengono contrassegnati come non modificati e impostato su un valore Null.  
  
 Dopo aver chiamato `AddNew`, rappresenta un nuovo buffer di modifica, record vuoto e pronto per l'inserimento di valori. A tale scopo, impostare manualmente i valori assegnando loro. Anziché specificare un valore effettivo dei dati per un campo, è possibile chiamare `SetFieldNull` per specificare il valore Null.  
  
 Per eseguire il commit delle modifiche, si chiama **aggiornamento**. Quando si chiama **aggiornamento** per il nuovo record:  
  
-   Se il driver ODBC supporta la **:: SQLSetPos** funzione API ODBC, MFC utilizza la funzione per aggiungere il record nell'origine dati. Con **:: SQLSetPos**, MFC può aggiungere un record in modo più efficiente perché non è necessario creare ed elaborare un'istruzione SQL.  
  
-   Se **:: SQLSetPos** non può essere utilizzato, MFC effettua le seguenti operazioni:  
  
    1.  Se viene rilevata alcuna modifica, **aggiornamento** non esegue alcuna operazione e restituisce 0.  
  
    2.  Se sono presenti modifiche, **aggiornamento** costrutti SQL **inserire** istruzione. Sono elencate le colonne rappresentate da tutti i membri di dati dei campi modificati nel **inserire** istruzione. Per imporre l'inclusione di una colonna, chiamare il [SetFieldDirty](../../mfc/reference/crecordset-class.md#setfielddirty) funzione membro:  
  
        ```  
        SetFieldDirty( &m_dataMember, TRUE );  
        ```  
  
    3.  **Aggiornamento** viene eseguito il commit del nuovo record, ovvero il **inserire** istruzione viene eseguita e il record viene eseguito il commit per la tabella in cui l'origine dati e il recordset, se non uno snapshot, a meno che non è in corso una transazione.  
  
    4.  Il record memorizzato viene ripristinato nel buffer di modifica. Il record corrente prima di `AddNew` chiamata è corrente nuovamente indipendentemente dal fatto che il **inserire** istruzione è stata eseguita correttamente.  
  
    > [!TIP]
    >  Per il controllo completo di un nuovo record, effettuare le operazioni seguenti: impostare i valori di tutti i campi contenenti valori, quindi impostare in modo esplicito tutti i campi che rimangono Null chiamando `SetFieldNull` con un puntatore per il campo e il parametro **TRUE**  (impostazione predefinita). Se si desidera garantire che un campo non è scritto per l'origine dati, chiamare `SetFieldDirty` con un puntatore per il campo e il parametro **FALSE**e non modificare il valore del campo. Per determinare se un campo può essere Null, chiamare `IsFieldNullable`.  
  
    > [!TIP]
    >  Per rilevare quando i membri dati di recordset modificano valore, MFC utilizza un **PSEUDO_NULL** valore appropriato per ogni tipo di dati che è possibile archiviare in un recordset. Se è necessario impostare esplicitamente un campo il **PSEUDO_NULL** valore e il campo avvengono già contrassegnato come Null, è necessario chiamare anche `SetFieldNull`, passa l'indirizzo del campo nel primo parametro e **FALSE**nel secondo parametro.  
  
##  <a name="_core_visibility_of_added_records"></a>Visibilità dei record aggiunti  
 Quando un record aggiunto è visibile per il recordset? Record aggiunti talvolta visualizzati e in alcuni casi non sono visibili, a seconda delle due operazioni:  
  
-   Il driver è in grado di.  
  
-   Il framework può sfruttare.  
  
 Se il driver ODBC supporta la **:: SQLSetPos** funzione API ODBC, MFC utilizza la funzione per aggiungere record. Con **:: SQLSetPos**, record aggiunti sono visibili per qualsiasi recordset MFC aggiornabile. Senza il supporto per la funzione, aggiungere i record non sono visibili e sarà necessario chiamare **Requery** per visualizzarli. Utilizzando **:: SQLSetPos** inoltre è più efficiente.  
  
##  <a name="_core_editing_an_existing_record"></a>Per modificare un Record esistente  
 Per modificare un record esistente in un recordset è necessario scorrere fino al record, chiamare il recordset [modifica](../../mfc/reference/crecordset-class.md#edit) funzione membro, impostare i valori dei membri dati di campo del nuovo record e chiamare il [aggiornare](../../mfc/reference/crecordset-class.md#update)funzione membro per scrivere il record modificato all'origine dati.  
  
 Come condizione preliminare per chiamare **modifica**, il recordset deve essere aggiornabile e in un record. Il `CanUpdate` e `IsDeleted` funzioni membro consentono di determinare tali condizioni. Inoltre è necessario che il record corrente non sia già stato eliminato e che siano presenti record del recordset (entrambi `IsBOF` e `IsEOF` restituiscono 0).  
  
 Quando si chiama **modifica**, viene archiviato il record nel buffer di modifica (il record corrente). I valori del record memorizzato in un secondo momento consentono di rilevare se tutti i campi sono stati modificati.  
  
 Dopo aver chiamato **modifica**, il buffer di modifica ancora rappresenta il record corrente ma è ora pronto per accettare le modifiche ai membri di dati del campo. Per modificare il record, impostare manualmente i valori dei membri di dati di campo che si desidera modificare. Anziché specificare un valore effettivo dei dati per un campo, è possibile chiamare `SetFieldNull` per specificare il valore Null. Per eseguire il commit delle modifiche, chiamare **aggiornamento**.  
  
> [!TIP]
>  Per sfruttare `AddNew` o **modifica** modalità, chiamare **spostare** con il parametro **AFX_MOVE_REFRESH**.  
  
 Come condizione preliminare per chiamare **aggiornamento**, il recordset non deve essere vuoto e non sia stato eliminato il record corrente. `IsBOF`, `IsEOF`, e `IsDeleted` restituiscano 0.  
  
 Quando si chiama **aggiornamento** per il record modificato:  
  
-   Se il driver ODBC supporta la **:: SQLSetPos** funzione API ODBC, MFC utilizza la funzione per aggiornare il record nell'origine dati. Con **:: SQLSetPos**, il driver confronta il buffer di modifica con il record corrispondente nel server di aggiornamento del record nel server, se i due sono diversi. Con **:: SQLSetPos**, MFC può aggiornare un record in modo più efficiente perché non è necessario creare ed elaborare un'istruzione SQL.  
  
     oppure  
  
-   Se **:: SQLSetPos** non può essere utilizzato, MFC effettua le seguenti operazioni:  
  
    1.  Se non sono state apportate modifiche, **aggiornamento** non esegue alcuna operazione e restituisce 0.  
  
    2.  Se sono presenti modifiche, **aggiornamento** costrutti SQL **aggiornamento** istruzione. Le colonne elencate nella **aggiornamento** istruzione si basano i membri di dati di campo che sono stati modificati.  
  
    3.  **Aggiornamento** viene eseguito il commit delle modifiche, ovvero esegue il **aggiornamento** istruzione e viene modificato il record nell'origine dati, ma non eseguito se una transazione è in corso (vedere [transazione: esecuzione di una transazione in un Recordset (ODBC)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md) per informazioni sull'influenza l'aggiornamento da parte della transazione). ODBC mantiene una copia del record, anch ' essa modificata.  
  
    4.  A differenza del processo per `AddNew`, **modifica** processo non ripristina il record memorizzato. Il record modificato rimane attivo come record corrente.  
  
    > [!CAUTION]
    >  Quando si prepara l'aggiornamento di un recordset chiamando **aggiornare**, verificare che il recordset includa tutte le colonne che costituiscono la chiave primaria della tabella (o tutte le colonne di qualsiasi univoco dell'indice nella tabella o di colonne insufficiente per in modo univoco identificare la riga). In alcuni casi, il framework può utilizzare solo le colonne selezionate nel recordset per identificare il record della tabella da aggiornare. Senza tutte le colonne necessarie più record potrebbero essere aggiornate nella tabella. In questo caso, il framework genera eccezioni quando si chiama **aggiornamento**.  
  
    > [!TIP]
    >  Se si chiama `AddNew` o **modifica** dopo aver chiamato una funzione in precedenza, ma prima di chiamare **aggiornamento**, il buffer di modifica viene aggiornato con il record memorizzato, sostituisce il record nuovo o modificato stato di avanzamento. Questo comportamento consente di interrompere un `AddNew` o **modifica** e iniziarne una nuova: se si determina che il record in corso è danneggiato, è sufficiente chiamare **modifica** o `AddNew` nuovamente.  
  
##  <a name="_core_deleting_a_record"></a>Eliminazione di un Record  
 Eliminazione di un record di un recordset è necessario scorrere fino al record e chiamare il recordset [eliminare](../../mfc/reference/crecordset-class.md#delete) funzione membro. A differenza di `AddNew` e **modifica**, **eliminare** non richiede una chiamata corrispondente al **aggiornamento**.  
  
 Come condizione preliminare per chiamare **eliminare**, il recordset deve essere aggiornabile e deve essere su un record. Il `CanUpdate`, `IsBOF`, `IsEOF`, e `IsDeleted` funzioni membro consentono di determinare tali condizioni.  
  
 Quando si chiama **eliminare**:  
  
-   Se il driver ODBC supporta la **:: SQLSetPos** funzione API ODBC, MFC utilizza la funzione per eliminare il record nell'origine dati. Utilizzando **:: SQLSetPos** viene in genere più efficiente rispetto all'utilizzo di SQL.  
  
     oppure  
  
-   Se **:: SQLSetPos** non può essere utilizzato, MFC effettua le seguenti operazioni:  
  
    1.  Il record corrente nel buffer di modifica non viene eseguito come in `AddNew` e **modifica**.  
  
    2.  **Eliminare** costrutti SQL **eliminare** istruzione che rimuove il record.  
  
         Il record corrente nel buffer di modifica non viene memorizzato come in `AddNew` e **modifica**.  
  
    3.  **Eliminare** viene eseguito il commit dell'eliminazione, esegue il **eliminare** istruzione. Il record viene contrassegnato come eliminato nell'origine dati e, se il record è uno snapshot, in ODBC.  
  
    4.  I valori del record eliminato sono ancora in membri di dati di campo del recordset, ma i membri di dati di campo vengono contrassegnati come Null e il recordset `IsDeleted` funzione membro restituisce un valore diverso da zero.  
  
    > [!NOTE]
    >  Dopo l'eliminazione di un record, è necessario passare a un altro record per reinserire il buffer di modifica dei dati del nuovo record. È un errore di chiamare **eliminare** nuovamente o chiamare **modifica**.  
  
 Per informazioni sulle istruzioni SQL utilizzate nelle operazioni di aggiornamento, vedere [SQL](../../data/odbc/sql.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Recordset (ODBC)](../../data/odbc/recordset-odbc.md)   
 [Recordset: Ulteriori informazioni sugli aggiornamenti (ODBC)](../../data/odbc/recordset-more-about-updates-odbc.md)   
 [Trasferimento di campi di record (RFX)](../../data/odbc/record-field-exchange-rfx.md)