---
title: "Procedure consigliate nella libreria di agenti asincroni | Microsoft Docs"
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
  - "procedure consigliate, Libreria di agenti asincroni"
  - "Libreria di agenti asincroni, procedure consigliate"
  - "Libreria di agenti asincroni, operazioni da evitare"
  - "operazioni da evitare, Libreria di agenti asincroni"
ms.assetid: 85f52354-41eb-4b0d-98c5-f7344ee8a8cf
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Procedure consigliate nella libreria di agenti asincroni
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo documento viene descritto come ottimizzare l'utilizzo della libreria di agenti asincroni.  La libreria di agenti promuove un modello di programmazione basato su attori e un passaggio dei messaggi in\-process per le attività di pipelining o per un flusso di dati con granularità grossolana.  
  
 Per ulteriori informazioni sulla libreria di agenti, vedere [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md).  
  
##  <a name="top"></a> Sezioni  
 Il documento include le sezioni seguenti:  
  
-   [Utilizzare gli agenti per isolare lo stato](#isolation)  
  
-   [Utilizzare un meccanismo di limitazione per limitare il numero di messaggi in una pipeline di dati](#throttling)  
  
-   [Non eseguire il lavoro con granularità fine in una pipeline di dati](#fine-grained)  
  
-   [Non passare payload di messaggi di grandi dimensioni per valore](#large-payloads)  
  
-   [Utilizzare shared\_ptr in una rete di dati quando la proprietà non è definita](#ownership)  
  
##  <a name="isolation"></a> Utilizzare gli agenti per isolare lo stato  
 La libreria di agenti fornisce le alternative allo stato condiviso consentendo di connettere componenti isolati tramite un meccanismo di passaggio dei messaggi asincrono.  Gli agenti asincroni sono più efficaci quando isolano il relativo stato interno da altri componenti.  Isolando lo stato, più componenti non agiscono in genere su dati condivisi.  L'isolamento dello stato consente all'applicazione di essere scalata poiché riduce la contesa sulla memoria condivisa.  L'isolamento dello stato riduce inoltre la possibilità di deadlock e race condition poiché non è necessario per i componenti sincronizzare l'accesso ai dati condivisi.  
  
 In genere, lo stato in un agente viene isolato mantenendo i membri dati nelle sezioni `protected` o `private` della classe dell'agente e utilizzando i buffer dei messaggi per comunicare le modifiche dello stato.  Nell'esempio seguente viene definita la classe `basic_agent`, che deriva da [concurrency::agent](../../parallel/concrt/reference/agent-class.md).  La classe `basic_agent` utilizza due buffer dei messaggi per comunicare con i componenti esterni.  Un buffer dei messaggi contiene i messaggi in arrivo, l'altro contiene i messaggi in uscita.  
  
 [!code-cpp[concrt-simple-agent#1](../../parallel/concrt/codesnippet/CPP/best-practices-in-the-asynchronous-agents-library_1.cpp)]  
  
 Per gli esempi completi su come definire e utilizzare gli agenti, vedere [Procedura dettagliata: Creazione di un'applicazione basata sugli agenti](../../parallel/concrt/walkthrough-creating-an-agent-based-application.md) e [Procedura dettagliata: Creazione di un agente del flusso di dati](../../parallel/concrt/walkthrough-creating-a-dataflow-agent.md).  
  
 \[[Top](#top)\]  
  
##  <a name="throttling"></a> Utilizzare un meccanismo di limitazione per limitare il numero di messaggi in una pipeline di dati  
 Molti tipi di buffer dei messaggi, ad esempio [concurrency::unbounded\_buffer](../Topic/unbounded_buffer%20Class.md), possono contenere un numero illimitato di messaggi.  Quando un producer di messaggi invia i messaggi in una pipeline di dati più velocemente di quanto il consumer sia in grado di elaborare, l'applicazione può passare a uno stato di memoria insufficiente.  È possibile utilizzare un meccanismo di limitazione, ad esempio un semaforo, per limitare il numero di messaggi contemporaneamente attivi in una pipeline di dati.  
  
 Nell'esempio di base seguente viene illustrato come utilizzare un semaforo per limitare il numero di messaggi in una pipeline di dati.  La pipeline di dati utilizza la funzione [concurrency::wait](../Topic/wait%20Function.md) per simulare un'operazione che richiede almeno 100 millisecondi.  Poiché il mittente produce messaggi più velocemente di quanto il consumer sia in grado di elaborare, in questo esempio viene definita la classe `semaphore` per consentire all'applicazione di limitare il numero di messaggi attivi.  
  
 [!code-cpp[concrt-message-throttling#1](../../parallel/concrt/codesnippet/CPP/best-practices-in-the-asynchronous-agents-library_2.cpp)]  
  
 L'oggetto `semaphore` limita la pipeline in modo da elaborare al massimo due messaggi contemporaneamente.  
  
 In questo esempio il producer invia al consumer un numero relativamente basso di messaggi.  Nell'esempio non viene pertanto illustrata una condizione potenziale di memoria insufficiente.  Tuttavia, questo meccanismo risulta utile quando una pipeline di dati contiene un numero relativamente elevato di messaggi.  
  
 Per ulteriori informazioni su come creare la classe semaforo utilizzata in questo esempio, vedere [Procedura: utilizzare la classe Context per implementare una classe semaforo di cooperazione](../../parallel/concrt/how-to-use-the-context-class-to-implement-a-cooperative-semaphore.md).  
  
 \[[Top](#top)\]  
  
##  <a name="fine-grained"></a> Non eseguire il lavoro con granularità fine in una pipeline di dati  
 La libreria di agenti è molto utile quando il lavoro eseguito da una pipeline di dati è con granularità grossolana.  Ad esempio, un componente dell'applicazione potrebbe leggere i dati da un file o da una connessione di rete e inviare saltuariamente i dati a un altro componente.  Il protocollo utilizzato dalla libreria di agenti per propagare i messaggi comporta un sovraccarico maggiore del meccanismo di passaggio dei messaggi rispetto ai costrutti paralleli delle attività forniti dalla [libreria PPL \(Parallel Patterns Library\)](../../parallel/concrt/parallel-patterns-library-ppl.md).  Assicurarsi pertanto che il lavoro eseguito da una pipeline di dati sia sufficientemente lungo da compensare tale sovraccarico.  
  
 Sebbene una pipeline di dati sia più efficiente quando le relative attività sono con granularità grossolana, ogni fase della pipeline di dati può utilizzare i costrutti della libreria PPL come i gruppi di attività e gli algoritmi paralleli per eseguire un lavoro con granularità più fine.  Per un esempio di una rete di dati con granularità grossolana che utilizza un parallelismo con granularità fine in ogni fase di elaborazione, vedere [Procedura dettagliata: creazione di una rete per l'elaborazione di immagini](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md).  
  
 \[[Top](#top)\]  
  
##  <a name="large-payloads"></a> Non passare payload di messaggi di grandi dimensioni per valore  
 In alcuni casi, il runtime crea una copia di ogni messaggio che passa da un buffer dei messaggi all'altro.  La classe [concurrency::overwrite\_buffer](../../parallel/concrt/reference/overwrite-buffer-class.md) offre, ad esempio, una copia di ogni messaggio che riceve a ciascuna delle relative destinazioni.  Il runtime crea inoltre una copia dei dati del messaggio quando si utilizzano le funzioni di passaggio dei messaggi come [concurrency::send](../Topic/send%20Function.md) e [concurrency::receive](../Topic/receive%20Function.md) per scrivere e leggere i messaggi da un buffer dei messaggi.  Sebbene questo meccanismo consenta di eliminare il rischio di scrivere contemporaneamente nei dati condivisi, può comportare una riduzione delle prestazioni di memoria quando le dimensioni del payload del messaggio risultano relativamente grandi.  
  
 È possibile utilizzare puntatori o riferimenti per migliorare le prestazioni di memoria quando si passano messaggi con un payload di grandi dimensioni.  Nell'esempio seguente viene confrontato il passaggio di messaggi di grandi dimensioni per valore con il passaggio di puntatori allo stesso tipo di messaggio.  Nell'esempio vengono definiti due tipi di agente, `producer` e `consumer`, che agiscono sugli oggetti `message_data`.  Nell'esempio viene confrontato il tempo impiegato dal producer per inviare al consumer diversi oggetti `message_data` con il tempo impiegato dall'agente del producer per inviare al consumer diversi puntatori agli oggetti `message_data`.  
  
 [!code-cpp[concrt-message-payloads#1](../../parallel/concrt/codesnippet/CPP/best-practices-in-the-asynchronous-agents-library_3.cpp)]  
  
 Questo esempio produce l'output seguente:  
  
  **Using message\_data...**  
**took 437ms.**  
**Using message\_data\*...**  
**took 47ms.** Le prestazioni della versione utilizzata dai puntatori sono migliori poiché non è necessario per il runtime creare una copia completa di ogni oggetto `message_data` che passa dal producer al consumer.  
  
 \[[Top](#top)\]  
  
##  <a name="ownership"></a> Utilizzare shared\_ptr in una rete di dati quando la proprietà non è definita  
 Quando si inviano messaggi dal puntatore tramite una pipeline o una rete di passaggio dei messaggi, in genere viene allocata memoria per ogni messaggio all'inizio della rete e liberata memoria alla fine della rete.  Sebbene questo meccanismo funzioni quasi sempre bene, vi sono casi in cui è più complesso o non è possibile utilizzarlo.  Ad esempio, si consideri il caso in cui la rete di dati contiene più nodi finali.  In questo caso, la posizione in cui liberare la memoria per i messaggi non è chiara.  
  
 Per risolvere questo problema, è possibile utilizzare un meccanismo, ad esempio [std::shared\_ptr](../../standard-library/shared-ptr-class.md), che consente a più componenti di essere proprietari di un puntatore.  Quando l'oggetto `shared_ptr` finale proprietario di una risorsa viene eliminato, viene liberata anche la risorsa.  
  
 Nell'esempio seguente seguito viene illustrato come utilizzare `shared_ptr` per condividere i valori del puntatore tra più buffer dei messaggi.  Nell'esempio un oggetto [concurrency::overwrite\_buffer](../../parallel/concrt/reference/overwrite-buffer-class.md) viene connesso a tre oggetti [concurrency::call](../../parallel/concrt/reference/call-class.md).  La classe `overwrite_buffer` offre i messaggi a ciascuna delle relative destinazioni.  Poiché esistono più proprietari dei dati alla fine della rete di dati, nell'esempio viene utilizzato `shared_ptr` per consentire a ogni oggetto `call` di condividere la proprietà dei messaggi.  
  
 [!code-cpp[concrt-message-sharing#1](../../parallel/concrt/codesnippet/CPP/best-practices-in-the-asynchronous-agents-library_4.cpp)]  
  
 Questo esempio produce l'output seguente:  
  
  **Creating resource 42...**  
**receiver1: received resource 42**  
**Creating resource 64...**  
**receiver2: received resource 42**  
**receiver1: received resource 64**  
**Destroying resource 42...**  
**receiver2: received resource 64**  
**Destroying resource 64...**   
## Vedere anche  
 [Procedure consigliate del runtime di concorrenza](../../parallel/concrt/concurrency-runtime-best-practices.md)   
 [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)   
 [Procedura dettagliata: Creazione di un'applicazione basata sugli agenti](../../parallel/concrt/walkthrough-creating-an-agent-based-application.md)   
 [Procedura dettagliata: Creazione di un agente del flusso di dati](../../parallel/concrt/walkthrough-creating-a-dataflow-agent.md)   
 [Procedura dettagliata: creazione di una rete per l'elaborazione di immagini](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md)   
 [Procedure consigliate nella libreria PPL \(Parallel Patterns Library\)](../../parallel/concrt/best-practices-in-the-parallel-patterns-library.md)   
 [Procedure consigliate generali nel runtime di concorrenza](../../parallel/concrt/general-best-practices-in-the-concurrency-runtime.md)