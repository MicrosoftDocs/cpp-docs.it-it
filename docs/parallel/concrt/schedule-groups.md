---
title: Gruppi di pianificazione
ms.date: 11/04/2016
helpviewer_keywords:
- schedule groups
ms.assetid: 03523572-5891-4d17-89ce-fa795605f28b
ms.openlocfilehash: febcc0a9c7af75801962ea6be687ce87cc5501d4
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57295974"
---
# <a name="schedule-groups"></a>Gruppi di pianificazione

Questo documento descrive il ruolo dei gruppi di pianificazione nel Runtime di concorrenza. Oggetto *gruppo di pianificazione* Raggruppa o i gruppi, attività correlate tra loro. Ogni utilità di pianificazione ha uno o più gruppi di pianificazione. Usare i gruppi di pianificazione quando è necessario un livello elevato di località tra le attività, ad esempio quando un gruppo di attività correlate trae vantaggio dall'esecuzione nello stesso nodo del processore. Al contrario, utilizzare le istanze dell'utilità di pianificazione quando l'applicazione presenta requisiti di qualità specifici, ad esempio, quando si desidera limitare la quantità di risorse di elaborazione che vengono allocati a un set di attività. Per ulteriori informazioni sulle istanze dell'utilità di pianificazione, vedere [le istanze dell'utilità di pianificazione](../../parallel/concrt/scheduler-instances.md).

> [!TIP]
>  Il runtime di concorrenza fornisce un'utilità di pianificazione predefinita, pertanto non è necessario crearne una nell'applicazione. Poiché l'utilità di pianificazione consente di ottimizzare le prestazioni delle applicazioni, è consigliabile iniziare con il [libreria PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md) o nella [Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md) se si è familiarità con il Runtime di concorrenza.

Ogni `Scheduler` oggetto dispone di un gruppo di pianificazione predefinita per ogni nodo di pianificazione. Oggetto *pianificazione nodo* viene eseguito il mapping alla topologia del sistema sottostanti. Il runtime crea un nodo di pianificazione per ogni pacchetto del processore o nodo di Strumentazione gestione Windows (NUMA, Non-Uniform Memory Architecture), a seconda del valore maggiore. Se non si associa in modo esplicito un'attività a un gruppo di pianificazione, l'utilità di pianificazione sceglie quale gruppo a cui aggiungere l'attività.

Il `SchedulingProtocol` criteri dell'utilità di pianificazione influisce l'ordine in cui l'utilità di pianificazione esegue le attività in ogni gruppo di pianificazione. Quando `SchedulingProtocol` è impostata su `EnhanceScheduleGroupLocality` (ovvero l'impostazione predefinita), l'utilità di pianificazione sceglie l'attività successiva nel gruppo di pianificazione che è in corso quando l'attività corrente viene completato o in modo cooperativo. L'utilità di pianificazione Cerca il gruppo di pianificazione corrente per il lavoro prima di spostarli nel successivo gruppo di disponibilità. Al contrario, quando `SchedulingProtocol` è impostata su `EnhanceForwardProgress`, l'utilità di pianificazione viene spostato nel gruppo di pianificazione successivo dopo ogni attività viene completata o la restituzione. Per un esempio che consente di confrontare questi criteri, vedere [come: Usare i gruppi di pianificazione per influenzare l'ordine di esecuzione](../../parallel/concrt/how-to-use-schedule-groups-to-influence-order-of-execution.md).

Il runtime usa la [Concurrency:: ScheduleGroup](../../parallel/concrt/reference/schedulegroup-class.md) classe per rappresentare i gruppi di pianificazione. Per creare un `ScheduleGroup` dell'oggetto, chiamare il [concurrency::CurrentScheduler::CreateScheduleGroup](reference/currentscheduler-class.md#createschedulegroup) oppure [concurrency::Scheduler::CreateScheduleGroup](reference/scheduler-class.md#createschedulegroup) (metodo). Il runtime usa un meccanismo di conteggio dei riferimenti per controllare la durata del `ScheduleGroup` oggetti, come avviene con `Scheduler` oggetti. Quando si crea un `ScheduleGroup` dell'oggetto, il runtime imposta il riferimento al contatore a uno. Il [concurrency::ScheduleGroup::Reference](reference/schedulegroup-class.md#reference) metodo incrementa il contatore di riferimenti di uno. Il [ScheduleGroup](reference/schedulegroup-class.md#release) metodo decrementa il contatore di riferimenti da uno.

Molti tipi in Runtime di concorrenza consentono di associare un oggetto insieme a un gruppo di pianificazione. Ad esempio, il [Concurrency:: Agent](../../parallel/concrt/reference/agent-class.md) classi come classe e il messaggio di blocco [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md), [Concurrency:: join](../../parallel/concrt/reference/join-class.md)e la concorrenza::[ timer](reference/timer-class.md), fornire versioni di overload del costruttore che accettano un `ScheduleGroup` oggetto. Il runtime usa la `Scheduler` associato a questo oggetto `ScheduleGroup` oggetto per pianificare l'attività.

È anche possibile usare la [concurrency::ScheduleGroup::ScheduleTask](reference/schedulegroup-class.md#scheduletask) metodo per pianificare un'attività leggera. Per altre informazioni sulle attività leggera, vedere [attività leggere](../../parallel/concrt/lightweight-tasks.md).

## <a name="example"></a>Esempio

Per un esempio che usa i gruppi per controllare l'ordine dell'esecuzione dell'attività di pianificazione, vedere [come: Usare i gruppi di pianificazione per influenzare l'ordine di esecuzione](../../parallel/concrt/how-to-use-schedule-groups-to-influence-order-of-execution.md).

## <a name="see-also"></a>Vedere anche

[Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)<br/>
[Istanze dell'utilità di pianificazione](../../parallel/concrt/scheduler-instances.md)<br/>
[Procedura: Usare i gruppi di pianificazione per influenzare l'ordine di esecuzione](../../parallel/concrt/how-to-use-schedule-groups-to-influence-order-of-execution.md)
