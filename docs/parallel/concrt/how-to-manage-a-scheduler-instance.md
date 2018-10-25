---
title: "Procedura: gestire un'istanza dell'utilità di pianificazione | Microsoft Docs"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- managing a scheduler instance [Concurrency Runtime]
- scheduler instances, managing [Concurrency Runtime]
ms.assetid: 2cc804f0-5ff3-498b-97f1-a9f67a005448
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 97735b5509fb841a8b9b3d8212f4a23514f9d28c
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50057465"
---
# <a name="how-to-manage-a-scheduler-instance"></a>Procedura: Gestire un'istanza dell'utilità di pianificazione

Le istanze dell'utilità di pianificazione consentono di associare i criteri di pianificazione specifici a vari tipi di carichi di lavoro. In questo argomento contiene due esempi di base che illustrano come creare e gestire un'istanza dell'utilità di pianificazione.

Gli esempi creano le utilità di pianificazione che usano i criteri dell'utilità di pianificazione predefinita. Per un esempio che crea un'utilità di pianificazione che utilizza un criterio personalizzato, vedere [procedura: specificare i criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-specify-specific-scheduler-policies.md).

### <a name="to-manage-a-scheduler-instance-in-your-application"></a>Per gestire un'istanza di utilità di pianificazione nell'applicazione

1. Creare un [Concurrency:: SchedulerPolicy](../../parallel/concrt/reference/schedulerpolicy-class.md) oggetto che contiene i criteri di valori per l'utilità di pianificazione da utilizzare.

1. Chiamare il [CurrentScheduler](reference/currentscheduler-class.md#create) metodo o il [Concurrency](reference/scheduler-class.md#create) metodo per creare un'istanza dell'utilità di pianificazione.

   Se si usa la `Scheduler::Create` metodo, chiamare il [concurrency::Scheduler::Attach](reference/scheduler-class.md#attach) metodo quando è necessario associare l'utilità di pianificazione con il contesto corrente.

1. Chiamare il [CreateEvent](/windows/desktop/api/synchapi/nf-synchapi-createeventa) funzione per creare un handle per un oggetto evento di reimpostazione automatica non segnalato.

1. Passare l'handle all'oggetto evento appena creato per il [RegisterShutdownEvent](reference/currentscheduler-class.md#registershutdownevent) metodo o il [concurrency::Scheduler::RegisterShutdownEvent](reference/scheduler-class.md#registershutdownevent) (metodo). Verrà registrato l'evento impostato quando viene eliminato definitivamente l'utilità di pianificazione.

1. Eseguire le attività che si desidera pianificare l'utilità di pianificazione corrente.

1. Chiamare il [concurrency::CurrentScheduler::Detach](reference/currentscheduler-class.md#detach) metodo scollegare l'utilità di pianificazione corrente e ripristinare l'utilità di pianificazione precedente quello corrente.

   Se si usa la `Scheduler::Create` metodo, chiamare il [concurrency::Scheduler::Release](reference/scheduler-class.md#release) metodo per decrementare il conteggio dei riferimenti di `Scheduler` oggetto.

1. Passare l'handle all'evento per il [WaitForSingleObject](/windows/desktop/api/synchapi/nf-synchapi-waitforsingleobject) (funzione) di attesa per l'utilità di pianificazione arrestato.

1. Chiamare il [CloseHandle](https://msdn.microsoft.com/library/windows/desktop/ms724211) (funzione) per chiudere l'handle all'oggetto evento.

## <a name="example"></a>Esempio

Il codice seguente illustra due modi per gestire un'istanza dell'utilità di pianificazione. Ogni esempio prima di tutto Usa l'utilità di pianificazione predefinita per eseguire un'attività che stampa l'identificatore univoco dell'utilità di pianificazione corrente. Ogni esempio quindi utilizza un'istanza dell'utilità di pianificazione per eseguire nuovamente la stessa attività. Infine, ogni esempio ripristina l'utilità di pianificazione predefinita del nodo corrente ed esegue l'attività ancora una volta.

Il primo esempio Usa la [Concurrency:: CurrentScheduler](../../parallel/concrt/reference/currentscheduler-class.md) classe per creare un'istanza dell'utilità di pianificazione e associarlo al contesto corrente. Il secondo esempio Usa la [Concurrency:: Scheduler](../../parallel/concrt/reference/scheduler-class.md) classe per eseguire la stessa attività. In genere, il `CurrentScheduler` classe viene usata per lavorare con l'utilità di pianificazione corrente. Il secondo esempio, che usa il `Scheduler` classe, è utile quando si vuole controllare quando l'utilità di pianificazione è associata al contesto corrente o quando si desidera associare utilità di pianificazione specifiche a specifiche attività.

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

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `scheduler-instance.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**CL.exe /EHsc dell'utilità di pianificazione-Instance. cpp**

## <a name="see-also"></a>Vedere anche

[Istanze dell'utilità di pianificazione](../../parallel/concrt/scheduler-instances.md)<br/>
[Procedura: Definire criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-specify-specific-scheduler-policies.md)

