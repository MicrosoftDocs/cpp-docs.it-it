---
title: 'Procedura dettagliata: Creazione di un agente del flusso di dati | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- creating dataflow agents [Concurrency Runtime]
- dataflow agents, creating [Concurrency Runtime]
ms.assetid: 9db5ce3f-c51b-4de1-b79b-9ac2a0cbd130
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 33f7c7cf5e64d2ddf751bb97ee1b617d09df6af3
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="walkthrough-creating-a-dataflow-agent"></a>Procedura dettagliata: Creazione di un agente del flusso di dati
Questo documento viene illustrato come creare applicazioni basate su agente basato su flussi di dati, anziché il flusso di controllo.  
  
 *Flusso di controllo* si riferisce all'ordine di esecuzione di operazioni in un programma. Flusso di controllo viene regolato mediante strutture di controllo, ad esempio istruzioni condizionali, cicli e così via. In alternativa, *flussi di dati* fa riferimento a un modello di programmazione in cui i calcoli vengono eseguiti solo quando sono disponibili tutti i dati necessari. Il modello di programmazione del flusso di dati è correlato al concetto di passaggio dei messaggi, in cui i componenti indipendenti di un programma di comunicano tra loro mediante l'invio di messaggi.  
  
 Agenti asincroni supportano sia il flusso di controllo flusso di dati e modelli di programmazione. Anche se il modello di flusso di controllo è appropriato in molti casi, il modello del flusso di dati è appropriato in altri, ad esempio, quando un agente riceve i dati ed esegue un'azione che è in base al payload dei dati.  
  
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
 Si consideri l'esempio seguente che definisce la `control_flow_agent` classe. La `control_flow_agent` classe agisce sugli tre buffer dei messaggi: un buffer di input e due i buffer di output. Il `run` metodo legge dal buffer del messaggio di origine in un ciclo e utilizza un'istruzione condizionale per indirizzare il flusso dell'esecuzione del programma. L'agente incrementa un contatore per diverso da zero, i valori negativi e viene incrementato di un altro contatore per i valori diversi da zero e positivi. Dopo che l'agente riceve il valore di sentinel pari a zero, invia i valori dei contatori per il buffer dei messaggi di output. Il `negatives` e `positives` metodi consentono all'applicazione di leggere i conteggi dei valori negativi e positivi dall'agente.  
  
 [!code-cpp[concrt-dataflow-agent#1](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-dataflow-agent_1.cpp)]  
  
 Sebbene questo esempio di utilizzo di base del flusso di controllo in un agente, viene illustrato come la natura seriale della programmazione basate sul flusso di controllo. Ogni messaggio deve essere elaborato in sequenza, anche se più messaggi potrebbero essere disponibili nel buffer dei messaggi di input. Il modello di flusso di dati consente di entrambi i rami dell'istruzione condizionale da valutare contemporaneamente. Il modello del flusso di dati consente inoltre di creare reti di messaggistica più complesse che agiscono sui dati appena sarà disponibile.  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="dataflow"></a> Creazione di un agente del flusso di dati di base  
 In questa sezione viene illustrato come convertire il `control_flow_agent` classe per utilizzare il modello del flusso di dati per eseguire la stessa attività.  
  
 L'agente del flusso di dati funziona tramite la creazione di una rete di buffer dei messaggi, ognuno dei quali svolge un ruolo specifico. Alcuni blocchi di messaggi di utilizzare una funzione di filtro per accettare o rifiutare un messaggio in base al relativo payload. Una funzione di filtro garantisce che un blocco di messaggi riceve solo determinati valori.  
  
#### <a name="to-convert-the-control-flow-agent-to-a-dataflow-agent"></a>Per convertire l'agente del flusso di controllo a un agente del flusso di dati  
  
1.  Copiare il corpo del `control_flow_agent` classe a un'altra classe, ad esempio, `dataflow_agent`. In alternativa, è possibile rinominare la `control_flow_agent` classe.  
  
2.  Rimuovere il corpo del ciclo che chiama `receive` dal `run` metodo.  
  
 [!code-cpp[concrt-dataflow-agent#2](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-dataflow-agent_2.cpp)]  
  
3.  Nel `run` (metodo), dopo l'inizializzazione delle variabili `negative_count` e `positive_count`, aggiungere un `countdown_event` oggetto che registra il numero di operazioni attive.  
  
 [!code-cpp[concrt-dataflow-agent#6](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-dataflow-agent_3.cpp)]  
  
     La `countdown_event` classe è illustrata più avanti in questo argomento.  
  
4.  Creare il messaggio di oggetti buffer che farà parte della rete del flusso di dati.  
  
 [!code-cpp[concrt-dataflow-agent#3](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-dataflow-agent_4.cpp)]  
  
5.  Connettere il buffer dei messaggi per formare una rete.  
  
 [!code-cpp[concrt-dataflow-agent#4](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-dataflow-agent_5.cpp)]  
  
6.  Attendere il `event` e `countdown event` gli oggetti da impostare. Questi eventi segnalano che l'agente ha ricevuto il valore di sentinel e che tutte le operazioni vengono completate.  
  
 [!code-cpp[concrt-dataflow-agent#5](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-dataflow-agent_6.cpp)]  
  
 Il diagramma seguente mostra la rete del flusso di dati completo per la `dataflow_agent` classe:  
  
 ![La rete del flusso di dati](../../parallel/concrt/media/concrt_dataflow.png "concrt_dataflow")  
  
 Nella tabella seguente vengono descritti i membri della rete.  
  
|Member|Descrizione|  
|------------|-----------------|  
|`increment_active`|Oggetto [Concurrency:: transformer](../../parallel/concrt/reference/transformer-class.md) che incrementa il numero di eventi attive e passa il valore di input per il resto della rete.|  
|`negatives`, `positives`|[Concurrency:: Call](../../parallel/concrt/reference/call-class.md) gli oggetti che incrementano il numero di numeri e decrementa il contatore degli eventi attivi. Gli oggetti di usare un filtro per accettare i numeri negativi o positivi.|  
|`sentinel`|Oggetto [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) che accetta solo il valore di sentinel zero e decrementa il contatore degli eventi attivi.|  
|`connector`|Oggetto [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md) oggetto che si connette il buffer dei messaggi di origine alla rete interna.|  
  
 Poiché il `run` metodo viene chiamato su un thread separato, altri thread può inviare messaggi alla rete prima che la rete è completamente connesso. Il `_source` membro dati è un `unbounded_buffer` che memorizza nel buffer tutti gli input che viene inviato dall'applicazione per l'agente. Per assicurarsi che la rete elabora i messaggi di tutti gli input, l'agente collega innanzitutto i nodi della rete interni e quindi collega l'inizio di questa rete, `connector`al `_source` (membro dati). In questo modo si garantisce che i messaggi vengano elaborati durante la preparazione della rete.  
  
 Poiché la rete in questo esempio è basata sul flusso di dati, anziché nel flusso di controllo, la rete deve comunicare all'agente che ha terminato l'elaborazione di ogni valore di input e che il nodo sentinel ha ricevuto il relativo valore. Questo esempio viene utilizzato un `countdown_event` oggetto per segnalare che sono stati elaborati tutti i valori di input e un [Concurrency:: event](../../parallel/concrt/reference/event-class.md) oggetto per indicare che il nodo sentinel ha ricevuto il relativo valore. Il `countdown_event` classe Usa un `event` oggetto per segnalare quando un valore del contatore raggiunge lo zero. L'intestazione della rete del flusso di dati incrementa il contatore ogni volta che si riceve un valore. Ogni nodo terminale della rete decrementa il contatore al termine dell'elaborazione del valore di input. Dopo che l'agente di moduli di rete del flusso di dati, è in attesa per il nodo sentinel impostare il `event` oggetto e per il `countdown_event` oggetto per segnalare che il contatore raggiunge lo zero.  
  
 Nell'esempio seguente il `control_flow_agent`, `dataflow_agent`, e `countdown_event` classi. Il `wmain` funzione crea un `control_flow_agent` e `dataflow_agent` oggetto e viene utilizzato il `send_values` funzione per inviare una serie di valori casuali agli agenti.  
  
 [!code-cpp[concrt-dataflow-agent#7](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-dataflow-agent_7.cpp)]  
  
 Questo esempio produce il seguente output di esempio:  
  
```Output  
Control-flow agent:  
There are 500523 negative numbers.  
There are 499477 positive numbers.  
Dataflow agent:  
There are 500523 negative numbers.  
There are 499477 positive numbers.  
```  
  
### <a name="compiling-the-code"></a>Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `dataflow-agent.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc del flusso di dati-Agent. cpp**  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="logging"></a> Creazione di un agente di registrazione dei messaggi  
 Nell'esempio seguente il `log_agent` (classe), che è simile al `dataflow_agent` classe. Il `log_agent` implementa un agente di registrazione asincrona che scrive log i messaggi in un file e nella console. La `log_agent` classe consente all'applicazione di suddividere i messaggi come informativo, avviso o errore. Consente inoltre all'applicazione di specificare se ogni categoria di log viene scritto un file, la console o entrambi. In questo esempio scrive tutti i messaggi di log in un file e solo i messaggi di errore nella console.  
  
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
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `log-filter.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc log-Filter. cpp**  
  
 [[Torna all'inizio](#top)]  
  
## <a name="see-also"></a>Vedere anche  
 [Procedure dettagliate del runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)

