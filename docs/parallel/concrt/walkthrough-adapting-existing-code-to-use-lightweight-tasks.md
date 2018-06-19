---
title: "Procedura dettagliata: Adattamento del codice esistente per l'uso di attività leggere | Documenti Microsoft"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- using lightweight tasks [Concurrency Runtime]
- lightweight tasks, using [Concurrency Runtime]
ms.assetid: 1edfe818-d274-46de-bdd3-e92967c9bbe0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c4fe3bb4b576bd1f9160b4a3cdc3142be5cdff05
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33688544"
---
# <a name="walkthrough-adapting-existing-code-to-use-lightweight-tasks"></a>Procedura dettagliata: Adattamento del codice esistente per l'uso di attività leggere
In questo argomento viene illustrato come adattare il codice esistente che usa l'API di Windows per creare ed eseguire un thread per l'utilizzo di un'attività leggera.  
  
 Oggetto *attività leggera* è un'attività pianificata direttamente da un [Concurrency:: Scheduler](../../parallel/concrt/reference/scheduler-class.md) o [Concurrency:: ScheduleGroup](../../parallel/concrt/reference/schedulegroup-class.md) oggetto. Le attività leggere sono utili quando si adatta il codice esistente per usare la funzionalità di pianificazione del runtime di concorrenza.  
  
## <a name="prerequisites"></a>Prerequisiti  
 Prima di iniziare questa procedura dettagliata, leggere l'argomento [utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md).  
  
## <a name="example"></a>Esempio  
  
### <a name="description"></a>Descrizione  
 Nell'esempio seguente viene illustrato l'utilizzo tipico dell'API di Windows per creare ed eseguire un thread. Questo esempio viene utilizzato il [CreateThread](http://msdn.microsoft.com/library/windows/desktop/ms682453) funzione da chiamare il `MyThreadFunction` in un thread separato.  
  
### <a name="code"></a>Codice  
 [!code-cpp[concrt-windows-threads#1](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_1.cpp)]  
  
### <a name="comments"></a>Commenti  
 Questo esempio produce il seguente output:  
  
```Output  
Parameters = 50, 100  
```  
  
 La procedura seguente viene illustrato come adattare l'esempio di codice per utilizzare il Runtime di concorrenza per eseguire la stessa attività.  
  
### <a name="to-adapt-the-example-to-use-a-lightweight-task"></a>Per adattare l'esempio per l'utilizzo di un'attività leggera  
  
1.  Aggiungere un `#include` direttiva concrt. h il file di intestazione.  
  
 [!code-cpp[concrt-migration-lwt#2](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_2.cpp)]  
  
2.  Aggiungere un `using` direttiva per il `concurrency` dello spazio dei nomi.  
  
 [!code-cpp[concrt-migration-lwt#3](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_3.cpp)]  
  
3.  Modificare la dichiarazione di `MyThreadFunction` per utilizzare il `__cdecl` la convenzione di chiamata e restituire `void`.  
  
 [!code-cpp[concrt-migration-lwt#4](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_4.cpp)]  
  
4.  Modificare il `MyData` struttura per includere un [Concurrency:: event](../../parallel/concrt/reference/event-class.md) oggetto che segnala all'applicazione principale il completamento di attività.  
  
 [!code-cpp[concrt-migration-lwt#5](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_5.cpp)]  
  
5.  Sostituire la chiamata a `CreateThread` con una chiamata al [concurrency::CurrentScheduler::ScheduleTask](reference/currentscheduler-class.md#scheduletask) metodo.  

  
 [!code-cpp[concrt-migration-lwt#6](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_6.cpp)]  
  

6.  Sostituire la chiamata a `WaitForSingleObject` con una chiamata al [concurrency::event::wait](reference/event-class.md#wait) metodo per attendere il completamento dell'attività.  

 [!code-cpp[concrt-migration-lwt#7](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_7.cpp)]  
  
7.  Rimuovere la chiamata a `CloseHandle`.  
  
8.  Modificare la firma della definizione di `MyThreadFunction` per corrispondere al passaggio 3.  
  
 [!code-cpp[concrt-migration-lwt#8](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_8.cpp)]  
  
9. Alla fine del `MyThreadFunction` funzione, chiamare il [concurrency::event::set](reference/event-class.md#set) metodo per segnalare all'applicazione principale il completamento di attività.  
  
 [!code-cpp[concrt-migration-lwt#9](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_9.cpp)]  
  
10. Rimuovere il `return` from dell'istruzione `MyThreadFunction`.  
  
## <a name="example"></a>Esempio  
  
### <a name="description"></a>Descrizione  
 Nell'esempio seguente viene completato viene illustrato il codice che usa un'attività leggera per chiamare il `MyThreadFunction` (funzione).  
  
### <a name="code"></a>Codice  
 [!code-cpp[concrt-migration-lwt#1](../../parallel/concrt/codesnippet/cpp/walkthrough-adapting-existing-code-to-use-lightweight-tasks_10.cpp)]  
  
### <a name="comments"></a>Commenti  
  
## <a name="see-also"></a>Vedere anche  
 [Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)   
 [Classe Scheduler](../../parallel/concrt/reference/scheduler-class.md)
