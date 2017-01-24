---
title: "Blocchi dei messaggi asincroni | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "join non-greedy [Runtime di concorrenza]"
  - "blocchi di messaggi asincroni"
  - "join greedy [Runtime di concorrenza]"
ms.assetid: 79c456c0-1692-480c-bb67-98f2434c1252
caps.latest.revision: 36
caps.handback.revision: 36
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Blocchi dei messaggi asincroni
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La libreria di agenti fornisce vari tipi di blocco dei messaggi che consentono di propagare i messaggi tra i componenti dell'applicazione in modo thread-safe. Questi tipi di blocco dei messaggi vengono spesso utilizzati con le routine di passaggio dei messaggi diversi, ad esempio [Concurrency:: Send](../Topic/send%20Function.md), [Concurrency:: asend](../Topic/asend%20Function.md), [Concurrency:: Receive](../Topic/receive%20Function.md), e [Concurrency:: try_receive](../Topic/try_receive%20Function.md). Per ulteriori informazioni sulle routine definite dalla libreria di agenti di passaggio messaggi, vedere [Message Passing Functions](../../parallel/concrt/message-passing-functions.md).  
  
##  <a name="a-nametopa-sections"></a><a name="top"></a> Nelle sezioni  
 Di seguito sono elencate le diverse sezioni di questo argomento:  
  
- [Origini e destinazioni](#sources_and_targets)  
  
- [Propagazione dei messaggi](#propagation)  
  
- [Panoramica dei tipi di blocchi di messaggio](#overview)  
  
- [Classe unbounded_buffer](#unbounded_buffer)  
  
- [Classe overwrite_buffer](#overwrite_buffer)  
  
- [Classe single_assignment](#single_assignment)  
  
- [Call (classe)](#call)  
  
- [Classe Transformer](#transformer)  
  
- [Classe Choice](#choice)  
  
- [Classi di join e multitype_join](#join)  
  
- [Classe Timer](#timer)  
  
- [Il filtro dei messaggi](#filtering)  
  
- [Prenotazione dei messaggi](#reservation)  
  
##  <a name="a-namesourcesandtargetsa-sources-and-targets"></a><a name="sources_and_targets"></a> Origini e destinazioni  
 Origini e destinazioni sono due partecipanti importanti nel passaggio dei messaggi. Oggetto *origine* fa riferimento a un endpoint di comunicazione che invia messaggi. Oggetto *destinazione* fa riferimento a un endpoint di comunicazione che riceve i messaggi. È possibile pensare come un endpoint che vengono letti da un'origine e una destinazione di un endpoint che si scrive in. Le applicazioni si connettono origini e destinazioni insieme form *le reti di messaggistica*.  
  
 La libreria di agenti utilizza due classi astratte per rappresentare le origini e destinazioni: [Concurrency:: ISource](../../parallel/concrt/reference/isource-class.md) e [Concurrency:: ITarget](../../parallel/concrt/reference/itarget-class.md). Tipi di blocchi di messaggio che agiscono come origini derivano da `ISource`; tipi di blocchi di messaggio che agiscono come destinazioni derivano da `ITarget`. Tipi di blocchi di messaggio che agiscono come origini e destinazioni derivano sia da `ISource` e `ITarget`.  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="a-namepropagationa-message-propagation"></a><a name="propagation"></a> Propagazione dei messaggi  
 *La propagazione dei messaggi* è l'atto di inviare un messaggio da un componente a altro. Quando un blocco di messaggi viene offerto un messaggio, è possibile accettare, rifiutare o posticipare il messaggio. Ogni tipo di blocco di messaggi archivia e trasmette i messaggi in modi diversi. Ad esempio, la `unbounded_buffer` classe memorizza un numero illimitato di messaggi, la `overwrite_buffer` classe archivia un singolo messaggio alla volta e la classe transformer archivia una versione modificata di ogni messaggio. Questi tipi di blocchi di messaggio sono descritti in dettaglio più avanti in questo documento.  
  
 Quando un messaggio viene accettato un blocco di messaggi, può facoltativamente eseguire il lavoro e, se il blocco dei messaggi è un'origine, passare il messaggio risultante a un altro membro della rete. Un blocco di messaggi è possibile utilizzare una funzione di filtro per rifiutare i messaggi che non desidera ricevere. Filtri sono descritti in dettaglio più avanti in questo argomento, nella sezione [del filtro messaggi](#filtering). Un blocco di messaggio che viene posticipato un messaggio consente di riservare tale messaggio e di utilizzarlo in un secondo momento. La prenotazione dei messaggi è descritta in maggiore dettaglio più avanti in questo argomento, nella sezione [la prenotazione dei messaggi](#reservation).  
  
 La libreria di agenti consente ai blocchi di messaggio di in modo asincrono o passare in modo sincrono i messaggi. Quando si passa un messaggio a un blocco di messaggi in modo sincrono, ad esempio, utilizzando il `send` funzione, il runtime blocca il contesto corrente fino a quando il blocco di destinazione accetta o rifiuta il messaggio. Quando si passa un messaggio a un blocco di messaggi in modo asincrono, ad esempio, utilizzando il `asend` funzione, il runtime offre il messaggio alla destinazione e se la destinazione accetta il messaggio, il runtime consente di pianificare un'attività asincrona che propaga il messaggio al destinatario. Il runtime utilizza attività leggere per propagare i messaggi in modo cooperativo. Per ulteriori informazioni sulle attività leggere, vedere [utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md).  
  
 Applicazioni connettono origini e destinazioni insieme per creare le reti di messaggistica. In genere, si collega la rete e chiamare `send` o `asend` per passare i dati alla rete. Per connettere un blocco di messaggi di origine a una destinazione, chiamare il [concurrency::ISource::link_target](../Topic/ISource::link_target%20Method.md) metodo. Per disconnettere un blocco di origine da una destinazione, chiamare il [concurrency::ISource::unlink_target](../Topic/ISource::unlink_target%20Method.md) metodo. Per disconnettere un blocco di origine da tutte le relative destinazioni, chiamare il [concurrency::ISource::unlink_targets](../Topic/ISource::unlink_targets%20Method.md) metodo. Quando uno dei tipi di blocchi di messaggi predefiniti lascia l'ambito o viene eliminato, viene automaticamente disconnesso da tutti i blocchi di destinazione. Alcuni tipi di blocchi di messaggi limitano il numero massimo di destinazioni che possono essere scritti in. Nella sezione seguente descrive le restrizioni che si applicano a tipi di blocchi di messaggi predefinito.  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="a-nameoverviewa-overview-of-message-block-types"></a><a name="overview"></a> Panoramica dei tipi di blocchi di messaggio  
 Nella tabella seguente descrive brevemente il ruolo dei tipi di blocco dei messaggi importanti.  
  
 [unbounded_buffer](#unbounded_buffer)  
 Archivia una coda di messaggi.  
  
 [overwrite_buffer](#overwrite_buffer)  
 Archivia un messaggio che è possibile scritto e leggere più volte.  
  
 [single_assignment](#single_assignment)  
 Archivia un messaggio che è possibile scritto una sola volta e leggere più volte.  
  
 [chiamata](#call)  
 Esegue un'operazione quando viene ricevuto un messaggio.  
  
 [classe Transformer](#transformer)  
 Esegue operazioni quando riceve i dati e invia il risultato del lavoro a un altro blocco di destinazione. La `transformer` classe può agire su diversi tipi di input e output.  
  
 [scelta](#choice)  
 Seleziona il primo messaggio disponibile da un set di origini.  
  
 [join e a più tipi](#join)  
 Attendere che tutti i messaggi essere ricevuto da un set di origini e quindi combinare i messaggi in un messaggio per un altro blocco di messaggio.  
  
 [Timer](#timer)  
 Invia un messaggio a un blocco di destinazione a intervalli regolari.  
  
 Questi tipi di blocco dei messaggi hanno caratteristiche diverse che li rendono utili per diverse situazioni. Queste sono alcune delle caratteristiche:  
  
- *Tipo di propagazione*: indica se il blocco di messaggio funge da un'origine dei dati, un destinatario di dati o entrambi.  
  
- *Ordinamento dei messaggi*: se il blocco dei messaggi mantiene l'ordine originale in cui i messaggi vengono inviati o ricevuti. Ogni tipo di blocco di messaggi predefinito mantiene l'ordine originale in cui invia o riceve messaggi.  
  
- *Conteggio di origine*: il numero massimo di origini che è possibile leggere il blocco dei messaggi.  
  
- *Numero di destinazione*: il numero massimo di destinazioni in cui è possibile scrivere il blocco dei messaggi.  
  
 Nella tabella seguente viene illustrato come queste caratteristiche sono correlate a vari tipi di blocco dei messaggi.  
  
|Tipo di blocco di messaggio|Tipo di propagazione (origine, destinazione o entrambi)|Ordinamento (ordinato o Unordered) dei messaggi|Numero di origini|Numero di destinazione|  
|------------------------|--------------------------------------------------|-----------------------------------------------|------------------|------------------|  
|`unbounded_buffer`|Entrambi|Ordered|Unbounded|Unbounded|  
|`overwrite_buffer`|Entrambi|Ordered|Unbounded|Unbounded|  
|`single_assignment`|Entrambi|Ordered|Unbounded|Unbounded|  
|`call`|Destinazione|Ordered|Unbounded|Non applicabile|  
|`transformer`|Entrambi|Ordered|Unbounded|1|  
|`choice`|Entrambi|Ordered|10|1|  
|`join`|Entrambi|Ordered|Unbounded|1|  
|`multitype_join`|Entrambi|Ordered|10|1|  
|`timer`|Origine|Non applicabile|Non applicabile|1|  
  
 Nelle sezioni seguenti vengono descritti i tipi di blocco dei messaggi in modo più dettagliato.  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="a-nameunboundedbuffera-unboundedbuffer-class"></a><a name="unbounded_buffer"></a> Classe unbounded_buffer  
 Il [Concurrency:: unbounded_buffer](../Topic/unbounded_buffer%20Class.md) classe rappresenta una struttura di messaggistica asincrona di utilizzo generale. Questa classe archivia una coda di messaggi FIFO (First In, First Out) che possono essere letti da più destinazioni o in cui possono scrivere più origini. Quando una destinazione riceve un messaggio da un `unbounded_buffer` oggetto messaggio viene rimosso dalla coda dei messaggi. Pertanto, sebbene un `unbounded_buffer` oggetto può avere più destinazioni, ogni messaggio verrà ricevuto da una sola destinazione. La classe `unbounded_buffer` è utile quando si vogliono passare più messaggi a un altro componente e tale componente deve ricevere ogni messaggio.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrata la struttura di base sulle modalità di utilizzo con la `unbounded_buffer` classe. In questo esempio invia tre valori per un `unbounded_buffer` dell'oggetto e quindi legge i valori dallo stesso oggetto.  
  
 [!code-cpp[concrt-unbounded_buffer-structure#1](../../parallel/concrt/codesnippet/CPP/asynchronous-message-blocks_1.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
334455  
```  
  
 Per un esempio completo in cui viene illustrato come utilizzare la `unbounded_buffer` classe, vedere [procedura: implementare vari modelli Producer-Consumer](../../parallel/concrt/how-to-implement-various-producer-consumer-patterns.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="a-nameoverwritebuffera-overwritebuffer-class"></a><a name="overwrite_buffer"></a> Classe overwrite_buffer  
 Il [Concurrency:: overwrite_buffer](../../parallel/concrt/reference/overwrite-buffer-class.md) classe è simile al `unbounded_buffer` classe, con la differenza che un `overwrite_buffer` oggetto archivia un solo messaggio. Inoltre, quando una destinazione riceve un messaggio da un `overwrite_buffer` dell'oggetto, il messaggio non viene rimosso dal buffer. Pertanto, più destinazioni riceveranno una copia del messaggio.  
  
 La `overwrite_buffer` classe è utile quando si desidera passare più messaggi a un altro componente, ma il componente necessita solo del valore più recente. Questa classe è utile anche quando si vuole trasmettere un messaggio a più componenti.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrata la struttura di base sulle modalità di utilizzo con la `overwrite_buffer` classe. In questo esempio invia tre valori per un `overwrite _buffer` dell'oggetto e quindi legge il valore corrente dallo stesso oggetto tre volte. Questo esempio è simile all'esempio per la `unbounded_buffer` classe. Tuttavia, la `overwrite_buffer` classe archivia un solo messaggio. Inoltre, il runtime rimuove il messaggio da un `overwrite_buffer` dopo la lettura dell'oggetto.  
  
 [!code-cpp[concrt-overwrite_buffer-structure#1](../../parallel/concrt/codesnippet/CPP/asynchronous-message-blocks_2.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
555555  
```  
  
 Per un esempio completo in cui viene illustrato come utilizzare la `overwrite_buffer` classe, vedere [procedura: implementare vari modelli Producer-Consumer](../../parallel/concrt/how-to-implement-various-producer-consumer-patterns.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="a-namesingleassignmenta-singleassignment-class"></a><a name="single_assignment"></a> Classe single_assignment  
 Il [Concurrency:: single_assignment](../../parallel/concrt/reference/single-assignment-class.md) classe è simile al `overwrite_buffer` classe, con la differenza che un `single_assignment` oggetto può essere scritto una sola volta. Come per la classe `overwrite_buffer`, quando da una destinazione riceve un messaggio da un oggetto `single_assignment`, il messaggio viene rimosso dalla coda di messaggi. Pertanto, più destinazioni riceveranno una copia del messaggio. La `single_assignment` classe è utile quando si desidera trasmettere un messaggio a più componenti.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrata la struttura di base sulle modalità di utilizzo con la `single_assignment` classe. In questo esempio invia tre valori per un `single_assignment` dell'oggetto e quindi legge il valore corrente dallo stesso oggetto tre volte. Questo esempio è simile all'esempio per la `overwrite_buffer` classe. Sebbene sia il `overwrite_buffer` e `single_assignment` classi archiviare un singolo messaggio, la `single_assignment` classe può essere scritto una sola volta.  
  
 [!code-cpp[concrt-single_assignment-structure#1](../../parallel/concrt/codesnippet/CPP/asynchronous-message-blocks_3.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
333333  
```  
  
 Per un esempio completo in cui viene illustrato come utilizzare la `single_assignment` classe, vedere [procedura dettagliata: implementazione di future](../../parallel/concrt/walkthrough-implementing-futures.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="a-namecalla-call-class"></a><a name="call"></a> Call (classe)  
 Il [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) classe agisce come un destinatario del messaggio che esegue una funzione lavoro quando riceve i dati. Questa funzione di lavoro può essere un'espressione lambda, un oggetto funzione o un puntatore a funzione. Oggetto `call` oggetto si comporta in modo diverso da una chiamata di funzione comune poiché agisce in parallelo con altri componenti che riceve i messaggi. Se un `call` oggetto sta eseguendo un'operazione quando viene ricevuto un messaggio, il messaggio viene aggiunto a una coda. Ogni `call` Elabora oggetti in coda i messaggi nell'ordine in cui vengono ricevuti.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrata la struttura di base sulle modalità di utilizzo con la `call` classe. Questo esempio viene creato un `call` oggetto che visualizza ogni valore che riceve nella console. Nell'esempio viene quindi inviato tre valori per il `call` oggetto. Perché il `call` oggetto elabora i messaggi in un thread separato, in questo esempio utilizza inoltre una variabile contatore e un [evento](../../parallel/concrt/reference/event-class.md) oggetto per assicurarsi che il `call` oggetto elabora tutti i messaggi prima di `wmain` funzione restituisce.  
  
 [!code-cpp[concrt-call-structure#1](../../parallel/concrt/codesnippet/CPP/asynchronous-message-blocks_4.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
334455  
```  
  
 Per un esempio completo in cui viene illustrato come utilizzare la `call` classe, vedere [procedura: fornire funzioni lavoro alle classi call e transformer](../../parallel/concrt/how-to-provide-work-functions-to-the-call-and-transformer-classes.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="a-nametransformera-transformer-class"></a><a name="transformer"></a> Classe Transformer  
 Il [Concurrency:: transformer](../../parallel/concrt/reference/transformer-class.md) classe agisce come entrambi un destinatario del messaggio e il mittente del messaggio. La `transformer` classe è simile al `call` classe poiché esegue una funzione di lavoro definiti dall'utente alla ricezione dei dati. Tuttavia, la `transformer` classe invia anche il risultato della funzione lavoro agli oggetti destinatario. Ad esempio un `call` oggetto, un `transformer` oggetto agisce in parallelo con altri componenti che riceve i messaggi. Se un `transformer` oggetto sta eseguendo un'operazione quando viene ricevuto un messaggio, il messaggio viene aggiunto a una coda. Ogni `transformer` oggetto elabora i messaggi in coda nell'ordine in cui vengono ricevuti.  
  
 La `transformer` classe invia il messaggio a una destinazione. Se si imposta la `_PTarget` parametro nel costruttore per `NULL`, è possibile specificare la destinazione in un secondo momento chiamando la [Concurrency:: link_target](../Topic/source_block::link_target%20Method.md) metodo.  
  
 A differenza di tutti gli altri tipi di blocco di messaggi asincroni forniti dalla libreria di agenti, la `transformer` classe può agire su diversi tipi di input e output. La possibilità di trasformare i dati da un tipo a altro rende la `transformer` classe un componente chiave in molte reti simultanee. Inoltre, è possibile aggiungere funzionalità parallela più accurata nella funzione lavoro di un `transformer` oggetto.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrata la struttura di base sulle modalità di utilizzo con la `transformer` classe. Questo esempio viene creato un `transformer` che moltiplica ciascun input dell'oggetto `int` valore 0,33 per produrre una `double` valore come output. Nell'esempio riceve quindi i valori trasformati dalla stessa `transformer` dell'oggetto e li visualizza nella console.  
  
 [!code-cpp[concrt-transformer-structure#1](../../parallel/concrt/codesnippet/CPP/asynchronous-message-blocks_5.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
10.8914.5218.15  
```  
  
 Per un esempio completo in cui viene illustrato come utilizzare la `transformer` classe, vedere [procedura: utilizzare la classe transformer in una Pipeline di dati](../../parallel/concrt/how-to-use-transformer-in-a-data-pipeline.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="a-namechoicea-choice-class"></a><a name="choice"></a> Classe Choice  
 Il [Concurrency:: Choice](../../parallel/concrt/reference/choice-class.md) classe seleziona il primo messaggio disponibile da un set di origini. La `choice` classe rappresenta un meccanismo di flusso di controllo anziché un meccanismo di flusso di dati (l'argomento [Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md) vengono descritte le differenze tra flussi di dati e del flusso di controllo).  
  
 La lettura da un oggetto choice simile alla chiamata alla funzione Windows API `WaitForMultipleObjects` quando ne ha il `bWaitAll` parametro impostato su `FALSE`. Tuttavia, la `choice` classe associa i dati all'evento stesso anziché a un oggetto di sincronizzazione esterno.  
  
 In genere, si utilizza la `choice` classe con il [Concurrency:: Receive](../Topic/receive%20Function.md) funzione per flusso di controllo nell'applicazione. Utilizzare la `choice` classe quando è necessario selezionare tra buffer dei messaggi che hanno tipi diversi. Utilizzare la `single_assignment` classe quando è necessario selezionare tra buffer dei messaggi che hanno lo stesso tipo.  
  
 L'ordine in cui si collegano origini da un `choice` oggetto è importante poiché può determinare il messaggio è stato selezionato. Ad esempio, si consideri il caso in cui si collegano più buffer dei messaggi che già contengono un messaggio a un `choice` oggetto. Il `choice` oggetto seleziona il messaggio dalla prima origine a cui è collegato. Dopo aver collegato tutte le origini, la `choice` oggetto mantiene l'ordine in cui ogni origine riceve un messaggio.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrata la struttura di base sulle modalità di utilizzo con la `choice` classe. Questo esempio viene utilizzato il [Concurrency:: make_choice](../Topic/make_choice%20Function.md) funzione per creare un `choice` oggetto che consente di selezionare tra tre blocchi dei messaggi. Nell'esempio viene quindi calcolati diversi numeri di Fibonacci e archivia ogni risultato in un blocco di messaggi diversi. Nell'esempio viene quindi stampato nella console un messaggio basato sulla prima operazione completata.  
  
 [!code-cpp[concrt-choice-structure#1](../../parallel/concrt/codesnippet/CPP/asynchronous-message-blocks_6.cpp)]  
  
 Questo esempio produce il seguente output di esempio:  
  
```Output  
fib35 received its value first. Result = 9227465  
```  
  
 Poiché l'attività che calcola il 35<sup>th</sup> non è necessariamente il numero di Fibonacci completata per prima, può variare l'output di questo esempio.  
  
 Questo esempio viene utilizzato il [Concurrency:: parallel_invoke](../Topic/parallel_invoke%20Function.md) algoritmo per calcolare i numeri di Fibonacci in parallelo. Per ulteriori informazioni su `parallel_invoke`, vedere [algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).  
  
 Per un esempio completo in cui viene illustrato come utilizzare la `choice` classe, vedere [procedura: selezionare tra le attività completate](../../parallel/concrt/how-to-select-among-completed-tasks.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="a-namejoina-join-and-multitypejoin-classes"></a><a name="join"></a> Classi di join e multitype_join  
 Il [Concurrency:: join](../../parallel/concrt/reference/join-class.md) e [Concurrency:: multitype_join](../../parallel/concrt/reference/multitype-join-class.md) classi consentono di attendere che ogni membro di un set di origini ricevere un messaggio. La `join` classe agisce sugli oggetti di origine che dispongono di un tipo di messaggio comune. La `multitype_join` classe agisce sugli oggetti di origine che possono avere diversi tipi di messaggio.  
  
 Lettura da un `join` o `multitype_join` oggetto simile alla chiamata la funzione API Windows `WaitForMultipleObjects` quando ne ha il `bWaitAll` parametro impostato su `TRUE`. Tuttavia, come un `choice` oggetto `join` e `multitype_join` gli oggetti utilizzano un meccanismo degli eventi che associa i dati all'evento stesso anziché a un oggetto di sincronizzazione esterno.  
  
 Lettura da un `join` oggetto produce un std::[vettore](vector%20Class.md) oggetto. Lettura da un `multitype_join` oggetto produce un std::[tupla](../../standard-library/tuple-class.md) oggetto. Gli elementi vengono visualizzati in questi oggetti nello stesso ordine poiché i buffer di origine corrispondente sono collegati al `join` o `multitype_join` oggetto. Poiché l'ordine in cui si collega origine memorizza nel buffer per un `join` o `multitype_join` oggetto è associato l'ordine degli elementi nella finestra di `vector` o `tuple` dell'oggetto, è consigliabile che non si scollega un buffer di origine esistente da un join. Ciò può causare un comportamento non specificato.  
  
### <a name="greedy-versus-non-greedy-joins"></a>Join greedy e Non-Greedy  
 Il `join` e `multitype_join` classi supportano il concetto di join greedy e non-greedy. Oggetto *join greedy* accetta un messaggio da ognuna delle origini man mano che i messaggi saranno disponibili finché non saranno disponibili tutti i messaggi. Oggetto *join non-greedy* riceve i messaggi in due fasi. In primo luogo, un join non-greedy attende fino a quando non viene offerto un messaggio da ognuna delle origini. In secondo luogo, dopo tutti i messaggi di origine sono disponibili, un join non-greedy tenta di riservare ognuno di questi messaggi. Se è possibile prenotare ogni messaggio, utilizza tutti i messaggi e li propaga alla relativa destinazione. In caso contrario, rilascia, o Annulla, le prenotazioni di messaggio e attende nuovamente per ogni origine ricevere un messaggio.  
  
 Join greedy migliori join non-greedy poiché accettano i messaggi immediatamente. Tuttavia, in casi rari, join greedy possono causare deadlock. Utilizzare un join non-greedy quando si dispone di più join che contengono uno o più oggetti di origine condivisa.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrata la struttura di base sulle modalità di utilizzo con la `join` classe. Questo esempio viene utilizzato il [Concurrency:: make_join](../Topic/make_join%20Function.md) funzione per creare un `join` oggetto che riceve da tre `single_assignment` oggetti. In questo esempio calcolati diversi numeri di Fibonacci, archivia ogni risultato in un altro `single_assignment` oggetto e quindi viene stampato nella console ogni risultato che il `join` oggetto contiene. Questo esempio è simile all'esempio per la `choice` classe, con la differenza che la `join` classe attende che tutti i blocchi di messaggi di origine ricevere un messaggio.  
  
 [!code-cpp[concrt-join-structure#1](../../parallel/concrt/codesnippet/CPP/asynchronous-message-blocks_7.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
fib35 = 9227465fib37 = 24157817half_of_fib42 = 1.33957e+008  
```  
  
 Questo esempio viene utilizzato il [Concurrency:: parallel_invoke](../Topic/parallel_invoke%20Function.md) algoritmo per calcolare i numeri di Fibonacci in parallelo. Per ulteriori informazioni su `parallel_invoke`, vedere [algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).  
  
 Per esempi completi in cui viene illustrato come utilizzare il `join` classe, vedere [procedura: selezionare tra le attività completate](../../parallel/concrt/how-to-select-among-completed-tasks.md) e [procedura dettagliata: utilizzo di join per impedire un Deadlock](../../parallel/concrt/walkthrough-using-join-to-prevent-deadlock.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="a-nametimera-timer-class"></a><a name="timer"></a> Classe Timer  
 La concorrenza::[classe timer](../../parallel/concrt/reference/timer-class.md) funge da origine di un messaggio. Oggetto `timer` oggetto invia un messaggio a una destinazione dopo che è trascorso un periodo di tempo specificato. La `timer` classe è utile quando è necessario ritardare l'invio di un messaggio o si desidera inviare un messaggio a intervalli regolari.  
  
 La `timer` classe invia il messaggio a una sola destinazione. Se si imposta la `_PTarget` parametro nel costruttore per `NULL`, è possibile specificare la destinazione in un secondo momento chiamando la [concurrency::ISource::link_target](../Topic/source_block::link_target%20Method.md) metodo.  
  
 Oggetto `timer` oggetto può essere ripetuto o non ripetuto. Per creare un oggetto timer ripetuto, passare `true` per il `_Repeating` parametro quando si chiama il costruttore. In caso contrario, passare `false` per il `_Repeating` parametro per creare un timer non ripetuti. Se il timer è ripetuto, invia il messaggio stesso alla relativa destinazione dopo ogni intervallo.  
  
 Crea la libreria di agenti `timer` oggetti nello stato non avviato. Per avviare un oggetto timer, chiamare il [concurrency::timer::start](../Topic/timer::start%20Method.md) metodo. Per arrestare un `timer` di oggetto, eliminare l'oggetto o la chiamata di [concurrency::timer::stop](../Topic/timer::stop%20Method.md) metodo. Per sospendere un oggetto timer ripetuto, chiamare il [concurrency::timer::pause](../Topic/timer::pause%20Method.md) metodo.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrata la struttura di base sulle modalità di utilizzo con la `timer` classe. Nell'esempio viene utilizzato `timer` e `call` gli oggetti per segnalare lo stato di avanzamento di un'operazione di lunga durata.  
  
 [!code-cpp[concrt-timer-structure#1](../../parallel/concrt/codesnippet/CPP/asynchronous-message-blocks_8.cpp)]  
  
 Questo esempio produce il seguente output di esempio:  
  
```Output  
Computing fib(42)..................................................result is 267914296  
```  
  
 Per un esempio completo in cui viene illustrato come utilizzare la `timer` classe, vedere [procedura: inviare un messaggio a intervalli regolari](../../parallel/concrt/how-to-send-a-message-at-a-regular-interval.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="a-namefilteringa-message-filtering"></a><a name="filtering"></a> Il filtro dei messaggi  
 Quando si crea un oggetto di blocco di messaggi, è possibile fornire un *funzione filter* che determina se il blocco di messaggi accettato o rifiutato un messaggio. Una funzione di filtro è utile per garantire la ricezione solo di determinati valori da un blocco di messaggi.  
  
 Nell'esempio seguente viene illustrato come creare un `unbounded_buffer` oggetto che utilizza una funzione di filtro per accettare solo i numeri pari. Il `unbounded_buffer` oggetto rifiuta i numeri dispari e pertanto non li propaga ai relativi blocchi di destinazione.  
  
 [!code-cpp[concrt-filter-function#1](../../parallel/concrt/codesnippet/CPP/asynchronous-message-blocks_9.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
0 2 4 6 8  
```  
  
 Una funzione di filtro può essere una funzione lambda, un puntatore a funzione o un oggetto funzione. Ogni funzione di filtro accetta uno dei seguenti formati.  
  
```Output  
bool (T)  
bool (T const &)  
```  
  
 Per eliminare la copia non necessaria dei dati, utilizzare il secondo formato quando si dispone di un tipo di aggregazione che viene propagato dal valore.  
  
 Il filtro supporta messaggi di *flussi di dati* modello di programmazione, in cui i componenti eseguono calcoli alla ricezione dei dati. Per esempi che utilizzano funzioni di filtro per controllare il flusso di dati in una rete di passaggio, vedere [procedura: utilizzare un filtro di blocco di messaggi](../../parallel/concrt/how-to-use-a-message-block-filter.md), [procedura dettagliata: creazione di un agente del flusso di dati](../../parallel/concrt/walkthrough-creating-a-dataflow-agent.md), e [procedura dettagliata: creazione di una rete di elaborazione delle immagini](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="a-namereservationa-message-reservation"></a><a name="reservation"></a> Prenotazione dei messaggi  
 *Prenotazione dei messaggi* consente di riservare un messaggio per un utilizzo successivo di un blocco di messaggio. In genere, la prenotazione dei messaggi non viene utilizzata direttamente. Tuttavia, messaggio comprensione prenotazione consentono una migliore comprendere il comportamento di alcuni dei tipi di blocchi di messaggi predefinito.  
  
 Provare a non-greedy e greedy. Entrambi questi usare la prenotazione dei messaggi per riservare i messaggi per un utilizzo successivo. Come descritto in precedenza, un join non-greedy riceve i messaggi in due fasi. Durante la prima fase, un non-greedy `join` oggetto è in attesa di ognuna delle origini per ricevere un messaggio. Un join non-greedy tenta quindi di riservare ognuno di questi messaggi. Se è possibile prenotare ogni messaggio, utilizza tutti i messaggi e li propaga alla relativa destinazione. In caso contrario, rilascia, o Annulla, le prenotazioni di messaggio e attende nuovamente per ogni origine ricevere un messaggio.  
  
 Un join greedy, che legge anche i messaggi di input da un numero di fonti, utilizza la prenotazione dei messaggi per leggere altri messaggi in attesa di ricevere un messaggio da ogni origine. Si consideri ad esempio un join greedy che riceve i messaggi dai blocchi di messaggi `A` e `B`. Se il join greedy riceve due messaggi da B ma non ha ancora ricevuto un messaggio da `A`, il join greedy Salva l'identificatore univoco del messaggio per il secondo messaggio da `B`. Dopo che il join greedy riceve un messaggio da `A` e propaga questi messaggi, utilizza l'identificatore di messaggio salvato per verificare se il secondo messaggio da `B` è ancora disponibile.  
  
 Quando si implementano i tipi di blocco di messaggi personalizzato, è possibile utilizzare la prenotazione dei messaggi. Per un esempio su come creare un tipo di blocco di messaggi personalizzato, vedere [procedura dettagliata: creazione di un blocco di messaggio personalizzato](../../parallel/concrt/walkthrough-creating-a-custom-message-block.md).  
  
 [[Torna all'inizio](#top)]  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)

