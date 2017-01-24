---
title: "Criteri dell&#39;utilit&#224; di pianificazione | Microsoft Docs"
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
  - "criteri dell'utilità di pianificazione"
ms.assetid: 58fb68bd-4a57-40a8-807b-6edb6f083cd9
caps.latest.revision: 12
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Criteri dell&#39;utilit&#224; di pianificazione
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo documento viene descritto il ruolo dei criteri dell'utilità di pianificazione nel runtime di concorrenza.  I *criteri dell'utilità di pianificazione* controllano la strategia utilizzata dall'utilità di pianificazione quando vengono gestite le attività.  Ad esempio, si consideri un'applicazione che richiede che alcune attività siano eseguite con `THREAD_PRIORITY_NORMAL` e altre attività con `THREAD_PRIORITY_HIGHEST`.  È possibile creare due istanze dell'utilità di pianificazione: uno che specifica `THREAD_PRIORITY_NORMAL` per i criteri di `ContextPriority` e l'altra che specifica `THREAD_PRIORITY_HIGHEST` per gli stessi criteri.  
  
 Utilizzando i criteri dell'utilità di pianificazione, è possibile dividere le risorse di elaborazione disponibili e assegnare un set prestabilito di risorse a ogni utilità di pianificazione.  Si consideri, ad esempio, un algoritmo parallelo che non possa essere utilizzato con più di quattro processori.  È possibile creare criteri dell'utilità di pianificazione che limitano le attività a utilizzare non più di quattro processori contemporaneamente.  
  
> [!TIP]
>  Il runtime di concorrenza fornisce un'utilità di pianificazione predefinita.  Di conseguenza, non è necessario crearne una nell'applicazione.  Poiché l'utilità di pianificazione consente di ottimizzare le prestazioni delle applicazioni, è consigliabile iniziare con la [PPL \(Parallel Patterns Library\)](../../parallel/concrt/parallel-patterns-library-ppl.md) o la [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md) se non si ha familiarità con il runtime di concorrenza.  
  
 Quando si utilizza il metodo [concurrency::CurrentScheduler::Create](../Topic/CurrentScheduler::Create%20Method.md), [concurrency::Scheduler::Create](../Topic/Scheduler::Create%20Method.md) o [concurrency::Scheduler::SetDefaultSchedulerPolicy](../Topic/Scheduler::SetDefaultSchedulerPolicy%20Method.md) per creare un'istanza dell'utilità di pianificazione, è possibile fornire un oggetto [concurrency::SchedulerPolicy](../../parallel/concrt/reference/schedulerpolicy-class.md) contenente una raccolta di coppie chiave\-valore che specificano il comportamento dell'utilità di pianificazione.  Il costruttore `SchedulerPolicy` accetta un numero variabile di argomenti.  Il primo argomento rappresenta il numero di elementi dei criteri che verranno specificati.  Gli argomenti restanti sono coppie chiave\-valore per ogni elemento dei criteri.  Nell'esempio seguente viene creato un oggetto `SchedulerPolicy` che specifica tre elementi dei criteri.  Il runtime utilizza valori predefiniti per le chiavi dei criteri che non sono specificate.  
  
 [!code-cpp[concrt-scheduler-policy#2](../../parallel/concrt/codesnippet/CPP/scheduler-policies_1.cpp)]  
  
 L'enumerazione [concurrency::PolicyElementKey](../Topic/PolicyElementKey%20Enumeration.md) definisce le chiavi dei criteri associate all'Utilità di pianificazione.  Nella tabella seguente vengono descritte le chiavi dei criteri e il valore predefinito utilizzato dal runtime per ognuna di esse.  
  
|Chiave dei criteri|Descrizione|Valore predefinito|  
|------------------------|-----------------|------------------------|  
|`SchedulerKind`|Un valore [concurrency::SchedulerType](../Topic/SchedulerType%20Enumeration.md) che specifica il tipo di thread da utilizzare per pianificare le attività.|`ThreadScheduler` \(utilizzare thread normali\).  Questo è l'unico valore valido per questa chiave.|  
|`MaxConcurrency`|Un valore `unsigned int` che specifica il numero massimo di risorse di concorrenza che l'utilità di pianificazione utilizza.|[concurrency::MaxExecutionResources](../Topic/MaxExecutionResources%20Constant.md)|  
|`MinConcurrency`|Un valore `unsigned int` che specifica il numero minimo di risorse di concorrenza che l'utilità di pianificazione utilizza.|`1`|  
|`TargetOversubscriptionFactor`|Un valore `unsigned int` che specifica il numero di thread da allocare per ogni risorsa di elaborazione.|`1`|  
|`LocalContextCacheSize`|Un valore `unsigned int` che specifica il numero massimo di contesti che possono essere memorizzati nella cache nella coda locale di ogni processore virtuale.|`8`|  
|`ContextStackSize`|Un valore `unsigned int` che specifica la dimensione dello stack, in kilobyte, da riservare per ogni contesto.|`0` \(utilizzare la dimensione dello stack predefinita\)|  
|`ContextPriority`|Un valore `int` che specifica la priorità dei thread di ogni contesto.  Può trattarsi di qualsiasi valore che è possibile passare a [SetThreadPriority](http://msdn.microsoft.com/library/windows/desktop/ms686277) o `INHERIT_THREAD_PRIORITY`.|`THREAD_PRIORITY_NORMAL`|  
|`SchedulingProtocol`|Un valore [concurrency::SchedulingProtocolType](../Topic/SchedulingProtocolType%20Enumeration.md) che specifica l'algoritmo di pianificazione da utilizzare.|`EnhanceScheduleGroupLocality`|  
|`DynamicProgressFeedback`|Un valore [concurrency::DynamicProgressFeedbackType](../Topic/DynamicProgressFeedbackType%20Enumeration.md) che specifica se ribilanciare le risorse in base alle informazioni sullo stato di avanzamento basato sulle statistiche.<br /><br /> **Nota** Non impostare questi criteri su `ProgressFeedbackDisabled` perché sono riservati per essere utilizzati dal runtime.|`ProgressFeedbackEnabled`|  
  
 Ogni utilità di pianificazione utilizza criteri personalizzati quando vengono pianificate le attività.  I criteri associati a un'utilità di pianificazione non influiscono sul comportamento di un'altra utilità di pianificazione.  Inoltre, una volta creato l'oggetto `Scheduler` non è possibile modificare i criteri dell'utilità di pianificazione.  
  
> [!IMPORTANT]
>  Utilizzare i criteri dell'utilità di pianificazione solo per controllare gli attributi per i thread creati dal runtime.  Non modificare l'affinità o la priorità dei thread creati dal runtime perché questo potrebbe causare un comportamento indefinito.  
  
 Il runtime crea un'utilità di pianificazione predefinita se non se ne crea una esplicitamente.  Se si desidera utilizzare l'utilità di pianificazione predefinita nell'applicazione, ma si desidera specificare i criteri dell'utilità di pianificazione da utilizzare, chiamare il metodo [concurrency::Scheduler::SetDefaultSchedulerPolicy](../Topic/Scheduler::SetDefaultSchedulerPolicy%20Method.md) prima di pianificare il lavoro parallelo.  Se non si chiama il metodo `Scheduler::SetDefaultSchedulerPolicy`, il runtime utilizza i valori dei criteri predefiniti indicati nella tabella.  
  
 Utilizzare i metodi [concurrency::CurrentScheduler::GetPolicy](../Topic/CurrentScheduler::GetPolicy%20Method.md) e [concurrency::Scheduler::GetPolicy](../Topic/Scheduler::GetPolicy%20Method.md) per recuperare una copia dei criteri dell'utilità di pianificazione.  I valori dei criteri ricevuti da questi metodi possono differire dai valori dei criteri specificati quando viene creata l'utilità di pianificazione.  
  
## Esempio  
 Per esaminare gli esempi in cui vengono utilizzati i criteri dell'utilità di pianificazione specifici per controllare il comportamento dell'utilità di pianificazione, vedere [Procedura: Definire criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-specify-specific-scheduler-policies.md) e [Procedura: Creare agenti che usano criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-create-agents-that-use-specific-scheduler-policies.md).  
  
## Vedere anche  
 [Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)   
 [Procedura: Definire criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-specify-specific-scheduler-policies.md)   
 [Procedura: Creare agenti che usano criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-create-agents-that-use-specific-scheduler-policies.md)