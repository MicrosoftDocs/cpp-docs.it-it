---
description: 'Ulteriori informazioni su: Recordset (ODBC)'
title: Recordset (ODBC)
ms.date: 05/09/2019
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
ms.openlocfilehash: edbad5851db6f5ac9e1fddcc769c4f860ee5478e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97204537"
---
# <a name="recordset-odbc"></a>Recordset (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

Un oggetto [CRecordset](../../mfc/reference/crecordset-class.md) rappresenta un set di record selezionati da un'origine dati. I record possono provenire da:

- Tabella.

- Una query.

- Una stored procedure che accede a una o più tabelle.

Un esempio di recordset basato su una tabella è "tutti i clienti", che accede a una tabella Customers. Un esempio di query è "tutte le fatture per un determinato cliente". Un esempio di recordset basato su una stored procedure (anche denominata query predefinita) è "tutti gli account insolventi", che richiama una stored procedure nel database back-end. Un recordset può eseguire il join di due o più tabelle dalla stessa origine dati, ma di tabelle da diverse origini dati.

> [!NOTE]
> Alcuni driver ODBC supportano le viste del database. Una vista, in questo senso, è una query originariamente creata l'istruzione SQL `CREATE VIEW`.

## <a name="recordset-capabilities"></a><a name="_core_recordset_capabilities"></a> Funzionalità dei recordset

Tutti gli oggetti recordset condividono le funzionalità seguenti:

- Se l'origine dati non è di sola lettura, è possibile specificare il recordset come [aggiornabile](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md), [con supporto per l'accodamento](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md) o di sola lettura. Se il recordset è aggiornabile, è possibile scegliere metodi di [blocco](../../data/odbc/recordset-locking-records-odbc.md) ottimistico o pessimistico, disponibili se il driver fornisce il supporto per il blocco appropriato. Se l'origine dati è di sola lettura, il recordset sarà di sola lettura.

- È possibile chiamare funzioni membro per eseguire lo [scorrimento](../../data/odbc/recordset-scrolling-odbc.md) tra i record selezionati.

- È possibile [filtrare](../../data/odbc/recordset-filtering-records-odbc.md) i record per vincolare i record selezionati da quelli disponibili.

- È possibile [ordinare](../../data/odbc/recordset-sorting-records-odbc.md) i record in ordine crescente o decrescente, in base a una o più colonne.

- È possibile [parametrizzare](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md) il recordset per qualificare la selezione del recordset in fase di esecuzione.

## <a name="snapshots-and-dynasets"></a><a name="_core_snapshots_and_dynasets"></a> Snapshot e dynaset

Esistono due tipi principali di recordset: [snapshot](../../data/odbc/snapshot.md) e [dynaset](../../data/odbc/dynaset.md). Entrambi sono supportati dalla classe `CRecordset`. Anche se entrambi condividono le caratteristiche comuni di tutti i recordset, ciascuno estende le funzionalità comuni in un modo specifico. Gli snapshot forniscono una vista statica dei dati e sono utili per i report e altre situazioni in cui si vuole un'istantanea dei dati esistenti in un determinato momento. I dynaset sono utili quando si vuole che gli aggiornamenti apportati da altri utenti siano visibili nel recordset senza dover ripetere una query o aggiornare il recordset. Gli snapshot e dynaset possono essere aggiornabili o di sola lettura. Per visualizzare i record aggiunti o eliminati da altri utenti, chiamare [CRecordset:: Requery](../../mfc/reference/crecordset-class.md#requery).

`CRecordset` consente inoltre di usare altri due tipi di recordset: recordset dinamici e recordset forward-only. I recordset dinamici sono simili ai dynaset, tuttavia i recordset dinamici visualizzano tutti i record aggiunti o eliminati senza chiamare `CRecordset::Requery`. Per questo motivo, i recordset dinamici sono generalmente costosi rispetto al tempo di elaborazione nel sistema di gestione di database e molti driver ODBC non li supportano. I recordset forward-only, invece, forniscono il metodo più efficiente di accesso ai dati per i recordset che non richiedono aggiornamenti o lo scorrimento all'indietro. È ad esempio possibile usare un recordset forward-only per migrare i dati da un'origine dati a un'altra, quando è necessario solo spostarsi tra i dati in avanti. Per usare un recordset forward-only, è necessario eseguire entrambe le operazioni seguenti:

- Passare l'opzione `CRecordset::forwardOnly` come parametro *nOpenType* della funzione membro [Open](../../mfc/reference/crecordset-class.md#open).

- Specificare `CRecordset::readOnly` nel parametro *dwOptions* di `Open`.

    > [!NOTE]
    >  Per informazioni sui requisiti dei driver ODBC per il supporto dei dynaset, vedere [ODBC](../../data/odbc/odbc-basics.md). Per un elenco dei driver ODBC inclusi in questa versione di Visual C++ e informazioni su come ottenere driver aggiuntivi, vedere [Elenco dei driver ODBC](../../data/odbc/odbc-driver-list.md).

## <a name="your-recordsets"></a><a name="_core_your_recordsets"></a> Recordset personalizzati

Per ogni singola tabella, vista o stored procedure a cui si vuole accedere, in genere si definisce una classe derivata da `CRecordset`. (L'eccezione è un join del database, in cui un recordset rappresenta le colonne di due o più tabelle). Quando si deriva una classe recordset, si Abilita il meccanismo RFX (record Field Exchange) o il meccanismo RFX (Bulk Record Field Exchange), che è simile al meccanismo DDX (Dialog Data Exchange). RFX e RFX di massa semplificano il trasferimento dei dati dall'origine dati nel recordset. RFX trasferisce inoltre i dati dal recordset nell'origine dati. Per ulteriori informazioni, vedere [trasferimento di campi di record (RFX)](../../data/odbc/record-field-exchange-rfx.md) e [Recordset: recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Un oggetto recordset consente di accedere a tutti i record selezionati. È possibile scorrere i record selezionati usando le funzioni membro `CRecordset`, come `MoveNext` e `MovePrev`. Allo stesso tempo, un oggetto recordset rappresenta solo uno dei record selezionati, il record corrente. È possibile esaminare i campi del record corrente mediante la dichiarazione di variabili membro della classe recordset, che corrispondono alle colonne della tabella o dei record risultanti dalla query sul database. Per informazioni sui membri dati del recordset, vedere [Recordset: Architecture (ODBC)](../../data/odbc/recordset-architecture-odbc.md).

Negli argomenti elencati di seguito vengono forniti dettagli sull'uso degli oggetti recordset. Gli argomenti sono elencati per categorie funzionali e organizzati in modo da consentirne la lettura in sequenza.

### <a name="topics-about-the-mechanics-of-opening-reading-and-closing-recordsets"></a>Argomenti relativi alle operazioni di apertura, lettura e chiusura di recordset

- [Recordset: architettura (ODBC)](../../data/odbc/recordset-architecture-odbc.md)

- [Recordset: dichiarazione di una classe per una tabella (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md)

- [Recordset: creazione e chiusura di recordset (ODBC)](../../data/odbc/recordset-creating-and-closing-recordsets-odbc.md)

- [Recordset: Scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md)

- [Recordset: segnalibri e posizioni assolute (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md)

- [Recordset: applicazione di filtri ai record (ODBC)](../../data/odbc/recordset-filtering-records-odbc.md)

- [Recordset: ordinamento di record (ODBC)](../../data/odbc/recordset-sorting-records-odbc.md)

- [Recordset: parametrizzazione di un recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md)

### <a name="topics-about-the-mechanics-of-modifying-recordsets"></a>Argomenti relativi alle operazioni di modifica dei recordset

- [Recordset: aggiunta, aggiornamento ed eliminazione di record (ODBC)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md)

- [Recordset: blocco di record (ODBC)](../../data/odbc/recordset-locking-records-odbc.md)

- [Recordset: esecuzione di una query in un recordset (ODBC)](../../data/odbc/recordset-requerying-a-recordset-odbc.md)

### <a name="topics-about-somewhat-more-advanced-techniques"></a>Argomenti relativi a tecniche più avanzate

- [Recordset: esecuzione di un join (ODBC)](../../data/odbc/recordset-performing-a-join-odbc.md)

- [Recordset: dichiarazione di una classe per una query predefinita (ODBC)](../../data/odbc/recordset-declaring-a-class-for-a-predefined-query-odbc.md)

- [Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md)

- [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md)

- [Recordset: utilizzo di elementi di dati di grandi dimensioni (ODBC)](../../data/odbc/recordset-working-with-large-data-items-odbc.md)

- [Recordset: recupero di somme e altri risultati aggregati (ODBC)](../../data/odbc/recordset-obtaining-sums-and-other-aggregate-results-odbc.md)

### <a name="topics-about-how-recordsets-work"></a>Argomenti relativi al funzionamento dei recordset

- [Recordset: selezione di record in recordset (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md)

- [Recordset: aggiornamento di record in recordset (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md)

## <a name="see-also"></a>Vedi anche

[Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)<br/>
[Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)<br/>
[Transazione (ODBC)](../../data/odbc/transaction-odbc.md)
