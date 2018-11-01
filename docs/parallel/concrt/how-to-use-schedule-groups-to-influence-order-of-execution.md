---
title: "Procedura: Usare i gruppi di pianificazione per influenzare l'ordine di esecuzione"
ms.date: 11/04/2016
helpviewer_keywords:
- schedule groups, using [Concurrency Runtime]
- using schedule groups [Concurrency Runtime]
ms.assetid: 73124194-fc3a-491e-a23f-fbd7b5a4455c
ms.openlocfilehash: 1117e0d24aae023fbb4dec4fbb9721e6da2ad768
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50642302"
---
# <a name="how-to-use-schedule-groups-to-influence-order-of-execution"></a>Procedura: Usare i gruppi di pianificazione per influenzare l'ordine di esecuzione

Nel Runtime di concorrenza, l'ordine in cui viene pianificata l'attività è non deterministico. Tuttavia, è possibile utilizzare i criteri di pianificazione per influenzare l'ordine di esecuzione delle attività. In questo argomento viene illustrato come utilizzare i gruppi di pianificazione con il [Concurrency:: SchedulingProtocol](reference/concurrency-namespace-enums.md#policyelementkey) criteri dell'utilità di pianificazione per influenzare l'ordine di esecuzione delle attività.

Nell'esempio viene eseguito un set di attività due volte, ognuna con un criterio di pianificazione diverso. Entrambi i criteri limitano il numero massimo di risorse di elaborazione a due. La prima esecuzione vengono utilizzati i `EnhanceScheduleGroupLocality` dei criteri, ovvero l'impostazione predefinita e nella seconda vengono utilizzati il `EnhanceForwardProgress` criteri. Sotto il `EnhanceScheduleGroupLocality` criteri, l'utilità di pianificazione esegue tutte le attività in un gruppo di pianificazione fino a quando non viene completata o la restituzione di ogni attività. Sotto il `EnhanceForwardProgress` criteri, l'utilità di pianificazione consente di spostare il successivo gruppo di pianificazione in modo round robin dopo una sola operazione di completamento o la restituzione.

Quando ogni gruppo di pianificazione contiene le attività correlate, il `EnhanceScheduleGroupLocality` criterio in genere comporta un miglioramento delle prestazioni in quanto la località della cache viene mantenuta tra le attività. Il `EnhanceForwardProgress` criteri consentono alle attività di proseguire il lavoro ed è utili quando è necessario pianificare l'equità tra i gruppi di pianificazione.

## <a name="example"></a>Esempio

Questo esempio viene definito il `work_yield_agent` classe che deriva da [Concurrency:: Agent](../../parallel/concrt/reference/agent-class.md). Il `work_yield_agent` classe esegue un'unità di lavoro, restituisce il contesto corrente ed esegue quindi un'altra unità di lavoro. L'agente utilizza il [Concurrency:: Wait](reference/concurrency-namespace-functions.md#wait) funzione cooperativo il contesto corrente in modo che altri contesti eseguibili.

Questo esempio vengono creati quattro `work_yield_agent` oggetti. Per illustrare come impostare i criteri dell'utilità di pianificazione per influenzare l'ordine in cui vengono eseguiti gli agenti, l'esempio associa le prime due agenti con un gruppo di pianificazione e gli altri due agenti con un altro gruppo di pianificazione. L'esempio Usa la [concurrency::CurrentScheduler::CreateScheduleGroup](reference/currentscheduler-class.md#createschedulegroup) metodo per creare il [Concurrency:: ScheduleGroup](../../parallel/concrt/reference/schedulegroup-class.md) oggetti. L'esempio esegue tutti e quattro gli agenti due volte, ogni volta con un criterio di pianificazione diverso.

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

Entrambi i criteri producono la stessa sequenza di eventi. Tuttavia, il criterio che utilizza `EnhanceScheduleGroupLocality` avvia entrambi gli agenti che fanno parte del primo gruppo di pianificazione prima di avviare gli agenti che fanno parte del secondo gruppo. Il criterio che usa `EnhanceForwardProgress` avvia un agente dal primo gruppo e quindi avvia l'agente prima del secondo gruppo.

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `scheduling-protocol.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**/EHsc CL.exe pianificazione-protocol.cpp**

## <a name="see-also"></a>Vedere anche

[Gruppi di pianificazione](../../parallel/concrt/schedule-groups.md)<br/>
[Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)

