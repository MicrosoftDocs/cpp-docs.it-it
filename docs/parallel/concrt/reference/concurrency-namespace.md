---
title: "Spazio dei nomi concurrency | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concurrent_priority_queue/concurrency"
  - "agents/concurrency"
  - "concurrent_vector/concurrency"
  - "concrt/concurrency"
  - "internal_split_ordered_list/concurrency"
  - "concurrent_queue/concurrency"
  - "pplcancellation_token/concurrency"
  - "pplinterface/concurrency"
  - "ppltasks/concurrency"
  - "ppl/concurrency"
  - "concurrent_unordered_map/concurrency"
  - "concrtrm/concurrency"
  - "concurrent_unordered_set/concurrency"
  - "pplconcrt/concurrency"
  - "internal_concurrent_hash/concurrency"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Concurrency (spazio dei nomi)"
ms.assetid: f1d33ca2-679b-4442-b140-22a9d9df61d1
caps.latest.revision: 37
caps.handback.revision: 37
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Spazio dei nomi concurrency
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Lo spazio dei nomi `Concurrency` fornisce classi e funzioni che consentono l'accesso al runtime di concorrenza, un framework di programmazione simultanea per C++. Per ulteriori informazioni, vedere [Runtime di concorrenza](../../../parallel/concrt/concurrency-runtime.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
namespace concurrency;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="namespaces"></a>Namespaces  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[spazio dei nomi Concurrency::Extensibility](http://msdn.microsoft.com/it-it/16a86ff2-128e-4edf-89e4-38aac79c81f9)||  
  
### <a name="typedefs"></a>Typedef  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`runtime_object_identity`|Ogni istanza del messaggio ha un'identità che lo segue quando viene duplicato e viene passato tra i componenti della messaggistica. Non può corrispondere all'indirizzo dell'oggetto del messaggio.|  
|`task_status`|Un tipo che rappresenta lo stato terminale di un'attività. I valori validi sono `completed` e `canceled`.|  
|`TaskProc`|Un'astrazione elementare per un'attività, definita come `void (__cdecl * TaskProc)(void *)`. `TaskProc` è chiamato per richiamare il corpo di un'attività.|  
|`TaskProc_t`|Un'astrazione elementare per un'attività, definita come `void (__cdecl * TaskProc_t)(void *)`. `TaskProc` è chiamato per richiamare il corpo di un'attività.|  
  
### <a name="classes"></a>Classi  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Classe affinity_partitioner](../../../parallel/concrt/reference/affinity-partitioner-class.md)|La classe `affinity_partitioner` è simile alla classe `static_partitioner`, ma migliora l'affinità della cache offrendo la scelta di mappare sottointervalli ai thread di lavoro. Può migliorare notevolmente le prestazioni quando un ciclo viene eseguito di nuovo sullo stesso insieme di dati e i dati si adattano nella cache. Si noti che lo stesso oggetto `affinity_partitioner` deve essere usato con le iterazioni successive di un ciclo parallelo che viene eseguito su un particolare set di dati, per trarre vantaggio dalla località dei dati.|  
|[Classe Agent](../../../parallel/concrt/reference/agent-class.md)|Classe destinata a essere usata come classe di base per tutti gli agenti indipendenti. Consente di nascondere lo stato ad altri agenti e di interagire attraverso il passaggio di messaggi.|  
|[auto_partitioner (classe)](../../../parallel/concrt/reference/auto-partitioner-class.md)|La classe `auto_partitioner` rappresenta il metodo predefinito `parallel_for`, `parallel_for_each` e `parallel_transform` usato per partizionare l'intervallo su cui eseguono l'iterazione. Questo metodo di partizionamento dell'intervallo usa l'acquisizione dell'intervallo per il bilanciamento del carico nonché l'annullamento per iterazione.|  
|[Classe bad_target](../../../parallel/concrt/reference/bad-target-class.md)|Questa classe descrive un'eccezione generata quando un blocco della messaggistica riceve un puntatore a una destinazione non valida per l'operazione eseguita.|  
|[Call (classe)](../../../parallel/concrt/reference/call-class.md)|Un blocco della messaggistica `call` è un oggetto `target_block` multi-origine ordinato che richiama una funzione specificata quando riceve un messaggio.|  
|[Classe cancellation_token](../../../parallel/concrt/reference/cancellation-token-class.md)|La classe `cancellation_token` rappresenta la possibilità di determinare se è stato richiesto l'annullamento di una determinata operazione. Un token specificato può essere associato a `task_group`, `structured_task_group` o a `task` per consentire l'annullamento implicito. Può inoltre essere sottoposto a polling per l'annullamento o disporre di un callback registrato se e quando l'oggetto `cancellation_token_source` associato viene annullato.|  
|[Classe cancellation_token_registration](../../../parallel/concrt/reference/cancellation-token-registration-class.md)|La classe `cancellation_token_registration` rappresenta una notifica di callback da `cancellation_token`. Quando il metodo `register` in `cancellation_token` viene utilizzato per ricevere la notifica dell'annullamento, un oggetto `cancellation_token_registration` viene restituito al callback come handle, in modo che da parte del chiamante possa essere richiesto di non eseguire più un callback specifico tramite l'utilizzo del metodo `deregister`.|  
|[Classe cancellation_token_source](../../../parallel/concrt/reference/cancellation-token-source-class.md)|La classe `cancellation_token_source` rappresenta la possibilità di annullare una determinata operazione annullabile.|  
|[Classe Choice](../../../parallel/concrt/reference/choice-class.md)|Un blocco della messaggistica `choice` è un blocco multi-origine a destinazione singola che rappresenta un'interazione del flusso di controllo con un set di origini. Il blocco choice attenderà che una qualsiasi delle molteplici origini produca un messaggio e propagherà l'indice dell'origine che ha prodotto il messaggio.|  
|[combinable (classe)](../../../parallel/concrt/reference/combinable-class.md)|L'oggetto `combinable<T>` ha lo scopo di fornire copie di dati di thread privato, per eseguire calcoli secondari locali per thread senza blocco durante algoritmi paralleli. Alla fine dell'operazione parallela, è possibile unire i sub-calcoli del thread privato in un risultato finale. Questa classe può essere usata in sostituzione di una variabile condivisa e può determinare un miglioramento delle prestazioni qualora vi fosse invece molto conflitto su tale variabile condivisa.|  
|[Classe concurrent_priority_queue](../../../parallel/concrt/reference/concurrent-priority-queue-class.md)|La classe `concurrent_priority_queue` è un contenitore che consente a più thread di inserire e togliere elementi contemporaneamente. Gli elementi vengono prelevati secondo un ordine di priorità dove la priorità è determinata da una funzione fornita come argomento del modello.|  
|[Classe concurrent_queue](../../../parallel/concrt/reference/concurrent-queue-class.md)|La classe `concurrent_queue` è una classe contenitore di sequenze che consente l'accesso di tipo First in First out ai relativi elementi. Abilita un set limitato di operazioni sicure per concorrenza, ad esempio `push` e `try_pop`.|  
|[Classe concurrent_unordered_map](../../../parallel/concrt/reference/concurrent-unordered-map-class.md)|La classe `concurrent_unordered_map` è un contenitore indipendente dalla concorrenza che controlla una sequenza di lunghezza variabile di elementi di tipo `std::pair<const K, _Element_type>`. La sequenza viene rappresentata in un modo che abilita le operazioni di accodamento, accesso elementi, accesso iteratori e attraversamento iteratori in modo indipendente dalla concorrenza.|  
|[Classe concurrent_unordered_multimap](../../../parallel/concrt/reference/concurrent-unordered-multimap-class.md)|La classe `concurrent_unordered_multimap` è un contenitore indipendente dalla concorrenza che controlla una sequenza di lunghezza variabile di elementi di tipo `std::pair<const K, _Element_type>`. La sequenza viene rappresentata in un modo che abilita le operazioni di accodamento, accesso elementi, accesso iteratori e attraversamento iteratori in modo indipendente dalla concorrenza.|  
|[Classe concurrent_unordered_multiset](../../../parallel/concrt/reference/concurrent-unordered-multiset-class.md)|La `concurrent_unordered_multiset` classe è un contenitore indipendente dalla concorrenza che controlla una sequenza di lunghezza variabile di elementi di tipo K. La sequenza viene rappresentata in modo indipendente dalla concorrenza aggiungere, l'accesso agli elementi, iteratori e le operazioni di attraversamento dell'iteratore.|  
|[Classe concurrent_unordered_set](../../../parallel/concrt/reference/concurrent-unordered-set-class.md)|La `concurrent_unordered_set` classe è un contenitore indipendente dalla concorrenza che controlla una sequenza di lunghezza variabile di elementi di tipo K. La sequenza viene rappresentata in modo indipendente dalla concorrenza aggiungere, l'accesso agli elementi, iteratori e le operazioni di attraversamento dell'iteratore.|  
|[Classe concurrent_vector](../../../parallel/concrt/reference/concurrent-vector-class.md)|La classe `concurrent_vector` è una classe contenitore di sequenze che consente un accesso casuale a qualsiasi elemento. Abilita accodamento, accesso elementi, accesso iteratori e operazioni traversali di iterazione indipendenti dalla concorrenza.|  
|[Classe del contesto](../../../parallel/concrt/reference/context-class.md)|Rappresenta un'astrazione per un contesto di esecuzione.|  
|[Classe context_self_unblock](../../../parallel/concrt/reference/context-self-unblock-class.md)|Questa classe descrive un'eccezione generata quando il metodo `Unblock` di un oggetto `Context` viene chiamato dallo stesso contesto. Potrebbe indicare un tentativo da parte di un contesto specificato di sbloccarsi.|  
|[Classe context_unblock_unbalanced](../../../parallel/concrt/reference/context-unblock-unbalanced-class.md)|Questa classe descrive un'eccezione generata quando le chiamate ai metodi `Block` e `Unblock` di un oggetto `Context` non sono abbinate correttamente.|  
|[Classe critical_section](../../../parallel/concrt/reference/critical-section-class.md)|Un'esclusione reciproca non rientrante che tiene conto in modo esplicito del runtime di concorrenza.|  
|[CurrentScheduler (classe)](../../../parallel/concrt/reference/currentscheduler-class.md)|Rappresenta un'astrazione per l'utilità di pianificazione corrente associata al contesto di chiamata.|  
|[Classe default_scheduler_exists](../../../parallel/concrt/reference/default-scheduler-exists-class.md)|Questa classe descrive un'eccezione generata quando il metodo `Scheduler::SetDefaultSchedulerPolicy` viene chiamato quando esiste già un'utilità di pianificazione predefinita all'interno del processo.|  
|[Classe Event](../../../parallel/concrt/reference/event-class.md)|Un evento di reimpostazione manuale che tiene conto in modo esplicito del runtime di concorrenza.|  
|[Classe improper_lock](../../../parallel/concrt/reference/improper-lock-class.md)|Questa classe descrive un'eccezione generata quando un blocco viene acquisito in modo errato.|  
|[Classe improper_scheduler_attach](../../../parallel/concrt/reference/improper-scheduler-attach-class.md)|Questa classe descrive un'eccezione generata quando il metodo `Attach` viene chiamato su un oggetto `Scheduler` già allegato al contesto corrente.|  
|[Classe improper_scheduler_detach](../../../parallel/concrt/reference/improper-scheduler-detach-class.md)|Questa classe descrive un'eccezione generata quando il metodo `CurrentScheduler::Detach` viene chiamato su un contesto che non è stato allegato ad alcuna unità di pianificazione tramite il metodo `Attach` di un oggetto `Scheduler`.|  
|[Classe improper_scheduler_reference](../../../parallel/concrt/reference/improper-scheduler-reference-class.md)|Questa classe descrive un'eccezione generata quando il metodo `Reference` viene chiamato su un oggetto `Scheduler` che si sta chiudendo, da un contesto che non fa parte dell'unità di pianificazione.|  
|[Classe invalid_link_target](../../../parallel/concrt/reference/invalid-link-target-class.md)|Questa classe descrive un'eccezione generata quando il metodo `link_target` di un blocco della messaggistica viene chiamato e tale blocco non è in grado di collegarsi alla destinazione. Può essere il risultato del superamento del numero di collegamenti consentito dal blocco della messaggistica o del tentativo di collegare una destinazione specifica due volte alla stessa origine.|  
|[Classe invalid_multiple_scheduling](../../../parallel/concrt/reference/invalid-multiple-scheduling-class.md)|Questa classe descrive un'eccezione generata quando un oggetto `task_handle` è pianificato più volte usando il metodo `run` di un oggetto `task_group` o `structured_task_group` senza una chiamata intermedia a uno dei metodi `wait` o `run_and_wait`.|  
|[Classe invalid_operation](../../../parallel/concrt/reference/invalid-operation-class.md)|Questa classe descrive un'eccezione generata quando viene eseguita un'operazione non valida non più descritta in maniera accurata da un altro tipo di eccezione generata dal runtime di concorrenza.|  
|[Classe invalid_oversubscribe_operation](../../../parallel/concrt/reference/invalid-oversubscribe-operation-class.md)|Questa classe descrive un'eccezione generata quando il metodo `Context::Oversubscribe` viene chiamato con il parametro `_BeginOversubscription` impostato su `false` senza una chiamata precedente al metodo `Context::Oversubscribe` con il parametro `_BeginOversubscription` impostato su `true`.|  
|[Classe invalid_scheduler_policy_key](../../../parallel/concrt/reference/invalid-scheduler-policy-key-class.md)|Questa classe descrive un'eccezione generata quando una chiave non valida o sconosciuta viene passata a un costruttore dell'oggetto `SchedulerPolicy` o il metodo `SetPolicyValue` di un oggetto `SchedulerPolicy` viene passato a una chiave che deve essere modificata mediante altri mezzi come, ad esempio, il metodo `SetConcurrencyLimits`.|  
|[Classe invalid_scheduler_policy_thread_specification](../../../parallel/concrt/reference/invalid-scheduler-policy-thread-specification-class.md)|Questa classe descrive un'eccezione generata quando si tenta di impostare i limiti di concorrenza di un oggetto `SchedulerPolicy` in modo che il valore della chiave `MinConcurrency` sia inferiore a quella della chiave `MaxConcurrency`.|  
|[Classe invalid_scheduler_policy_value](../../../parallel/concrt/reference/invalid-scheduler-policy-value-class.md)|Questa classe descrive un'eccezione generata quando una chiave dei criteri di un oggetto `SchedulerPolicy` viene impostata su un valore non valido per tale chiave.|  
|[ISource (classe)](../../../parallel/concrt/reference/isource-class.md)|La classe `ISource` corrisponde all'interfaccia per tutti i blocchi di origine. I blocchi di origine propagano messaggi ai blocchi `ITarget`.|  
|[ITarget (classe)](../../../parallel/concrt/reference/itarget-class.md)|La classe `ITarget` corrisponde all'interfaccia per tutti i blocchi di destinazione. I blocchi di destinazione usano messaggi a loro offerti da blocchi `ISource`.|  
|[Classe join](../../../parallel/concrt/reference/join-class.md)|Un blocco della messaggistica `join` è un `propagator_block` multi-origine, a destinazione singola, che combina insieme messaggi di tipo `T` da ognuna delle origini.|  
|[Classe Location](../../../parallel/concrt/reference/location-class.md)|Un'astrazione di una posizione fisica sull'hardware.|  
|[Classe Message](../../../parallel/concrt/reference/message-class.md)|Busta del messaggio di base contenente il payload dei dati passati tra blocchi della messaggistica.|  
|[Classe message_not_found](../../../parallel/concrt/reference/message-not-found-class.md)|Questa classe descrive un'eccezione generata quando un blocco della messaggistica non è in grado di trovare un messaggio richiesto.|  
|[Classe message_processor](../../../parallel/concrt/reference/message-processor-class.md)|La classe `message_processor` rappresenta la classe base astratta per l'elaborazione degli oggetti `message`. Non esiste garanzia sull'ordinamento dei messaggi.|  
|[Classe missing_wait](../../../parallel/concrt/reference/missing-wait-class.md)|Questa classe descrive un'eccezione generata quando vi sono attività ancora pianificate per un oggetto `task_group` o `structured_task_group` nel momento di esecuzione del distruttore dell'oggetto. Questa eccezione non sarà mai generata se il distruttore viene raggiunto a causa del processo di rimozione dello stack come risultato di un'eccezione.|  
|[Classe multi_link_registry](../../../parallel/concrt/reference/multi-link-registry-class.md)|L'oggetto `multi_link_registry` è un `network_link_registry` che gestisce più blocchi di origine o più blocchi di destinazione.|  
|[Classe multitype_join](../../../parallel/concrt/reference/multitype-join-class.md)|Un blocco della messaggistica `multitype_join` è un blocco multi-origine, a destinazione singola, che combina messaggi di diverso tipo da ciascuna delle sue origini e offre una tupla dei messaggi combinati alle sue destinazioni.|  
|[Classe nested_scheduler_missing_detach](../../../parallel/concrt/reference/nested-scheduler-missing-detach-class.md)|Questa classe descrive un'eccezione generata quando il runtime di concorrenza rileva che non è stata eseguita la chiamata al metodo `CurrentScheduler::Detach` su un contesto allegato a una seconda utilità di pianificazione mediante il metodo `Attach` dell'oggetto `Scheduler`.|  
|[Classe network_link_registry](../../../parallel/concrt/reference/network-link-registry-class.md)|La classe base astratta `network_link_registry` gestisce i collegamenti tra i blocchi di origine e blocchi di destinazione.|  
|[Classe operation_timed_out](../../../parallel/concrt/reference/operation-timed-out-class.md)|Questa classe descrive un'eccezione generata quando un'operazione è scaduta.|  
|[Classe ordered_message_processor](../../../parallel/concrt/reference/ordered-message-processor-class.md)|Un `ordered_message_processor` è un `message_processor` che consente ai blocchi del messaggio di elaborare messaggi nell'ordine in cui vengono ricevuti.|  
|[Classe overwrite_buffer](../../../parallel/concrt/reference/overwrite-buffer-class.md)|Un blocco della messaggistica `overwrite_buffer` è un `propagator_block` multi-origine a destinazione singola, in grado di archiviare un unico messaggio alla volta. I nuovi messaggi sovrascrivono i precedenti.|  
|[Classe progress_reporter](../../../parallel/concrt/reference/progress-reporter-class.md)|La classe del reporter dello stato di avanzamento consente la segnalazione di notifiche di stato di un tipo specifico. Ogni oggetto progress_reporter è associato a una particolare operazione o azione asincrona.|  
|[Classe propagator_block](../../../parallel/concrt/reference/propagator-block-class.md)|La classe `propagator_block` è una classe base astratta per blocchi di messaggio che sono sia origine sia destinazione. Combina la funzionalità delle classi `source_block` e `target_block`.|  
|[Classe reader_writer_lock](../../../parallel/concrt/reference/reader-writer-lock-class.md)|Un blocco reader-writer basato sulla coda di preferenza writer con solo spin locale. Il blocco concede l'accesso FIFO (First in First out) a writer e può essere dannoso per i reader in condizioni di continuo caricamento di writer.|  
|[ScheduleGroup (classe)](../../../parallel/concrt/reference/schedulegroup-class.md)|Rappresenta un'astrazione per un gruppo di pianificazione. I gruppi di pianificazione organizzano un set di lavoro correlato che trae vantaggio da una chiusura pianificata a livello temporaneo, eseguendo un'altra attività nello stesso gruppo prima di spostarsi in un altro gruppo, o a livello spaziale, eseguendo più elementi all'interno dello stesso gruppo sullo stesso nodo NUMA o sul socket fisico.|  
|[Scheduler (classe)](../../../parallel/concrt/reference/scheduler-class.md)|Rappresenta un'astrazione per un'utilità di pianificazione del runtime di concorrenza.|  
|[Classe scheduler_not_attached](../../../parallel/concrt/reference/scheduler-not-attached-class.md)|Questa classe descrive un'eccezione generata quando viene eseguita un'operazione che richiede un'utilità di pianificazione da allegare al contesto corrente e non lo è.|  
|[Classe scheduler_resource_allocation_error](../../../parallel/concrt/reference/scheduler-resource-allocation-error-class.md)|Questa classe descrive un'eccezione generata a causa dell'errore per acquisire una risorsa critica nel runtime di concorrenza.|  
|[Classe scheduler_worker_creation_error](../../../parallel/concrt/reference/scheduler-worker-creation-error-class.md)|Questa classe descrive un'eccezione generata a causa di un errore nella creazione di un contesto di esecuzione del lavoro nel runtime di concorrenza.|  
|[SchedulerPolicy (classe)](../../../parallel/concrt/reference/schedulerpolicy-class.md)|La classe `SchedulerPolicy` contiene un set di coppie chiave/valore, uno per ogni elemento dei criteri, che controllano il comportamento di un'istanza dell'utilità di pianificazione.|  
|[Classe simple_partitioner](../../../parallel/concrt/reference/simple-partitioner-class.md)|La classe `simple_partitioner` rappresenta il partizionamento statico dell'intervallo iterato da `parallel_for`. Il partitioner divide l'intervallo in blocchi in modo che ogni blocco abbia almeno il numero di iterazioni specificate dalle dimensioni del blocco.|  
|[Classe single_assignment](../../../parallel/concrt/reference/single-assignment-class.md)|Un blocco della messaggistica `single_assignment` è un `propagator_block` multi-origine, a destinazione singola, in grado di archiviare un unico `message` scrivibile una volta.|  
|[Classe single_link_registry](../../../parallel/concrt/reference/single-link-registry-class.md)|L'oggetto `single_link_registry` è un `network_link_registry` che gestisce solo un singolo blocco di origine o di destinazione.|  
|[Classe source_block](../../../parallel/concrt/reference/source-block-class.md)|La classe `source_block` è una classe base astratta per blocchi di sola origine. La classe fornisce funzionalità di gestione dei collegamenti di base come controlli dell'errore comune.|  
|[Classe source_link_manager](../../../parallel/concrt/reference/source-link-manager-class.md)|L'oggetto `source_link_manager` gestisce i collegamenti di rete dei blocchi della messaggistica nei blocchi `ISource`.|  
|[Classe static_partitioner](../../../parallel/concrt/reference/static-partitioner-class.md)|La classe `static_partitioner` rappresenta il partizionamento statico dell'intervallo iterato da `parallel_for`. Il partitioner divide l'intervallo nello stesso numero di blocchi delle unità di lavoro disponibili all'utilità di pianificazione sottostante.|  
|[Classe structured_task_group](../../../parallel/concrt/reference/structured-task-group-class.md)|La classe `structured_task_group` rappresenta una raccolta altamente strutturata di lavoro parallelo. È possibile mettere in coda attività parallele singole a un `structured_task_group` usando gli oggetti `task_handle`, e attenderne il completamento, oppure annullare il gruppo di attività prima di aver terminato l'esecuzione, interrompendo in tal modo qualsiasi attività che non abbia avviato l'esecuzione.|  
|[Classe target_block](../../../parallel/concrt/reference/target-block-class.md)|La classe `target_block` corrisponde a una classe base astratta che mette a disposizione la funzionalità di gestione dei collegamenti di base e il controllo degli errori per blocchi di sola destinazione.|  
|[Classe Task (Runtime di concorrenza)](../../../parallel/concrt/reference/task-class-concurrency-runtime.md)|Classe `task` Parallel Patterns Library (PPL). Un oggetto `task` rappresenta il lavoro che può essere eseguito in modo asincrono e contemporaneamente con altre attività e il lavoro parallelo prodotto da algoritmi paralleli nel runtime di concorrenza. Produce un risultato di tipo `_ResultType` dopo il corretto completamento. Le attività di tipo `task<void>` non producono risultati. È possibile attendere il completamento di un'attività e annullarla indipendentemente da altre attività. È anche possibile comporla con altre attività usando i criteri continuations(`then`), join(`when_all`) e choice(`when_any`).|  
|[Classe task_canceled](../../../parallel/concrt/reference/task-canceled-class.md)|Questa classe descrive un'eccezione generata dal livello di attività PPL per forzare l'annullamento dell'attività corrente. Viene inoltre generata per il `get()` metodo [attività](http://msdn.microsoft.com/it-it/5389e8a5-5038-40b6-844a-55e9b58ad35f), per un'attività annullata.|  
|[Classe task_completion_event](../../../parallel/concrt/reference/task-completion-event-class.md)|La classe `task_completion_event` consente di ritardare l'esecuzione di un'attività fino a quando non viene soddisfatta una condizione oppure di avviare un'attività in risposta a un evento esterno.|  
|[Classe task_continuation_context](../../../parallel/concrt/reference/task-continuation-context-class.md)|La classe `task_continuation_context` consente di specificare dove eseguire una continuazione. È utile usare questa classe solo da un'app di Windows Store. Per le app non di Windows Store, il contesto di esecuzione della continuazione attività è determinato dal runtime e non è configurabile.|  
|[Classe task_group](../Topic/task_group%20Class.md)|La classe `task_group` rappresenta una raccolta di lavoro parallelo che può essere messa in attesa o annullata.|  
|[Classe task_handle](../../../parallel/concrt/reference/task-handle-class.md)|La classe `task_handle` rappresenta un elemento di lavoro parallelo individuale. Incapsula le istruzioni e i dati richiesti per eseguire un lavoro.|  
|[Classe task_options (Runtime di concorrenza)](../../../parallel/concrt/reference/task-options-class-concurrency-runtime.md)|Rappresenta le opzioni consentite per la creazione di un'attività|  
|[Classe Timer](../../../parallel/concrt/reference/timer-class.md)|Un blocco della messaggistica `timer` è un `source_block` a destinazione singola in grado di inviare un messaggio alla sua destinazione dopo che è trascorso un determinato periodo di tempo oppure ad intervalli specifici.|  
|[Classe Transformer](../../../parallel/concrt/reference/transformer-class.md)|Un blocco della messaggistica `transformer` è un `propagator_block` multi-origine, a destinazione singola, che può accettare messaggi di un tipo ed è in grado di archiviare un numero non associato di messaggi di un tipo diverso.|  
|[Classe unbounded_buffer](../Topic/unbounded_buffer%20Class.md)|Un blocco della messaggistica `unbounded_buffer` è un `propagator_block` multi-origine a destinazione singola, in grado di archiviare un numero non associato di messaggi di un tipo diverso.|  
|[Classe unsupported_os](../../../parallel/concrt/reference/unsupported-os-class.md)|Tramite questa classe viene descritta un'eccezione generata quando viene utilizzato un sistema operativo non supportato.|  
  
### <a name="structures"></a>Strutture  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[DispatchState (struttura)](../../../parallel/concrt/reference/dispatchstate-structure.md)|La struttura `DispatchState` è usata per trasferire lo stato al metodo `IExecutionContext::Dispatch`. Descrive le circostanze in cui il metodo `Dispatch` viene richiamato su un'interfaccia `IExecutionContext`.|  
|[IExecutionContext (struttura)](../../../parallel/concrt/reference/iexecutioncontext-structure.md)|Un'interfaccia a un contesto di esecuzione che può essere in esecuzione su un processore virtuale specificato e il cui contesto può essere cambiato cooperativamente.|  
|[IExecutionResource (struttura)](../../../parallel/concrt/reference/iexecutionresource-structure.md)|Un'astrazione per un thread hardware.|  
|[IResourceManager (struttura)](../../../parallel/concrt/reference/iresourcemanager-structure.md)|Un'interfaccia alla Gestione risorse del runtime di concorrenza. Si tratta dell'interfaccia mediante la quale le utilità di pianificazione comunicano con Gestione risorse.|  
|[IScheduler (struttura)](../../../parallel/concrt/reference/ischeduler-structure.md)|Un'interfaccia a un'astrazione di un'utilità di pianificazione del lavoro. Gestione risorse del runtime di concorrenza usa tale interfaccia per comunicare con le utilità di pianificazione del lavoro.|  
|[ISchedulerProxy (struttura)](../../../parallel/concrt/reference/ischedulerproxy-structure.md)|L'interfaccia mediante la quale le utilità di pianificazione comunicano con Gestione risorse del runtime di concorrenza per negoziare l'allocazione delle risorse.|  
|[IThreadProxy (struttura)](../../../parallel/concrt/reference/ithreadproxy-structure.md)|Astrazione per un thread di esecuzione. A seconda della chiave di criteri `SchedulerType` dell'utilità di pianificazione che si crea, Gestione risorse concederà un proxy del thread appoggiato da un thread Win32 normale o un thread UMS in modalità utente. I thread UMS sono supportati su sistemi operativi a 64 bit con Windows versione 7 e successive.|  
|[ITopologyExecutionResource (struttura)](../../../parallel/concrt/reference/itopologyexecutionresource-structure.md)|Interfaccia a una risorsa di esecuzione come definita da Gestione risorse.|  
|[ITopologyNode (struttura)](../../../parallel/concrt/reference/itopologynode-structure.md)|Interfaccia a un nodo di topologia come definito da Gestione risorse. Un nodo contiene una o più risorse di esecuzione.|  
|[IUMSCompletionList (struttura)](../../../parallel/concrt/reference/iumscompletionlist-structure.md)|Rappresenta un elenco di completamento UMS. Quando si blocca il thread UMS, il contesto di pianificazione definito dell'utilità di pianificazione viene inviato per decidere cosa pianificare sulla radice del processore virtuale sottostante mentre il thread originale è bloccato. Quando il thread originale si sblocca, il sistema operativo lo mette in coda nell'elenco di completamento accessibile tramite l'interfaccia. L'utilità di pianificazione può eseguire una query nell'elenco di completamento sul contesto di pianificazione designato o in qualsiasi altra posizione alla ricerca di lavoro.|  
|[IUMSScheduler (struttura)](../../../parallel/concrt/reference/iumsscheduler-structure.md)|Interfaccia a un'astrazione di un'utilità di pianificazione di lavoro che vuole che Gestione risorse del runtime di concorrenza passi thread UMS pianificabili in modalità utente. Gestione risorse usa questa interfaccia per comunicare con le utilità di pianificazione dei thread UMS.  L'interfaccia `IUMSScheduler` eredita dall'interfaccia `IScheduler`.|  
|[IUMSThreadProxy (struttura)](../../../parallel/concrt/reference/iumsthreadproxy-structure.md)|Astrazione per un thread di esecuzione. Se si vuole che all'utilità di pianificazione siano concessi thread UMS, impostare il valore per l'elemento dei criteri dell'utilità di pianificazione `SchedulerKind` su `UmsThreadDefault` e implementare l'interfaccia `IUMSScheduler`. I thread UMS sono supportati solo su sistemi operativi a 64 bit con Windows 7 e versioni successive.|  
|[IUMSUnblockNotification (struttura)](../../../parallel/concrt/reference/iumsunblocknotification-structure.md)|Rappresenta una notifica di Gestione risorse indicante che un proxy del thread, che si è bloccato e ha attivato un valore restituito al contesto di pianificazione definito dell'utilità di pianificazione, si è sbloccato ed è pronto per essere pianificato. Questa interfaccia non è valida una volta riprogrammato il contesto di esecuzione associato del proxy del thread, restituito dal metodo `GetContext`.|  
|[IVirtualProcessorRoot (struttura)](../../../parallel/concrt/reference/ivirtualprocessorroot-structure.md)|Un'astrazione per un thread hardware sulla quale un proxy del thread può eseguire.|  
|[Struttura scheduler_interface](../../../parallel/concrt/reference/scheduler-interface-structure.md)|Interfaccia dell'utilità di pianificazione|  
|[Struttura scheduler_ptr (Runtime di concorrenza)](../../../parallel/concrt/reference/scheduler-ptr-structure-concurrency-runtime.md)|Rappresenta un puntatore a un'utilità di pianificazione. Questa classe esiste per consentire di specificare una durata condivisa utilizzando shared_ptr o semplicemente un riferimento normale utilizzando il puntatore raw.|  
  
### <a name="enumerations"></a>Enumerazioni  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Enumerazione agent_status](../Topic/agent_status%20Enumeration.md)|Stati validi per un `agent`.|  
|[Agents_EventType (enumerazione)](../Topic/Agents_EventType%20Enumeration.md)|Tipi di eventi che possono essere tracciati mediante la funzionalità di tracciatura offerta dalla libreria di agenti.|  
|[ConcRT_EventType (enumerazione)](../Topic/ConcRT_EventType%20Enumeration.md)|Tipi di eventi che possono essere tracciati mediante la funzionalità di tracciatura offerta dal runtime di concorrenza.|  
|[Concrt_TraceFlags (enumerazione)](../Topic/Concrt_TraceFlags%20Enumeration.md)|Flag di analisi per i tipi di evento|  
|[CriticalRegionType (enumerazione)](../Topic/CriticalRegionType%20Enumeration.md)|Tipo di area critica in cui si trova un contesto.|  
|[DynamicProgressFeedbackType (enumerazione)](../Topic/DynamicProgressFeedbackType%20Enumeration.md)|Usato dai criteri `DynamicProgressFeedback` per descrivere se le risorse per l'utilità di pianificazione saranno ribilanciate sulla base di informazioni statistiche raccolte dall'utilità di pianificazione o solo sulla base di processori virtuali che passano allo stato inattivo e viceversa tramite chiamate ai metodi `Activate` e `Deactivate` sull'interfaccia `IVirtualProcessorRoot`. Per ulteriori informazioni sui criteri dell'utilità di pianificazione disponibili, vedere [PolicyElementKey (enumerazione)](../Topic/PolicyElementKey%20Enumeration.md).|  
|[Enumerazione join_type](../Topic/join_type%20Enumeration.md)|Tipo di un blocco della messaggistica `join`.|  
|[Enumerazione message_status](../Topic/message_status%20Enumeration.md)|Risposte valide per un'offerta di un oggetto `message` a un blocco.|  
|[PolicyElementKey (enumerazione)](../Topic/PolicyElementKey%20Enumeration.md)|Chiavi dei criteri che descrivono aspetti del comportamento dell'utilità di pianificazione. Ciascun elemento dei criteri è descritto da una coppia chiave-valore. Per ulteriori informazioni sui criteri dell'utilità di pianificazione e l'impatto nelle utilità di pianificazione, vedere [utilità di pianificazione](../../../parallel/concrt/task-scheduler-concurrency-runtime.md).|  
|[SchedulerType (enumerazione)](../Topic/SchedulerType%20Enumeration.md)|Usato dai criteri `SchedulerKind` per descrivere il tipo di thread che l'utilità di pianificazione deve usare per i contesti di esecuzione sottostanti. Per ulteriori informazioni sui criteri dell'utilità di pianificazione disponibili, vedere [PolicyElementKey (enumerazione)](../Topic/PolicyElementKey%20Enumeration.md).|  
|[SchedulingProtocolType (enumerazione)](../Topic/SchedulingProtocolType%20Enumeration.md)|Usato dai criteri `SchedulingProtocol` per descrivere quale algoritmo di pianificazione sarà usato per l'utilità di pianificazione. Per ulteriori informazioni sui criteri dell'utilità di pianificazione disponibili, vedere [PolicyElementKey (enumerazione)](../Topic/PolicyElementKey%20Enumeration.md).|  
|[SwitchingProxyState (enumerazione)](../Topic/SwitchingProxyState%20Enumeration.md)|Usato per indicare lo stato in cui si trova un proxy del thread, quando è in esecuzione uno scambio di contesto cooperativo per un proxy del thread diverso.|  
|[Enumerazione task_group_status](../Topic/task_group_status%20Enumeration.md)|Descrive lo stato di esecuzione di un oggetto `task_group` o `structured_task_group`. Un valore di questo tipo viene restituito da numerosi metodi che attendono attività pianificate a un gruppo di attività da completare.|  
|[WinRTInitializationType (enumerazione)](../Topic/WinRTInitializationType%20Enumeration.md)|Utilizzata dai criteri `WinRTInitialization` per descrivere se e come Windows Runtime verrà inizializzato nei thread dell'utilità di pianificazione per un'applicazione eseguita nei sistemi operativi con la versione Windows 8 o superiore. Per ulteriori informazioni sui criteri dell'utilità di pianificazione disponibili, vedere [PolicyElementKey (enumerazione)](../Topic/PolicyElementKey%20Enumeration.md).|  
  
### <a name="functions"></a>Funzioni  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Alloc (funzione)](../Topic/Alloc%20Function.md)|Assegna un blocco di memoria dalle dimensioni specificate dal suballocatore di cache del runtime di concorrenza.|  
|[Funzione asend](../Topic/asend%20Function.md)|Di overload. Un'operazione di invio asincrona che pianifica un'attività per propagare i dati nel blocco di destinazione.|  
|[Funzione cancel_current_task](../Topic/cancel_current_task%20Function.md)|Annulla l'attività attualmente in esecuzione. Questa funzione può essere chiamata dal corpo di un'attività per interrompere l'esecuzione dell'attività e forzarne il passaggio allo stato `canceled`.<br /><br /> Chiamare questa funzione non è uno scenario supportato se non si è all'interno del corpo di un oggetto `task`. Questa operazione provocherà un comportamento non definito, ad esempio un arresto anomalo o un blocco nell'applicazione.|  
|[Funzione create_async](../Topic/create_async%20Function.md)|Crea un costrutto asincrono di Windows Runtime in base a un'espressione lambda o un oggetto funzione fornito dall'utente. Il tipo restituito `create_async` è uno tra `IAsyncAction^`, `IAsyncActionWithProgress<TProgress>^`, `IAsyncOperation<TResult>^` o `IAsyncOperationWithProgress<TResult, TProgress>^` in base alla firma dell'espressione lambda passata al metodo.|  
|[Funzione create_task](../Topic/create_task%20Function.md)|Di overload. Crea una libreria PPL [attività](http://msdn.microsoft.com/it-it/5389e8a5-5038-40b6-844a-55e9b58ad35f) oggetto. `create_task` può essere usato ovunque si sarebbe usato un costruttore di attività. Viene fornito principalmente per comodità, in quanto consente l'uso della parola chiave `auto` durante la creazione delle attività.|  
|[CreateResourceManager (funzione)](../Topic/CreateResourceManager%20Function.md)|Restituisce un'interfaccia che rappresenta l'istanza singleton di Gestione risorse del runtime di concorrenza. Gestione risorse è responsabile dell'assegnazione di risorse a utilità di pianificazione che vogliono cooperare tra loro.|  
|[DisableTracing (funzione)](../Topic/DisableTracing%20Function.md)|Disabilita la tracciatura nel runtime di concorrenza. Questa funzione è deprecata poiché la traccia ETW non viene registrata per impostazione predefinita.|  
|[EnableTracing (funzione)](../Topic/EnableTracing%20Function.md)|Abilita la tracciatura nel runtime di concorrenza. Questa funzione è deprecata poiché la traccia ETW è ora attivata per impostazione predefinita.|  
|[Free (funzione)](../Topic/Free%20Function.md)|Rilascia un blocco di memoria precedentemente allocato dal metodo `Alloc` al suballocatore di cache del runtime di concorrenza.|  
|[Funzione get_ambient_scheduler (Runtime di concorrenza)](../Topic/get_ambient_scheduler%20Function%20\(Concurrency%20Runtime\).md)||  
|[GetExecutionContextId (funzione)](../Topic/GetExecutionContextId%20Function.md)|Restituisce un identificatore univoco che può essere assegnato a un contesto di esecuzione che implementa l'interfaccia `IExecutionContext`.|  
|[GetOSVersion (funzione)](../Topic/GetOSVersion%20Function.md)|Restituisce la versione del sistema operativo.|  
|[GetProcessorCount (funzione)](../Topic/GetProcessorCount%20Function.md)|Restituisce il numero dei thread hardware sul sistema sottostante.|  
|[GetProcessorNodeCount (funzione)](../Topic/GetProcessorNodeCount%20Function.md)|Restituisce il numero di nodi NUMA o pacchetti del processore sul sistema sottostante.|  
|[GetSchedulerId (funzione)](../Topic/GetSchedulerId%20Function.md)|Restituisce un identificatore univoco che può essere assegnato a un'utilità di pianificazione che implementa l'interfaccia `IScheduler`.|  
|[Funzione interruption_point](../Topic/interruption_point%20Function.md)|Crea un punto di interruzione per l'annullamento. Se un annullamento è in corso nel contesto in cui questa funzione viene chiamata, questa genererà un'eccezione interna che interrompe l'esecuzione del lavoro parallelo in esecuzione. Se l'annullamento non è in corso, la funzione non esegue alcuna operazione.|  
|[Funzione is_current_task_group_canceling](../Topic/is_current_task_group_canceling%20Function.md)|Restituisce un'informazione che indica se il gruppo di attività attualmente in esecuzione inline sul contesto corrente si trova nel mezzo di un annullamento attivo (o lo sarà a breve). Si noti che se non è presente alcun gruppo di attività in esecuzione inline sul contesto corrente, sarà restituito `false`.|  
|[Funzione make_choice](../Topic/make_choice%20Function.md)|Di overload. Costruisce un blocco della messaggistica `choice` da un oggetto `Scheduler` o `ScheduleGroup` facoltativo e due o più origini di input.|  
|[Funzione make_greedy_join](../Topic/make_greedy_join%20Function.md)|Di overload. Costruisce un blocco della messaggistica `greedy multitype_join` da un oggetto `Scheduler` o `ScheduleGroup` facoltativo e due o più origini di input.|  
|[Funzione make_join](../Topic/make_join%20Function.md)|Di overload. Costruisce un blocco della messaggistica `non_greedy multitype_join` da un oggetto `Scheduler` o `ScheduleGroup` facoltativo e due o più origini di input.|  
|[Funzione make_task](../Topic/make_task%20Function.md)|Un metodo factory per la creazione di un oggetto `task_handle`.|  
|[Funzione parallel_buffered_sort](../Topic/parallel_buffered_sort%20Function.md)|Di overload. Dispone gli elementi in un intervallo specificato in un ordine non decrescente, o secondo un criterio di ordinamento specificato da un predicato binario, in parallelo. Questa funzione è semanticamente simile a `std::sort` in quanto si tratta di un ordinamento basato sul confronto, instabile, sul posto, ma richiede uno spazio aggiuntivo pari `O(n)` e l'inizializzazione predefinita per gli elementi in fase di ordinamento.|  
|[Funzione parallel_for](../Topic/parallel_for%20Function.md)|Di overload. `parallel_for` viene iterato su un intervallo di indici ed esegue una funzione fornita dall'utente a ogni iterazione, in parallelo.|  
|[Funzione parallel_for_each](../Topic/parallel_for_each%20Function.md)|Di overload. `parallel_for_each` applica una funzione specificata a ogni elemento all'interno di un intervallo, in parallelo. È semanticamente equivalente alla funzione `for_each` nello spazio dei nomi `std`, fatta eccezione per l'iterazione sugli elementi, che viene eseguita in parallelo, e per l'ordine di iterazione, che non è specificato. L'argomento `_Func` deve supportare un operatore di chiamata della funzione del form `operator()(T)` laddove il parametro `T` è il tipo di elemento del contenitore su cui viene eseguita l'iterazione.|  
|[Funzione parallel_invoke](../Topic/parallel_invoke%20Function.md)|Di overload. Esegue gli oggetti funzione forniti come parametri in parallelo e blocca fino al termine dell'esecuzione. Ogni oggetto funzione potrebbe essere un'espressione lambda, un puntatore a funzione o qualsiasi oggetto che supporta l'operatore della chiamata di funzione con la firma `void operator()()`.|  
|[Funzione parallel_radixsort](../Topic/parallel_radixsort%20Function.md)|Di overload. Dispone gli elementi in un intervallo specificato in un ordine non decrescente usando l'algoritmo Radix Sort. Si tratta di una funzione stabile di ordinamento che richiede una funzione di proiezione affinché che consente agli elementi del progetto di essere ordinati nelle chiavi di tipo intero senza segno. L'inizializzazione predefinita è necessaria per gli elementi da ordinare.|  
|[parallel_reduce (funzione)](../Topic/parallel_reduce%20Function.md)|Di overload. Calcola la somma di tutti gli elementi in un intervallo specificato elaborando le somme parziali successive, o calcola il risultato dei risultati parziali successivi ottenuti analogamente tramite l'uso di un'operazione binaria specificata diversa da quella di somma, in parallelo. `parallel_reduce` è semanticamente simile a `std::accumulate`, con la differenza che richiede all'operazione binaria di essere associativa e richiede un valore di identità anziché un valore iniziale.|  
|[parallel_sort (funzione)](../Topic/parallel_sort%20Function.md)|Di overload. Dispone gli elementi in un intervallo specificato in un ordine non decrescente, o secondo un criterio di ordinamento specificato da un predicato binario, in parallelo. Questa funzione è semanticamente simile a `std::sort` in quanto si tratta di un ordinamento basato sul confronto, instabile, sul posto.|  
|[parallel_transform (funzione)](../Topic/parallel_transform%20Function.md)|Di overload. Applica un oggetto funzione specificato ad ogni elemento di un intervallo di origine o a una coppia di elementi di due intervalli di origine e copia i valori restituiti dell'oggetto funzione in un intervallo di destinazione, in parallelo. Questa funzione è semanticamente equivalente a `std::transform`.|  
|[Receive (funzione)](../Topic/receive%20Function.md)|Di overload. Un'implementazione di ricezione generale, che consente a un contesto di attendere i dati esattamente da un'origine e di filtrare i valori accettati.|  
|[Funzione run_with_cancellation_token](../Topic/run_with_cancellation_token%20Function.md)|Esegue un oggetto funzione immediatamente e in modo sincrono nel contesto di uno specifico token di annullamento.|  
|[Send (funzione)](../Topic/send%20Function.md)|Di overload. Un'operazione di invio sincrona che attende fino a quando la destinazione accetta o rifiuta il messaggio.|  
|[Funzione set_ambient_scheduler (Runtime di concorrenza)](../Topic/set_ambient_scheduler%20Function%20\(Concurrency%20Runtime\).md)||  
|[Funzione set_task_execution_resources](../Topic/set_task_execution_resources%20Function.md)|Di overload. Limita le risorse di esecuzione usate dai thread di lavoro interni del runtime di concorrenza al set di affinità specificato.<br /><br /> È valido chiamare questo metodo solo prima della creazione di Gestione risorse o tra due cicli di vita di Gestione risorse. Può essere chiamato più volte a condizione che Gestione risorse non esista al momento della chiamata. Dopo aver impostato un limite di affinità, rimane attiva fino alla successiva chiamata al metodo `set_task_execution_resources`.<br /><br /> La maschera di affinità fornita non deve essere un sottoinsieme della maschera di affinità del processo. L'affinità del processo verrà aggiornata, se necessario.|  
|[Funzione swap](../Topic/swap%20Function.md)|Scambia gli elementi di due oggetti `concurrent_vector`.|  
|[Funzione task_from_exception (Runtime di concorrenza)](../Topic/task_from_exception%20Function%20\(Concurrency%20Runtime\).md)||  
|[Funzione task_from_result (Runtime di concorrenza)](../Topic/task_from_result%20Function%20\(Concurrency%20Runtime\).md)||  
|[Trace_agents_register_name (funzione)](../Topic/Trace_agents_register_name%20Function.md)|Associa il nome specificato con il blocco di messaggi o l'agente nella traccia ETW.|  
|[Funzione try_receive](../Topic/try_receive%20Function.md)|Di overload. Un'implementazione di ricezione try generale, che consente a un contesto di cercare i dati esattamente da un'origine e di filtrare i valori accettati. Se i dati non sono pronti, il metodo restituirà false.|  
|[Wait (funzione)](../Topic/wait%20Function.md)|Consente di sospendere il contesto corrente per un intervallo di tempo specificato.|  
|[Funzione when_all](../Topic/when_all%20Function.md)|Crea un'attività che verrà completata correttamente quando tutte le attività fornite come argomenti verranno completate.|  
|[Funzione when_any](../Topic/when_any%20Function.md)|Di overload. Crea un'attività che verrà completata correttamente quando una qualsiasi delle attività fornite come argomenti verrà completata.|  
  
### <a name="operators"></a>Operatori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operatore! = (operatore)](../Topic/operator!=%20Operator.md)|Verifica se l'oggetto `concurrent_vector` sul lato sinistro dell'operatore non è uguale all'oggetto `concurrent_vector` sul lato destro.|  
|[operatore & & (operatore)](../Topic/operator&&%20Operator.md)|Di overload. Crea un'attività che verrà completata correttamente quando entrambe le attività fornite come argomenti verranno completate.|  
|[operatore &#124; &#124; (Operatore)](../Topic/operator%7C%7C%20Operator.md)|Di overload. Crea un'attività che verrà completata correttamente quando una delle attività fornite come argomenti verranno completate correttamente.|  
|[operatore < (operatore)](../Topic/operator%3C%20Operator.md)|Verifica se l'oggetto `concurrent_vector` sul lato sinistro dell'operatore è minore dell'oggetto `concurrent_vector` sul lato destro.|  
|[operatore < = (operatore)](../Topic/operator%3C=%20Operator.md)|Verifica se l'oggetto `concurrent_vector` sul lato sinistro dell'operatore è minore o uguale all'oggetto `concurrent_vector` sul lato destro.|  
|[operatore Operator = =](../Topic/operator==%20Operator.md)|Verifica se l'oggetto `concurrent_vector` sul lato sinistro dell'operatore è uguale all'oggetto `concurrent_vector` sul lato destro.|  
|[operatore > (operatore)](../Topic/operator%3E%20Operator.md)|Verifica se l'oggetto `concurrent_vector` sul lato sinistro dell'operatore è maggiore dell'oggetto `concurrent_vector` sul lato destro.|  
|[operatore > = (operatore)](../Topic/operator%3E=%20Operator.md)|Verifica se l'oggetto `concurrent_vector` sul lato sinistro dell'operatore è maggiore o uguale all'oggetto `concurrent_vector` sul lato destro.|  
  
### <a name="constants"></a>Costanti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[AgentEventGuid (costante)](../Topic/AgentEventGuid%20Constant.md)|Un GUID di categoria ({B9B5B78C-0713-4898-A21A-C67949DCED07}) che descrive gli eventi ETW generati dalla libreria di agenti nel runtime di concorrenza.|  
|[ChoreEventGuid (costante)](../Topic/ChoreEventGuid%20Constant.md)|Un GUID di categoria che descrive eventi ETW generati dal runtime di concorrenza che sono direttamente correlati ad attività di routine o attività.|  
|[ConcRT_ProviderGuid (costante)](../Topic/ConcRT_ProviderGuid%20Constant.md)|Il GUID del provider ETW per il runtime di concorrenza.|  
|[CONCRT_RM_VERSION_1 (costante)](../Topic/CONCRT_RM_VERSION_1%20Constant.md)|Indica il supporto dell'interfaccia Gestione risorse definito in Visual Studio 2010.|  
|[ConcRTEventGuid (costante)](../Topic/ConcRTEventGuid%20Constant.md)|Un GUID di categoria che descrive eventi ETW generati dal runtime di concorrenza che non sono descritti in maniera più specifica da un'altra categoria.|  
|[ContextEventGuid (costante)](../Topic/ContextEventGuid%20Constant.md)|Un GUID di categoria che descrive eventi ETW generati dal runtime di concorrenza che sono direttamente correlati a contesti.|  
|[COOPERATIVE_TIMEOUT_INFINITE (costante)](../Topic/COOPERATIVE_TIMEOUT_INFINITE%20Constant.md)|Valore indicante un'attesa che non deve terminare mai.|  
|[COOPERATIVE_WAIT_TIMEOUT (costante)](../Topic/COOPERATIVE_WAIT_TIMEOUT%20Constant.md)|Valore indicante un'attesa terminata.|  
|[INHERIT_THREAD_PRIORITY (costante)](../Topic/INHERIT_THREAD_PRIORITY%20Constant.md)|Valore speciale per le chiavi dei criteri `ContextPriority` che indicano che la priorità del thread di tutti i contesti nell'utilità di pianificazione deve essere identica a quella del thread che ha creato l'utilità di pianificazione.|  
|[LockEventGuid (costante)](../Topic/LockEventGuid%20Constant.md)|GUID di categoria che descrive eventi ETW generati dal runtime di concorrenza direttamente correlati ai blocchi.|  
|[MaxExecutionResources (costante)](../Topic/MaxExecutionResources%20Constant.md)|Valore speciale per le chiavi dei criteri `MinConcurrency` e `MaxConcurrency`. Assume come valore predefinito il numero di thread hardware sul computer in assenza di altri vincoli.|  
|[PPLParallelForeachEventGuid (costante)](../Topic/PPLParallelForeachEventGuid%20Constant.md)|Un GUID di categoria che descrive eventi ETW generati dal runtime di concorrenza che sono direttamente correlati all'utilizzo della funzione `parallel_for_each`.|  
|[PPLParallelForEventGuid (costante)](../Topic/PPLParallelForEventGuid%20Constant.md)|Un GUID di categoria che descrive eventi ETW generati dal runtime di concorrenza che sono direttamente correlati all'utilizzo della funzione `parallel_for`.|  
|[PPLParallelInvokeEventGuid (costante)](../Topic/PPLParallelInvokeEventGuid%20Constant.md)|Un GUID di categoria che descrive eventi ETW generati dal runtime di concorrenza che sono direttamente correlati all'utilizzo della funzione `parallel_invoke`.|  
|[ResourceManagerEventGuid (costante)](../Topic/ResourceManagerEventGuid%20Constant.md)|Un GUID di categoria che descrive eventi ETW generati dal runtime di concorrenza che sono direttamente correlati Gestore risorse.|  
|[ScheduleGroupEventGuid (costante)](../Topic/ScheduleGroupEventGuid%20Constant.md)|Un GUID di categoria che descrive eventi ETW generati dal runtime di concorrenza che sono direttamente correlati a gruppi di pianificazione.|  
|[SchedulerEventGuid (costante)](../Topic/SchedulerEventGuid%20Constant.md)|Un GUID di categoria che descrive eventi ETW generati dal runtime di concorrenza che sono direttamente correlati all'attività dell'utilità di pianificazione.|  
|[VirtualProcessorEventGuid (costante)](../Topic/VirtualProcessorEventGuid%20Constant.md)|Un GUID di categoria che descrive eventi ETW generati dal runtime di concorrenza che sono direttamente correlati a processori virtuali.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Agents. h, concrt, concrtrm. h, concurrent_priority_queue. h, concurrent_queue.h, concurrent_unordered_map.h, concurrent_unordered_set.h, concurrent_vector.h, internal_concurrent_hash. h, internal_split_ordered_list.h, PPL, cancellation_token. h, pplconcrt.h, pplinterface.h, ppltasks. h  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento](../../../parallel/concrt/reference/reference-concurrency-runtime.md)

