---
title: 'Procedura dettagliata: Creazione di un agente del flusso di dati'
ms.date: 04/25/2019
helpviewer_keywords:
- creating dataflow agents [Concurrency Runtime]
- dataflow agents, creating [Concurrency Runtime]
ms.assetid: 9db5ce3f-c51b-4de1-b79b-9ac2a0cbd130
ms.openlocfilehash: fa19d965a35909dfefc5f586c772bc9b4565e814
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77142965"
---
# <a name="walkthrough-creating-a-dataflow-agent"></a>Procedura dettagliata: Creazione di un agente del flusso di dati

In questo documento viene illustrato come creare applicazioni basate su agenti basate sul flusso di controllo, anziché sul flusso di controllo.

Il *flusso di controllo* si riferisce all'ordine di esecuzione delle operazioni in un programma. Il flusso di controllo viene regolato usando strutture di controllo come istruzioni condizionali, cicli e così via. In alternativa, il *flusso* di dati fa riferimento a un modello di programmazione in cui i calcoli vengono eseguiti solo quando sono disponibili tutti i dati necessari. Il modello di programmazione del flusso di data è correlato al concetto di passaggio dei messaggi, in cui i componenti indipendenti di un programma comunicano tra loro tramite l'invio di messaggi.

Gli agenti asincroni supportano i modelli di programmazione del flusso di controllo e del flusso di tempo. Sebbene il modello di flusso di controllo sia appropriato in molti casi, il modello di flusso di dati è appropriato in altri, ad esempio quando un agente riceve i dati ed esegue un'azione basata sul payload di tali dati.

## <a name="prerequisites"></a>Prerequisites

Prima di iniziare questa procedura dettagliata, leggere i documenti seguenti:

- [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)

- [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)

- [Procedura: Usare il filtro di blocco dei messaggi](../../parallel/concrt/how-to-use-a-message-block-filter.md)

## <a name="top"></a> Sezioni

Questa procedura dettagliata contiene le sezioni seguenti:

- [Creazione di un agente del flusso di controllo di base](#control-flow)

- [Creazione di un agente del flusso di elementi di base](#dataflow)

- [Creazione di un agente di registrazione messaggi](#logging)

## <a name="control-flow"></a>Creazione di un agente del flusso di controllo di base

Si consideri l'esempio seguente che definisce la classe `control_flow_agent`. La classe `control_flow_agent` agisce su tre buffer di messaggi: un buffer di input e due buffer di output. Il metodo `run` legge dal buffer dei messaggi di origine in un ciclo e usa un'istruzione condizionale per indirizzare il flusso dell'esecuzione del programma. L'agente incrementa un contatore per i valori negativi diversi da zero e incrementa un altro contatore per i valori positivi diversi da zero. Dopo che l'agente ha ricevuto il valore sentinella pari a zero, invia i valori dei contatori ai buffer dei messaggi di output. I metodi `negatives` e `positives` consentono all'applicazione di leggere i conteggi dei valori negativi e positivi dall'agente.

[!code-cpp[concrt-dataflow-agent#1](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-dataflow-agent_1.cpp)]

Sebbene in questo esempio venga utilizzato il flusso di controllo di base di un agente, viene illustrata la natura seriale della programmazione basata sul flusso di controllo. Ogni messaggio deve essere elaborato in sequenza, anche se possono essere disponibili più messaggi nel buffer dei messaggi di input. Il modello di flusso di tempo consente la valutazione simultanea di entrambi i rami dell'istruzione condizionale. Il modello di flusso di dati consente inoltre di creare reti di messaggistica più complesse che agiscono sui dati quando diventano disponibili.

[[Torna all'inizio](#top)]

## <a name="dataflow"></a>Creazione di un agente del flusso di elementi di base

Questa sezione illustra come convertire la classe `control_flow_agent` per usare il modello di flusso di lavoro per eseguire la stessa attività.

L'agente del flusso di flussi di lavoro consente di creare una rete di buffer di messaggi, ciascuno dei quali svolge uno scopo specifico. In alcuni blocchi di messaggi viene utilizzata una funzione di filtro per accettare o rifiutare un messaggio sulla base del payload. Una funzione di filtro garantisce che un blocco di messaggi riceva solo determinati valori.

#### <a name="to-convert-the-control-flow-agent-to-a-dataflow-agent"></a>Per convertire l'agente del flusso di controllo in un agente del flusso di flussi

1. Copiare il corpo della classe `control_flow_agent` in un'altra classe, ad esempio `dataflow_agent`. In alternativa, è possibile rinominare la classe `control_flow_agent`.

1. Rimuovere il corpo del ciclo che chiama `receive` dal metodo `run`.

[!code-cpp[concrt-dataflow-agent#2](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-dataflow-agent_2.cpp)]

1. Nel metodo `run`, dopo l'inizializzazione delle variabili `negative_count` e `positive_count`, aggiungere un oggetto `countdown_event` che tenga traccia del numero di operazioni attive.

[!code-cpp[concrt-dataflow-agent#6](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-dataflow-agent_3.cpp)]

   La classe `countdown_event` viene illustrata più avanti in questo argomento.

1. Creare gli oggetti del buffer dei messaggi che parteciperanno alla rete del flusso di flussi.

[!code-cpp[concrt-dataflow-agent#3](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-dataflow-agent_4.cpp)]

1. Connettere i buffer dei messaggi per formare una rete.

[!code-cpp[concrt-dataflow-agent#4](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-dataflow-agent_5.cpp)]

1. Attendere che vengano impostati gli oggetti `event` e `countdown event`. Questi eventi segnalano che l'agente ha ricevuto il valore sentinel e che tutte le operazioni sono state completate.

[!code-cpp[concrt-dataflow-agent#5](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-dataflow-agent_6.cpp)]

Il diagramma seguente mostra la rete del flusso di codice completa per la classe `dataflow_agent`:

![Rete del flusso di flussi](../../parallel/concrt/media/concrt_dataflow.png "Rete del flusso di dati")

Nella tabella seguente vengono descritti i membri della rete.

|Membro|Descrizione|
|------------|-----------------|
|`increment_active`|Oggetto [Concurrency:: Transformer](../../parallel/concrt/reference/transformer-class.md) che incrementa il contatore degli eventi attivi e passa il valore di input al resto della rete.|
|`negatives`, `positives`|oggetti [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) che incrementano il numero di numeri e decrementano il contatore degli eventi attivi. Ogni oggetto utilizza un filtro per accettare numeri negativi o numeri positivi.|
|`sentinel`|Oggetto [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) che accetta solo il valore sentinel zero e decrementa il contatore di eventi attivi.|
|`connector`|Oggetto [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md) che connette il buffer dei messaggi di origine alla rete interna.|

Poiché il metodo `run` viene chiamato su un thread separato, altri thread possono inviare messaggi alla rete prima che la rete sia completamente connessa. Il membro dati `_source` è un oggetto `unbounded_buffer` che memorizza nel buffer tutti gli input inviati dall'applicazione all'agente. Per assicurarsi che la rete elabori tutti i messaggi di input, l'agente collega prima di tutto i nodi interni della rete, quindi collega l'avvio di tale rete, `connector`al membro dati `_source`. Ciò garantisce che i messaggi non vengano elaborati durante il formato della rete.

Poiché la rete in questo esempio è basata sul flusso di dati, anziché sul flusso di controllo, la rete deve comunicare con l'agente che ha completato l'elaborazione di ogni valore di input e che il nodo sentinella ha ricevuto il relativo valore. In questo esempio viene utilizzato un oggetto `countdown_event` per segnalare che tutti i valori di input sono stati elaborati e un oggetto [Concurrency:: Event](../../parallel/concrt/reference/event-class.md) per indicare che il nodo Sentinel ha ricevuto il relativo valore. La classe `countdown_event` usa un oggetto `event` per segnalare quando un valore del contatore raggiunge lo zero. L'intestazione della rete del flusso di flussi incrementa il contatore ogni volta che riceve un valore. Ogni nodo terminale della rete decrementa il contatore dopo l'elaborazione del valore di input. Dopo che l'agente forma la rete del flusso di flussi, attende che il nodo Sentinel imposti l'oggetto `event` e per l'oggetto `countdown_event` segnali che il contatore ha raggiunto lo zero.

Nell'esempio seguente vengono illustrate le classi `control_flow_agent`, `dataflow_agent`e `countdown_event`. La funzione `wmain` crea una `control_flow_agent` e un oggetto `dataflow_agent` e usa la funzione `send_values` per inviare una serie di valori casuali agli agenti.

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

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `dataflow-agent.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

**CL. exe/EHsc dataflow-agent. cpp**

[[Torna all'inizio](#top)]

## <a name="logging"></a>Creazione di un agente di registrazione messaggi

Nell'esempio seguente viene illustrata la classe `log_agent`, simile alla classe `dataflow_agent`. La classe `log_agent` implementa un agente di registrazione asincrono che scrive i messaggi di log in un file e nella console. La classe `log_agent` consente all'applicazione di categorizzare i messaggi come informativi, di avviso o di errore. Consente inoltre all'applicazione di specificare se ogni categoria di log viene scritta in un file, nella console o in entrambi. Questo esempio scrive tutti i messaggi di log in un file e solo i messaggi di errore nella console.

[!code-cpp[concrt-log-filter#1](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-dataflow-agent_8.cpp)]

Questo esempio scrive l'output seguente nella console.

```Output
error: This is a sample error message.
```

Questo esempio genera anche il file log. txt, che contiene il testo seguente.

```Output
info: ===Logging started.===
warning: This is a sample warning message.
error: This is a sample error message.
info: ===Logging finished.===
```

### <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `log-filter.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

**CL. exe/EHsc log-Filter. cpp**

[[Torna all'inizio](#top)]

## <a name="see-also"></a>Vedere anche

[Procedure dettagliate del runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)
