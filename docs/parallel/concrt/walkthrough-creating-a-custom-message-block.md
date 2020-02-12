---
title: 'Procedura dettagliata: creazione di un blocco dei messaggi personalizzato'
ms.date: 04/25/2019
helpviewer_keywords:
- creating custom message blocks Concurrency Runtime]
- custom message blocks, creating [Concurrency Runtime]
ms.assetid: 4c6477ad-613c-4cac-8e94-2c9e63cd43a1
ms.openlocfilehash: a29ed382d67b91443bd13e029af2a37c42ee834d
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77142821"
---
# <a name="walkthrough-creating-a-custom-message-block"></a>Procedura dettagliata: creazione di un blocco dei messaggi personalizzato

In questo documento viene descritto come creare un tipo di blocco di messaggi personalizzato che ordina i messaggi in arrivo in base alla priorità.

Sebbene i tipi di blocchi di messaggi predefiniti forniscano una vasta gamma di funzionalità, è possibile creare un tipo di blocco di messaggi personalizzato e personalizzarlo per soddisfare i requisiti dell'applicazione. Per una descrizione dei tipi di blocchi di messaggi predefiniti forniti dalla libreria di agenti asincroni, vedere la pagina relativa ai [blocchi di messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md).

## <a name="prerequisites"></a>Prerequisites

Prima di iniziare questa procedura dettagliata, leggere i documenti seguenti:

- [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)

- [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)

## <a name="top"></a> Sezioni

Questa procedura dettagliata contiene le sezioni seguenti:

- [Progettazione di un blocco di messaggi personalizzato](#design)

- [Definizione della classe priority_buffer](#class)

- [Esempio completo](#complete)

## <a name="design"></a>Progettazione di un blocco di messaggi personalizzato

I blocchi di messaggi partecipano all'azione di invio e ricezione dei messaggi. Un blocco di messaggi che invia messaggi è noto come *blocco di origine*. Un blocco di messaggi che riceve i messaggi è noto come *blocco di destinazione*. Un blocco di messaggi che invia e riceve messaggi è noto come *blocco di propagazione*. La libreria di agenti usa la classe astratta [Concurrency:: ISource](../../parallel/concrt/reference/isource-class.md) per rappresentare i blocchi di origine e la classe astratta [Concurrency:: ITarget](../../parallel/concrt/reference/itarget-class.md) per rappresentare i blocchi di destinazione. I tipi di blocchi di messaggi che fungono da origini derivano da `ISource`; i tipi di blocchi di messaggi che fungono da destinazioni derivano da `ITarget`.

Sebbene sia possibile derivare il tipo di blocco di messaggi direttamente da `ISource` e `ITarget`, la libreria di agenti definisce tre classi di base che eseguono gran parte delle funzionalità comuni a tutti i tipi di blocchi di messaggi, ad esempio la gestione degli errori e la connessione dei blocchi di messaggi in modo indipendente dalla concorrenza. La classe [Concurrency:: source_block](../../parallel/concrt/reference/source-block-class.md) deriva da `ISource` e invia messaggi ad altri blocchi. La classe [Concurrency:: target_block](../../parallel/concrt/reference/target-block-class.md) deriva da `ITarget` e riceve messaggi da altri blocchi. La classe [Concurrency::p ropagator_block](../../parallel/concrt/reference/propagator-block-class.md) deriva da `ISource` e `ITarget` e invia messaggi ad altri blocchi e riceve messaggi da altri blocchi. Si consiglia di utilizzare queste tre classi di base per gestire i dettagli dell'infrastruttura, in modo da potersi concentrare sul comportamento del blocco del messaggio.

Le classi `source_block`, `target_block`e `propagator_block` sono modelli con parametri in un tipo che gestisce le connessioni, o collegamenti, tra i blocchi di origine e di destinazione e su un tipo che gestisce la modalità di elaborazione dei messaggi. La libreria di agenti definisce due tipi che eseguono la gestione dei collegamenti, [Concurrency:: single_link_registry](../../parallel/concrt/reference/single-link-registry-class.md) e [Concurrency:: multi_link_registry](../../parallel/concrt/reference/multi-link-registry-class.md). La classe `single_link_registry` consente il collegamento di un blocco di messaggi a un'origine o a una destinazione. La classe `multi_link_registry` consente il collegamento di un blocco di messaggi a più origini o più destinazioni. La libreria di agenti definisce una classe che esegue la gestione dei messaggi, [Concurrency:: ordered_message_processor](../../parallel/concrt/reference/ordered-message-processor-class.md). La classe `ordered_message_processor` consente ai blocchi di messaggi di elaborare i messaggi nell'ordine in cui vengono ricevuti.

Per comprendere meglio il modo in cui i blocchi di messaggi sono correlati alle relative origini e destinazioni, si consideri l'esempio seguente. In questo esempio viene illustrata la dichiarazione della classe [Concurrency:: Transformer](../../parallel/concrt/reference/transformer-class.md) .

[!code-cpp[concrt-priority-buffer#20](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_1.cpp)]

La classe `transformer` deriva da `propagator_block`e pertanto agisce sia come blocco di origine sia come blocco di destinazione. Accetta messaggi di tipo `_Input` e invia messaggi di tipo `_Output`. La classe `transformer` specifica `single_link_registry` come gestione collegamenti per tutti i blocchi di destinazione e `multi_link_registry` come gestione collegamenti per qualsiasi blocco di origine. Pertanto, un oggetto `transformer` può avere fino a una destinazione e un numero illimitato di origini.

Una classe che deriva da `source_block` deve implementare sei metodi: [propagate_to_any_targets](reference/source-block-class.md#propagate_to_any_targets), [accept_message](reference/source-block-class.md#accept_message), [reserve_message](reference/source-block-class.md#reserve_message), [consume_message](reference/source-block-class.md#consume_message), [release_message](reference/source-block-class.md#release_message)e [resume_propagation](reference/source-block-class.md#resume_propagation). Una classe che deriva da `target_block` deve implementare il metodo [propagate_message](reference/propagator-block-class.md#propagate_message) e può implementare facoltativamente il metodo [send_message](reference/propagator-block-class.md#send_message) . La derivazione da `propagator_block` è equivalente dal punto di vista funzionale alla derivazione da `source_block` e `target_block`.

Il metodo `propagate_to_any_targets` viene chiamato dal runtime per elaborare in modo asincrono o sincrono tutti i messaggi in arrivo e propagare tutti i messaggi in uscita. Il metodo `accept_message` viene chiamato dai blocchi di destinazione per accettare i messaggi. Molti tipi di blocchi di messaggi, ad esempio `unbounded_buffer`, inviano messaggi solo alla prima destinazione che lo riceveranno. Pertanto, trasferisce la proprietà del messaggio alla destinazione. Altri tipi di blocchi di messaggi, ad esempio [Concurrency:: overwrite_buffer](../../parallel/concrt/reference/overwrite-buffer-class.md), offrono messaggi a ognuno dei blocchi di destinazione. Pertanto, `overwrite_buffer` crea una copia del messaggio per ogni destinazione.

I metodi `reserve_message`, `consume_message`, `release_message`e `resume_propagation` consentono ai blocchi di messaggi di partecipare alla prenotazione dei messaggi. I blocchi di destinazione chiamano il metodo `reserve_message` quando vengono offerti un messaggio e devono riservare il messaggio per un uso successivo. Quando un blocco di destinazione riserva un messaggio, può chiamare il metodo `consume_message` per utilizzare il messaggio o il metodo `release_message` per annullare la prenotazione. Come nel caso del metodo `accept_message`, l'implementazione di `consume_message` può trasferire la proprietà del messaggio o restituire una copia del messaggio. Dopo che un blocco di destinazione USA o rilascia un messaggio riservato, il runtime chiama il metodo `resume_propagation`. In genere, questo metodo continua la propagazione dei messaggi, a partire dal messaggio successivo nella coda.

Il runtime chiama il metodo `propagate_message` per trasferire in modo asincrono un messaggio da un altro blocco a quello corrente. Il metodo `send_message` è simile a `propagate_message`, ad eccezione del fatto che in modo sincrono, anziché in modo asincrono, invia il messaggio ai blocchi di destinazione. L'implementazione predefinita di `send_message` rifiuta tutti i messaggi in arrivo. Il runtime non chiama uno di questi metodi se il messaggio non passa la funzione di filtro facoltativa associata al blocco di destinazione. Per ulteriori informazioni sui filtri messaggi, vedere la pagina relativa ai [blocchi di messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md).

[[Torna all'inizio](#top)]

## <a name="class"></a>Definizione della classe priority_buffer

La classe `priority_buffer` è un tipo di blocco di messaggi personalizzato che ordina i messaggi in arrivo prima per priorità, quindi in base all'ordine in cui vengono ricevuti i messaggi. La classe `priority_buffer` è simile alla classe [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md) perché contiene una coda di messaggi e anche perché funge da blocco di origine e di messaggio di destinazione e può avere sia più origini che più destinazioni. Tuttavia, `unbounded_buffer` basa la propagazione dei messaggi solo nell'ordine in cui riceve i messaggi dalle relative origini.

La classe `priority_buffer` riceve messaggi di tipo std::[Tuple](../../standard-library/tuple-class.md) che contengono elementi `PriorityType` e `Type`. `PriorityType` si riferisce al tipo che include la priorità di ogni messaggio; `Type` si riferisce alla parte relativa ai dati del messaggio. La classe `priority_buffer` invia messaggi di tipo `Type`. La classe `priority_buffer` gestisce anche due code di messaggi: un oggetto [std::p riority_queue](../../standard-library/priority-queue-class.md) per i messaggi in arrivo e un oggetto std::[queue](../../standard-library/queue-class.md) per i messaggi in uscita. L'ordinamento dei messaggi per priorità è utile quando un oggetto `priority_buffer` riceve più messaggi contemporaneamente o quando riceve più messaggi prima che i messaggi vengano letti dai consumer.

Oltre ai sette metodi che devono essere implementati da una classe che deriva da `propagator_block`, anche la classe `priority_buffer` esegue l'override dei metodi `link_target_notification` e `send_message`. La classe `priority_buffer` definisce inoltre due metodi helper pubblici, `enqueue` e `dequeue`e un metodo helper privato, `propagate_priority_order`.

Nella procedura riportata di seguito viene descritto come implementare la classe `priority_buffer`.

#### <a name="to-define-the-priority_buffer-class"></a>Per definire la classe priority_buffer

1. Creare un C++ file di intestazione e denominarlo `priority_buffer.h`. In alternativa, è possibile usare un file di intestazione esistente che fa parte del progetto.

1. In `priority_buffer.h`aggiungere il codice seguente.

[!code-cpp[concrt-priority-buffer#1](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_2.h)]

1. Nello spazio dei nomi `std` definire specializzazioni di [std:: less](../../standard-library/less-struct.md) e [std:: Greater](../../standard-library/greater-struct.md) che agiscono sugli oggetti Concurrency::[Message](../../parallel/concrt/reference/message-class.md) .

[!code-cpp[concrt-priority-buffer#2](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_3.h)]

   La classe `priority_buffer` archivia `message` oggetti in un oggetto `priority_queue`. Queste specializzazioni di tipi consentono alla coda di priorità di ordinare i messaggi in base alla priorità. La priorità è il primo elemento dell'oggetto `tuple`.

1. Nello spazio dei nomi `concurrencyex` dichiarare la classe `priority_buffer`.

[!code-cpp[concrt-priority-buffer#3](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_4.h)]

   La classe `priority_buffer` deriva da `propagator_block`. Pertanto, può inviare e ricevere messaggi. La classe `priority_buffer` può avere più destinazioni che ricevono messaggi di tipo `Type`. Può inoltre avere più origini che inviano messaggi di tipo `tuple<PriorityType, Type>`.

1. Nella sezione `private` della classe `priority_buffer` aggiungere le variabili membro seguenti.

[!code-cpp[concrt-priority-buffer#6](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_5.h)]

   L'oggetto `priority_queue` include i messaggi in arrivo. l'oggetto `queue` include i messaggi in uscita. Un oggetto `priority_buffer` può ricevere più messaggi contemporaneamente; l'oggetto `critical_section` sincronizza l'accesso alla coda dei messaggi di input.

1. Nella sezione `private` definire il costruttore di copia e l'operatore di assegnazione. In questo modo si impedisce l'assegnazione di oggetti `priority_queue`.

[!code-cpp[concrt-priority-buffer#7](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_6.h)]

1. Nella sezione `public` definire i costruttori comuni a molti tipi di blocchi di messaggi. Definire anche il distruttore.

[!code-cpp[concrt-priority-buffer#4](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_7.h)]

1. Nella sezione `public` definire i metodi `enqueue` e `dequeue`. Questi metodi helper rappresentano una modalità alternativa per inviare e ricevere messaggi da un oggetto `priority_buffer`.

[!code-cpp[concrt-priority-buffer#5](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_8.h)]

9. Nella sezione `protected` definire il metodo `propagate_to_any_targets`.

[!code-cpp[concrt-priority-buffer#9](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_9.h)]

   Il metodo `propagate_to_any_targets` trasferisce il messaggio che si trova all'inizio della coda di input alla coda di output e propaga tutti i messaggi nella coda di output.

10. Nella sezione `protected` definire il metodo `accept_message`.

[!code-cpp[concrt-priority-buffer#8](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_10.h)]

   Quando un blocco di destinazione chiama il metodo `accept_message`, la classe `priority_buffer` trasferisce la proprietà del messaggio al primo blocco di destinazione che lo accetta. Questo comportamento è simile a quello di `unbounded_buffer`.

11. Nella sezione `protected` definire il metodo `reserve_message`.

[!code-cpp[concrt-priority-buffer#10](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_11.h)]

   La classe `priority_buffer` consente a un blocco di destinazione di riservare un messaggio quando l'identificatore del messaggio fornito corrisponde all'identificatore del messaggio che si trova all'inizio della coda. In altre parole, una destinazione può riservare il messaggio se l'oggetto `priority_buffer` non ha ancora ricevuto un messaggio aggiuntivo e non ha ancora propagato quello corrente.

12. Nella sezione `protected` definire il metodo `consume_message`.

[!code-cpp[concrt-priority-buffer#11](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_12.h)]

   Un blocco di destinazione chiama `consume_message` per trasferire la proprietà del messaggio riservato.

13. Nella sezione `protected` definire il metodo `release_message`.

[!code-cpp[concrt-priority-buffer#12](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_13.h)]

   Un blocco di destinazione chiama `release_message` per annullare la prenotazione a un messaggio.

14. Nella sezione `protected` definire il metodo `resume_propagation`.

[!code-cpp[concrt-priority-buffer#13](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_14.h)]

   Il runtime chiama `resume_propagation` dopo che un blocco di destinazione USA o rilascia un messaggio riservato. Questo metodo propaga tutti i messaggi presenti nella coda di output.

15. Nella sezione `protected` definire il metodo `link_target_notification`.

[!code-cpp[concrt-priority-buffer#14](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_15.h)]

   La variabile membro `_M_pReservedFor` è definita dalla classe base, `source_block`. Questa variabile membro punta al blocco di destinazione, se presente, che contiene una prenotazione al messaggio che si trova all'inizio della coda di output. Il runtime chiama `link_target_notification` quando una nuova destinazione è collegata all'oggetto `priority_buffer`. Questo metodo propaga tutti i messaggi presenti nella coda di output se nessuna destinazione contiene una prenotazione.

16. Nella sezione `private` definire il metodo `propagate_priority_order`.

[!code-cpp[concrt-priority-buffer#15](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_16.h)]

   Questo metodo propaga tutti i messaggi dalla coda di output. Ogni messaggio nella coda viene offerto a ogni blocco di destinazione fino a quando uno dei blocchi di destinazione non accetta il messaggio. La classe `priority_buffer` conserva l'ordine dei messaggi in uscita. Pertanto, il primo messaggio nella coda di output deve essere accettato da un blocco di destinazione prima che questo metodo offra qualsiasi altro messaggio ai blocchi di destinazione.

17. Nella sezione `protected` definire il metodo `propagate_message`.

[!code-cpp[concrt-priority-buffer#16](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_17.h)]

   Il metodo `propagate_message` consente alla classe `priority_buffer` di fungere da destinatario o destinazione del messaggio. Questo metodo riceve il messaggio offerto dal blocco di origine fornito e lo inserisce nella coda di priorità. Il metodo `propagate_message` quindi invia in modo asincrono tutti i messaggi di output ai blocchi di destinazione.

   Il runtime chiama questo metodo quando si chiama la funzione [Concurrency:: asend](reference/concurrency-namespace-functions.md#asend) o quando il blocco di messaggi è connesso ad altri blocchi di messaggi.

18. Nella sezione `protected` definire il metodo `send_message`.

[!code-cpp[concrt-priority-buffer#17](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_18.h)]

   Il metodo `send_message` è simile a `propagate_message`. Invia tuttavia i messaggi di output in modo sincrono anziché in modo asincrono.

   Questo metodo viene chiamato dal runtime durante un'operazione di invio sincrona, ad esempio quando si chiama la funzione [Concurrency:: Send](reference/concurrency-namespace-functions.md#send) .

La classe `priority_buffer` contiene overload del costruttore tipici in molti tipi di blocchi di messaggi. Alcuni overload del costruttore accettano oggetti [Concurrency:: Scheduler](../../parallel/concrt/reference/scheduler-class.md) o [Concurrency:: ScheduleGroup](../../parallel/concrt/reference/schedulegroup-class.md) , che consentono la gestione del blocco del messaggio da parte di un'utilità di pianificazione specifica. Altri overload del costruttore accettano una funzione di filtro. Le funzioni di filtro consentono ai blocchi di messaggi di accettare o rifiutare un messaggio sulla base del payload. Per ulteriori informazioni sui filtri messaggi, vedere la pagina relativa ai [blocchi di messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md). Per ulteriori informazioni sulle utilità di pianificazione delle attività, vedere [utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md).

Poiché la classe `priority_buffer` Ordina i messaggi in base alla priorità e quindi in base all'ordine in cui vengono ricevuti i messaggi, questa classe è particolarmente utile quando riceve messaggi in modo asincrono, ad esempio quando si chiama la funzione [Concurrency:: asend](reference/concurrency-namespace-functions.md#asend) o quando il blocco di messaggi è connesso ad altri blocchi di messaggi.

[[Torna all'inizio](#top)]

## <a name="complete"></a>Esempio completo

Nell'esempio seguente viene illustrata la definizione completa della classe `priority_buffer`.

[!code-cpp[concrt-priority-buffer#18](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_19.h)]

Nell'esempio seguente vengono eseguite simultaneamente un numero di operazioni di `asend` e di [concorrenza:: ricezione](reference/concurrency-namespace-functions.md#receive) su un oggetto `priority_buffer`.

[!code-cpp[concrt-priority-buffer#19](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_20.cpp)]

Questo esempio produce l'output di esempio seguente.

```Output
36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36
24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24
12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12
```

La classe `priority_buffer` Ordina i messaggi prima per priorità, quindi in base all'ordine in cui riceve i messaggi. In questo esempio, i messaggi con priorità numerica maggiore vengono inseriti nella parte anteriore della coda.

[[Torna all'inizio](#top)]

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollare la definizione della classe `priority_buffer` in un file denominato `priority_buffer.h` e il programma di test in un file denominato `priority_buffer.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

**CL. exe/EHsc priority_buffer. cpp**

## <a name="see-also"></a>Vedere anche

[Procedure dettagliate del runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)<br/>
[Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)
