---
title: Recordset (ODBC)
ms.date: 11/04/2016
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
ms.openlocfilehash: b201e152d83d3812253aa4803eebe715d726219d
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59034495"
---
# <a name="recordset-odbc"></a>Recordset (ODBC)

Questo argomento si applica alle classi ODBC MFC.

Oggetto [CRecordset](../../mfc/reference/crecordset-class.md) oggetto rappresenta un set di record selezionati da un'origine dati. I record possono provenire da:

- Una tabella.

- Una query.

- Una stored procedure che accede a uno o più tabelle.

Un esempio di un recordset in una tabella di base è "all customers", che accede a una tabella dei clienti. Un esempio di una query è "tutte le fatture per Joe Smith." Un esempio di un recordset in base a una stored procedure (detta anche una query predefinita) è "tutti gli account insoluti," che richiama una stored procedure nel database di back-end. Un set di record possibile unire due o più tabelle dalla stessa origine dati, ma non le tabelle da diverse origini dati.

> [!NOTE]
>  Per informazioni sulla derivazione di classi di recordset con le procedure guidate, vedere [aggiunta di un Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md) e [supporto Database, creazione guidata applicazione MFC](../../mfc/reference/database-support-mfc-application-wizard.md).

> [!NOTE]
>  Alcuni driver ODBC supporta le viste del database. Una visualizzazione in questo senso è una query che originariamente creati con il codice SQL `CREATE VIEW` istruzione. Le procedure guidate non supportano attualmente le viste, ma è possibile codificare manualmente questo supporto.

##  <a name="_core_recordset_capabilities"></a> Funzionalità di recordset

Tutti gli oggetti di recordset condividono le funzionalità seguenti:

- Se l'origine dati non è di sola lettura, è possibile specificare il recordset [aggiornabile](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md), [videoregistrazione](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md), o sola lettura. Se il recordset è aggiornabile, è possibile scegliere ottimistico o pessimistico [blocco](../../data/odbc/recordset-locking-records-odbc.md) forniti metodi, il driver fornisce il supporto per il blocco appropriato. Se l'origine dati è di sola lettura, si sarà recordset di sola lettura.

- È possibile chiamare le funzioni membro [scorrimento](../../data/odbc/recordset-scrolling-odbc.md) tramite i record selezionati.

- È possibile [filtro](../../data/odbc/recordset-filtering-records-odbc.md) i record per vincolare i record selezionati da quelli disponibili.

- È possibile [ordinamento](../../data/odbc/recordset-sorting-records-odbc.md) i record in ordine crescente o decrescente, in base a uno o più colonne.

- È possibile [parametrizzare](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md) il recordset per qualificare la selezione di recordset in fase di esecuzione.

##  <a name="_core_snapshots_and_dynasets"></a> Gli snapshot e dynaset

Esistono due tipi principali di Recordset: [istantanee](../../data/odbc/snapshot.md) e [dynaset](../../data/odbc/dynaset.md). Entrambi sono supportati dalla classe `CRecordset`. Ognuna condivide le caratteristiche comuni di tutti i recordset, ma ognuno estende anche le funzionalità comuni secondo le proprie regole specializzate. Gli snapshot forniscono una visualizzazione statica dei dati e sono utili per i report e altre situazioni in cui si desidera una visualizzazione dei dati esistenti in un determinato momento. I dynaset sono utili quando si desidera che gli aggiornamenti apportati da altri utenti sia visibile nel set di record senza dover rieseguire una query o aggiornare il recordset. Gli snapshot e dynaset può essere aggiornabile o di sola lettura. Per visualizzare i record aggiunti o eliminati da altri utenti, chiamare [CRecordset:: Requery](../../mfc/reference/crecordset-class.md#requery).

`CRecordset` consente inoltre di altri due tipi di Recordset: recordset dinamici e Recordset forward-only. Recordset dinamici sono simili a dynaset; Tuttavia, recordset dinamici riflette tutti i record aggiunti o eliminati senza chiamare `CRecordset::Requery`. Per questo motivo, recordset dinamici vengono in genere costoso in relazione al tempo di elaborazione nel sistema DBMS e molti driver ODBC non li supportano. Recordset forward-only, invece, specificare il metodo più efficiente dell'accesso ai dati per i recordset che non richiedono aggiornamenti o lo scorrimento all'indietro. Ad esempio, è possibile utilizzare un recordset forward-only per migrare i dati da un'origine dati a un altro, in cui è necessario solo per spostarsi tra i dati in una direzione in avanti. Per utilizzare un recordset forward-only, è necessario eseguire entrambe le operazioni seguenti:

- Passare l'opzione `CRecordset::forwardOnly` come il *nOpenType* parametro la [Open](../../mfc/reference/crecordset-class.md#open) funzione membro.

- Specificare `CRecordset::readOnly` nella *dwOptions* parametro `Open`.

    > [!NOTE]
    >  Per informazioni sui requisiti dei driver ODBC per dynaset supporto, vedere [ODBC](../../data/odbc/odbc-basics.md). Per un elenco dei driver ODBC inclusa in questa versione di Visual C++ e per informazioni su come ottenere driver aggiuntivi, vedere [elenco dei Driver ODBC](../../data/odbc/odbc-driver-list.md).

##  <a name="_core_your_recordsets"></a> I recordset

Per ogni tabella distinta, vista o stored procedure che si desidera accedere, in genere definita una classe derivata da `CRecordset`. (L'eccezione è un join del database, in cui un recordset rappresenta le colonne da due o più tabelle). Quando si deriva una classe recordset, si abilita il meccanismo di campi di record (RFX) di exchange o il meccanismo di scambio (RFX di massa) di massa di campi di record, che sono simili al meccanismo dialog data exchange (DDX). RFX e RFX di massa semplificano il trasferimento dei dati dall'origine dati al recordset. RFX inoltre trasferisce i dati dal recordset all'origine dati. Per altre informazioni, vedere [campi di Record (RFX)](../../data/odbc/record-field-exchange-rfx.md) e [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Un oggetto recordset consente di accedere a tutti i record selezionati. Lo scorrimento di record selezionati più mediante `CRecordset` funzioni membro, ad esempio `MoveNext` e `MovePrev`. Allo stesso tempo, un oggetto recordset rappresenta solo uno dei record selezionato, il record corrente. È possibile esaminare i campi del record corrente con la dichiarazione di variabili membro della classe che corrispondono alle colonne della tabella o dei record risultanti dalla query sul database recordset. Per informazioni sui membri dei dati di recordset, vedere [Recordset: Architettura (ODBC)](../../data/odbc/recordset-architecture-odbc.md).

Gli argomenti seguenti illustrano i dettagli di utilizzo degli oggetti recordset. Gli argomenti sono elencati in categorie funzionali e disposti in modo da consentirne la lettura sequenza.

### <a name="topics-about-the-mechanics-of-opening-reading-and-closing-recordsets"></a>Argomenti relativi alle operazioni di apertura, la lettura e chiusura di recordset

- [Recordset: Architettura (ODBC)](../../data/odbc/recordset-architecture-odbc.md)

- [Recordset: Dichiarazione di una classe per una tabella (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md)

- [Recordset: Creazione e chiusura di recordset (ODBC)](../../data/odbc/recordset-creating-and-closing-recordsets-odbc.md)

- [Recordset: Scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md)

- [Recordset: Bookmark e Absolute Position (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md)

- [Recordset: Filtrare i record (ODBC)](../../data/odbc/recordset-filtering-records-odbc.md)

- [Recordset: Ordinamento dei record (ODBC)](../../data/odbc/recordset-sorting-records-odbc.md)

- [Recordset: Parametrizzazione di un Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md)

### <a name="topics-about-the-mechanics-of-modifying-recordsets"></a>Argomenti relativi alle operazioni di modifica dei recordset

- [Recordset: Aggiunta, aggiornamento ed eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md)

- [Recordset: Blocco dei record (ODBC)](../../data/odbc/recordset-locking-records-odbc.md)

- [Recordset: Ripetizione di query in un Recordset (ODBC)](../../data/odbc/recordset-requerying-a-recordset-odbc.md)

### <a name="topics-about-somewhat-more-advanced-techniques"></a>Argomenti relativi in qualche modo le tecniche più avanzate

- [Recordset: Esecuzione di un Join (ODBC)](../../data/odbc/recordset-performing-a-join-odbc.md)

- [Recordset: Dichiarazione di una classe per una Query predefinita (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-predefined-query-odbc.md)

- [Recordset: Associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md)

- [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md)

- [Recordset: Uso degli elementi di dati di grandi dimensioni (ODBC)](../../data/odbc/recordset-working-with-large-data-items-odbc.md)

- [Recordset: Recupero di somme e altri risultati aggregati (ODBC)](../../data/odbc/recordset-obtaining-sums-and-other-aggregate-results-odbc.md)

### <a name="topics-about-how-recordsets-work"></a>Argomenti sul funzionano dei recordset

- [Recordset: Selezione dei record (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md)

- [Recordset: Aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md)

## <a name="see-also"></a>Vedere anche

[Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)<br/>
[Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)<br/>
[Transazione (ODBC)](../../data/odbc/transaction-odbc.md)