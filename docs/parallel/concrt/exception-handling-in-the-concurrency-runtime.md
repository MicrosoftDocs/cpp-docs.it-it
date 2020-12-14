---
description: 'Altre informazioni su: gestione delle eccezioni nel runtime di concorrenza'
title: Gestione delle eccezioni nel runtime di concorrenza
ms.date: 11/04/2016
helpviewer_keywords:
- lightweight tasks, exception handling [Concurrency Runtime]
- exception handling [Concurrency Runtime]
- structured task groups, exception handling [Concurrency Runtime]
- agents, exception handling [Concurrency Runtime]
- task groups, exception handling [Concurrency Runtime]
ms.assetid: 4d1494fb-3089-4f4b-8cfb-712aa67d7a7a
ms.openlocfilehash: 4613c2b11102c3468bfb3fa5976f8aeeeeb73be3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97234306"
---
# <a name="exception-handling-in-the-concurrency-runtime"></a>Gestione delle eccezioni nel runtime di concorrenza

Il runtime di concorrenza utilizza la gestione delle eccezioni C++ per comunicare molti tipi di errori. Questi errori includono l'utilizzo non valido del runtime, errori di runtime, ad esempio l'impossibilità di acquisire una risorsa e gli errori che si verificano nelle funzioni di lavoro fornite a attività e gruppi di attività. Quando un'attività o un gruppo di attività genera un'eccezione, tale eccezione viene mantenuta dal runtime e ne viene eseguito il marshalling nel contesto in attesa del completamento dell'attività o del gruppo di attività. Per i componenti come le attività e gli agenti leggeri, il runtime non gestisce le eccezioni. In questi casi, è necessario implementare un meccanismo di gestione delle eccezioni personalizzato. In questo argomento viene descritto il modo in cui il runtime gestisce le eccezioni generate da attività, gruppi di attività, attività leggere e agenti asincroni e come rispondere alle eccezioni nelle applicazioni.

## <a name="key-points"></a>Punti chiave

- Quando un'attività o un gruppo di attività genera un'eccezione, tale eccezione viene mantenuta dal runtime e ne viene eseguito il marshalling nel contesto in attesa del completamento dell'attività o del gruppo di attività.

- Quando possibile, racchiudere ogni chiamata a [Concurrency:: Task:: Get](reference/task-class.md#get) e [Concurrency:: Task:: wait](reference/task-class.md#wait) con un **`try`** / **`catch`** blocco per gestire gli errori da cui è possibile eseguire il ripristino. Il runtime termina l'app se un'attività genera un'eccezione e l'eccezione non viene rilevata dall'attività, una delle continuazioni o l'app principale.

- Una continuazione basata su attività viene sempre eseguita; non è importante se l'attività precedente è stata completata correttamente, ha generato un'eccezione o è stata annullata. Una continuazione basata su valori non viene eseguita se l'attività precedente viene generata o annullata.

- Poiché le continuazioni basate su attività vengono sempre eseguite, valutare se aggiungere una continuazione basata su attività alla fine della catena di continuità. Ciò può essere utile per garantire che il codice osservi tutte le eccezioni.

- Il runtime genera [Concurrency:: task_canceled](../../parallel/concrt/reference/task-canceled-class.md) quando si chiama [Concurrency:: Task:: Get](reference/task-class.md#get) e l'attività viene annullata.

- Il runtime non gestisce le eccezioni per gli agenti e le attività Lightweight.

## <a name="in-this-document"></a><a name="top"></a> Contenuto del documento

- [Attività e continuazioni](#tasks)

- [Gruppi di attività e algoritmi paralleli](#task_groups)

- [Eccezioni generate dal runtime](#runtime)

- [Più eccezioni](#multiple)

- [Annullamento](#cancellation)

- [Attività leggere](#lwts)

- [Agenti asincroni](#agents)

## <a name="tasks-and-continuations"></a><a name="tasks"></a> Attività e continuazioni

In questa sezione viene descritto il modo in cui il runtime gestisce le eccezioni generate dagli oggetti [Concurrency:: Task](../../parallel/concrt/reference/task-class.md) e dalle relative continuazioni. Per ulteriori informazioni sul modello di attività e continuazione, vedere [parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md).

Quando si genera un'eccezione nel corpo di una funzione lavoro passata a un `task` oggetto, il runtime archivia tale eccezione e ne esegue il marshalling nel contesto che chiama [Concurrency:: Task:: Get](reference/task-class.md#get) o [Concurrency:: Task:: wait](reference/task-class.md#wait). Il [parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md) dei documenti descrive le continuazioni basate su valori e le continuazioni basate su valori, ma per riepilogare, una continuazione basata su valori accetta un parametro di tipo `T` e una continuazione basata su attività accetta un parametro di tipo `task<T>` . Se un'attività che genera un'eccezione ha una o più continuazioni basate su valori, le continuazioni non sono pianificate per l'esecuzione. Il seguente esempio illustra questo comportamento.

[!code-cpp[concrt-eh-task#1](../../parallel/concrt/codesnippet/cpp/exception-handling-in-the-concurrency-runtime_1.cpp)]

Una continuazione basata su attività consente di gestire qualsiasi eccezione generata dall'attività precedente. Una continuazione basata su attività viene sempre eseguita; non è importante se l'attività è stata completata correttamente, ha generato un'eccezione o è stata annullata. Quando un'attività genera un'eccezione, le relative continuazioni basate su attività sono pianificate per l'esecuzione. Nell'esempio seguente viene illustrata un'attività che genera sempre. L'attività dispone di due continuazioni. una è basata sul valore e l'altra è basata su attività. L'eccezione basata sull'attività viene sempre eseguita e pertanto può intercettare l'eccezione generata dall'attività precedente. Quando l'esempio attende il completamento di entrambe le continuazioni, l'eccezione viene generata di nuovo perché l'eccezione dell'attività viene sempre generata quando `task::get` `task::wait` viene chiamato o.

[!code-cpp[concrt-eh-continuations#1](../../parallel/concrt/codesnippet/cpp/exception-handling-in-the-concurrency-runtime_2.cpp)]

Si consiglia di usare le continuazioni basate su attività per intercettare le eccezioni che è possibile gestire. Poiché le continuazioni basate su attività vengono sempre eseguite, valutare se aggiungere una continuazione basata su attività alla fine della catena di continuità. Ciò può essere utile per garantire che il codice osservi tutte le eccezioni. Nell'esempio seguente viene illustrata una catena di continuazione basata su valori di base. La terza attività nella catena genera e pertanto le continuazioni basate su valori che lo seguono non vengono eseguite. Tuttavia, la continuazione finale è basata sull'attività e pertanto viene sempre eseguita. Questa continuazione finale gestisce l'eccezione generata dalla terza attività.

Si consiglia di intercettare le eccezioni più specifiche possibili. È possibile omettere la continuazione basata su attività finale se non si hanno eccezioni specifiche da intercettare. Qualsiasi eccezione rimarrà non gestita e potrà terminare l'app.

[!code-cpp[concrt-eh-task-chain#1](../../parallel/concrt/codesnippet/cpp/exception-handling-in-the-concurrency-runtime_3.cpp)]

> [!TIP]
> È possibile utilizzare il metodo [Concurrency:: task_completion_event:: set_exception](../../parallel/concrt/reference/task-completion-event-class.md) per associare un'eccezione a un evento di completamento dell'attività. Il [parallelismo dell'attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md) Document descrive in modo più dettagliato la classe [Concurrency:: task_completion_event](../../parallel/concrt/reference/task-completion-event-class.md) .

[Concurrency:: task_canceled](../../parallel/concrt/reference/task-canceled-class.md) è un tipo di eccezione di runtime importante correlato a `task` . Il runtime genera un'eccezione `task_canceled` quando si chiama `task::get` e l'attività viene annullata. Viceversa, `task::wait` restituisce [task_status:: Cancel](reference/concurrency-namespace-enums.md#task_group_status) e non genera. È possibile intercettare e gestire questa eccezione da una continuazione basata su attività o quando si chiama `task::get` . Per ulteriori informazioni sull'annullamento delle attività, vedere [annullamento nella libreria PPL](cancellation-in-the-ppl.md).

> [!CAUTION]
> Non generare mai `task_canceled` dal codice. Chiamare invece [Concurrency:: cancel_current_task](reference/concurrency-namespace-functions.md#cancel_current_task) .

Il runtime termina l'app se un'attività genera un'eccezione e l'eccezione non viene rilevata dall'attività, una delle continuazioni o l'app principale. Se l'applicazione si arresta in modo anomalo, è possibile configurare Visual Studio in modo che interrompa quando vengono generate eccezioni C++. Dopo aver diagnosticato il percorso dell'eccezione non gestita, utilizzare una continuazione basata su attività per gestirla.

La sezione [eccezioni generate dal runtime](#runtime) in questo documento descrive come usare le eccezioni di runtime in modo più dettagliato.

[All'[inizio](#top)]

## <a name="task-groups-and-parallel-algorithms"></a><a name="task_groups"></a> Gruppi di attività e algoritmi paralleli

In questa sezione viene descritto il modo in cui il runtime gestisce le eccezioni generate dai gruppi di attività. Questa sezione si applica anche agli algoritmi paralleli, ad esempio [Concurrency::p arallel_for](reference/concurrency-namespace-functions.md#parallel_for), perché questi algoritmi si basano sui gruppi di attività.

> [!CAUTION]
> Assicurarsi di comprendere gli effetti delle eccezioni sulle attività dipendenti. Per le procedure consigliate su come usare la gestione delle eccezioni con attività o algoritmi paralleli, vedere la sezione informazioni sull' [annullamento e la gestione delle eccezioni influiscono sulla distruzione degli oggetti](../../parallel/concrt/best-practices-in-the-parallel-patterns-library.md#object-destruction) nell'argomento procedure consigliate nella libreria di modelli paralleli.

Per ulteriori informazioni sui gruppi di attività, vedere [parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md). Per ulteriori informazioni sugli algoritmi paralleli, vedere [algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).

Quando si genera un'eccezione nel corpo di una funzione lavoro passata a un oggetto [Concurrency:: task_group](reference/task-group-class.md) o [Concurrency:: structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) oggetto, il runtime archivia l'eccezione e ne esegue il marshalling nel contesto che chiama [Concurrency:: task_group:: wait](reference/task-group-class.md#wait), [Concurrency:: structured_task_group:: wait](reference/structured-task-group-class.md#wait), [Concurrency:: task_group:: run_and_wait](reference/task-group-class.md#run_and_wait)o [Concurrency:: structured_task_group:: run_and_wait](reference/structured-task-group-class.md#run_and_wait). Il runtime arresta anche tutte le attività attive presenti nel gruppo di attività (incluse quelle nei gruppi di attività figlio) ed Elimina tutte le attività non ancora avviate.

Nell'esempio seguente viene illustrata la struttura di base di una funzione lavoro che genera un'eccezione. Nell'esempio viene utilizzato un `task_group` oggetto per stampare i valori di due `point` oggetti in parallelo. La `print_point` funzione lavoro stampa i valori di un `point` oggetto nella console. La funzione lavoro genera un'eccezione se il valore di input è `NULL` . Il runtime archivia l'eccezione e ne esegue il marshalling nel contesto che chiama `task_group::wait` .

[!code-cpp[concrt-eh-task-group#1](../../parallel/concrt/codesnippet/cpp/exception-handling-in-the-concurrency-runtime_4.cpp)]

Questo esempio produce il seguente output:

```Output
X = 15, Y = 30Caught exception: point is NULL.
```

Per un esempio completo che usa la gestione delle eccezioni in un gruppo di attività, vedere [procedura: usare la gestione delle eccezioni per interrompere un ciclo parallelo](../../parallel/concrt/how-to-use-exception-handling-to-break-from-a-parallel-loop.md).

[All'[inizio](#top)]

## <a name="exceptions-thrown-by-the-runtime"></a><a name="runtime"></a> Eccezioni generate dal runtime

Un'eccezione può derivare da una chiamata al runtime. La maggior parte dei tipi di eccezione, ad eccezione di [Concurrency:: task_canceled](../../parallel/concrt/reference/task-canceled-class.md) e [Concurrency:: operation_timed_out](../../parallel/concrt/reference/operation-timed-out-class.md), indicano un errore di programmazione. Questi errori sono in genere irreversibili e pertanto non devono essere rilevati o gestiti dal codice dell'applicazione. È consigliabile rilevare o gestire solo gli errori irreversibili nel codice dell'applicazione quando è necessario diagnosticare gli errori di programmazione. Tuttavia, la comprensione dei tipi di eccezione definiti dal runtime può consentire di diagnosticare gli errori di programmazione.

Il meccanismo di gestione delle eccezioni è lo stesso per le eccezioni generate dal runtime come eccezioni generate dalle funzioni di lavoro. La funzione [Concurrency:: Receive](reference/concurrency-namespace-functions.md#receive) , ad esempio, genera `operation_timed_out` un'eccezione quando non riceve un messaggio nel periodo di tempo specificato. Se `receive` genera un'eccezione in una funzione lavoro passata a un gruppo di attività, il runtime archivia tale eccezione e ne esegue il marshalling nel contesto che chiama `task_group::wait` , `structured_task_group::wait` , `task_group::run_and_wait` o `structured_task_group::run_and_wait` .

Nell'esempio seguente viene utilizzato l'algoritmo [Concurrency::p arallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke) per eseguire due attività in parallelo. La prima attività attende cinque secondi e quindi Invia un messaggio a un buffer di messaggi. La seconda attività utilizza la `receive` funzione per attendere tre secondi per la ricezione di un messaggio dallo stesso buffer dei messaggi. La `receive` funzione genera un'eccezione `operation_timed_out` se non riceve il messaggio nel periodo di tempo.

[!code-cpp[concrt-eh-time-out#1](../../parallel/concrt/codesnippet/cpp/exception-handling-in-the-concurrency-runtime_5.cpp)]

Questo esempio produce il seguente output:

```Output
The operation timed out.
```

Per evitare la chiusura anomala dell'applicazione, assicurarsi che il codice gestisca le eccezioni durante la chiamata al runtime. Gestire anche le eccezioni quando si chiama il codice esterno che usa la runtime di concorrenza, ad esempio una libreria di terze parti.

[All'[inizio](#top)]

## <a name="multiple-exceptions"></a><a name="multiple"></a> Più eccezioni

Se un'attività o un algoritmo parallelo riceve più eccezioni, il runtime esegue il marshalling di una sola di queste eccezioni nel contesto chiamante. Il runtime non garantisce quale eccezione viene sottoposta a marshalling.

Nell'esempio seguente viene utilizzato l' `parallel_for` algoritmo per stampare i numeri nella console. Genera un'eccezione se il valore di input è minore di un valore minimo o maggiore di un valore massimo. In questo esempio, più funzioni di lavoro possono generare un'eccezione.

[!code-cpp[concrt-eh-multiple#1](../../parallel/concrt/codesnippet/cpp/exception-handling-in-the-concurrency-runtime_6.cpp)]

Di seguito è riportato l'output di esempio per questo esempio.

```Output
8293104567Caught exception: -5: the value is less than the minimum.
```

[All'[inizio](#top)]

## <a name="cancellation"></a><a name="cancellation"></a> Annullamento

Non tutte le eccezioni indicano un errore. Ad esempio, un algoritmo di ricerca può utilizzare la gestione delle eccezioni per arrestare l'attività associata quando viene trovato il risultato. Per ulteriori informazioni sull'utilizzo dei meccanismi di annullamento nel codice, vedere [annullamento nella libreria PPL](../../parallel/concrt/cancellation-in-the-ppl.md).

[All'[inizio](#top)]

## <a name="lightweight-tasks"></a><a name="lwts"></a> Attività leggere

Un'attività leggera è un'attività che viene pianificata direttamente da un oggetto [Concurrency:: Scheduler](../../parallel/concrt/reference/scheduler-class.md) . Le attività leggere comportano un sovraccarico minore rispetto alle attività comuni. Tuttavia, il runtime non rileva le eccezioni generate dalle attività leggere. L'eccezione viene invece rilevata dal gestore di eccezioni non gestite, che per impostazione predefinita termina il processo. Pertanto, utilizzare un meccanismo di gestione degli errori appropriato nell'applicazione. Per ulteriori informazioni sulle attività leggere, vedere [utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md).

[All'[inizio](#top)]

## <a name="asynchronous-agents"></a><a name="agents"></a> Agenti asincroni

Analogamente alle attività leggere, il runtime non gestisce le eccezioni generate dagli agenti asincroni.

Nell'esempio seguente viene illustrato un modo per gestire le eccezioni in una classe che deriva da [Concurrency:: Agent](../../parallel/concrt/reference/agent-class.md). In questo esempio viene definita la `points_agent` classe. Il `points_agent::run` metodo legge `point` gli oggetti dal buffer dei messaggi e li stampa nella console. Il `run` metodo genera un'eccezione se riceve un `NULL` puntatore.

Il `run` Metodo racchiude tutto il lavoro in un **`try`** - **`catch`** blocco. Il **`catch`** blocco archivia l'eccezione in un buffer dei messaggi. L'applicazione controlla se l'agente ha rilevato un errore leggendo questo buffer al termine dell'agente.

[!code-cpp[concrt-eh-agents#1](../../parallel/concrt/codesnippet/cpp/exception-handling-in-the-concurrency-runtime_7.cpp)]

Questo esempio produce il seguente output:

```Output
X: 10 Y: 20
X: 20 Y: 30
error occurred in agent: point must not be NULL
the status of the agent is: done
```

Poiché il **`try`** - **`catch`** blocco esiste al di fuori del **`while`** ciclo, l'agente termina l'elaborazione quando viene rilevato il primo errore. Se il **`try`** - **`catch`** blocco si trovava all'interno del **`while`** ciclo, l'agente continuerà dopo un errore.

Questo esempio archivia le eccezioni in un buffer dei messaggi in modo che un altro componente possa monitorare l'agente per individuare eventuali errori durante l'esecuzione. In questo esempio viene utilizzato un oggetto [Concurrency:: single_assignment](../../parallel/concrt/reference/single-assignment-class.md) per archiviare l'errore. Nel caso in cui un agente gestisca più eccezioni, la `single_assignment` classe archivia solo il primo messaggio passato. Per archiviare solo l'ultima eccezione, utilizzare la classe [Concurrency:: overwrite_buffer](../../parallel/concrt/reference/overwrite-buffer-class.md) . Per archiviare tutte le eccezioni, utilizzare la classe [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md) . Per ulteriori informazioni su questi blocchi di messaggi, vedere la pagina relativa ai [blocchi di messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md).

Per ulteriori informazioni sugli agenti asincroni, vedere [Asynchronous Agents](../../parallel/concrt/asynchronous-agents.md).

[All'[inizio](#top)]

## <a name="summary"></a><a name="summary"></a> Riepilogo

[All'[inizio](#top)]

## <a name="see-also"></a>Vedi anche

[Runtime di concorrenza](../../parallel/concrt/concurrency-runtime.md)<br/>
[Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)<br/>
[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)<br/>
[Annullamento nella libreria PPL](cancellation-in-the-ppl.md)<br/>
[Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)<br/>
[Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)
