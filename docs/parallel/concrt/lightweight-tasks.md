---
title: "Attivit&#224; leggere | Microsoft Docs"
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
  - "attività leggere"
ms.assetid: b6dcfc7a-9fa9-4144-96a6-2845ea272017
caps.latest.revision: 7
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Attivit&#224; leggere
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo documento viene descritto il ruolo delle attività leggere nel runtime di concorrenza.  Per *attività leggera* si intende un'attività che si pianifica direttamente da un oggetto `concurrency::Scheduler` o `concurrency::ScheduleGroup`.  Un'attività leggera è simile alla funzione specificata per la funzione [CreateThread](http://msdn.microsoft.com/library/windows/desktop/ms682453) dell'API Windows.  Pertanto, le attività leggere sono utili quando si adatta il codice esistente per utilizzare la funzionalità di pianificazione del runtime di concorrenza.  Il runtime di concorrenza stesso utilizza le attività leggere per pianificare gli agenti asincroni e inviare messaggi tra i blocchi dei messaggi asincroni.  
  
> [!TIP]
>  Il runtime di concorrenza fornisce un'utilità di pianificazione predefinita, pertanto non è necessario crearne una nell'applicazione.  Poiché l'utilità di pianificazione consente di ottimizzare le prestazioni delle applicazioni, è consigliabile iniziare con la [PPL \(Parallel Patterns Library\)](../../parallel/concrt/parallel-patterns-library-ppl.md) o la [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md) se non si ha familiarità con il runtime di concorrenza.  
  
 Le attività leggere implicano meno sovraccarico dei gruppi di attività e degli agenti asincroni.  Il runtime, ad esempio, non invia alcuna notifica all'utente quando un'attività leggera viene completata.  Inoltre, il runtime non rileva né gestisce le eccezioni generate da un'attività leggera.  Per ulteriori informazioni sulla gestione delle eccezioni e le attività leggere, vedere [Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).  
  
 Per la maggior parte delle attività, è consigliabile utilizzare funzionalità più affidabili, ad esempio gruppi di attività e algoritmi paralleli, poiché consentono di suddividere più facilmente le attività complesse in attività più semplici.  Per ulteriori informazioni sui gruppi di attività, vedere [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md).  Per ulteriori informazioni sugli algoritmi paralleli, vedere [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).  
  
 Per creare un'attività leggera, chiamare il metodo [concurrency::ScheduleGroup::ScheduleTask](../Topic/ScheduleGroup::ScheduleTask%20Method.md), [concurrency::CurrentScheduler::ScheduleTask](../Topic/CurrentScheduler::ScheduleTask%20Method.md) oppure [concurrency::Scheduler::ScheduleTask](../Topic/Scheduler::ScheduleTask%20Method.md).  Per attendere il completamento di un'attività leggera, attendere la chiusura di un'utilità di pianificazione padre oppure utilizzare un meccanismo di sincronizzazione, ad esempio un oggetto [concurrency::event](../../parallel/concrt/reference/event-class.md).  
  
## Esempio  
 Per un esempio che illustri il modo in cui adattare il codice esistente per utilizzare un'attività leggera, vedere [Procedura dettagliata: Adattamento del codice esistente per l'uso di attività leggere](../../parallel/concrt/walkthrough-adapting-existing-code-to-use-lightweight-tasks.md).  
  
## Vedere anche  
 [Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)   
 [Procedura dettagliata: Adattamento del codice esistente per l'uso di attività leggere](../../parallel/concrt/walkthrough-adapting-existing-code-to-use-lightweight-tasks.md)