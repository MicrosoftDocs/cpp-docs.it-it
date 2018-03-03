---
title: Procedure consigliate nella libreria di agenti asincroni | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- best practices, Asynchronous Agents Library
- Asynchronous Agents Library, best practices
- Asynchronous Agents Library, practices to avoid
- practices to avoid, Asynchronous Agents Library
ms.assetid: 85f52354-41eb-4b0d-98c5-f7344ee8a8cf
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a8d4b52839675334ab343adf48790bdce390dd5e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="best-practices-in-the-asynchronous-agents-library"></a>Procedure consigliate nella libreria di agenti asincroni
Questo documento viene descritto come ottimizzare l'utilizzo della libreria di agenti asincroni. La libreria di agenti Alza di livello un modello di programmazione basato su attori e attività di pipelining e il passaggio di un flusso di dati dei messaggi in-process.  
  
 Per ulteriori informazioni sulla libreria di agenti, vedere [libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md).  
  
##  <a name="top"></a> Sezioni  
 Questo documento contiene le seguenti sezioni:  
  
- [Utilizzare gli agenti per stato isolato](#isolation)  
  
- [Utilizzare un meccanismo di limitazione delle richieste per limitare il numero di messaggi in una Pipeline di dati](#throttling)  
  
- [Non eseguire il lavoro con granularità fine in una Pipeline di dati](#fine-grained)  
  
- [Non passare payload di messaggi di grandi dimensioni per valore](#large-payloads)  
  
- [Utilizzare shared_ptr in una Data rete quando la proprietà è non definito](#ownership)  
  
##  <a name="isolation"></a>Utilizzare gli agenti per stato isolato  
 La libreria di agenti offre alternative a uno stato condiviso consentendo la connessione di componenti isolati tramite un meccanismo di passaggio dei messaggi asincrono. Agenti asincroni sono più efficaci quando isolano il proprio stato interno da altri componenti. Tramite l'isolamento dello stato, più componenti non vengono utilizzati in genere sui dati condivisi. L'isolamento dello stato è possibile abilitare l'applicazione per applicare la scalabilità perché riduce la contesa sulla memoria condivisa. L'isolamento dello stato riduce inoltre la possibilità di deadlock e race condition perché non dispone di componenti sincronizzare l'accesso ai dati condivisi.  
  
 È possibile isolare in genere tenendo membri dati di stato di un agente di `private` o `protected` sezioni della classe agente e utilizzando i buffer dei messaggi per comunicare le modifiche dello stato. Nell'esempio seguente il `basic_agent` classe che deriva da [Concurrency:: Agent](../../parallel/concrt/reference/agent-class.md). La `basic_agent` classe utilizza due buffer dei messaggi per comunicare con i componenti esterni. Un buffer dei messaggi contiene i messaggi in ingresso. buffer dei messaggi contiene i messaggi in uscita.  
  
 [!code-cpp[concrt-simple-agent#1](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-asynchronous-agents-library_1.cpp)]  
  
 Per esempi completi su come definire e usare gli agenti, vedere [procedura dettagliata: creazione di un'applicazione basata sugli agenti](../../parallel/concrt/walkthrough-creating-an-agent-based-application.md) e [procedura dettagliata: creazione di un agente del flusso di dati](../../parallel/concrt/walkthrough-creating-a-dataflow-agent.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="throttling"></a>Utilizzare un meccanismo di limitazione delle richieste per limitare il numero di messaggi in una Pipeline di dati  
 Molti tipi di buffer dei messaggi, ad esempio [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md), può contenere un numero illimitato di messaggi. Quando un producer di messaggio Invia messaggi a una pipeline di dati più velocemente di quanto il consumer può elaborare questi messaggi, l'applicazione può immettere uno stato di memoria insufficiente o di memoria insufficiente. È possibile utilizzare un meccanismo di limitazione delle richieste, ad esempio, un semaforo per limitare il numero di messaggi che sono contemporaneamente attivi in una pipeline di dati.  
  
 Nell'esempio di base seguente viene illustrato come utilizzare un semaforo per limitare il numero di messaggi in una pipeline di dati. I dati della pipeline utilizza il [Concurrency:: Wait](reference/concurrency-namespace-functions.md#wait) funzione per simulare un'operazione che richiede almeno 100 millisecondi. Perché il mittente produce messaggi più velocemente di quanto il consumer può elaborare tali messaggi, questo esempio viene definito il `semaphore` classe per consentire l'applicazione limitare il numero di messaggi attivi.  
  
 [!code-cpp[concrt-message-throttling#1](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-asynchronous-agents-library_2.cpp)]  
  
 Il `semaphore` oggetto limita la pipeline per elaborare al massimo due messaggi nello stesso momento.  
  
 In questo esempio il producer invia messaggi di un numero relativamente basso al consumer. In questo esempio non viene pertanto, una condizione di memoria insufficiente o memoria insufficiente del potenziale. Tuttavia, questo meccanismo è utile quando una pipeline di dati contiene un numero relativamente elevato di messaggi.  
  
 Per ulteriori informazioni su come creare la classe semaforo che viene utilizzata in questo esempio, vedere [procedura: utilizzare la classe Context per implementare una classe semaforo cooperativo](../../parallel/concrt/how-to-use-the-context-class-to-implement-a-cooperative-semaphore.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="fine-grained"></a>Non eseguire il lavoro con granularità fine in una Pipeline di dati  
 La libreria di agenti è particolarmente utile quando il lavoro eseguito da una pipeline di dati è grossolano. Ad esempio, un componente dell'applicazione potrebbe leggere i dati da un file o una connessione di rete e inviare saltuariamente i dati a un altro componente. Il protocollo utilizzato per la libreria di agenti per propagare i messaggi determina il meccanismo di passaggio dei messaggi da un sovraccarico maggiore rispetto ai costrutti parallela di attività fornite dal [Parallel Patterns Library](../../parallel/concrt/parallel-patterns-library-ppl.md) (PPL). Pertanto, assicurarsi che il lavoro eseguito da una pipeline di dati è sufficiente per compensare tale sovraccarico.  
  
 Anche se una pipeline di dati è particolarmente efficace quando le relative attività sono con granularità grossolana, ogni fase della pipeline di dati è possibile utilizzare costrutti della libreria PPL, ad esempio gruppi di attività e algoritmi paralleli per eseguire più granulari per le operazioni. Per un esempio di una rete di dati con granularità grossolana che utilizza il parallelismo con granularità fine in ogni fase di elaborazione, vedere [procedura dettagliata: creazione di una rete di elaborazione delle immagini](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="large-payloads"></a>Non passare payload di messaggi di grandi dimensioni per valore  

 In alcuni casi, il runtime crea una copia di ogni messaggio che passa da un buffer dei messaggi a un altro buffer dei messaggi. Ad esempio, il [Concurrency:: overwrite_buffer](../../parallel/concrt/reference/overwrite-buffer-class.md) classe offre una copia di ogni messaggio ricevuto per ciascuna delle relative destinazioni. Il runtime crea anche una copia dei dati del messaggio quando si utilizzano le funzioni di passaggio dei messaggi, ad esempio [Concurrency:: Send](reference/concurrency-namespace-functions.md#send) e [Concurrency:: Receive](reference/concurrency-namespace-functions.md#receive) per scrivere e leggere messaggi da un messaggio buffer. Anche se questo meccanismo consente di eliminare il rischio di scrittura simultaneamente ai dati condivisi, potrebbe attivare le prestazioni di memoria ridotte quando il payload del messaggio è relativamente grande.  
  
 È possibile utilizzare i puntatori o riferimenti a migliorare le prestazioni di memoria quando si passa i messaggi che hanno un payload di grandi dimensioni. L'esempio seguente confronta i messaggi di passaggio di grandi dimensioni per valore per il passaggio di puntatori al tipo di messaggio stesso. L'esempio definisce due tipi di agente, `producer` e `consumer`, che agiscono su `message_data` oggetti. Nell'esempio viene confrontato il tempo necessario per il producer inviare diverse `message_data` al consumer il tempo necessario per l'agente di producer di inviare più puntatori a oggetti `message_data` oggetti al consumer.  
  
 [!code-cpp[concrt-message-payloads#1](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-asynchronous-agents-library_3.cpp)]  
  
 Questo esempio produce il seguente output di esempio:  
  
```Output  
Using message_data...  
took 437ms.  
Using message_data*...  
took 47ms.  
```  
  
 La versione che utilizza i puntatori offre prestazioni migliori perché viene eliminata la necessità per il runtime creare una copia completa di ogni `message_data` oggetto passato dal producer al consumer.  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="ownership"></a>Utilizzare shared_ptr in una Data rete quando la proprietà è non definito  
 Quando si inviano messaggi dal puntatore tramite una pipeline di passaggio dei messaggi o rete, in genere allocare la memoria per ogni messaggio all'inizio della rete e liberare memoria alla fine della rete. Sebbene questo meccanismo spesso funziona bene, vi sono casi in cui è difficile o non è possibile utilizzarlo. Ad esempio, si consideri il caso in cui la rete contiene più nodi finali. In questo caso, non vi è alcun percorso deseleziona per liberare la memoria per i messaggi.  
  
 Per risolvere questo problema, è possibile utilizzare un meccanismo, ad esempio, [std:: shared_ptr](../../standard-library/shared-ptr-class.md), che consente a un puntatore come di proprietà di più componenti. Quando l'elemento finale `shared_ptr` oggetto proprietario di una risorsa viene eliminato definitivamente, la risorsa viene liberata anche.  
  
 Nell'esempio seguente viene illustrato come utilizzare `shared_ptr` di condividere i valori di puntatore tra più buffer dei messaggi. Nell'esempio si connette un [Concurrency:: overwrite_buffer](../../parallel/concrt/reference/overwrite-buffer-class.md) oggetto a tre [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) oggetti. La `overwrite_buffer` classe offre i messaggi per ciascuna delle relative destinazioni. Poiché sono presenti più proprietari dei dati alla fine della rete, in questo esempio utilizza `shared_ptr` per attivare ognuno `call` oggetto condividere la proprietà dei messaggi.  
  
 [!code-cpp[concrt-message-sharing#1](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-asynchronous-agents-library_4.cpp)]  
  
 Questo esempio produce il seguente output di esempio:  
  
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
 [Procedure consigliate per Runtime di concorrenza](../../parallel/concrt/concurrency-runtime-best-practices.md)   
 [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)   
 [Procedura dettagliata: Creazione di un'applicazione basata sugli agenti](../../parallel/concrt/walkthrough-creating-an-agent-based-application.md)   
 [Procedura dettagliata: Creazione di un agente del flusso di dati](../../parallel/concrt/walkthrough-creating-a-dataflow-agent.md)   
 [Procedura dettagliata: Creazione di una rete di elaborazione delle immagini](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md)   
 [Le procedure consigliate in Parallel Patterns Library](../../parallel/concrt/best-practices-in-the-parallel-patterns-library.md)   
 [Procedure consigliate generali nel runtime di concorrenza](../../parallel/concrt/general-best-practices-in-the-concurrency-runtime.md)

