---
title: 'Procedura dettagliata: Creazione di un agente del flusso di dati'
ms.date: 11/19/2018
helpviewer_keywords:
- creating dataflow agents [Concurrency Runtime]
- dataflow agents, creating [Concurrency Runtime]
ms.assetid: 9db5ce3f-c51b-4de1-b79b-9ac2a0cbd130
ms.openlocfilehash: 26ea7d520c3dbc4935699e5d52871d21739a3d88
ms.sourcegitcommit: 9e891eb17b73d98f9086d9d4bfe9ca50415d9a37
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2018
ms.locfileid: "52176081"
---
# <a name="walkthrough-creating-a-dataflow-agent"></a>Procedura dettagliata: Creazione di un agente del flusso di dati

Questo documento illustra come creare applicazioni basate su agente che si basano sul flusso di dati, anziché il flusso di controllo.

*Flusso di controllo* fa riferimento all'ordine di esecuzione delle operazioni in un programma. Flusso di controllo viene regolato utilizzando strutture di controllo, ad esempio istruzioni condizionali, cicli e così via. In alternativa *dataflow* fa riferimento a un modello di programmazione in cui i calcoli vengono eseguiti solo quando tutti i dati necessari sono disponibili. Il modello di programmazione del flusso di dati è correlato al concetto di passaggio dei messaggi, in cui i componenti indipendenti di un programma di comunicano tra loro mediante l'invio di messaggi.

Agenti asincroni supportano sia il flusso di controllo e flusso di dati modelli di programmazione. Anche se il modello di flusso di controllo appropriato in molti casi, il modello del flusso di dati è appropriato in altri casi, ad esempio, quando un agente riceve i dati ed esegue un'azione che si basa il payload dei dati.

## <a name="prerequisites"></a>Prerequisiti

Prima di iniziare questa procedura dettagliata, leggere i documenti seguenti:

- [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)

- [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)

- [Procedura: Usare il filtro di blocco dei messaggi](../../parallel/concrt/how-to-use-a-message-block-filter.md)

##  <a name="top"></a> Sezioni

Questa procedura dettagliata contiene le sezioni seguenti:

- [Creazione di un agente di base del flusso di controllo](#control-flow)

- [Creazione di un agente del flusso di dati di base](#dataflow)

- [Creazione di un agente di registrazione dei messaggi](#logging)

##  <a name="control-flow"></a> Creazione di un agente di base del flusso di controllo

Si consideri l'esempio seguente che definisce il `control_flow_agent` classe. Il `control_flow_agent` classe agisce nel buffer di messaggi tre: un solo buffer di input e due i buffer di output. Il `run` metodo legge dal buffer di messaggi di origine in un ciclo e usa un'istruzione condizionale per indirizzare il flusso dell'esecuzione del programma. L'agente incrementa un contatore per diverso da zero, i valori negativi e viene incrementato di un altro contatore per i valori di tipo diverso da zero e positivi. Dopo che l'agente riceve il valore di sentinel pari a zero, invia i valori dei contatori per il buffer di messaggi di output. Il `negatives` e `positives` i metodi consentono all'applicazione di leggere i conteggi dei valori negativi e positivi dall'agente.

[!code-cpp[concrt-dataflow-agent#1](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-dataflow-agent_1.cpp)]

Sebbene questo esempio fa uso di base del flusso di controllo in un agente, vengono illustrate la natura seriale della programmazione basate sul flusso di controllo. Ogni messaggio deve essere elaborato in sequenza, anche se più messaggi potrebbero essere disponibili nel buffer del messaggio di input. Il modello di flusso di dati consente a entrambi i rami dell'istruzione condizionale per valutare contemporaneamente. Il modello di flusso di dati consente inoltre di creare reti di messaggistica più complesse che agiscono su dati appena sarà disponibile.

[[Torna all'inizio](#top)]

##  <a name="dataflow"></a> Creazione di un agente del flusso di dati di base

In questa sezione viene illustrato come convertire le `control_flow_agent` classe da utilizzare il modello di flusso di dati per eseguire la stessa attività.

L'agente del flusso di dati funziona mediante la creazione di una rete di buffer di messaggi, ognuno dei quali svolge una funzione specifica. Alcuni blocchi di messaggi utilizzano una funzione di filtro per accettare o rifiutare un messaggio in base al relativo payload. Una funzione di filtro garantisce che un blocco di messaggi riceve solo determinati valori.

#### <a name="to-convert-the-control-flow-agent-to-a-dataflow-agent"></a>Per convertire l'agente del flusso di controllo a un agente del flusso di dati

1. Copiare il corpo del `control_flow_agent` classe a un'altra classe, ad esempio, `dataflow_agent`. In alternativa, è possibile rinominare il `control_flow_agent` classe.

1. Rimuovere il corpo del ciclo che chiama `receive` dal `run` (metodo).

[!code-cpp[concrt-dataflow-agent#2](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-dataflow-agent_2.cpp)]

1. Nel `run` metodo, dopo l'inizializzazione delle variabili `negative_count` e `positive_count`, aggiungere un `countdown_event` oggetto che registra il numero di operazioni attive.

[!code-cpp[concrt-dataflow-agent#6](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-dataflow-agent_3.cpp)]

   Il `countdown_event` classe è illustrata più avanti in questo argomento.

1. Creare il messaggio di oggetti buffer che verranno incluse nella rete del flusso di dati.

[!code-cpp[concrt-dataflow-agent#3](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-dataflow-agent_4.cpp)]

1. Connettere il buffer di messaggi per formare una rete.

[!code-cpp[concrt-dataflow-agent#4](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-dataflow-agent_5.cpp)]

1. Attendere che il `event` e `countdown event` oggetti da impostare. Questi eventi indicano che l'agente ha ricevuto il valore di sentinel e che tutte le operazioni è sono completata.

[!code-cpp[concrt-dataflow-agent#5](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-dataflow-agent_6.cpp)]

Il diagramma seguente mostra la rete del flusso di dati completo per il `dataflow_agent` classe:

![La rete del flusso di dati](../../parallel/concrt/media/concrt_dataflow.png "la rete del flusso di dati")

Nella tabella seguente vengono descritti i membri della rete.

|Member|Descrizione|
|------------|-----------------|
|`increment_active`|Oggetto [Concurrency:: transformer](../../parallel/concrt/reference/transformer-class.md) che incrementa il contatore degli eventi attivo e passa il valore di input per il resto della rete.|
|`negatives`, `positives`|[Concurrency:: Call](../../parallel/concrt/reference/call-class.md) gli oggetti che incrementa il conteggio dei numeri e decrementa il contatore degli eventi attivi. Ogni oggetto usa un filtro per accettare i numeri negativi o i numeri positivi.|
|`sentinel`|Oggetto [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) oggetto che accetta solo il valore di sentinel pari a zero e decrementa il contatore degli eventi attivi.|
|`connector`|Oggetto [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md) oggetto che si connette il buffer dei messaggi di origine alla rete interna.|

Poiché il `run` metodo viene chiamato su un thread separato, altri thread può inviare messaggi alla rete prima che la rete è completamente connesso. Il `_source` membro dati è un `unbounded_buffer` che memorizza nel buffer tutti gli input che viene inviato dall'applicazione per l'agente. Per assicurarsi che la rete elabora i messaggi di tutti gli input, l'agente prima di tutto collega i nodi della rete interni e quindi collega l'inizio di questa rete, `connector`, al `_source` (membro dati). In questo modo si garantisce che i messaggi vengano elaborati durante la preparazione della rete.

Poiché la rete in questo esempio è basata sul flusso di dati, piuttosto che nel flusso di controllo, la rete deve comunicare all'agente che ha terminato l'elaborazione di ogni valore di input e che il nodo sentinel abbia ricevuto il relativo valore. Questo esempio Usa un' `countdown_event` oggetto per segnalare che sono stati elaborati tutti i valori di input e una [Concurrency:: event](../../parallel/concrt/reference/event-class.md) oggetto per indicare che il nodo sentinel abbia ricevuto il relativo valore. Il `countdown_event` classe Usa un `event` oggetto per segnalare quando un valore del contatore raggiunge lo zero. Nell'intestazione della rete del flusso di dati lo incrementa ogni volta che si riceve un valore. Ogni nodo terminale della rete decrementa il contatore dopo l'elaborazione del valore di input. Dopo che l'agente di moduli di rete del flusso di dati, è in attesa per il nodo di sentinel impostare il `event` oggetto e per il `countdown_event` oggetto per segnalare che il contatore raggiunge lo zero.

L'esempio seguente mostra le `control_flow_agent`, `dataflow_agent`, e `countdown_event` classi. Il `wmain` funzione crea un `control_flow_agent` e una `dataflow_agent` oggetto e viene utilizzato il `send_values` funzione per inviare una serie di valori casuali per gli agenti.

[!code-cpp[concrt-dataflow-agent#7](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-dataflow-agent_7.cpp)]

Questo esempio produce l'output di esempio seguente:

```Output
Control-flow agent:
There are 500523 negative numbers.
There are 499477 positive numbers.
Dataflow agent:
There are 500523 negative numbers.
There are 499477 positive numbers.
```

### <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `dataflow-agent.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**CL.exe /EHsc del flusso di dati-Agent. cpp**

[[Torna all'inizio](#top)]

##  <a name="logging"></a> Creazione di un agente di registrazione dei messaggi

L'esempio seguente mostra le `log_agent` (classe), che è simile al `dataflow_agent` classe. Il `log_agent` classe implementa un agente di registrazione asincrona che scrive log i messaggi in un file e nella console. Il `log_agent` classe consente all'applicazione classificare i messaggi come informativo, avviso o errore. Consente inoltre all'applicazione di specificare se ogni categoria di log viene scritto un file, la console o entrambi. In questo esempio scrive tutti i messaggi di log in un file e solo i messaggi di errore nella console.

[!code-cpp[concrt-log-filter#1](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-dataflow-agent_8.cpp)]

In questo esempio scrive l'output seguente nella console.

```Output
error: This is a sample error message.
```

Inoltre, questo esempio produce il file di log. txt, che contiene il testo seguente.

```Output
info: ===Logging started.===
warning: This is a sample warning message.
error: This is a sample error message.
info: ===Logging finished.===
```

### <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `log-filter.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**CL.exe /EHsc log-Filter. cpp**

[[Torna all'inizio](#top)]

## <a name="see-also"></a>Vedere anche

[Procedure dettagliate del runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)

