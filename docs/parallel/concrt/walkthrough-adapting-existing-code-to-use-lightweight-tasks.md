---
title: "Procedura dettagliata: Adattamento del codice esistente per l'uso di attività leggere"
ms.date: 11/04/2016
helpviewer_keywords:
- using lightweight tasks [Concurrency Runtime]
- lightweight tasks, using [Concurrency Runtime]
ms.assetid: 1edfe818-d274-46de-bdd3-e92967c9bbe0
ms.openlocfilehash: a0e724ff6f43dc0c888e787350f4841f14383f14
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50654502"
---
# <a name="walkthrough-adapting-existing-code-to-use-lightweight-tasks"></a>Procedura dettagliata: Adattamento del codice esistente per l'uso di attività leggere

In questo argomento viene illustrato come adattare il codice esistente che usa l'API di Windows per creare ed eseguire un thread per l'uso di un'attività leggera.

Oggetto *attività leggera* è un'attività pianificata direttamente da un [Concurrency:: Scheduler](../../parallel/concrt/reference/scheduler-class.md) oppure [Concurrency:: ScheduleGroup](../../parallel/concrt/reference/schedulegroup-class.md) oggetto. Le attività leggere sono utili quando si adatta il codice esistente per usare la funzionalità di pianificazione del runtime di concorrenza.

## <a name="prerequisites"></a>Prerequisiti

Prima di iniziare questa procedura dettagliata, leggere l'argomento [utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md).

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

L'esempio seguente illustra l'utilizzo tipico dell'API Windows per creare ed eseguire un thread. Questo esempio Usa la [CreateThread](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-createthread) funzione da chiamare il `MyThreadFunction` su un thread separato.

### <a name="code"></a>Codice

[!code-cpp[concrt-windows-threads#1](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_1.cpp)]

### <a name="comments"></a>Commenti

Questo esempio produce il seguente output:

```Output
Parameters = 50, 100
```

La procedura seguente viene illustrato come adattare l'esempio di codice per usare il Runtime di concorrenza per eseguire la stessa attività.

### <a name="to-adapt-the-example-to-use-a-lightweight-task"></a>Adattare l'esempio per usare un'attività leggera

1. Aggiungere un `#include` direttiva concrt. h i file di intestazione.

[!code-cpp[concrt-migration-lwt#2](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_2.cpp)]

1. Aggiungere un `using` direttiva per il `concurrency` dello spazio dei nomi.

[!code-cpp[concrt-migration-lwt#3](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_3.cpp)]

1. Modificare la dichiarazione del `MyThreadFunction` usare il `__cdecl` convenzione di chiamata e restituire `void`.

[!code-cpp[concrt-migration-lwt#4](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_4.cpp)]

1. Modificare il `MyData` struttura per includere una [Concurrency:: event](../../parallel/concrt/reference/event-class.md) oggetti che segnala all'applicazione principale che l'attività è completata.

[!code-cpp[concrt-migration-lwt#5](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_5.cpp)]

1. Sostituire la chiamata a `CreateThread` con una chiamata per il [concurrency::CurrentScheduler::ScheduleTask](reference/currentscheduler-class.md#scheduletask) (metodo).

[!code-cpp[concrt-migration-lwt#6](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_6.cpp)]

1. Sostituire la chiamata a `WaitForSingleObject` con una chiamata per il [concurrency::event::wait](reference/event-class.md#wait) metodo per attendere il completamento dell'attività.

[!code-cpp[concrt-migration-lwt#7](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_7.cpp)]

1. Rimuovere la chiamata a `CloseHandle`.

1. Modificare la firma della definizione di `MyThreadFunction` per corrispondere al passaggio 3.

[!code-cpp[concrt-migration-lwt#8](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_8.cpp)]

9. Alla fine del `MyThreadFunction` funzionare, chiamare il [concurrency::event::set](reference/event-class.md#set) metodo per segnalare all'applicazione principale il completamento di attività.

[!code-cpp[concrt-migration-lwt#9](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_9.cpp)]

10. Rimuovere il `return` istruzione da `MyThreadFunction`.

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

L'esempio completo seguente illustra il codice che usa un'attività leggera per chiamare il `MyThreadFunction` (funzione).

### <a name="code"></a>Codice

[!code-cpp[concrt-migration-lwt#1](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_10.cpp)]

### <a name="comments"></a>Commenti

## <a name="see-also"></a>Vedere anche

[Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)<br/>
[Classe Scheduler](../../parallel/concrt/reference/scheduler-class.md)
