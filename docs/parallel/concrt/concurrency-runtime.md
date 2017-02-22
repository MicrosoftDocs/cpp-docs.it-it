---
title: "Runtime di concorrenza | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Runtime di concorrenza, introduzione"
  - "ConcRT (vedere Runtime di concorrenza)"
  - "Runtime di concorrenza"
ms.assetid: 874bc58f-8dce-483e-a3a1-4dcc9e52ed2c
caps.latest.revision: 40
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 39
---
# Runtime di concorrenza
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Il runtime di concorrenza per C\+\+ consente di scrivere applicazioni parallele affidabili, scalabili ed efficienti.  Innalza il livello di astrazione in modo da evitare di dover gestire i dettagli dell'infrastruttura correlati alla concorrenza. È anche possibile usarlo per specificare i criteri di pianificazione che soddisfano le richieste di qualità del servizio delle applicazioni. Queste risorse permettono di iniziare a usare il runtime di concorrenza.  
  
 Per la documentazione di riferimento, vedere [Riferimenti](../../parallel/concrt/reference/reference-concurrency-runtime.md).  
  
> [!TIP]
>  Il runtime di concorrenza si basa fortemente sulle funzionalità C\+\+11 e adotta lo stile C\+\+ più moderno. Per altre informazioni, vedere [C\+\+](../../cpp/welcome-back-to-cpp-modern-cpp.md).  
  
## Scelta delle funzionalità del runtime di concorrenza  
  
|||  
|-|-|  
|[Panoramica](../../parallel/concrt/overview-of-the-concurrency-runtime.md)|Illustra i motivi che rendono importante il runtime di concorrenza e ne descrive le funzionalità essenziali.|  
|[Confronto con altri modelli di concorrenza](../../parallel/concrt/comparing-the-concurrency-runtime-to-other-concurrency-models.md)|Illustra il confronto tra il runtime di concorrenza ed altri modelli di concorrenza, ad esempio il pool di thread di Windows e OpenMP, in modo da poter sare il modello di concorrenza più adatto ai requisiti dell'applicazione.|  
|[Migrazione da OpenMP al runtime di concorrenza](../../parallel/concrt/migrating-from-openmp-to-the-concurrency-runtime.md)|Confronta OpenMP e il Runtime di Concorrenza e fornisce esempi su come eseguire la migrazione del codice OpenMP esistente per l'uso del runtime di concorrenza.|  
|[PPL \(Parallel Patterns Library\)](../../parallel/concrt/parallel-patterns-library-ppl.md)|Presenta la libreria PPL, che fornisce i cicli, le attività e i contenitori paralleli.|  
|[Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)|Illustra come usare gli agenti asincroni e i passaggio dei messaggi per incorporare facilmente le attività di pipelining e il flusso di dati nelle applicazioni.|  
|[Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)|Presenta l'Utilità di Pianificazione, che consente di ottimizzare le prestazioni delle applicazioni desktop che usano il runtime di concorrenza.|  
  
## Parallelismo delle attività nella libreria PPL  
  
|||  
|-|-|  
|[Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)<br /><br /> [Procedura: Usare parallel\_invoke per scrivere una routine di ordinamento in parallelo](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md)<br /><br /> [Procedura: Usare parallel\_invoke per eseguire operazioni in parallelo](../../parallel/concrt/how-to-use-parallel-invoke-to-execute-parallel-operations.md)<br /><br /> [Procedura: creare un'attività che viene completata dopo un ritardo](../../parallel/concrt/how-to-create-a-task-that-completes-after-a-delay.md)|Illustra le attività e i gruppi di attività, che consentono di scrivere codice asincrono e scomporre il lavoro parallelo in sezioni più piccole.|  
|[Procedura dettagliata: Implementazione di date future](../../parallel/concrt/walkthrough-implementing-futures.md)|Illustra come combinare le funzionalità del runtime di concorrenza per eseguire più operazioni.|  
|[Procedura dettagliata: rimozione di lavoro da un thread dell'interfaccia utente](../../parallel/concrt/walkthrough-removing-work-from-a-user-interface-thread.md)|Illustra come spostare il lavoro eseguito dal thread della UI in un'applicazione MFC a un thread di lavoro.|  
|[Procedure consigliate nella libreria PPL \(Parallel Patterns Library\)](../../parallel/concrt/best-practices-in-the-parallel-patterns-library.md)<br /><br /> [Procedure consigliate generali nel runtime di concorrenza](../../parallel/concrt/general-best-practices-in-the-concurrency-runtime.md)|Fornisce suggerimenti e procedure consigliate per lavorare con il PPL.|  
  
## Parallelismo dei dati nella libreria PPL  
  
|||  
|-|-|  
|[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)<br /><br /> [Procedura: Scrivere un ciclo parallel\_for](../../parallel/concrt/how-to-write-a-parallel-for-loop.md)<br /><br /> [Procedura: Scrivere un ciclo parallel\_for\_each](../../parallel/concrt/how-to-write-a-parallel-for-each-loop.md)<br /><br /> [Procedura: eseguire operazioni di mapping e riduzione in parallelo](../../parallel/concrt/how-to-perform-map-and-reduce-operations-in-parallel.md)|Illustra `parallel_for`, `parallel_for_each`, `parallel_invoke` e altri algoritmi paralleli. Usare gli algoritmi paralleli per risolvere i problemi di tipo *dati in parallelo* che coinvolgono raccolte di dati.|  
|[Contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md)<br /><br /> [Procedura: Usare i contenitori paralleli per aumentare l'efficienza](../../parallel/concrt/how-to-use-parallel-containers-to-increase-efficiency.md)<br /><br /> [Procedura: Usare la classe combinable per migliorare le prestazioni](../../parallel/concrt/how-to-use-combinable-to-improve-performance.md)<br /><br /> [Procedura: Usare l'oggetto combinable per combinare set](../../parallel/concrt/how-to-use-combinable-to-combine-sets.md)|Illustra la classe `combinable`, oltre a `concurrent_vector`, `concurrent_queue`, `concurrent_unordered_map` e altri contenitori paralleli. Usare i contenitori e gli oggetti paralleli quando sono necessari contenitori che consentono l'accesso thread\-safe ai relativi elementi.|  
|[Procedure consigliate nella libreria PPL \(Parallel Patterns Library\)](../../parallel/concrt/best-practices-in-the-parallel-patterns-library.md)<br /><br /> [Procedure consigliate generali nel runtime di concorrenza](../../parallel/concrt/general-best-practices-in-the-concurrency-runtime.md)|Fornisce suggerimenti e procedure consigliate per lavorare con il PPL.|  
  
## Annullamento di attività e algoritmi paralleli  
  
|||  
|-|-|  
|[Annullamento](../../parallel/concrt/cancellation-in-the-ppl.md)|Descrive il ruolo dell'annullamento nella libreria PPL, ad esempio come avviare e rispondere alle richieste di annullamento.|  
|[Procedura: utilizzare l'annullamento per interrompere un ciclo Parallel](../../parallel/concrt/how-to-use-cancellation-to-break-from-a-parallel-loop.md)<br /><br /> [Procedura: Usare la gestione delle eccezion per interrompere un ciclo Parallel](../../parallel/concrt/how-to-use-exception-handling-to-break-from-a-parallel-loop.md)|Illustra due modi per annullare un lavoro con dati in parallelo.|  
  
## App di Windows Store  
  
|||  
|-|-|  
|[Creazione di operazioni asincrone in C\+\+ per le applicazioni Windows Store](../../parallel/concrt/creating-asynchronous-operations-in-cpp-for-windows-store-apps.md)|Illustra alcuni punti chiave da ricordare quando si usa il runtime di concorrenza per produrre operazioni asincrone in un'app [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].|  
|[Procedura dettagliata: Connessione tramite attività e richieste HTTP XML](../../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md)|Illustra come combinare le attività della libreria PPL con le interfacce `IXMLHTTPRequest2` e `IXMLHTTPRequest2Callback` per inviare richieste HTTP GET e POST ad un servizio web in un'app [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].|  
|[Esempi di app di Windows Store](http://code.msdn.microsoft.com/windowsapps)|Contiene codici di esempio scaricabili e app demo per Windows 8 [!INCLUDE[win8](../../build/includes/win8_md.md)]. Gli esempi in C\+\+ usano le funzionalità del runtime di concorrenza come attività della libreria PPL per elaborare i dati in background per mantenere l'esperienza utente reattiva.|  
  
## Programmazione del flusso di dati nella libreria di agenti asincroni  
  
|||  
|-|-|  
|[Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)<br /><br /> [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)<br /><br /> [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)<br /><br /> [Procedura: Implementare vari modelli producer\-consumer](../../parallel/concrt/how-to-implement-various-producer-consumer-patterns.md)<br /><br /> [Procedura: Fornire funzioni lavoro alle classi call e transformer](../../parallel/concrt/how-to-provide-work-functions-to-the-call-and-transformer-classes.md)<br /><br /> [Procedura: Usare la classe transformer in una pipeline di dati](../../parallel/concrt/how-to-use-transformer-in-a-data-pipeline.md)<br /><br /> [Procedura: Effettuare una scelta tra le attività completate](../../parallel/concrt/how-to-select-among-completed-tasks.md)<br /><br /> [Procedura: Inviare un messaggio a intervalli regolari](../../parallel/concrt/how-to-send-a-message-at-a-regular-interval.md)<br /><br /> [Procedura: Usare il filtro di blocco dei messaggi](../../parallel/concrt/how-to-use-a-message-block-filter.md)|Illustra genti asincroni, blocchi di messaggio e funzioni di passaggio dei messaggi, ovvero i blocchi predefiniti per l'esecuzione di operazioni di flusso dei dati nel runtime di concorrenza.|  
|[Procedura dettagliata: Creazione di un'applicazione basata sugli agenti](../../parallel/concrt/walkthrough-creating-an-agent-based-application.md)<br /><br /> [Procedura dettagliata: Creazione di un agente del flusso di dati](../../parallel/concrt/walkthrough-creating-a-dataflow-agent.md)|Illustra come creare applicazioni di base basate sugli agenti.|  
|[Procedura dettagliata: creazione di una rete per l'elaborazione di immagini](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md)|Illustra come creare una rete di blocchi di messaggi asincroni che eseguono l'elaborazione di immagini.|  
|[Procedura dettagliata: Uso della classe join per impedire un deadlock](../../parallel/concrt/walkthrough-using-join-to-prevent-deadlock.md)|Usa il problema dei filosofi a cena per illustrare come usare il runtime di concorrenza per impedire un deadlock nell'applicazione.|  
|[Procedura dettagliata: creazione di un blocco dei messaggi personalizzato](../../parallel/concrt/walkthrough-creating-a-custom-message-block.md)|Illustra come creare un tipo di blocco di messaggi personalizzato che consente di ordinare i messaggi in arrivo in base alla priorità.|  
|[Procedure consigliate nella libreria di agenti asincroni](../../parallel/concrt/best-practices-in-the-asynchronous-agents-library.md)<br /><br /> [Procedure consigliate generali nel runtime di concorrenza](../../parallel/concrt/general-best-practices-in-the-concurrency-runtime.md)|Fornisce suggerimenti e procedure consigliate per gli agenti.|  
  
## Gestione e debug delle eccezioni  
  
|||  
|-|-|  
|[Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)|Illustra come gestire le eccezioni nel runtime di concorrenza.|  
|[Strumenti di diagnostica in parallelo](../../parallel/concrt/parallel-diagnostic-tools-concurrency-runtime.md)|Illustra come ottimizzare le applicazioni e usare il più efficacemente possibile il runtime di concorrenza.|  
  
## Ottimizzazione delle prestazioni  
  
|||  
|-|-|  
|[Strumenti di diagnostica in parallelo](../../parallel/concrt/parallel-diagnostic-tools-concurrency-runtime.md)|Illustra come ottimizzare le applicazioni e usare il più efficacemente possibile il runtime di concorrenza.|  
|[Istanze dell'utilità di pianificazione](../../parallel/concrt/scheduler-instances.md)<br /><br /> [Procedura: Gestire un'istanza dell'utilità di pianificazione](../../parallel/concrt/how-to-manage-a-scheduler-instance.md)<br /><br /> [Criteri dell'utilità di pianificazione](../../parallel/concrt/scheduler-policies.md)<br /><br /> [Procedura: Definire criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-specify-specific-scheduler-policies.md)<br /><br /> [Procedura: Creare agenti che usano criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-create-agents-that-use-specific-scheduler-policies.md)|Illustra come usare la gestione delle istanze dell'utilità di pianificazione e i criteri dell'utilità di pianificazione. Per le app desktop, i criteri dell'utilità di pianificazione consentono di associare regole specifiche a specifici tipi di carichi di lavoro. È possibile ad esempio creare un'istanza dell'utilità di pianificazione per eseguire alcune attività con una priorità di thread elevata e usare l'utilità di pianificazione predefinita per eseguire altre attività con una priorità di thread normale.|  
|[Gruppi di pianificazione](../../parallel/concrt/schedule-groups.md)<br /><br /> [Procedura: Usare i gruppi di pianificazione per influenzare l'ordine di esecuzione](../../parallel/concrt/how-to-use-schedule-groups-to-influence-order-of-execution.md)|Illustra come usare i gruppi di pianificazione per creare affinità o raggruppare insieme le attività correlate. È ad esempio possibile che sia necessario un livello elevato di località tra le attività correlate, quando queste attività traggono vantaggio dall'esecuzione nello stesso nodo del processore.|  
|[Attività leggere](../../parallel/concrt/lightweight-tasks.md)|Illustra i vantaggi offerti dalle attività leggere nel creare il lavoro che non richiede il bilanciamento del carico o l'annullamento e nell'adattare il codice esistente per l'uso con il runtime di concorrenza.|  
|[Contesti](../../parallel/concrt/contexts.md)<br /><br /> [Procedura: utilizzare la classe Context per implementare una classe semaforo di cooperazione](../../parallel/concrt/how-to-use-the-context-class-to-implement-a-cooperative-semaphore.md)<br /><br /> [Procedura: Usare l'oversubscription per compensare la latenza](../../parallel/concrt/how-to-use-oversubscription-to-offset-latency.md)|Illustra come controllare il comportamento dei thread gestiti dal runtime di concorrenza.|  
|[Funzioni di gestione della memoria](../../parallel/concrt/memory-management-functions.md)<br /><br /> [Procedura: Usare Alloc e Free per migliorare le prestazioni di memoria](../../parallel/concrt/how-to-use-alloc-and-free-to-improve-memory-performance.md)|Illustra le funzioni di gestione della memoria offerte dal runtime di concorrenza che consentono di allocare e liberare memoria in modo simultaneo.|  
  
## Risorse aggiuntive  
  
|||  
|-|-|  
|[Modelli di programmazione asincrona e suggerimenti in Hilo \(app di Windows Store scritte in C\+\+ e XAML\)](http://msdn.microsoft.com/library/windows/apps/jj160321.aspx)|Informazioni su come è stato usato il runtime di concorrenza per implementare le operazioni asincrone in Hilo, un'app di [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] scritta in C\+\+ e XAML.|  
|[Esempi di codice per la libreria di modelli in parallelo e di runtime di concorrenza in Visual Studio 2010](http://go.microsoft.com/fwlink/?LinkID=183875)|Fornisce le applicazioni di esempio e utilità che illustrano il runtime di concorrenza.|  
|[Blog relativo alla programmazione parallela in codice nativo](http://go.microsoft.com/fwlink/?LinkID=183873)|Fornisce altri articoli dettagliati del blog sulla programmazione in parallelo nel runtime di concorrenza.|  
|[Forum relativo all'elaborazione parallela in C\+\+ e codice nativo](http://go.microsoft.com/fwlink/?LinkID=183874)|Consente di partecipare alle discussioni della community sul runtime di concorrenza.|  
|[Parallel Programming](../Topic/Parallel%20Programming%20in%20the%20.NET%20Framework.md)|Illustra il modello di programmazione in parallelo disponibile in [!INCLUDE[dnprdnshort](../../error-messages/tool-errors/includes/dnprdnshort_md.md)].|  
  
## Vedere anche  
 [Riferimenti](../../parallel/concrt/reference/reference-concurrency-runtime.md)