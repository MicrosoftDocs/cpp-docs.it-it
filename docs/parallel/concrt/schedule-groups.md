---
description: 'Altre informazioni su: pianificare i gruppi'
title: Gruppi di pianificazione
ms.date: 11/04/2016
helpviewer_keywords:
- schedule groups
ms.assetid: 03523572-5891-4d17-89ce-fa795605f28b
ms.openlocfilehash: bee4f20ae58f94ddad93770232028df7b82dd39e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97188066"
---
# <a name="schedule-groups"></a>Gruppi di pianificazione

In questo documento viene descritto il ruolo dei gruppi di pianificazione nell'runtime di concorrenza. Un *gruppo di pianificazione* cui, o gruppi, le attività correlate. Ogni utilità di pianificazione ha uno o più gruppi di pianificazione. Usare i gruppi di pianificazione quando è necessario un livello elevato di località tra le attività, ad esempio quando un gruppo di attività correlate trae vantaggio dall'esecuzione nello stesso nodo del processore. Viceversa, utilizzare le istanze dell'utilità di pianificazione quando l'applicazione presenta requisiti di qualità specifici, ad esempio quando si desidera limitare la quantità di risorse di elaborazione allocate a un set di attività. Per ulteriori informazioni sulle istanze dell'utilità di pianificazione, vedere [istanze dell'utilità di pianificazione](../../parallel/concrt/scheduler-instances.md).

> [!TIP]
> Il runtime di concorrenza fornisce un'utilità di pianificazione predefinita, pertanto non è necessario crearne una nell'applicazione. Poiché il Utilità di pianificazione consente di ottimizzare le prestazioni delle applicazioni, è consigliabile iniziare con la libreria [PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md) o la [libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md) se non si ha familiarità con l'runtime di concorrenza.

Ogni `Scheduler` oggetto dispone di un gruppo di pianificazione predefinito per ogni nodo di pianificazione. Un *nodo di pianificazione* esegue il mapping alla topologia di sistema sottostante. Il runtime crea un nodo di pianificazione per ogni pacchetto del processore o nodo NUMA (non-Uniform Memory Architecture), a seconda del numero maggiore. Se non si associa in modo esplicito un'attività a un gruppo di pianificazione, l'utilità di pianificazione sceglie il gruppo a cui aggiungere l'attività.

I `SchedulingProtocol` criteri dell'utilità di pianificazione influiscono sull'ordine in cui l'utilità di pianificazione esegue le attività in ogni gruppo di pianificazione. Quando `SchedulingProtocol` è impostato su `EnhanceScheduleGroupLocality` (impostazione predefinita), il utilità di pianificazione sceglie l'attività successiva dal gruppo di pianificazione su cui sta lavorando al termine o in modo cooperativo dell'attività corrente. Il Utilità di pianificazione cerca il lavoro nel gruppo di pianificazione corrente prima di passare al gruppo successivo disponibile. Viceversa, quando `SchedulingProtocol` è impostato su `EnhanceForwardProgress` , l'utilità di pianificazione passa al gruppo di pianificazione successivo dopo che ogni attività termina o cede. Per un esempio in cui vengono confrontati questi criteri, vedere [procedura: usare i gruppi di pianificazione per influenzare l'ordine di esecuzione](../../parallel/concrt/how-to-use-schedule-groups-to-influence-order-of-execution.md).

Il runtime usa la classe [Concurrency:: ScheduleGroup](../../parallel/concrt/reference/schedulegroup-class.md) per rappresentare i gruppi di pianificazione. Per creare un `ScheduleGroup` oggetto, chiamare il metodo [Concurrency:: CurrentScheduler:: CreateScheduleGroup](reference/currentscheduler-class.md#createschedulegroup) o [Concurrency:: Scheduler:: CreateScheduleGroup](reference/scheduler-class.md#createschedulegroup) . Il runtime usa un meccanismo di conteggio dei riferimenti per controllare la durata degli `ScheduleGroup` oggetti, esattamente come avviene con `Scheduler` gli oggetti. Quando si crea un `ScheduleGroup` oggetto, il runtime imposta il contatore dei riferimenti su uno. Il metodo [Concurrency:: ScheduleGroup:: Reference](reference/schedulegroup-class.md#reference) incrementa il contatore dei riferimenti di uno. Il metodo [Concurrency:: ScheduleGroup:: Release](reference/schedulegroup-class.md#release) decrementa di uno il contatore dei riferimenti.

Molti tipi della runtime di concorrenza consentono di associare un oggetto a un gruppo di pianificazione. Ad esempio, le classi [Concurrency:: Agent](../../parallel/concrt/reference/agent-class.md) e Message Block, ad esempio [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md), [Concurrency:: join](../../parallel/concrt/reference/join-class.md)e Concurrency::[timer](reference/timer-class.md), forniscono versioni di overload del costruttore che accettano un `ScheduleGroup` oggetto. Il runtime usa l' `Scheduler` oggetto associato `ScheduleGroup` a questo oggetto per pianificare l'attività.

È anche possibile usare il metodo [Concurrency:: ScheduleGroup:: ScheduleTask](reference/schedulegroup-class.md#scheduletask) per pianificare un'attività leggera. Per ulteriori informazioni sulle attività leggere, vedere [attività leggere](../../parallel/concrt/lightweight-tasks.md).

## <a name="example"></a>Esempio

Per un esempio in cui vengono usati i gruppi di pianificazione per controllare l'ordine di esecuzione delle attività, vedere [procedura: usare i gruppi di pianificazione per influenzare l'ordine di esecuzione](../../parallel/concrt/how-to-use-schedule-groups-to-influence-order-of-execution.md).

## <a name="see-also"></a>Vedi anche

[Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)<br/>
[Istanze dell'utilità di pianificazione](../../parallel/concrt/scheduler-instances.md)<br/>
[Procedura: usare i gruppi di pianificazione per influenzare l'ordine di esecuzione](../../parallel/concrt/how-to-use-schedule-groups-to-influence-order-of-execution.md)
