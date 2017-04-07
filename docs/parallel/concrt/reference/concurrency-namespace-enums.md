---
title: le enumerazioni dello spazio dei nomi Concurrency | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
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
dev_langs:
- C++
ms.assetid: a40e3b2d-ad21-4229-9880-2cfa84f7ab8f
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 5faef5bd1be6cc02d6614a6f6193c74167a8ff23
ms.openlocfilehash: 7589f0054e9393f938bf69d4e1751202cbc02456
ms.lasthandoff: 03/17/2017

---
# <a name="concurrency-namespace-enums"></a>enumerazioni dello spazio dei nomi Concurrency
||||  
|-|-|-|  
|[Agents_EventType](#agents_eventtype)|[ConcRT_EventType](#concrt_eventtype)|[Concrt_TraceFlags](#concrt_traceflags)|  
|[CriticalRegionType](#criticalregiontype)|[DynamicProgressFeedbackType](#dynamicprogressfeedbacktype)|[PolicyElementKey](#policyelementkey)|  
|[SchedulerType](#schedulertype)|[SchedulingProtocolType](#schedulingprotocoltype)|[SwitchingProxyState](#switchingproxystate)|  
|[WinRTInitializationType](#winrtinitializationtype)|[agent_status](#agent_status)|[tipo di join](#join_type)|  
|[message_status](#message_status)|[stato gruppo di attività](#task_group_status)|  
  
##  <a name="agent_status"></a>Enumerazione agent_status  
 Stati validi per un `agent`.  
  
```
enum agent_status;
```  
### <a name="values"></a>Valori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`agent_canceled`|Il parametro `agent` è stato annullato.|  
|`agent_created`|Il `agent` è stato creato ma non è stato avviato.|  
|`agent_done`|Il `agent` completato senza essere annullato.|  
|`agent_runnable`|Il `agent` è stata avviata, ma non si immette il `run` metodo.|  
|`agent_started`|Il `agent` è stato avviato.|  

### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [agenti asincroni](../../../parallel/concrt/asynchronous-agents.md).  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt

##  <a name="agents_eventtype"></a>Agents_EventType (enumerazione)  
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
 **Intestazione:** concrt

##  <a name="concrt_eventtype"></a>ConcRT_EventType (enumerazione)  
 Tipi di eventi che possono essere tracciati mediante la funzionalità di tracciatura offerta dal runtime di concorrenza.  
  
```
enum ConcRT_EventType;
```  
### <a name="values"></a>Valori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CONCRT_EVENT_ATTACH`|Tipo di evento che rappresenta l'atto di un collegamento a un'utilità di pianificazione.|  
|`CONCRT_EVENT_BLOCK`|Tipo di evento che rappresenta l'atto di un blocco di contesto.|  
|`CONCRT_EVENT_DETACH`|Tipo di evento che rappresenta l'atto di una disconnessione da un'utilità di pianificazione.|  
|`CONCRT_EVENT_END`|Tipo di evento che contrassegna l'inizio di una coppia di eventi di inizio e fine.|  
|`CONCRT_EVENT_GENERIC`|Un tipo di evento utilizzato per i vari eventi.|  
|`CONCRT_EVENT_IDLE`|Tipo di evento che rappresenta l'atto di un contesto che diventa inattivo.|  
|`CONCRT_EVENT_START`|Tipo di evento che contrassegna l'inizio di una coppia di eventi di inizio e fine.|  
|`CONCRT_EVENT_UNBLOCK`|Tipo di evento che rappresenta l'atto di sblocco di un contesto.|  
|`CONCRT_EVENT_YIELD`|Tipo di evento che rappresenta l'atto di restituzione di un contesto.|  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt  **Namespace:** concorrenza

##  <a name="concrt_traceflags"></a>Concrt_TraceFlags (enumerazione)  
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
 **Intestazione:** concrt

##  <a name="criticalregiontype"></a>CriticalRegionType (enumerazione)  
 Tipo di area critica in cui si trova un contesto.  
  
```
enum CriticalRegionType;
```  
### <a name="values"></a>Valori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`InsideCriticalRegion`|Indica che il contesto è all'interno di un'area critica. All'interno di un'area critica, le sospensioni asincrone sono nascosti dall'utilità di pianificazione. Tale sospensione accadrà, il gestore delle risorse attenderà il thread diventi eseguibile e riprenderlo anziché richiamare nuovamente l'utilità di pianificazione. I blocchi presi in tale area devono essere prese con estrema cautela.|  
|`InsideHyperCriticalRegion`|Indica che il contesto è all'interno di un'area hyper critica. Quando in un'area hyper critici, le sospensioni sincrone e asincrone vengono nascoste dall'utilità di pianificazione. Se tale sospensione o verificarsi il blocco, il gestore delle risorse attenderà il thread diventi eseguibile e riprenderlo anziché richiamare nuovamente l'utilità di pianificazione. Blocchi acquisiti in tale area non devono essere condiviso con il codice in esecuzione all'esterno di tale area. Questa operazione causerebbe un deadlock imprevedibile.|  
|`OutsideCriticalRegion`|Indica che il contesto è all'esterno di qualsiasi area critica.|  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** concrtrm. h 

##  <a name="dynamicprogressfeedbacktype"></a>DynamicProgressFeedbackType (enumerazione)  
 Usato dai criteri `DynamicProgressFeedback` per descrivere se le risorse per l'utilità di pianificazione saranno ribilanciate sulla base di informazioni statistiche raccolte dall'utilità di pianificazione o solo sulla base di processori virtuali che passano allo stato inattivo e viceversa tramite chiamate ai metodi `Activate` e `Deactivate` sull'interfaccia `IVirtualProcessorRoot`. Per ulteriori informazioni sui criteri dell'utilità di pianificazione disponibili, vedere [PolicyElementKey](concurrency-namespace-enums.md).  
  
```
enum DynamicProgressFeedbackType;
```  
### <a name="values"></a>Valori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`ProgressFeedbackDisabled`|L'utilità di pianificazione non raccoglie informazioni sullo stato. Il ribilanciamento viene eseguito in base esclusivamente sul livello di sottoscrizione del thread di hardware sottostante. Per ulteriori informazioni sui livelli di sottoscrizione, vedere [IExecutionResource:: CurrentSubscriptionLevel](IExecutionResource-structure.md).<br /><br /> Questo valore è riservato dal runtime.|  
|`ProgressFeedbackEnabled`|L'utilità di pianificazione raccoglie informazioni sullo stato e lo passa al gestore di risorse. Il gestore di risorse utilizzerà queste informazioni statistiche per ribilanciare le risorse per conto di utilità di pianificazione oltre al livello di sottoscrizione del thread di hardware sottostante. Per ulteriori informazioni sui livelli di sottoscrizione, vedere [IExecutionResource:: CurrentSubscriptionLevel](IExecutionResource-structure.md).|  
##  <a name="join_type"></a>Enumerazione join_type  
 Tipo di un blocco della messaggistica `join`.  
  
```
enum join_type;
```  
### <a name="values"></a>Valori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`greedy`|Greedy `join` blocchi della messaggistica accettano immediatamente un messaggio durante la propagazione. Questo è più efficiente, ma ha la possibilità di blocco-attivo, a seconda della configurazione di rete.|  
|`non_greedy`|Non-greedy `join` blocchi della messaggistica posticipare i messaggi e provare e li utilizzano dopo che tutti sono arrivati. Questi sono garantiti a funzionare, ma sono più lenti.|  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** agents.h  

##  <a name="message_status"></a>Enumerazione message_status  
 Risposte valide per un'offerta di un oggetto `message` a un blocco.  
  
```
enum message_status;
```  
### <a name="values"></a>Valori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`accepted`|La destinazione ha accettato il messaggio.|  
|`declined`|La destinazione non ha accettato il messaggio.|  
|`missed`|La destinazione ha tentato di accettare il messaggio, ma non era disponibile.|  
|`postponed`|La destinazione ha rimandato il messaggio.|  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** agents.h  

##  <a name="policyelementkey"></a>PolicyElementKey (enumerazione)  
 Chiavi dei criteri che descrivono aspetti del comportamento dell'utilità di pianificazione. Ciascun elemento dei criteri è descritto da una coppia chiave-valore. Per ulteriori informazioni sui criteri dell'utilità di pianificazione e l'impatto nelle utilità di pianificazione, vedere [utilità di pianificazione](../../../parallel/concrt/task-scheduler-concurrency-runtime.md).  
  
```
enum PolicyElementKey;
```  
### <a name="values"></a>Valori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`ContextPriority`|La priorità del thread del sistema operativo di ogni contesto dell'utilità di pianificazione. Se questa chiave è impostata sul valore `INHERIT_THREAD_PRIORITY` i contesti nell'utilità di pianificazione erediteranno la priorità di thread che ha creato l'utilità di pianificazione.<br /><br /> I valori validi: i valori validi per le finestre di `SetThreadPriority` funzione e il valore speciale`INHERIT_THREAD_PRIORITY`<br /><br /> Valore predefinito:`THREAD_PRIORITY_NORMAL`|  
|`ContextStackSize`|La dimensione dello stack riservato di ogni contesto dell'utilità di pianificazione in kilobyte.<br /><br /> I valori validi: numeri interi positivi<br /><br /> Il valore predefinito: `0`, che indica che il valore predefinito il processo per la dimensione dello stack utilizzabile.|  
|`DynamicProgressFeedback`|Determina se le risorse per l'utilità di pianificazione verranno riequilibrate in base alle informazioni statistiche raccolte dall'utilità di pianificazione o solo in base al livello di sottoscrizione di thread di hardware sottostante. Per ulteriori informazioni, vedere [DynamicProgressFeedbackType](#dynamicprogressfeedbacktype).<br /><br /> I valori validi: un membro del `DynamicProgressFeedbackType` enumerazione, ad esempio `ProgressFeedbackEnabled` o`ProgressFeedbackDisabled`<br /><br /> Valore predefinito:`ProgressFeedbackEnabled`|  
|`LocalContextCacheSize`|Quando il `SchedulingProtocol` chiave dei criteri è impostata sul valore `EnhanceScheduleGroupLocality`, specifica il numero massimo di contesti eseguibili consentito deve essere memorizzato nella cache per code locali del processore virtuale. Tali contesti verranno in genere eseguiti last-in-first-out (LIFO) del processore virtuale che li hanno causati diventi eseguibile. Si noti che questa chiave di criterio non ha significato quando la `SchedulingProtocol` chiave è impostata sul valore `EnhanceForwardProgress`.<br /><br /> I valori validi: numeri interi Non negativi<br /><br /> Valore predefinito:`8`|  
|`MaxConcurrency`|La concorrenza massima livello desiderata dall'utilità di pianificazione. Gestione risorse tenterà di allocare inizialmente questo numero di processori virtuale. Il valore speciale [MaxExecutionResources](concurrency-namespace-constants1.md#maxexecutionresources) indica che il livello di concorrenza desiderato corrisponde al numero di thread di hardware sul computer. Se il valore specificato per `MinConcurrency` è maggiore del numero di thread di hardware sul computer e `MaxConcurrency` viene specificato come `MaxExecutionResources`, il valore per `MaxConcurrency` viene generato in modo che corrisponda a quello che viene impostato per `MinConcurrency`.<br /><br /> I valori validi: numeri interi positivi e il valore speciale`MaxExecutionResources`<br /><br /> Valore predefinito:`MaxExecutionResources`|  
|`MaxPolicyElementKey`|Chiave dell'elemento criteri massimo. Non è una chiave di elemento valido.|  
|`MinConcurrency`|Il livello di concorrenza minimo che deve essere fornito all'utilità di pianificazione da Gestione risorse. Il numero di processori virtuali assegnati a un'utilità di pianificazione non scenderà sotto il valore minimo. Il valore speciale [MaxExecutionResources](concurrency-namespace-constants1.md#maxexecutionresources) indica che il livello di concorrenza minimo corrisponde al numero di thread di hardware sul computer. Se il valore specificato per `MaxConcurrency` è inferiore al numero di thread di hardware sul computer e `MinConcurrency` viene specificato come `MaxExecutionResources`, il valore per `MinConcurrency` si riducono in modo che corrisponda a quello che viene impostato per `MaxConcurrency`.<br /><br /> I valori validi: numeri interi Non negativi e il valore speciale `MaxExecutionResources`. Si noti che per i criteri dell'utilità di pianificazione utilizzati per la costruzione delle utilità di pianificazione del runtime di concorrenza, il valore `0` non è valido.<br /><br /> Valore predefinito:`1`|  
|`SchedulerKind`|Il tipo di thread che verrà utilizzata l'utilità di pianificazione per i contesti di esecuzione sottostanti. Per ulteriori informazioni, vedere [SchedulerType](#schedulertype).<br /><br /> Valori validi: un membro dell'enumerazione `SchedulerType`, ad esempio `ThreadScheduler`<br /><br /> Il valore predefinito: `ThreadScheduler`. Questo si traduce in thread Win32 su tutti i sistemi operativi.|  
|`SchedulingProtocol`|Descrive quale algoritmo di pianificazione da utilizzare per l'utilità di pianificazione. Per ulteriori informazioni, vedere [SchedulingProtocolType](#schedulingprotocoltype).<br /><br /> I valori validi: un membro del `SchedulingProtocolType` enumerazione, ad esempio `EnhanceScheduleGroupLocality` o`EnhanceForwardProgress`<br /><br /> Valore predefinito:`EnhanceScheduleGroupLocality`|  
|`TargetOversubscriptionFactor`|Tentativo del numero di processori virtuali per ogni thread di hardware. Se necessario, il fattore dell'oversubscription di destinazione può essere incrementato da Gestione risorse per soddisfare `MaxConcurrency` con i thread hardware sul computer.<br /><br /> I valori validi: numeri interi positivi<br /><br /> Valore predefinito:`1`|  
|`WinRTInitialization`||  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt  

##  <a name="schedulertype"></a>SchedulerType (enumerazione)  
 Usato dai criteri `SchedulerKind` per descrivere il tipo di thread che l'utilità di pianificazione deve usare per i contesti di esecuzione sottostanti. Per ulteriori informazioni sui criteri dell'utilità di pianificazione disponibili, vedere [PolicyElementKey](concurrency-namespace-enums.md).  
  
```
enum SchedulerType;
``` 

### <a name="values"></a>Valori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`ThreadScheduler`|Indica una richiesta esplicita di thread Win32 normali.|  
|`UmsThreadDefault`|Thread (UMS) non sono supportati nel Runtime di concorrenza in Visual Studio 2013. Utilizzando `UmsThreadDefault` come valore per i criteri `SchedulerType` non verrà generato un errore. Tuttavia, un'utilità di pianificazione creata con questi criteri viene impostata per l'utilizzo di thread Win32.|  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt  
  
##  <a name="schedulingprotocoltype"></a>SchedulingProtocolType (enumerazione)  
 Usato dai criteri `SchedulingProtocol` per descrivere quale algoritmo di pianificazione sarà usato per l'utilità di pianificazione. Per ulteriori informazioni sui criteri dell'utilità di pianificazione disponibili, vedere [PolicyElementKey](concurrency-namespace-enums.md).  
  
```
enum SchedulingProtocolType;
```  
### <a name="values"></a>Valori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`EnhanceForwardProgress`|L'utilità di pianificazione preferisce round-robin tramite gruppi di pianificazione dopo l'esecuzione di ogni attività. Contesti sbloccati vengono in genere pianificati in modo first-in-first-out (FIFO). Processori virtuali nella cache contesti sbloccati.|  
|`EnhanceScheduleGroupLocality`|L'utilità di pianificazione preferisce continuare a lavorare su attività all'interno del gruppo di pianificazione corrente prima di passare a un altro gruppo di pianificazione. Contesti sbloccati vengono memorizzati nella cache per ogni processore virtuale e vengono in genere pianificati in modo last-in-first-out (LIFO) per il processore virtuale che li ha sbloccati.|  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt  
 
##  <a name="switchingproxystate"></a>SwitchingProxyState (enumerazione)  
 Usato per indicare lo stato in cui si trova un proxy del thread, quando è in esecuzione uno scambio di contesto cooperativo per un proxy del thread diverso.  
  
```
enum SwitchingProxyState;
```  
### <a name="values"></a>Valori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`Blocking`|Indica che il thread chiamante sta bloccando cooperativamente e deve essere di proprietà esclusiva dal chiamante fino a quando successivamente nuovamente in esecuzione e l'esecuzione di un'altra azione.|  
|`Idle`|Indica che il thread chiamante non è più necessario dall'utilità di pianificazione e viene restituito a Gestione risorse. Il contesto è stato inviato non è più in grado di essere utilizzata dal gestore delle risorse.|  
|`Nesting`|Indica che il thread chiamante sta annidando un'utilità di pianificazione figlio ed è necessario dal chiamante, per consentire il collegamento a un'utilità di pianificazione diverso.|  

### <a name="remarks"></a>Note  
 Un parametro di tipo `SwitchingProxyState` viene passato al metodo `IThreadProxy::SwitchTo` per indicare il gestore di risorse come trattare il proxy del thread che effettua la chiamata.  
  
 Per ulteriori informazioni sull'utilizzo di questo tipo, vedere [IThreadProxy:: SwitchTo](ithreadproxy-structure.md#switchto).  
  
##  <a name="task_group_status"></a>Enumerazione task_group_status  
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
 **Intestazione:** pplinterface.h  

##  <a name="winrtinitializationtype"></a>WinRTInitializationType (enumerazione)  
 Utilizzata dai criteri `WinRTInitialization` per descrivere se e come Windows Runtime verrà inizializzato nei thread dell'utilità di pianificazione per un'applicazione eseguita nei sistemi operativi con la versione Windows 8 o superiore. Per ulteriori informazioni sui criteri dell'utilità di pianificazione disponibili, vedere [PolicyElementKey](concurrency-namespace-enums.md).  
  
```
enum WinRTInitializationType;
```  
### <a name="values"></a>Valori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`DoNotInitializeWinRT`|Quando l'applicazione viene eseguita nei sistemi operativi con la versione Windows 8 o successiva, tramite i thread all'interno dell'utilità di pianificazione non verrà inizializzato Windows Runtime.|  
|`InitializeWinRTAsMTA`|Quando l'applicazione viene eseguita nei sistemi operativi con la versione Windows 8 o successiva, tramite ogni thread all'interno dell'utilità di pianificazione verrà inizializzato Windows Runtime e verrà dichiarato che fa parte dell'apartment a thread multipli.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt  

## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)

