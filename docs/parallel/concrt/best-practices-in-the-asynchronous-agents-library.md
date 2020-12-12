---
description: 'Altre informazioni su: procedure consigliate nella libreria di agenti asincroni'
title: Procedure consigliate nella libreria di agenti asincroni
ms.date: 11/04/2016
helpviewer_keywords:
- best practices, Asynchronous Agents Library
- Asynchronous Agents Library, best practices
- Asynchronous Agents Library, practices to avoid
- practices to avoid, Asynchronous Agents Library
ms.assetid: 85f52354-41eb-4b0d-98c5-f7344ee8a8cf
ms.openlocfilehash: 5468d5c7a0ddb3a0a87d0675dfb3f19385ccc8b4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97205720"
---
# <a name="best-practices-in-the-asynchronous-agents-library"></a>Procedure consigliate nella libreria di agenti asincroni

In questo documento viene descritto come utilizzare in modo efficace la libreria di agenti asincroni. La libreria di agenti promuove un modello di programmazione basato su attori e il passaggio dei messaggi in-process per le attività di pipelining e del flusso di lavoro con granularità grossolana.

Per ulteriori informazioni sulla libreria di agenti, vedere [libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md).

## <a name="sections"></a><a name="top"></a> Sezioni

Questo documento contiene le seguenti sezioni:

- [Usare gli agenti per isolare lo stato](#isolation)

- [Usare un meccanismo di limitazione delle richieste per limitare il numero di messaggi in una pipeline di dati](#throttling)

- [Non eseguire Fine-Grained lavoro in una pipeline di dati](#fine-grained)

- [Non passare payload di messaggi di grandi dimensioni per valore](#large-payloads)

- [Usare shared_ptr in una rete di dati quando la proprietà non è definita](#ownership)

## <a name="use-agents-to-isolate-state"></a><a name="isolation"></a> Usare gli agenti per isolare lo stato

La libreria di agenti fornisce alternative allo stato condiviso consentendo la connessione di componenti isolati tramite un meccanismo di trasferimento dei messaggi asincrono. Gli agenti asincroni sono più efficaci quando isolano lo stato interno da altri componenti. Isolando lo stato, più componenti non agiscono generalmente sui dati condivisi. L'isolamento dello stato può consentire la scalabilità dell'applicazione perché riduce la contesa sulla memoria condivisa. L'isolamento dello stato riduce inoltre la probabilità di deadlock e race condition, perché i componenti non devono sincronizzare l'accesso ai dati condivisi.

In genere si isola lo stato di un agente mantenendo i membri dati nelle **`private`** **`protected`** sezioni o della classe Agent e utilizzando i buffer dei messaggi per comunicare le modifiche di stato. Nell'esempio seguente viene illustrata la `basic_agent` classe, che deriva da [Concurrency:: Agent](../../parallel/concrt/reference/agent-class.md). La `basic_agent` classe utilizza due buffer dei messaggi per comunicare con componenti esterni. Un buffer di messaggi include i messaggi in ingresso; l'altro buffer dei messaggi include i messaggi in uscita.

[!code-cpp[concrt-simple-agent#1](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-asynchronous-agents-library_1.cpp)]

Per esempi completi su come definire e usare gli agenti, vedere [procedura dettagliata: creazione di un'applicazione Agent-Based](../../parallel/concrt/walkthrough-creating-an-agent-based-application.md) e [procedura dettagliata: creazione di un agente del flusso di flussi](../../parallel/concrt/walkthrough-creating-a-dataflow-agent.md).

[All'[inizio](#top)]

## <a name="use-a-throttling-mechanism-to-limit-the-number-of-messages-in-a-data-pipeline"></a><a name="throttling"></a> Usare un meccanismo di limitazione delle richieste per limitare il numero di messaggi in una pipeline di dati

Molti tipi di buffer di messaggi, ad esempio [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md), possono conservare un numero illimitato di messaggi. Quando un producer di messaggi invia messaggi a una pipeline di dati più velocemente di quanto il consumer possa elaborare questi messaggi, l'applicazione può accedere a uno stato di memoria insufficiente o memoria insufficiente. È possibile utilizzare un meccanismo di limitazione, ad esempio un semaforo, per limitare il numero di messaggi attivi contemporaneamente in una pipeline di dati.

Nell'esempio di base riportato di seguito viene illustrato come utilizzare un semaforo per limitare il numero di messaggi in una pipeline di dati. La pipeline di dati utilizza la funzione [Concurrency:: wait](reference/concurrency-namespace-functions.md#wait) per simulare un'operazione che richiede almeno 100 millisecondi. Poiché il mittente produce messaggi più velocemente di quanto il consumer possa elaborare tali messaggi, questo esempio definisce la `semaphore` classe per consentire all'applicazione di limitare il numero di messaggi attivi.

[!code-cpp[concrt-message-throttling#1](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-asynchronous-agents-library_2.cpp)]

L' `semaphore` oggetto limita la pipeline a elaborare al massimo due messaggi nello stesso momento.

Il producer in questo esempio Invia un numero relativamente basso di messaggi al consumer. Pertanto, in questo esempio non viene illustrata una potenziale condizione di memoria insufficiente o memoria insufficiente. Tuttavia, questo meccanismo è utile quando una pipeline di dati contiene un numero relativamente elevato di messaggi.

Per altre informazioni su come creare la classe Semaphore usata in questo esempio, vedere [procedura: usare la classe Context per implementare un semaforo cooperativo](../../parallel/concrt/how-to-use-the-context-class-to-implement-a-cooperative-semaphore.md).

[All'[inizio](#top)]

## <a name="do-not-perform-fine-grained-work-in-a-data-pipeline"></a><a name="fine-grained"></a> Non eseguire Fine-Grained lavoro in una pipeline di dati

La libreria di agenti è particolarmente utile quando il lavoro eseguito da una pipeline di dati è piuttosto granulare. Un componente dell'applicazione, ad esempio, potrebbe leggere i dati da un file o una connessione di rete e occasionalmente inviarli a un altro componente. Il protocollo utilizzato dalla libreria di agenti per propagare i messaggi comporta un sovraccarico del meccanismo di passaggio dei messaggi rispetto ai costrutti paralleli delle attività forniti dalla libreria PPL ( [Parallel Patterns Library](../../parallel/concrt/parallel-patterns-library-ppl.md) ). Pertanto, assicurarsi che il lavoro eseguito da una pipeline di dati sia abbastanza lungo per compensare questo overhead.

Anche se una pipeline di dati è più efficace quando le attività hanno una granularità grossolana, ogni fase della pipeline di dati può usare costrutti PPL, ad esempio gruppi di attività e algoritmi paralleli, per eseguire operazioni con granularità più fine. Per un esempio di una rete di dati con granularità grossolana che usa un parallelismo con granularità fine a ogni fase di elaborazione, vedere [procedura dettagliata: creazione di una rete Image-Processing](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md).

[All'[inizio](#top)]

## <a name="do-not-pass-large-message-payloads-by-value"></a><a name="large-payloads"></a> Non passare payload di messaggi di grandi dimensioni per valore

In alcuni casi, il runtime crea una copia di ogni messaggio che passa da un buffer di messaggi a un altro buffer di messaggi. La classe [Concurrency:: overwrite_buffer](../../parallel/concrt/reference/overwrite-buffer-class.md) , ad esempio, offre una copia di ogni messaggio ricevuto a ogni destinazione. Il runtime crea inoltre una copia dei dati del messaggio quando si utilizzano funzioni di passaggio dei messaggi, ad esempio [Concurrency:: Send](reference/concurrency-namespace-functions.md#send) e [Concurrency:: Receive](reference/concurrency-namespace-functions.md#receive) , per scrivere i messaggi in e leggere i messaggi da un buffer di messaggi. Sebbene questo meccanismo contribuisca a eliminare il rischio di scrittura simultanea nei dati condivisi, può causare una riduzione delle prestazioni della memoria quando il payload del messaggio è relativamente grande.

È possibile utilizzare i puntatori o i riferimenti per migliorare le prestazioni di memoria quando si passano messaggi con un payload di grandi dimensioni. Nell'esempio seguente viene confrontato il passaggio di messaggi di grandi dimensioni per valore al passaggio di puntatori allo stesso tipo di messaggio. Nell'esempio vengono definiti due tipi di agente, `producer` e `consumer` , che agiscono sugli `message_data` oggetti. Nell'esempio viene confrontato il tempo necessario al Producer per inviare più `message_data` oggetti al consumer al tempo necessario affinché l'agente di produzione invii diversi puntatori agli `message_data` oggetti al consumer.

[!code-cpp[concrt-message-payloads#1](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-asynchronous-agents-library_3.cpp)]

Questo esempio produce l'output di esempio seguente:

```Output
Using message_data...
took 437ms.
Using message_data*...
took 47ms.
```

La versione che usa i puntatori offre prestazioni migliori in quanto elimina la necessità per il runtime di creare una copia completa di ogni `message_data` oggetto che passa dal producer al consumer.

[All'[inizio](#top)]

## <a name="use-shared_ptr-in-a-data-network-when-ownership-is-undefined"></a><a name="ownership"></a> Usare shared_ptr in una rete di dati quando la proprietà non è definita

Quando si inviano messaggi tramite puntatore tramite una pipeline o una rete che passa messaggi, in genere si alloca la memoria per ogni messaggio che si trova all'inizio della rete e si libera tale memoria alla fine della rete. Sebbene questo meccanismo funzioni di frequente, esistono casi in cui è difficile o non è possibile utilizzarlo. Si consideri, ad esempio, il caso in cui la rete dati contiene più nodi end. In questo caso, non esiste alcun percorso chiaro per liberare la memoria per i messaggi.

Per risolvere questo problema, è possibile usare un meccanismo, ad esempio [std:: shared_ptr](../../standard-library/shared-ptr-class.md), che consente a un puntatore di essere di proprietà di più componenti. Quando l' `shared_ptr` oggetto finale che possiede una risorsa viene eliminato definitivamente, viene liberata anche la risorsa.

Nell'esempio seguente viene illustrato come utilizzare `shared_ptr` per condividere i valori dei puntatori tra più buffer di messaggi. Nell'esempio viene connesso un oggetto [Concurrency:: overwrite_buffer](../../parallel/concrt/reference/overwrite-buffer-class.md) a tre oggetti [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) . La `overwrite_buffer` classe offre messaggi a ogni destinazione. Poiché sono presenti più proprietari dei dati alla fine della rete dati, in questo esempio viene utilizzato `shared_ptr` per consentire a ogni `call` oggetto di condividere la proprietà dei messaggi.

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

## <a name="see-also"></a>Vedi anche

[Procedure consigliate runtime di concorrenza](../../parallel/concrt/concurrency-runtime-best-practices.md)<br/>
[libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)<br/>
[Procedura dettagliata: creazione di un'applicazione Agent-Based](../../parallel/concrt/walkthrough-creating-an-agent-based-application.md)<br/>
[Procedura dettagliata: creazione di un agente del flusso di flussi](../../parallel/concrt/walkthrough-creating-a-dataflow-agent.md)<br/>
[Procedura dettagliata: creazione di una rete di Image-Processing](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md)<br/>
[Procedure consigliate nella libreria di modelli paralleli](../../parallel/concrt/best-practices-in-the-parallel-patterns-library.md)<br/>
[Procedure consigliate generali nel runtime di concorrenza](../../parallel/concrt/general-best-practices-in-the-concurrency-runtime.md)
