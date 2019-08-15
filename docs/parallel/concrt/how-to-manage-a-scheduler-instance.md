---
title: "Procedura: Gestire un'istanza dell'utilità di pianificazione"
ms.date: 11/04/2016
helpviewer_keywords:
- managing a scheduler instance [Concurrency Runtime]
- scheduler instances, managing [Concurrency Runtime]
ms.assetid: 2cc804f0-5ff3-498b-97f1-a9f67a005448
ms.openlocfilehash: f402e82a18f7b804f2c25ebf0a4392d19694d25c
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69510522"
---
# <a name="how-to-manage-a-scheduler-instance"></a>Procedura: Gestire un'istanza dell'utilità di pianificazione

Le istanze dell'utilità di pianificazione consentono di associare criteri di pianificazione specifici a diversi tipi di carichi di lavoro. Questo argomento contiene due esempi di base che illustrano come creare e gestire un'istanza dell'utilità di pianificazione.

Negli esempi vengono create le utilità di pianificazione che utilizzano i criteri dell'utilità di pianificazione predefiniti. Per un esempio in cui viene creata un'utilità di pianificazione che usa un criterio [personalizzato, vedere Procedura: Specificare criteri](../../parallel/concrt/how-to-specify-specific-scheduler-policies.md)dell'utilità di pianificazione specifici.

### <a name="to-manage-a-scheduler-instance-in-your-application"></a>Per gestire un'istanza dell'utilità di pianificazione nell'applicazione

1. Creare un oggetto [Concurrency:: SchedulerPolicy](../../parallel/concrt/reference/schedulerpolicy-class.md) che contiene i valori dei criteri per l'utilità di pianificazione da utilizzare.

1. Chiamare il metodo [Concurrency:: CurrentScheduler:: create](reference/currentscheduler-class.md#create) o il metodo Concurrency [:: Scheduler:: create](reference/scheduler-class.md#create) per creare un'istanza dell'utilità di pianificazione.

   Se si usa il `Scheduler::Create` metodo, chiamare il metodo Concurrency [:: Scheduler:: Connetti](reference/scheduler-class.md#attach) quando è necessario associare l'utilità di pianificazione al contesto corrente.

1. Chiamare la funzione [CreateEvent](/windows/win32/api/synchapi/nf-synchapi-createeventw) per creare un handle per un oggetto evento di reimpostazione automatica non segnalato.

1. Passare l'handle all'oggetto evento appena creato per il metodo Concurrency [:: CurrentScheduler:: RegisterShutdownEvent](reference/currentscheduler-class.md#registershutdownevent) o il metodo Concurrency [:: Scheduler:: RegisterShutdownEvent](reference/scheduler-class.md#registershutdownevent) . In questo modo viene registrato l'evento da impostare quando l'utilità di pianificazione viene distrutta.

1. Eseguire le attività che si desidera vengano pianificate dall'utilità di pianificazione corrente.

1. Chiamare il metodo [Concurrency:: CurrentScheduler::D etach](reference/currentscheduler-class.md#detach) per scollegare l'utilità di pianificazione corrente e ripristinare l'utilità di pianificazione precedente come quella corrente.

   Se si usa il `Scheduler::Create` metodo, chiamare il metodo Concurrency [:: Scheduler:: Release](reference/scheduler-class.md#release) per decrementare il conteggio dei `Scheduler` riferimenti dell'oggetto.

1. Passare l'handle all'evento alla funzione [WaitForSingleObject](/windows/win32/api/synchapi/nf-synchapi-waitforsingleobject) per attendere l'arresto dell'utilità di pianificazione.

1. Chiamare la funzione [CloseHandle](/windows/win32/api/handleapi/nf-handleapi-closehandle) per chiudere l'handle per l'oggetto evento.

## <a name="example"></a>Esempio

Nel codice seguente vengono illustrati due modi per gestire un'istanza dell'utilità di pianificazione. Ogni esempio USA innanzitutto l'utilità di pianificazione predefinita per eseguire un'attività che stampa l'identificatore univoco dell'utilità di pianificazione corrente. In ogni esempio viene quindi utilizzata un'istanza dell'utilità di pianificazione per eseguire nuovamente la stessa attività. Infine, in ogni esempio viene ripristinata l'utilità di pianificazione predefinita come quella corrente ed eseguita una volta l'attività.

Nel primo esempio viene utilizzata la classe [Concurrency:: CurrentScheduler](../../parallel/concrt/reference/currentscheduler-class.md) per creare un'istanza dell'utilità di pianificazione e associarla al contesto corrente. Nel secondo esempio viene utilizzata la classe [Concurrency:: Scheduler](../../parallel/concrt/reference/scheduler-class.md) per eseguire la stessa attività. In genere, `CurrentScheduler` la classe viene utilizzata per lavorare con l'utilità di pianificazione corrente. Il secondo esempio, che usa la `Scheduler` classe, è utile quando si vuole controllare quando l'utilità di pianificazione è associata al contesto corrente o quando si vuole associare utilità di pianificazione specifiche a attività specifiche.

[!code-cpp[concrt-scheduler-instance#1](../../parallel/concrt/codesnippet/cpp/how-to-manage-a-scheduler-instance_1.cpp)]

Questo esempio produce il seguente output:

```Output
Using CurrentScheduler class...

Current scheduler id: 0
Creating and attaching scheduler...
Current scheduler id: 1
Detaching scheduler...
Current scheduler id: 0

Using Scheduler class...

Current scheduler id: 0
Creating scheduler...
Attaching scheduler...
Current scheduler id: 2
Detaching scheduler...
Current scheduler id: 0
```

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `scheduler-instance.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

**CL. exe/EHsc scheduler-instance. cpp**

## <a name="see-also"></a>Vedere anche

[Istanze dell'utilità di pianificazione](../../parallel/concrt/scheduler-instances.md)<br/>
[Procedura: Definire criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-specify-specific-scheduler-policies.md)
