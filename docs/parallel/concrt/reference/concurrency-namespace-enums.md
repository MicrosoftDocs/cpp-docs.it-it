---
title: Enumerazioni dello spazio dei nomi concurrency
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
ms.openlocfilehash: 716c2d03e6d1ff67566bd28e5931996ea2d400af
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78854170"
---
# <a name="concurrency-namespace-enums"></a>Enumerazioni dello spazio dei nomi concurrency

||||
|-|-|-|
|[Agents_EventType](#agents_eventtype)|[ConcRT_EventType](#concrt_eventtype)|[Concrt_TraceFlags](#concrt_traceflags)|
|[CriticalRegionType](#criticalregiontype)|[DynamicProgressFeedbackType](#dynamicprogressfeedbacktype)|[PolicyElementKey](#policyelementkey)|
|[SchedulerType](#schedulertype)|[SchedulingProtocolType](#schedulingprotocoltype)|[SwitchingProxyState](#switchingproxystate)|
|[WinRTInitializationType](#winrtinitializationtype)|[agent_status](#agent_status)|[join_type](#join_type)|
|[message_status](#message_status)|[task_group_status](#task_group_status)|

## <a name="agent_status"></a>Enumerazione agent_status

Stati validi per un `agent`.

```cpp
enum agent_status;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`agent_canceled`|Il parametro `agent` è stato annullato.|
|`agent_created`|Il `agent` è stato creato ma non è stato avviato.|
|`agent_done`|Il `agent` terminato senza essere annullato.|
|`agent_runnable`|Il `agent` è stato avviato, ma non è stato immesso il relativo metodo `run`.|
|`agent_started`|Il `agent` è stato avviato.|

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [Asynchronous Agents](../../../parallel/concrt/asynchronous-agents.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

## <a name="agents_eventtype"></a>Enumerazione Agents_EventType

Tipi di eventi che possono essere tracciati mediante la funzionalità di tracciatura offerta dalla libreria di agenti.

```cpp
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

## <a name="concrt_eventtype"></a>Enumerazione ConcRT_EventType

Tipi di eventi che possono essere tracciati mediante la funzionalità di tracciatura offerta dal runtime di concorrenza.

```cpp
enum ConcRT_EventType;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`CONCRT_EVENT_ATTACH`|Tipo di evento che rappresenta l'atto di una connessione a un'utilità di pianificazione.|
|`CONCRT_EVENT_BLOCK`|Tipo di evento che rappresenta l'atto di un blocco del contesto.|
|`CONCRT_EVENT_DETACH`|Tipo di evento che rappresenta l'atto di un scollegamento da un'utilità di pianificazione.|
|`CONCRT_EVENT_END`|Tipo di evento che contrassegna l'inizio di una coppia di eventi di inizio/fine.|
|`CONCRT_EVENT_GENERIC`|Tipo di evento usato per eventi vari.|
|`CONCRT_EVENT_IDLE`|Tipo di evento che rappresenta l'atto di un contesto che diventa inattivo.|
|`CONCRT_EVENT_START`|Tipo di evento che contrassegna l'inizio di una coppia di eventi di inizio/fine.|
|`CONCRT_EVENT_UNBLOCK`|Tipo di evento che rappresenta l'operazione di sblocco di un contesto.|
|`CONCRT_EVENT_YIELD`|Tipo di evento che rappresenta l'azione di un contesto che cede.|

### <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h **spazio dei nomi:** concorrenza

## <a name="concrt_traceflags"></a>Enumerazione Concrt_TraceFlags

Flag di analisi per i tipi di evento

```cpp
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

## <a name="criticalregiontype"></a>Enumerazione CriticalRegionType

Tipo di area critica in cui si trova un contesto.

```cpp
enum CriticalRegionType;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`InsideCriticalRegion`|Indica che il contesto si trova all'interno di un'area critica. Quando si trova all'interno di un'area critica, le sospensioni asincrone sono nascoste dall'utilità di pianificazione. Se si verifica questa sospensione, il Gestione risorse attenderà che il thread diventi eseguibile ed è sufficiente riprenderlo anziché richiamare l'utilità di pianificazione. Tutti i blocchi acquisiti all'interno di tale area devono essere presi con estrema cautela.|
|`InsideHyperCriticalRegion`|Indica che il contesto si trova all'interno di un'area ipercritica. All'interno di un'area ipercritica, le sospensioni sincrone e asincrone sono nascoste dall'utilità di pianificazione. Se si verifica una sospensione o un blocco, il gestore di risorse attenderà che il thread diventi eseguibile ed è sufficiente riprenderlo anziché richiamare l'utilità di pianificazione. I blocchi eseguiti all'interno di tale area non devono mai essere condivisi con il codice in esecuzione all'esterno di tale area. Questa operazione provocherà un deadlock imprevedibile.|
|`OutsideCriticalRegion`|Indica che il contesto è esterno a qualsiasi area critica.|

### <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

## <a name="dynamicprogressfeedbacktype"></a>Enumerazione DynamicProgressFeedbackType

Usato dai criteri `DynamicProgressFeedback` per descrivere se le risorse per l'utilità di pianificazione saranno ribilanciate sulla base di informazioni statistiche raccolte dall'utilità di pianificazione o solo sulla base di processori virtuali che passano allo stato inattivo e viceversa tramite chiamate ai metodi `Activate` e `Deactivate` sull'interfaccia `IVirtualProcessorRoot`. Per ulteriori informazioni sui criteri dell'utilità di pianificazione disponibili, vedere [PolicyElementKey](concurrency-namespace-enums.md).

```cpp
enum DynamicProgressFeedbackType;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`ProgressFeedbackDisabled`|L'utilità di pianificazione non raccoglie informazioni sullo stato di avanzamento. Il ribilanciamento viene eseguito esclusivamente in base al livello di sottoscrizione del thread hardware sottostante. Per ulteriori informazioni sui livelli di sottoscrizione, vedere [IExecutionResource:: CurrentSubscriptionLevel](IExecutionResource-structure.md).<br /><br /> Questo valore è riservato per l'utilizzo da parte del runtime.|
|`ProgressFeedbackEnabled`|L'utilità di pianificazione raccoglie informazioni sullo stato di avanzamento e le passa a Resource Manager. Resource Manager utilizzerà queste informazioni statistiche per ribilanciare le risorse per conto dell'utilità di pianificazione, oltre al livello di sottoscrizione del thread hardware sottostante. Per ulteriori informazioni sui livelli di sottoscrizione, vedere [IExecutionResource:: CurrentSubscriptionLevel](IExecutionResource-structure.md).|

## <a name="join_type"></a>Enumerazione join_type

Tipo di un blocco della messaggistica `join`.

```cpp
enum join_type;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`greedy`|I blocchi di messaggistica greedy `join` accettano immediatamente un messaggio dopo la propagazione. Questa operazione è più efficiente, ma ha la possibilità di blocco Live, a seconda della configurazione di rete.|
|`non_greedy`|I blocchi di messaggistica `join` non greedy rimandano i messaggi e li provano a usarli dopo l'arrivo di tutti. Il lavoro è garantito, ma più lento.|

### <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

## <a name="message_status"></a>Enumerazione message_status

Risposte valide per un'offerta di un oggetto `message` a un blocco.

```cpp
enum message_status;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`accepted`|Il messaggio è stato accettato dalla destinazione.|
|`declined`|Il messaggio non è stato accettato dalla destinazione.|
|`missed`|La destinazione ha tentato di accettare il messaggio, ma non è più disponibile.|
|`postponed`|La destinazione ha posticipato il messaggio.|

### <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

## <a name="policyelementkey"></a>Enumerazione PolicyElementKey

Chiavi dei criteri che descrivono aspetti del comportamento dell'utilità di pianificazione. Ciascun elemento dei criteri è descritto da una coppia chiave-valore. Per ulteriori informazioni sui criteri dell'utilità di pianificazione e il relativo effetto sulle utilità di pianificazione, vedere [utilità di pianificazione](../../../parallel/concrt/task-scheduler-concurrency-runtime.md).

```cpp
enum PolicyElementKey;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`ContextPriority`|Priorità del thread del sistema operativo di ogni contesto nell'utilità di pianificazione. Se questa chiave è impostata sul valore `INHERIT_THREAD_PRIORITY` i contesti nell'utilità di pianificazione erediteranno la priorità del thread che ha creato l'utilità di pianificazione.<br /><br /> Valori validi: uno dei valori validi per la funzione `SetThreadPriority` di Windows e il valore speciale `INHERIT_THREAD_PRIORITY`<br /><br /> Valore predefinito: `THREAD_PRIORITY_NORMAL`|
|`ContextStackSize`|Dimensione dello stack riservata di ogni contesto nell'utilità di pianificazione, espressa in kilobyte.<br /><br /> Valori validi: numeri interi positivi<br /><br /> Valore predefinito: `0`, che indica che verrà utilizzato il valore predefinito del processo per le dimensioni dello stack.|
|`DynamicProgressFeedback`|Determina se le risorse per l'utilità di pianificazione verranno ribilanciate in base alle informazioni statistiche raccolte dall'utilità di pianificazione o solo a seconda del livello di sottoscrizione dei thread hardware sottostanti. Per ulteriori informazioni, vedere [DynamicProgressFeedbackType](#dynamicprogressfeedbacktype).<br /><br /> Valori validi: un membro dell'enumerazione `DynamicProgressFeedbackType`, `ProgressFeedbackEnabled` o `ProgressFeedbackDisabled`<br /><br /> Valore predefinito: `ProgressFeedbackEnabled`|
|`LocalContextCacheSize`|Quando la chiave dei criteri `SchedulingProtocol` è impostata sul valore `EnhanceScheduleGroupLocality`, specifica il numero massimo di contesti eseguibili che possono essere memorizzati nella cache per le code locali del processore virtuale. Questi contesti vengono in genere eseguiti nell'ordine LIFO (Last-in-First-out) nel processore virtuale che li ha comportati come eseguibili. Si noti che questa chiave dei criteri non ha significato quando la chiave di `SchedulingProtocol` è impostata sul valore `EnhanceForwardProgress`.<br /><br /> Valori validi: numeri interi non negativi<br /><br /> Valore predefinito: `8`|
|`MaxConcurrency`|Livello di concorrenza massimo desiderato dall'utilità di pianificazione. Resource Manager tenterà di allocare inizialmente questo numero di processori virtuali. Il valore speciale [MaxExecutionResources](concurrency-namespace-constants1.md#maxexecutionresources) indica che il livello di concorrenza desiderato è uguale al numero di thread hardware nel computer. Se il valore specificato per `MinConcurrency` è maggiore del numero di thread hardware nel computer e `MaxConcurrency` viene specificato come `MaxExecutionResources`, viene generato il valore per `MaxConcurrency` in modo che corrisponda a quello impostato per `MinConcurrency`.<br /><br /> Valori validi: numeri interi positivi e valore speciale `MaxExecutionResources`<br /><br /> Valore predefinito: `MaxExecutionResources`|
|`MaxPolicyElementKey`|Chiave dell'elemento dei criteri massimo. Chiave dell'elemento non valida.|
|`MinConcurrency`|Il livello di concorrenza minimo che deve essere fornito all'utilità di pianificazione da Resource Manager. Il numero di processori virtuali assegnati a un'utilità di pianificazione non andrà mai al di sotto del valore minimo. Il valore speciale [MaxExecutionResources](concurrency-namespace-constants1.md#maxexecutionresources) indica che il livello di concorrenza minimo è uguale al numero di thread hardware nel computer. Se il valore specificato per `MaxConcurrency` è inferiore al numero di thread hardware nel computer e `MinConcurrency` viene specificato come `MaxExecutionResources`, il valore per `MinConcurrency` viene ridotto in modo che corrisponda a quello impostato per `MaxConcurrency`.<br /><br /> Valori validi: numeri interi non negativi e il valore speciale `MaxExecutionResources`. Si noti che per i criteri dell'utilità di pianificazione utilizzati per la costruzione delle utilità di pianificazione del runtime di concorrenza, il valore `0` non è valido.<br /><br /> Valore predefinito: `1`|
|`SchedulerKind`|Tipo di thread che l'utilità di pianificazione utilizzerà per i contesti di esecuzione sottostanti. Per ulteriori informazioni, vedere [SchedulerType](#schedulertype).<br /><br /> Valori validi: un membro dell'enumerazione `SchedulerType`, ad esempio `ThreadScheduler`<br /><br /> Valore predefinito: `ThreadScheduler`. Questo si traduce in thread Win32 in tutti i sistemi operativi.|
|`SchedulingProtocol`|Viene descritto l'algoritmo di pianificazione che verrà utilizzato dall'utilità di pianificazione. Per ulteriori informazioni, vedere [SchedulingProtocolType](#schedulingprotocoltype).<br /><br /> Valori validi: un membro dell'enumerazione `SchedulingProtocolType`, `EnhanceScheduleGroupLocality` o `EnhanceForwardProgress`<br /><br /> Valore predefinito: `EnhanceScheduleGroupLocality`|
|`TargetOversubscriptionFactor`|Numero provvisorio di processori virtuali per thread hardware. Se necessario, il fattore dell'oversubscription di destinazione può essere incrementato da Gestione risorse per soddisfare `MaxConcurrency` con i thread hardware sul computer.<br /><br /> Valori validi: numeri interi positivi<br /><br /> Valore predefinito: `1`|
|`WinRTInitialization`||

### <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

## <a name="schedulertype"></a>Enumerazione SchedulerType

Usato dai criteri `SchedulerKind` per descrivere il tipo di thread che l'utilità di pianificazione deve usare per i contesti di esecuzione sottostanti. Per ulteriori informazioni sui criteri dell'utilità di pianificazione disponibili, vedere [PolicyElementKey](concurrency-namespace-enums.md).

```cpp
enum SchedulerType;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`ThreadScheduler`|Indica una richiesta esplicita di thread Win32 normali.|
|`UmsThreadDefault`|I thread pianificabili in modalità utente (UMS) non sono supportati nella runtime di concorrenza Visual Studio 2013. Utilizzando `UmsThreadDefault` come valore per i criteri `SchedulerType` non verrà generato un errore. Tuttavia, un'utilità di pianificazione creata con questi criteri viene impostata per l'utilizzo di thread Win32.|

### <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

## <a name="schedulingprotocoltype"></a>Enumerazione SchedulingProtocolType

Usato dai criteri `SchedulingProtocol` per descrivere quale algoritmo di pianificazione sarà usato per l'utilità di pianificazione. Per ulteriori informazioni sui criteri dell'utilità di pianificazione disponibili, vedere [PolicyElementKey](concurrency-namespace-enums.md).

```cpp
enum SchedulingProtocolType;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`EnhanceForwardProgress`|L'utilità di pianificazione preferisce l'esecuzione Round Robin tramite i gruppi di pianificazione dopo l'esecuzione di ogni attività. I contesti sbloccati sono in genere pianificati in modalità FIFO (First-in-First-out). I processori virtuali non memorizzano nella cache i contesti sbloccati.|
|`EnhanceScheduleGroupLocality`|L'utilità di pianificazione preferisce continuare a lavorare sulle attività all'interno del gruppo di pianificazione corrente prima di passare a un altro gruppo di pianificazione. I contesti sbloccati vengono memorizzati nella cache per ogni processore virtuale e sono in genere pianificati in modo LIFO (Last in First out) dal processore virtuale che li ha sbloccati.|

### <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

## <a name="switchingproxystate"></a>Enumerazione SwitchingProxyState

Usato per indicare lo stato in cui si trova un proxy del thread, quando è in esecuzione uno scambio di contesto cooperativo per un proxy del thread diverso.

```cpp
enum SwitchingProxyState;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`Blocking`|Indica che il thread chiamante è bloccato in modo cooperativo e deve essere esclusivamente di proprietà del chiamante fino a quando non viene eseguito nuovamente ed esegue altre azioni.|
|`Idle`|Indica che il thread chiamante non è più necessario per l'utilità di pianificazione e viene restituito al Gestione risorse. Il contesto che è stato inviato non può più essere utilizzato dal Gestione risorse.|
|`Nesting`|Indica che il thread chiamante sta annidando un'utilità di pianificazione figlio ed è richiesta dal chiamante per connettersi a un'utilità di pianificazione diversa.|

### <a name="remarks"></a>Osservazioni

Un parametro di tipo `SwitchingProxyState` viene passato al metodo `IThreadProxy::SwitchTo` per indicare al Gestione risorse come trattare il proxy del thread che effettua la chiamata.

Per ulteriori informazioni sull'utilizzo di questo tipo, vedere [IThreadProxy:: SwitchTo](ithreadproxy-structure.md#switchto).

## <a name="task_group_status"></a>Enumerazione task_group_status

Descrive lo stato di esecuzione di un oggetto `task_group` o `structured_task_group`. Un valore di questo tipo viene restituito da numerosi metodi che attendono attività pianificate a un gruppo di attività da completare.

```cpp
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

## <a name="winrtinitializationtype"></a>Enumerazione WinRTInitializationType

Utilizzata dai criteri `WinRTInitialization` per descrivere se e come Windows Runtime verrà inizializzato nei thread dell'utilità di pianificazione per un'applicazione eseguita nei sistemi operativi con la versione Windows 8 o superiore. Per ulteriori informazioni sui criteri dell'utilità di pianificazione disponibili, vedere [PolicyElementKey](concurrency-namespace-enums.md).

```cpp
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
