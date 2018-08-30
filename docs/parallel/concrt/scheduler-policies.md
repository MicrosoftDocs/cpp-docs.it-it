---
title: I criteri dell'utilità di pianificazione | Microsoft Docs
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
ms.openlocfilehash: dbf9bb9fdbd930319147bfa2654915243fb8dd6a
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43219306"
---
# <a name="scheduler-policies"></a>Criteri dell'utilità di pianificazione
Questo documento descrive il ruolo dei criteri dell'utilità di pianificazione nel Runtime di concorrenza. Oggetto *criteri dell'utilità di pianificazione* controlla la strategia utilizzata l'utilità di pianificazione quando gestisce le attività. Ad esempio, si consideri un'applicazione per cui viene richiesto che alcune attività vengano eseguite in corrispondenza di `THREAD_PRIORITY_NORMAL` e altre attività in corrispondenza di `THREAD_PRIORITY_HIGHEST`.  È possibile creare due istanze dell'utilità di pianificazione: una tramite cui viene specificato che i criteri `ContextPriority` devono essere `THREAD_PRIORITY_NORMAL` e un'altra tramite cui viene specificato che gli stessi criteri devono essere `THREAD_PRIORITY_HIGHEST`.  
  
 Utilizzando i criteri dell'utilità di pianificazione, è possibile dividere le risorse di elaborazione disponibili e assegnare un set prestabilito di risorse a ogni utilità di pianificazione. Ad esempio, si consideri un algoritmo parallelo che non presenta una scalabilità più di quattro processori. È possibile creare un criterio di utilità di pianificazione che limita le attività per utilizzare contemporaneamente non più di quattro processori.  
  
> [!TIP]
>  Tramite il runtime di concorrenza viene fornita un'utilità di pianificazione predefinita. Di conseguenza, non è necessario crearne una nell'applicazione. Poiché l'utilità di pianificazione consente di ottimizzare le prestazioni delle applicazioni, è consigliabile iniziare con il [libreria PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md) o nella [Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md) se si è familiarità con il Runtime di concorrenza.  
  
 Quando si usa la [CurrentScheduler](reference/currentscheduler-class.md#create), [Concurrency](reference/scheduler-class.md#create), o [concurrency::Scheduler::SetDefaultSchedulerPolicy](reference/scheduler-class.md#setdefaultschedulerpolicy) metodo per creare un'istanza di utilità di pianificazione, forniscono un [Concurrency:: SchedulerPolicy](../../parallel/concrt/reference/schedulerpolicy-class.md) oggetto che contiene una raccolta di coppie chiave-valore che specificano il comportamento dell'utilità di pianificazione. Il `SchedulerPolicy` costruttore accetta un numero variabile di argomenti. Il primo argomento è il numero di elementi dei criteri che siano tentando di specificare. I restanti argomenti sono coppie chiave-valore per ogni elemento dei criteri. L'esempio seguente crea un `SchedulerPolicy` oggetto che specifica tre elementi di criteri. Nel runtime vengono utilizzati valori predefiniti per le chiavi dei criteri che non sono specificate.  

  
 [!code-cpp[concrt-scheduler-policy#2](../../parallel/concrt/codesnippet/cpp/scheduler-policies_1.cpp)]  
  

 Il [PolicyElementKey](reference/concurrency-namespace-enums.md#policyelementkey) enumerazione definisce le chiavi dei criteri associati con l'utilità di pianificazione. La tabella seguente descrive le chiavi dei criteri e il valore predefinito utilizzato dal runtime per ognuno di essi.  
  
|Chiave dei criteri|Descrizione|Valore predefinito|  
|----------------|-----------------|-------------------|  
|`SchedulerKind`|Oggetto [SchedulerType](reference/concurrency-namespace-enums.md#schedulertype) valore che specifica il tipo di thread da usare per pianificare le attività.|`ThreadScheduler` (utilizzare thread normali). È l'unico valore valido per questa chiave.|  
|`MaxConcurrency`|Un `unsigned int` valore che specifica il numero massimo di risorse di concorrenza che usa l'utilità di pianificazione.|[Concurrency::MaxExecutionResources](reference/concurrency-namespace-constants1.md#maxexecutionresources)|  
|`MinConcurrency`|Un `unsigned int` valore che specifica il numero minimo di risorse di concorrenza che usa l'utilità di pianificazione.|`1`|  
|`TargetOversubscriptionFactor`|Un `unsigned int` valore che specifica il numero di thread da allocare a ogni risorsa di elaborazione.|`1`|  
|`LocalContextCacheSize`|Un `unsigned int` valore che specifica il numero massimo di contesti che possono essere memorizzati nella coda locale di ogni processore virtuale.|`8`|  
|`ContextStackSize`|Un `unsigned int` valore che specifica la dimensione dello stack, in KB, da riservare per ogni contesto.|`0` (usare le dimensioni predefinite dello stack)|  
|`ContextPriority`|Un `int` valore che specifica la priorità del thread di ogni contesto. Può trattarsi di qualsiasi valore che è possibile passare [SetThreadPriority](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-setthreadpriority) o `INHERIT_THREAD_PRIORITY`.|`THREAD_PRIORITY_NORMAL`|  

|`SchedulingProtocol`| Oggetto [SchedulingProtocolType](reference/concurrency-namespace-enums.md#schedulingprotocoltype) valore che specifica l'algoritmo di pianificazione da utilizzare. |`EnhanceScheduleGroupLocality`|  
|`DynamicProgressFeedback`| Oggetto [DynamicProgressFeedbackType](reference/concurrency-namespace-enums.md#dynamicprogressfeedbacktype) valore che specifica se ribilanciare le risorse in base alle informazioni di stato di avanzamento basato sulle statistiche.<br /><br /> **Nota** non impostare questo criterio su `ProgressFeedbackDisabled` perché è riservato per l'utilizzo dal runtime. |`ProgressFeedbackEnabled`|  

  
 Ogni utilità di pianificazione Usa il proprio criterio quando pianifica l'attività. I criteri associati a un'utilità di pianificazione non influiscono sul comportamento di nessun'altra utilità di pianificazione. Inoltre, è possibile modificare i criteri dell'utilità di pianificazione dopo aver creato il `Scheduler` oggetto.  
  
> [!IMPORTANT]
>  Usare solo i criteri dell'utilità di pianificazione per controllare gli attributi per i thread creati dal runtime. Non modificare l'affinità o la priorità dei thread creati dal runtime poiché si potrebbe verificare un comportamento non definito.  
  
 Il runtime crea un'utilità di pianificazione predefinita per l'utente se non esplicitamente creato uno. Se si desidera utilizzare l'utilità di pianificazione predefinita nell'applicazione, ma si desidera specificare un criterio per l'utilità di pianificazione da utilizzare, chiamare il [concurrency::Scheduler::SetDefaultSchedulerPolicy](reference/scheduler-class.md#setdefaultschedulerpolicy) metodo prima di pianificare il lavoro parallelo. Se non si chiama il `Scheduler::SetDefaultSchedulerPolicy` (metodo), il runtime utilizza i criteri predefiniti i valori dalla tabella.  
  
 Usare la [concurrency::CurrentScheduler::GetPolicy](reference/currentscheduler-class.md#getpolicy) e il [concurrency::Scheduler::GetPolicy](reference/scheduler-class.md#getpolicy) metodi per recuperare una copia dei criteri dell'utilità di pianificazione. I valori dei criteri ricevuto da questi metodi possono differire tra i valori dei criteri che si specifica quando si crea l'utilità di pianificazione.  
  
## <a name="example"></a>Esempio  
 Per esaminare gli esempi che usano criteri dell'utilità di pianificazione specifici per controllare il comportamento dell'utilità di pianificazione, vedere [procedura: specificare i criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-specify-specific-scheduler-policies.md) e [procedura: creare agenti che usano criteri specifici atti a utilità di pianificazione](../../parallel/concrt/how-to-create-agents-that-use-specific-scheduler-policies.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)   
 [Procedura: specificare i criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-specify-specific-scheduler-policies.md)   
 [Procedura: Creare agenti che usano criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-create-agents-that-use-specific-scheduler-policies.md)

