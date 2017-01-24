---
title: "Procedura dettagliata: Adattamento del codice esistente per l&#39;uso di attivit&#224; leggere | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "utilizzo di attività leggere [Runtime di concorrenza]"
  - "attività leggere, uso [Runtime di concorrenza]"
ms.assetid: 1edfe818-d274-46de-bdd3-e92967c9bbe0
caps.latest.revision: 14
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura dettagliata: Adattamento del codice esistente per l&#39;uso di attivit&#224; leggere
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato come adattare il codice esistente che utilizza l'API Windows per creare ed eseguire un thread per utilizzare un'attività leggera.  
  
 Per *attività leggera* si intende un'attività che si pianifica direttamente da un oggetto [concurrency::Scheduler](../../parallel/concrt/reference/scheduler-class.md) o [concurrency::ScheduleGroup](../../parallel/concrt/reference/schedulegroup-class.md).  Le attività leggere sono utili quando si adatta il codice esistente per utilizzare la funzionalità di pianificazione del runtime di concorrenza.  
  
## Prerequisiti  
 Prima di iniziare questa procedura dettagliata, leggere l'argomento [Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md).  
  
## Esempio  
  
### Descrizione  
 Nell'esempio seguente viene illustrato l'utilizzo tipico dell'API Windows per creare ed eseguire un thread.  In questo esempio viene utilizzata la funzione [CreateThread](http://msdn.microsoft.com/library/windows/desktop/ms682453) per chiamare `MyThreadFunction` su un thread separato.  
  
### Codice  
 [!code-cpp[concrt-windows-threads#1](../../parallel/concrt/codesnippet/CPP/walkthrough-adapting-existing-code-to-use-lightweight-tasks_1.cpp)]  
  
### Commenti  
 Questo esempio produce l'output che segue.  
  
  **Parameters \= 50, 100** Nei passaggi seguenti viene illustrato come adattare l'esempio di codice per l'utilizzo del runtime di concorrenza per eseguire la stessa attività.  
  
### Per adattare l'esempio per l'utilizzo di un'attività leggera  
  
1.  Aggiungere una direttiva `#include` per file di intestazione concrt.h.  
  
     [!code-cpp[concrt-migration-lwt#2](../../parallel/concrt/codesnippet/CPP/walkthrough-adapting-existing-code-to-use-lightweight-tasks_2.cpp)]  
  
2.  Aggiungere una direttiva `using` per lo spazio dei nomi `concurrency`.  
  
     [!code-cpp[concrt-migration-lwt#3](../../parallel/concrt/codesnippet/CPP/walkthrough-adapting-existing-code-to-use-lightweight-tasks_3.cpp)]  
  
3.  Modificare la dichiarazione di `MyThreadFunction` in modo da utilizzare la convenzione di chiamata `__cdecl` e restituire `void`.  
  
     [!code-cpp[concrt-migration-lwt#4](../../parallel/concrt/codesnippet/CPP/walkthrough-adapting-existing-code-to-use-lightweight-tasks_4.cpp)]  
  
4.  Modificare la struttura `MyData` in modo da includere un oggetto [concurrency::event](../../parallel/concrt/reference/event-class.md) che segnali all'applicazione principale il completamento dell'attività.  
  
     [!code-cpp[concrt-migration-lwt#5](../../parallel/concrt/codesnippet/CPP/walkthrough-adapting-existing-code-to-use-lightweight-tasks_5.cpp)]  
  
5.  Sostituire la chiamata a `CreateThread` con una chiamata al metodo [concurrency::CurrentScheduler::ScheduleTask](../Topic/CurrentScheduler::ScheduleTask%20Method.md).  
  
     [!code-cpp[concrt-migration-lwt#6](../../parallel/concrt/codesnippet/CPP/walkthrough-adapting-existing-code-to-use-lightweight-tasks_6.cpp)]  
  
6.  Sostituire la chiamata a `WaitForSingleObject` con una chiamata al metodo [concurrency::event::wait](../Topic/event::wait%20Method.md) per attendere il completamento dell'attività.  
  
     [!code-cpp[concrt-migration-lwt#7](../../parallel/concrt/codesnippet/CPP/walkthrough-adapting-existing-code-to-use-lightweight-tasks_7.cpp)]  
  
7.  Rimuovere la chiamata a `CloseHandle`.  
  
8.  Modificare la firma della definizione di `MyThreadFunction` in modo da corrispondere al passaggio 3.  
  
     [!code-cpp[concrt-migration-lwt#8](../../parallel/concrt/codesnippet/CPP/walkthrough-adapting-existing-code-to-use-lightweight-tasks_8.cpp)]  
  
9. Al termina della funzione `MyThreadFunction`, chiamare il metodo [concurrency::event::set](../Topic/event::set%20Method.md) per segnalare all'applicazione principale il completamento dell'attività.  
  
     [!code-cpp[concrt-migration-lwt#9](../../parallel/concrt/codesnippet/CPP/walkthrough-adapting-existing-code-to-use-lightweight-tasks_9.cpp)]  
  
10. Rimuovere l'istruzione `return` da `MyThreadFunction`.  
  
## Esempio  
  
### Descrizione  
 Nell'esempio completato seguente viene illustrato il codice che utilizza un'attività leggera per chiamare la funzione `MyThreadFunction`.  
  
### Codice  
 [!code-cpp[concrt-migration-lwt#1](../../parallel/concrt/codesnippet/CPP/walkthrough-adapting-existing-code-to-use-lightweight-tasks_10.cpp)]  
  
### Commenti  
  
## Vedere anche  
 [Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)   
 [Classe Scheduler](../../parallel/concrt/reference/scheduler-class.md)