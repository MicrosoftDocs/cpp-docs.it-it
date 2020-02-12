---
title: Attività leggere
ms.date: 11/04/2016
helpviewer_keywords:
- lightweight tasks
ms.assetid: b6dcfc7a-9fa9-4144-96a6-2845ea272017
ms.openlocfilehash: be417052ffab19c1bc2d2ba6f35094f98e315812
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77141857"
---
# <a name="lightweight-tasks"></a>Attività leggere

Questo documento descrive il ruolo delle attività leggere nel runtime di concorrenza. Un' *attività leggera* è un'attività che viene pianificata direttamente da un oggetto `concurrency::Scheduler` o `concurrency::ScheduleGroup`. Un'attività leggera è simile alla funzione fornita alla funzione [CreateThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createthread) dell'API Windows. Pertanto, le attività leggere sono utili quando si adatta il codice esistente per utilizzare la funzionalità di pianificazione del runtime di concorrenza. Il runtime di concorrenza stesso usa le attività leggere per pianificare gli agenti asincroni e inviare messaggi tra blocchi di messaggi asincroni.

> [!TIP]
> Il runtime di concorrenza fornisce un'utilità di pianificazione predefinita, pertanto non è necessario crearne una nell'applicazione. Poiché il Utilità di pianificazione consente di ottimizzare le prestazioni delle applicazioni, è consigliabile iniziare con la libreria [PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md) o la [libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md) se non si ha familiarità con l'runtime di concorrenza.

Le attività leggere presentano un sovraccarico minore rispetto agli agenti asincroni e ai gruppi di attività. Ad esempio, il runtime non informa l'utente quando viene completata un'attività Lightweight. Inoltre, il runtime non intercetta né gestisce le eccezioni generate da un'attività leggera. Per ulteriori informazioni sulla gestione delle eccezioni e sulle attività leggere, vedere [gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).

Per la maggior parte delle attività, è consigliabile usare funzionalità più solide, ad esempio i gruppi di attività e gli algoritmi paralleli, in quanto consentono di suddividere in modo più semplice le attività complesse in base a quelle più semplici. Per ulteriori informazioni sui gruppi di attività, vedere [parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md). Per ulteriori informazioni sugli algoritmi paralleli, vedere [algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).

Per creare un'attività leggera, chiamare il metodo [Concurrency:: ScheduleGroup:: ScheduleTask](reference/schedulegroup-class.md#scheduletask), [Concurrency:: CurrentScheduler:: ScheduleTask](reference/currentscheduler-class.md#scheduletask)o [Concurrency:: Scheduler:: ScheduleTask](reference/scheduler-class.md#scheduletask) . Per attendere il completamento di un'attività Lightweight, attendere l'arresto dell'utilità di pianificazione padre o utilizzare un meccanismo di sincronizzazione, ad esempio un oggetto [Concurrency:: Event](../../parallel/concrt/reference/event-class.md) .

## <a name="example"></a>Esempio

Per un esempio in cui viene illustrato come adattare il codice esistente per l'utilizzo di un'attività leggera, vedere [procedura dettagliata: adattamento del codice esistente per l'utilizzo di attività semplici](../../parallel/concrt/walkthrough-adapting-existing-code-to-use-lightweight-tasks.md).

## <a name="see-also"></a>Vedere anche

[Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)<br/>
[Procedura dettagliata: adattamento del codice esistente per l'uso di attività leggere](../../parallel/concrt/walkthrough-adapting-existing-code-to-use-lightweight-tasks.md)
