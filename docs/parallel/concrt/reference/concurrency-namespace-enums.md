---
title: enumerazioni dello spazio dei nomi Concurrency
ms.date: 11/04/2016
f1_keywords:
- CONCRT/concurrency::Agents_EventType
- CONCRT/concurrency::Concrt_TraceFlags
- CONCRT/concurrency::CriticalRegionType
- CONCRT/concurrency::PolicyElementKey
- CONCRT/concurrency::SchedulerType
- CONCRT/concurrency::SwitchingProxyState
- CONCRT/concurrency::WinRTInitializationType
- CONCRT/concurrency::join_type
- CONCRT/concurrency::message_status Enumeration
ms.assetid: a40e3b2d-ad21-4229-9880-2cfa84f7ab8f
ms.openlocfilehash: d3eb49cd1555f23cc83efb0d8d912998295b3c55
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62337609"
---
# <a name="concurrency-namespace-enums"></a>enumerazioni dello spazio dei nomi Concurrency

||||
|-|-|-|
|[Agents_EventType](#agents_eventtype)|[ConcRT_EventType](#concrt_eventtype)|[Concrt_TraceFlags](#concrt_traceflags)|
|[CriticalRegionType](#criticalregiontype)|[DynamicProgressFeedbackType](#dynamicprogressfeedbacktype)|[PolicyElementKey](#policyelementkey)|
|[SchedulerType](#schedulertype)|[SchedulingProtocolType](#schedulingprotocoltype)|[SwitchingProxyState](#switchingproxystate)|
|[WinRTInitializationType](#winrtinitializationtype)|[agent_status](#agent_status)|[join_type](#join_type)|
|[message_status](#message_status)|[task_group_status](#task_group_status)|

##  <a name="agent_status"></a>  Enumerazione agent_status

Stati validi per un `agent`.

```
enum agent_status;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`agent_canceled`|Il parametro `agent` è stato annullato.|
|`agent_created`|Il `agent` è stata creata ma non è stato avviato.|
|`agent_done`|Il `agent` completato senza essere annullato.|
|`agent_runnable`|Il `agent` è stata avviata, ma non immesso relativo `run` (metodo).|
|`agent_started`|Il `agent` è stata avviata.|

### <a name="remarks"></a>Note

Per altre informazioni, vedere [agenti asincroni](../../../parallel/concrt/asynchronous-agents.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

##  <a name="agents_eventtype"></a>  Enumerazione Agents_EventType

Tipi di eventi che possono essere tracciati mediante la funzionalità di tracciatura offerta dalla libreria di agenti.

```
enum Agents_EventType;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`AGENTS_EVENT_CREATE`|Tipo di evento che rappresenta la creazione di un oggetto|
|`AGENTS_EVENT_DESTROY`|Tipo di evento che rappresenta l'eliminazione di un oggetto|
|`AGENTS_EVENT_END`|Tipo di evento che rappresenta la fine di un'elaborazione|
|`AGENTS_EVENT_LINK`|Tipo di evento che rappresenta il collegamento di blocchi di messaggi|
|`AGENTS_EVENT_NAME`|Tipo di evento che rappresenta il nome di un oggetto|
|`AGENTS_EVENT_SCHEDULE`|Tipo di evento che rappresenta la pianificazione di un processo|
|`AGENTS_EVENT_START`|Tipo di evento che rappresenta l'inizio di un'elaborazione|
|`AGENTS_EVENT_UNLINK`|Tipo di evento che rappresenta lo scollegamento di blocchi di messaggi|

### <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

##  <a name="concrt_eventtype"></a>  Enumerazione ConcRT_EventType

Tipi di eventi che possono essere tracciati mediante la funzionalità di tracciatura offerta dal runtime di concorrenza.

```
enum ConcRT_EventType;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`CONCRT_EVENT_ATTACH`|Tipo di evento che rappresenta l'azione di un collegamento a un'utilità di pianificazione.|
|`CONCRT_EVENT_BLOCK`|Tipo di evento che rappresenta l'azione di un blocco di contesto.|
|`CONCRT_EVENT_DETACH`|Tipo di evento che rappresenta l'azione di una disconnessione da un'utilità di pianificazione.|
|`CONCRT_EVENT_END`|Tipo di evento che contrassegna l'inizio di una coppia di eventi di inizio/fine.|
|`CONCRT_EVENT_GENERIC`|Un tipo di evento utilizzato per i vari eventi.|
|`CONCRT_EVENT_IDLE`|Tipo di evento che rappresenta l'azione di un contesto di diventare inattive.|
|`CONCRT_EVENT_START`|Tipo di evento che contrassegna l'inizio di una coppia di eventi di inizio/fine.|
|`CONCRT_EVENT_UNBLOCK`|Tipo di evento che rappresenta l'operazione di sblocco di un contesto.|
|`CONCRT_EVENT_YIELD`|Tipo di evento che rappresenta l'azione di un contesto cede il controllo.|

### <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h **Namespace:** concorrenza

##  <a name="concrt_traceflags"></a>  Concrt_TraceFlags Enumeration

Flag di analisi per i tipi di evento

```
enum Concrt_TraceFlags;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`AgentEventFlag`||
|`AllEventsFlag`||
|`ContextEventFlag`||
|`PPLEventFlag`||
|`ResourceManagerEventFlag`||
|`SchedulerEventFlag`||
|`VirtualProcessorEventFlag`||

### <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

##  <a name="criticalregiontype"></a>  Enumerazione CriticalRegionType

Tipo di area critica in cui si trova un contesto.

```
enum CriticalRegionType;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`InsideCriticalRegion`|Indica che il contesto è all'interno di un'area critica. All'interno di un'area critica, le sospensioni asincrone sono nascosti dall'utilità di pianificazione. Questo tipo una sospensione avverrebbe, il gestore di risorse attenderà il thread diventi eseguibile e riprenderlo anziché richiamare di nuovo l'utilità di pianificazione. Eventuali blocchi acquisiti in tale area devono essere presi con estrema cautela.|
|`InsideHyperCriticalRegion`|Indica che il contesto è all'interno di un'area di hyper-critical. All'interno di un'area di hyper-critical, sospensioni sincrone e asincrone sono nascosti dall'utilità di pianificazione. Devi tale sospensione o di blocco si verificano, il gestore di risorse attenderà il thread diventi eseguibile e riprenderlo anziché richiamare di nuovo l'utilità di pianificazione. Blocchi acquisiti in tale area non devono mai essere condivisa con il codice in esecuzione all'esterno di tale regione. In questo modo verrà deadlock imprevisti.|
|`OutsideCriticalRegion`|Indica che il contesto è di fuori di qualsiasi area critica.|

### <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

##  <a name="dynamicprogressfeedbacktype"></a>  DynamicProgressFeedbackType Enumeration

Usato dai criteri `DynamicProgressFeedback` per descrivere se le risorse per l'utilità di pianificazione saranno ribilanciate sulla base di informazioni statistiche raccolte dall'utilità di pianificazione o solo sulla base di processori virtuali che passano allo stato inattivo e viceversa tramite chiamate ai metodi `Activate` e `Deactivate` sull'interfaccia `IVirtualProcessorRoot`. Per altre informazioni sui criteri dell'utilità di pianificazione disponibili, vedere [PolicyElementKey](concurrency-namespace-enums.md).

```
enum DynamicProgressFeedbackType;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`ProgressFeedbackDisabled`|L'utilità di pianificazione non raccogliere le informazioni sullo stato. Il ribilanciamento è eseguito in base esclusivamente a livello di sottoscrizione per il thread di hardware sottostante. Per altre informazioni sui livelli di sottoscrizione, vedere [IExecutionResource:: CurrentSubscriptionLevel](IExecutionResource-structure.md).<br /><br /> Questo valore è riservato per l'utilizzo dal runtime.|
|`ProgressFeedbackEnabled`|L'utilità di pianificazione consente di raccogliere le informazioni sullo stato e lo passa al gestore di risorse. Il gestore di risorse utilizzerà tali informazioni per ribilanciare le risorse per conto dell'utilità di pianificazione oltre al livello di sottoscrizione del thread di hardware sottostante. Per altre informazioni sui livelli di sottoscrizione, vedere [IExecutionResource:: CurrentSubscriptionLevel](IExecutionResource-structure.md).|

##  <a name="join_type"></a>  Enumerazione join_type

Tipo di un blocco della messaggistica `join`.

```
enum join_type;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`greedy`|Greedy `join` blocchi della messaggistica accettano immediatamente un messaggio durante la propagazione. Questo è più efficiente, ma ha la possibilità per live blocco, a seconda della configurazione di rete.|
|`non_greedy`|Non-greedy `join` blocchi della messaggistica posticipare i messaggi e provare a e il loro uso dopo che tutti sono finalmente disponibili. Queste che potrebbero funzionare, ma sono più lenti.|

### <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

##  <a name="message_status"></a>  Enumerazione message_status

Risposte valide per un'offerta di un oggetto `message` a un blocco.

```
enum message_status;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`accepted`|La destinazione ha accettato il messaggio.|
|`declined`|La destinazione non ha accettato il messaggio.|
|`missed`|La destinazione ha provato ad accettare il messaggio, ma non era più disponibile.|
|`postponed`|La destinazione ha posticipato il messaggio.|

### <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

##  <a name="policyelementkey"></a>  Enumerazione PolicyElementKey

Chiavi dei criteri che descrivono aspetti del comportamento dell'utilità di pianificazione. Ciascun elemento dei criteri è descritto da una coppia chiave-valore. Per altre informazioni sui criteri dell'utilità di pianificazione e il relativo impatto sulle utilità di pianificazione, vedere [utilità di pianificazione](../../../parallel/concrt/task-scheduler-concurrency-runtime.md).

```
enum PolicyElementKey;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`ContextPriority`|La priorità del thread del sistema operativo di ogni contesto nell'utilità di pianificazione. Se questa chiave viene impostata sul valore `INHERIT_THREAD_PRIORITY` i contesti nell'utilità di pianificazione ereditano la priorità del thread che ha creato l'utilità di pianificazione.<br /><br /> Valori validi: Uno dei valori validi per il Windows `SetThreadPriority` (funzione) e il valore speciale `INHERIT_THREAD_PRIORITY`<br /><br /> Valore predefinito: `THREAD_PRIORITY_NORMAL`|
|`ContextStackSize`|Dimensione stack riservata di ogni contesto nell'utilità di pianificazione nel kilobyte.<br /><br /> Valori validi: Numeri interi positivi<br /><br /> Il valore predefinito: `0`, che indica che il valore predefinito del processo per la dimensione dello stack utilizzabile.|
|`DynamicProgressFeedback`|Determina se le risorse per l'utilità di pianificazione saranno ribilanciate sulla base di informazioni statistiche raccolte dall'utilità di pianificazione o basati solo sul livello di sottoscrizione di thread hardware sottostante. Per altre informazioni, vedere [DynamicProgressFeedbackType](#dynamicprogressfeedbacktype).<br /><br /> Valori validi: Un membro del `DynamicProgressFeedbackType` enumerazione, ad esempio `ProgressFeedbackEnabled` o `ProgressFeedbackDisabled`<br /><br /> Valore predefinito: `ProgressFeedbackEnabled`|
|`LocalContextCacheSize`|Quando la `SchedulingProtocol` chiave dei criteri è impostata sul valore `EnhanceScheduleGroupLocality`, specifica il numero massimo di contesti eseguibili consentito deve essere memorizzato nella cache per le code locali processore virtuale. Contesti simili vengono in genere eseguiti nell'ordine di last-in-first-out (LIFO) nel processore virtuale che li hanno causati diventi eseguibile. Si noti che questa chiave dei criteri non ha significato quando le `SchedulingProtocol` chiave è impostata sul valore `EnhanceForwardProgress`.<br /><br /> Valori validi: Numeri interi non negativi<br /><br /> Valore predefinito: `8`|
|`MaxConcurrency`|La concorrenza massima livello desiderata dall'utilità di pianificazione. Resource manager tenterà di allocare inizialmente a questo numero di processori virtuali. Il valore speciale [MaxExecutionResources](concurrency-namespace-constants1.md#maxexecutionresources) indica che il livello di concorrenza desiderato è uguale al numero di thread hardware sul computer. Se il valore specificato per `MinConcurrency` è maggiore del numero di thread hardware sul computer e `MaxConcurrency` è specificato come `MaxExecutionResources`, il valore per `MaxConcurrency` viene generato in modo che corrisponda a ciò che è impostato per `MinConcurrency`.<br /><br /> Valori validi: Numeri interi positivi e il valore speciale `MaxExecutionResources`<br /><br /> Valore predefinito: `MaxExecutionResources`|
|`MaxPolicyElementKey`|La chiave dell'elemento massimo dei criteri. Non è una chiave di elemento valido.|
|`MinConcurrency`|Il livello di concorrenza minimo che deve essere fornito all'utilità di pianificazione da Gestione risorse. Il numero di processori virtuali assegnati a un'utilità di pianificazione si rivolgerà mai di sotto il valore minimo. Il valore speciale [MaxExecutionResources](concurrency-namespace-constants1.md#maxexecutionresources) indica che il livello di concorrenza minimo è uguale al numero di thread hardware sul computer. Se il valore specificato per `MaxConcurrency` è minore rispetto al numero di thread hardware sul computer e `MinConcurrency` è specificato come `MaxExecutionResources`, il valore per `MinConcurrency` si riducono in modo che corrisponda a ciò che è impostato per `MaxConcurrency`.<br /><br /> Valori validi: Numeri interi non negativi e il valore speciale `MaxExecutionResources`. Si noti che per i criteri dell'utilità di pianificazione utilizzati per la costruzione delle utilità di pianificazione del runtime di concorrenza, il valore `0` non è valido.<br /><br /> Valore predefinito: `1`|
|`SchedulerKind`|Il tipo di thread che verrà utilizzata l'utilità di pianificazione per i contesti di esecuzione sottostanti. Per altre informazioni, vedere [SchedulerType](#schedulertype).<br /><br /> Valori validi: Un membro del `SchedulerType` enumerazione, ad esempio, `ThreadScheduler`<br /><br /> Il valore predefinito: `ThreadScheduler`. Questo si traduce in thread Win32 in tutti i sistemi operativi.|
|`SchedulingProtocol`|Descrive quale algoritmo di pianificazione verrà utilizzato dall'utilità di pianificazione. Per altre informazioni, vedere [SchedulingProtocolType](#schedulingprotocoltype).<br /><br /> Valori validi: Un membro del `SchedulingProtocolType` enumerazione, ad esempio `EnhanceScheduleGroupLocality` o `EnhanceForwardProgress`<br /><br /> Valore predefinito: `EnhanceScheduleGroupLocality`|
|`TargetOversubscriptionFactor`|Tentativo del numero di processori virtuali per ogni thread hardware. Se necessario, il fattore dell'oversubscription di destinazione può essere incrementato da Gestione risorse per soddisfare `MaxConcurrency` con i thread hardware sul computer.<br /><br /> Valori validi: Numeri interi positivi<br /><br /> Valore predefinito: `1`|
|`WinRTInitialization`||

### <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

##  <a name="schedulertype"></a>  Enumerazione SchedulerType

Usato dai criteri `SchedulerKind` per descrivere il tipo di thread che l'utilità di pianificazione deve usare per i contesti di esecuzione sottostanti. Per altre informazioni sui criteri dell'utilità di pianificazione disponibili, vedere [PolicyElementKey](concurrency-namespace-enums.md).

```
enum SchedulerType;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`ThreadScheduler`|Indica una richiesta esplicita di thread Win32 normale.|
|`UmsThreadDefault`|Thread UMS pianificabili in modalità utente non sono supportati nel Runtime di concorrenza in Visual Studio 2013. Utilizzando `UmsThreadDefault` come valore per i criteri `SchedulerType` non verrà generato un errore. Tuttavia, un'utilità di pianificazione creata con questi criteri viene impostata per l'utilizzo di thread Win32.|

### <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

##  <a name="schedulingprotocoltype"></a>  Enumerazione SchedulingProtocolType

Usato dai criteri `SchedulingProtocol` per descrivere quale algoritmo di pianificazione sarà usato per l'utilità di pianificazione. Per altre informazioni sui criteri dell'utilità di pianificazione disponibili, vedere [PolicyElementKey](concurrency-namespace-enums.md).

```
enum SchedulingProtocolType;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`EnhanceForwardProgress`|L'utilità di pianificazione preferite per l'algoritmo round-robin tramite i gruppi di pianificazione dopo l'esecuzione di ogni attività. Contesti sbloccati in genere vengono pianificati in modo first-in-first-out (FIFO). Processori virtuali non memorizza nella cache di contesti sbloccati.|
|`EnhanceScheduleGroupLocality`|L'utilità di pianificazione si preferisce continuare svolgere attività all'interno del gruppo di pianificazione corrente prima di passare a un altro gruppo di pianificazione. I contesti sbloccati vengono memorizzati nella cache per ogni processore virtuale e in genere sono pianificati in modo last-in-first-out (LIFO) da parte del processore virtuale che li ha sbloccati.|

### <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

##  <a name="switchingproxystate"></a>  Enumerazione SwitchingProxyState

Usato per indicare lo stato in cui si trova un proxy del thread, quando è in esecuzione uno scambio di contesto cooperativo per un proxy del thread diverso.

```
enum SwitchingProxyState;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`Blocking`|Indica che il thread chiamante sta bloccando in modo cooperativo e dovrebbe essere esclusivamente proprietà del chiamante fino al successivamente eseguire di nuovo e l'esecuzione di un'altra azione.|
|`Idle`|Indica che il thread chiamante non è più necessario dall'utilità di pianificazione e vengono restituito a Resource Manager. Il contesto è stato inviato non è più in grado di essere utilizzata da Resource Manager.|
|`Nesting`|Indica che il thread chiamante è un'utilità di pianificazione figlio di annidamento e serve il chiamante, per consentire il collegamento a un'utilità di pianificazione diverso.|

### <a name="remarks"></a>Note

Un parametro di tipo `SwitchingProxyState` viene passato al metodo `IThreadProxy::SwitchTo` per indicare come trattare il proxy thread che effettua la chiamata a Resource Manager.

Per altre informazioni sull'utilizzo di questo tipo, vedere [IThreadProxy:: SwitchTo](ithreadproxy-structure.md#switchto).

##  <a name="task_group_status"></a>  Enumerazione task_group_status

Descrive lo stato di esecuzione di un oggetto `task_group` o `structured_task_group`. Un valore di questo tipo viene restituito da numerosi metodi che attendono attività pianificate a un gruppo di attività da completare.

```
enum task_group_status;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`canceled`|L'oggetto `task_group` o `structured_task_group` è stato annullato. È possibile che una o più attività non siano state eseguite.|
|`completed`|Le attività in coda all'oggetto `task_group` o `structured_task_group` sono state completate.|
|`not_complete`|Le attività in coda all'oggetto `task_group` non sono state completate. Notare che questo valore non è al momento restituito dal runtime di concorrenza.|

### <a name="requirements"></a>Requisiti

**Intestazione:** pplinterface. h

##  <a name="winrtinitializationtype"></a>  Enumerazione WinRTInitializationType

Utilizzata dai criteri `WinRTInitialization` per descrivere se e come Windows Runtime verrà inizializzato nei thread dell'utilità di pianificazione per un'applicazione eseguita nei sistemi operativi con la versione Windows 8 o superiore. Per altre informazioni sui criteri dell'utilità di pianificazione disponibili, vedere [PolicyElementKey](concurrency-namespace-enums.md).

```
enum WinRTInitializationType;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`DoNotInitializeWinRT`|Quando l'applicazione viene eseguita nei sistemi operativi con la versione Windows 8 o successiva, tramite i thread all'interno dell'utilità di pianificazione non verrà inizializzato Windows Runtime.|
|`InitializeWinRTAsMTA`|Quando l'applicazione viene eseguita nei sistemi operativi con la versione Windows 8 o successiva, tramite ogni thread all'interno dell'utilità di pianificazione verrà inizializzato Windows Runtime e verrà dichiarato che fa parte dell'apartment a thread multipli.|

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
