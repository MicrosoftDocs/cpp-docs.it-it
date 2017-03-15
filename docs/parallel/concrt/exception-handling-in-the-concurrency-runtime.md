---
title: "Gestione delle eccezioni nel runtime di concorrenza | Microsoft Docs"
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
  - "attività leggere, gestione delle eccezioni [Runtime di concorrenza]"
  - "gestione delle eccezioni [Runtime di concorrenza]"
  - "gruppi di attività strutturate, gestione delle eccezioni [Runtime di concorrenza]"
  - "agenti, gestione delle eccezioni [Runtime di concorrenza]"
  - "gruppi di attività, gestione delle eccezioni [Runtime di concorrenza]"
ms.assetid: 4d1494fb-3089-4f4b-8cfb-712aa67d7a7a
caps.latest.revision: 29
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 26
---
# Gestione delle eccezioni nel runtime di concorrenza
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Il runtime di concorrenza utilizza la gestione delle eccezioni C\+\+ per comunicare molti tipi di errori.  Questi errori includono l'utilizzo non valido del runtime, errori di runtime come l'acquisizione non riuscita di una risorsa ed errori che si verificano nelle funzioni lavoro fornite alle attività e ai gruppi di attività.  Quando un'attività o un gruppo di attività genera un'eccezione, il runtime gestisce l'eccezione e ne esegue il marshalling nel contesto che attende il completamento dell'attività o del gruppo di attività.  Il runtime non gestisce le eccezioni per i componenti come le attività leggere e gli agenti.  In questi casi, è necessario implementare un meccanismo di gestione delle eccezioni personalizzato.  In questo argomento viene descritto come il runtime gestisce le eccezioni generate dalle attività, dai gruppi di attività, dalle attività leggere e dagli agenti asincroni e come rispondere alle eccezioni nelle applicazioni.  
  
## Punti chiave  
  
-   Quando un'attività o un gruppo di attività genera un'eccezione, il runtime gestisce l'eccezione e ne esegue il marshalling nel contesto che attende il completamento dell'attività o del gruppo di attività.  
  
-   Quando possibile, racchiudere ogni chiamata a [concurrency::task::get](../Topic/task::get%20Method.md) e a [concurrency::task::wait](../Topic/task::wait%20Method.md) con un blocco `try`\/`catch` per gestire gli errori che si possono recuperare.  L'applicazione verrà terminata dal runtime se un'attività genera un'eccezione e tale eccezione non viene intercettata dall'attività, da una delle sue continuazioni o dall'applicazione principale.  
  
-   Una continuazione basata su attività viene sempre eseguita; non è importante se l'attività precedente è stata completata correttamente, ha generato un'eccezione oppure è stata annullata.  Una continuazione basata su valori non viene eseguita se l'attività precedente ha generato un'eccezione o se è stata cancellata.  
  
-   Poiché le continuazioni basate su attività vengono sempre eseguite, è necessario considerare l'aggiunta di una continuazione basata su attività alla fine della catena di continuazione.  Questa operazione può permettere al codice di rilevare tutte le eccezioni.  
  
-   Il runtime genera [concurrency::task\_canceled](../../parallel/concrt/reference/task-canceled-class.md) quando si chiama [concurrency::task::get](../Topic/task::get%20Method.md) e l'attività viene annullata.  
  
-   Il runtime non gestisce le eccezioni per le attività leggere e gli agenti.  
  
##  <a name="top"></a> In questo documento  
  
-   [Attività e continuazioni](#tasks)  
  
-   [Gruppi di attività e algoritmi paralleli](#task_groups)  
  
-   [Eccezioni generate dal runtime](#runtime)  
  
-   [Più eccezioni](#multiple)  
  
-   [Annullamento](#cancellation)  
  
-   [Attività leggere](#lwts)  
  
-   [Agenti asincroni](#agents)  
  
##  <a name="tasks"></a> Attività e continuazioni  
 In questa sezione viene descritto come il runtime gestisce le eccezioni generate dagli oggetti [concurrency::task](../../parallel/concrt/reference/task-class-concurrency-runtime.md) e dalle loro continuazioni.  Per ulteriori informazioni sull'attività e sul modello di continuazione, vedere [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md).  
  
 Quando si genera un'eccezione nel corpo di una funzione lavoro passata ad un oggetto `task`, il runtime archivia l'eccezione e ne esegue il marshalling nel contesto che chiama [concurrency::task::get](../Topic/task::get%20Method.md) o [concurrency::task::wait](../Topic/task::wait%20Method.md).  Il documento [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md) descrive le continuazioni basate su attività e quelle basate su valori, ma per riepilogare, una continuazione basata su valori accetta un parametro di tipo `T` mentre una continuazione basata su attività accetta un parametro di tipo `task<T>`.  Se un'attività che genera un'eccezione ha una o più continuazioni basate su valori, tali continuazioni non verranno pianificate per l'esecuzione.  Questo comportamento è illustrato nell'esempio seguente:  
  
 [!code-cpp[concrt-eh-task#1](../../parallel/concrt/codesnippet/CPP/exception-handling-in-the-concurrency-runtime_1.cpp)]  
  
 Una continuazione basata su attività consente di gestire qualsiasi eccezione generata dall'attività precedente.  Una continuazione basata su attività viene sempre eseguita; non è importante se l'attività è stata completata correttamente, ha generato un'eccezione oppure è stata annullata.  Quando un'attività genera un'eccezione, le sue continuazioni basate su attività verranno pianificate per l'esecuzione.  Nell'esempio seguente viene mostrata un'attività che genera sempre un'eccezione.  L'attività presenta due continuazioni; una è basata su valori mentre l'altra è basata su attività.  La continuazione basata su attività viene sempre eseguita e quindi può rilevare l'eccezione generata dall'attività precedente.  Quando nell'esempio si rimane in attesa della terminazione di entrambe le continuazioni, l'eccezione viene generata di nuovo poiché l'eccezione dell'attività viene sempre generata quando `task::get` o `task::wait` vengono chiamati.  
  
 [!code-cpp[concrt-eh-continuations#1](../../parallel/concrt/codesnippet/CPP/exception-handling-in-the-concurrency-runtime_2.cpp)]  
  
 È consigliabile utilizzare le continuazioni basate su attività per rilevare le eccezioni gestibili.  Poiché le continuazioni basate su attività vengono sempre eseguite, è necessario considerare l'aggiunta di una continuazione basata su attività alla fine della catena di continuazione.  Questa operazione può permettere al codice di rilevare tutte le eccezioni.  Nell'esempio seguente viene illustrata una catena di continuazioni basate su valori.  La terza attività nella catena genera un'eccezione, pertanto tutte le continuazioni basate su valori che seguono non verranno eseguite.  Tuttavia, la continuazione finale è basata su attività e pertanto verrà sempre eseguita.  La continuazione finale gestisce l'eccezione generata dalla terza attività.  
  
 È consigliabile intercettare le eccezioni nel modo più specifico possibile.  È possibile omettere la continuazione finale basata su attività se non si hanno eccezioni specifiche da rilevare.  Qualsiasi eccezione rimarrà non gestita e potrà terminare l'applicazione.  
  
 [!code-cpp[concrt-eh-task-chain#1](../../parallel/concrt/codesnippet/CPP/exception-handling-in-the-concurrency-runtime_3.cpp)]  
  
> [!TIP]
>  È possibile utilizzare il metodo [concurrency::task\_completion\_event::set\_exception](../../parallel/concrt/reference/task-completion-event-class.md) per associare un'eccezione ad un evento di completamento delle attività.  Il documento [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md) descrive la classe [concurrency::task\_completion\_event](../../parallel/concrt/reference/task-completion-event-class.md) più dettagliatamente.  
  
 [concurrency::task\_canceled](../../parallel/concrt/reference/task-canceled-class.md) è un tipo di eccezione runtime importante correlato a `task`.  Il runtime genera `task_canceled` quando si chiama `task::get` e l'attività viene annullata. \(Viceversa, `task::wait` restituisce [task\_status::canceled](../Topic/task_group_status%20Enumeration.md) e non genera eccezioni.\) È possibile intercettare e gestire questa eccezione con una continuazione basata su attività o quando si chiama `task::get`.  Per ulteriori informazioni sull'annullamento delle attività, vedere [Annullamento](../../parallel/concrt/cancellation-in-the-ppl.md).  
  
> [!CAUTION]
>  Non generare mai `task_canceled` dal codice.  Si chiami invece [concurrency::cancel\_current\_task](../Topic/cancel_current_task%20Function.md).  
  
 L'applicazione verrà terminata dal runtime se un'attività genera un'eccezione e tale eccezione non viene intercettata dall'attività, da una delle sue continuazioni o dall'applicazione principale.  Se l'applicazione si arresta in modo anomalo, è possibile configurare Visual Studio per interrompere l'esecuzione quando vengono generate eccezioni C\+\+.  Dopo aver diagnosticato la posizione dell'eccezione non gestita, utilizzare una continuazione basata su attività per la sua gestione.  
  
 La sezione [Eccezioni generate dal runtime](#runtime) in questo documento descrive in dettaglio come gestire le eccezioni del runtime.  
  
 \[[Top](#top)\]  
  
##  <a name="task_groups"></a> Gruppi di attività e algoritmi paralleli  
 In questa sezione viene descritto come il runtime gestisce le eccezioni generate dai gruppi di attività.  Questa sezione si applica anche agli algoritmi paralleli come [concurrency::parallel\_for](../Topic/parallel_for%20Function.md), poiché tali algoritmi sono basati sui gruppi di attività.  
  
> [!CAUTION]
>  Assicurarsi di comprendere gli effetti che le eccezioni hanno sulle attività dipendenti.  Per le procedure consigliate su come utilizzare la gestione delle eccezioni con le attività o con gli algoritmi paralleli, vedere la sezione [Come l'annullamento e la gestione delle eccezioni influiscono sull'eliminazione degli oggetti](../../parallel/concrt/best-practices-in-the-parallel-patterns-library.md#object-destruction) nelle procedure consigliate dell'argomento PPL \(Parallel Patterns Library\).  
  
 Per ulteriori informazioni sui gruppi di attività, vedere [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md).  Per ulteriori informazioni sugli algoritmi paralleli, vedere [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).  
  
 Quando si genera un'eccezione nel corpo di una funzione lavoro passata a un oggetto [concurrency::task\_group](../Topic/task_group%20Class.md) o [concurrency::structured\_task\_group](../../parallel/concrt/reference/structured-task-group-class.md), il runtime archivia l'eccezione e ne esegue il marshalling nel contesto che chiama [concurrency::task\_group::wait](../Topic/task_group::wait%20Method.md), [concurrency::structured\_task\_group::wait](../Topic/structured_task_group::wait%20Method.md), [concurrency::task\_group::run\_and\_wait](../Topic/task_group::run_and_wait%20Method.md) o [concurrency::structured\_task\_group::run\_and\_wait](../Topic/structured_task_group::run_and_wait%20Method.md).  Il runtime arresta inoltre tutte le attività attive presenti nel gruppo di attività, comprese quelle presenti nei gruppi di attività figlio, ed elimina le attività che non sono ancora state avviate.  
  
 Nell'esempio seguente viene illustrata la struttura di base di una funzione lavoro che genera un'eccezione.  Nell'esempio viene utilizzato un oggetto `task_group` per visualizzare i valori di due oggetti `point` in parallelo.  La funzione lavoro `print_point` visualizza i valori di un oggetto `point` nella console.  La funzione lavoro genera un'eccezione se il valore di input è `NULL`.  Il runtime archivia l'eccezione e ne esegue il marshalling nel contesto che chiama `task_group::wait`.  
  
 [!code-cpp[concrt-eh-task-group#1](../../parallel/concrt/codesnippet/CPP/exception-handling-in-the-concurrency-runtime_4.cpp)]  
  
 Questo esempio produce l'output che segue.  
  
  **X \= 15, Y \= 30**  
**Caught exception: point is NULL.** Per un esempio completo in cui viene utilizzata la gestione delle eccezioni in un gruppo di attività, vedere [Procedura: Usare la gestione delle eccezion per interrompere un ciclo Parallel](../../parallel/concrt/how-to-use-exception-handling-to-break-from-a-parallel-loop.md).  
  
 \[[Top](#top)\]  
  
##  <a name="runtime"></a> Eccezioni generate dal runtime  
 Un'eccezione può verificarsi a causa di una chiamata al runtime.  La maggior parte dei tipi di eccezione, esclusi [concurrency::task\_canceled](../../parallel/concrt/reference/task-canceled-class.md) e [concurrency::operation\_timed\_out](../../parallel/concrt/reference/operation-timed-out-class.md), indicano un errore di programmazione.  Questi errori sono in genere irreversibili e pertanto non devono essere rilevati o gestiti dal codice dell'applicazione.  È consigliabile rilevare o gestire gli errori irreversibili nel codice dell'applicazione solo quando è necessario diagnosticare gli errori di programmazione.  Tuttavia, tramite la comprensione dei tipi di eccezione definiti dal runtime è possibile diagnosticare gli errori di programmazione.  
  
 Il meccanismo di gestione delle eccezioni è lo stesso sia per le eccezioni generate dal runtime che per le eccezioni generate dalle funzioni lavoro.  La funzione [concurrency::receive](../Topic/receive%20Function.md), ad esempio, genera `operation_timed_out` quando non viene ricevuto un messaggio nel periodo di tempo specificato.  Se `receive` genera un'eccezione in una funzione lavoro passata a un gruppo di attività, il runtime archivia l'eccezione e ne esegue il marshalling nel contesto che chiama `task_group::wait`, `structured_task_group::wait`, `task_group::run_and_wait` o `structured_task_group::run_and_wait`.  
  
 Nell'esempio seguente viene utilizzato l'algoritmo [concurrency::parallel\_invoke](../Topic/parallel_invoke%20Function.md) per eseguire due attività in parallelo.  La prima attività attende cinque secondi, quindi invia un messaggio a un buffer dei messaggi.  La seconda attività utilizza la funzione `receive` per attendere tre secondi per la ricezione di un messaggio dallo stesso buffer dei messaggi.  Se il messaggio non viene ricevuto nel periodo di tempo indicato, la funzione `receive` genera `operation_timed_out`.  
  
 [!code-cpp[concrt-eh-time-out#1](../../parallel/concrt/codesnippet/CPP/exception-handling-in-the-concurrency-runtime_5.cpp)]  
  
 Questo esempio produce l'output che segue.  
  
  **Timeout dell'operazione.** Per evitare l'interruzione anomala dell'applicazione, verificare che il codice gestisca le eccezioni quando viene effettuata una chiamata nel runtime.  Le eccezioni devono inoltre essere gestite quando si effettua una chiamata nel codice esterno che utilizza il runtime di concorrenza, ad esempio, una libreria di terze parti.  
  
 \[[Top](#top)\]  
  
##  <a name="multiple"></a> Più eccezioni  
 Se un'attività o un algoritmo parallelo riceve più eccezioni, il runtime esegue il marshalling solo di una delle eccezioni nel contesto di chiamata.  Il runtime non garantisce di quale eccezione viene eseguito il marshalling.  
  
 Nell'esempio seguente viene utilizzato l'algoritmo `parallel_for` per visualizzare i numeri nella console.  Se il valore di input è inferiore a un valore minimo o superiore a un valore massimo, viene generata un'eccezione.  In questo esempio, più funzioni lavoro possono generare un'eccezione.  
  
 [!code-cpp[concrt-eh-multiple#1](../../parallel/concrt/codesnippet/CPP/exception-handling-in-the-concurrency-runtime_6.cpp)]  
  
 Questo esempio produce l'output seguente:  
  
  **8**  
**2**  
**9**  
**3**  
**10**  
**4**  
**5**  
**6**  
**7**  
**Caught exception: \-5: the value is less than the minimum.** \[[Top](#top)\]  
  
##  <a name="cancellation"></a> Annullamento  
 Non tutte le eccezioni indicano un errore.  Un algoritmo di ricerca potrebbe, ad esempio, utilizzare la gestione delle eccezioni per arrestare l'attività associata quando viene trovato il risultato.  Per ulteriori informazioni su come utilizzare i meccanismi di annullamento nel codice, vedere [Annullamento](../../parallel/concrt/cancellation-in-the-ppl.md).  
  
 \[[Top](#top)\]  
  
##  <a name="lwts"></a> Attività leggere  
 Un'attività leggera è un'attività che si pianifica direttamente da un oggetto [concurrency::Scheduler](../../parallel/concrt/reference/scheduler-class.md).  Le attività leggere implicano meno sovraccarico delle attività ordinarie.  Tuttavia, il runtime non rileva le eccezioni generate dalle attività leggere.  L'eccezione viene invece rilevata dal gestore delle eccezioni non gestite che per impostazione predefinita termina il processo.  Pertanto, utilizzare un meccanismo di gestione degli errori appropriato nell'applicazione.  Per ulteriori informazioni sulle attività leggere, vedere [Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md).  
  
 \[[Top](#top)\]  
  
##  <a name="agents"></a> Agenti asincroni  
 Analogamente alle attività leggere, il runtime non gestisce le eccezioni generate dagli agenti asincroni.  
  
 Nell'esempio seguente viene illustrato un modo per gestire le eccezioni in una classe che deriva da [concurrency::agent](../../parallel/concrt/reference/agent-class.md).  Nell'esempio viene definita la classe `points_agent`.  Il metodo `points_agent::run` legge gli oggetti `point` dal buffer dei messaggi e li visualizza nella console.  Il metodo `run` genera un'eccezione se viene ricevuto un puntatore `NULL`.  
  
 Il metodo `run` racchiude tutto il lavoro in un blocco `try`\-`catch`.  Il blocco `catch` archivia l'eccezione in un buffer dei messaggi.  L'applicazione controlla se l'agente ha rilevato un errore leggendo da questo buffer dopo il completamento dell'agente.  
  
 [!code-cpp[concrt-eh-agents#1](../../parallel/concrt/codesnippet/CPP/exception-handling-in-the-concurrency-runtime_7.cpp)]  
  
 Questo esempio produce l'output che segue.  
  
  **X: 10 Y: 20**  
**X: 20 Y: 30**  
**error occurred in agent: point must not be NULL**  
**the status of the agent is: done** Poiché il blocco `try`\-`catch` è esterno al ciclo `while`, l'agente termina l'elaborazione quando viene rilevato il primo errore.  Se il blocco `try`\-`catch` fosse interno al ciclo `while`, l'agente continuerebbe dopo un errore.  
  
 In questo esempio le eccezioni vengono archiviate in un buffer dei messaggi in modo tale che un altro componente possa monitorare l'agente per verificare la presenza di errori durante l'esecuzione.  In questo esempio viene utilizzato un oggetto [concurrency::single\_assignment](../../parallel/concrt/reference/single-assignment-class.md) per archiviare l'errore.  Nel caso in cui un agente gestisca più eccezioni, la classe `single_assignment` archivia solo il primo messaggio passato.  Per archiviare solo l'ultima eccezione, utilizzare la classe [concurrency::overwrite\_buffer](../../parallel/concrt/reference/overwrite-buffer-class.md).  Per archiviare tutte le eccezioni, utilizzare la classe [concurrency::unbounded\_buffer](../Topic/unbounded_buffer%20Class.md).  Per ulteriori informazioni su questi blocchi dei messaggi, vedere [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md).  
  
 Per ulteriori informazioni sugli agenti asincroni, vedere [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md).  
  
 \[[Top](#top)\]  
  
##  <a name="summary"></a> Riepilogo  
 \[[Top](#top)\]  
  
## Vedere anche  
 [Runtime di concorrenza](../../parallel/concrt/concurrency-runtime.md)   
 [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)   
 [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)   
 [Annullamento](../../parallel/concrt/cancellation-in-the-ppl.md)   
 [Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)   
 [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)