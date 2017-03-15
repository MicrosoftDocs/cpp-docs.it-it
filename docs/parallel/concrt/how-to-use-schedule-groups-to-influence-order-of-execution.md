---
title: "Procedura: Usare i gruppi di pianificazione per influenzare l&#39;ordine di esecuzione | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gruppi di pianificazione, uso [Runtime di concorrenza]"
  - "utilizzo di gruppi di pianificazione [Runtime di concorrenza]"
ms.assetid: 73124194-fc3a-491e-a23f-fbd7b5a4455c
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Procedura: Usare i gruppi di pianificazione per influenzare l&#39;ordine di esecuzione
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Nel runtime di concorrenza l'ordine in cui vengono pianificate le attività non è deterministico.  Tuttavia, è possibile utilizzare i criteri di pianificazione per influenzare l'ordine di esecuzione delle attività.  In questo argomento viene illustrato come utilizzare i gruppi di pianificazione con i criteri dell'utilità di pianificazione [concurrency::SchedulingProtocol](../Topic/PolicyElementKey%20Enumeration.md) per influenzare l'ordine di esecuzione delle attività.  
  
 Nell'esempio viene eseguito due volte un set di attività, ognuno con criteri di pianificazione diversi.  Entrambi i tipi di criteri limitano il numero massimo di risorse di elaborazione a due.  Nella prima esecuzione vengono utilizzati i criteri `EnhanceScheduleGroupLocality` , ovvero l'impostazione predefinita, mentre nella seconda vengono utilizzati i criteri `EnhanceForwardProgress`.  Con i criteri `EnhanceScheduleGroupLocality` l'utilità di pianificazione esegue tutte le attività di un gruppo di pianificazione finché ogni attività non viene completata o restituita.  Con i criteri `EnhanceForwardProgress` l'utilità di pianificazione si sposta nel gruppo di pianificazione successivo in modo round robin dopo il completamento o la restituzione di una sola l'attività.  
  
 Quando ogni gruppo di pianificazione contiene attività correlate, i criteri `EnhanceScheduleGroupLocality` determinano in genere un miglioramento delle prestazioni poiché la località della cache viene mantenuta tra le attività.  I criteri `EnhanceForwardProgress` consentono alle attività di avanzare e sono utili quando è necessario pianificare equamente le risorse tra i gruppi di pianificazione.  
  
## Esempio  
 In questo esempio viene definita la classe `work_yield_agent`, che deriva da [concurrency::agent](../../parallel/concrt/reference/agent-class.md).  La classe `work_yield_agent` esegue un'unità di lavoro, restituisce il contesto corrente, quindi esegue un'altra unità di lavoro.  L'agente utilizza la funzione [concurrency::wait](../Topic/wait%20Function.md) per restituire cooperativamente il contesto corrente in modo da consentire l'esecuzione di altri contesti.  
  
 In questo esempio vengono creati quattro oggetti `work_yield_agent`.  Per illustrare come impostare i criteri dell'utilità di pianificazione per influenzare l'ordine di esecuzione degli agenti, i primi due agenti vengono associati a un gruppo di pianificazione mentre gli altri due agenti vengono associati a un altro gruppo di pianificazione.  Nell'esempio viene utilizzato il metodo [concurrency::CurrentScheduler::CreateScheduleGroup](../Topic/CurrentScheduler::CreateScheduleGroup%20Method.md) per creare gli oggetti [concurrency::ScheduleGroup](../../parallel/concrt/reference/schedulegroup-class.md).  Tutti e quattro gli agenti vengono eseguiti due volte, ogni volta con criteri di pianificazione diversi.  
  
 [!code-cpp[concrt-scheduling-protocol#1](../../parallel/concrt/codesnippet/CPP/how-to-use-schedule-groups-to-influence-order-of-execution_1.cpp)]  
  
 Questo esempio produce l'output che segue.  
  
  **Using EnhanceScheduleGroupLocality...**  
**group 0,task 0: first loop...**  
**group 0,task 1: first loop...**  
**group 0,task 0: waiting...**  
**group 1,task 0: first loop...**  
**group 0,task 1: waiting...**  
**group 1,task 1: first loop...**  
**group 1,task 0: waiting...**  
**group 0,task 0: second loop...**  
**group 1,task 1: waiting...**  
**group 0,task 1: second loop...**  
**group 0,task 0: finished...**  
**group 1,task 0: second loop...**  
**group 0,task 1: finished...**  
**group 1,task 1: second loop...**  
**group 1,task 0: finished...**  
**group 1,task 1: finished...**  
**Using EnhanceForwardProgress...**  
**group 0,task 0: first loop...**  
**group 1,task 0: first loop...**  
**group 0,task 0: waiting...**  
**group 0,task 1: first loop...**  
**group 1,task 0: waiting...**  
**group 1,task 1: first loop...**  
**group 0,task 1: waiting...**  
**group 0,task 0: second loop...**  
**group 1,task 1: waiting...**  
**group 1,task 0: second loop...**  
**group 0,task 0: finished...**  
**group 0,task 1: second loop...**  
**group 1,task 0: finished...**  
**group 1,task 1: second loop...**  
**group 0,task 1: finished...**  
**group 1,task 1: finished...** Entrambi i tipi di criteri producono la stessa sequenza di eventi.  Tuttavia, i criteri che utilizzano `EnhanceScheduleGroupLocality` avviano entrambi gli agenti che fanno parte del primo gruppo di pianificazione prima di avviare gli agenti che fanno parte del secondo gruppo.  I criteri che utilizzano `EnhanceForwardProgress` avviano un agente del primo gruppo, quindi avviano il primo agente del secondo gruppo.  
  
## Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio o incollarlo in un file denominato `scheduling-protocol.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe \/EHsc scheduling\-protocol.cpp**  
  
## Vedere anche  
 [Gruppi di pianificazione](../../parallel/concrt/schedule-groups.md)   
 [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)