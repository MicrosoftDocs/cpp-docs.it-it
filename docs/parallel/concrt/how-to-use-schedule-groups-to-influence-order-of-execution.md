---
title: "Procedura: Usare i gruppi di pianificazione per influenzare l'ordine di esecuzione"
ms.date: 11/04/2016
helpviewer_keywords:
- schedule groups, using [Concurrency Runtime]
- using schedule groups [Concurrency Runtime]
ms.assetid: 73124194-fc3a-491e-a23f-fbd7b5a4455c
ms.openlocfilehash: 84829664603999893f32caab39af250059bf9788
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77141911"
---
# <a name="how-to-use-schedule-groups-to-influence-order-of-execution"></a>Procedura: Usare i gruppi di pianificazione per influenzare l'ordine di esecuzione

Nell'runtime di concorrenza l'ordine in cui vengono pianificate le attività è non deterministico. Tuttavia, è possibile usare i criteri di pianificazione per influenzare l'ordine di esecuzione delle attività. In questo argomento viene illustrato come utilizzare i gruppi di pianificazione insieme ai criteri dell'utilità di pianificazione [Concurrency:: SchedulingProtocol](reference/concurrency-namespace-enums.md#policyelementkey) per influenzare l'ordine di esecuzione delle attività.

Nell'esempio viene eseguito due volte un set di attività, ognuna con un criterio di pianificazione diverso. Entrambi i criteri limitano a due il numero massimo di risorse di elaborazione. La prima esecuzione usa i criteri di `EnhanceScheduleGroupLocality`, ovvero l'impostazione predefinita, e la seconda esecuzione usa i criteri di `EnhanceForwardProgress`. Con i criteri di `EnhanceScheduleGroupLocality`, l'utilità di pianificazione esegue tutte le attività in un gruppo di pianificazione fino al completamento o alla proceduta di ogni attività. In base ai criteri di `EnhanceForwardProgress`, l'utilità di pianificazione passa al gruppo di pianificazione successivo in modo round robin dopo che è stata completata o restituita una sola attività.

Quando ogni gruppo di pianificazione contiene attività correlate, i criteri di `EnhanceScheduleGroupLocality` in genere comportano un miglioramento delle prestazioni perché la località della cache viene mantenuta tra le attività. Il criterio `EnhanceForwardProgress` consente alle attività di eseguire lo stato di avanzamento ed è utile quando è necessario pianificare l'equità nei gruppi di pianificazione.

## <a name="example"></a>Esempio

In questo esempio viene definita la classe `work_yield_agent`, che deriva da [Concurrency:: Agent](../../parallel/concrt/reference/agent-class.md). La classe `work_yield_agent` esegue un'unità di lavoro, restituisce il contesto corrente e quindi esegue un'altra unità di lavoro. L'agente utilizza la funzione [Concurrency:: wait](reference/concurrency-namespace-functions.md#wait) per restituire in modo cooperativo il contesto corrente in modo da poter eseguire altri contesti.

In questo esempio vengono creati quattro oggetti `work_yield_agent`. Per illustrare come impostare i criteri dell'utilità di pianificazione in modo da influire sull'ordine di esecuzione degli agenti, nell'esempio vengono associati i primi due agenti a un gruppo di pianificazione e agli altri due agenti con un altro gruppo di pianificazione. Nell'esempio viene utilizzato il metodo [Concurrency:: CurrentScheduler:: CreateScheduleGroup](reference/currentscheduler-class.md#createschedulegroup) per creare gli oggetti [Concurrency:: ScheduleGroup](../../parallel/concrt/reference/schedulegroup-class.md) . Nell'esempio tutti e quattro gli agenti vengono eseguiti due volte, ogni volta con un criterio di pianificazione diverso.

[!code-cpp[concrt-scheduling-protocol#1](../../parallel/concrt/codesnippet/cpp/how-to-use-schedule-groups-to-influence-order-of-execution_1.cpp)]

Questo esempio produce il seguente output:

```Output
Using EnhanceScheduleGroupLocality...
group 0,
    task 0: first loop...
group 0,
    task 1: first loop...
group 0,
    task 0: waiting...
group 1,
    task 0: first loop...
group 0,
    task 1: waiting...
group 1,
    task 1: first loop...
group 1,
    task 0: waiting...
group 0,
    task 0: second loop...
group 1,
    task 1: waiting...
group 0,
    task 1: second loop...
group 0,
    task 0: finished...
group 1,
    task 0: second loop...
group 0,
    task 1: finished...
group 1,
    task 1: second loop...
group 1,
    task 0: finished...
group 1,
    task 1: finished...

Using EnhanceForwardProgress...
group 0,
    task 0: first loop...
group 1,
    task 0: first loop...
group 0,
    task 0: waiting...
group 0,
    task 1: first loop...
group 1,
    task 0: waiting...
group 1,
    task 1: first loop...
group 0,
    task 1: waiting...
group 0,
    task 0: second loop...
group 1,
    task 1: waiting...
group 1,
    task 0: second loop...
group 0,
    task 0: finished...
group 0,
    task 1: second loop...
group 1,
    task 0: finished...
group 1,
    task 1: second loop...
group 0,
    task 1: finished...
group 1,
    task 1: finished...
```

Entrambi i criteri producono la stessa sequenza di eventi. Tuttavia, i criteri utilizzati da `EnhanceScheduleGroupLocality` avviano entrambi gli agenti che fanno parte del primo gruppo di pianificazione prima di avviare gli agenti che fanno parte del secondo gruppo. Il criterio che utilizza `EnhanceForwardProgress` avvia un agente dal primo gruppo e quindi avvia il primo agente nel secondo gruppo.

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `scheduling-protocol.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

> **CL. exe/EHsc scheduling-protocol. cpp**

## <a name="see-also"></a>Vedere anche

[Gruppi di pianificazione](../../parallel/concrt/schedule-groups.md)<br/>
[Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)
