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
ms.openlocfilehash: e3a943ed52ce9653086203713bb98331f809314d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372715"
---
# <a name="concurrency-namespace-enums"></a>Enumerazioni dello spazio dei nomi concurrency

||||
|-|-|-|
|[Agents_EventType](#agents_eventtype)|[ConcRT_EventType](#concrt_eventtype)|[Concrt_TraceFlags](#concrt_traceflags)|
|[CriticalRegionType](#criticalregiontype)|[DynamicProgressFeedbackType (DynamicProgressFeedbackType)](#dynamicprogressfeedbacktype)|[PolicyElementKey](#policyelementkey)|
|[SchedulerType (Tipo utilità di pianificazione)](#schedulertype)|[PianificazioneProtocolloTipo](#schedulingprotocoltype)|[SwitchingProxyState](#switchingproxystate)|
|[Tipo WinRT](#winrtinitializationtype)|[agent_status](#agent_status)|[join_type](#join_type)|
|[message_status](#message_status)|[task_group_status](#task_group_status)|

## <a name="agent_status-enumeration"></a><a name="agent_status"></a>Enumerazione agent_status

Stati validi per un `agent`.

```cpp
enum agent_status;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`agent_canceled`|Il parametro `agent` è stato annullato.|
|`agent_created`|Il `agent` è stato creato ma non avviato.|
|`agent_done`|Il `agent` finito senza essere cancellato.|
|`agent_runnable`|Il `agent` è stato avviato, `run` ma non è entrato nel suo metodo.|
|`agent_started`|Il `agent` è iniziato.|

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [Agenti asincroni](../../../parallel/concrt/asynchronous-agents.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** concrt.h

## <a name="agents_eventtype-enumeration"></a><a name="agents_eventtype"></a>Enumerazione Agents_EventType

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

**Intestazione:** concrt.h

## <a name="concrt_eventtype-enumeration"></a><a name="concrt_eventtype"></a>Enumerazione ConcRT_EventType

Tipi di eventi che possono essere tracciati mediante la funzionalità di tracciatura offerta dal runtime di concorrenza.

```cpp
enum ConcRT_EventType;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`CONCRT_EVENT_ATTACH`|Tipo di evento che rappresenta l'atto di un collegamento a un'utilità di pianificazione.|
|`CONCRT_EVENT_BLOCK`|Tipo di evento che rappresenta l'atto di un blocco del contesto.|
|`CONCRT_EVENT_DETACH`|Tipo di evento che rappresenta l'atto di una disconnessione da un'utilità di pianificazione.|
|`CONCRT_EVENT_END`|Tipo di evento che contrassegna l'inizio di una coppia di eventi iniziale/fine.|
|`CONCRT_EVENT_GENERIC`|Tipo di evento utilizzato per eventi vari.|
|`CONCRT_EVENT_IDLE`|Tipo di evento che rappresenta l'atto di un contesto che diventa inattivo.|
|`CONCRT_EVENT_START`|Tipo di evento che contrassegna l'inizio di una coppia di eventi iniziale/fine.|
|`CONCRT_EVENT_UNBLOCK`|Tipo di evento che rappresenta l'atto di sblocco di un contesto.|
|`CONCRT_EVENT_YIELD`|Tipo di evento che rappresenta l'atto di un contesto che produce.|

### <a name="requirements"></a>Requisiti

**Intestazione:** concrt.h **Spazio dei nomi:** concorrenza

## <a name="concrt_traceflags-enumeration"></a><a name="concrt_traceflags"></a>Enumerazione Concrt_TraceFlags

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

**Intestazione:** concrt.h

## <a name="criticalregiontype-enumeration"></a><a name="criticalregiontype"></a>CriticalRegionType Enumerazione

Tipo di area critica in cui si trova un contesto.

```cpp
enum CriticalRegionType;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`InsideCriticalRegion`|Indica che il contesto si trova all'interno di un'area critica. Quando si trova all'interno di un'area critica, le sospensioni asincrone vengono nascoste dall'utilità di pianificazione. Se si verifica una sospensione di questo tipo, Gestione risorse attenderà che il thread diventi eseguibile e semplicemente lo riprenderà invece di richiamare nuovamente l'utilità di pianificazione. Eventuali serrature prese all'interno di tale regione devono essere prese con estrema cura.|
|`InsideHyperCriticalRegion`|Indica che il contesto si trova all'interno di un'area ipercritica. Quando si è all'interno di un'area ipercritica, le sospensioni sincrone e asincrone vengono nascoste dall'utilità di pianificazione. Se si verifica una sospensione o un blocco di questo tipo, il gestore delle risorse attenderà che il thread diventi eseguibile e semplicemente lo riprenderà invece di richiamare nuovamente l'utilità di pianificazione. I blocchi eseguiti all'interno di un'area di questo tipo non devono mai essere condivisi con codice in esecuzione all'esterno di tale area. In questo modo si verifica un deadlock imprevedibile.|
|`OutsideCriticalRegion`|Indica che il contesto si trova all'esterno di qualsiasi area critica.|

### <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm.h

## <a name="dynamicprogressfeedbacktype-enumeration"></a><a name="dynamicprogressfeedbacktype"></a>DynamicProgressFeedbackType Enumerazione

Usato dai criteri `DynamicProgressFeedback` per descrivere se le risorse per l'utilità di pianificazione saranno ribilanciate sulla base di informazioni statistiche raccolte dall'utilità di pianificazione o solo sulla base di processori virtuali che passano allo stato inattivo e viceversa tramite chiamate ai metodi `Activate` e `Deactivate` sull'interfaccia `IVirtualProcessorRoot`. Per ulteriori informazioni sui criteri dell'utilità di pianificazione disponibili, vedere [PolicyElementKey](concurrency-namespace-enums.md).

```cpp
enum DynamicProgressFeedbackType;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`ProgressFeedbackDisabled`|L'utilità di pianificazione non raccoglie informazioni sullo stato di avanzamento. Il ribilanciamento viene eseguito esclusivamente in base al livello di sottoscrizione del thread di hardware sottostante. Per ulteriori informazioni sui livelli di sottoscrizione, vedere [IExecutionResource::CurrentSubscriptionLevel](IExecutionResource-structure.md).<br /><br /> Questo valore è riservato per l'utilizzo da parte del runtime.|
|`ProgressFeedbackEnabled`|L'utilità di pianificazione raccoglie le informazioni sullo stato e le passa al gestore delle risorse. Il gestore delle risorse utilizzerà queste informazioni statistiche per ribilanciare le risorse per conto dell'utilità di pianificazione oltre al livello di sottoscrizione del thread di hardware sottostante. Per ulteriori informazioni sui livelli di sottoscrizione, vedere [IExecutionResource::CurrentSubscriptionLevel](IExecutionResource-structure.md).|

## <a name="join_type-enumeration"></a><a name="join_type"></a>Enumerazione join_type

Tipo di un blocco della messaggistica `join`.

```cpp
enum join_type;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`greedy`|I `join` blocchi di messaggistica greedy accettano immediatamente un messaggio al momento della propagazione. Questo è più efficiente, ma ha la possibilità di live-lock, a seconda della configurazione di rete.|
|`non_greedy`|I blocchi `join` di messaggistica non greedy rinviano i messaggi e cercano di consumarli dopo tutti sono arrivati. Questi sono garantiti per funzionare, ma più lento.|

### <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

## <a name="message_status-enumeration"></a><a name="message_status"></a>Enumerazione message_status

Risposte valide per un'offerta di un oggetto `message` a un blocco.

```cpp
enum message_status;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`accepted`|La destinazione ha accettato il messaggio.|
|`declined`|La destinazione non ha accettato il messaggio.|
|`missed`|La destinazione ha tentato di accettare il messaggio, ma non era più disponibile.|
|`postponed`|La destinazione ha posticipato il messaggio.|

### <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

## <a name="policyelementkey-enumeration"></a><a name="policyelementkey"></a>Enumerazione PolicyElementKey

Chiavi dei criteri che descrivono aspetti del comportamento dell'utilità di pianificazione. Ciascun elemento dei criteri è descritto da una coppia chiave-valore. Per ulteriori informazioni sui criteri dell'utilità di pianificazione e sul relativo impatto sulle utilità di pianificazione, vedere [Utilità di pianificazione](../../../parallel/concrt/task-scheduler-concurrency-runtime.md).

```cpp
enum PolicyElementKey;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`ContextPriority`|Priorità del thread del sistema operativo di ogni contesto nell'utilità di pianificazione. Se questa chiave è `INHERIT_THREAD_PRIORITY` impostata sul valore, i contesti nell'utilità di pianificazione erediteranno la priorità del thread che ha creato l'utilità di pianificazione.<br /><br /> Valori validi : uno qualsiasi dei `SetThreadPriority` valori validi per la funzione di Windows e il valore speciale`INHERIT_THREAD_PRIORITY`<br /><br /> Valore predefinito :`THREAD_PRIORITY_NORMAL`|
|`ContextStackSize`|Dimensione dello stack riservata di ogni contesto nell'utilità di pianificazione in kilobyte.<br /><br /> Valori validi : Numeri interi positivi<br /><br /> Valore predefinito `0`: , che indica che deve essere utilizzato il valore predefinito del processo per le dimensioni dello stack.|
|`DynamicProgressFeedback`|Determina se le risorse per l'utilità di pianificazione verranno ribilanciate in base alle informazioni statistiche raccolte dall'utilità di pianificazione o solo in base al livello di sottoscrizione dei thread di hardware sottostanti. Per ulteriori informazioni, vedere [DynamicProgressFeedbackType](#dynamicprogressfeedbacktype).<br /><br /> Valori validi : un `DynamicProgressFeedbackType` membro `ProgressFeedbackEnabled` dell'enumerazione, o`ProgressFeedbackDisabled`<br /><br /> Valore predefinito :`ProgressFeedbackEnabled`|
|`LocalContextCacheSize`|Quando `SchedulingProtocol` la chiave dei criteri `EnhanceScheduleGroupLocality`è impostata sul valore , specifica il numero massimo di contesti eseguibili che possono essere memorizzati nella cache per ogni coda locale del processore virtuale. Tali contesti verranno in genere eseguiti nell'ordine LIFO (Last-In-First-Out) sul processore virtuale che ne ha causato l'esecuzione. Si noti che questa chiave `SchedulingProtocol` dei criteri non `EnhanceForwardProgress`ha alcun significato quando la chiave è impostata sul valore .<br /><br /> Valori validi : Numeri interi non negativi<br /><br /> Valore predefinito :`8`|
|`MaxConcurrency`|Livello di concorrenza massimo desiderato dall'utilità di pianificazione. Il gestore delle risorse tenterà di allocare inizialmente questo numero di processori virtuali. Il valore speciale [MaxExecutionResources](concurrency-namespace-constants1.md#maxexecutionresources) indica che il livello di concorrenza desiderato è uguale al numero di thread di hardware nel computer. Se il valore `MinConcurrency` specificato per è maggiore del numero `MaxConcurrency` di `MaxExecutionResources`thread di `MaxConcurrency` hardware nel computer e `MinConcurrency`viene specificato come , il valore di viene generato in modo che corrisponda a quello impostato per .<br /><br /> Valori validi : Numeri interi positivi e il valore speciale`MaxExecutionResources`<br /><br /> Valore predefinito :`MaxExecutionResources`|
|`MaxPolicyElementKey`|Chiave dell'elemento di criteri massimo. Chiave elemento non valida.|
|`MinConcurrency`|Livello di concorrenza minimo che deve essere fornito all'utilità di pianificazione dal gestore delle risorse. Il numero di processori virtuali assegnati a un'utilità di pianificazione non scenderà mai al di sotto del valore minimo. Il valore speciale [MaxExecutionResources](concurrency-namespace-constants1.md#maxexecutionresources) indica che il livello minimo di concorrenza è uguale al numero di thread di hardware nel computer. Se il valore `MaxConcurrency` specificato per è minore del numero `MinConcurrency` di `MaxExecutionResources`thread di `MinConcurrency` hardware nel computer e viene `MaxConcurrency`specificato come , il valore di per viene abbassato in modo da corrispondere a quello impostato per .<br /><br /> Valori validi : Numeri interi non `MaxExecutionResources`negativi e il valore speciale . Si noti che per i criteri dell'utilità di pianificazione utilizzati per la costruzione delle utilità di pianificazione del runtime di concorrenza, il valore `0` non è valido.<br /><br /> Valore predefinito :`1`|
|`SchedulerKind`|Tipo di thread che verranno utilizzati dall'utilità di pianificazione per i contesti di esecuzione sottostanti. Per ulteriori informazioni, vedere [SchedulerType](#schedulertype).<br /><br /> Valori validi: un membro dell'enumerazione `SchedulerType`, ad esempio `ThreadScheduler`<br /><br /> Valore predefinito `ThreadScheduler`: . Questo si traduce in thread Win32 in tutti i sistemi operativi.|
|`SchedulingProtocol`|Descrive quale algoritmo di pianificazione verrà utilizzato dall'utilità di pianificazione. Per ulteriori informazioni, vedere [SchedulingProtocolType](#schedulingprotocoltype).<br /><br /> Valori validi : un `SchedulingProtocolType` membro `EnhanceScheduleGroupLocality` dell'enumerazione, o`EnhanceForwardProgress`<br /><br /> Valore predefinito :`EnhanceScheduleGroupLocality`|
|`TargetOversubscriptionFactor`|Numero provvisorio di processori virtuali per thread di hardware. Se necessario, il fattore dell'oversubscription di destinazione può essere incrementato da Gestione risorse per soddisfare `MaxConcurrency` con i thread hardware sul computer.<br /><br /> Valori validi : Numeri interi positivi<br /><br /> Valore predefinito :`1`|
|`WinRTInitialization`||

### <a name="requirements"></a>Requisiti

**Intestazione:** concrt.h

## <a name="schedulertype-enumeration"></a><a name="schedulertype"></a>SchedulerType Enumerazione

Usato dai criteri `SchedulerKind` per descrivere il tipo di thread che l'utilità di pianificazione deve usare per i contesti di esecuzione sottostanti. Per ulteriori informazioni sui criteri dell'utilità di pianificazione disponibili, vedere [PolicyElementKey](concurrency-namespace-enums.md).

```cpp
enum SchedulerType;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`ThreadScheduler`|Indica una richiesta esplicita di thread Win32 regolari.|
|`UmsThreadDefault`|I thread UMS (User-mode schedulable) non sono supportati nel runtime di concorrenza in Visual Studio 2013. Utilizzando `UmsThreadDefault` come valore per i criteri `SchedulerType` non verrà generato un errore. Tuttavia, un'utilità di pianificazione creata con questi criteri viene impostata per l'utilizzo di thread Win32.|

### <a name="requirements"></a>Requisiti

**Intestazione:** concrt.h

## <a name="schedulingprotocoltype-enumeration"></a><a name="schedulingprotocoltype"></a>SchedulingProtocolType Enumerazione

Usato dai criteri `SchedulingProtocol` per descrivere quale algoritmo di pianificazione sarà usato per l'utilità di pianificazione. Per ulteriori informazioni sui criteri dell'utilità di pianificazione disponibili, vedere [PolicyElementKey](concurrency-namespace-enums.md).

```cpp
enum SchedulingProtocolType;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`EnhanceForwardProgress`|L'utilità di pianificazione preferisce eseguire il round robin tramite i gruppi di pianificazione dopo l'esecuzione di ogni attività. I contesti sbloccati vengono in genere pianificati in modo FIFO (first-in-first-out). I processori virtuali non memorizzano nella cache i contesti non bloccati.|
|`EnhanceScheduleGroupLocality`|L'utilità di pianificazione preferisce continuare a lavorare sulle attività all'interno del gruppo di pianificazione corrente prima di passare a un altro gruppo di pianificazione. I contesti sbloccati vengono memorizzati nella cache per processore virtuale e vengono in genere pianificati in modo LIFO (Last-In-First-Out) dal processore virtuale che li ha sbloccati.|

### <a name="requirements"></a>Requisiti

**Intestazione:** concrt.h

## <a name="switchingproxystate-enumeration"></a><a name="switchingproxystate"></a>SwitchingProxyState Enumerazione

Usato per indicare lo stato in cui si trova un proxy del thread, quando è in esecuzione uno scambio di contesto cooperativo per un proxy del thread diverso.

```cpp
enum SwitchingProxyState;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`Blocking`|Indica che il thread chiamante blocca in modo cooperativo e deve essere di proprietà esclusiva del chiamante fino a quando non viene eseguito di nuovo successivamente e non eseguirla.|
|`Idle`|Indica che il thread chiamante non è più necessario per l'utilità di pianificazione e viene restituito a Gestione risorse. Il contesto che veniva inviato non può più essere utilizzato da Gestione risorse.|
|`Nesting`|Indica che il thread chiamante sta annidando un'utilità di pianificazione figlio ed è necessario al chiamante, per potersi connettere a un'utilità di pianificazione diversa.|

### <a name="remarks"></a>Osservazioni

Un parametro `SwitchingProxyState` di tipo viene `IThreadProxy::SwitchTo` passato al metodo per indicare a Resource Manager come trattare il proxy del thread che effettua la chiamata.

Per ulteriori informazioni sull'utilizzo di questo tipo, vedere [IThreadProxy::SwitchTo](ithreadproxy-structure.md#switchto).

## <a name="task_group_status-enumeration"></a><a name="task_group_status"></a>Enumerazione task_group_status

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

**Intestazione:** pplinterface.h

## <a name="winrtinitializationtype-enumeration"></a><a name="winrtinitializationtype"></a>WinRTInitializationType Enumerazione

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

**Intestazione:** concrt.h

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
