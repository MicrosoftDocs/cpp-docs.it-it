---
title: Gestione delle eccezioni nel Runtime di concorrenza | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- lightweight tasks, exception handling [Concurrency Runtime]
- exception handling [Concurrency Runtime]
- structured task groups, exception handling [Concurrency Runtime]
- agents, exception handling [Concurrency Runtime]
- task groups, exception handling [Concurrency Runtime]
ms.assetid: 4d1494fb-3089-4f4b-8cfb-712aa67d7a7a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5f30c98a8800c3aeaaf5ff1dab5bee9bdba971a6
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="exception-handling-in-the-concurrency-runtime"></a>Gestione delle eccezioni nel runtime di concorrenza
Il Runtime di concorrenza Usa per comunicare molti tipi di errori di gestione delle eccezioni di C++. Utilizzo non valido di runtime, errori di runtime, ad esempio un errore per acquisire una risorsa e gli errori che si verificano tali errori includono le funzioni di lavoro che permette alle attività e gruppi di attività. Quando un'attività o un gruppo di attività genera un'eccezione, il runtime gestisce l'eccezione e ne esegue il marshalling per il contesto in attesa per l'attività o un gruppo di attività. Per i componenti, ad esempio le attività e gli agenti, il runtime gestisce le eccezioni per l'utente. In questi casi, è necessario implementare un meccanismo di gestione delle eccezioni. In questo argomento viene descritto come il runtime gestisce le eccezioni generate dall'attività, gruppi di attività, dalle attività leggere e dagli agenti asincroni e come rispondere alle eccezioni nelle applicazioni.  
  
## <a name="key-points"></a>Punti chiave  
  
-   Quando un'attività o un gruppo di attività genera un'eccezione, il runtime gestisce l'eccezione e ne esegue il marshalling per il contesto in attesa per l'attività o un gruppo di attività.  
  
-   Quando possibile, racchiudere ogni chiamata a [concurrency::task::get](reference/task-class.md#get) e [concurrency::task::wait](reference/task-class.md#wait) con un `try` / `catch` blocco per gestire gli errori che è possibile ripristinare Da. Il runtime termina l'applicazione se un'attività genera un'eccezione e non viene rilevata dall'attività, una delle relative continuazioni o dell'applicazione principale.  
  
-   Viene eseguito sempre una continuazione basata su attività; non è importante se l'attività precedente è stata completata, ha generato un'eccezione o è stata annullata. Una continuazione basata su valore non viene eseguito se l'attività precedente genera un'eccezione o Annulla.  
  
-   Poiché le continuazioni basate su attività vengono sempre eseguiti, considerare la possibilità di aggiungere una continuazione basata su attività alla fine della catena di continuazione. Ciò consente di garantire che il codice rileva tutte le eccezioni.  
  
-   Il runtime genera [Concurrency:: task_canceled](../../parallel/concrt/reference/task-canceled-class.md) quando si chiama [concurrency::task::get](reference/task-class.md#get) e tale attività viene annullata.  

  
-   Il runtime gestisce le eccezioni per le attività e gli agenti.  
  
##  <a name="top"></a> In questo documento  
  
- [Attività e continuazioni](#tasks)  
  
- [I gruppi di attività e algoritmi paralleli](#task_groups)  
  
- [Eccezioni generate dal Runtime](#runtime)  
  
- [Più eccezioni](#multiple)  
  
- [Annullamento](#cancellation)  
  
- [Attività leggere](#lwts)  
  
- [Agenti asincroni](#agents)  
  
##  <a name="tasks"></a> Attività e continuazioni  
 In questa sezione viene descritto come il runtime gestisce le eccezioni generate da [Concurrency:: Task](../../parallel/concrt/reference/task-class.md) oggetti e delle relative continuazioni. Per ulteriori informazioni sul modello di attività e continuazione, vedere [parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md).  
  
 Quando si genera un'eccezione nel corpo di una funzione lavoro passata a un `task` dell'oggetto, il runtime archivia l'eccezione e ne esegue il marshalling nel contesto che chiama [concurrency::task::get](reference/task-class.md#get) o [concurrency:: Task:: Wait](reference/task-class.md#wait). Il documento [parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md) descrive basato su attività e continuazioni basate su valore, ma al riepilogo, una continuazione basata su valore accetta un parametro di tipo `T` e una continuazione basata su attività accetta un parametro di tipo `task<T>`. Se un'attività che genera un'eccezione ha uno o più continuazioni basate su valori, tali continuazioni non pianificati per l'esecuzione. Il seguente esempio illustra questo comportamento.  

  
 [!code-cpp[concrt-eh-task#1](../../parallel/concrt/codesnippet/cpp/exception-handling-in-the-concurrency-runtime_1.cpp)]  
  
 Una continuazione basata su attività consente di gestire qualsiasi eccezione generata dall'attività precedente. Viene eseguito sempre una continuazione basata su attività; non è importante se l'attività è stata completata, ha generato un'eccezione o è stata annullata. Quando un'attività genera un'eccezione, relative continuazioni basate su attività vengono pianificate per l'esecuzione. Nell'esempio seguente mostra un'attività che genera sempre un'eccezione. L'attività ha due continuazioni; uno è basato su un valore e l'altro è basato su attività. L'eccezione basato su attività viene sempre eseguito e pertanto può intercettare l'eccezione generata dall'attività precedente. Quando l'esempio in attesa di entrambe le continuazioni al completamento, l'eccezione viene generata di nuovo perché viene sempre generata quando l'eccezione di attività `task::get` o `task::wait` viene chiamato.  
  
 [!code-cpp[concrt-eh-continuations#1](../../parallel/concrt/codesnippet/cpp/exception-handling-in-the-concurrency-runtime_2.cpp)]  
  
 È consigliabile utilizzare le continuazioni basate su attività per intercettare le eccezioni che si sono in grado di gestire. Poiché le continuazioni basate su attività vengono sempre eseguiti, considerare la possibilità di aggiungere una continuazione basata su attività alla fine della catena di continuazione. Ciò consente di garantire che il codice rileva tutte le eccezioni. Nell'esempio seguente viene illustrata una catena di continuazione basato su un valore di base. Genera la terza attività nella catena, e pertanto non vengono eseguite le continuazioni basate su valori che lo seguono. Tuttavia, la continuazione finale è basato su attività e pertanto viene sempre eseguito. La continuazione finale gestisce l'eccezione generata dall'attività di terzi.  
  
 È consigliabile intercettare le eccezioni più specifiche che è possibile. Se non si dispone di eccezioni specifiche catch, è possibile omettere la continuazione basata su attività finale. Qualsiasi eccezione rimane non gestita e può terminare l'applicazione.  
  
 [!code-cpp[concrt-eh-task-chain#1](../../parallel/concrt/codesnippet/cpp/exception-handling-in-the-concurrency-runtime_3.cpp)]  
  
> [!TIP]
>  È possibile utilizzare il [concurrency::task_completion_event::set_exception](../../parallel/concrt/reference/task-completion-event-class.md) metodo per associare un'eccezione a un evento di completamento attività. Il documento [parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md) descrive il [Concurrency:: task_completion_event](../../parallel/concrt/reference/task-completion-event-class.md) classe in modo più dettagliato.  
  

 [Concurrency:: task_canceled](../../parallel/concrt/reference/task-canceled-class.md) è un tipo di eccezione di runtime importanti che si riferisce a `task`. Il runtime genera `task_canceled` quando si chiama `task::get` e tale attività viene annullata. (Al contrario, `task::wait` restituisce [task_status:: Canceled](reference/concurrency-namespace-enums.md#task_group_status) e non genera eccezioni.) È possibile rilevare e gestire questa eccezione da una continuazione basata su attività o quando si chiama `task::get`. Per ulteriori informazioni sull'annullamento di attività, vedere [annullamento nella libreria PPL](cancellation-in-the-ppl.md).  

  
> [!CAUTION]
>  Non generare mai `task_canceled` dal codice. Chiamare [Concurrency:: cancel_current_task](reference/concurrency-namespace-functions.md#cancel_current_task) invece.  
  
 Il runtime termina l'applicazione se un'attività genera un'eccezione e non viene rilevata dall'attività, una delle relative continuazioni o dell'applicazione principale. Se l'applicazione si blocca, è possibile configurare Visual Studio per interrompere l'esecuzione quando vengono generate eccezioni di C++. Dopo avere diagnosticato il percorso dell'eccezione non gestita, è possibile utilizzare una continuazione basata su attività per gestirla.  
  
 La sezione [le eccezioni generate dal Runtime](#runtime) in questo documento viene descritto come gestire le eccezioni di runtime in modo più dettagliato.  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="task_groups"></a> I gruppi di attività e algoritmi paralleli  

 In questa sezione viene descritto come il runtime gestisce le eccezioni generate dai gruppi di attività. In questa sezione si applica anche per gli algoritmi paralleli, ad esempio [Concurrency:: parallel_for](reference/concurrency-namespace-functions.md#parallel_for), poiché questi algoritmi si basano sui gruppi di attività.  
  
> [!CAUTION]
>  Assicurarsi di comprendere gli effetti sulle attività dipendenti eccezioni. Per le procedure consigliate sull'utilizzo delle eccezioni con le attività o gli algoritmi paralleli, vedere il [comprendere come eccezione eccezioni influiscono sull'oggetto eliminazione e annullamento](../../parallel/concrt/best-practices-in-the-parallel-patterns-library.md#object-destruction) sezione nelle procedure consigliate in parallelo Argomento di libreria di modelli.  
  
 Per ulteriori informazioni sui gruppi di attività, vedere [parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md). Per ulteriori informazioni sugli algoritmi paralleli, vedere [gli algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).  

 Quando si genera un'eccezione nel corpo di una funzione lavoro passata a un [Concurrency:: task_group](reference/task-group-class.md) o [Concurrency:: structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) dell'oggetto, il runtime archivia l'eccezione e ne esegue il marshalling il contesto che chiama [Concurrency](reference/task-group-class.md#wait), [Concurrency](reference/structured-task-group-class.md#wait), [run_and_wait](reference/task-group-class.md#run_and_wait), o [concurrency::structured_task_group::run_and_wait](reference/structured-task-group-class.md#run_and_wait). Inoltre, il runtime arresta tutte le attività attive che sono nel gruppo di attività (compresi quelli in gruppi di attività figlio) ed Elimina tutte le attività che non sono ancora avviate.  

  
 Nell'esempio seguente viene illustrata la struttura di base di una funzione lavoro che genera un'eccezione. Nell'esempio viene utilizzato un `task_group` oggetto per visualizzare i valori di due `point` oggetti in parallelo. Il `print_point` funzione lavoro stampati i valori di un `point` oggetto nella console. La funzione lavoro genera un'eccezione se il valore di input è `NULL`. Il runtime archivia l'eccezione e ne esegue il marshalling nel contesto che chiama `task_group::wait`.  
  
 [!code-cpp[concrt-eh-task-group#1](../../parallel/concrt/codesnippet/cpp/exception-handling-in-the-concurrency-runtime_4.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
X = 15, Y = 30Caught exception: point is NULL.  
```  
  
 Per un esempio completo che usa un gruppo di attività di gestione delle eccezioni, vedere [procedura: utilizzare eccezioni per interrompere un ciclo Parallel](../../parallel/concrt/how-to-use-exception-handling-to-break-from-a-parallel-loop.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="runtime"></a> Eccezioni generate dal Runtime  
 Un'eccezione può essere causato da una chiamata al runtime. La maggior parte dei tipi di eccezione, ad eccezione di [Concurrency:: task_canceled](../../parallel/concrt/reference/task-canceled-class.md) e [concurrency::operation_timed_out](../../parallel/concrt/reference/operation-timed-out-class.md), indicare un errore di programmazione. Questi errori sono in genere irreversibili e pertanto dovrebbero non essere rilevati o gestiti dal codice dell'applicazione. È consigliabile intercettare solo o gestire gli errori irreversibili nel codice dell'applicazione quando è necessario diagnosticare gli errori di programmazione. Tuttavia, informazioni sui tipi di eccezione definiti dal runtime consente di diagnosticare gli errori di programmazione.  
  
 Il meccanismo di gestione delle eccezioni è uguale per le eccezioni generate dal runtime come le eccezioni generate dalle funzioni di lavoro. Ad esempio, il [Concurrency:: Receive](reference/concurrency-namespace-functions.md#receive) funzione genera un'eccezione `operation_timed_out` quando non riceve un messaggio nel periodo di tempo specificato. Se `receive` genera un'eccezione in una funzione lavoro che si passa a un gruppo di attività, il runtime archivia l'eccezione e ne esegue il marshalling nel contesto che chiama `task_group::wait`, `structured_task_group::wait`, `task_group::run_and_wait`, o `structured_task_group::run_and_wait`.  
  
 L'esempio seguente usa il [Concurrency:: parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke) algoritmo per eseguire due attività in parallelo. La prima attività attende cinque secondi e quindi invia un messaggio a un buffer dei messaggi. La seconda attività utilizza il `receive` funzione in attesa di tre secondi per ricevere un messaggio dal buffer del messaggio stesso. Il `receive` funzione genera un'eccezione `operation_timed_out` se non riceve il messaggio nel periodo di tempo.  
  
 [!code-cpp[concrt-eh-time-out#1](../../parallel/concrt/codesnippet/cpp/exception-handling-in-the-concurrency-runtime_5.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
The operation timed out.  
```  
  
 Per impedire un arresto anomalo dell'applicazione, assicurarsi che il codice gestisce le eccezioni quando viene chiamato in fase di esecuzione. Consente di gestire anche le eccezioni quando viene chiamato nel codice esterno che utilizza il Runtime di concorrenza, ad esempio, una libreria di terze parti.  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="multiple"></a> Più eccezioni  
 Se un'attività o un algoritmo parallelo riceve più eccezioni, il runtime effettua il marshalling solo una delle eccezioni nel contesto di chiamata. Il runtime non garantisce l'eccezione che effettua il marshalling.  
  
 L'esempio seguente usa il `parallel_for` algoritmo per stampare i numeri nella console. Genera un'eccezione se il valore di input è minore di un valore minimo o maggiore di un valore massimo. In questo esempio, più le funzioni di lavoro può generare un'eccezione.  
  
 [!code-cpp[concrt-eh-multiple#1](../../parallel/concrt/codesnippet/cpp/exception-handling-in-the-concurrency-runtime_6.cpp)]  
  
 Di seguito Mostra output di esempio per questo esempio.  
  
```Output  
8293104567Caught exception: -5: the value is less than the minimum.  
```  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="cancellation"></a> Annullamento  
 Non tutte le eccezioni indicano un errore. Ad esempio, un algoritmo di ricerca potrebbe utilizzare la gestione delle eccezioni per interrompere l'attività associata quando viene trovato il risultato. Per ulteriori informazioni su come usare i meccanismi di annullamento nel codice, vedere [annullamento nella libreria PPL](../../parallel/concrt/cancellation-in-the-ppl.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="lwts"></a> Attività leggere  
 Un'attività leggera è un'attività pianificata direttamente da un [Concurrency:: Scheduler](../../parallel/concrt/reference/scheduler-class.md) oggetto. Attività leggere implicano meno sovraccarico le normali attività. Tuttavia, il runtime non intercetta le eccezioni generate dalle attività leggere. Al contrario, l'eccezione viene intercettata dal gestore di eccezioni non gestite, che, per impostazione predefinita, termina il processo. Pertanto, è possibile utilizzare un meccanismo di gestione degli errori appropriato nell'applicazione. Per ulteriori informazioni sulle attività leggere, vedere [utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="agents"></a> Agenti asincroni  
 Analogamente alle attività leggere, il runtime gestisce le eccezioni generate dagli agenti asincroni.  
  
 Nell'esempio seguente viene illustrato un modo per gestire le eccezioni in una classe che deriva da [Concurrency:: Agent](../../parallel/concrt/reference/agent-class.md). Questo esempio viene definito il `points_agent` classe. Il `points_agent::run` metodo legge `point` per gli oggetti dal buffer dei messaggi e li visualizza nella console. Il `run` metodo genera un'eccezione se viene ricevuto un `NULL` puntatore.  
  
 Il `run` metodo racchiude tutto il lavoro in un `try` - `catch` blocco. Il `catch` blocco archivia l'eccezione in un buffer dei messaggi. L'applicazione verifica se l'agente ha rilevato un errore mediante la lettura da questo buffer, dopo il completamento dell'agente.  
  
 [!code-cpp[concrt-eh-agents#1](../../parallel/concrt/codesnippet/cpp/exception-handling-in-the-concurrency-runtime_7.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
X: 10 Y: 20  
X: 20 Y: 30  
error occurred in agent: point must not be NULL  
the status of the agent is: done  
```  
  
 Poiché il `try` - `catch` all'esterno di un blocco di `while` ciclo, l'agente termina l'elaborazione quando viene rilevato il primo errore. Se il `try` - `catch` era incluso in un blocco di `while` ciclo, l'agente continuerà dopo un errore.  
  
 In questo esempio le eccezioni vengono archiviate in un buffer dei messaggi in modo che un altro componente è possibile monitorare l'agente per gli errori durante l'esecuzione. Questo esempio viene utilizzato un [Concurrency:: single_assignment](../../parallel/concrt/reference/single-assignment-class.md) oggetto usato per archiviare l'errore. Nel caso in cui un agente gestisca più eccezioni, la `single_assignment` classe archivia solo il primo messaggio viene passato a esso. Per archiviare solo l'ultima eccezione, utilizzare il [Concurrency:: overwrite_buffer](../../parallel/concrt/reference/overwrite-buffer-class.md) classe. Per archiviare tutte le eccezioni, utilizzare il [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md) classe. Per ulteriori informazioni su questi blocchi dei messaggi, vedere [blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md).  
  
 Per ulteriori informazioni sugli agenti asincroni, vedere [agenti asincroni](../../parallel/concrt/asynchronous-agents.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="summary"></a> Riepilogo  
 [[Torna all'inizio](#top)]  
  
## <a name="see-also"></a>Vedere anche  
 [Runtime di concorrenza](../../parallel/concrt/concurrency-runtime.md)   
 [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)   
 [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)   
 [Annullamento nella libreria PPL](cancellation-in-the-ppl.md)   
 [Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)   
 [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)

