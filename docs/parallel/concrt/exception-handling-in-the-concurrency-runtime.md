---
title: Gestione delle eccezioni nel runtime di concorrenza
ms.date: 11/04/2016
helpviewer_keywords:
- lightweight tasks, exception handling [Concurrency Runtime]
- exception handling [Concurrency Runtime]
- structured task groups, exception handling [Concurrency Runtime]
- agents, exception handling [Concurrency Runtime]
- task groups, exception handling [Concurrency Runtime]
ms.assetid: 4d1494fb-3089-4f4b-8cfb-712aa67d7a7a
ms.openlocfilehash: 8239913c369605503134a9ea4c99789528911868
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62413931"
---
# <a name="exception-handling-in-the-concurrency-runtime"></a>Gestione delle eccezioni nel runtime di concorrenza

Il Runtime di concorrenza Usa per comunicare molti tipi di errori di gestione delle eccezioni di C++. Questi errori includono utilizzo non valido del runtime, errori di runtime, ad esempio un errore per acquisire una risorsa e gli errori che si verificano nelle funzioni di lavoro che forniscono ad attività e i gruppi di attività. Quando un'attività o un gruppo di attività genera un'eccezione, il runtime gestisce l'eccezione e ne esegue il marshalling nel contesto di attesa per l'attività o il gruppo di attività per terminare. Per i componenti, ad esempio le attività leggere e gli agenti, il runtime non gestisce le eccezioni per l'utente. In questi casi, è necessario implementare il proprio meccanismo di gestione delle eccezioni. In questo argomento viene descritto come il runtime gestisce le eccezioni generate dall'attività, i gruppi di attività, le attività leggere e dagli agenti asincroni e come rispondere alle eccezioni nelle applicazioni.

## <a name="key-points"></a>Punti chiave

- Quando un'attività o un gruppo di attività genera un'eccezione, il runtime gestisce l'eccezione e ne esegue il marshalling nel contesto di attesa per l'attività o il gruppo di attività per terminare.

- Quando possibile, racchiudere ogni chiamata a [concurrency::task::get](reference/task-class.md#get) e [concurrency::task::wait](reference/task-class.md#wait) con un `try` / `catch` blocco per gestire gli errori che è possibile ripristinare Da. Se un'attività genera un'eccezione e tale eccezione non rilevata dall'attività, una delle relative continuazioni, o l'app principale, il runtime termina l'app.

- Viene eseguito sempre una continuazione basata su attività; non è importante se l'attività precedente completata, ha generato un'eccezione o se è stata annullata. Una continuazione basata su valore non viene eseguito se l'attività precedente genera un'eccezione o Annulla.

- Poiché le continuazioni basate su attività vengono sempre eseguiti, prendere in considerazione se si desidera aggiungere una continuazione basata su attività alla fine della catena di continuazione. Questo può aiutare a garantire che il codice rileva tutte le eccezioni.

- Il runtime genera un'eccezione [Concurrency:: task_canceled](../../parallel/concrt/reference/task-canceled-class.md) quando si chiama [concurrency::task::get](reference/task-class.md#get) e tale attività viene annullata.

- Il runtime non gestisce le eccezioni per le attività leggere e gli agenti.

##  <a name="top"></a> In questo documento

- [Attività e sulle continuazioni](#tasks)

- [I gruppi di attività e gli algoritmi paralleli](#task_groups)

- [Eccezioni generate dal Runtime](#runtime)

- [Più eccezioni](#multiple)

- [Annullamento](#cancellation)

- [Attività leggere](#lwts)

- [Agenti asincroni](#agents)

##  <a name="tasks"></a> Attività e sulle continuazioni

Questa sezione viene descritto come il runtime gestisce le eccezioni generate dai [Concurrency:: Task](../../parallel/concrt/reference/task-class.md) oggetti e delle relative continuazioni. Per altre informazioni sul modello di attività e continuazione, vedere [Task Parallelism](../../parallel/concrt/task-parallelism-concurrency-runtime.md).

Quando si genera un'eccezione nel corpo di una funzione lavoro che viene passato a un `task` dell'oggetto, il runtime archivia l'eccezione e ne esegue il marshalling al contesto che chiama [concurrency::task::get](reference/task-class.md#get) o [concorrenza:: Task:: Wait](reference/task-class.md#wait). Il documento [Task Parallelism](../../parallel/concrt/task-parallelism-concurrency-runtime.md) descrive basato su attività e continuazioni basate su valori, ma come riepilogare, una continuazione basata su valore accetta un parametro di tipo `T` e una continuazione basata su attività accetta un parametro di tipo `task<T>`. Se un'attività che genera un'eccezione ha uno o più continuazioni basate su valori, tali continuazioni non pianificati per l'esecuzione. Il seguente esempio illustra questo comportamento.

[!code-cpp[concrt-eh-task#1](../../parallel/concrt/codesnippet/cpp/exception-handling-in-the-concurrency-runtime_1.cpp)]

Una continuazione basata su attività consente di gestire qualsiasi eccezione generata dall'attività precedente. Viene eseguito sempre una continuazione basata su attività; non è importante se l'attività è stata completata, ha generato un'eccezione o se è stata annullata. Quando un'attività genera un'eccezione, relative continuazioni basate su attività pianificati per l'esecuzione. Nell'esempio seguente mostra un'attività che genera sempre un'eccezione. L'attività ha due continuazioni; uno è basato su valore e l'altra è basata su attività. L'eccezione basato su attività viene eseguita sempre e pertanto può intercettare l'eccezione generata dall'attività precedente. Quando l'esempio in attesa di entrambe le continuazioni al completamento, l'eccezione viene generata nuovamente perché viene sempre generata quando l'eccezione di attività `task::get` o `task::wait` viene chiamato.

[!code-cpp[concrt-eh-continuations#1](../../parallel/concrt/codesnippet/cpp/exception-handling-in-the-concurrency-runtime_2.cpp)]

È consigliabile usare le continuazioni basate su attività per intercettare le eccezioni che si sono in grado di gestire. Poiché le continuazioni basate su attività vengono sempre eseguiti, prendere in considerazione se si desidera aggiungere una continuazione basata su attività alla fine della catena di continuazione. Questo può aiutare a garantire che il codice rileva tutte le eccezioni. L'esempio seguente illustra una catena di continuazione in base al valore di base. Genera la terza attività nella catena e pertanto non vengono eseguite le continuazioni basate su valori che lo seguono. Tuttavia, la continuazione finale è basato su attività e pertanto viene sempre eseguito. La continuazione finale gestisce l'eccezione generata da terza attività.

È consigliabile intercettare le eccezioni più specifiche che è possibile. È possibile omettere questa continuazione basata su attività finale se non si dispone di eccezioni specifiche da intercettare. Qualsiasi eccezione rimane non gestita e può terminare l'app.

[!code-cpp[concrt-eh-task-chain#1](../../parallel/concrt/codesnippet/cpp/exception-handling-in-the-concurrency-runtime_3.cpp)]

> [!TIP]
>  È possibile usare la [concurrency::task_completion_event::set_exception](../../parallel/concrt/reference/task-completion-event-class.md) metodo per associare un'eccezione a un evento di completamento attività. Il documento [Task Parallelism](../../parallel/concrt/task-parallelism-concurrency-runtime.md) descrive il [Concurrency:: task_completion_event](../../parallel/concrt/reference/task-completion-event-class.md) classe in modo più dettagliato.

[Concurrency:: task_canceled](../../parallel/concrt/reference/task-canceled-class.md) è un tipo di eccezione runtime importanti correlate al `task`. Il runtime genera un'eccezione `task_canceled` quando si chiama `task::get` e tale attività viene annullata. (Al contrario, `task::wait` restituisce [task_status:: Canceled](reference/concurrency-namespace-enums.md#task_group_status) e non genera eccezioni.) È possibile rilevare e gestire questa eccezione da una continuazione basata su attività o quando si chiama `task::get`. Per altre informazioni sull'annullamento delle attività, vedere [annullamento nella libreria PPL](cancellation-in-the-ppl.md).

> [!CAUTION]
>  Non generare mai `task_canceled` dal codice. Chiamare [Concurrency:: cancel_current_task](reference/concurrency-namespace-functions.md#cancel_current_task) invece.

Se un'attività genera un'eccezione e tale eccezione non rilevata dall'attività, una delle relative continuazioni, o l'app principale, il runtime termina l'app. Caso di arresto anomalo dell'applicazione, è possibile configurare Visual Studio per interrompere l'esecuzione quando vengono generate eccezioni di C++. Dopo avere diagnosticato il percorso dell'eccezione non gestita, usare una continuazione basata su attività per gestirla.

La sezione [le eccezioni generate dal Runtime](#runtime) in questo documento viene descritto come gestire le eccezioni di runtime in modo più dettagliato.

[[Torna all'inizio](#top)]

##  <a name="task_groups"></a> I gruppi di attività e gli algoritmi paralleli

Questa sezione descrive come il runtime gestisce le eccezioni generate dai gruppi di attività. In questa sezione si applica anche per gli algoritmi paralleli, ad esempio [Concurrency:: parallel_for](reference/concurrency-namespace-functions.md#parallel_for), perché questi algoritmi si basano sui gruppi di attività.

> [!CAUTION]
>  Assicurarsi di comprendere gli effetti sulle attività dipendenti delle eccezioni. Per le procedure consigliate sull'utilizzo di gestione delle eccezioni con le attività o gli algoritmi paralleli, vedere la [comprendere come annullamento e eccezione la influiscono sull'oggetto eliminazione](../../parallel/concrt/best-practices-in-the-parallel-patterns-library.md#object-destruction) sezione nelle procedure consigliate in parallelo Argomento della libreria di modelli.

Per altre informazioni sui gruppi di attività, vedere [Task Parallelism](../../parallel/concrt/task-parallelism-concurrency-runtime.md). Per altre informazioni sugli algoritmi paralleli, vedere [gli algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).

Quando si genera un'eccezione nel corpo di una funzione lavoro che viene passato a un [Concurrency:: task_group](reference/task-group-class.md) oppure [Concurrency:: structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) dell'oggetto, il runtime archivia l'eccezione e ne esegue il marshalling il contesto che chiama [Concurrency:: Canceled](reference/task-group-class.md#wait), [task_group](reference/structured-task-group-class.md#wait), [run_and_wait](reference/task-group-class.md#run_and_wait), oppure [concurrency::structured_task_group::run_and_wait](reference/structured-task-group-class.md#run_and_wait). Inoltre, il runtime arresta tutte le attività attive che sono nel gruppo di attività (incluse quelle nei gruppi di attività figlio) ed Elimina tutte le attività che non sono ancora stata avviata.

Nell'esempio seguente mostra la struttura di base di una funzione lavoro che genera un'eccezione. L'esempio Usa un' `task_group` per stampare i valori di due oggetti `point` oggetti in parallelo. Il `print_point` funzione di lavoro vengono stampati i valori di un `point` oggetti nella console. La funzione lavoro genera un'eccezione se il valore di input è `NULL`. Il runtime archivia questa eccezione e ne esegue il marshalling al contesto che chiama `task_group::wait`.

[!code-cpp[concrt-eh-task-group#1](../../parallel/concrt/codesnippet/cpp/exception-handling-in-the-concurrency-runtime_4.cpp)]

Questo esempio produce il seguente output:

```Output
X = 15, Y = 30Caught exception: point is NULL.
```

Per un esempio completo che Usa gestione delle eccezioni in un gruppo di attività, vedere [come: Utilizzare eccezioni per interrompere un ciclo Parallel](../../parallel/concrt/how-to-use-exception-handling-to-break-from-a-parallel-loop.md).

[[Torna all'inizio](#top)]

##  <a name="runtime"></a> Eccezioni generate dal Runtime

Un'eccezione può dipendere da una chiamata al runtime. La maggior parte dei tipi di eccezione, ad eccezione di [Concurrency:: task_canceled](../../parallel/concrt/reference/task-canceled-class.md) e [concurrency::operation_timed_out](../../parallel/concrt/reference/operation-timed-out-class.md), indicare un errore di programmazione. Questi errori sono irreversibili in genere e pertanto devono non essere rilevati o gestiti dal codice dell'applicazione. È consigliabile solo di rilevare o gestire gli errori irreversibili nel codice dell'applicazione quando è necessario diagnosticare gli errori di programmazione. Tuttavia, conoscere i tipi di eccezione definiti dal runtime è possibile diagnosticare gli errori di programmazione.

Meccanismo di gestione delle eccezioni è la stessa per le eccezioni generate dal runtime come le eccezioni generate dalle funzioni di lavoro. Ad esempio, il [Concurrency:: Receive](reference/concurrency-namespace-functions.md#receive) funzione genera un'eccezione `operation_timed_out` quando non riceve un messaggio nel periodo di tempo specificato. Se `receive` genera un'eccezione in una funzione lavoro che si passa a un gruppo di attività, il runtime archivia l'eccezione e ne esegue il marshalling al contesto che chiama `task_group::wait`, `structured_task_group::wait`, `task_group::run_and_wait`, o `structured_task_group::run_and_wait`.

L'esempio seguente usa il [Concurrency:: parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke) algoritmo per eseguire due attività in parallelo. La prima attività attende cinque secondi e quindi invia un messaggio a un buffer dei messaggi. La seconda attività Usa la `receive` funzione attesa di tre secondi per ricevere un messaggio dal buffer del messaggio stesso. Il `receive` funzione genera un'eccezione `operation_timed_out` se non riceve il messaggio nel periodo di tempo.

[!code-cpp[concrt-eh-time-out#1](../../parallel/concrt/codesnippet/cpp/exception-handling-in-the-concurrency-runtime_5.cpp)]

Questo esempio produce il seguente output:

```Output
The operation timed out.
```

Per impedire un arresto anomalo dell'applicazione, assicurarsi che il codice gestisce le eccezioni quando viene chiamato in fase di esecuzione. Gestire le eccezioni anche quando si chiama codice esterno che usa il Runtime di concorrenza, ad esempio, una libreria di terze parti.

[[Torna all'inizio](#top)]

##  <a name="multiple"></a> Più eccezioni

Se un'attività o un algoritmo parallelo riceve più eccezioni, il runtime effettua il marshalling solo una di queste eccezioni nel contesto di chiamata. Il runtime non garantisce l'eccezione che effettua il marshalling.

L'esempio seguente usa il `parallel_for` algoritmo per stampare i numeri nella console. Genera un'eccezione se il valore di input è minore di un valore minimo o superiore a un valore massimo. In questo esempio, più le funzioni di lavoro può generare un'eccezione.

[!code-cpp[concrt-eh-multiple#1](../../parallel/concrt/codesnippet/cpp/exception-handling-in-the-concurrency-runtime_6.cpp)]

Il seguente output di esempio per questo esempio.

```Output
8293104567Caught exception: -5: the value is less than the minimum.
```

[[Torna all'inizio](#top)]

##  <a name="cancellation"></a> Annullamento

Non tutte le eccezioni indicano un errore. Ad esempio, un algoritmo di ricerca potrebbe usare la gestione delle eccezioni per interrompere l'attività associata quando viene trovato il risultato. Per altre informazioni su come usare i meccanismi di annullamento nel codice, vedere [annullamento nella libreria PPL](../../parallel/concrt/cancellation-in-the-ppl.md).

[[Torna all'inizio](#top)]

##  <a name="lwts"></a> Attività leggere

Un'attività leggera è un'attività pianificata direttamente da un [Concurrency:: Scheduler](../../parallel/concrt/reference/scheduler-class.md) oggetto. Attività leggere contengono overhead minore rispetto a attività comuni. Tuttavia, il runtime non intercetta le eccezioni generate dalle attività di caricamento leggera. Al contrario, l'eccezione viene intercettata dal gestore di eccezioni non gestite, che per impostazione predefinita termina il processo. Pertanto, è possibile usare un meccanismo appropriato di gestione degli errori nell'applicazione. Per altre informazioni sulle attività leggera, vedere [utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md).

[[Torna all'inizio](#top)]

##  <a name="agents"></a> Agenti asincroni

Analogamente alle attività leggere, il runtime non gestisce le eccezioni generate dagli agenti asincroni.

Nell'esempio seguente viene illustrato un modo per gestire le eccezioni in una classe che deriva da [Concurrency:: Agent](../../parallel/concrt/reference/agent-class.md). Questo esempio viene definito il `points_agent` classe. Il `points_agent::run` letture metodo `point` degli oggetti dal buffer dei messaggi e li visualizza nella console. Il `run` metodo genera un'eccezione se viene ricevuto un `NULL` puntatore.

Il `run` metodo racchiude tutto il lavoro in un `try` - `catch` blocco. Il `catch` blocco archivia l'eccezione in un buffer dei messaggi. L'applicazione controlla se l'agente ha rilevato un errore mediante la lettura da questo buffer, dopo il completamento dell'agente.

[!code-cpp[concrt-eh-agents#1](../../parallel/concrt/codesnippet/cpp/exception-handling-in-the-concurrency-runtime_7.cpp)]

Questo esempio produce il seguente output:

```Output
X: 10 Y: 20
X: 20 Y: 30
error occurred in agent: point must not be NULL
the status of the agent is: done
```

Poiché il `try` - `catch` di fuori di un blocco di `while` ciclo, l'agente termina quando rileva il primo errore di elaborazione. Se il `try` - `catch` blocco è stato all'interno di `while` ciclo, l'agente continuerà dopo che si verifica un errore.

In questo esempio le eccezioni vengono archiviate in un buffer dei messaggi in modo che un altro componente è possibile monitorare l'agente per gli errori durante l'esecuzione. Questo esempio Usa un' [Concurrency:: single_assignment](../../parallel/concrt/reference/single-assignment-class.md) oggetto usato per archiviare l'errore. Nel caso in cui un agente gestisce più eccezioni, il `single_assignment` classe archivia solo il primo messaggio che viene passato ad esso. Per archiviare solo l'ultima eccezione, usare il [Concurrency:: overwrite_buffer](../../parallel/concrt/reference/overwrite-buffer-class.md) classe. Per archiviare tutte le eccezioni, usare il [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md) classe. Per altre informazioni su questi blocchi di messaggio, vedere [blocchi di messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md).

Per altre informazioni sugli agenti asincroni, vedere [agenti asincroni](../../parallel/concrt/asynchronous-agents.md).

[[Torna all'inizio](#top)]

##  <a name="summary"></a> Riepilogo

[[Torna all'inizio](#top)]

## <a name="see-also"></a>Vedere anche

[Runtime di concorrenza](../../parallel/concrt/concurrency-runtime.md)<br/>
[Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)<br/>
[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)<br/>
[Annullamento nella libreria PPL](cancellation-in-the-ppl.md)<br/>
[Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)<br/>
[Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)
