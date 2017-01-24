---
title: "Gruppi di pianificazione | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gruppi di pianificazione"
ms.assetid: 03523572-5891-4d17-89ce-fa795605f28b
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Gruppi di pianificazione
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questo documento descrive il ruolo di gruppi di pianificazione nel Runtime di concorrenza. Oggetto *gruppo di pianificazione* Raggruppa o gruppi, attività correlate tra loro. Ogni utilità di pianificazione contiene uno o più gruppi di pianificazione. Usare i gruppi di pianificazione quando è necessario un livello elevato di località tra le attività, ad esempio quando un gruppo di attività correlate trae vantaggio dall'esecuzione nello stesso nodo del processore. Al contrario, utilizzare le istanze dell'utilità di pianificazione quando l'applicazione ha requisiti di qualità specifici, ad esempio, quando si desidera limitare la quantità di risorse di elaborazione allocate a un set di attività. Per ulteriori informazioni sulle istanze dell'utilità di pianificazione, vedere [le istanze dell'utilità di pianificazione](../../parallel/concrt/scheduler-instances.md).  
  
> [!TIP]
>  Il runtime di concorrenza fornisce un'utilità di pianificazione predefinita, pertanto non è necessario crearne una nell'applicazione. Poiché l'utilità di pianificazione consente di ottimizzare le prestazioni delle applicazioni, è consigliabile iniziare con il [libreria PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md) o [Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md) Se si ha familiarità con il Runtime di concorrenza.  
  
 Ogni `Scheduler` oggetto dispone di un gruppo di pianificazione predefinita per ogni nodo di pianificazione. Oggetto *pianificazione nodo* esegue il mapping alla topologia del sistema sottostante. Il runtime crea un nodo di pianificazione per ogni pacchetto del processore o nodo di Strumentazione gestione Windows (NUMA, Non-Uniform Memory Architecture), a seconda del valore maggiore. Se non si associa in modo esplicito un'attività con un gruppo di pianificazione, l'utilità di pianificazione sceglie gruppo a cui aggiungere l'attività.  
  
 Il `SchedulingProtocol` può arrivare a influenzare l'ordine in cui l'utilità di pianificazione esegue le attività in ogni gruppo di pianificazione dei criteri dell'utilità di pianificazione. Quando `SchedulingProtocol` è impostato su `EnhanceScheduleGroupLocality` (ossia l'impostazione predefinita), l'utilità di pianificazione sceglie l'attività successiva dal gruppo di pianificazione che è in corso l'attività corrente al termine oppure cooperativo. L'utilità di pianificazione Cerca il gruppo di pianificazione corrente per il lavoro prima di passare al gruppo successivo disponibile. Al contrario, quando `SchedulingProtocol` è impostato su `EnhanceForwardProgress`, l'utilità di pianificazione si sposta al gruppo di pianificazione successivo dopo ogni attività di completamento o la restituzione. Per un esempio che consente di confrontare questi criteri, vedere [procedura: utilizzare i gruppi di pianificazione per influenza l'ordine di esecuzione](../../parallel/concrt/how-to-use-schedule-groups-to-influence-order-of-execution.md).  
  
 Il runtime utilizza il [Concurrency:: ScheduleGroup](../../parallel/concrt/reference/schedulegroup-class.md) classe per rappresentare i gruppi di pianificazione. Per creare un `ScheduleGroup` dell'oggetto, chiamare il [concurrency::CurrentScheduler::CreateScheduleGroup](../Topic/CurrentScheduler::CreateScheduleGroup%20Method.md) o [concurrency::Scheduler::CreateScheduleGroup](../Topic/Scheduler::CreateScheduleGroup%20Method.md) metodo. Il runtime utilizza un meccanismo di conteggio dei riferimenti per controllare la durata della `ScheduleGroup` oggetti, esattamente come accade con `Scheduler` oggetti. Quando si crea un `ScheduleGroup` dell'oggetto, il runtime imposta il riferimento al contatore a uno. Il [concurrency::ScheduleGroup::Reference](../Topic/ScheduleGroup::Reference%20Method.md) metodo incrementa il contatore dei riferimenti di uno. Il [concurrency::ScheduleGroup::Release](../Topic/ScheduleGroup::Release%20Method.md) metodo decrementa il contatore di riferimenti da uno.  
  
 Molti tipi nel Runtime di concorrenza consentono di associare un oggetto a un gruppo di pianificazione. Ad esempio, il [Concurrency](../../parallel/concrt/reference/agent-class.md) ad esempio le classi del blocco di classe e il messaggio [Concurrency:: unbounded_buffer](../Topic/unbounded_buffer%20Class.md), [Concurrency:: join](../../parallel/concrt/reference/join-class.md), e la concorrenza::[timer](https://www.microsoftonedoc.com/#/organizations/e6f6a65cf14f462597b64ac058dbe1d0/projects/3fedad16-eaf1-41a6-8f96-0c1949c68f32/containers/a3daf831-1c5f-4bbe-964d-503870caf874/tocpaths/d5d4c847-5ad6-4c7f-b35b-d0b6f446d8b4/locales/en-US), forniscono versioni di overload del costruttore che accettano un `ScheduleGroup` oggetto. Il runtime utilizza il `Scheduler` oggetto associato a questo `ScheduleGroup` oggetto per pianificare l'attività.  
  
 È inoltre possibile utilizzare il [concurrency::ScheduleGroup::ScheduleTask](../Topic/ScheduleGroup::ScheduleTask%20Method.md) metodo per pianificare un'attività leggera. Per ulteriori informazioni sulle attività leggere, vedere [attività leggere](../../parallel/concrt/lightweight-tasks.md).  
  
## <a name="example"></a>Esempio  
 Per un esempio che utilizza i gruppi per controllare l'ordine di esecuzione dell'attività di pianificazione, vedere [procedura: utilizzare i gruppi di pianificazione per influenza l'ordine di esecuzione](../../parallel/concrt/how-to-use-schedule-groups-to-influence-order-of-execution.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)   
 [Istanze dell'utilità di pianificazione](../../parallel/concrt/scheduler-instances.md)   
 [Procedura: utilizzare i gruppi di pianificazione per influenzare l'ordine di esecuzione](../../parallel/concrt/how-to-use-schedule-groups-to-influence-order-of-execution.md)

