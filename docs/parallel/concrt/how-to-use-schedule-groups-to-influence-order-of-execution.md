---
title: "Procedura: utilizzare i gruppi di pianificazione per influenzare l'ordine di esecuzione | Documenti Microsoft"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- schedule groups, using [Concurrency Runtime]
- using schedule groups [Concurrency Runtime]
ms.assetid: 73124194-fc3a-491e-a23f-fbd7b5a4455c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c41617f562a0abefdecf74d52e7a886ad6326f9e
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33691196"
---
# <a name="how-to-use-schedule-groups-to-influence-order-of-execution"></a>Procedura: Usare i gruppi di pianificazione per influenzare l'ordine di esecuzione
Nel Runtime di concorrenza, l'ordine in cui viene pianificata l'attività è non deterministico. Tuttavia, è possibile utilizzare i criteri di pianificazione per influenzare l'ordine di esecuzione delle attività. In questo argomento viene illustrato come utilizzare i gruppi di pianificazione con il [Concurrency:: SchedulingProtocol](reference/concurrency-namespace-enums.md#policyelementkey) criteri dell'utilità di pianificazione per influenzare l'ordine di esecuzione delle attività.  

  
 Nell'esempio viene eseguito un set di attività due volte, ciascuna con un criterio di pianificazione diversi. Entrambi i criteri di limitare il numero massimo di risorse di elaborazione a due. La prima esecuzione vengono utilizzati il `EnhanceScheduleGroupLocality` criteri, ovvero l'impostazione predefinita e nella seconda vengono utilizzati il `EnhanceForwardProgress` criteri. Sotto il `EnhanceScheduleGroupLocality` criteri, l'utilità di pianificazione esegue tutte le attività in un gruppo di pianificazione fino a quando non viene completata o la restituzione di ogni attività. Sotto il `EnhanceForwardProgress` criteri, l'utilità di pianificazione consente di spostare il successivo gruppo di pianificazione in modo round robin dopo completamento o la restituzione di una sola operazione.  
  
 Quando ogni gruppo di pianificazione contiene attività correlate, il `EnhanceScheduleGroupLocality` di criteri risultante in genere un miglioramento delle prestazioni poiché la località della cache viene mantenuta tra attività. Il `EnhanceForwardProgress` criteri consentono alle attività di stato di avanzamento ed è utili quando è necessario pianificare l'equità tra gruppi di pianificazione.  
  
## <a name="example"></a>Esempio  
 Questo esempio viene definito il `work_yield_agent` classe che deriva da [Concurrency:: Agent](../../parallel/concrt/reference/agent-class.md). La `work_yield_agent` classe esegue un'unità di lavoro, restituisce il contesto corrente e quindi esegue un'altra unità di lavoro. L'agente utilizza il [Concurrency:: Wait](reference/concurrency-namespace-functions.md#wait) funzione in modo cooperativo il contesto corrente in modo che sia possono eseguire altri contesti.  
  
 Questo esempio vengono creati quattro `work_yield_agent` oggetti. Per illustrare come impostare i criteri dell'utilità di pianificazione per influenzare l'ordine in cui eseguire gli agenti, nell'esempio associa i primi due agenti a un gruppo di pianificazione e gli altri due agenti con un altro gruppo di pianificazione. Nell'esempio viene utilizzato il [concurrency::CurrentScheduler::CreateScheduleGroup](reference/currentscheduler-class.md#createschedulegroup) metodo per creare il [Concurrency:: ScheduleGroup](../../parallel/concrt/reference/schedulegroup-class.md) oggetti. L'esempio esegue tutti e quattro gli agenti due volte, ogni volta con diversi criteri di pianificazione.  
  
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
  
 Entrambi i criteri di generare la stessa sequenza di eventi. Tuttavia, i criteri che utilizzano `EnhanceScheduleGroupLocality` entrambi gli agenti che fanno parte del primo gruppo di pianificazione prima di avviare gli agenti che fanno parte del secondo gruppo di avvio. I criteri che utilizzano `EnhanceForwardProgress` avviano un agente del primo gruppo e quindi avvia l'agente prima del secondo gruppo.  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `scheduling-protocol.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **/EHsc CL.exe pianificazione-protocol.cpp**  
  
## <a name="see-also"></a>Vedere anche  
 [Gruppi di pianificazione](../../parallel/concrt/schedule-groups.md)   
 [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)

