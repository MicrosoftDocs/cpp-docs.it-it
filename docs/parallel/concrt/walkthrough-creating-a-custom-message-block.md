---
title: 'Procedura dettagliata: Creazione di un blocco di messaggio personalizzato'
ms.date: 04/25/2019
helpviewer_keywords:
- creating custom message blocks Concurrency Runtime]
- custom message blocks, creating [Concurrency Runtime]
ms.assetid: 4c6477ad-613c-4cac-8e94-2c9e63cd43a1
ms.openlocfilehash: e897163a1d394228ac1d8f566e4b0d761fbeeb42
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62411344"
---
# <a name="walkthrough-creating-a-custom-message-block"></a>Procedura dettagliata: Creazione di un blocco di messaggio personalizzato

Questo documento descrive come creare un tipo di blocco di messaggio personalizzato che consente di ordinare i messaggi in arrivo in base alla priorità.

Anche se i tipi di blocchi di messaggio predefiniti forniscono un'ampia gamma di funzionalità, è possibile creare un proprio tipo di blocco di messaggio e personalizzarlo per soddisfare i requisiti dell'applicazione. Per una descrizione dei tipi di blocchi di messaggi predefiniti forniti dalla libreria di agenti asincroni, vedere [blocchi di messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md).

## <a name="prerequisites"></a>Prerequisiti

Prima di iniziare questa procedura dettagliata, leggere i documenti seguenti:

- [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)

- [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)

##  <a name="top"></a> Sezioni

Questa procedura dettagliata contiene le sezioni seguenti:

- [Progettazione di un blocco di messaggi personalizzato](#design)

- [La definizione della classe priority_buffer](#class)

- [Esempio completo](#complete)

##  <a name="design"></a> Progettazione di un blocco di messaggi personalizzato

Blocchi di messaggi utilizzati nelle operazioni di invio e ricezione di messaggi. Un blocco di messaggio che invia messaggi è noto come un *blocco di codice sorgente*. Un blocco di messaggi che riceve i messaggi è noto come un *blocco di destinazione*. Un blocco di messaggio che invia e riceve i messaggi è noto come un *blocco di propagazione*. La libreria di agenti viene utilizzata la classe astratta [Concurrency:: ISource](../../parallel/concrt/reference/isource-class.md) per rappresentare i blocchi di origine e la classe astratta [ITarget](../../parallel/concrt/reference/itarget-class.md) per rappresentare i blocchi di destinazione. Tipi di blocchi di messaggio che agiscono come origini derivano da `ISource`; tipi di blocchi di messaggio che agiscono come destinazioni di derivano da `ITarget`.

Anche se è possibile derivare il tipo di blocco di messaggio direttamente dal `ISource` e `ITarget`, la libreria di agenti definisce tre classi di base che eseguono molte delle funzionalità che sono comuni a tutti i tipi di blocchi di messaggio, ad esempio, la gestione degli errori e connettere i blocchi di messaggi in modo indipendente dalla concorrenza. Il [source_block](../../parallel/concrt/reference/source-block-class.md) deriva dalla classe `ISource` e invia i messaggi ad altri blocchi. Il [target_block](../../parallel/concrt/reference/target-block-class.md) deriva dalla classe `ITarget` e riceve messaggi da altri blocchi. Il [propagator_block](../../parallel/concrt/reference/propagator-block-class.md) deriva dalla classe `ISource` e `ITarget` e inviati messaggi ad altri blocchi e ne riceve i messaggi da altri blocchi. È consigliabile l'uso di queste tre classi di base per gestire i dettagli dell'infrastruttura in modo da potersi concentrare sul comportamento del blocco di messaggio.

Il `source_block`, `target_block`, e `propagator_block` classi sono modelli che sono parametri per un tipo che gestisce le connessioni o i collegamenti, tra i blocchi di origine e destinazione e in un tipo che gestisce la modalità di elaborazione dei messaggi. La libreria di agenti definisce due tipi di che eseguono Gestione dei collegamenti [Concurrency:: single_link_registry](../../parallel/concrt/reference/single-link-registry-class.md) e [Concurrency:: multi_link_registry](../../parallel/concrt/reference/multi-link-registry-class.md). Il `single_link_registry` classe consente di essere collegato a un'origine o a una destinazione di un blocco di messaggio. Il `multi_link_registry` classe consente di essere collegato a più origini o destinazioni più di un blocco di messaggio. La libreria di agenti definisce una classe che esegue la gestione di messaggi [Concurrency:: ordered_message_processor](../../parallel/concrt/reference/ordered-message-processor-class.md). Il `ordered_message_processor` classe consente blocchi di messaggi elaborare i messaggi nell'ordine in cui li riceve.

Per comprendere meglio come blocchi di messaggi correlati alle loro origini e destinazioni, si consideri l'esempio seguente. In questo esempio viene illustrata la dichiarazione del [Concurrency:: transformer](../../parallel/concrt/reference/transformer-class.md) classe.

[!code-cpp[concrt-priority-buffer#20](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_1.cpp)]

Il `transformer` deriva dalla classe `propagator_block`e quindi agisce come un blocco di origine sia come blocco di destinazione. Accetta i messaggi di tipo `_Input` e invia i messaggi di tipo `_Output`. Il `transformer` classe specifica `single_link_registry` come la gestione di collegamento per tutti i blocchi di destinazione e `multi_link_registry` come la gestione di collegamento per tutti i blocchi di origine. Pertanto, un `transformer` oggetto può avere fino a una destinazione e un numero illimitato di origini.

Una classe che deriva da `source_block` deve implementare i sei metodi: [propagate_to_any_targets](reference/source-block-class.md#propagate_to_any_targets), [accept_message](reference/source-block-class.md#accept_message), [reserve_message](reference/source-block-class.md#reserve_message), [ consume_message](reference/source-block-class.md#consume_message), [release_message](reference/source-block-class.md#release_message), e [resume_propagation](reference/source-block-class.md#resume_propagation). Una classe che deriva da `target_block` deve implementare il [propagate_message](reference/propagator-block-class.md#propagate_message) metodo e, facoltativamente, è possibile implementare il [send_message](reference/propagator-block-class.md#send_message) (metodo). Che deriva da `propagator_block` è funzionalmente equivalente alla derivazione da entrambe `source_block` e `target_block`.

Il `propagate_to_any_targets` viene chiamato dal runtime in modo sincrono o elaborazione dei messaggi in ingresso e propagati a tutti i messaggi in uscita. Il `accept_message` metodo viene chiamato da blocchi di destinazione per accettare i messaggi. Tipi di blocchi, molti dei messaggi, ad esempio `unbounded_buffer`, inviare messaggi solo alla destinazione prima che lo riceve. Pertanto, trasferisce la proprietà del messaggio alla destinazione. Tipi di blocco di altri messaggi, ad esempio [Concurrency:: overwrite_buffer](../../parallel/concrt/reference/overwrite-buffer-class.md), offrono messaggi a ognuno dei relativi blocchi di destinazione. Pertanto, `overwrite_buffer` crea una copia del messaggio per ciascuna delle relative destinazioni.

Il `reserve_message`, `consume_message`, `release_message`, e `resume_propagation` metodi consentono ai blocchi di messaggio partecipare alla prenotazione dei messaggi. Blocchi di destinazione chiamano il `reserve_message` metodo quando viene offerto un messaggio e avere a prenotare il messaggio per un uso successivo. Dopo un blocco di destinazione consente di riservare un messaggio, può chiamare le `consume_message` metodo da usare quel messaggio o `release_message` metodo per annullare la prenotazione. Come con le `accept_message` metodo, l'implementazione di `consume_message` possibile trasferire la proprietà del messaggio o restituire una copia del messaggio. Dopo un blocco di destinazione ha utilizzato o rilasciato un messaggio prenotato riservato, il runtime chiama il `resume_propagation` (metodo). In genere, questo metodo continua la propagazione dei messaggi, a partire dal messaggio successivo nella coda.

Il runtime chiama il `propagate_message` metodo per trasferire in modo asincrono un messaggio da un altro blocco a quello corrente. Il `send_message` è simile a metodo `propagate_message`, ad eccezione del fatto che in modo sincrono, anziché in modo asincrono, invia il messaggio a blocchi di destinazione. L'implementazione predefinita di `send_message` rifiuta tutti i messaggi in ingresso. Il runtime non viene chiamato uno di questi metodi se il messaggio non supera la funzione di filtro facoltative che è associata il blocco di destinazione. Per altre informazioni sui filtri messaggi, vedere [blocchi di messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md).

[[Torna all'inizio](#top)]

##  <a name="class"></a> La definizione della classe priority_buffer

Il `priority_buffer` classe è un tipo di blocco di messaggio personalizzato che consente di ordinare i messaggi in arrivo prima in base alla priorità e quindi in base all'ordine in cui i messaggi vengono ricevuti. Il `priority_buffer` classe è simile al [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md) poiché contiene una coda di messaggi e anche perché funge da un'origine e un blocco di messaggio di destinazione e può avere più origini e più destinazioni. Tuttavia, `unbounded_buffer` basi del messaggio propagazione solo sull'ordine in cui riceve messaggi dalle relative origini.

Il `priority_buffer` classe riceve i messaggi di tipo std::[tupla](../../standard-library/tuple-class.md) che contengono `PriorityType` e `Type` elementi. `PriorityType` fa riferimento al tipo che contiene la priorità di ogni messaggio. `Type` fa riferimento alla parte di dati del messaggio. Il `priority_buffer` classe invia i messaggi di tipo `Type`. Il `priority_buffer` classe gestisce anche due code di messaggi: un [std:: priority_queue](../../standard-library/priority-queue-class.md) oggetto per i messaggi in arrivo e oggetto std::[coda](../../standard-library/queue-class.md) oggetto per i messaggi in uscita. Ordinamento dei messaggi in base alla priorità è utile quando un `priority_buffer` oggetto riceve più messaggi contemporaneamente o quando riceve più messaggi prima che tutti i messaggi vengono letti dai consumer.

Oltre ai sette metodi che una classe che deriva da `propagator_block` deve implementare il `priority_buffer` classe anche le sostituzioni le `link_target_notification` e `send_message` metodi. Il `priority_buffer` classe definisce anche due metodi di supporto pubblici `enqueue` e `dequeue`e un metodo helper privati, `propagate_priority_order`.

La procedura seguente viene descritto come implementare il `priority_buffer` classe.

#### <a name="to-define-the-prioritybuffer-class"></a>Per definire la classe priority_buffer

1. Creare un file di intestazione C++ e denominarla `priority_buffer.h`. In alternativa, è possibile usare un file di intestazione esistente che fa parte del progetto.

1. In `priority_buffer.h`, aggiungere il codice seguente.

[!code-cpp[concrt-priority-buffer#1](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_2.h)]

1. Nel `std` dello spazio dei nomi, definire le specializzazioni della [std:: less](../../standard-library/less-struct.md) e [std:: Greater](../../standard-library/greater-struct.md) che agiscono sulla concorrenza::[messaggio](../../parallel/concrt/reference/message-class.md) oggetti.

[!code-cpp[concrt-priority-buffer#2](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_3.h)]

   Il `priority_buffer` classe archivi `message` gli oggetti in un `priority_queue` oggetto. Queste specializzazioni di tipo abilita la coda di priorità ordinare i messaggi in base alle rispettive priorità. La priorità è il primo elemento del `tuple` oggetto.

1. Nel `concurrencyex` dello spazio dei nomi, dichiarare il `priority_buffer` classe.

[!code-cpp[concrt-priority-buffer#3](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_4.h)]

   La classe `priority_buffer` deriva da `propagator_block`. Pertanto, possono entrambi inviare e ricevere messaggi. Il `priority_buffer` classe può disporre di più destinazioni che ricevono messaggi di tipo `Type`. Può inoltre avere più origini che inviano messaggi di tipo `tuple<PriorityType, Type>`.

1. Nel `private` sezione il `priority_buffer` classe, aggiungere le seguenti variabili membro.

[!code-cpp[concrt-priority-buffer#6](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_5.h)]

   Il `priority_queue` oggetto contiene i messaggi in ingresso; le `queue` oggetto contiene i messaggi in uscita. Oggetto `priority_buffer` oggetto può ricevere più messaggi contemporaneamente; il `critical_section` oggetto sincronizza l'accesso alla coda di messaggi di input.

1. Nel `private` sezione, definire il costruttore di copia e l'operatore di assegnazione. Ciò impedisce `priority_queue` può essere assegnato agli oggetti.

[!code-cpp[concrt-priority-buffer#7](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_6.h)]

1. Nel `public` sezione, definire i costruttori che sono comuni a molti tipi di blocchi di messaggio. Definire anche il distruttore.

[!code-cpp[concrt-priority-buffer#4](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_7.h)]

1. Nel `public` sezione, definire i metodi `enqueue` e `dequeue`. Questi metodi di supporto forniscono un modo alternativo per inviare e ricevere messaggi da un `priority_buffer` oggetto.

[!code-cpp[concrt-priority-buffer#5](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_8.h)]

9. Nel `protected` sezione, definire il `propagate_to_any_targets` (metodo).

[!code-cpp[concrt-priority-buffer#9](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_9.h)]

   Il `propagate_to_any_targets` metodo trasferisce il messaggio che si trova all'inizio della coda di input nella coda di output e propaga tutti i messaggi nella coda di output.

10. Nel `protected` sezione, definire il `accept_message` (metodo).

[!code-cpp[concrt-priority-buffer#8](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_10.h)]

   Quando un blocco di destinazione chiama il `accept_message` metodo, il `priority_buffer` classe trasferisce la proprietà del messaggio per il primo blocco di destinazione che lo accetta. (Ciò è simile al comportamento di `unbounded_buffer`.)

11. Nel `protected` sezione, definire il `reserve_message` (metodo).

[!code-cpp[concrt-priority-buffer#10](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_11.h)]

   Il `priority_buffer` classe consente a un blocco di destinazione per riservare un messaggio quando l'identificatore del messaggio specificato corrisponde all'identificatore del messaggio che si trova all'inizio della coda. In altre parole, una destinazione possibile prenotare il messaggio se la `priority_buffer` oggetto non ha ancora ricevuto un messaggio aggiuntivo e non è stato ancora propagato out quello corrente.

12. Nel `protected` sezione, definire il `consume_message` (metodo).

[!code-cpp[concrt-priority-buffer#11](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_12.h)]

   Chiama un blocco di destinazione `consume_message` per trasferire la proprietà del messaggio riservato.

13. Nel `protected` sezione, definire il `release_message` (metodo).

[!code-cpp[concrt-priority-buffer#12](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_13.h)]

   Chiama un blocco di destinazione `release_message` per annullare la prenotazione di un messaggio.

14. Nel `protected` sezione, definire il `resume_propagation` (metodo).

[!code-cpp[concrt-priority-buffer#13](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_14.h)]

   Il runtime chiama `resume_propagation` dopo un blocco di destinazione ha utilizzato o rilasciato un messaggio prenotato. Questo metodo propaga i messaggi presenti nella coda di output.

15. Nel `protected` sezione, definire il `link_target_notification` (metodo).

[!code-cpp[concrt-priority-buffer#14](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_15.h)]

   Il `_M_pReservedFor` variabile membro è definita dalla classe di base, `source_block`. Questa variabile membro fa riferimento al blocco di destinazione, se presente, che contiene una prenotazione per il messaggio che si trova all'inizio della coda di output. Il runtime chiama `link_target_notification` quando viene collegata una nuova destinazione per il `priority_buffer` oggetto. Questo metodo propaga i messaggi presenti nella coda di output se nessuna destinazione contiene una prenotazione.

16. Nel `private` sezione, definire il `propagate_priority_order` (metodo).

[!code-cpp[concrt-priority-buffer#15](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_16.h)]

   Questo metodo propaga tutti i messaggi dalla coda di output. Tutti i messaggi nella coda sono disponibile per ogni blocco di destinazione fino a quando non uno dei blocchi di destinazione accetta il messaggio. Il `priority_buffer` classe mantiene l'ordine dei messaggi in uscita. Pertanto, è necessario accettare il primo messaggio nella coda di output da un blocco di destinazione prima di questo metodo offre altri messaggi ai blocchi di destinazione.

17. Nel `protected` sezione, definire il `propagate_message` (metodo).

[!code-cpp[concrt-priority-buffer#16](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_17.h)]

   Il `propagate_message` metodo consente il `priority_buffer` classe per fungere da ricevitore del messaggio, o di destinazione. Questo metodo riceve il messaggio che viene offerto dal blocco di origine specificato e inserisce il messaggio nella coda di priorità. Il `propagate_message` metodo in modo asincrono invia quindi tutti i messaggi ai blocchi di destinazione di output.

   Il runtime chiama questo metodo quando si chiama il [Concurrency:: asend](reference/concurrency-namespace-functions.md#asend) (funzione) o quando il blocco di messaggi è connesso ad altri blocchi di messaggio.

18. Nel `protected` sezione, definire il `send_message` (metodo).

[!code-cpp[concrt-priority-buffer#17](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_18.h)]

   Il `send_message` è simile a metodo `propagate_message`. Tuttavia, vengono inviati i messaggi di output in modo sincrono anziché asincrono.

   Il runtime chiama questo metodo durante un'operazione di invio sincrona, ad esempio quando chiama il [Concurrency:: Send](reference/concurrency-namespace-functions.md#send) (funzione).

Il `priority_buffer` classe contiene gli overload del costruttore che sono tipici di molti tipi di blocchi di messaggio. Alcuni overload del costruttore accettano [Concurrency:: Scheduler](../../parallel/concrt/reference/scheduler-class.md) oppure [Concurrency:: ScheduleGroup](../../parallel/concrt/reference/schedulegroup-class.md) oggetti, che abilita il blocco di messaggi da parte di un'utilità di pianificazione di attività specifica. Altri overload del costruttore accettano una funzione di filtro. Funzioni di filtro consentono ai blocchi di messaggio accettare o rifiutare un messaggio in base al relativo payload. Per altre informazioni sui filtri messaggi, vedere [blocchi di messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md). Per altre informazioni sulle utilità di pianificazione, vedere [utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md).

Poiché il `priority_buffer` classe i messaggi vengono ordinati in base alla priorità e quindi in base all'ordine in cui i messaggi vengono ricevuti, questa classe è particolarmente utile quando vengono ricevuti i messaggi in modo asincrono, ad esempio, quando si chiama il [Concurrency::asend](reference/concurrency-namespace-functions.md#asend)funzione o quando il blocco di messaggi è connesso ad altri blocchi di messaggio.

[[Torna all'inizio](#top)]

##  <a name="complete"></a> L'esempio completo

Nell'esempio seguente viene illustrata la definizione completa del `priority_buffer` classe.

[!code-cpp[concrt-priority-buffer#18](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_19.h)]

Nell'esempio seguente vengono eseguite contemporaneamente numerose `asend` e [Concurrency:: Receive](reference/concurrency-namespace-functions.md#receive) operazioni su un `priority_buffer` oggetto.

[!code-cpp[concrt-priority-buffer#19](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_20.cpp)]

Questo esempio produce l'output di esempio seguente.

```Output
36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36
24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24
12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12
```

Il `priority_buffer` classe i messaggi vengono ordinati prima in base alla priorità e quindi in base all'ordine in cui vengono ricevuti i messaggi. In questo esempio vengono inseriti i messaggi con maggiore priorità numerica verso l'inizio della coda.

[[Torna all'inizio](#top)]

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio o la definizione del `priority_buffer` classe in un file denominato `priority_buffer.h` e il programma di test in un file denominato `priority_buffer.cpp` , quindi eseguire il comando seguente in Visual Studio Finestra del prompt dei comandi.

**CL.exe /EHsc priority_buffer. cpp**

## <a name="see-also"></a>Vedere anche

[Procedure dettagliate del runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)<br/>
[Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)
