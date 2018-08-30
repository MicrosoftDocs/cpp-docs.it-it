---
title: Attività leggere | Microsoft Docs
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
ms.openlocfilehash: 8548412436be6e505c0ea08a2991e6948496f592
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43210284"
---
# <a name="lightweight-tasks"></a>Attività leggere
Questo documento descrive il ruolo di attività leggere nel Runtime di concorrenza. Oggetto *attività leggera* è un'attività pianificata direttamente da un `concurrency::Scheduler` o `concurrency::ScheduleGroup` oggetto. Un'attività leggera simile alla funzione specificata dall'utente per l'API di Windows [CreateThread](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-createthread) (funzione). Di conseguenza, le attività leggere sono utili quando si adatta il codice esistente per usare la funzionalità di pianificazione del Runtime di concorrenza. Il Runtime di concorrenza Usa attività leggere per pianificare gli agenti asincroni e inviano messaggi tra blocchi dei messaggi asincroni.  
  
> [!TIP]
>  Il runtime di concorrenza fornisce un'utilità di pianificazione predefinita, pertanto non è necessario crearne una nell'applicazione. Poiché l'utilità di pianificazione consente di ottimizzare le prestazioni delle applicazioni, è consigliabile iniziare con il [libreria PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md) o nella [Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md) se si è familiarità con il Runtime di concorrenza.  
  
 Attività leggere contengono overhead minore rispetto a agenti asincroni e i gruppi di attività. Ad esempio, il runtime non viene informato quando viene completata un'attività leggera. Inoltre, il runtime non individua né gestire le eccezioni generate da un'attività leggera. Per altre informazioni sulla gestione delle eccezioni e le attività leggere, vedere [gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).  
  
 Per la maggior parte delle attività, si consiglia di usare funzionalità più affidabile, ad esempio i gruppi di attività e gli algoritmi paralleli perché consentono più facilmente suddividere attività complesse in più semplici. Per altre informazioni sui gruppi di attività, vedere [Task Parallelism](../../parallel/concrt/task-parallelism-concurrency-runtime.md). Per altre informazioni sugli algoritmi paralleli, vedere [gli algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).  
  
 Per creare un'attività leggera, chiamare il [concurrency::ScheduleGroup::ScheduleTask](reference/schedulegroup-class.md#scheduletask), [concurrency::CurrentScheduler::ScheduleTask](reference/currentscheduler-class.md#scheduletask), o [concurrency::Scheduler::ScheduleTask ](reference/scheduler-class.md#scheduletask) (metodo). Per attendere il completamento di un'attività leggera, attendere che l'utilità di pianificazione padre arrestare o usare un meccanismo di sincronizzazione, ad esempio un [Concurrency:: event](../../parallel/concrt/reference/event-class.md) oggetto.  
  
## <a name="example"></a>Esempio  
 Per un esempio che illustra come adattare il codice esistente per usare un'attività leggera, vedere [procedura dettagliata: adattamento del codice esistente per usare le attività leggere](../../parallel/concrt/walkthrough-adapting-existing-code-to-use-lightweight-tasks.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)   
 [Procedura dettagliata: adattamento del codice esistente per l'uso di attività leggere](../../parallel/concrt/walkthrough-adapting-existing-code-to-use-lightweight-tasks.md)

