---
title: Runtime di concorrenza
ms.date: 07/20/2018
helpviewer_keywords:
- Concurrency Runtime, getting started
- ConcRT (see Concurrency Runtime)
- Concurrency Runtime
ms.assetid: 874bc58f-8dce-483e-a3a1-4dcc9e52ed2c
ms.openlocfilehash: 268c612237bacaca49934120b03e1de505b6cd20
ms.sourcegitcommit: 6b3d793f0ef3bbb7eefaf9f372ba570fdfe61199
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/15/2020
ms.locfileid: "86404525"
---
# <a name="concurrency-runtime"></a>Runtime di concorrenza

Il runtime di concorrenza per C++ consente di scrivere applicazioni parallele affidabili, scalabili ed efficienti. Innalza il livello di astrazione in modo da evitare di dover gestire i dettagli dell'infrastruttura correlati alla concorrenza. È anche possibile usarlo per specificare i criteri di pianificazione che soddisfano le richieste di qualità del servizio delle applicazioni. Queste risorse permettono di iniziare a usare il runtime di concorrenza.

Per la documentazione di riferimento, vedere [Reference](../../parallel/concrt/reference/reference-concurrency-runtime.md).

> [!TIP]
> Il runtime di concorrenza si basa fortemente sulle funzionalità C++11 e adotta lo stile C++ più moderno. Per ulteriori informazioni, vedere la pagina relativa all' [Introduzione a C++](../../cpp/welcome-back-to-cpp-modern-cpp.md).

## <a name="choosing-concurrency-runtime-features"></a>Scelta delle funzionalità del runtime di concorrenza

|||
|-|-|
|[Overview](../../parallel/concrt/overview-of-the-concurrency-runtime.md)|Illustra i motivi che rendono importante il runtime di concorrenza e ne descrive le funzionalità essenziali.|
|[Confronto con altri modelli di concorrenza](../../parallel/concrt/comparing-the-concurrency-runtime-to-other-concurrency-models.md)|Illustra il confronto tra il runtime di concorrenza ed altri modelli di concorrenza, ad esempio il pool di thread di Windows e OpenMP, in modo da poter sare il modello di concorrenza più adatto ai requisiti dell'applicazione.|
|[Migrazione da OpenMP al runtime di concorrenza](../../parallel/concrt/migrating-from-openmp-to-the-concurrency-runtime.md)|Confronta OpenMP e il Runtime di Concorrenza e fornisce esempi su come eseguire la migrazione del codice OpenMP esistente per l'uso del runtime di concorrenza.|
|[PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md)|Presenta la libreria PPL, che fornisce i cicli, le attività e i contenitori paralleli.|
|[libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)|Illustra come usare gli agenti asincroni e i passaggio dei messaggi per incorporare facilmente le attività di pipelining e il flusso di dati nelle applicazioni.|
|[Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)|Presenta l'Utilità di Pianificazione, che consente di ottimizzare le prestazioni delle applicazioni desktop che usano il runtime di concorrenza.|

## <a name="task-parallelism-in-the-ppl"></a>Parallelismo delle attività nella libreria PPL

|||
|-|-|
|[Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)<br /><br /> [Procedura: utilizzare parallel_invoke per scrivere una routine di ordinamento in parallelo](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md)<br /><br /> [Procedura: utilizzare parallel_invoke per eseguire operazioni in parallelo](../../parallel/concrt/how-to-use-parallel-invoke-to-execute-parallel-operations.md)<br /><br /> [Procedura: creare un'attività che viene completata dopo un ritardo](../../parallel/concrt/how-to-create-a-task-that-completes-after-a-delay.md)|Illustra le attività e i gruppi di attività, che consentono di scrivere codice asincrono e scomporre il lavoro parallelo in sezioni più piccole.|
|[Procedura dettagliata: implementazione di future](../../parallel/concrt/walkthrough-implementing-futures.md)|Illustra come combinare le funzionalità del runtime di concorrenza per eseguire più operazioni.|
|[Procedura dettagliata: rimozione di lavoro da un thread dell'interfaccia utente](../../parallel/concrt/walkthrough-removing-work-from-a-user-interface-thread.md)|Illustra come spostare il lavoro eseguito dal thread della UI in un'applicazione MFC a un thread di lavoro.|
|[Procedure consigliate nella libreria di modelli paralleli](../../parallel/concrt/best-practices-in-the-parallel-patterns-library.md)<br /><br /> [Procedure consigliate generali nel runtime di concorrenza](../../parallel/concrt/general-best-practices-in-the-concurrency-runtime.md)|Fornisce suggerimenti e procedure consigliate per lavorare con il PPL.|

## <a name="data-parallelism-in-the-ppl"></a>Parallelismo dei dati nella libreria PPL

|||
|-|-|
|[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)<br /><br /> [Procedura: scrivere un ciclo di parallel_for](../../parallel/concrt/how-to-write-a-parallel-for-loop.md)<br /><br /> [Procedura: scrivere un ciclo di parallel_for_each](../../parallel/concrt/how-to-write-a-parallel-for-each-loop.md)<br /><br /> [Procedura: eseguire operazioni di mapping e riduzione in parallelo](../../parallel/concrt/how-to-perform-map-and-reduce-operations-in-parallel.md)|Illustra `parallel_for`, `parallel_for_each`, `parallel_invoke`e altri algoritmi paralleli. Usare gli algoritmi paralleli per risolvere i problemi di tipo *dati in parallelo* che coinvolgono raccolte di dati.|
|[Contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md)<br /><br /> [Procedura: usare i contenitori paralleli per aumentare l'efficienza](../../parallel/concrt/how-to-use-parallel-containers-to-increase-efficiency.md)<br /><br /> [Procedura: utilizzare combinable per migliorare le prestazioni](../../parallel/concrt/how-to-use-combinable-to-improve-performance.md)<br /><br /> [Procedura: utilizzare combinable per combinare set](../../parallel/concrt/how-to-use-combinable-to-combine-sets.md)|Illustra la classe `combinable` , oltre a `concurrent_vector`, `concurrent_queue`, `concurrent_unordered_map`e altri contenitori paralleli. Usare i contenitori e gli oggetti paralleli quando sono necessari contenitori che consentono l'accesso thread-safe ai relativi elementi.|
|[Procedure consigliate nella libreria di modelli paralleli](../../parallel/concrt/best-practices-in-the-parallel-patterns-library.md)<br /><br /> [Procedure consigliate generali nel runtime di concorrenza](../../parallel/concrt/general-best-practices-in-the-concurrency-runtime.md)|Fornisce suggerimenti e procedure consigliate per lavorare con il PPL.|

## <a name="canceling-tasks-and-parallel-algorithms"></a>Annullamento di attività e algoritmi paralleli

|||
|-|-|
|[Annullamento nella libreria PPL](cancellation-in-the-ppl.md)|Descrive il ruolo dell'annullamento nella libreria PPL, ad esempio come avviare e rispondere alle richieste di annullamento.|
|[Procedura: usare l'annullamento per interrompere un ciclo parallelo](../../parallel/concrt/how-to-use-cancellation-to-break-from-a-parallel-loop.md)<br /><br /> [Procedura: usare la gestione delle eccezioni per interrompere un ciclo parallelo](../../parallel/concrt/how-to-use-exception-handling-to-break-from-a-parallel-loop.md)|Illustra due modi per annullare un lavoro con dati in parallelo.|

## <a name="universal-windows-platform-apps"></a>App della piattaforma UWP (Universal Windows Platform)

|||
|-|-|
|[Creazione di operazioni asincrone in C++ per app UWP](../../parallel/concrt/creating-asynchronous-operations-in-cpp-for-windows-store-apps.md)|Vengono descritti alcuni dei punti chiave da tenere presenti quando si usa il runtime di concorrenza per produrre operazioni asincrone in un'app UWP.|
|[Procedura dettagliata: connessione tramite attività e richieste HTTP XML](../../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md)|Viene illustrato come combinare le attività PPL con `IXMLHTTPRequest2` le `IXMLHTTPRequest2Callback` interfacce e per inviare richieste HTTP GET e post a un servizio Web in un'app UWP.|
|[Esempi di app Windows Runtime](https://docs.microsoft.com/samples/browse/?languages=cpp&expanded=windows&products=windows-uwp)|Contiene esempi di codice scaricabili e app demo per Windows Runtime.|

## <a name="dataflow-programming-in-the-asynchronous-agents-library"></a>Programmazione del flusso di dati nella libreria di agenti asincroni

|||
|-|-|
|[Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)<br /><br /> [Blocchi di messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)<br /><br /> [Funzioni di passaggio del messaggio](../../parallel/concrt/message-passing-functions.md)<br /><br /> [Procedura: implementare vari modelli producer-consumer](../../parallel/concrt/how-to-implement-various-producer-consumer-patterns.md)<br /><br /> [Procedura: fornire funzioni lavoro alle classi call e Transformer](../../parallel/concrt/how-to-provide-work-functions-to-the-call-and-transformer-classes.md)<br /><br /> [Procedura: usare Transformer in una pipeline di dati](../../parallel/concrt/how-to-use-transformer-in-a-data-pipeline.md)<br /><br /> [Procedura: effettuare una selezione tra le attività completate](../../parallel/concrt/how-to-select-among-completed-tasks.md)<br /><br /> [Procedura: inviare un messaggio a intervalli regolari](../../parallel/concrt/how-to-send-a-message-at-a-regular-interval.md)<br /><br /> [Procedura: utilizzare un filtro di blocco messaggi](../../parallel/concrt/how-to-use-a-message-block-filter.md)|Illustra genti asincroni, blocchi di messaggio e funzioni di passaggio dei messaggi, ovvero i blocchi predefiniti per l'esecuzione di operazioni di flusso dei dati nel runtime di concorrenza.|
|[Procedura dettagliata: creazione di un'applicazione basata su agenti](../../parallel/concrt/walkthrough-creating-an-agent-based-application.md)<br /><br /> [Procedura dettagliata: creazione di un agente del flusso di flussi](../../parallel/concrt/walkthrough-creating-a-dataflow-agent.md)|Illustra come creare applicazioni di base basate sugli agenti.|
|[Procedura dettagliata: creazione di una rete per l'elaborazione di immagini](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md)|Illustra come creare una rete di blocchi di messaggi asincroni che eseguono l'elaborazione di immagini.|
|[Procedura dettagliata: utilizzo di join per impedire il deadlock](../../parallel/concrt/walkthrough-using-join-to-prevent-deadlock.md)|Usa il problema dei filosofi a cena per illustrare come usare il runtime di concorrenza per impedire un deadlock nell'applicazione.|
|[Procedura dettagliata: creazione di un blocco di messaggi personalizzato](../../parallel/concrt/walkthrough-creating-a-custom-message-block.md)|Illustra come creare un tipo di blocco di messaggi personalizzato che consente di ordinare i messaggi in arrivo in base alla priorità.|
|[Procedure consigliate nella libreria di agenti asincroni](../../parallel/concrt/best-practices-in-the-asynchronous-agents-library.md)<br /><br /> [Procedure consigliate generali nel runtime di concorrenza](../../parallel/concrt/general-best-practices-in-the-concurrency-runtime.md)|Fornisce suggerimenti e procedure consigliate per gli agenti.|

## <a name="exception-handling-and-debugging"></a>Gestione e debug delle eccezioni

|||
|-|-|
|[Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)|Illustra come gestire le eccezioni nel runtime di concorrenza.|
|[Strumenti di diagnostica parallela](../../parallel/concrt/parallel-diagnostic-tools-concurrency-runtime.md)|Illustra come ottimizzare le applicazioni e usare il più efficacemente possibile il runtime di concorrenza.|

## <a name="tuning-performance"></a>Ottimizzazione delle prestazioni

|||
|-|-|
|[Strumenti di diagnostica parallela](../../parallel/concrt/parallel-diagnostic-tools-concurrency-runtime.md)|Illustra come ottimizzare le applicazioni e usare il più efficacemente possibile il runtime di concorrenza.|
|[Istanze dell'utilità di pianificazione](../../parallel/concrt/scheduler-instances.md)<br /><br /> [Procedura: gestire un'istanza dell'utilità di pianificazione](../../parallel/concrt/how-to-manage-a-scheduler-instance.md)<br /><br /> [Criteri dell'utilità di pianificazione](../../parallel/concrt/scheduler-policies.md)<br /><br /> [Procedura: specificare criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-specify-specific-scheduler-policies.md)<br /><br /> [Procedura: creare agenti che usano criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-create-agents-that-use-specific-scheduler-policies.md)|Illustra come usare la gestione delle istanze dell'utilità di pianificazione e i criteri dell'utilità di pianificazione. Per le app desktop, i criteri dell'utilità di pianificazione consentono di associare regole specifiche a specifici tipi di carichi di lavoro. È possibile ad esempio creare un'istanza dell'utilità di pianificazione per eseguire alcune attività con una priorità di thread elevata e usare l'utilità di pianificazione predefinita per eseguire altre attività con una priorità di thread normale.|
|[Gruppi di pianificazione](../../parallel/concrt/schedule-groups.md)<br /><br /> [Procedura: usare i gruppi di pianificazione per influenzare l'ordine di esecuzione](../../parallel/concrt/how-to-use-schedule-groups-to-influence-order-of-execution.md)|Illustra come usare i gruppi di pianificazione per creare affinità o raggruppare insieme le attività correlate. È ad esempio possibile che sia necessario un livello elevato di località tra le attività correlate, quando queste attività traggono vantaggio dall'esecuzione nello stesso nodo del processore.|
|[Attività leggere](../../parallel/concrt/lightweight-tasks.md)|Illustra i vantaggi offerti dalle attività leggere nel creare il lavoro che non richiede il bilanciamento del carico o l'annullamento e nell'adattare il codice esistente per l'uso con il runtime di concorrenza.|
|[Contesti](../../parallel/concrt/contexts.md)<br /><br /> [Procedura: usare la classe Context per implementare un semaforo cooperativo](../../parallel/concrt/how-to-use-the-context-class-to-implement-a-cooperative-semaphore.md)<br /><br /> [Procedura: usare l'oversubscription per compensare la latenza](../../parallel/concrt/how-to-use-oversubscription-to-offset-latency.md)|Illustra come controllare il comportamento dei thread gestiti dal runtime di concorrenza.|
|[Funzioni di gestione della memoria](../../parallel/concrt/memory-management-functions.md)<br /><br /> [Procedura: usare Alloc e Free per migliorare le prestazioni di memoria](../../parallel/concrt/how-to-use-alloc-and-free-to-improve-memory-performance.md)|Illustra le funzioni di gestione della memoria offerte dal runtime di concorrenza che consentono di allocare e liberare memoria in modo simultaneo.|

## <a name="additional-resources"></a>Risorse aggiuntive

|||
|-|-|
|[Modelli di programmazione asincrona e suggerimenti in Hilo (app di Windows Store scritte in C++ e XAML)](/previous-versions/windows/apps/jj160321(v=win.10))|Informazioni su come è stato usato il runtime di concorrenza per implementare operazioni asincrone in Hilo, un'app Windows Runtime con C++ e XAML.|
|[Blog relativo alla programmazione parallela in codice nativo](/archive/blogs/nativeconcurrency)|Fornisce altri articoli dettagliati del blog sulla programmazione in parallelo nel runtime di concorrenza.|
|[Forum relativo all'elaborazione parallela in C++ e codice nativo](https://go.microsoft.com/fwlink/p/?linkid=183874)|Consente di partecipare alle discussioni della community sul runtime di concorrenza.|
|[Programmazione parallela](/dotnet/standard/parallel-programming/index)|Viene illustrato il modello di programmazione parallela disponibile nel .NET Framework.|

## <a name="see-also"></a>Vedere anche

[Riferimento](../../parallel/concrt/reference/reference-concurrency-runtime.md)
