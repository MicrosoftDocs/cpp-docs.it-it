---
title: "Procedura dettagliata: Creazione di un agente del flusso di dati | Microsoft Docs"
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
  - "creazione di agenti di flusso dei dati [Runtime di concorrenza]"
  - "agenti del flusso di dati, creazione [Runtime di concorrenza]"
ms.assetid: 9db5ce3f-c51b-4de1-b79b-9ac2a0cbd130
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# Procedura dettagliata: Creazione di un agente del flusso di dati
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo documento viene illustrato come creare le applicazioni basate sugli agenti in base al flusso di dati, anziché al flusso di controllo.  
  
 Il *flusso di controllo* si riferisce all'ordine di esecuzione delle operazioni in un programma.  Il flusso di controllo viene regolato mediante strutture di controllo come istruzioni condizionali, cicli e così via.  In alternativa, il *flusso di dati* si riferisce a un modello di programmazione in cui i calcoli vengono eseguiti solo quando tutti i dati richiesti sono disponibili.  Il modello di programmazione del flusso di dati è correlato al concetto di passaggio dei messaggi, in cui i componenti indipendenti di un programma comunicano con un altro programma inviando messaggi.  
  
 Gli agenti asincroni supportano entrambi i modelli di programmazione del flusso di dati e del flusso di controllo.  Sebbene il modello del flusso di controllo sia appropriato in molti casi, il modello del flusso di dati risulta appropriato in altri, ad esempio quando un agente riceve i dati ed esegue un'azione basata sul payload di tali dati.  
  
## Prerequisiti  
 Prima di iniziare questa procedura dettagliata, leggere i documenti riportati di seguito.  
  
-   [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)  
  
-   [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)  
  
-   [Procedura: Usare il filtro di blocco dei messaggi](../../parallel/concrt/how-to-use-a-message-block-filter.md)  
  
##  <a name="top"></a> Sezioni  
 In questa procedura dettagliata sono contenute le sezioni seguenti:  
  
-   [Creazione di un agente di base del flusso di controllo](#control-flow)  
  
-   [Creazione di un agente di base del flusso di dati](#dataflow)  
  
-   [Creazione di un agente di registrazione dei messaggi](#logging)  
  
##  <a name="control-flow"></a> Creazione di un agente di base del flusso di controllo  
 Si consideri l'esempio seguente che definisce la classe `control_flow_agent`.  La classe `control_flow_agent` agisce su tre buffer dei messaggi: un buffer di input e due buffer di output.  Il metodo `run` legge i dati dal buffer dei messaggi di origine in un ciclo e utilizza un'istruzione condizionale per indirizzare il flusso di esecuzione del programma.  L'agente incrementa un contatore per valori negativi diversi da zero e incrementa un altro contatore per valori positivi diversi da zero.  Dopo aver ricevuto il valore sentinel zero, l'agente invia i valori dei contatori nel buffer dei messaggi di output.  I metodi `positives` e `negatives` consentono all'applicazione di leggere i conteggi dei valori negativi e positivi dall'agente.  
  
 [!code-cpp[concrt-dataflow-agent#1](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-a-dataflow-agent_1.cpp)]  
  
 Sebbene in questo esempio venga illustrato l'utilizzo di base del flusso di controllo in un agente, viene indicata la natura seriale della programmazione basata sul flusso di controllo.  Ogni messaggio deve essere elaborato in sequenza, anche se nel buffer dei messaggi di input potrebbero essere disponibili più messaggi.  Il modello del flusso di dati consente la valutazione simultanea di entrambi i rami dell'istruzione condizionale.  Il modello del flusso di dati consente inoltre di creare reti di messaggistica più complesse che agiscono sui dati man mano che diventano disponibili.  
  
 \[[Top](#top)\]  
  
##  <a name="dataflow"></a> Creazione di un agente di base del flusso di dati  
 In questa sezione viene illustrato come convertire la classe `control_flow_agent` in modo da utilizzare il modello del flusso di dati per eseguire la stessa attività.  
  
 L'agente del flusso di dati prevede la creazione di una rete di buffer dei messaggi, ciascuno dei quali viene utilizzato per uno scopo specifico.  Alcuni blocchi di messaggi utilizzano una funzione di filtro per accettare o rifiutare un messaggio in base al relativo payload.  Le funzioni di filtro garantiscono che un blocco di messaggi riceva solo determinati valori.  
  
#### Per convertire l'agente del flusso di controllo in un agente del flusso di dati  
  
1.  Copiare il corpo della classe `control_flow_agent` in un'altra classe, ad esempio `dataflow_agent`.  In alternativa, è possibile rinominare la classe `control_flow_agent`.  
  
2.  Rimuovere il corpo del ciclo che chiama `receive` dal metodo `run`.  
  
     [!code-cpp[concrt-dataflow-agent#2](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-a-dataflow-agent_2.cpp)]  
  
3.  Dopo l'inizializzazione delle variabili `negative_count` e `positive_count` aggiungere nel metodo `run` un oggetto `countdown_event` che tiene traccia del conteggio delle operazioni attive.  
  
     [!code-cpp[concrt-dataflow-agent#6](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-a-dataflow-agent_3.cpp)]  
  
     La classe `countdown_event` viene illustrata più avanti in questo argomento.  
  
4.  Creare gli oggetti del buffer dei messaggi che prenderanno parte alla rete del flusso di dati.  
  
     [!code-cpp[concrt-dataflow-agent#3](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-a-dataflow-agent_4.cpp)]  
  
5.  Connettere i buffer dei messaggi per formare una rete.  
  
     [!code-cpp[concrt-dataflow-agent#4](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-a-dataflow-agent_5.cpp)]  
  
6.  Attendere l'impostazione degli oggetti `countdown event` e `event`.  Questi eventi segnalano che l'agente ha ricevuto il valore sentinel e che tutte le operazioni sono state completate.  
  
     [!code-cpp[concrt-dataflow-agent#5](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-a-dataflow-agent_6.cpp)]  
  
 Nel diagramma seguente viene illustrata la rete del flusso di dati completa per la classe `dataflow_agent`:  
  
 ![Rete del flusso di dati](../../parallel/concrt/media/concrt_dataflow.png "ConcRT\_Dataflow")  
  
 Nella tabella seguente sono descritti i membri della rete.  
  
|Membro|Descrizione|  
|------------|-----------------|  
|`increment_active`|Oggetto [concurrency::transformer](../../parallel/concrt/reference/transformer-class.md) che incrementa il contatore degli eventi attivo e passa il valore di input al resto della rete.|  
|`negatives`, `positives`|Oggetti [concurrency::call](../../parallel/concrt/reference/call-class.md) che incrementano il conteggio dei numeri e decrementano il contatore degli eventi attivo.  Gli oggetti utilizzano ciascuno un filtro per accettare i numeri negativi o i numeri positivi.|  
|`sentinel`|Oggetto [concurrency::call](../../parallel/concrt/reference/call-class.md) che accetta solo il valore sentinel zero e decrementa il contatore degli eventi attivo.|  
|`connector`|Oggetto [concurrency::unbounded\_buffer](../Topic/unbounded_buffer%20Class.md) che connette il buffer dei messaggi di origine alla rete interna.|  
  
 Poiché il metodo `run` viene chiamato in un thread separato, gli altri thread possono inviare messaggi alla rete prima che la rete sia completamente connessa.  Il membro dati `_source` è un oggetto `unbounded_buffer` che memorizza nel buffer l'input inviato dall'applicazione all'agente.  Per assicurarsi che la rete elabori tutti i messaggi di input, l'agente collega innanzitutto i nodi interni della rete e quindi collega l'inizio di tale rete, `connector`, al membro dati `_source`.  In questo modo si garantisce che i messaggi non vengano elaborati durante la preparazione della rete.  
  
 Poiché la rete in questo esempio è basata sul flusso di dati anziché sul flusso di controllo, la rete deve comunicare all'agente di aver completato l'elaborazione di ogni valore di input e che il nodo sentinel ha ricevuto il relativo valore.  In questo esempio viene utilizzato un oggetto `countdown_event` per segnalare che tutti i valori di input sono stati elaborati e un oggetto [concurrency::event](../../parallel/concrt/reference/event-class.md) per indicare che il nodo sentinel ha ricevuto il relativo valore.  La classe `countdown_event` utilizza un oggetto `event` per segnalare quando un valore del contatore raggiunge lo zero.  L'intestazione della rete del flusso di dati incrementa il contatore ogni volta che riceve un valore.  Ogni nodo terminale della rete decrementa il contatore dopo l'elaborazione del valore di input.  Dopo aver preparato la rete del flusso di dati, l'agente attende che il nodo sentinel imposti l'oggetto `event` e che l'oggetto `countdown_event` segnali che il contatore ha raggiunto lo zero.  
  
 Nell'esempio seguente vengono illustrate le classi `control_flow_agent`, `dataflow_agent` e `countdown_event`.  La funzione `wmain` crea un oggetto `control_flow_agent` e `dataflow_agent` e utilizza la funzione `send_values` per inviare una serie di valori casuali agli agenti.  
  
 [!code-cpp[concrt-dataflow-agent#7](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-a-dataflow-agent_7.cpp)]  
  
 Questo esempio produce l'output seguente:  
  
  **Control\-flow agent:**  
**There are 500523 negative numbers.**  
**There are 499477 positive numbers.**  
**Dataflow agent:**  
**There are 500523 negative numbers.**  
**There are 499477 positive numbers.**   
### Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio o incollarlo in un file denominato `dataflow-agent.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe \/EHsc dataflow\-agent.cpp**  
  
 \[[Top](#top)\]  
  
##  <a name="logging"></a> Creazione di un agente di registrazione dei messaggi  
 Nell'esempio seguente viene illustrata la classe `log_agent`, analoga alla classe `dataflow_agent`.  La classe `log_agent` implementa un agente di registrazione asincrona che scrive i messaggi di log in un file e sulla console.  La classe `log_agent` consente all'applicazione di suddividere i messaggi in categorie: informativi, di avviso o di errore.  Consente inoltre all'applicazione di specificare se ogni categoria del log viene scritta in un file, nella console o in entrambi.  In questo esempio vengono scritti tutti i messaggi di log in un file e solo i messaggi di errore nella console.  
  
 [!code-cpp[concrt-log-filter#1](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-a-dataflow-agent_8.cpp)]  
  
 L'esempio scrive sulla console l'output seguente.  
  
  **error: This is a sample error message.** Questo esempio crea inoltre il file log.txt, che contiene il testo seguente.  
  
  **info: \=\=\=Logging started.\=\=\=**  
**warning: This is a sample warning message.**  
**error: This is a sample error message.**  
**info: \=\=\=Logging finished.\=\=\=**   
### Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto Visual Studio oppure incollarlo in un file denominato `log-filter.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe \/EHsc log\-filter.cpp**  
  
 \[[Top](#top)\]  
  
## Vedere anche  
 [Procedure dettagliate del runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)