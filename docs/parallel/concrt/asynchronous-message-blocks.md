---
title: Blocchi dei messaggi asincroni
ms.date: 11/04/2016
helpviewer_keywords:
- non-greedy join [Concurrency Runtime]
- asynchronous message blocks
- greedy join [Concurrency Runtime]
ms.assetid: 79c456c0-1692-480c-bb67-98f2434c1252
ms.openlocfilehash: de6a433ab733207d5c56b46e693837056a0cd8b1
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62237077"
---
# <a name="asynchronous-message-blocks"></a>Blocchi dei messaggi asincroni

La libreria di agenti offre diversi tipi di blocco dei messaggi che consentono di propagare i messaggi tra i componenti dell'applicazione in modo thread-safe. Questi tipi di blocco dei messaggi vengono spesso utilizzati con le diverse routine di passaggio dei messaggi, ad esempio [Concurrency:: Send](reference/concurrency-namespace-functions.md#send), [Concurrency:: asend](reference/concurrency-namespace-functions.md#asend), [Concurrency:: Receive](reference/concurrency-namespace-functions.md#receive), e [Concurrency:: try_receive](reference/concurrency-namespace-functions.md#try_receive). Per altre informazioni sulle routine definite dalla libreria di agenti di passaggio messaggi, vedere [funzioni di passaggio di messaggi](../../parallel/concrt/message-passing-functions.md).

##  <a name="top"></a> Sezioni

Di seguito sono elencate le diverse sezioni di questo argomento:

- [Origini e destinazioni](#sources_and_targets)

- [Propagazione dei messaggi](#propagation)

- [Panoramica dei tipi di blocchi di messaggio](#overview)

- [Classe unbounded_buffer](#unbounded_buffer)

- [Classe overwrite_buffer](#overwrite_buffer)

- [Classe single_assignment](#single_assignment)

- [Classe call](#call)

- [Classe transformer](#transformer)

- [Classe choice](#choice)

- [Classi di join e multitype_join](#join)

- [Classe timer](#timer)

- [Filtro dei messaggi](#filtering)

- [Prenotazione dei messaggi](#reservation)

##  <a name="sources_and_targets"></a> Origini e destinazioni

Origini e destinazioni sono due partecipanti importanti nel passaggio dei messaggi. Oggetto *origine* fa riferimento a un endpoint di comunicazione che invia messaggi. Oggetto *destinazione* fa riferimento a un endpoint di comunicazione che riceve i messaggi. È possibile considerare un'origine come endpoint da cui si legge e una destinazione come endpoint che si scrive in. Le applicazioni connettono origini e destinazioni di insieme per creare *le reti di messaggistica*.

La libreria di agenti usa due classi astratte per rappresentare le origini e destinazioni: [Concurrency:: ISource](../../parallel/concrt/reference/isource-class.md) e [ITarget](../../parallel/concrt/reference/itarget-class.md). Tipi di blocchi di messaggio che agiscono come origini derivano da `ISource`; tipi di blocchi di messaggio che agiscono come destinazioni di derivano da `ITarget`. Tipi di blocchi di messaggio che agiscono come origini e destinazioni di derivano da entrambe `ISource` e `ITarget`.

[[Torna all'inizio](#top)]

##  <a name="propagation"></a> Propagazione dei messaggi

*La propagazione dei messaggi* è l'atto di inviare un messaggio da un componente a un altro. Quando un blocco di messaggio viene offerto un messaggio, è possibile accettare, rifiutare o posticipare il messaggio. Ogni tipo di blocco di messaggio archivia e trasmette i messaggi in diversi modi. Ad esempio, il `unbounded_buffer` classe archivia un numero illimitato di messaggi, il `overwrite_buffer` classe archivia un solo messaggio alla volta e la classe transformer archivia una versione modificata di ogni messaggio. Questi tipi di blocchi di messaggio sono descritti in dettaglio più avanti in questo documento.

Quando un blocco di messaggio viene accettato un messaggio, può facoltativamente eseguire operazioni e, se il blocco di messaggio è un'origine, passare il messaggio risulta a un altro membro della rete. Un blocco di messaggi è possibile usare una funzione di filtro per rifiutare i messaggi che non desidera ricevere. Filtri sono descritti in dettaglio più avanti in questo argomento, nella sezione [il filtro messaggi](#filtering). Un blocco di messaggi che posticipa un messaggio può riservare tale messaggio e usarla in un secondo momento. La prenotazione dei messaggi è descritto in dettaglio più avanti in questo argomento, nella sezione [prenotazione dei messaggi](#reservation).

La libreria di agenti consente ai blocchi di messaggi in modo asincrono o passare in modo sincrono i messaggi. Quando si passa un messaggio a un blocco di messaggio in modo sincrono, ad esempio, utilizzando il `send` funzione, il runtime blocca il contesto corrente fino a quando il blocco di destinazione accetta o rifiuta il messaggio. Quando si passa un messaggio a un blocco di messaggio in modo asincrono, ad esempio, usando il `asend` funzione, il runtime offre il messaggio alla destinazione e se la destinazione accetta il messaggio, il runtime consente di pianificare un'attività asincrona che propaga il messaggio per il ricevitore. Il runtime Usa le attività leggere per propagare i messaggi in modo cooperativo. Per altre informazioni sulle attività leggera, vedere [utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md).

Le applicazioni connettono origini e destinazioni di insieme per creare le reti di messaggistica. In genere, si collega la rete e la chiamata `send` o `asend` per passare i dati alla rete. Per connettere un blocco di messaggio di origine a una destinazione, chiama il [concurrency::ISource::link_target](reference/isource-class.md#link_target) (metodo). Per disconnettere un blocco di origine da una destinazione, chiamare il [concurrency::ISource::unlink_target](reference/isource-class.md#unlink_target) (metodo). Per disconnettere un blocco di origine da tutte le rispettive destinazioni, chiamare il [concurrency::ISource::unlink_targets](reference/isource-class.md#unlink_targets) (metodo). Quando uno dei tipi di blocchi di messaggio predefinite lascia l'ambito o viene eliminato definitivamente, viene automaticamente disconnesso da tutti i blocchi di destinazione. Alcuni tipi di blocchi di messaggio limitano il numero massimo di destinazioni che possono essere scritti in. La sezione seguente descrive le restrizioni applicabili ai tipi di blocchi di messaggio predefinite.

[[Torna all'inizio](#top)]

##  <a name="overview"></a> Panoramica dei tipi di blocchi di messaggio

Nella tabella seguente descrive brevemente il ruolo dei tipi di blocco dei messaggi importanti.

[unbounded_buffer](#unbounded_buffer)<br/>
Archivia una coda di messaggi.

[overwrite_buffer](#overwrite_buffer)<br/>
Archivia un messaggio che può essere scritti e letti dal più volte.

[single_assignment](#single_assignment)<br/>
Archivia un messaggio che può essere scritto una sola volta e leggervi più volte.

[call](#call)<br/>
Esegue il lavoro quando viene ricevuto un messaggio.

[transformer](#transformer)<br/>
Esegue il lavoro quando riceve i dati e invia il risultato del lavoro a un altro blocco di destinazione. Il `transformer` classe può agire su diversi tipi di input e output.

[choice](#choice)<br/>
Seleziona il primo messaggio disponibile da un set di origini.

[join e a più tipi](#join)<br/>
Attendere che tutti i messaggi essere ricevuti da un set di origini e quindi combinare i messaggi in un messaggio per un altro blocco di messaggio.

[timer](#timer)<br/>
Invia un messaggio a un blocco di destinazione a intervalli regolari.

Questi tipi di blocco dei messaggi hanno caratteristiche diverse che li rendono utili in situazioni diverse. Queste sono alcune delle caratteristiche:

- *Tipo di propagazione*: Indica se il blocco di messaggi funge da un'origine dei dati, un destinatario di dati o entrambi.

- *Ordinamento dei messaggi*: Indica se il blocco di messaggio mantiene l'ordine originale in cui i messaggi vengono inviati o ricevuti. Ogni tipo di blocco di messaggio predefinite mantiene l'ordine originale in cui invia o riceve messaggi.

- *Conteggio di origine*: Il numero massimo di origini che può leggere il blocco di messaggi.

- *Numero di destinazione*: Il numero massimo di destinazioni in cui è possibile scrivere il blocco di messaggi.

La tabella seguente illustra queste caratteristiche correlazione tra i vari tipi di blocco dei messaggi.

|Tipo di blocco di messaggio|Tipo di propagazione (origine, destinazione o entrambi)|Messaggio di ordine (Ordered o Unordered)|Conteggio di origine|Numero di destinazione|
|------------------------|--------------------------------------------------|-----------------------------------------------|------------------|------------------|
|`unbounded_buffer`|Entrambi|Ordered|Non associato|Non associato|
|`overwrite_buffer`|Entrambi|Ordered|Non associato|Non associato|
|`single_assignment`|Entrambi|Ordered|Non associato|Non associato|
|`call`|destinazione|Ordered|Non associato|Non applicabile|
|`transformer`|Entrambi|Ordered|Non associato|1|
|`choice`|Entrambi|Ordered|10|1|
|`join`|Entrambi|Ordered|Non associato|1|
|`multitype_join`|Entrambi|Ordered|10|1|
|`timer`|Source|Non applicabile|Non applicabile|1|

Le sezioni seguenti descrivono i tipi di blocco dei messaggi in modo più dettagliato.

[[Torna all'inizio](#top)]

##  <a name="unbounded_buffer"></a> Classe unbounded_buffer

Il [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md) classe rappresenta una struttura di messaggistica asincrona per utilizzo generico. Questa classe archivia una coda di messaggi FIFO (First In, First Out) che possono essere letti da più destinazioni o in cui possono scrivere più origini. Quando una destinazione riceve un messaggio da un `unbounded_buffer` dell'oggetto, il messaggio viene rimosso dalla coda di messaggi. Pertanto, anche se un `unbounded_buffer` oggetto può avere più destinazioni, ogni messaggio verrà ricevuto da una sola destinazione. La classe `unbounded_buffer` è utile quando si vogliono passare più messaggi a un altro componente e tale componente deve ricevere ogni messaggio.

### <a name="example"></a>Esempio

L'esempio seguente mostra la struttura di base dell'uso con il `unbounded_buffer` classe. Questo esempio invia tre valori per un `unbounded_buffer` dell'oggetto e legge quindi questi valori nuovamente dallo stesso oggetto.

[!code-cpp[concrt-unbounded_buffer-structure#1](../../parallel/concrt/codesnippet/cpp/asynchronous-message-blocks_1.cpp)]

Questo esempio produce il seguente output:

```Output
334455
```

Per un esempio completo che illustra come usare il `unbounded_buffer` classe, vedere [come: Implementare vari modelli Producer-Consumer](../../parallel/concrt/how-to-implement-various-producer-consumer-patterns.md).

[[Torna all'inizio](#top)]

##  <a name="overwrite_buffer"></a> Classe overwrite_buffer

Il [Concurrency:: overwrite_buffer](../../parallel/concrt/reference/overwrite-buffer-class.md) classe è simile al `unbounded_buffer` classe, con la differenza che un `overwrite_buffer` oggetto archivia un solo messaggio. Inoltre, quando una destinazione riceve un messaggio da un `overwrite_buffer` dell'oggetto, tale messaggio non viene rimosso dal buffer. Pertanto, più destinazioni riceveranno una copia del messaggio.

Il `overwrite_buffer` classe è utile quando si desidera passare più messaggi a un altro componente, ma il componente necessita solo del valore più recente. Questa classe è utile anche quando si vuole trasmettere un messaggio a più componenti.

### <a name="example"></a>Esempio

L'esempio seguente mostra la struttura di base dell'uso con il `overwrite_buffer` classe. Questo esempio invia tre valori per un `overwrite _buffer` dell'oggetto e quindi legge il valore corrente dall'oggetto stesso tre volte. Questo esempio è simile all'esempio per il `unbounded_buffer` classe. Tuttavia, il `overwrite_buffer` classe archivia un solo messaggio. Inoltre, il runtime non rimuove il messaggio da un `overwrite_buffer` dopo la lettura dell'oggetto.

[!code-cpp[concrt-overwrite_buffer-structure#1](../../parallel/concrt/codesnippet/cpp/asynchronous-message-blocks_2.cpp)]

Questo esempio produce il seguente output:

```Output
555555
```

Per un esempio completo che illustra come usare il `overwrite_buffer` classe, vedere [come: Implementare vari modelli Producer-Consumer](../../parallel/concrt/how-to-implement-various-producer-consumer-patterns.md).

[[Torna all'inizio](#top)]

##  <a name="single_assignment"></a> Classe single_assignment

Il [Concurrency:: single_assignment](../../parallel/concrt/reference/single-assignment-class.md) classe è simile al `overwrite_buffer` classe, con la differenza che un `single_assignment` oggetto può essere scritto una sola volta. Come per la classe `overwrite_buffer`, quando da una destinazione riceve un messaggio da un oggetto `single_assignment`, il messaggio viene rimosso dalla coda di messaggi. Pertanto, più destinazioni riceveranno una copia del messaggio. Il `single_assignment` classe è utile quando si vuole trasmettere un messaggio a più componenti.

### <a name="example"></a>Esempio

L'esempio seguente mostra la struttura di base dell'uso con il `single_assignment` classe. Questo esempio invia tre valori per un `single_assignment` dell'oggetto e quindi legge il valore corrente dall'oggetto stesso tre volte. Questo esempio è simile all'esempio per il `overwrite_buffer` classe. Sebbene sia la `overwrite_buffer` e `single_assignment` classi di archiviano un singolo messaggio, il `single_assignment` classe può essere scritto una sola volta.

[!code-cpp[concrt-single_assignment-structure#1](../../parallel/concrt/codesnippet/cpp/asynchronous-message-blocks_3.cpp)]

Questo esempio produce il seguente output:

```Output
333333
```

Per un esempio completo che illustra come usare il `single_assignment` classe, vedere [procedura dettagliata: Implementazione di future](../../parallel/concrt/walkthrough-implementing-futures.md).

[[Torna all'inizio](#top)]

##  <a name="call"></a> Classe Call

Il [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) classe agisce come un ricevitore di messaggi che esegue una funzione lavoro alla ricezione dei dati. Questa funzione di lavoro può essere un'espressione lambda, un oggetto funzione o un puntatore a funzione. Oggetto `call` oggetto si comporta in modo diverso da una chiamata di funzione ordinario in quanto opera in parallelo con altri componenti che inviano messaggi ad esso. Se un `call` oggetto sta eseguendo un'operazione quando viene ricevuto un messaggio, il messaggio viene aggiunto a una coda. Ogni `call` Elabora oggetti in coda i messaggi nell'ordine in cui vengono ricevuti.

### <a name="example"></a>Esempio

L'esempio seguente mostra la struttura di base dell'uso con il `call` classe. Questo esempio viene creato un `call` oggetto stampato il valore ricevuto nella console. L'esempio invia quindi i tre valori per il `call` oggetto. Poiché il `call` oggetto elabora i messaggi in un thread separato, questo esempio Usa anche una variabile contatore e un [evento](../../parallel/concrt/reference/event-class.md) oggetto per assicurarsi che il `call` oggetto elabora tutti i messaggi prima il `wmain` funzione restituisce.

[!code-cpp[concrt-call-structure#1](../../parallel/concrt/codesnippet/cpp/asynchronous-message-blocks_4.cpp)]

Questo esempio produce il seguente output:

```Output
334455
```

Per un esempio completo che illustra come usare il `call` classe, vedere [come: Fornire funzioni lavoro alle classi call e transformer](../../parallel/concrt/how-to-provide-work-functions-to-the-call-and-transformer-classes.md).

[[Torna all'inizio](#top)]

##  <a name="transformer"></a> Classe Transformer

Il [Concurrency:: transformer](../../parallel/concrt/reference/transformer-class.md) classe agisce come un ricevitore di messaggi e il mittente del messaggio. Il `transformer` classe è simile al `call` classe in quanto esegue una funzione di lavoro definiti dall'utente alla ricezione dei dati. Tuttavia, il `transformer` classe invia anche il risultato della funzione lavoro per gli oggetti ricevitori. Ad esempio un `call` oggetti, un `transformer` oggetto funziona in parallelo con altri componenti che inviano messaggi ad esso. Se un `transformer` oggetto sta eseguendo un'operazione quando viene ricevuto un messaggio, il messaggio viene aggiunto a una coda. Ogni `transformer` oggetto elabora i messaggi in coda nell'ordine in cui vengono ricevuti.

Il `transformer` classe invia il messaggio a una sola destinazione. Se si imposta il `_PTarget` parametro nel costruttore `NULL`, è possibile specificare la destinazione in un secondo momento chiamando la [Concurrency:: link_target](reference/source-block-class.md#link_target) (metodo).

A differenza di tutti gli altri tipi di blocchi di messaggi asincroni forniti dalla libreria di agenti, il `transformer` classe può agire su diversi tipi di input e output. La possibilità di trasformare i dati da un tipo a altro rende il `transformer` classe un componente fondamentale per molte reti simultanei. Inoltre, è possibile aggiungere ulteriori funzionalità parallele con granularità fine nella funzione di lavoro di un `transformer` oggetto.

### <a name="example"></a>Esempio

L'esempio seguente mostra la struttura di base dell'uso con il `transformer` classe. Questo esempio viene creato un `transformer` dell'oggetto che moltiplica ciascun input `int` valore 0,33 per produrre un `double` valore come output. L'esempio riceve quindi i valori trasformati dalla stessa `transformer` dell'oggetto e li visualizza nella console.

[!code-cpp[concrt-transformer-structure#1](../../parallel/concrt/codesnippet/cpp/asynchronous-message-blocks_5.cpp)]

Questo esempio produce il seguente output:

```Output
10.8914.5218.15
```

Per un esempio completo che illustra come usare il `transformer` classe, vedere [come: Usare la classe transformer in una Pipeline di dati](../../parallel/concrt/how-to-use-transformer-in-a-data-pipeline.md).

[[Torna all'inizio](#top)]

##  <a name="choice"></a> Classe Choice

Il [Concurrency:: Choice](../../parallel/concrt/reference/choice-class.md) classe consente di selezionare il primo messaggio disponibile da un set di origini. Il `choice` classe rappresenta un meccanismo di flusso di controllo anziché un meccanismo di flusso di dati (l'argomento [Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md) vengono descritte le differenze tra flussi di dati e del flusso di controllo).

La lettura da un oggetto scelta simile alla chiamata alla funzione API Windows `WaitForMultipleObjects` quando ha il `bWaitAll` parametro impostato su `FALSE`. Tuttavia, il `choice` classe associa i dati dell'evento stesso anziché a un oggetto di sincronizzazione esterni.

In genere, si usa la `choice` classe insieme con il [Concurrency:: Receive](reference/concurrency-namespace-functions.md#receive) funzione per flusso di controllo nell'applicazione. Usare il `choice` classe quando è necessario effettuare una selezione tra i buffer di messaggi che hanno tipi diversi. Usare il `single_assignment` classe quando è necessario effettuare una selezione tra i buffer di messaggi che hanno lo stesso tipo.

L'ordine in cui si collegano le origini per un `choice` oggetto è importante perché può determinare il messaggio è selezionato. Ad esempio, si consideri il caso in cui si collegano più buffer di messaggi che contengono già un messaggio a un `choice` oggetto. Il `choice` oggetto consente di selezionare il messaggio dalla prima origine a cui è collegato. Dopo il collegamento tutte le origini, le `choice` oggetto mantiene l'ordine in cui ogni origine riceve un messaggio.

### <a name="example"></a>Esempio

L'esempio seguente mostra la struttura di base dell'uso con il `choice` classe. Questo esempio Usa la [Concurrency:: make_choice](reference/concurrency-namespace-functions.md#make_choice) funzione per creare un `choice` oggetto che consente di selezionare tra tre blocchi dei messaggi. Nell'esempio viene quindi calcola i numeri di Fibonacci diversi e archivia ogni risultato in un blocco di messaggio diversi. Nell'esempio viene quindi stampato nella console un messaggio in cui è basato sull'operazione completata per prima.

[!code-cpp[concrt-choice-structure#1](../../parallel/concrt/codesnippet/cpp/asynchronous-message-blocks_6.cpp)]

Questo esempio produce l'output di esempio seguente:

```Output
fib35 received its value first. Result = 9227465
```

Poiché l'attività che calcola il 35<sup>th</sup> numero di Fibonacci è necessariamente completata per prima, può variare l'output di questo esempio.

Questo esempio Usa la [Concurrency:: parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke) algoritmo per calcolare i numeri di Fibonacci in parallelo. Per altre informazioni sulle `parallel_invoke`, vedere [algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).

Per un esempio completo che illustra come usare il `choice` classe, vedere [come: Selezionare tra le attività completate](../../parallel/concrt/how-to-select-among-completed-tasks.md).

[[Torna all'inizio](#top)]

##  <a name="join"></a> Classi di join e multitype_join

Il [Concurrency:: join](../../parallel/concrt/reference/join-class.md) e [Concurrency:: multitype_join](../../parallel/concrt/reference/multitype-join-class.md) classi che consentono di attesa per ogni membro di un set di origini ricevere un messaggio. Il `join` classe agisce sugli oggetti di origine che hanno un tipo di messaggio comune. Il `multitype_join` classe agisce sugli oggetti di origine che possono avere diversi tipi di messaggio.

La lettura da un `join` oppure `multitype_join` oggetto simile alla chiamata alla funzione API di Windows `WaitForMultipleObjects` quando ha il `bWaitAll` parametro impostato su `TRUE`. Tuttavia, proprio come un `choice` oggetto `join` e `multitype_join` gli oggetti utilizzano un meccanismo di evento che associa i dati dell'evento stesso anziché a un oggetto di sincronizzazione esterni.

La lettura da un `join` oggetto produce un std::[vettore](../../standard-library/vector-class.md) oggetto. La lettura da un `multitype_join` oggetto produce un std::[tupla](../../standard-library/tuple-class.md) oggetto. Gli elementi vengono visualizzati in questi oggetti nello stesso ordine quando i buffer di origine corrispondenti sono collegati al `join` o `multitype_join` oggetto. Poiché l'ordine in cui si collega origine memorizza nel buffer a un `join` o `multitype_join` oggetto è associato l'ordine degli elementi nell'oggetto risultante `vector` o `tuple` dell'oggetto, è consigliabile che non si scollega un buffer di origine esistente da un creare un join. In questo modo possa causare un comportamento non specificato.

### <a name="greedy-versus-non-greedy-joins"></a>Join greedy rispetto a Non-Greedy

Il `join` e `multitype_join` classi supportano il concetto di join greedy e non greedy. Oggetto *join greedy* accetta un messaggio da ognuna delle relative origini come i messaggi diventano disponibili fino a quando non saranno disponibili tutti i messaggi. Oggetto *join non greedy* riceve i messaggi in due fasi. Prima di tutto un join non greedy attende fino a quando non viene offerto un messaggio da ognuna delle relative origini. In secondo luogo, quando tutti i messaggi di origine sono disponibili, un join non greedy tenta di riservare ognuno di questi messaggi. Se è possibile riservare ogni messaggio, utilizza tutti i messaggi e li propaga alla relativa destinazione. In caso contrario, rilascia, o viene annullato, le prenotazioni dei messaggi e anche in questo caso è in attesa per ogni origine ricevere un messaggio.

Join greedy offrono prestazioni migliori rispetto ai join non greedy perché accettano messaggi immediatamente. Tuttavia, in casi rari, join greedy può causare deadlock. Usare un join non greedy quando si dispone di più join che contengono uno o più oggetti di codice sorgente condiviso.

### <a name="example"></a>Esempio

L'esempio seguente mostra la struttura di base dell'uso con il `join` classe. Questo esempio Usa la [Concurrency:: make_join](reference/concurrency-namespace-functions.md#make_join) funzione per creare un `join` oggetto che riceve da tre `single_assignment` oggetti. In questo esempio calcola i numeri di Fibonacci diversi e archivia ogni risultato in un altro `single_assignment` oggetto e quindi stampa nella console di ogni risultato che il `join` esenzioni dell'oggetto. Questo esempio è simile all'esempio per la `choice` classe, tranne il fatto che il `join` classe attende che tutti i blocchi di messaggi di origine ricevere un messaggio.

[!code-cpp[concrt-join-structure#1](../../parallel/concrt/codesnippet/cpp/asynchronous-message-blocks_7.cpp)]

Questo esempio produce il seguente output:

```Output
fib35 = 9227465fib37 = 24157817half_of_fib42 = 1.33957e+008
```

Questo esempio Usa la [Concurrency:: parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke) algoritmo per calcolare i numeri di Fibonacci in parallelo. Per altre informazioni sulle `parallel_invoke`, vedere [algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).

Per esempi completi che illustrano come usare il `join` classe, vedere [come: Selezionare tra le attività completate](../../parallel/concrt/how-to-select-among-completed-tasks.md) e [procedura dettagliata: Uso della classe join per impedire un Deadlock](../../parallel/concrt/walkthrough-using-join-to-prevent-deadlock.md).

[[Torna all'inizio](#top)]

##  <a name="timer"></a> Classe Timer

La concorrenza::/[classe timer](../../parallel/concrt/reference/timer-class.md) funge da origine di un messaggio. Oggetto `timer` oggetto invia un messaggio a una destinazione dopo che è trascorso un periodo di tempo specificato. Il `timer` classe è utile quando è necessario ritardare l'invio di un messaggio o si vuole inviare un messaggio a intervalli regolari.

Il `timer` classe invia il messaggio a una sola destinazione. Se si imposta il `_PTarget` parametro nel costruttore `NULL`, è possibile specificare la destinazione in un secondo momento chiamando la [concurrency::ISource::link_target](reference/source-block-class.md#link_target) (metodo).

Oggetto `timer` oggetto può essere ripetuto o non ripetuti. Per creare un oggetto timer ripetuto, passare **true** per il `_Repeating` parametro quando si chiama il costruttore. In caso contrario, passare **false** per il `_Repeating` parametro per creare un timer non ripetuti. Se il timer viene ripetuto, invia lo stesso messaggio alla sua destinazione dopo ogni intervallo.

Crea la libreria di agenti `timer` oggetti nello stato non-started. Per avviare un oggetto timer, chiamare il [concurrency::timer::start](reference/timer-class.md#start) (metodo). Per arrestare un `timer` dell'oggetto, eliminare definitivamente l'oggetto o una chiamata di [concurrency::timer::stop](reference/timer-class.md#stop) (metodo). Per sospendere un timer ripetuto, chiamare il [concurrency::timer::pause](reference/timer-class.md#pause) (metodo).

### <a name="example"></a>Esempio

L'esempio seguente mostra la struttura di base dell'uso con il `timer` classe. Nell'esempio viene usato `timer` e `call` oggetti per segnalare lo stato di avanzamento di un'operazione di lunga durata.

[!code-cpp[concrt-timer-structure#1](../../parallel/concrt/codesnippet/cpp/asynchronous-message-blocks_8.cpp)]

Questo esempio produce l'output di esempio seguente:

```Output
Computing fib(42)..................................................result is 267914296
```

Per un esempio completo che illustra come usare il `timer` classe, vedere [come: Inviare un messaggio a intervalli regolari](../../parallel/concrt/how-to-send-a-message-at-a-regular-interval.md).

[[Torna all'inizio](#top)]

##  <a name="filtering"></a> Filtro dei messaggi

Quando si crea un oggetto del blocco di messaggio, è possibile fornire un *funzione di filtro* che determina se il blocco di messaggi accetta o rifiuta un messaggio. Una funzione di filtro è utile per garantire che un blocco di messaggi riceve solo determinati valori.

Nell'esempio seguente viene illustrato come creare un `unbounded_buffer` oggetto che usa una funzione di filtro per accettare solo i numeri pari. Il `unbounded_buffer` rifiuta i numeri dispari, oggetto e pertanto non si propaga i numeri dispari ai relativi blocchi di destinazione.

[!code-cpp[concrt-filter-function#1](../../parallel/concrt/codesnippet/cpp/asynchronous-message-blocks_9.cpp)]

Questo esempio produce il seguente output:

```Output
0 2 4 6 8
```

Una funzione di filtro può essere una funzione lambda, un puntatore a funzione o un oggetto funzione. Ogni funzione di filtro accetta uno dei formati seguenti.

```Output
bool (T)
bool (T const &)
```

Per eliminare le operazioni di copia dei dati, utilizzare la seconda forma della presenza di un tipo di aggregazione che viene propagato dal valore.

Il filtro supporta messaggi di *dataflow* modello di programmazione, in cui componenti eseguono i calcoli quando ricevono dati. Per esempi che usano funzioni di filtro per controllare il flusso di dati in una rete di passaggio dei messaggi, vedere [come: Usare un filtro di blocco di messaggio](../../parallel/concrt/how-to-use-a-message-block-filter.md), [procedura dettagliata: Creazione di un agente del flusso di dati](../../parallel/concrt/walkthrough-creating-a-dataflow-agent.md), e [procedura dettagliata: Creazione di una rete di elaborazione di immagini](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md).

[[Torna all'inizio](#top)]

##  <a name="reservation"></a> Prenotazione dei messaggi

*Prenotazione del messaggio* consente a un blocco di messaggio riservare un messaggio per un uso successivo. In genere, la prenotazione dei messaggi non viene utilizzata direttamente. Messaggio di informazioni sulle prenotazioni consentono una migliore, tuttavia, comprendere il comportamento di alcuni dei tipi di blocchi di messaggio predefinite.

Provare a non-greedy e greedy. Entrambi usano la prenotazione dei messaggi per riservare i messaggi per un uso successivo. Come descritto in precedenza, un join non greedy riceve i messaggi in due fasi. Durante la prima fase, un non-greedy `join` oggetto rimane in attesa per ognuna delle origini per ricevere un messaggio. Un join non greedy tenta quindi di riservare ognuno di questi messaggi. Se è possibile riservare ogni messaggio, utilizza tutti i messaggi e li propaga alla relativa destinazione. In caso contrario, rilascia, o viene annullato, le prenotazioni dei messaggi e anche in questo caso è in attesa per ogni origine ricevere un messaggio.

Un join greedy, che legge i messaggi di input anche da numerose origini, Usa la prenotazione dei messaggi per leggere i messaggi aggiuntivi durante l'attesa di ricevere un messaggio da ogni origine. Si consideri ad esempio un join greedy che riceve i messaggi da blocchi di messaggi `A` e `B`. Se il join greedy riceve due messaggi da B, ma non ha ancora ricevuto un messaggio dal `A`, il join greedy consente di salvare l'identificatore di messaggio univoco per il secondo messaggio da `B`. Dopo il join greedy riceve un messaggio dal `A` e propaga questi messaggi, Usa l'identificatore di messaggio salvato per vedere se il secondo messaggio da `B` è ancora disponibile.

È possibile usare la prenotazione dei messaggi quando si implementano i tipi di blocco di messaggio personalizzato. Per un esempio su come creare un tipo di blocco di messaggi personalizzato, vedere [procedura dettagliata: Creazione di un blocco di messaggio personalizzato](../../parallel/concrt/walkthrough-creating-a-custom-message-block.md).

[[Torna all'inizio](#top)]

## <a name="see-also"></a>Vedere anche

[Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)
