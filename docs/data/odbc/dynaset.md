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
ms.openlocfilehash: ed7098600126005978c8b017e7db378fca4c1a68
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213239"
---
# <a name="dynaset"></a>Dynaset

In questo argomento vengono descritti i dynaset e viene illustrata la relativa [disponibilità](#_core_availability_of_dynasets).

> [!NOTE]
>  Questo argomento si applica alle classi ODBC MFC, incluso [CRecordset](../../mfc/reference/crecordset-class.md). Per informazioni sui dynaset nelle classi DAO, vedere [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md). Con DAO è possibile aprire recordset di tipo dynaset.

Un oggetto dynaset è un recordset con proprietà dinamiche. Nel corso della sua durata, un oggetto recordset in modalità dynaset, generalmente denominato dynaset, rimane sincronizzato con l'origine dati nel modo seguente. In un ambiente multiutente, altri utenti potrebbero modificare o eliminare i record presenti nel dynaset o aggiungere record alla tabella rappresentata da dynaset. I record che l'applicazione aggiunge o Elimina dal recordset vengono riflessi nel dynaset. I record che altri utenti aggiungono alla tabella non verranno riflessi in dynaset fino a quando non si ricompila il dynaset chiamando la relativa funzione membro `Requery`. Quando altri utenti eliminano i record, il codice MFC ignora le eliminazioni nel recordset. Gli altri utenti che modificano le modifiche apportate ai record esistenti vengono riflessi nel dynaset non appena si scorre il record interessato.

Analogamente, le modifiche apportate ai record in un dynaset vengono riflesse in dynaset utilizzate da altri utenti. I record aggiunti non vengono riflessi nei dynaset di altri utenti fino a quando non eseguono nuovamente una query sui dynaset. I record eliminati vengono contrassegnati come "eliminati" nei recordset di altri utenti. Se si dispone di più connessioni allo stesso database (più oggetti `CDatabase`), i recordset associati a tali connessioni hanno lo stesso stato dei recordset di altri utenti.

I dynaset sono particolarmente utili quando i dati devono essere dinamici, come (ad esempio) in un sistema di prenotazione delle compagnie aeree.

> [!NOTE]
> Per utilizzare i dynaset, è necessario disporre di un driver ODBC per l'origine dati che supporti i dynaset e la libreria di cursori ODBC non deve essere caricata. Per ulteriori informazioni, vedere la pagina relativa alla [disponibilità dei dynaset](#_core_availability_of_dynasets).

Per specificare che un recordset è un dynaset, passare `CRecordset::dynaset` come primo parametro alla funzione membro `Open` dell'oggetto recordset.

> [!NOTE]
> Per i dynaset aggiornabili, il driver ODBC deve supportare le istruzioni UPDATE posizionate o la funzione `::SQLSetPos` API ODBC. Se sono supportate entrambe, MFC USA `::SQLSetPos` per garantire l'efficienza.

##  <a name="availability-of-dynasets"></a><a name="_core_availability_of_dynasets"></a>Disponibilità di dynaset

Le classi di database MFC supportano i dynaset se vengono soddisfatti i requisiti seguenti:

- La DLL della libreria di cursori ODBC non deve essere in uso per questa origine dati.

   Se viene utilizzata la libreria di cursori, maschera alcune funzionalità del driver ODBC sottostante necessarie per il supporto dynaset. Se si desidera utilizzare i dynaset (e il driver ODBC dispone della funzionalità necessaria per i dynaset, come descritto nella parte restante di questa sezione), è possibile fare in modo che MFC non carichi la libreria di cursori quando si crea un oggetto `CDatabase`. Per ulteriori informazioni, vedere [ODBC](../../data/odbc/odbc-basics.md) e la funzione membro [OpenEx](../../mfc/reference/cdatabase-class.md#openex) o [Open](../../mfc/reference/cdatabase-class.md#open) della classe `CDatabase`.

   Nella terminologia ODBC, i dynaset e gli snapshot vengono definiti cursori. Un cursore è un meccanismo utilizzato per tenere traccia della posizione in un recordset.

- Il driver ODBC per l'origine dati deve supportare i cursori gestiti da keyset.

   I cursori gestiti da keyset gestiscono i dati da una tabella ottenendo e archiviando un set di chiavi. Le chiavi vengono usate per ottenere i dati correnti dalla tabella quando l'utente scorre su un record specifico. Per determinare se il driver fornisce questo supporto, chiamare la funzione `::SQLGetInfo` API ODBC con il parametro *SQL_SCROLL_OPTIONS* .

   Se si tenta di aprire un dynaset senza supporto keyset, si ottiene un `CDBException` con il valore del codice restituito AFX_SQL_ERROR_DYNASET_NOT_SUPPORTED.

- Il driver ODBC per l'origine dati deve supportare il recupero esteso.

   Il recupero esteso è la possibilità di scorrere in avanti e indietro i record risultanti della query SQL. Per determinare se il driver supporta questa funzionalità, chiamare la funzione `::SQLGetFunctions` API ODBC con il parametro *SQL_API_SQLEXTENDEDFETCH* .

Se si desidera che i dynaset aggiornabili (o gli snapshot), il driver ODBC deve supportare anche la `::SQLSetPos` funzione API ODBC o gli aggiornamenti posizionati. La funzione `::SQLSetPos` consente a MFC di aggiornare l'origine dati senza inviare istruzioni SQL. Se questo supporto è disponibile, MFC lo utilizza in modo preferenziale per eseguire aggiornamenti tramite SQL. Per determinare se il driver supporta `::SQLSetPos`, chiamare `::SQLGetInfo` con il parametro *SQL_POS_OPERATIONS* .

Gli aggiornamenti posizionati utilizzano la sintassi SQL (nel formato in **cui Current of** \<cursorname >) per identificare una determinata riga nella tabella nell'origine dati. Per determinare se il driver supporta gli aggiornamenti posizionati, chiamare `::SQLGetInfo` con il parametro *SQL_POSITIONED_STATEMENTS* .

In genere, i dynaset MFC (ma non i recordset di tipo "inoltr") richiedono un driver ODBC con conformità API di livello 2. Se il driver per l'origine dati è conforme al set di API di livello 1, è comunque possibile usare sia gli snapshot aggiornabili che quelli di sola lettura, ma non i dynaset. Un driver di livello 1 può tuttavia supportare i dynaset se supporta il recupero esteso e i cursori gestiti da keyset. Per ulteriori informazioni sui livelli di conformità ODBC, vedere [ODBC](../../data/odbc/odbc-basics.md).

> [!NOTE]
> Se si desidera utilizzare sia snapshot che dynaset, è necessario basarli su due oggetti `CDatabase` diversi (due connessioni diverse).

Diversamente dagli snapshot, che utilizzano l'archiviazione intermedia gestita dalla libreria di cursori ODBC, i dynaset recuperano un record direttamente dall'origine dati non appena lo si scorre. Questa operazione consente di mantenere i record selezionati in origine dal dynaset sincronizzati con l'origine dati.

Per un elenco dei driver ODBC inclusi in questa versione di Visual C++ e informazioni su come ottenere driver aggiuntivi, vedere [Elenco dei driver ODBC](../../data/odbc/odbc-driver-list.md).

## <a name="see-also"></a>Vedere anche

[Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)
