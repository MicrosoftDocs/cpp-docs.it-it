---
title: 'Procedura dettagliata: creazione di un blocco dei messaggi personalizzato'
ms.date: 04/25/2019
helpviewer_keywords:
- creating custom message blocks Concurrency Runtime]
- custom message blocks, creating [Concurrency Runtime]
ms.assetid: 4c6477ad-613c-4cac-8e94-2c9e63cd43a1
ms.openlocfilehash: 3386994dce68812cf3ed0852a24d8910cb903acf
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368563"
---
# <a name="walkthrough-creating-a-custom-message-block"></a>Procedura dettagliata: creazione di un blocco dei messaggi personalizzato

In questo documento viene descritto come creare un tipo di blocco dei messaggi personalizzato che ordina i messaggi in arrivo in base alla priorità.

Sebbene i tipi di blocco dei messaggi predefiniti forniscano un'ampia gamma di funzionalità, è possibile creare un tipo di blocco dei messaggi personalizzato e personalizzarlo per soddisfare i requisiti dell'applicazione. Per una descrizione dei tipi di blocco dei messaggi incorporati forniti dalla libreria di agenti asincroni, vedere [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md).

## <a name="prerequisites"></a>Prerequisiti

Leggere i documenti seguenti prima di iniziare questa procedura dettagliata:Read the following documents before you start this walkthrough:

- [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)

- [Funzioni di passaggio dei messaggiMessage Passing Functions](../../parallel/concrt/message-passing-functions.md)

## <a name="sections"></a><a name="top"></a>Sezioni

Questa procedura dettagliata contiene le sezioni seguenti:

- [Progettazione di un blocco di messaggi personalizzatoDesigning a Custom Message Block](#design)

- [Definizione della classe priority_buffer](#class)

- [Esempio completo](#complete)

## <a name="designing-a-custom-message-block"></a><a name="design"></a>Progettazione di un blocco di messaggi personalizzatoDesigning a Custom Message Block

I blocchi di messaggi partecipano all'atto di inviare e ricevere messaggi. Un blocco di messaggi che invia messaggi è noto come *blocco di origine.* Un blocco di messaggi che riceve messaggi è noto come *blocco di destinazione.* Un blocco di messaggi che invia e riceve messaggi è noto come *blocco propagatore.* La libreria di agenti utilizza la classe astratta [concurrency::ISource](../../parallel/concrt/reference/isource-class.md) per rappresentare i blocchi di origine e la classe astratta [concurrency::ITarget](../../parallel/concrt/reference/itarget-class.md) per rappresentare i blocchi di destinazione. I tipi di blocco dei `ISource`messaggi che fungono da origini derivano da ; I tipi di blocchi di `ITarget`messaggi che fungono da destinazioni derivano da .

Sebbene sia possibile derivare `ISource` il `ITarget`tipo di blocco dei messaggi direttamente da e , la libreria di agenti definisce tre classi di base che eseguono gran parte delle funzionalità comuni a tutti i tipi di blocchi di messaggi, ad esempio la gestione degli errori e la connessione di blocchi di messaggi insieme in modo indipendente dalla concorrenza. La classe [concurrency::source_block](../../parallel/concrt/reference/source-block-class.md) `ISource` deriva da e invia messaggi ad altri blocchi. La classe [concurrency::target_block](../../parallel/concrt/reference/target-block-class.md) `ITarget` deriva da e riceve messaggi da altri blocchi. La classe [concurrency::propagator_block](../../parallel/concrt/reference/propagator-block-class.md) `ISource` deriva `ITarget` da e invia messaggi ad altri blocchi e riceve messaggi da altri blocchi. È consigliabile usare queste tre classi di base per gestire i dettagli dell'infrastruttura in modo da potersi concentrare sul comportamento del blocco dei messaggi.

Le `source_block` `target_block` `propagator_block` classi , e sono modelli con parametri su un tipo che gestisce le connessioni, o collegamenti, tra i blocchi di origine e di destinazione e su un tipo che gestisce la modalità di elaborazione dei messaggi. La libreria di agenti definisce due tipi che eseguono la gestione dei collegamenti, [concurrency::single_link_registry](../../parallel/concrt/reference/single-link-registry-class.md) e [concurrency::multi_link_registry](../../parallel/concrt/reference/multi-link-registry-class.md). La `single_link_registry` classe consente a un blocco di messaggi di essere collegato a un'origine o a una destinazione. La `multi_link_registry` classe consente a un blocco di messaggi di essere collegato a più origini o più destinazioni. La libreria di agenti definisce una classe che esegue la gestione dei messaggi, [concurrency::ordered_message_processor](../../parallel/concrt/reference/ordered-message-processor-class.md). La `ordered_message_processor` classe consente ai blocchi di messaggi di elaborare i messaggi nell'ordine in cui li riceve.

Per comprendere meglio in che modo i blocchi di messaggi sono correlati alle relative origini e destinazioni, considerare l'esempio seguente. In questo esempio viene illustrata la dichiarazione della classe [concurrency::transformer.](../../parallel/concrt/reference/transformer-class.md)

[!code-cpp[concrt-priority-buffer#20](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_1.cpp)]

La `transformer` classe deriva `propagator_block`da , e pertanto funge sia da blocco di origine che come blocco di destinazione. Accetta messaggi di `_Input` tipo e invia `_Output`messaggi di tipo . La `transformer` classe `single_link_registry` specifica come gestore di `multi_link_registry` collegamenti per tutti i blocchi di destinazione e come gestore di collegamenti per tutti i blocchi di origine. Pertanto, `transformer` un oggetto può avere fino a una destinazione e un numero illimitato di origini.

Una classe che `source_block` deriva da deve implementare sei metodi: [propagate_to_any_targets](reference/source-block-class.md#propagate_to_any_targets), [accept_message](reference/source-block-class.md#accept_message), [reserve_message](reference/source-block-class.md#reserve_message), [consume_message](reference/source-block-class.md#consume_message), [release_message](reference/source-block-class.md#release_message)e [resume_propagation](reference/source-block-class.md#resume_propagation). Una classe che `target_block` deriva da deve implementare il [metodo propagate_message](reference/propagator-block-class.md#propagate_message) e può facoltativamente implementare il [metodo send_message.](reference/propagator-block-class.md#send_message) Derivare `propagator_block` è funzionalmente equivalente alla `source_block` `target_block`derivazione da entrambi e .

Il `propagate_to_any_targets` metodo viene chiamato dal runtime per elaborare in modo asincrono o sincrono tutti i messaggi in arrivo e propagare i messaggi in uscita. Il `accept_message` metodo viene chiamato dai blocchi di destinazione per accettare messaggi. Molti tipi di blocchi `unbounded_buffer`di messaggi, ad esempio , inviano messaggi solo alla prima destinazione che li riceverebbe. Pertanto, trasferisce la proprietà del messaggio alla destinazione. Altri tipi di blocchi di messaggi, ad esempio [concurrency::overwrite_buffer](../../parallel/concrt/reference/overwrite-buffer-class.md), offrono messaggi a ognuno dei blocchi di destinazione. Pertanto, `overwrite_buffer` crea una copia del messaggio per ognuna delle relative destinazioni.

I `reserve_message` `consume_message`metodi `release_message`, `resume_propagation` , e consentono ai blocchi di messaggi di partecipare alla prenotazione dei messaggi. I blocchi `reserve_message` di destinazione chiamano il metodo quando viene offerto un messaggio e devono riservare il messaggio per un utilizzo successivo. Dopo che un blocco di destinazione `consume_message` riserva un messaggio, `release_message` può chiamare il metodo per utilizzare tale messaggio o il metodo per annullare la prenotazione. Come per `accept_message` il metodo, `consume_message` l'implementazione di può trasferire la proprietà del messaggio o restituire una copia del messaggio. Dopo che un blocco di destinazione utilizza o rilascia `resume_propagation` un messaggio riservato, il runtime chiama il metodo . In genere, questo metodo continua la propagazione dei messaggi, a partire dal messaggio successivo nella coda.

Il runtime `propagate_message` chiama il metodo per trasferire in modo asincrono un messaggio da un altro blocco a quello corrente. Il `send_message` metodo `propagate_message`è simile a , ad eccezione del fatto che invia in modo sincrono, anziché asincrono, il messaggio ai blocchi di destinazione. L'implementazione `send_message` predefinita di rifiuta tutti i messaggi in arrivo. Il runtime non chiama nessuno di questi metodi se il messaggio non passa la funzione di filtro facoltativa associata al blocco di destinazione. Per ulteriori informazioni sui filtri messaggi, vedere [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md).

[[In alto](#top)]

## <a name="defining-the-priority_buffer-class"></a><a name="class"></a>Definizione della classe priority_buffer

La `priority_buffer` classe è un tipo di blocco di messaggi personalizzato che ordina i messaggi in arrivo prima in base alla priorità e quindi in base all'ordine in cui vengono ricevuti i messaggi. La `priority_buffer` classe è simile alla classe [concurrency::unbounded_buffer](reference/unbounded-buffer-class.md) perché contiene una coda di messaggi e anche perché funge sia da blocco di messaggi di origine che come blocco di messaggi di destinazione e può avere più origini e più destinazioni. Tuttavia, `unbounded_buffer` basa la propagazione dei messaggi solo sull'ordine in cui riceve i messaggi dalle relative origini.

La `priority_buffer` classe riceve messaggi di tipo std::[tupla](../../standard-library/tuple-class.md) che contengono `PriorityType` elementi e `Type` . `PriorityType`si riferisce al tipo che ha la priorità di ogni messaggio; `Type` si riferisce alla parte di dati del messaggio. La `priority_buffer` classe invia `Type`messaggi di tipo . La `priority_buffer` classe gestisce inoltre due code di messaggi: un oggetto [std::priority_queue](../../standard-library/priority-queue-class.md) per i messaggi in arrivo e un oggetto[coda](../../standard-library/queue-class.md) std:: per i messaggi in uscita. Ordinare messaggi in base alla `priority_buffer` priorità è utile quando un oggetto riceve più messaggi contemporaneamente o quando riceve più messaggi prima che i messaggi vengano letti dai consumer.

Oltre ai sette metodi che una `propagator_block` classe che `priority_buffer` deriva da deve `link_target_notification` `send_message` implementare, la classe esegue anche l'override di metodi e . La `priority_buffer` classe definisce inoltre due `enqueue` `dequeue`metodi helper pubblici e `propagate_priority_order`, e un metodo di supporto privato, .

Nella procedura seguente viene descritto `priority_buffer` come implementare la classe.

#### <a name="to-define-the-priority_buffer-class"></a>Per definire la classe priority_buffer

1. Creare un file di intestazione `priority_buffer.h`di C, ad esempio, assegnargli un nome. In alternativa, è possibile utilizzare un file di intestazione esistente che fa parte del progetto.

1. In `priority_buffer.h`, aggiungere il codice seguente.

    [!code-cpp[concrt-priority-buffer#1](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_2.h)]

1. Nello `std` spazio dei nomi definire le specializzazioni degli oggetti messaggio [std::less](../../standard-library/less-struct.md) e [std::greater](../../standard-library/greater-struct.md) che agiscono sugli oggetti[messaggio](../../parallel/concrt/reference/message-class.md) concurrency::.

    [!code-cpp[concrt-priority-buffer#2](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_3.h)]

   La `priority_buffer` classe `message` archivia `priority_queue` gli oggetti in un oggetto . Queste specializzazioni di tipo consentono alla coda di priorità di ordinare i messaggi in base alla priorità. La priorità è il `tuple` primo elemento dell'oggetto.

1. Nello `concurrencyex` spazio dei `priority_buffer` nomi dichiarare la classe .

    [!code-cpp[concrt-priority-buffer#3](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_4.h)]

   La classe `priority_buffer` deriva da `propagator_block`. Pertanto, può sia inviare che ricevere messaggi. La `priority_buffer` classe può avere più destinazioni che ricevono messaggi di tipo `Type`. Può anche avere più origini che `tuple<PriorityType, Type>`inviano messaggi di tipo .

1. Nella `private` sezione della `priority_buffer` classe aggiungere le variabili membro seguenti.

    [!code-cpp[concrt-priority-buffer#6](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_5.h)]

   L'oggetto `priority_queue` contiene i messaggi in arrivo; l'oggetto `queue` contiene i messaggi in uscita. Un `priority_buffer` oggetto può ricevere più messaggi contemporaneamente; l'oggetto `critical_section` sincronizza l'accesso alla coda dei messaggi di input.

1. Nella `private` sezione definire il costruttore di copia e l'operatore di assegnazione. Ciò `priority_queue` impedisce agli oggetti di essere assegnabili.

    [!code-cpp[concrt-priority-buffer#7](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_6.h)]

1. Nella `public` sezione definire i costruttori comuni a molti tipi di blocchi di messaggi. Definire anche il distruttore.

    [!code-cpp[concrt-priority-buffer#4](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_7.h)]

1. Nella `public` sezione, definire `enqueue` i `dequeue`metodi e . Questi metodi helper forniscono un modo alternativo per `priority_buffer` inviare e ricevere messaggi da un oggetto.

    [!code-cpp[concrt-priority-buffer#5](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_8.h)]

1. Nella `protected` sezione, definire `propagate_to_any_targets` il metodo.

    [!code-cpp[concrt-priority-buffer#9](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_9.h)]

   Il `propagate_to_any_targets` metodo trasferisce il messaggio che si trova all'ingresso della coda di input nella coda di output e propaga tutti i messaggi nella coda di output.

1. Nella `protected` sezione, definire `accept_message` il metodo.

    [!code-cpp[concrt-priority-buffer#8](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_10.h)]

   Quando un blocco `accept_message` di destinazione `priority_buffer` chiama il metodo, la classe trasferisce la proprietà del messaggio al primo blocco di destinazione che lo accetta. (Questo è simile `unbounded_buffer`al comportamento di .)

1. Nella `protected` sezione, definire `reserve_message` il metodo.

    [!code-cpp[concrt-priority-buffer#10](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_11.h)]

   La `priority_buffer` classe consente a un blocco di destinazione di riservare un messaggio quando l'identificatore del messaggio fornito corrisponde all'identificatore del messaggio che si trova all'estremità della coda. In altre parole, una destinazione può `priority_buffer` riservare il messaggio se l'oggetto non ha ancora ricevuto un messaggio aggiuntivo e non ha ancora propagato quello corrente.

1. Nella `protected` sezione, definire `consume_message` il metodo.

    [!code-cpp[concrt-priority-buffer#11](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_12.h)]

   Un blocco `consume_message` di destinazione chiama per trasferire la proprietà del messaggio che ha riservato.

1. Nella `protected` sezione, definire `release_message` il metodo.

    [!code-cpp[concrt-priority-buffer#12](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_13.h)]

   Un blocco `release_message` di destinazione chiama per annullare la prenotazione a un messaggio.

1. Nella `protected` sezione, definire `resume_propagation` il metodo.

    [!code-cpp[concrt-priority-buffer#13](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_14.h)]

   Le chiamate `resume_propagation` di runtime dopo che un blocco di destinazione utilizza o rilascia un messaggio riservato. Questo metodo propaga tutti i messaggi presenti nella coda di output.

1. Nella `protected` sezione, definire `link_target_notification` il metodo.

    [!code-cpp[concrt-priority-buffer#14](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_15.h)]

   La `_M_pReservedFor` variabile membro è definita `source_block`dalla classe base, . Questa variabile membro punta al blocco di destinazione, se presente, che contiene una prenotazione per il messaggio che si trova all'estremità della coda di output. Il runtime `link_target_notification` chiama quando una nuova `priority_buffer` destinazione è collegata all'oggetto. Questo metodo propaga tutti i messaggi che si trovano nella coda di output se nessuna destinazione è in possesso di una prenotazione.

1. Nella `private` sezione, definire `propagate_priority_order` il metodo.

    [!code-cpp[concrt-priority-buffer#15](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_16.h)]

   Questo metodo propaga tutti i messaggi dalla coda di output. Ogni messaggio nella coda viene offerto a ogni blocco di destinazione fino a quando uno dei blocchi di destinazione accetta il messaggio. La `priority_buffer` classe mantiene l'ordine dei messaggi in uscita. Pertanto, il primo messaggio nella coda di output deve essere accettato da un blocco di destinazione prima che questo metodo offre qualsiasi altro messaggio ai blocchi di destinazione.

1. Nella `protected` sezione, definire `propagate_message` il metodo.

    [!code-cpp[concrt-priority-buffer#16](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_17.h)]

   Il `propagate_message` metodo `priority_buffer` consente alla classe di agire come ricevitore di messaggi o destinazione. Questo metodo riceve il messaggio offerto dal blocco di origine fornito e inserisce il messaggio nella coda di priorità. Il `propagate_message` metodo invia quindi in modo asincrono tutti i messaggi di output ai blocchi di destinazione.

   Il runtime chiama questo metodo quando si chiama la funzione [concurrency::asend](reference/concurrency-namespace-functions.md#asend) o quando il blocco di messaggi è connesso ad altri blocchi di messaggi.

1. Nella `protected` sezione, definire `send_message` il metodo.

    [!code-cpp[concrt-priority-buffer#17](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_18.h)]

   Il `send_message` metodo `propagate_message`è simile a . Tuttavia invia i messaggi di output in modo sincrono anziché asincrono.

   Il runtime chiama questo metodo durante un'operazione di invio sincrono, ad esempio quando si chiama la funzione [concurrency::send.](reference/concurrency-namespace-functions.md#send)

La `priority_buffer` classe contiene overload del costruttore tipici in molti tipi di blocchi di messaggi. Alcuni overload del costruttore accettano oggetti [concurrency::Scheduler](../../parallel/concrt/reference/scheduler-class.md) o [concurrency::ScheduleGroup,](../../parallel/concrt/reference/schedulegroup-class.md) che consentono al blocco di messaggi di essere gestito da un'utilità di pianificazione specifica. Altri overload del costruttore accettano una funzione di filtro. Le funzioni di filtro consentono ai blocchi di messaggi di accettare o rifiutare un messaggio in base al relativo payload. Per ulteriori informazioni sui filtri messaggi, vedere [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md). Per ulteriori informazioni sulle utilità di pianificazione, vedere [Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md).

Poiché `priority_buffer` la classe ordina i messaggi in base alla priorità e quindi in base all'ordine in cui vengono ricevuti i messaggi, questa classe è più utile quando riceve i messaggi in modo asincrono, ad esempio quando si chiama la funzione [concurrency::asend](reference/concurrency-namespace-functions.md#asend) o quando il blocco di messaggi è connesso ad altri blocchi di messaggi.

[[In alto](#top)]

## <a name="the-complete-example"></a><a name="complete"></a>L'esempio completo

Nell'esempio seguente viene illustrata la definizione completa della `priority_buffer` classe.

[!code-cpp[concrt-priority-buffer#18](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_19.h)]

Nell'esempio seguente esegue contemporaneamente un numero di `asend` operazioni e [concurrency::receive](reference/concurrency-namespace-functions.md#receive) su un `priority_buffer` oggetto.

[!code-cpp[concrt-priority-buffer#19](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_20.cpp)]

Questo esempio produce l'output di esempio seguente.

```Output
36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36
24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24
12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12
```

La `priority_buffer` classe ordina i messaggi prima in base alla priorità e quindi in base all'ordine in cui riceve i messaggi. In questo esempio, i messaggi con priorità numerica maggiore vengono inseriti nella parte anteriore della coda.

[[In alto](#top)]

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un `priority_buffer` progetto di Visual `priority_buffer.h` Studio o incollare la definizione della classe in un file denominato e il programma di test in un file denominato, `priority_buffer.cpp` quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

**cl.exe /EHsc priority_buffer.cpp**

## <a name="see-also"></a>Vedere anche

[Procedure dettagliate del runtime di concorrenzaConcurrency Runtime Walkthroughs](../../parallel/concrt/concurrency-runtime-walkthroughs.md)<br/>
[Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Funzioni di passaggio dei messaggiMessage Passing Functions](../../parallel/concrt/message-passing-functions.md)
