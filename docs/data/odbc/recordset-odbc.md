---
title: Recordset (ODBC) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- recordsets, snapshots
- recordsets, creating
- dynamic recordsets
- forward-only recordsets
- recordsets, dynasets
- ODBC recordsets, CRecordset objects
- ODBC recordsets
- recordsets, about recordsets
- snapshots, ODBC recordsets
- dynasets
ms.assetid: 333337c5-575e-4d26-b5f6-47166ad7874d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 0c59de3c5db2e1ec658a09279cb42e2833a4109e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="recordset-odbc"></a>Recordset (ODBC)
Questo argomento si applica alle classi ODBC MFC.  
  
 Oggetto [CRecordset](../../mfc/reference/crecordset-class.md) oggetto rappresenta un set di record selezionati da un'origine dati. I record possono provenire da:  
  
-   Una tabella.  
  
-   Una query.  
  
-   Una stored procedure che accede a uno o più tabelle.  
  
 Un esempio di un recordset in una tabella di base è "all customers", che accede a una tabella dei clienti. Un esempio di una query è "tutte le fatture per Joe Smith." Un esempio di un recordset in base a una stored procedure (detta anche una query predefinita) è "tutti gli account insoluti," che richiama una stored procedure nel database back-end. Un recordset è possibile unire due o più tabelle dalla stessa origine dati, ma non le tabelle da diverse origini dati.  
  
> [!NOTE]
>  Per informazioni sulla derivazione di classi di recordset con le procedure guidate, vedere [aggiunta di un Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md) e [supporto Database, creazione guidata applicazione MFC](../../mfc/reference/database-support-mfc-application-wizard.md).  
  
> [!NOTE]
>  Alcuni driver ODBC supporta le viste del database. Una vista in questo senso è una query originariamente creata con l'istruzione SQL `CREATE VIEW` istruzione. Le procedure guidate non supportano attualmente le viste, ma è possibile codificare manualmente questo supporto.  
  
##  <a name="_core_recordset_capabilities"></a> Funzionalità di recordset  
 Tutti gli oggetti recordset condividono le funzionalità seguenti:  
  
-   Se l'origine dati non è di sola lettura, è possibile specificare il recordset [aggiornabile](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md), [videoregistrazione](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md), o di sola lettura. Se il recordset è aggiornabile, è possibile scegliere ottimistico o pessimistico [blocco](../../data/odbc/recordset-locking-records-odbc.md) forniti metodi, il driver fornisce il supporto per il blocco appropriato. Se l'origine dati è di sola lettura, il recordset sarà sola lettura.  
  
-   È possibile chiamare funzioni membro [scorrimento](../../data/odbc/recordset-scrolling-odbc.md) i record selezionati.  
  
-   È possibile [filtro](../../data/odbc/recordset-filtering-records-odbc.md) i record per vincolare i record selezionati da quelli disponibili.  
  
-   È possibile [ordinamento](../../data/odbc/recordset-sorting-records-odbc.md) i record in ordine crescente o decrescente, in base a uno o più colonne.  
  
-   È possibile [parametrizzare](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md) recordset per qualificare la selezione del recordset in fase di esecuzione.  
  
##  <a name="_core_snapshots_and_dynasets"></a> Gli snapshot e dynaset  
 Esistono due tipi principali di Recordset: [snapshot](../../data/odbc/snapshot.md) e [dynaset](../../data/odbc/dynaset.md). Entrambi sono supportati dalla classe `CRecordset`. Ogni condivide le caratteristiche comuni di tutti i recordset, ma ogni estende la funzionalità comune in modo specifico. Gli snapshot forniscono una visualizzazione statica dei dati e sono utili per i report e altre situazioni in cui si desidera una visualizzazione dei dati esistenti in un momento specifico. I dynaset sono utili quando si desiderano che gli aggiornamenti eseguiti da altri utenti siano visibili nel recordset senza dover rieseguire una query o aggiornare il recordset. Gli snapshot e dynaset possono essere aggiornabili o di sola lettura. Per visualizzare i record aggiunti o eliminati da altri utenti, chiamare [CRecordset:: Requery](../../mfc/reference/crecordset-class.md#requery).  
  
 `CRecordset` consente inoltre di altri due tipi di Recordset: recordset dinamici e Recordset forward-only. Recordset dinamici sono simili per dynaset; Tuttavia, i recordset dinamici riflettono i record aggiunti o eliminati senza chiamare `CRecordset::Requery`. Per questo motivo, i recordset dinamici sono in genere dispendiosi rispetto al tempo di elaborazione nel sistema DBMS e molti driver ODBC non li supportano. Recordset forward-only forniscono invece il metodo più efficiente dell'accesso ai dati per i recordset che non richiedono aggiornamenti o lo scorrimento all'indietro. Ad esempio, è possibile utilizzare un recordset forward-only per migrare i dati da un'origine dati a un altro, in cui è necessario solo per spostarsi tra i dati in avanti. Per utilizzare un recordset forward-only, è necessario eseguire entrambe le operazioni seguenti:  
  
-   Passare l'opzione **CRecordset:: forwardOnly** come il `nOpenType` parametro del [aprire](../../mfc/reference/crecordset-class.md#open) funzione membro.  
  
-   Specificare **CRecordset** nel `dwOptions` parametro di **aprire**.  
  
    > [!NOTE]
    >  Per informazioni sui requisiti dei driver ODBC per dynaset supporto, vedere [ODBC](../../data/odbc/odbc-basics.md). Per un elenco dei driver ODBC inclusi in questa versione di Visual C++ e per informazioni su come ottenere i driver aggiuntivi, vedere [elenco dei Driver ODBC](../../data/odbc/odbc-driver-list.md).  
  
##  <a name="_core_your_recordsets"></a> I recordset  
 Per ogni specifica tabella, vista o stored procedure che si desidera accedere, in genere definita una classe derivata da `CRecordset`. (L'eccezione è un join del database, in cui un recordset rappresenta le colonne da due o più tabelle). Quando si deriva una classe recordset, si attiva il meccanismo di campi di record (RFX) di exchange o il meccanismo di blocco campi di record (RFX di massa) di exchange, che sono simili al meccanismo di exchange (DDX) di dati di finestra di dialogo. RFX e RFX di massa semplificano il trasferimento dei dati dall'origine dati al recordset. RFX consente inoltre di trasferire dati dal recordset all'origine dati. Per ulteriori informazioni, vedere [trasferimento di campi di Record (RFX)](../../data/odbc/record-field-exchange-rfx.md) e [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Un oggetto recordset consente di accedere a tutti i record selezionati. Lo scorrimento di record selezionati più utilizzando `CRecordset` funzioni membro, ad esempio `MoveNext` e `MovePrev`. Allo stesso tempo, un oggetto recordset rappresenta solo uno dei record selezionato, il record corrente. È possibile esaminare i campi del record corrente mediante la dichiarazione di variabili membro della classe che corrispondono alle colonne della tabella o i record restituiti dalla query sul database di recordset. Per informazioni sui membri di dati di recordset, vedere [Recordset: architettura (ODBC)](../../data/odbc/recordset-architecture-odbc.md).  
  
 Gli argomenti seguenti illustrano i dettagli sull'utilizzo degli oggetti recordset. Gli argomenti sono elencati in categorie funzionali e disposti in modo da consentirne la lettura sequenza.  
  
### <a name="topics-about-the-mechanics-of-opening-reading-and-closing-recordsets"></a>Argomenti relativi alle operazioni di apertura, la lettura e chiusura di recordset  
  
-   [Recordset: architettura (ODBC)](../../data/odbc/recordset-architecture-odbc.md)  
  
-   [Recordset: dichiarazione di una classe per una tabella (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md)  
  
-   [Recordset: creazione e chiusura di recordset (ODBC)](../../data/odbc/recordset-creating-and-closing-recordsets-odbc.md)  
  
-   [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md)  
  
-   [Recordset: bookmark e absolute position (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md)  
  
-   [Recordset: applicazione di filtri ai record (ODBC)](../../data/odbc/recordset-filtering-records-odbc.md)  
  
-   [Recordset: ordinamento dei record (ODBC)](../../data/odbc/recordset-sorting-records-odbc.md)  
  
-   [Recordset: applicazione di parametri a un recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md)  
  
### <a name="topics-about-the-mechanics-of-modifying-recordsets"></a>Argomenti relativi alle operazioni di modifica dei recordset  
  
-   [Recordset: aggiunta, aggiornamento ed eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md)  
  
-   [Recordset: blocco dei record (ODBC)](../../data/odbc/recordset-locking-records-odbc.md)  
  
-   [Recordset: ripetizione di una query in un recordset (ODBC)](../../data/odbc/recordset-requerying-a-recordset-odbc.md)  
  
### <a name="topics-about-somewhat-more-advanced-techniques"></a>Argomenti relativi a tecniche più avanzate  
  
-   [Recordset: esecuzione di un join (ODBC)](../../data/odbc/recordset-performing-a-join-odbc.md)  
  
-   [Recordset: dichiarazione di una classe per una query predefinita (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-predefined-query-odbc.md)  
  
-   [Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md)  
  
-   [Recordset: recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md)  
  
-   [Recordset: gestione di dati di grandi dimensioni (ODBC)](../../data/odbc/recordset-working-with-large-data-items-odbc.md)  
  
-   [Recordset: recupero di somme e altri risultati aggregati (ODBC)](../../data/odbc/recordset-obtaining-sums-and-other-aggregate-results-odbc.md)  
  
### <a name="topics-about-how-recordsets-work"></a>Argomenti sul funzionamento dei recordset  
  
-   [Recordset: selezione dei record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md)  
  
-   [Recordset: aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)   
 [Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)   
 [Transazione (ODBC)](../../data/odbc/transaction-odbc.md)