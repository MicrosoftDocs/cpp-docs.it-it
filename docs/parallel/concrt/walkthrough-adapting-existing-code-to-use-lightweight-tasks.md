---
title: "Procedura dettagliata: Adattamento del codice esistente per l'uso di attività leggere"
ms.date: 04/25/2019
helpviewer_keywords:
- using lightweight tasks [Concurrency Runtime]
- lightweight tasks, using [Concurrency Runtime]
ms.assetid: 1edfe818-d274-46de-bdd3-e92967c9bbe0
ms.openlocfilehash: 7ce18b54835b2380d3baee77b00a670351e3279f
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87224916"
---
# <a name="walkthrough-adapting-existing-code-to-use-lightweight-tasks"></a>Procedura dettagliata: Adattamento del codice esistente per l'uso di attività leggere

Questo argomento illustra come adattare il codice esistente che usa l'API Windows per creare ed eseguire un thread per usare un'attività leggera.

Un' *attività leggera* è un'attività che viene pianificata direttamente da un oggetto [Concurrency:: Scheduler](../../parallel/concrt/reference/scheduler-class.md) o [Concurrency:: ScheduleGroup](../../parallel/concrt/reference/schedulegroup-class.md) . Le attività leggere sono utili quando si adatta il codice esistente per usare la funzionalità di pianificazione del runtime di concorrenza.

## <a name="prerequisites"></a>Prerequisiti

Prima di iniziare questa procedura dettagliata, leggere l'argomento [utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato l'utilizzo tipico dell'API Windows per creare ed eseguire un thread. In questo esempio viene utilizzata la funzione [CreateThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createthread) per chiamare l'oggetto `MyThreadFunction` in un thread separato.

### <a name="initial-code"></a>Codice iniziale

[!code-cpp[concrt-windows-threads#1](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_1.cpp)]

Questo esempio produce il seguente output:

```Output
Parameters = 50, 100
```

Nei passaggi seguenti viene illustrato come adattare l'esempio di codice per utilizzare il runtime di concorrenza per eseguire la stessa attività.

### <a name="to-adapt-the-example-to-use-a-lightweight-task"></a>Per adattare l'esempio per l'uso di un'attività leggera

1. Aggiungere una `#include` direttiva per il file di intestazione concrt. h.

[!code-cpp[concrt-migration-lwt#2](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_2.cpp)]

1. Aggiungere una **`using`** direttiva per lo `concurrency` spazio dei nomi.

[!code-cpp[concrt-migration-lwt#3](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_3.cpp)]

1. Modificare la dichiarazione di `MyThreadFunction` in modo da utilizzare la **`__cdecl`** convenzione di chiamata e restituire **`void`** .

[!code-cpp[concrt-migration-lwt#4](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_4.cpp)]

1. Modificare la `MyData` struttura in modo da includere un oggetto [Concurrency:: Event](../../parallel/concrt/reference/event-class.md) che segnala all'applicazione principale che l'attività è stata completata.

[!code-cpp[concrt-migration-lwt#5](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_5.cpp)]

1. Sostituire la chiamata a `CreateThread` con una chiamata al metodo [Concurrency:: CurrentScheduler:: ScheduleTask](reference/currentscheduler-class.md#scheduletask) .

[!code-cpp[concrt-migration-lwt#6](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_6.cpp)]

1. Sostituire la chiamata a `WaitForSingleObject` con una chiamata al metodo [Concurrency:: Event:: wait](reference/event-class.md#wait) per attendere il completamento dell'attività.

[!code-cpp[concrt-migration-lwt#7](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_7.cpp)]

1. Rimuovere la chiamata a `CloseHandle` .

1. Modificare la firma della definizione di `MyThreadFunction` in modo che corrisponda al passaggio 3.

[!code-cpp[concrt-migration-lwt#8](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_8.cpp)]

1. Alla fine della `MyThreadFunction` funzione, chiamare il metodo [Concurrency:: Event:: set](reference/event-class.md#set) per segnalare all'applicazione principale che l'attività è stata completata.

[!code-cpp[concrt-migration-lwt#9](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_9.cpp)]

1. Rimuovere l' **`return`** istruzione da `MyThreadFunction` .

### <a name="completed-code"></a>Codice completato

Nell'esempio completato riportato di seguito viene illustrato il codice che utilizza un'attività Lightweight per chiamare la `MyThreadFunction` funzione.

[!code-cpp[concrt-migration-lwt#1](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_10.cpp)]

## <a name="see-also"></a>Vedere anche

[Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)<br/>
[Classe Scheduler](../../parallel/concrt/reference/scheduler-class.md)
