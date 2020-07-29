---
title: 'Procedura dettagliata: creazione di un blocco dei messaggi personalizzato'
ms.date: 04/25/2019
helpviewer_keywords:
- creating custom message blocks Concurrency Runtime]
- custom message blocks, creating [Concurrency Runtime]
ms.assetid: 4c6477ad-613c-4cac-8e94-2c9e63cd43a1
ms.openlocfilehash: f95eaf7e1da41bd473ab15d12330d0177b98ccdf
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87219495"
---
# <a name="walkthrough-creating-a-custom-message-block"></a>Procedura dettagliata: creazione di un blocco dei messaggi personalizzato

In questo documento viene descritto come creare un tipo di blocco di messaggi personalizzato che ordina i messaggi in arrivo in base alla priorità.

Sebbene i tipi di blocchi di messaggi predefiniti forniscano una vasta gamma di funzionalità, è possibile creare un tipo di blocco di messaggi personalizzato e personalizzarlo per soddisfare i requisiti dell'applicazione. Per una descrizione dei tipi di blocchi di messaggi predefiniti forniti dalla libreria di agenti asincroni, vedere la pagina relativa ai [blocchi di messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md).

## <a name="prerequisites"></a>Prerequisiti

Prima di iniziare questa procedura dettagliata, leggere i documenti seguenti:

- [Blocchi di messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)

- [Funzioni di passaggio del messaggio](../../parallel/concrt/message-passing-functions.md)

## <a name="sections"></a><a name="top"></a>Sezioni

Questa procedura dettagliata contiene le sezioni seguenti:

- [Progettazione di un blocco di messaggi personalizzato](#design)

- [Definizione della classe priority_buffer](#class)

- [Esempio completo](#complete)

## <a name="designing-a-custom-message-block"></a><a name="design"></a>Progettazione di un blocco di messaggi personalizzato

I blocchi di messaggi partecipano all'azione di invio e ricezione dei messaggi. Un blocco di messaggi che invia messaggi è noto come *blocco di origine*. Un blocco di messaggi che riceve i messaggi è noto come *blocco di destinazione*. Un blocco di messaggi che invia e riceve messaggi è noto come *blocco di propagazione*. La libreria di agenti usa la classe astratta [Concurrency:: ISource](../../parallel/concrt/reference/isource-class.md) per rappresentare i blocchi di origine e la classe astratta [Concurrency:: ITarget](../../parallel/concrt/reference/itarget-class.md) per rappresentare i blocchi di destinazione. I tipi di blocchi di messaggi che fungono da origini derivano da `ISource` . i tipi di blocchi di messaggio che fungono da destinazioni derivano da `ITarget` .

Sebbene sia possibile derivare il tipo di blocco di messaggi direttamente da `ISource` e `ITarget` , la libreria di agenti definisce tre classi di base che eseguono gran parte delle funzionalità comuni a tutti i tipi di blocchi di messaggi, ad esempio la gestione degli errori e la connessione dei blocchi di messaggi in modo indipendente dalla concorrenza. La classe [Concurrency:: source_block](../../parallel/concrt/reference/source-block-class.md) deriva da `ISource` e invia messaggi ad altri blocchi. La classe [Concurrency:: target_block](../../parallel/concrt/reference/target-block-class.md) deriva da `ITarget` e riceve messaggi da altri blocchi. La classe [Concurrency::p ropagator_block](../../parallel/concrt/reference/propagator-block-class.md) deriva da `ISource` e `ITarget` e invia messaggi ad altri blocchi e riceve messaggi da altri blocchi. Si consiglia di utilizzare queste tre classi di base per gestire i dettagli dell'infrastruttura, in modo da potersi concentrare sul comportamento del blocco del messaggio.

Le `source_block` `target_block` classi, e `propagator_block` sono modelli parametrizzati in un tipo che gestisce le connessioni, o collegamenti, tra i blocchi di origine e di destinazione e su un tipo che gestisce la modalità di elaborazione dei messaggi. La libreria di agenti definisce due tipi che eseguono la gestione dei collegamenti, [Concurrency:: single_link_registry](../../parallel/concrt/reference/single-link-registry-class.md) e [Concurrency:: multi_link_registry](../../parallel/concrt/reference/multi-link-registry-class.md). La `single_link_registry` classe consente di collegare un blocco di messaggi a un'origine o a una destinazione. La `multi_link_registry` classe consente di collegare un blocco di messaggi a più origini o più destinazioni. La libreria di agenti definisce una classe che esegue la gestione dei messaggi, [Concurrency:: ordered_message_processor](../../parallel/concrt/reference/ordered-message-processor-class.md). La `ordered_message_processor` classe Abilita i blocchi di messaggi per elaborare i messaggi nell'ordine in cui vengono ricevuti.

Per comprendere meglio il modo in cui i blocchi di messaggi sono correlati alle relative origini e destinazioni, si consideri l'esempio seguente. In questo esempio viene illustrata la dichiarazione della classe [Concurrency:: Transformer](../../parallel/concrt/reference/transformer-class.md) .

[!code-cpp[concrt-priority-buffer#20](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_1.cpp)]

La `transformer` classe deriva da `propagator_block` e pertanto agisce sia come blocco di origine sia come blocco di destinazione. Accetta messaggi di tipo `_Input` e invia messaggi di tipo `_Output` . La `transformer` classe specifica `single_link_registry` come gestione collegamenti per tutti i blocchi di destinazione e `multi_link_registry` come gestione collegamenti per qualsiasi blocco di origine. Pertanto, un `transformer` oggetto può avere fino a una destinazione e un numero illimitato di origini.

Una classe che deriva da `source_block` deve implementare sei metodi: [propagate_to_any_targets](reference/source-block-class.md#propagate_to_any_targets), [accept_message](reference/source-block-class.md#accept_message), [reserve_message](reference/source-block-class.md#reserve_message), [consume_message](reference/source-block-class.md#consume_message), [release_message](reference/source-block-class.md#release_message)e [resume_propagation](reference/source-block-class.md#resume_propagation). Una classe che deriva da `target_block` deve implementare il metodo [propagate_message](reference/propagator-block-class.md#propagate_message) e può implementare facoltativamente il metodo [send_message](reference/propagator-block-class.md#send_message) . La derivazione da `propagator_block` è equivalente dal punto di vista funzionale alla derivazione da `source_block` e `target_block` .

Il `propagate_to_any_targets` metodo viene chiamato dal runtime per elaborare in modo asincrono o sincrono tutti i messaggi in arrivo e propagare tutti i messaggi in uscita. Il `accept_message` metodo viene chiamato dai blocchi di destinazione per accettare i messaggi. Molti tipi di blocchi di messaggi, ad esempio `unbounded_buffer` , inviano messaggi solo alla prima destinazione che lo riceveranno. Pertanto, trasferisce la proprietà del messaggio alla destinazione. Altri tipi di blocchi di messaggi, ad esempio [Concurrency:: overwrite_buffer](../../parallel/concrt/reference/overwrite-buffer-class.md), offrono messaggi a ognuno dei blocchi di destinazione. Crea pertanto `overwrite_buffer` una copia del messaggio per ogni destinazione.

I `reserve_message` metodi,, `consume_message` `release_message` e `resume_propagation` consentono ai blocchi di messaggi di partecipare alla prenotazione dei messaggi. I blocchi di destinazione chiamano il `reserve_message` metodo quando vengono offerti un messaggio e devono riservare il messaggio per un uso successivo. Quando un blocco di destinazione riserva un messaggio, può chiamare il `consume_message` metodo per utilizzare il messaggio o il `release_message` metodo per annullare la prenotazione. Come nel `accept_message` caso del metodo, l'implementazione di `consume_message` può trasferire la proprietà del messaggio o restituire una copia del messaggio. Dopo che un blocco di destinazione USA o rilascia un messaggio riservato, il runtime chiama il `resume_propagation` metodo. In genere, questo metodo continua la propagazione dei messaggi, a partire dal messaggio successivo nella coda.

Il runtime chiama il `propagate_message` metodo per trasferire in modo asincrono un messaggio da un altro blocco a quello corrente. Il `send_message` metodo è simile a `propagate_message` , ad eccezione del fatto che in modo sincrono, anziché in modo asincrono, invia il messaggio ai blocchi di destinazione. L'implementazione predefinita di `send_message` rifiuta tutti i messaggi in arrivo. Il runtime non chiama uno di questi metodi se il messaggio non passa la funzione di filtro facoltativa associata al blocco di destinazione. Per ulteriori informazioni sui filtri messaggi, vedere la pagina relativa ai [blocchi di messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md).

[All'[inizio](#top)]

## <a name="defining-the-priority_buffer-class"></a><a name="class"></a>Definizione della classe priority_buffer

La `priority_buffer` classe è un tipo di blocco di messaggi personalizzato che ordina i messaggi in arrivo prima per priorità, quindi in base all'ordine in cui vengono ricevuti i messaggi. La `priority_buffer` classe è simile alla classe [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md) perché contiene una coda di messaggi e anche perché funge sia da un blocco di origine che da un blocco di messaggi di destinazione e può avere più origini e più destinazioni. Tuttavia, `unbounded_buffer` basa la propagazione dei messaggi solo nell'ordine in cui riceve i messaggi dalle relative origini.

La `priority_buffer` classe riceve i messaggi di tipo std::[Tuple](../../standard-library/tuple-class.md) che contengono `PriorityType` `Type` gli elementi e. `PriorityType`si riferisce al tipo che include la priorità di ogni messaggio; `Type`si riferisce alla parte relativa ai dati del messaggio. La `priority_buffer` classe invia messaggi di tipo `Type` . La `priority_buffer` classe gestisce inoltre due code di messaggi: un oggetto [std::p riority_queue](../../standard-library/priority-queue-class.md) per i messaggi in arrivo e un oggetto std::[queue](../../standard-library/queue-class.md) per i messaggi in uscita. L'ordinamento dei messaggi per priorità è utile quando un `priority_buffer` oggetto riceve più messaggi contemporaneamente o quando riceve più messaggi prima che i messaggi vengano letti dai consumer.

Oltre ai sette metodi che devono essere implementati da una classe che deriva da `propagator_block` , la `priority_buffer` classe esegue anche l'override dei `link_target_notification` `send_message` metodi e. La `priority_buffer` classe definisce inoltre due metodi helper pubblici, `enqueue` e e `dequeue` un metodo helper privato, `propagate_priority_order` .

Nella procedura riportata di seguito viene descritto come implementare la `priority_buffer` classe.

#### <a name="to-define-the-priority_buffer-class"></a>Per definire la classe priority_buffer

1. Creare un file di intestazione C++ e denominarlo `priority_buffer.h` . In alternativa, è possibile usare un file di intestazione esistente che fa parte del progetto.

1. In `priority_buffer.h` aggiungere il codice seguente.

    [!code-cpp[concrt-priority-buffer#1](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_2.h)]

1. Nello `std` spazio dei nomi definire specializzazioni di [std:: less](../../standard-library/less-struct.md) e [std:: Greater](../../standard-library/greater-struct.md) che agiscono sugli oggetti Concurrency::[Message](../../parallel/concrt/reference/message-class.md) .

    [!code-cpp[concrt-priority-buffer#2](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_3.h)]

   La `priority_buffer` classe archivia `message` gli oggetti in un `priority_queue` oggetto. Queste specializzazioni di tipi consentono alla coda di priorità di ordinare i messaggi in base alla priorità. La priorità è il primo elemento dell' `tuple` oggetto.

1. Nello `concurrencyex` spazio dei nomi dichiarare la `priority_buffer` classe.

    [!code-cpp[concrt-priority-buffer#3](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_4.h)]

   La classe `priority_buffer` deriva da `propagator_block`. Pertanto, può inviare e ricevere messaggi. La `priority_buffer` classe può avere più destinazioni che ricevono messaggi di tipo `Type` . Può inoltre avere più origini che inviano messaggi di tipo `tuple<PriorityType, Type>` .

1. Nella **`private`** sezione della `priority_buffer` classe aggiungere le variabili membro seguenti.

    [!code-cpp[concrt-priority-buffer#6](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_5.h)]

   L' `priority_queue` oggetto include i messaggi in ingresso `queue` . l'oggetto include i messaggi in uscita. Un `priority_buffer` oggetto può ricevere più messaggi contemporaneamente; l' `critical_section` oggetto sincronizza l'accesso alla coda dei messaggi di input.

1. Nella **`private`** sezione definire il costruttore di copia e l'operatore di assegnazione. In questo modo si impedisce l' `priority_queue` assegnazione di oggetti.

    [!code-cpp[concrt-priority-buffer#7](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_6.h)]

1. Nella **`public`** sezione definire i costruttori comuni a molti tipi di blocchi di messaggi. Definire anche il distruttore.

    [!code-cpp[concrt-priority-buffer#4](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_7.h)]

1. Nella **`public`** sezione definire i metodi `enqueue` e `dequeue` . Questi metodi helper rappresentano una modalità alternativa per inviare e ricevere messaggi da un `priority_buffer` oggetto.

    [!code-cpp[concrt-priority-buffer#5](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_8.h)]

1. Nella **`protected`** sezione definire il `propagate_to_any_targets` metodo.

    [!code-cpp[concrt-priority-buffer#9](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_9.h)]

   Il `propagate_to_any_targets` metodo trasferisce il messaggio che si trova all'inizio della coda di input alla coda di output e propaga tutti i messaggi nella coda di output.

1. Nella **`protected`** sezione definire il `accept_message` metodo.

    [!code-cpp[concrt-priority-buffer#8](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_10.h)]

   Quando un blocco di destinazione chiama il `accept_message` metodo, la `priority_buffer` classe trasferisce la proprietà del messaggio al primo blocco di destinazione che la accetta. Questo comportamento è simile a quello di `unbounded_buffer` .

1. Nella **`protected`** sezione definire il `reserve_message` metodo.

    [!code-cpp[concrt-priority-buffer#10](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_11.h)]

   La `priority_buffer` classe consente a un blocco di destinazione di riservare un messaggio quando l'identificatore del messaggio fornito corrisponde all'identificatore del messaggio che si trova all'inizio della coda. In altre parole, una destinazione può riservare il messaggio se l' `priority_buffer` oggetto non ha ancora ricevuto un messaggio aggiuntivo e non ha ancora propagato quello corrente.

1. Nella **`protected`** sezione definire il `consume_message` metodo.

    [!code-cpp[concrt-priority-buffer#11](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_12.h)]

   Un blocco di destinazione chiama `consume_message` per trasferire la proprietà del messaggio riservato.

1. Nella **`protected`** sezione definire il `release_message` metodo.

    [!code-cpp[concrt-priority-buffer#12](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_13.h)]

   Un blocco di destinazione chiama `release_message` per annullare la prenotazione a un messaggio.

1. Nella **`protected`** sezione definire il `resume_propagation` metodo.

    [!code-cpp[concrt-priority-buffer#13](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_14.h)]

   Il runtime chiama `resume_propagation` dopo che un blocco di destinazione USA o rilascia un messaggio riservato. Questo metodo propaga tutti i messaggi presenti nella coda di output.

1. Nella **`protected`** sezione definire il `link_target_notification` metodo.

    [!code-cpp[concrt-priority-buffer#14](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_15.h)]

   La `_M_pReservedFor` variabile membro è definita dalla classe base, `source_block` . Questa variabile membro punta al blocco di destinazione, se presente, che contiene una prenotazione al messaggio che si trova all'inizio della coda di output. Il runtime chiama `link_target_notification` quando una nuova destinazione è collegata all' `priority_buffer` oggetto. Questo metodo propaga tutti i messaggi presenti nella coda di output se nessuna destinazione contiene una prenotazione.

1. Nella **`private`** sezione definire il `propagate_priority_order` metodo.

    [!code-cpp[concrt-priority-buffer#15](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_16.h)]

   Questo metodo propaga tutti i messaggi dalla coda di output. Ogni messaggio nella coda viene offerto a ogni blocco di destinazione fino a quando uno dei blocchi di destinazione non accetta il messaggio. La `priority_buffer` classe conserva l'ordine dei messaggi in uscita. Pertanto, il primo messaggio nella coda di output deve essere accettato da un blocco di destinazione prima che questo metodo offra qualsiasi altro messaggio ai blocchi di destinazione.

1. Nella **`protected`** sezione definire il `propagate_message` metodo.

    [!code-cpp[concrt-priority-buffer#16](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_17.h)]

   Il `propagate_message` metodo consente alla `priority_buffer` classe di fungere da destinatario o destinazione del messaggio. Questo metodo riceve il messaggio offerto dal blocco di origine fornito e lo inserisce nella coda di priorità. Il `propagate_message` metodo invia quindi in modo asincrono tutti i messaggi di output ai blocchi di destinazione.

   Il runtime chiama questo metodo quando si chiama la funzione [Concurrency:: asend](reference/concurrency-namespace-functions.md#asend) o quando il blocco di messaggi è connesso ad altri blocchi di messaggi.

1. Nella **`protected`** sezione definire il `send_message` metodo.

    [!code-cpp[concrt-priority-buffer#17](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_18.h)]

   Il `send_message` metodo è simile a `propagate_message` . Invia tuttavia i messaggi di output in modo sincrono anziché in modo asincrono.

   Questo metodo viene chiamato dal runtime durante un'operazione di invio sincrona, ad esempio quando si chiama la funzione [Concurrency:: Send](reference/concurrency-namespace-functions.md#send) .

La `priority_buffer` classe contiene gli overload del costruttore tipici in molti tipi di blocchi di messaggi. Alcuni overload del costruttore accettano oggetti [Concurrency:: Scheduler](../../parallel/concrt/reference/scheduler-class.md) o [Concurrency:: ScheduleGroup](../../parallel/concrt/reference/schedulegroup-class.md) , che consentono la gestione del blocco del messaggio da parte di un'utilità di pianificazione specifica. Altri overload del costruttore accettano una funzione di filtro. Le funzioni di filtro consentono ai blocchi di messaggi di accettare o rifiutare un messaggio sulla base del payload. Per ulteriori informazioni sui filtri messaggi, vedere la pagina relativa ai [blocchi di messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md). Per ulteriori informazioni sulle utilità di pianificazione delle attività, vedere [utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md).

Poiché la `priority_buffer` classe Ordina i messaggi in base alla priorità e quindi in base all'ordine in cui vengono ricevuti i messaggi, questa classe è particolarmente utile quando riceve messaggi in modo asincrono, ad esempio quando si chiama la funzione [Concurrency:: asend](reference/concurrency-namespace-functions.md#asend) o quando il blocco di messaggi è connesso ad altri blocchi di messaggi.

[All'[inizio](#top)]

## <a name="the-complete-example"></a><a name="complete"></a>Esempio completo

Nell'esempio seguente viene illustrata la definizione completa della `priority_buffer` classe.

[!code-cpp[concrt-priority-buffer#18](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_19.h)]

Nell'esempio seguente vengono eseguite simultaneamente un numero di `asend` operazioni e [Concurrency:: Receive](reference/concurrency-namespace-functions.md#receive) su un `priority_buffer` oggetto.

[!code-cpp[concrt-priority-buffer#19](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_20.cpp)]

Questo esempio produce l'output di esempio seguente.

```Output
36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36
24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24
12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12
```

La `priority_buffer` classe Ordina i messaggi prima per priorità, quindi in base all'ordine in cui riceve i messaggi. In questo esempio, i messaggi con priorità numerica maggiore vengono inseriti nella parte anteriore della coda.

[All'[inizio](#top)]

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollare la definizione della `priority_buffer` classe in un file denominato `priority_buffer.h` e il programma di test in un file denominato, `priority_buffer.cpp` quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

**cl.exe/EHsc priority_buffer. cpp**

## <a name="see-also"></a>Vedere anche

[Procedure dettagliate runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)<br/>
[Blocchi di messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Funzioni di passaggio del messaggio](../../parallel/concrt/message-passing-functions.md)
