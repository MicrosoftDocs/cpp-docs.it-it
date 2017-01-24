---
title: "Procedura: Gestire un&#39;istanza dell&#39;utilit&#224; di pianificazione | Microsoft Docs"
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
  - "gestione di istanze dell'utilità di pianificazione [Runtime di concorrenza]"
  - "istanze dell'utilità di pianificazione, gestione [Runtime di concorrenza]"
ms.assetid: 2cc804f0-5ff3-498b-97f1-a9f67a005448
caps.latest.revision: 15
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: Gestire un&#39;istanza dell&#39;utilit&#224; di pianificazione
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le istanze dell'utilità di pianificazione consentono di associare criteri di pianificazione specifici a diversi tipi di carichi di lavoro.  In questo argomento vengono forniti due esempi di base che illustrano come creare e gestire un'istanza dell'utilità di pianificazione.  
  
 Negli esempi vengono create utilità di pianificazione che utilizzano i criteri dell'utilità di pianificazione predefiniti.  Per un esempio in cui viene creata un'utilità di pianificazione che utilizza criteri personalizzati, vedere [Procedura: Definire criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-specify-specific-scheduler-policies.md).  
  
### Per gestire un'istanza dell'utilità di pianificazione nell'applicazione  
  
1.  Creare un oggetto [concurrency::SchedulerPolicy](../../parallel/concrt/reference/schedulerpolicy-class.md) contenente i valori dei criteri che devono essere utilizzati dall'utilità di pianificazione.  
  
2.  Chiamare il metodo [concurrency::CurrentScheduler::Create](../Topic/CurrentScheduler::Create%20Method.md) o il metodo [concurrency::Scheduler::Create](../Topic/Scheduler::Create%20Method.md) per creare un'istanza dell'utilità di pianificazione.  
  
     Se si utilizza il metodo `Scheduler::Create`, chiamare il metodo [concurrency::Scheduler::Attach](../Topic/Scheduler::Attach%20Method.md) quando è necessario associare l'utilità di pianificazione al contesto corrente.  
  
3.  Chiamare la funzione [CreateEvent](http://msdn.microsoft.com/library/windows/desktop/ms682396) per creare un handle per un oggetto evento di reimpostazione automatica non segnalato.  
  
4.  Passare l'handle per l'oggetto evento appena creato al metodo [concurrency::CurrentScheduler::RegisterShutdownEvent](../Topic/CurrentScheduler::RegisterShutdownEvent%20Method.md) o al metodo [concurrency::Scheduler::RegisterShutdownEvent](../Topic/Scheduler::RegisterShutdownEvent%20Method.md).  In questo modo viene registrato l'evento da impostare quando viene eliminata l'utilità di pianificazione.  
  
5.  Eseguire le attività che si desidera vengano pianificate dall'utilità di pianificazione corrente.  
  
6.  Chiamare il metodo [concurrency::CurrentScheduler::Detach](../Topic/CurrentScheduler::Detach%20Method.md) per disconnettere l'utilità di pianificazione corrente e ripristinare l'utilità di pianificazione precedente come utilità corrente.  
  
     Se si utilizza il metodo `Scheduler::Create`, chiamare il metodo [concurrency::Scheduler::Release](../Topic/Scheduler::Release%20Method.md) per decrementare il conteggio dei riferimenti dell'oggetto `Scheduler`.  
  
7.  Passare l'handle per l'evento alla funzione [WaitForSingleObject](http://msdn.microsoft.com/library/windows/desktop/ms687032) per attendere la chiusura dell'utilità di pianificazione.  
  
8.  Chiamare la funzione [CloseHandle](http://msdn.microsoft.com/library/windows/desktop/ms724211) per chiudere l'handle per l'oggetto evento.  
  
## Esempio  
 Nel codice seguente vengono illustrati due modi per gestire un'istanza dell'utilità di pianificazione.  In ogni esempio viene innanzitutto utilizzata l'utilità di pianificazione predefinita per eseguire un'attività che stampa l'identificatore univoco dell'utilità di pianificazione corrente.  Viene quindi utilizzata un'istanza dell'utilità di pianificazione per eseguire di nuovo la stessa attività.  Infine, viene ripristinata l'utilità di pianificazione predefinita come utilità corrente e viene eseguita nuovamente l'attività.  
  
 Nel primo esempio viene utilizzata la classe [concurrency::CurrentScheduler](../../parallel/concrt/reference/currentscheduler-class.md) per creare un'istanza dell'utilità di pianificazione e associarla al contesto corrente.  Nel secondo esempio viene utilizzata la classe [concurrency::Scheduler](../../parallel/concrt/reference/scheduler-class.md) per eseguire la stessa attività.  In genere, la classe `CurrentScheduler` viene utilizzata per gestire l'utilità di pianificazione corrente.  Il secondo esempio, in cui viene utilizzata la classe `Scheduler`, è utile se si desidera controllare quando l'utilità di pianificazione viene associata al contesto corrente o se si desidera associare utilità di pianificazione specifiche a specifiche attività.  
  
 [!code-cpp[concrt-scheduler-instance#1](../../parallel/concrt/codesnippet/CPP/how-to-manage-a-scheduler-instance_1.cpp)]  
  
 Questo esempio produce l'output che segue.  
  
  **Using CurrentScheduler class...**  
**Current scheduler id: 0**  
**Creating and attaching scheduler...**  
**Current scheduler id: 1**  
**Detaching scheduler...**  
**Current scheduler id: 0**  
**Using Scheduler class...**  
**Current scheduler id: 0**  
**Creating scheduler...**  
**Attaching scheduler...**  
**Current scheduler id: 2**  
**Detaching scheduler...**  
**Current scheduler id: 0**   
## Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio o incollarlo in un file denominato `scheduler-instance.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe \/EHsc scheduler\-instance.cpp**  
  
## Vedere anche  
 [Istanze dell'utilità di pianificazione](../../parallel/concrt/scheduler-instances.md)   
 [Procedura: Definire criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-specify-specific-scheduler-policies.md)