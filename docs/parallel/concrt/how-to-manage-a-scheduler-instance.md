---
title: "Procedura: gestire un'istanza dell'utilità di pianificazione | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- managing a scheduler instance [Concurrency Runtime]
- scheduler instances, managing [Concurrency Runtime]
ms.assetid: 2cc804f0-5ff3-498b-97f1-a9f67a005448
caps.latest.revision: "15"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 55469ffe0c5473ddda7007655e6f85b4d5822f0d
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="how-to-manage-a-scheduler-instance"></a>Procedura: Gestire un'istanza dell'utilità di pianificazione
Le istanze dell'utilità di pianificazione consentono di associare i criteri di pianificazione specifici a vari tipi di carichi di lavoro. In questo argomento contiene due esempi di base che illustrano come creare e gestire un'istanza dell'utilità di pianificazione.  
  
 Negli esempi vengono create le utilità di pianificazione che utilizzano i criteri dell'utilità di pianificazione predefinita. Per un esempio che crea un'utilità di pianificazione che utilizza un criterio personalizzato, vedere [procedura: specificare criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-specify-specific-scheduler-policies.md).  
  
### <a name="to-manage-a-scheduler-instance-in-your-application"></a>Per gestire un'istanza dell'utilità di pianificazione nell'applicazione  
  
1.  Creare un [SchedulerPolicy](../../parallel/concrt/reference/schedulerpolicy-class.md) oggetto che contiene i criteri di valori per l'utilità di pianificazione da utilizzare.  
  

2.  Chiamare il [concurrency::CurrentScheduler::Create](reference/currentscheduler-class.md#create) metodo o [Concurrency](reference/scheduler-class.md#create) metodo per creare un'istanza dell'utilità di pianificazione.  
  
     Se si utilizza il `Scheduler::Create` metodo, chiamare il [concurrency::Scheduler::Attach](reference/scheduler-class.md#attach) metodo quando è necessario associare l'utilità di pianificazione con il contesto corrente.  
  
3.  Chiamare il [CreateEvent](http://msdn.microsoft.com/library/windows/desktop/ms682396) funzione per creare un handle a un oggetto evento di reimpostazione automatica non segnalato.  
  
4.  Passare l'handle all'oggetto evento appena creato per il [concurrency::CurrentScheduler::RegisterShutdownEvent](reference/currentscheduler-class.md#registershutdownevent) metodo o [concurrency::Scheduler::RegisterShutdownEvent](reference/scheduler-class.md#registershutdownevent) metodo. In questo modo viene registrata l'evento da impostare quando viene eliminato definitivamente l'utilità di pianificazione.  
  
5.  Eseguire le attività che si desidera pianificare l'utilità di pianificazione corrente.  
  
6.  Chiamare il [concurrency::CurrentScheduler::Detach](reference/currentscheduler-class.md#detach) per scollegare l'utilità di pianificazione corrente e ripristinare l'utilità di pianificazione precedente a quella corrente.  
  
     Se si utilizza il `Scheduler::Create` metodo, chiamare il [concurrency::Scheduler::Release](reference/scheduler-class.md#release) metodo per decrementare il conteggio dei riferimenti di `Scheduler` oggetto.  
  
7.  Passare l'handle all'evento per il [WaitForSingleObject](http://msdn.microsoft.com/library/windows/desktop/ms687032) funzione per attendere l'arresto dell'utilità di pianificazione.  
  
8.  Chiamare il [CloseHandle](http://msdn.microsoft.com/library/windows/desktop/ms724211) funzione per chiudere l'handle all'oggetto evento.  
  
## <a name="example"></a>Esempio  
 Il codice seguente mostra due modi per gestire un'istanza dell'utilità di pianificazione. Ogni esempio prima Usa l'utilità di pianificazione predefinita per eseguire un'attività che stampa l'identificatore univoco dell'utilità di pianificazione corrente. Viene quindi utilizzata un'istanza dell'utilità di pianificazione per eseguire nuovamente la stessa attività. Infine, ogni utilità di pianificazione predefinita di quello corrente, quindi esegue l'attività ancora una volta.  
  
 Il primo esempio viene utilizzata la [Concurrency:: CurrentScheduler](../../parallel/concrt/reference/currentscheduler-class.md) classe per creare un'istanza dell'utilità di pianificazione e associarla al contesto corrente. Il secondo esempio viene utilizzato il [Concurrency:: Scheduler](../../parallel/concrt/reference/scheduler-class.md) classe per eseguire la stessa attività. In genere, la `CurrentScheduler` classe è utilizzata in combinazione con l'utilità di pianificazione corrente. Nel secondo esempio, utilizza la `Scheduler` classe, è utile quando si desidera controllare quando l'utilità di pianificazione è associata al contesto corrente o quando si desidera associare utilità di pianificazione specifiche a specifiche attività.  
  
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
  
 **CL.exe /EHsc scheduler-instance. cpp**  
  
## <a name="see-also"></a>Vedere anche  
 [Istanze dell'utilità di pianificazione](../../parallel/concrt/scheduler-instances.md)   
 [Procedura: Definire criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-specify-specific-scheduler-policies.md)

