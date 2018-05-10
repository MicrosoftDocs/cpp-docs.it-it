---
title: Attività leggere | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- lightweight tasks
ms.assetid: b6dcfc7a-9fa9-4144-96a6-2845ea272017
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d602f83cfe2da6bc1506e07720d3ef021ebce04a
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="lightweight-tasks"></a>Attività leggere
Questo documento descrive il ruolo delle attività leggere nel Runtime di concorrenza. Oggetto *attività leggera* è un'attività pianificata direttamente da un `concurrency::Scheduler` o `concurrency::ScheduleGroup` oggetto. Un'attività leggera è simile alla funzione specificata dall'utente per l'API Windows [CreateThread](http://msdn.microsoft.com/library/windows/desktop/ms682453) (funzione). Pertanto, le attività leggere sono utili quando si adatta il codice esistente per usare la funzionalità di pianificazione del Runtime di concorrenza. Il Runtime di concorrenza stesso utilizza attività leggere per pianificare gli agenti asincroni e inviare messaggi tra blocchi dei messaggi asincroni.  
  
> [!TIP]
>  Il runtime di concorrenza fornisce un'utilità di pianificazione predefinita, pertanto non è necessario crearne una nell'applicazione. Poiché l'utilità di pianificazione consente di ottimizzare le prestazioni delle applicazioni, è consigliabile iniziare con il [libreria PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md) o [libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md) se si è familiarità con il Runtime di concorrenza.  
  
 Attività leggere implicano meno sovraccarico gli agenti asincroni e i gruppi di attività. Ad esempio, il runtime non viene informato quando viene completata un'attività leggera. Inoltre, il runtime di rilevare o gestire le eccezioni generate da un'attività leggera. Per ulteriori informazioni sulla gestione delle eccezioni e le attività, vedere [eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).  
  
 Per la maggior parte delle attività, si consiglia di utilizzare funzionalità più affidabile, ad esempio gruppi di attività e gli algoritmi paralleli in quanto consentono più facilmente suddivide attività complesse in più semplici. Per ulteriori informazioni sui gruppi di attività, vedere [parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md). Per ulteriori informazioni sugli algoritmi paralleli, vedere [gli algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).  
  
 Per creare un'attività leggera, chiamare il [concurrency::ScheduleGroup::ScheduleTask](reference/schedulegroup-class.md#scheduletask), [concurrency::CurrentScheduler::ScheduleTask](reference/currentscheduler-class.md#scheduletask), o [concurrency::Scheduler::ScheduleTask ](reference/scheduler-class.md#scheduletask) metodo. Per attendere il completamento di un'attività leggera, attendere che l'utilità di pianificazione padre di arrestare o utilizzare un meccanismo di sincronizzazione, ad esempio un [Concurrency:: event](../../parallel/concrt/reference/event-class.md) oggetto.  
  
## <a name="example"></a>Esempio  
 Per un esempio che illustra come adattare il codice esistente per l'utilizzo di un'attività leggera, vedere [procedura dettagliata: adattamento del codice esistente per utilizzare le attività leggere](../../parallel/concrt/walkthrough-adapting-existing-code-to-use-lightweight-tasks.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)   
 [Procedura dettagliata: adattamento del codice esistente per l'uso di attività leggere](../../parallel/concrt/walkthrough-adapting-existing-code-to-use-lightweight-tasks.md)

