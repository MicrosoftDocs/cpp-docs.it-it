---
title: Criteri dell'utilità di pianificazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- scheduler policies
ms.assetid: 58fb68bd-4a57-40a8-807b-6edb6f083cd9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7d9c855260df34290d01f1eeeee89e8bfe8988de
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="scheduler-policies"></a>Criteri dell'utilità di pianificazione
Questo documento descrive il ruolo dei criteri dell'utilità di pianificazione nel Runtime di concorrenza. Oggetto *criteri dell'utilità di pianificazione* controlla la strategia utilizzata l'utilità di pianificazione quando gestisce le attività. Ad esempio, si consideri un'applicazione per cui viene richiesto che alcune attività vengano eseguite in corrispondenza di `THREAD_PRIORITY_NORMAL` e altre attività in corrispondenza di `THREAD_PRIORITY_HIGHEST`.  È possibile creare due istanze dell'utilità di pianificazione: una tramite cui viene specificato che i criteri `ContextPriority` devono essere `THREAD_PRIORITY_NORMAL` e un'altra tramite cui viene specificato che gli stessi criteri devono essere `THREAD_PRIORITY_HIGHEST`.  
  
 Utilizzando i criteri dell'utilità di pianificazione, è possibile dividere le risorse di elaborazione disponibili e assegnare un set prestabilito di risorse a ogni utilità di pianificazione. Ad esempio, si consideri un algoritmo parallelo che non è scalabile oltre quattro processori. È possibile creare un criterio di pianificazione che limita le attività per utilizzare contemporaneamente non più di quattro processori.  
  
> [!TIP]
>  Tramite il runtime di concorrenza viene fornita un'utilità di pianificazione predefinita. Di conseguenza, non è necessario crearne una nell'applicazione. Poiché l'utilità di pianificazione consente di ottimizzare le prestazioni delle applicazioni, è consigliabile iniziare con il [libreria PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md) o [libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md) se si è familiarità con il Runtime di concorrenza.  
  
 Quando si utilizza il [concurrency::CurrentScheduler::Create](reference/currentscheduler-class.md#create), [Concurrency](reference/scheduler-class.md#create), o [concurrency::Scheduler::SetDefaultSchedulerPolicy](reference/scheduler-class.md#setdefaultschedulerpolicy) metodo per creare un'istanza dell'utilità di pianificazione, forniscono un [SchedulerPolicy](../../parallel/concrt/reference/schedulerpolicy-class.md) oggetto che contiene una raccolta di coppie chiave-valore che specificano il comportamento dell'utilità di pianificazione. Il `SchedulerPolicy` costruttore accetta un numero variabile di argomenti. Il primo argomento è il numero di elementi dei criteri che si devono specificare. Gli argomenti rimanenti sono coppie chiave-valore per ogni elemento dei criteri. Nell'esempio seguente viene creato un `SchedulerPolicy` oggetto che specifica i tre elementi dei criteri. Nel runtime vengono utilizzati valori predefiniti per le chiavi dei criteri che non sono specificate.  

  
 [!code-cpp[concrt-scheduler-policy#2](../../parallel/concrt/codesnippet/cpp/scheduler-policies_1.cpp)]  
  

 Il [Concurrency:: PolicyElementKey](reference/concurrency-namespace-enums.md#policyelementkey) enumerazione definisce le chiavi dei criteri associate all'utilità di pianificazione. Nella tabella seguente vengono descritte le chiavi dei criteri e il valore predefinito utilizzato dal runtime per ognuno di essi.  
  
|Chiave dei criteri|Descrizione|Valore predefinito|  
|----------------|-----------------|-------------------|  
|`SchedulerKind`|Oggetto [Concurrency:: SchedulerType](reference/concurrency-namespace-enums.md#schedulertype) valore che specifica il tipo di thread da usare per pianificare le attività.|`ThreadScheduler` (utilizzare thread normali). È l'unico valore valido per questa chiave.|  
|`MaxConcurrency`|Un `unsigned int` valore che specifica il numero massimo di risorse di concorrenza che utilizza l'utilità di pianificazione.|[Concurrency::MaxExecutionResources](reference/concurrency-namespace-constants1.md#maxexecutionresources)|  
|`MinConcurrency`|Un `unsigned int` valore che specifica il numero minimo di risorse di concorrenza che utilizza l'utilità di pianificazione.|`1`|  
|`TargetOversubscriptionFactor`|Un `unsigned int` valore che specifica il numero di thread da allocare per ogni risorsa di elaborazione.|`1`|  
|`LocalContextCacheSize`|Un `unsigned int` valore che specifica il numero massimo di contesti che possono essere memorizzati nella cache nella coda locale di ogni processore virtuale.|`8`|  
|`ContextStackSize`|Un `unsigned int` valore che specifica la dimensione dello stack, in kilobyte, da riservare per ogni contesto.|`0` (usare la dimensione predefinita)|  
|`ContextPriority`|Un `int` valore che specifica la priorità di thread di ogni contesto. Può trattarsi di qualsiasi valore che è possibile passare a [SetThreadPriority](http://msdn.microsoft.com/library/windows/desktop/ms686277) o `INHERIT_THREAD_PRIORITY`.|`THREAD_PRIORITY_NORMAL`|  

|`SchedulingProtocol`| Un [Concurrency:: SchedulingProtocolType](reference/concurrency-namespace-enums.md#schedulingprotocoltype) valore che specifica l'algoritmo di pianificazione da utilizzare. |`EnhanceScheduleGroupLocality`|  
|`DynamicProgressFeedback`| Un [Concurrency:: DynamicProgressFeedbackType](reference/concurrency-namespace-enums.md#dynamicprogressfeedbacktype) valore che specifica se ribilanciare le risorse in base alle informazioni di stato di avanzamento basato sulle statistiche.<br /><br /> **Nota** questo criterio non è impostato su `ProgressFeedbackDisabled` perché è riservato per l'utilizzo dal runtime. |`ProgressFeedbackEnabled`|  

  
 Ogni utilità di pianificazione utilizza un proprio criterio durante la programmazione di attività. I criteri associati a un'utilità di pianificazione non influiscono sul comportamento di nessun'altra utilità di pianificazione. Inoltre, non è possibile modificare i criteri dell'utilità di pianificazione dopo aver creato il `Scheduler` oggetto.  
  
> [!IMPORTANT]
>  Utilizzare solo i criteri dell'utilità di pianificazione per controllare gli attributi per i thread creati dal runtime. Non modificare l'affinità o la priorità dei thread creati dal runtime poiché si potrebbe verificare un comportamento non definito.  
  
 Se si crea una esplicitamente, il runtime crea un'utilità di pianificazione predefinita per l'utente. Se si desidera utilizzare l'utilità di pianificazione predefinita nell'applicazione, ma si desidera specificare criteri dell'utilità di pianificazione da utilizzare, chiamare il [concurrency::Scheduler::SetDefaultSchedulerPolicy](reference/scheduler-class.md#setdefaultschedulerpolicy) metodo prima di pianificare il lavoro parallelo. Se non si chiama il `Scheduler::SetDefaultSchedulerPolicy` (metodo), il runtime utilizza i criteri predefiniti i valori dalla tabella.  
  
 Utilizzare il [concurrency::CurrentScheduler::GetPolicy](reference/currentscheduler-class.md#getpolicy) e [concurrency::Scheduler::GetPolicy](reference/scheduler-class.md#getpolicy) metodi per recuperare una copia dei criteri dell'utilità di pianificazione. I valori dei criteri che si ricevano da questi metodi possono differire da valori di criteri che specificano quando si crea l'utilità di pianificazione.  
  
## <a name="example"></a>Esempio  
 Per esaminare gli esempi che utilizzano criteri dell'utilità di pianificazione specifici per controllare il comportamento dell'utilità di pianificazione, vedere [procedura: specificare criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-specify-specific-scheduler-policies.md) e [procedura: creare agenti che utilizzano dell'utilità di pianificazione criteri specifici](../../parallel/concrt/how-to-create-agents-that-use-specific-scheduler-policies.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)   
 [Procedura: specificare criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-specify-specific-scheduler-policies.md)   
 [Procedura: Creare agenti che usano criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-create-agents-that-use-specific-scheduler-policies.md)

