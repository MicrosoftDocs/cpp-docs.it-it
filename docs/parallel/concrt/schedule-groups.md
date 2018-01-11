---
title: Gruppi di pianificazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: schedule groups
ms.assetid: 03523572-5891-4d17-89ce-fa795605f28b
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a61566878adc539af21e1645844eff27c5a8aec0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="schedule-groups"></a>Gruppi di pianificazione
Questo documento descrive il ruolo dei gruppi di pianificazione nel Runtime di concorrenza. Oggetto *gruppo di pianificazione* Raggruppa o gruppi, attività correlate tra loro. Ogni utilità di pianificazione ha uno o più gruppi di pianificazione. Usare i gruppi di pianificazione quando è necessario un livello elevato di località tra le attività, ad esempio quando un gruppo di attività correlate trae vantaggio dall'esecuzione nello stesso nodo del processore. Al contrario, utilizzare le istanze dell'utilità di pianificazione quando l'applicazione ha requisiti di qualità specifici, ad esempio, quando si desidera limitare la quantità di risorse di elaborazione che vengono allocate a un set di attività. Per ulteriori informazioni sulle istanze dell'utilità di pianificazione, vedere [istanze dell'utilità di pianificazione](../../parallel/concrt/scheduler-instances.md).  
  
> [!TIP]
>  Il runtime di concorrenza fornisce un'utilità di pianificazione predefinita, pertanto non è necessario crearne una nell'applicazione. Poiché l'utilità di pianificazione consente di ottimizzare le prestazioni delle applicazioni, è consigliabile iniziare con il [libreria PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md) o [libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md) se si è familiarità con il Runtime di concorrenza.  
  
 Ogni `Scheduler` oggetto dispone di un gruppo di pianificazione predefinita per ogni nodo di pianificazione. Oggetto *pianificazione nodo* esegue il mapping alla topologia del sistema sottostanti. Il runtime crea un nodo di pianificazione per ogni pacchetto del processore o nodo di Strumentazione gestione Windows (NUMA, Non-Uniform Memory Architecture), a seconda del valore maggiore. Se non si associa in modo esplicito un'attività con un gruppo di pianificazione, l'utilità di pianificazione sceglie gruppo a cui aggiungere l'attività.  
  
 Il `SchedulingProtocol` criteri dell'utilità di pianificazione influiscono sull'ordine in cui l'utilità di pianificazione esegue le attività in ogni gruppo di pianificazione. Quando `SchedulingProtocol` è impostato su `EnhanceScheduleGroupLocality` (ovvero l'impostazione predefinita), l'utilità di pianificazione sceglie l'attività successiva nel gruppo di pianificazione che è in corso l'attività corrente al termine, oppure restituisce in modo cooperativo. L'utilità di pianificazione Cerca il gruppo di pianificazione corrente per il lavoro prima di passare al gruppo successivo disponibile. Al contrario, quando `SchedulingProtocol` è impostato su `EnhanceForwardProgress`, l'utilità di pianificazione si sposta al gruppo di pianificazione successivo dopo ogni attività di completamento o la restituzione. Per un esempio che confronta questi criteri, vedere [procedura: utilizzare i gruppi di pianificazione per influiscono sull'ordine di esecuzione](../../parallel/concrt/how-to-use-schedule-groups-to-influence-order-of-execution.md).  
  

 Il runtime usa la [Concurrency:: ScheduleGroup](../../parallel/concrt/reference/schedulegroup-class.md) classe per rappresentare i gruppi di pianificazione. Per creare un `ScheduleGroup` dell'oggetto, chiamare il [concurrency::CurrentScheduler::CreateScheduleGroup](reference/currentscheduler-class.md#createschedulegroup) o [concurrency::Scheduler::CreateScheduleGroup](reference/scheduler-class.md#createschedulegroup) metodo. Il runtime utilizza un meccanismo di conteggio dei riferimenti per controllare la durata di `ScheduleGroup` oggetti, come avviene con `Scheduler` oggetti. Quando si crea un `ScheduleGroup` dell'oggetto, il runtime imposta il riferimento al contatore a uno. Il [concurrency::ScheduleGroup::Reference](reference/schedulegroup-class.md#reference) metodo incrementa il contatore dei riferimenti di uno. Il [concurrency::ScheduleGroup::Release](reference/schedulegroup-class.md#release) metodo decrementa il contatore di riferimenti da uno.  
  
 Molti tipi nel Runtime di concorrenza consentono di associare un oggetto a un gruppo di pianificazione. Ad esempio, il [Concurrency:: Agent](../../parallel/concrt/reference/agent-class.md) , ad esempio le classi del blocco di classe e il messaggio [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md), [Concurrency:: join](../../parallel/concrt/reference/join-class.md)e la concorrenza::[ timer](reference/timer-class.md), forniscono versioni di overload del costruttore che accettano un `ScheduleGroup` oggetto. Il runtime usa la `Scheduler` associato all'oggetto `ScheduleGroup` oggetto per pianificare l'attività.  
  
 È inoltre possibile utilizzare il [concurrency::ScheduleGroup::ScheduleTask](reference/schedulegroup-class.md#scheduletask) metodo per pianificare un'attività leggera. Per ulteriori informazioni sulle attività leggere, vedere [attività leggere](../../parallel/concrt/lightweight-tasks.md).  

  
## <a name="example"></a>Esempio  
 Per un esempio che utilizza i gruppi per controllare l'ordine di esecuzione dell'attività di pianificazione, vedere [procedura: utilizzare i gruppi di pianificazione per influiscono sull'ordine di esecuzione](../../parallel/concrt/how-to-use-schedule-groups-to-influence-order-of-execution.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)   
 [Istanze dell'utilità di pianificazione](../../parallel/concrt/scheduler-instances.md)   
 [Procedura: Usare i gruppi di pianificazione per influenzare l'ordine di esecuzione](../../parallel/concrt/how-to-use-schedule-groups-to-influence-order-of-execution.md)

