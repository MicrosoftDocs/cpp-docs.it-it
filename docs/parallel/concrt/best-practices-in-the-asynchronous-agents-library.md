---
title: Procedure consigliate nella libreria di agenti asincroni | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- best practices, Asynchronous Agents Library
- Asynchronous Agents Library, best practices
- Asynchronous Agents Library, practices to avoid
- practices to avoid, Asynchronous Agents Library
ms.assetid: 85f52354-41eb-4b0d-98c5-f7344ee8a8cf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5e70b4004b24b04470e1fff280869887bbba74cb
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46412743"
---
# <a name="best-practices-in-the-asynchronous-agents-library"></a>Procedure consigliate nella libreria di agenti asincroni

Questo documento viene descritto come ottimizzare l'utilizzo della libreria di agenti asincroni. La libreria di agenti Alza di livello un modello di programmazione basato su attori e i messaggi in-process, passando per un flusso di dati e attività di pipelining.

Per altre informazioni sulla libreria di agenti, vedere [Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md).

##  <a name="top"></a> Sezioni

Questo documento contiene le seguenti sezioni:

- [Usare gli agenti per stato isolato](#isolation)

- [Usare un meccanismo di limitazione delle richieste per limitare il numero di messaggi in una Pipeline di dati](#throttling)

- [Non eseguire il lavoro con granularità fine in una Pipeline di dati](#fine-grained)

- [Non passare i payload di messaggi di grandi dimensioni per valore](#large-payloads)

- [Usare shared_ptr in una Data rete quando la proprietà è non definito](#ownership)

##  <a name="isolation"></a> Usare gli agenti per stato isolato

La libreria di agenti sono disponibili alternative allo stato condiviso, consentendo di collegare componenti isolati tramite un meccanismo di passaggio dei messaggi asincrono. Agenti asincroni sono più efficaci quando essi isolare il proprio stato interno da altri componenti. Tramite l'isolamento dello stato, più componenti non in genere agire sui dati condivisi. L'isolamento dello stato possibile abilitare l'applicazione per la scalabilità perché riduce la contesa di memoria condivisa. L'isolamento dello stato riduce inoltre la possibilità di deadlock e race condition perché i componenti non sono necessario sincronizzare l'accesso ai dati condivisi.

Lo stato in un agente è in genere isolare tenendo membri dati di `private` o `protected` sezioni della classe agent e con buffer dei messaggi per comunicare le modifiche dello stato. L'esempio seguente mostra le `basic_agent` classe che deriva da [Concurrency:: Agent](../../parallel/concrt/reference/agent-class.md). Il `basic_agent` classe usa due buffer di messaggi per comunicare con i componenti esterni. Un buffer dei messaggi contiene messaggi in arrivo; buffer dei messaggi contiene i messaggi in uscita.

[!code-cpp[concrt-simple-agent#1](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-asynchronous-agents-library_1.cpp)]

Per esempi completi su come definire e usare gli agenti, vedere [procedura dettagliata: creazione di un'applicazione basata su agenti](../../parallel/concrt/walkthrough-creating-an-agent-based-application.md) e [procedura dettagliata: creazione di un agente del flusso di dati](../../parallel/concrt/walkthrough-creating-a-dataflow-agent.md).

[[Torna all'inizio](#top)]

##  <a name="throttling"></a> Usare un meccanismo di limitazione delle richieste per limitare il numero di messaggi in una Pipeline di dati

Molti tipi di buffer di messaggi, ad esempio [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md), può contenere un numero illimitato di messaggi. Quando un producer di messaggi vengono inviati a una pipeline di dati più velocemente di quanto il consumer può elaborare questi messaggi, l'applicazione può passare a uno stato di memoria insufficiente o di memoria insufficiente. È possibile usare un meccanismo di limitazione delle richieste, ad esempio, un semaforo, per limitare il numero di messaggi che sono contemporaneamente attivi in una pipeline di dati.

Nell'esempio di base seguente viene illustrato come usare un semaforo per limitare il numero di messaggi in una pipeline di dati. I dati della pipeline utilizza il [Concurrency:: Wait](reference/concurrency-namespace-functions.md#wait) funzione per simulare un'operazione che richiede almeno 100 millisecondi. Poiché il server sender produce messaggi più velocemente di quanto il consumer può elaborare tali messaggi, questo esempio viene definito il `semaphore` classe per consentire all'applicazione limitare il numero di messaggi attivi.

[!code-cpp[concrt-message-throttling#1](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-asynchronous-agents-library_2.cpp)]

Il `semaphore` oggetto limita la pipeline per elaborare al massimo due messaggi nello stesso momento.

Il producer in questo esempio invia un numero relativamente basso di messaggi al consumer. Pertanto, in questo esempio non illustra una condizione di memoria insufficiente o di memoria insufficiente potenziali. Tuttavia, questo meccanismo è utile quando una pipeline di dati contiene un numero relativamente elevato di messaggi.

Per altre informazioni su come creare la classe semaphore che viene usata in questo esempio, vedere [procedura: usare la classe Context per implementare un semaforo di cooperazione](../../parallel/concrt/how-to-use-the-context-class-to-implement-a-cooperative-semaphore.md).

[[Torna all'inizio](#top)]

##  <a name="fine-grained"></a> Non eseguire il lavoro con granularità fine in una Pipeline di dati

La libreria di agenti è particolarmente utile quando il lavoro eseguito da una pipeline di dati è grossolano. Ad esempio, un componente dell'applicazione può leggere i dati da un file o una connessione di rete e occasionalmente inviare i dati a un altro componente. Il protocollo utilizzato per la libreria di agenti per propagare i messaggi fa sì che il meccanismo di passaggio dei messaggi per presentano un overhead maggiore rispetto ai costrutti parallela di attività forniti dal [Parallel Patterns Library](../../parallel/concrt/parallel-patterns-library-ppl.md) (PPL). Pertanto, assicurarsi che il lavoro eseguito da una pipeline di dati è sufficientemente lungo da compensare il sovraccarico.

Anche se una pipeline di dati è più efficace quando le rispettive attività sono con granularità grossolana, ogni fase della pipeline di dati è possibile usare costrutti PPL, ad esempio i gruppi di attività e gli algoritmi paralleli per eseguire più operazioni con granularità fine. Per un esempio di una rete di dati con granularità grossolana che usa il parallelismo con granularità fine in ogni fase di elaborazione, vedere [procedura dettagliata: creazione di una rete di elaborazione di immagini](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md).

[[Torna all'inizio](#top)]

##  <a name="large-payloads"></a> Non passare i payload di messaggi di grandi dimensioni per valore

In alcuni casi, il runtime crea una copia di ogni messaggio che passa da un buffer di messaggi a un altro buffer dei messaggi. Ad esempio, il [Concurrency:: overwrite_buffer](../../parallel/concrt/reference/overwrite-buffer-class.md) classe offre una copia di ogni messaggio ricevuto a ciascuna delle relative destinazioni. Il runtime crea anche una copia dei dati del messaggio quando si usano funzioni di passaggio dei messaggi, ad esempio [Concurrency:: Send](reference/concurrency-namespace-functions.md#send) e [Concurrency:: Receive](reference/concurrency-namespace-functions.md#receive) per scrivere e leggere messaggi da un messaggio buffer. Anche se questo meccanismo consente di eliminare il rischio di scrivere simultaneamente ai dati condivisi, ciò potrebbe causare prestazioni insufficienti della memoria quando il payload del messaggio è relativamente grande.

È possibile usare i puntatori o riferimenti a migliorare le prestazioni di memoria quando si passa i messaggi che hanno un payload di grandi dimensioni. L'esempio seguente confronta i messaggi di grandi dimensioni passando dal valore per il passaggio di puntatori al tipo di messaggio stesso. L'esempio definisce due tipi di agente `producer` e `consumer`, che agiscono su `message_data` oggetti. L'esempio confronta il tempo necessario per il producer inviare diverse `message_data` all'utente nel momento in cui è necessario per l'agente di producer di inviare diversi puntatori agli oggetti `message_data` oggetti al consumer.

[!code-cpp[concrt-message-payloads#1](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-asynchronous-agents-library_3.cpp)]

Questo esempio produce l'output di esempio seguente:

```Output
Using message_data...
took 437ms.
Using message_data*...
took 47ms.
```

La versione che usa puntatori offre prestazioni migliori perché non è il requisito per il runtime creare una copia completa di ogni `message_data` oggetto che viene passato dal producer al consumer.

[[Torna all'inizio](#top)]

##  <a name="ownership"></a> Usare shared_ptr in una Data rete quando la proprietà è non definito

Quando si inviano messaggi da puntatore a una pipeline di passaggio dei messaggi o rete, in genere allocare la memoria per ogni messaggio nella parte anteriore della rete e liberare tale memoria alla fine della rete. Anche se questo meccanismo spesso funziona bene, vi sono casi in cui è difficile o non è possibile usarlo. Ad esempio, si consideri il caso in cui la rete di dati contiene più nodi finali. In questo caso, non vi è alcun percorso chiaro per liberare la memoria per i messaggi.

Per risolvere questo problema, è possibile usare un meccanismo, ad esempio, [std:: shared_ptr](../../standard-library/shared-ptr-class.md), che consente a un puntatore come di proprietà da più componenti. Quando l'elemento finale `shared_ptr` viene eliminato l'oggetto a cui appartiene una risorsa, la risorsa viene liberata anche.

Nell'esempio seguente viene illustrato come utilizzare `shared_ptr` per condividere i valori di puntatore tra più buffer di messaggi. L'esempio mostra come connettere un [Concurrency:: overwrite_buffer](../../parallel/concrt/reference/overwrite-buffer-class.md) oggetto a tre [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) oggetti. Il `overwrite_buffer` classe offerta dei messaggi per ciascuna delle relative destinazioni. Poiché sono presenti più proprietari dei dati alla fine della rete dati, in questo esempio Usa `shared_ptr` per attivare ognuno `call` oggetto condividere la proprietà dei messaggi.

[!code-cpp[concrt-message-sharing#1](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-asynchronous-agents-library_4.cpp)]

Questo esempio produce l'output di esempio seguente:

```Output
Creating resource 42...
receiver1: received resource 42
Creating resource 64...
receiver2: received resource 42
receiver1: received resource 64
Destroying resource 42...
receiver2: received resource 64
Destroying resource 64...
```

## <a name="see-also"></a>Vedere anche

[Procedure consigliate del runtime di concorrenza](../../parallel/concrt/concurrency-runtime-best-practices.md)<br/>
[Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)<br/>
[Procedura dettagliata: creazione di un'applicazione basata sugli agenti](../../parallel/concrt/walkthrough-creating-an-agent-based-application.md)<br/>
[Procedura dettagliata: creazione di un agente del flusso di dati](../../parallel/concrt/walkthrough-creating-a-dataflow-agent.md)<br/>
[Procedura dettagliata: creazione di una rete per l'elaborazione di immagini](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md)<br/>
[Procedure consigliate nella libreria PPL (Parallel Patterns Library)](../../parallel/concrt/best-practices-in-the-parallel-patterns-library.md)<br/>
[Procedure consigliate generali nel runtime di concorrenza](../../parallel/concrt/general-best-practices-in-the-concurrency-runtime.md)

