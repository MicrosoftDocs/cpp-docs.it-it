---
title: Blocchi dei messaggi asincroni | Documenti Microsoft
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
- non-greedy join [Concurrency Runtime]
- asynchronous message blocks
- greedy join [Concurrency Runtime]
ms.assetid: 79c456c0-1692-480c-bb67-98f2434c1252
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 97669589af295c681fa21d6faeb31ec01be37e51
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="asynchronous-message-blocks"></a>Blocchi dei messaggi asincroni

La libreria di agenti fornisce diversi tipi di blocco dei messaggi che consentono di propagare i messaggi tra i componenti dell'applicazione in modo thread-safe. Questi tipi di blocco dei messaggi vengono spesso utilizzati con le diverse routine di passaggio dei messaggi, ad esempio [Concurrency:: Send](reference/concurrency-namespace-functions.md#send), [Concurrency:: asend](reference/concurrency-namespace-functions.md#asend), [Concurrency:: Receive](reference/concurrency-namespace-functions.md#receive), e [Concurrency:: try_receive](reference/concurrency-namespace-functions.md#try_receive). Per ulteriori informazioni sulle routine definite dalla libreria di agenti di passaggio dei messaggi, vedere [Message (funzioni) passando](../../parallel/concrt/message-passing-functions.md).  
  
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
  
- [Il filtro dei messaggi](#filtering)  
  
- [Prenotazione dei messaggi](#reservation)  
  
##  <a name="sources_and_targets"></a>Origini e destinazioni  
 Origini e destinazioni sono due partecipanti importanti nel passaggio dei messaggi. Oggetto *origine* fa riferimento a un endpoint di comunicazione che invia messaggi. Oggetto *destinazione* fa riferimento a un endpoint di comunicazione che riceve i messaggi. È possibile considerare un'origine come un endpoint da cui si legge e una destinazione come un endpoint che si scrive in. Le applicazioni si connettono origini e destinazioni insieme modulo *le reti di messaggistica*.  
  
 La libreria di agenti utilizza due classi astratte per rappresentare le origini e destinazioni: [Concurrency:: ISource](../../parallel/concrt/reference/isource-class.md) e [Concurrency:: ITarget](../../parallel/concrt/reference/itarget-class.md). Tipi di blocchi di messaggio che agiscono come origini derivano da `ISource`; tipi di blocchi di messaggio che agiscono come destinazioni derivano da `ITarget`. Tipi di blocco di messaggi che agiscono come origini e destinazioni derivano da entrambi `ISource` e `ITarget`.  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="propagation"></a>Propagazione dei messaggi  
 *La propagazione dei messaggi* è l'azione di invio di un messaggio da un componente a un altro. Quando un blocco di messaggio viene offerto un messaggio, è possibile accettare, rifiutare o posticipare il messaggio. Ogni tipo di blocco di messaggio archivia e trasmette i messaggi in modi diversi. Ad esempio, il `unbounded_buffer` classe archivia un numero illimitato di messaggi, la `overwrite_buffer` classe archivia un solo messaggio alla volta e la classe transformer archivia una versione modificata di ogni messaggio. Questi tipi di blocchi di messaggio sono descritti in dettaglio più avanti in questo documento.  
  
 Quando un messaggio viene accettato un blocco di messaggi, può facoltativamente eseguire lavoro e, se il blocco dei messaggi è un'origine, passare il messaggio risultante a un altro membro della rete. Un blocco di messaggi è possibile utilizzare una funzione di filtro per rifiutare i messaggi che non desidera ricevere. Filtri sono descritti in dettaglio più avanti in questo argomento, nella sezione [filtro messaggi](#filtering). Un blocco di messaggio che viene posticipato un messaggio consente di riservare il messaggio e di utilizzarlo in un secondo momento. La prenotazione dei messaggi è descritta in dettaglio più avanti in questo argomento, nella sezione [messaggio prenotazione](#reservation).  
  
 La libreria di agenti consente ai blocchi del messaggio in modo asincrono o passare in modo sincrono i messaggi. Quando si passa un messaggio a un blocco di messaggi in modo sincrono, ad esempio, tramite il `send` funzione, il runtime blocca il contesto corrente fino a quando il blocco di destinazione accetta o rifiuta il messaggio. Quando si passa un messaggio a un blocco di messaggi in modo asincrono, ad esempio, tramite il `asend` funzione, il runtime offre il messaggio alla destinazione e se la destinazione accetta il messaggio, il runtime consente di pianificare un'attività asincrona che propaga il messaggio per il ricevitore. Il runtime utilizza le attività per propagare i messaggi in modo cooperativo. Per ulteriori informazioni sulle attività leggere, vedere [utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md).  
  

 Applicazioni connettono origini e destinazioni insieme per creare le reti di messaggistica. In genere, si collega la rete e chiamare `send` o `asend` per passare i dati alla rete. Per connettersi a un blocco di messaggi di origine a una destinazione, chiamare il [concurrency::ISource::link_target](reference/isource-class.md#link_target) metodo. Per disconnettere un blocco di origine da una destinazione, chiamare il [concurrency::ISource::unlink_target](reference/isource-class.md#unlink_target) metodo. Per disconnettere un blocco di origine da tutte le relative destinazioni, chiamare il [concurrency::ISource::unlink_targets](reference/isource-class.md#unlink_targets) metodo. Quando uno dei tipi di blocchi di messaggi predefinito lascia l'ambito o viene eliminato definitivamente, viene automaticamente disconnesso da tutti i blocchi di destinazione. Alcuni tipi di blocchi di messaggi limitano il numero massimo di destinazioni che possono essere scritti in. Nella sezione seguente vengono descritte le limitazioni si applicano a tipi di blocchi di messaggi predefinito.  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="overview"></a>Panoramica dei tipi di blocchi di messaggio  
 Nella tabella seguente descrive brevemente il ruolo dei tipi di blocco dei messaggi importanti.  
  
 [unbounded_buffer](#unbounded_buffer)  
 Archivia una coda di messaggi.  
  
 [overwrite_buffer](#overwrite_buffer)  
 Archivia un messaggio che può essere scritti e letti dal più volte.  
  
 [single_assignment](#single_assignment)  
 Archivia un messaggio che può essere scritto una sola volta e leggere più volte.  
  
 [chiamata](#call)  
 Esegue il lavoro quando viene ricevuto un messaggio.  
  
 [classe Transformer](#transformer)  
 Esegue il lavoro quando riceve i dati e il risultato di tale lavoro viene inviato a un altro blocco di destinazione. La `transformer` classe può agire su diversi tipi di input e output.  
  
 [scelta](#choice)  
 Seleziona il primo messaggio disponibile da un set di origini.  
  
 [join e a più tipi](#join)  
 Attendere che tutti i messaggi di essere ricevuti da un set di origini e quindi combinare i messaggi in un messaggio per un altro blocco di messaggio.  
  
 [Timer](#timer)  
 Invia un messaggio a un blocco di destinazione a intervalli regolari.  
  
 Questi tipi di blocco dei messaggi hanno caratteristiche diverse che li rendono utili per situazioni diverse. Ecco alcune delle caratteristiche:  
  
- *Tipo di propagazione*: indica se il blocco di messaggio funge da un'origine dei dati, un destinatario di dati o entrambi.  
  
- *Ordinamento dei messaggi*: indica se il blocco dei messaggi mantiene l'ordine originale in cui i messaggi vengono inviati o ricevuti. Ogni tipo di blocco di messaggi predefinito mantiene l'ordine originale in cui invia o riceve messaggi.  
  
- *Conteggio di origine*: il numero massimo di origini che è possibile leggere il blocco dei messaggi.  
  
- *Numero di destinazione*: il numero massimo di destinazioni in cui è possibile scrivere il blocco dei messaggi.  
  
 La tabella seguente illustra queste caratteristiche correlazione tra i vari tipi di blocco dei messaggi.  
  
|Tipo di blocco di messaggio|Tipo di propagazione (origine, destinazione o entrambi)|Ordine (ordinato o Unordered) dei messaggi|Numero di origini|Numero di destinazioni|  
|------------------------|--------------------------------------------------|-----------------------------------------------|------------------|------------------|  
|`unbounded_buffer`|Entrambi|Ordered|unbounded|unbounded|  
|`overwrite_buffer`|Entrambi|Ordered|unbounded|unbounded|  
|`single_assignment`|Entrambi|Ordered|unbounded|unbounded|  
|`call`|destinazione|Ordered|unbounded|Non applicabile|  
|`transformer`|Entrambi|Ordered|unbounded|1|  
|`choice`|Entrambi|Ordered|10|1|  
|`join`|Entrambi|Ordered|unbounded|1|  
|`multitype_join`|Entrambi|Ordered|10|1|  
|`timer`|Origine|Non applicabile|Non applicabile|1|  
  
 Nelle sezioni seguenti vengono descritti i tipi di blocco dei messaggi in modo più dettagliato.  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="unbounded_buffer"></a>Classe unbounded_buffer  
 Il [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md) classe rappresenta una struttura di messaggistica asincrona di utilizzo generale. Questa classe archivia una coda di messaggi FIFO (First In, First Out) che possono essere letti da più destinazioni o in cui possono scrivere più origini. Quando una destinazione riceve un messaggio da un `unbounded_buffer` dell'oggetto, il messaggio viene rimosso dalla coda di messaggi. Pertanto, anche se un `unbounded_buffer` oggetto può avere più destinazioni, ogni messaggio verrà ricevuto da una sola destinazione. La classe `unbounded_buffer` è utile quando si vogliono passare più messaggi a un altro componente e tale componente deve ricevere ogni messaggio.  
  
### <a name="example"></a>Esempio  
 L'esempio seguente mostra la struttura di base sulle modalità di utilizzo con la `unbounded_buffer` classe. In questo esempio invia tre valori per un `unbounded_buffer` dell'oggetto e quindi legge i valori nuovamente dallo stesso oggetto.  
  
 [!code-cpp[concrt-unbounded_buffer-structure#1](../../parallel/concrt/codesnippet/cpp/asynchronous-message-blocks_1.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
334455  
```  
  
 Per un esempio completo che illustra come usare il `unbounded_buffer` classe, vedere [procedura: implementare vari modelli Producer-Consumer](../../parallel/concrt/how-to-implement-various-producer-consumer-patterns.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="overwrite_buffer"></a>Classe overwrite_buffer  
 Il [Concurrency:: overwrite_buffer](../../parallel/concrt/reference/overwrite-buffer-class.md) classe simile di `unbounded_buffer` classe, con la differenza che un `overwrite_buffer` oggetto archivia un solo messaggio. Inoltre, quando una destinazione riceve un messaggio da un `overwrite_buffer` dell'oggetto, il messaggio non viene rimosso dal buffer. Pertanto, più destinazioni riceveranno una copia del messaggio.  
  
 La `overwrite_buffer` classe è utile quando si desidera passare più messaggi a un altro componente, ma il componente necessita solo del valore più recente. Questa classe è utile anche quando si vuole trasmettere un messaggio a più componenti.  
  
### <a name="example"></a>Esempio  
 L'esempio seguente mostra la struttura di base sulle modalità di utilizzo con la `overwrite_buffer` classe. In questo esempio invia tre valori per un `overwrite _buffer` dell'oggetto e quindi legge il valore corrente dallo stesso oggetto tre volte. In questo esempio è simile all'esempio per la `unbounded_buffer` classe. Tuttavia, la `overwrite_buffer` classe archivia un solo messaggio. Inoltre, il runtime rimuove il messaggio da un `overwrite_buffer` dopo la lettura dell'oggetto.  
  
 [!code-cpp[concrt-overwrite_buffer-structure#1](../../parallel/concrt/codesnippet/cpp/asynchronous-message-blocks_2.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
555555  
```  
  
 Per un esempio completo che illustra come usare il `overwrite_buffer` classe, vedere [procedura: implementare vari modelli Producer-Consumer](../../parallel/concrt/how-to-implement-various-producer-consumer-patterns.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="single_assignment"></a>Classe single_assignment  
 Il [Concurrency:: single_assignment](../../parallel/concrt/reference/single-assignment-class.md) classe simile di `overwrite_buffer` classe, con la differenza che un `single_assignment` oggetto può essere scritto una sola volta. Come per la classe `overwrite_buffer`, quando da una destinazione riceve un messaggio da un oggetto `single_assignment`, il messaggio viene rimosso dalla coda di messaggi. Pertanto, più destinazioni riceveranno una copia del messaggio. La `single_assignment` classe è utile quando si desidera trasmettere un messaggio a più componenti.  
  
### <a name="example"></a>Esempio  
 L'esempio seguente mostra la struttura di base sulle modalità di utilizzo con la `single_assignment` classe. In questo esempio invia tre valori per un `single_assignment` dell'oggetto e quindi legge il valore corrente dallo stesso oggetto tre volte. In questo esempio è simile all'esempio per la `overwrite_buffer` classe. Sebbene sia il `overwrite_buffer` e `single_assignment` classi archiviano un singolo messaggio, la `single_assignment` classe può essere scritto una sola volta.  
  
 [!code-cpp[concrt-single_assignment-structure#1](../../parallel/concrt/codesnippet/cpp/asynchronous-message-blocks_3.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
333333  
```  
  
 Per un esempio completo che illustra come usare il `single_assignment` classe, vedere [procedura dettagliata: implementazione di future](../../parallel/concrt/walkthrough-implementing-futures.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="call"></a>Call (classe)  
 Il [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) funge da classe ricevitore del messaggio che esegue una funzione lavoro alla ricezione dei dati. Questa funzione di lavoro può essere un'espressione lambda, un oggetto funzione o un puntatore a funzione. Oggetto `call` oggetto si comporta in modo diverso da una chiamata di funzione ordinaria poiché agisce in parallelo con altri componenti che inviano messaggi a esso. Se un `call` oggetto sta eseguendo un'operazione quando viene ricevuto un messaggio, il messaggio viene aggiunto a una coda. Ogni `call` messaggi nell'ordine in cui vengono ricevuti in coda processi di oggetto.  
  
### <a name="example"></a>Esempio  
 L'esempio seguente mostra la struttura di base sulle modalità di utilizzo con la `call` classe. Questo esempio viene creato un `call` oggetto stampato il valore ricevuto nella console. Nell'esempio viene quindi inviato tre valori per il `call` oggetto. Perché il `call` oggetto elabora i messaggi in un thread separato, viene inoltre utilizzata una variabile del contatore e un [evento](../../parallel/concrt/reference/event-class.md) oggetto per garantire che il `call` oggetto elabora tutti i messaggi prima di `wmain` funzione restituisce.  
  
 [!code-cpp[concrt-call-structure#1](../../parallel/concrt/codesnippet/cpp/asynchronous-message-blocks_4.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
334455  
```  
  
 Per un esempio completo che illustra come usare il `call` classe, vedere [procedura: fornire funzioni lavoro alle classi call e transformer](../../parallel/concrt/how-to-provide-work-functions-to-the-call-and-transformer-classes.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="transformer"></a>Classe Transformer  
 Il [Concurrency:: transformer](../../parallel/concrt/reference/transformer-class.md) classe agisce come un ricevitore di messaggi e come il mittente del messaggio. Il `transformer` classe simile di `call` classe perché esegue una funzione di lavoro definiti dall'utente alla ricezione dei dati. Tuttavia, la `transformer` classe invia anche il risultato della funzione lavoro agli oggetti destinatario. Ad esempio un `call` oggetto, un `transformer` oggetto agisce in parallelo con altri componenti che inviano messaggi a esso. Se un `transformer` oggetto sta eseguendo un'operazione quando viene ricevuto un messaggio, il messaggio viene aggiunto a una coda. Ogni `transformer` oggetto elabora i messaggi in coda nell'ordine in cui vengono ricevuti.  
  
 La `transformer` classe invia il messaggio a una sola destinazione. Se si imposta la `_PTarget` parametro nel costruttore per `NULL`, in un secondo momento, è possibile specificare la destinazione chiamando il [Concurrency:: link_target](reference/source-block-class.md#link_target) metodo.  
  
 A differenza di tutti gli altri tipi di blocco di messaggi asincroni forniti dalla libreria di agenti, la `transformer` classe può agire su diversi tipi di input e output. La possibilità di trasformare i dati da un tipo a altro rende la `transformer` classe un componente fondamentale per molte reti simultanee. Inoltre, è possibile aggiungere funzionalità parallela più accurata nella funzione lavoro di un `transformer` oggetto.  
  
### <a name="example"></a>Esempio  
 L'esempio seguente mostra la struttura di base sulle modalità di utilizzo con la `transformer` classe. Questo esempio viene creato un `transformer` dell'oggetto che moltiplica ciascun input `int` valore per 0,33 per produrre un `double` valore come output. Nell'esempio riceve quindi i valori trasformati dalla stessa `transformer` dell'oggetto e li visualizza nella console.  
  
 [!code-cpp[concrt-transformer-structure#1](../../parallel/concrt/codesnippet/cpp/asynchronous-message-blocks_5.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
10.8914.5218.15  
```  
  
 Per un esempio completo che illustra come usare il `transformer` classe, vedere [procedura: usare la classe transformer in Pipeline di dati](../../parallel/concrt/how-to-use-transformer-in-a-data-pipeline.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="choice"></a>Classe Choice  
 Il [Concurrency:: Choice](../../parallel/concrt/reference/choice-class.md) classe seleziona il primo messaggio disponibile da un set di origini. Il `choice` classe rappresenta un meccanismo di flusso di controllo anziché un meccanismo di flusso di dati (l'argomento [libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md) vengono descritte le differenze tra flussi di dati e del flusso di controllo).  
  
 La lettura da un oggetto choice è simile alla chiamata di funzione API di Windows `WaitForMultipleObjects` quando ne ha il `bWaitAll` parametro impostato su `FALSE`. Tuttavia, la `choice` classe associa i dati dell'evento stesso anziché a un oggetto di sincronizzazione esterno.  
  

 In genere, si utilizza il `choice` classe con il [Concurrency:: Receive](reference/concurrency-namespace-functions.md#receive) funzione per flusso di controllo nell'applicazione. Utilizzare la `choice` classe quando è necessario effettuare una scelta tra i buffer dei messaggi che hanno tipi diversi. Utilizzare la `single_assignment` classe quando è necessario effettuare una scelta tra i buffer dei messaggi che hanno lo stesso tipo.  

  
 L'ordine in cui si collegano le origini per un `choice` oggetto è importante poiché può determinare il messaggio è stato selezionato. Ad esempio, si consideri il caso in cui si collega più buffer dei messaggi che contengono già un messaggio a un `choice` oggetto. Il `choice` oggetto seleziona il messaggio dalla prima origine a cui è collegato. Dopo aver collegato tutte le origini, di `choice` oggetto mantiene l'ordine in cui ogni origine riceve un messaggio.  
  
### <a name="example"></a>Esempio  

 L'esempio seguente mostra la struttura di base sulle modalità di utilizzo con la `choice` classe. Questo esempio viene utilizzato il [Concurrency:: make_choice](reference/concurrency-namespace-functions.md#make_choice) funzione per creare un `choice` oggetto che consente di selezionare tra tre blocchi dei messaggi. Nell'esempio viene quindi calcola diversi numeri di Fibonacci e archivia ogni risultato in un blocco di messaggio diversi. Nell'esempio viene quindi stampato nella console un messaggio in cui è basato sull'operazione completata per prima.  

  
 [!code-cpp[concrt-choice-structure#1](../../parallel/concrt/codesnippet/cpp/asynchronous-message-blocks_6.cpp)]  
  
 Questo esempio produce il seguente output di esempio:  
  
```Output  
fib35 received its value first. Result = 9227465  
```  
  
 Poiché l'attività che calcola il 35<sup>th</sup> non è garantito che il numero di Fibonacci completata per prima, può variare l'output di questo esempio.  
  

 Questo esempio viene utilizzato il [Concurrency:: parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke) algoritmo per calcolare i numeri di Fibonacci in parallelo. Per ulteriori informazioni su `parallel_invoke`, vedere [gli algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).  
  
 Per un esempio completo che illustra come usare il `choice` classe, vedere [procedura: selezionare tra le attività completate](../../parallel/concrt/how-to-select-among-completed-tasks.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="join"></a>Classi di join e multitype_join  
 Il [Concurrency:: join](../../parallel/concrt/reference/join-class.md) e [Concurrency:: multitype_join](../../parallel/concrt/reference/multitype-join-class.md) classi consentono di attendere che ogni membro di un set di origini ricevere un messaggio. La `join` classe agisce sugli oggetti di origine che hanno un tipo di messaggio comune. La `multitype_join` classe agisce sugli oggetti di origine che dispongono di diversi tipi di messaggio.  
  
 Lettura da un `join` o `multitype_join` oggetto simile alla chiamata di funzione API di Windows `WaitForMultipleObjects` quando ne ha il `bWaitAll` parametro impostato su `TRUE`. Tuttavia, come un `choice` oggetto `join` e `multitype_join` gli oggetti utilizzano un meccanismo degli eventi che associa i dati dell'evento stesso anziché a un oggetto di sincronizzazione esterno.  
  
 Lettura da un `join` oggetto produce un std::[vettore](../../standard-library/vector-class.md) oggetto. Lettura da un `multitype_join` oggetto produce un std::[tupla](../../standard-library/tuple-class.md) oggetto. Gli elementi vengono visualizzati in questi oggetti nello stesso ordine, come buffer di origine corrispondenti sono collegati al `join` o `multitype_join` oggetto. Poiché l'ordine in cui si collega origine memorizza nel buffer per un `join` o `multitype_join` oggetto è associato l'ordine degli elementi nella finestra di `vector` o `tuple` dell'oggetto, è consigliabile che non si scollega un buffer di origine esistente da un creare un join. Questo può causare un comportamento non specificato.  
  
### <a name="greedy-versus-non-greedy-joins"></a>E join Non-Greedy a confronto  
 Il `join` e `multitype_join` classi supportano il concetto di join greedy e non greedy. Oggetto *join greedy* accetta un messaggio da ciascuna delle sue origini come i messaggi diventano disponibili fino a quando non sono disponibili tutti i messaggi. Oggetto *join non-greedy* riceve i messaggi in due fasi. Innanzitutto, un join non-greedy attende fino a quando non viene offerto un messaggio da ognuna delle origini. In secondo luogo, dopo tutti i messaggi di origine sono disponibili, un join non-greedy tenta di riservare a ognuno di questi messaggi. Se è possibile prenotare ogni messaggio, utilizza tutti i messaggi e li propaga alla destinazione. In caso contrario, rilascia, o Annulla, le prenotazioni di messaggio e attende nuovamente per ogni origine di un messaggio.  
  
 Join greedy offrono prestazioni migliori rispetto ai join non greedy perché accettano messaggi immediatamente. Tuttavia, in casi rari, join greedy possono causare deadlock. Quando si dispone di più join che contengono uno o più oggetti di origine condivisa, utilizzare un join non-greedy.  
  
### <a name="example"></a>Esempio  

 L'esempio seguente mostra la struttura di base sulle modalità di utilizzo con la `join` classe. Questo esempio viene utilizzato il [Concurrency:: make_join](reference/concurrency-namespace-functions.md#make_join) funzione per creare un `join` oggetto che riceve da tre `single_assignment` oggetti. In questo esempio calcola diversi numeri di Fibonacci, archivia ogni risultato in un altro `single_assignment` oggetto e quindi stampa nella console di ogni risultato che il `join` contiene dell'oggetto. In questo esempio è simile all'esempio per il `choice` classe, con la differenza che la `join` classe attende che tutti i blocchi di messaggio di origine ricevere un messaggio.  
  
 [!code-cpp[concrt-join-structure#1](../../parallel/concrt/codesnippet/cpp/asynchronous-message-blocks_7.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
fib35 = 9227465fib37 = 24157817half_of_fib42 = 1.33957e+008  
```  

 Questo esempio viene utilizzato il [Concurrency:: parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke) algoritmo per calcolare i numeri di Fibonacci in parallelo. Per ulteriori informazioni su `parallel_invoke`, vedere [gli algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).  
  
 Per esempi completi che illustrano come usare il `join` classe, vedere [come: selezionare tra le attività completate](../../parallel/concrt/how-to-select-among-completed-tasks.md) e [procedura dettagliata: utilizzo della classe join per impedire un Deadlock](../../parallel/concrt/walkthrough-using-join-to-prevent-deadlock.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="timer"></a>Classe Timer  
 La concorrenza::[classe timer](../../parallel/concrt/reference/timer-class.md) funge da origine di un messaggio. Oggetto `timer` oggetto invia un messaggio a una destinazione dopo che è trascorso un periodo di tempo specificato. La `timer` classe è utile quando è necessario ritardare l'invio di un messaggio o si desidera inviare un messaggio a intervalli regolari.  
  

 La `timer` classe invia il messaggio a una sola destinazione. Se si imposta la `_PTarget` parametro nel costruttore per `NULL`, in un secondo momento, è possibile specificare la destinazione chiamando il [concurrency::ISource::link_target](reference/source-block-class.md#link_target) metodo.  

  
 Oggetto `timer` oggetto può essere ripetuto o non ripetuto. Per creare un oggetto timer ripetuto, passare `true` per il `_Repeating` parametro quando si chiama il costruttore. In caso contrario, passare `false` per il `_Repeating` parametro per creare un oggetto timer non ripetuto. Se il timer è ripetuto, invia lo stesso messaggio alla destinazione dopo ogni intervallo.  
  
 Crea la libreria di agenti `timer` oggetti nello stato non è stato avviato. Per avviare un oggetto timer, chiamare il [concurrency::timer::start](reference/timer-class.md#start) metodo. Per arrestare un `timer` oggetto, eliminare l'oggetto o una chiamata di [concurrency::timer::stop](reference/timer-class.md#stop) metodo. Per sospendere un timer ripetuto, chiamare il [concurrency::timer::pause](reference/timer-class.md#pause) metodo.  
  
### <a name="example"></a>Esempio  
 L'esempio seguente mostra la struttura di base sulle modalità di utilizzo con la `timer` classe. L'esempio Usa `timer` e `call` oggetti per segnalare lo stato di avanzamento di un'operazione di lunga durata.  
  
 [!code-cpp[concrt-timer-structure#1](../../parallel/concrt/codesnippet/cpp/asynchronous-message-blocks_8.cpp)]  
  
 Questo esempio produce il seguente output di esempio:  
  
```Output  
Computing fib(42)..................................................result is 267914296  
```  
  
 Per un esempio completo che illustra come usare il `timer` classe, vedere [procedura: inviare un messaggio a intervalli regolari](../../parallel/concrt/how-to-send-a-message-at-a-regular-interval.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="filtering"></a>Il filtro dei messaggi  
 Quando si crea un oggetto di blocco di messaggi, è possibile fornire un *funzione filter* che determina se il blocco dei messaggi è accettato o rifiutato un messaggio. Una funzione di filtro è utile per garantire che un blocco di messaggi riceve solo determinati valori.  
  
 Nell'esempio seguente viene illustrato come creare un `unbounded_buffer` oggetto che utilizza una funzione di filtro per accettare solo un numero pari. Il `unbounded_buffer` rifiuta i numeri dispari, oggetto e pertanto non li propaga ai relativi blocchi di destinazione.  
  
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
  
 Per eliminare la copia non necessaria dei dati, utilizzare la seconda forma della presenza di un tipo di aggregazione che verrà propagato dal valore.  
  
 Il filtro supporta messaggi di *flussi di dati* modello di programmazione, in cui i componenti eseguono calcoli alla ricezione dei dati. Per esempi che utilizzano funzioni di filtro per controllare il flusso di dati in una rete di passaggio del messaggio, vedere [procedura: utilizzare un filtro di blocco di messaggi](../../parallel/concrt/how-to-use-a-message-block-filter.md), [procedura dettagliata: creazione di un agente del flusso di dati](../../parallel/concrt/walkthrough-creating-a-dataflow-agent.md), e [ Procedura dettagliata: Creazione di una rete di elaborazione delle immagini](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="reservation"></a>Prenotazione dei messaggi  
 *Messaggio di prenotazione* consente di riservare un messaggio per un uso successivo di un blocco di messaggio. In genere, la prenotazione dei messaggi non viene utilizzata direttamente. Tuttavia, il messaggio di informazioni sulla prenotazione consentono una migliore comprendere il comportamento di alcuni tipi di blocchi di messaggi predefinito.  
  
 Prendere in considerazione i join greedy e non greedy. Entrambi questi usare prenotazione dei messaggi per riservare i messaggi per un uso successivo. Come descritto in precedenza, un join non-greedy riceve messaggi in due fasi. Durante la prima fase, un non-greedy `join` oggetto attende che ciascuna delle sue origini per ricevere un messaggio. Un join non-greedy tenta quindi di riservare a ognuno di questi messaggi. Se è possibile prenotare ogni messaggio, utilizza tutti i messaggi e li propaga alla destinazione. In caso contrario, rilascia, o Annulla, le prenotazioni di messaggio e attende nuovamente per ogni origine di un messaggio.  
  
 Un join greedy, anche da cui legga i messaggi di input un numero di origini, utilizza la prenotazione dei messaggi per leggere altri messaggi in attesa di ricevere un messaggio da ogni origine. Si consideri ad esempio un join greedy che riceve i messaggi dai blocchi di messaggi `A` e `B`. Se il join greedy riceve due messaggi da B, ma non ha ricevuto un messaggio da `A`, il join greedy Salva l'identificatore univoco del messaggio per il secondo messaggio da `B`. Dopo il join greedy riceve un messaggio da `A` e propaga questi messaggi, viene utilizzato l'identificatore del messaggio salvato per vedere se il secondo messaggio da `B` è ancora disponibile.  
  
 Quando si implementano i tipi di blocco di messaggi personalizzato, è possibile utilizzare la prenotazione dei messaggi. Per un esempio su come creare un tipo di blocco di messaggi personalizzato, vedere [procedura dettagliata: creazione di un blocco di messaggio personalizzato](../../parallel/concrt/walkthrough-creating-a-custom-message-block.md).  
  
 [[Torna all'inizio](#top)]  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)

