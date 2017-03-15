---
title: "Procedura dettagliata: creazione di un blocco dei messaggi personalizzato | Microsoft Docs"
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
  - "creazione di blocchi di messaggi personalizzati [Runtime di concorrenza]"
  - "blocchi di messaggi personalizzati, creazione [Runtime di concorrenza]"
ms.assetid: 4c6477ad-613c-4cac-8e94-2c9e63cd43a1
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 18
---
# Procedura dettagliata: creazione di un blocco dei messaggi personalizzato
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo documento viene descritto come creare un tipo di blocco di messaggi personalizzato che consente di ordinare i messaggi in arrivo in base alla priorità.  
  
 Sebbene i tipi di blocchi di messaggio predefiniti forniscono un'ampia gamma di funzionalità, è possibile creare un nuovo tipo di blocco del messaggio e personalizzarlo per soddisfare i requisiti dell'applicazione. Per una descrizione dei tipi di blocchi di messaggi predefiniti forniti dalla libreria di agenti asincroni, vedere [blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md).  
  
## <a name="prerequisites"></a>Prerequisiti  
 Prima di iniziare questa procedura dettagliata, leggere i documenti seguenti:  
  
- [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)  
  
- [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)  
  
##  <a name="a-nametopa-sections"></a><a name="top"></a> Nelle sezioni  
 Questa procedura dettagliata sono incluse le sezioni seguenti:  
  
- [Progettazione di un blocco di messaggi personalizzato](#design)  
  
- [Definizione della classe priority_buffer](#class)  
  
- [L'esempio completo](#complete)  
  
##  <a name="a-namedesigna-designing-a-custom-message-block"></a><a name="design"></a> Progettazione di un blocco di messaggi personalizzato  
 Blocchi dei messaggi utilizzati nelle operazioni di invio e ricezione di messaggi. Un blocco di messaggi che invia messaggi è noto come un *blocco di origine*. Un blocco di messaggi che riceve i messaggi è noto come un *blocco di destinazione*. Un blocco di messaggi che invia e riceve messaggi è noto come un *blocco di propagazione*. La libreria di agenti utilizza la classe astratta [Concurrency:: ISource](../../parallel/concrt/reference/isource-class.md) per rappresentare i blocchi di origine e la classe astratta [Concurrency:: ITarget](../../parallel/concrt/reference/itarget-class.md) per rappresentare i blocchi di destinazione. Tipi di blocchi di messaggio che agiscono come origini derivano da `ISource`; tipi di blocchi di messaggio che agiscono come destinazioni derivano da `ITarget`.  
  
 Sebbene sia possibile derivare il tipo di blocco di messaggio direttamente da `ISource` e `ITarget`, la libreria di agenti definisce tre classi di base che eseguono la maggior parte delle funzionalità che sono comuni a tutti i tipi di blocchi di messaggi, ad esempio, come la gestione degli errori e la connessione messaggio blocchi insieme in modo indipendente dalla concorrenza. Il [Concurrency:: source_block](../../parallel/concrt/reference/source-block-class.md) classe deriva da `ISource` e invia messaggi ad altri blocchi. Il [Concurrency:: target_block](../../parallel/concrt/reference/target-block-class.md) classe deriva da `ITarget` e riceve messaggi da altri blocchi. Il [Concurrency:: propagator_block](../../parallel/concrt/reference/propagator-block-class.md) classe deriva da `ISource` e `ITarget` e vengono inviati messaggi ad altri blocchi e ne vengono ricevuti da altri blocchi. È consigliabile utilizzare queste tre classi di base per gestire i dettagli dell'infrastruttura in modo da potersi concentrare sul comportamento del blocco di messaggi.  
  
 Il `source_block`, `target_block`, e `propagator_block` le classi sono modelli che sono parametri per un tipo che gestisce le connessioni o collegamenti, tra i blocchi di origine e di destinazione e per un tipo che gestisce la modalità di elaborazione messaggi. La libreria di agenti definisce due tipi di attività di gestione di collegamento, [Concurrency:: single_link_registry](../../parallel/concrt/reference/single-link-registry-class.md) e [Concurrency:: multi_link_registry](../../parallel/concrt/reference/multi-link-registry-class.md). La `single_link_registry` classe consente di essere collegato a un'origine o a una destinazione di un blocco di messaggio. La `multi_link_registry` classe consente a un blocco di messaggi di essere collegato a più origini o destinazioni multiple. La libreria di agenti definisce una classe che esegue Gestione dei messaggi, [Concurrency:: ordered_message_processor](../../parallel/concrt/reference/ordered-message-processor-class.md). La `ordered_message_processor` classe consente ai blocchi di messaggi elaborare i messaggi nell'ordine in cui li riceve.  
  
 Per comprendere meglio come blocchi di messaggi correlati alle origini e destinazioni, si consideri l'esempio seguente. In questo esempio viene illustrata la dichiarazione del [Concurrency:: transformer](../../parallel/concrt/reference/transformer-class.md) (classe).  
  
 [!code-cpp[concrt-priority-buffer#20](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-a-custom-message-block_1.cpp)]  
  
 La `transformer` classe deriva da `propagator_block`, e pertanto funziona come un blocco di origine e un blocco di destinazione. Accetta i messaggi di tipo `_Input` e invia i messaggi di tipo `_Output`. La `transformer` classe specifica `single_link_registry` come gestore collegamenti per tutti i blocchi di destinazione e `multi_link_registry` come gestore collegamenti per tutti i blocchi di origine. Pertanto, un `transformer` oggetto può essere composto da una destinazione e un numero illimitato di origini.  
  
 Una classe che deriva da `source_block` deve implementare i sei metodi: [propagate_to_any_targets](../Topic/source_block::propagate_to_any_targets%20Method.md), [accept_message](../Topic/source_block::accept_message%20Method.md), [reserve_message](../Topic/source_block::reserve_message%20Method.md), [consume_message](../Topic/source_block::consume_message%20Method.md), [release_message](../Topic/source_block::release_message%20Method.md), e [resume_propagation](../Topic/source_block::resume_propagation%20Method.md). Una classe che deriva da `target_block` deve implementare il [propagate_message](../Topic/propagator_block::propagate_message%20Method.md) metodo e, facoltativamente, è possibile implementare il [send_message](../Topic/propagator_block::send_message%20Method.md) metodo. Derivazione da `propagator_block` è funzionalmente equivalente alla derivazione da entrambi `source_block` e `target_block`.  
  
 Il `propagate_to_any_targets` viene chiamato dal runtime in modo sincrono o elaborazione dei messaggi in ingresso e propagare i messaggi in uscita. Il `accept_message` metodo viene chiamato da blocchi di destinazione per accettare i messaggi. Molti tipi di blocchi dei messaggi, ad esempio `unbounded_buffer`, inviare messaggi solo per la prima destinazione che lo riceve. Pertanto, trasferisce la proprietà del messaggio alla destinazione. Tipi di blocco di altri messaggi, ad esempio [Concurrency:: overwrite_buffer](../../parallel/concrt/reference/overwrite-buffer-class.md), offrono messaggi a ognuno dei relativi blocchi di destinazione. Di conseguenza, `overwrite_buffer` Crea una copia del messaggio per ciascuna delle relative destinazioni.  
  
 Il `reserve_message`, `consume_message`, `release_message`, e `resume_propagation` metodi consentono ai blocchi di messaggi di partecipare alla prenotazione dei messaggi. Blocchi di destinazione chiamano il `reserve_message` metodo quando viene offerto un messaggio e hanno a prenotare il messaggio per un utilizzo successivo. Dopo un blocco di destinazione consente di riservare un messaggio, può chiamare il `consume_message` metodo per utilizzare tale messaggio o `release_message` metodo per annullare la prenotazione. Come con il `accept_message` (metodo), l'implementazione di `consume_message` possibile trasferire la proprietà del messaggio o restituire una copia del messaggio. Dopo un blocco di destinazione ha utilizzato o rilasciato un messaggio prenotato, il runtime chiama il `resume_propagation` metodo. In genere, questo metodo continua la propagazione dei messaggi, a partire dal messaggio successivo nella coda.  
  
 Il runtime chiama il `propagate_message` metodo per trasferire in modo asincrono un messaggio da un altro blocco a quello corrente. Il `send_message` analogo al metodo `propagate_message`, ad eccezione del fatto che in modo sincrono, anziché in modo asincrono, invia il messaggio ai blocchi di destinazione. L'implementazione predefinita di `send_message` Rifiuta tutti i messaggi in ingresso. Il runtime non chiama uno di questi metodi se il messaggio non passa la funzione di filtro facoltativo che è associata il blocco di destinazione. Per ulteriori informazioni sui filtri messaggi, vedere [blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="a-nameclassa-defining-the-prioritybuffer-class"></a><a name="class"></a> Definizione della classe priority_buffer  
 La `priority_buffer` classe è un tipo di blocco di messaggi personalizzato che consente di ordinare i messaggi in arrivo prima in base alla priorità e quindi in base all'ordine in cui i messaggi vengono ricevuti. Il `priority_buffer` classe è simile al [Concurrency:: unbounded_buffer](../Topic/unbounded_buffer%20Class.md) poiché contiene una coda di messaggi, nonché in quanto funge da un'origine e un blocco di messaggi di destinazione e può avere più origini e destinazioni multiple. Tuttavia, `unbounded_buffer` basi messaggio propagazione solo sull'ordine in cui riceve i messaggi dalle relative origini.  
  
 La `priority_buffer` classe riceve i messaggi di tipo std::[tupla](../../standard-library/tuple-class.md) contenenti `PriorityType` e `Type` gli elementi. `PriorityType` fa riferimento al tipo che contiene la priorità di ogni messaggio. `Type` fa riferimento alla parte di dati del messaggio. La `priority_buffer` classe invia i messaggi di tipo `Type`. La `priority_buffer` classe gestisce anche due code di messaggi: un [std:: priority_queue](../../standard-library/priority-queue-class.md) oggetto dei messaggi in arrivo e un std::[coda](../../standard-library/queue-class.md) oggetto dei messaggi in uscita. Ordinamento dei messaggi in base alla priorità è utile quando un `priority_buffer` oggetto riceve più messaggi contemporaneamente o quando riceve più messaggi prima di tutti i messaggi vengono letti dai consumer.  
  
 Oltre ai sette metodi che una classe che deriva da `propagator_block` deve implementare il `priority_buffer` anche classe esegue l'override di `link_target_notification` e `send_message` metodi. La `priority_buffer` classe definisce anche due metodi di supporto pubblici, `enqueue` e `dequeue`, e un metodo helper privati, `propagate_priority_order`.  
  
 La procedura seguente viene descritto come implementare la `priority_buffer` classe.  
  
#### <a name="to-define-the-prioritybuffer-class"></a>Per definire la classe priority_buffer  
  
1.  Creare un file di intestazione C++ e denominarla `priority_buffer.h`. In alternativa, è possibile utilizzare un file di intestazione esistente che fa parte del progetto.  
  
2.  In `priority_buffer.h`, aggiungere il codice seguente.  
  
 [!code-cpp[concrt-priority-buffer#1](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-a-custom-message-block_2.h)]  
  
3.  Nel `std` dello spazio dei nomi, definire le specializzazioni di [std:: less](../../standard-library/less-struct.md) e [std:: Greater](../../standard-library/greater-struct.md) che agiscono sulla concorrenza::[messaggio](../../parallel/concrt/reference/message-class.md) oggetti.  
  
 [!code-cpp[concrt-priority-buffer#2](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-a-custom-message-block_3.h)]  
  
     La `priority_buffer` classe archivi `message` gli oggetti in un `priority_queue` oggetto. In queste specializzazioni del tipo attivare la coda di priorità ordinare i messaggi in base alla priorità. La priorità è il primo elemento di `tuple` oggetto.  
  
4.  Nel `concurrencyex` dello spazio dei nomi, dichiarare la `priority_buffer` classe.  
  
 [!code-cpp[concrt-priority-buffer#3](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-a-custom-message-block_4.h)]  
  
     La classe `priority_buffer` deriva da `propagator_block`. Pertanto, possono entrambi inviare e ricevere messaggi. La `priority_buffer` classe può avere più destinazioni che ricevono messaggi di tipo `Type`. Può inoltre avere più origini che inviano messaggi di tipo `tuple<PriorityType, Type>`.  
  
5.  Nel `private` sezione la `priority_buffer` classe, aggiungere le seguenti variabili membro.  
  
 [!code-cpp[concrt-priority-buffer#6](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-a-custom-message-block_5.h)]  
  
     Il `priority_queue` oggetto contiene i messaggi in ingresso; il `queue` oggetto contiene i messaggi in uscita. Oggetto `priority_buffer` oggetto può ricevere più messaggi contemporaneamente; il `critical_section` oggetto sincronizza l'accesso alla coda di messaggi di input.  
  
6.  Nel `private` sezione, definire il costruttore di copia e l'operatore di assegnazione. In questo modo `priority_queue` può essere assegnato agli oggetti.  
  
 [!code-cpp[concrt-priority-buffer#7](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-a-custom-message-block_6.h)]  
  
7.  Nel `public` sezione, definire i costruttori che sono comuni a molti tipi di blocchi di messaggio. Definire anche il distruttore.  
  
 [!code-cpp[concrt-priority-buffer#4](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-a-custom-message-block_7.h)]  
  
8.  Nel `public` sezione, definire i metodi `enqueue` e `dequeue`. Questi metodi di supporto forniscono un modo alternativo per inviare e ricevere messaggi da un `priority_buffer` oggetto.  
  
 [!code-cpp[concrt-priority-buffer#5](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-a-custom-message-block_8.h)]  
  
9. Nel `protected` sezione, definire il `propagate_to_any_targets` metodo.  
  
 [!code-cpp[concrt-priority-buffer#9](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-a-custom-message-block_9.h)]  
  
     Il `propagate_to_any_targets` metodo trasferisce il messaggio che si trova all'inizio della coda di input per la coda di output e propaga tutti i messaggi nella coda di output.  
  
10. Nel `protected` sezione, definire il `accept_message` metodo.  
  
 [!code-cpp[concrt-priority-buffer#8](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-a-custom-message-block_10.h)]  
  
     Quando un blocco di destinazione chiama il `accept_message` (metodo), la `priority_buffer` classe proprietà del messaggio viene trasferita al blocco di destinazione prima che lo accetta. (Questo è simile al comportamento di `unbounded_buffer`.)  
  
11. Nel `protected` sezione, definire il `reserve_message` metodo.  
  
 [!code-cpp[concrt-priority-buffer#10](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-a-custom-message-block_11.h)]  
  
     La `priority_buffer` classe consente a un blocco di destinazione per riservare un messaggio quando l'identificatore del messaggio specificato corrisponde all'identificatore del messaggio che si trova all'inizio della coda. In altre parole, una destinazione può prenotare il messaggio se la `priority_buffer` oggetto non ha ancora ricevuto un messaggio aggiuntivo e non è stato ancora propagato all'esterno quello corrente.  
  
12. Nel `protected` sezione, definire il `consume_message` metodo.  
  
 [!code-cpp[concrt-priority-buffer#11](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-a-custom-message-block_12.h)]  
  
     Un blocco di destinazione chiama `consume_message` per trasferire la proprietà del messaggio è riservato.  
  
13. Nel `protected` sezione, definire il `release_message` metodo.  
  
 [!code-cpp[concrt-priority-buffer#12](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-a-custom-message-block_13.h)]  
  
     Un blocco di destinazione chiama `release_message` per annullare la prenotazione di un messaggio.  
  
14. Nel `protected` sezione, definire il `resume_propagation` metodo.  
  
 [!code-cpp[concrt-priority-buffer#13](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-a-custom-message-block_14.h)]  
  
     Il runtime chiama `resume_propagation` dopo un blocco di destinazione ha utilizzato o rilasciato un messaggio riservato. Questo metodo propaga i messaggi presenti nella coda di output.  
  
15. Nel `protected` sezione, definire il `link_target_notification` metodo.  
  
 [!code-cpp[concrt-priority-buffer#14](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-a-custom-message-block_15.h)]  
  
     Il `_M_pReservedFor` variabile membro è definita dalla classe di base, `source_block`. Questa variabile membro punta al blocco di destinazione, se presente, che contiene una prenotazione per il messaggio che si trova all'inizio della coda di output. Il runtime chiama `link_target_notification` quando una nuova destinazione è collegata il `priority_buffer` oggetto. Questo metodo propaga i messaggi presenti nella coda di output se nessuna destinazione contiene una prenotazione.  
  
16. Nel `private` sezione, definire il `propagate_priority_order` metodo.  
  
 [!code-cpp[concrt-priority-buffer#15](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-a-custom-message-block_16.h)]  
  
     Questo metodo vengono propagati all'esterno tutti i messaggi dalla coda in uscita. Tutti i messaggi nella coda sono offerto a ogni blocco di destinazione finché uno dei blocchi di destinazione accetta il messaggio. La `priority_buffer` classe mantiene l'ordine dei messaggi in uscita. Di conseguenza, il primo messaggio nella coda di output deve essere accettato da un blocco di destinazione prima di questo metodo offre qualsiasi altro messaggio ai blocchi di destinazione.  
  
17. Nel `protected` sezione, definire il `propagate_message` metodo.  
  
 [!code-cpp[concrt-priority-buffer#16](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-a-custom-message-block_17.h)]  
  
     Il `propagate_message` metodo consente la `priority_buffer` classe per fungere da ricevitore del messaggio o di destinazione. Questo metodo riceve il messaggio che viene offerto dal blocco di origine fornito e inserisce il messaggio nella coda di priorità. Il `propagate_message` metodo quindi invia in modo asincrono tutti i messaggi ai blocchi di destinazione di output.  
  
     Il runtime chiama questo metodo quando si chiama il [Concurrency:: asend](../Topic/asend%20Function.md) funzione o quando il blocco dei messaggi è connesso ad altri blocchi di messaggi.  
  
18. Nel `protected` sezione, definire il `send_message` metodo.  
  
 [!code-cpp[concrt-priority-buffer#17](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-a-custom-message-block_18.h)]  
  
     Il `send_message` analogo al metodo `propagate_message`. Tuttavia, vengono inviati i messaggi di output in modo sincrono anziché asincrono.  
  
     Il runtime chiama questo metodo durante un'operazione di invio sincrona, ad esempio quando si chiama il [Concurrency:: Send](../Topic/send%20Function.md) (funzione).  
  
 La `priority_buffer` classe contiene overload del costruttore che sono tipici di molti tipi di blocchi di messaggio. Alcuni overload del costruttore accettano [Concurrency:: Scheduler](../../parallel/concrt/reference/scheduler-class.md) o [Concurrency:: ScheduleGroup](../../parallel/concrt/reference/schedulegroup-class.md) gli oggetti che consentono il blocco di messaggi da gestire con una specifica utilità di pianificazione. Altri overload del costruttore accettano una funzione di filtro. Funzioni di filtro consentono ai blocchi di messaggi di accettare o rifiutare un messaggio in base al relativo payload. Per ulteriori informazioni sui filtri messaggi, vedere [blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md). Per ulteriori informazioni sulle utilità di pianificazione, vedere [utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md).  
  
 Poiché la `priority_buffer` classe i messaggi vengono ordinati in base alla priorità e quindi in base all'ordine in cui i messaggi vengono ricevuti, questa classe è utile quando riceve i messaggi in modo asincrono, ad esempio, quando si chiama il [Concurrency:: asend](../Topic/asend%20Function.md) funzione o quando il blocco dei messaggi è connesso ad altri blocchi di messaggi.  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="a-namecompletea-the-complete-example"></a><a name="complete"></a> L'esempio completo  
 Nell'esempio seguente viene illustrata la definizione completa della `priority_buffer` classe.  
  
 [!code-cpp[concrt-priority-buffer#18](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-a-custom-message-block_19.h)]  
  
 Nell'esempio seguente vengono eseguite contemporaneamente un numero di `asend` e [Concurrency:: Receive](../Topic/receive%20Function.md) operazioni su un `priority_buffer` oggetto.  
  
 [!code-cpp[concrt-priority-buffer#19](../../parallel/concrt/codesnippet/CPP/walkthrough-creating-a-custom-message-block_20.cpp)]  
  
 In questo esempio produce il seguente output di esempio.  
  
```Output  
36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36  
24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24  
12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12  
```  
  
 La `priority_buffer` classe i messaggi vengono ordinati prima in base alla priorità e quindi in base all'ordine in cui riceve i messaggi. In questo esempio vengono inseriti i messaggi con priorità numerica maggiore verso l'inizio della coda.  
  
 [[Torna all'inizio](#top)]  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio o la definizione della `priority_buffer` classe in un file denominato `priority_buffer.h` e il programma di test in un file denominato `priority_buffer.cpp` quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc priority_buffer. cpp**  
  
## <a name="see-also"></a>Vedere anche  
 [Procedure dettagliate del Runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)   
 [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)   
 [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)
