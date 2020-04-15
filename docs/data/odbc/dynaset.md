---
title: Dynaset
ms.date: 11/04/2016
helpviewer_keywords:
- ODBC recordsets, dynasets
- ODBC cursor library [ODBC], dynasets
- keyset-driven cursors in dynasets
- cursors [ODBC], keyset-driven cursors in dynasets
- cursor library [ODBC], dynaset availability
- recordsets [C++], dynasets
- dynasets
ms.assetid: 2867e6be-208e-4fe7-8bbe-b8697cb1045c
ms.openlocfilehash: 2eb2447d1f984b7734d5e9c45087023e5a6f003f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371833"
---
# <a name="dynaset"></a>Dynaset

In questo argomento vengono descritti i dynaset e ne viene illustrata la [disponibilità.](#_core_availability_of_dynasets)

> [!NOTE]
> Questo argomento si applica alle classi ODBC MFC, tra cui [CRecordset](../../mfc/reference/crecordset-class.md). Per informazioni sui dynaset nelle classi DAO, vedere [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md). Con DAO, è possibile aprire recordset di tipo dynaset.

Un dynaset è un recordset con proprietà dinamiche. Durante la sua durata, un oggetto recordset in modalità dynaset (in genere denominato dynaset) rimane sincronizzato con l'origine dati nel modo seguente. In un ambiente multiutente, altri utenti potrebbero modificare o eliminare i record presenti nel dynaset o aggiungere record alla tabella rappresentato dal dynaset. I record aggiunti o eliminati dall'applicazione dal recordset vengono riflessi nel dynaset. I record aggiunti da altri utenti alla tabella non verranno riflessi nel dynaset fino a quando non si ricompila il dynaset chiamando la relativa `Requery` funzione membro. Quando altri utenti eliminano i record, il codice MFC ignora le eliminazioni nel recordset. Le modifiche apportate da altri utenti ai record esistenti si riflettono nel dynaset non appena si scorre il record interessato.

Analogamente, le modifiche apportate ai record in un dynaset si riflettono nei dynaset utilizzati da altri utenti. I record aggiunti non vengono riflessi nei dynaset di altri utenti finché non riinterrogano nuovamente i relativi dynaset. I record eliminati vengono contrassegnati come "eliminati" nei recordset di altri utenti. Se si dispone di più connessioni `CDatabase` allo stesso database (più oggetti), i recordset associati a tali connessioni hanno lo stesso stato dei recordset di altri utenti.

I dynaset sono particolarmente utili quando i dati devono essere dinamici, ad esempio in un sistema di prenotazione di compagnie aeree.

> [!NOTE]
> Per utilizzare i dynaset, è necessario disporre di un driver ODBC per l'origine dati che supporti i dynaset e la libreria di cursori ODBC non deve essere caricata. Per ulteriori informazioni, consultate [Disponibilità dei dynaset.](#_core_availability_of_dynasets)

Per specificare che un recordset è `CRecordset::dynaset` un dynaset, passare come primo parametro alla funzione `Open` membro dell'oggetto recordset.

> [!NOTE]
> Per i dynaset aggiornabili, il driver ODBC deve supportare le istruzioni di aggiornamento posizionate o la `::SQLSetPos` funzione API ODBC. Se entrambi sono supportati, MFC utilizza `::SQLSetPos` per l'efficienza.

## <a name="availability-of-dynasets"></a><a name="_core_availability_of_dynasets"></a>Disponibilità dei Dynasets

Le classi di database MFC supportano dynaset se vengono soddisfatti i seguenti requisiti:

- La DLL della libreria di cursori ODBC non deve essere in uso per questa origine dati.

   Se viene utilizzata la libreria di cursori, maschera alcune funzionalità del driver ODBC sottostante che è necessario per il supporto dynaset. Se si desidera utilizzare dynaset (e il driver ODBC dispone della funzionalità necessaria per i dynaset, come descritto nella parte `CDatabase` restante di questa sezione), è possibile fare in modo che MFC non carichi la libreria di cursori quando si crea un oggetto. Per ulteriori informazioni, vedere [ODBC](../../data/odbc/odbc-basics.md) e la funzione `CDatabase`membro [OpenEx](../../mfc/reference/cdatabase-class.md#openex) o [Open](../../mfc/reference/cdatabase-class.md#open) della classe .

   Nella terminologia ODBC, i dynaset e gli snapshot vengono definiti cursori. Un cursore è un meccanismo utilizzato per tenere traccia della relativa posizione in un recordset.

- Il driver ODBC per l'origine dati deve supportare i cursori basati su keyset.

   I cursori basati su keyset gestiscono i dati da una tabella ottenendo e archiviando un set di chiavi. Le chiavi vengono utilizzate per ottenere i dati correnti dalla tabella quando l'utente scorre su un record specifico. Per determinare se il driver fornisce `::SQLGetInfo` questo supporto, chiamare la funzione DELL'API ODBC con il *parametro SQL_SCROLL_OPTIONS.*

   Se si tenta di aprire un dynaset senza `CDBException` il supporto di keyset, si ottiene un con il valore del codice restituito AFX_SQL_ERROR_DYNASET_NOT_SUPPORTED.

- Il driver ODBC per l'origine dati deve supportare il recupero esteso.

   Il recupero esteso è la possibilità di scorrere all'indietro e in avanti sui record risultanti della query SQL. Per determinare se il driver supporta `::SQLGetFunctions` questa funzionalità, chiamare la funzione API ODBC con il *parametro SQL_API_SQLEXTENDEDFETCH.*

Se si desidera aggiornare dynaset (o snapshot, per questo, per `::SQLSetPos` questo,) il driver ODBC deve supportare anche la funzione API ODBC o gli aggiornamenti posizionati. La `::SQLSetPos` funzione consente a MFC di aggiornare l'origine dati senza inviare istruzioni SQL. Se questo supporto è disponibile, MFC lo utilizza in preferenza per apportare aggiornamenti tramite SQL. Per determinare se il `::SQLSetPos`driver `::SQLGetInfo` supporta , chiamare con il *parametro SQL_POS_OPERATIONS.*

Gli aggiornamenti posizionati utilizzano la sintassi SQL (nel formato **WHERE CURRENT OF** \<cursorname>) per identificare una particolare riga della tabella nell'origine dati. Per determinare se il driver supporta `::SQLGetInfo` gli aggiornamenti posizionati, chiamare con il *parametro SQL_POSITIONED_STATEMENTS.*

In genere, i dynaset MFC (ma non solo i recordset forward-only) richiedono un driver ODBC con conformità API di livello 2. Se il driver per l'origine dati è conforme al set di API di livello 1, è comunque possibile utilizzare snapshot aggiornabili e di sola lettura e recordset forward-only, ma non dynaset. Tuttavia, un driver di livello 1 può supportare i dynaset se supporta il recupero esteso e i cursori basati su keyset. Per ulteriori informazioni sui livelli di conformità ODBC, vedere [ODBC](../../data/odbc/odbc-basics.md).

> [!NOTE]
> Se si desidera utilizzare sia snapshot che dynaset, è `CDatabase` necessario basarli su due oggetti diversi (due connessioni diverse).

A differenza degli snapshot, che utilizzano l'archiviazione intermedia gestita dalla libreria di cursori ODBC, i dynaset recuperano un record direttamente dall'origine dati non appena si scorre su di essa. In questo modo i record selezionati in origine dal dynaset vengono sincronizzati con l'origine dati.

Per un elenco dei driver ODBC inclusi in questa versione di Visual C++ e informazioni su come ottenere driver aggiuntivi, vedere [Elenco dei driver ODBC](../../data/odbc/odbc-driver-list.md).

## <a name="see-also"></a>Vedere anche

[Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)
