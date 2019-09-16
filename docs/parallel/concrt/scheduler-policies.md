---
title: Criteri dell'utilità di pianificazione
ms.date: 11/04/2016
helpviewer_keywords:
- scheduler policies
ms.assetid: 58fb68bd-4a57-40a8-807b-6edb6f083cd9
ms.openlocfilehash: 5569ed9fb6229373ba59d687f21627ac9415050f
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69510456"
---
# <a name="scheduler-policies"></a>Criteri dell'utilità di pianificazione

In questo documento viene descritto il ruolo dei criteri dell'utilità di pianificazione nel runtime di concorrenza. I *criteri dell'utilità di pianificazione* controllano la strategia utilizzata dall'utilità di pianificazione per la gestione delle attività. Ad esempio, si consideri un'applicazione per cui viene richiesto che alcune attività vengano eseguite in corrispondenza di `THREAD_PRIORITY_NORMAL` e altre attività in corrispondenza di `THREAD_PRIORITY_HIGHEST`.  È possibile creare due istanze dell'utilità di pianificazione: una tramite cui viene specificato che i criteri `ContextPriority` devono essere `THREAD_PRIORITY_NORMAL` e un'altra tramite cui viene specificato che gli stessi criteri devono essere `THREAD_PRIORITY_HIGHEST`.

Utilizzando i criteri dell'utilità di pianificazione, è possibile dividere le risorse di elaborazione disponibili e assegnare un set prestabilito di risorse a ogni utilità di pianificazione. Si consideri, ad esempio, un algoritmo parallelo che non si ridimensiona oltre quattro processori. È possibile creare criteri dell'utilità di pianificazione che limitano le attività in modo da non utilizzare più di quattro processori simultaneamente.

> [!TIP]
>  Tramite il runtime di concorrenza viene fornita un'utilità di pianificazione predefinita. Di conseguenza, non è necessario crearne una nell'applicazione. Poiché il Utilità di pianificazione consente di ottimizzare le prestazioni delle applicazioni, è consigliabile iniziare con la libreria [PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md) o la [libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md) se non si ha familiarità con l'runtime di concorrenza.

Quando si utilizza il metodo Concurrency [:: CurrentScheduler:: create](reference/currentscheduler-class.md#create), [Concurrency:: Scheduler:: create](reference/scheduler-class.md#create)o [Concurrency:: Scheduler:: SetDefaultSchedulerPolicy](reference/scheduler-class.md#setdefaultschedulerpolicy) per creare un'istanza dell'utilità di pianificazione, è necessario specificare un oggetto [Concurrency:: Oggetto SchedulerPolicy](../../parallel/concrt/reference/schedulerpolicy-class.md) che contiene una raccolta di coppie chiave-valore che specificano il comportamento dell'utilità di pianificazione. Il `SchedulerPolicy` costruttore accetta un numero variabile di argomenti. Il primo argomento è il numero di elementi dei criteri che si sta per specificare. Gli argomenti rimanenti sono coppie chiave-valore per ogni elemento dei criteri. Nell'esempio seguente viene creato `SchedulerPolicy` un oggetto che specifica tre elementi dei criteri. Nel runtime vengono utilizzati valori predefiniti per le chiavi dei criteri che non sono specificate.

[!code-cpp[concrt-scheduler-policy#2](../../parallel/concrt/codesnippet/cpp/scheduler-policies_1.cpp)]

L'enumerazione [Concurrency::P olicyelementkey](reference/concurrency-namespace-enums.md#policyelementkey) definisce le chiavi dei criteri associate al utilità di pianificazione. Nella tabella seguente vengono descritte le chiavi dei criteri e il valore predefinito utilizzato dal runtime per ognuno di essi.

|Chiave dei criteri|Descrizione|Default Value|
|----------------|-----------------|-------------------|
|`SchedulerKind`|Valore [Concurrency:: SchedulerType](reference/concurrency-namespace-enums.md#schedulertype) che specifica il tipo di thread da utilizzare per pianificare le attività.|`ThreadScheduler` (utilizzare thread normali). È l'unico valore valido per questa chiave.|
|`MaxConcurrency`|`unsigned int` Valore che specifica il numero massimo di risorse di concorrenza utilizzate dall'utilità di pianificazione.|[concurrency::MaxExecutionResources](reference/concurrency-namespace-constants1.md#maxexecutionresources)|
|`MinConcurrency`|`unsigned int` Valore che specifica il numero minimo di risorse di concorrenza utilizzate dall'utilità di pianificazione.|`1`|
|`TargetOversubscriptionFactor`|`unsigned int` Valore che specifica il numero di thread da allocare a ogni risorsa di elaborazione.|`1`|
|`LocalContextCacheSize`|`unsigned int` Valore che specifica il numero massimo di contesti che possono essere memorizzati nella cache nella coda locale di ogni processore virtuale.|`8`|
|`ContextStackSize`|`unsigned int` Valore che specifica le dimensioni dello stack, in kilobyte, da riservare per ogni contesto.|`0`(usare le dimensioni predefinite dello stack)|
|`ContextPriority`|`int` Valore che specifica la priorità del thread di ogni contesto. Può trattarsi di qualsiasi valore che è possibile passare a [SetThreadPriority](/windows/win32/api/processthreadsapi/nf-processthreadsapi-setthreadpriority) o `INHERIT_THREAD_PRIORITY`.|`THREAD_PRIORITY_NORMAL`|

|`SchedulingProtocol`| Valore [Concurrency:: SchedulingProtocolType](reference/concurrency-namespace-enums.md#schedulingprotocoltype) che specifica l'algoritmo di pianificazione da utilizzare. | `EnhanceScheduleGroupLocality`| | `DynamicProgressFeedback`| Una [concorrenza::D valore ynamicprogressfeedbacktype](reference/concurrency-namespace-enums.md#dynamicprogressfeedbacktype) che specifica se ribilanciare le risorse in base alle informazioni sullo stato di avanzamento basate sulle statistiche.<br /><br /> **Nota** Non impostare questo criterio su `ProgressFeedbackDisabled` perché è riservato per l'utilizzo da parte del runtime. |`ProgressFeedbackEnabled`|

Ogni utilità di pianificazione usa i propri criteri durante la pianificazione delle attività. I criteri associati a un'utilità di pianificazione non influiscono sul comportamento di nessun'altra utilità di pianificazione. Non è inoltre possibile modificare i criteri dell'utilità di pianificazione dopo avere creato `Scheduler` l'oggetto.

> [!IMPORTANT]
>  Usare solo i criteri dell'utilità di pianificazione per controllare gli attributi per i thread creati dal runtime. Non modificare l'affinità o la priorità dei thread creati dal runtime poiché si potrebbe verificare un comportamento non definito.

Il runtime crea automaticamente un'utilità di pianificazione predefinita se non ne viene creata una in modo esplicito. Se si desidera utilizzare l'utilità di pianificazione predefinita nell'applicazione, ma si desidera specificare un criterio per l'utilità di pianificazione da utilizzare, chiamare il metodo [Concurrency:: Scheduler:: SetDefaultSchedulerPolicy](reference/scheduler-class.md#setdefaultschedulerpolicy) prima di pianificare il lavoro parallelo. Se non si chiama il `Scheduler::SetDefaultSchedulerPolicy` metodo, il runtime utilizzerà i valori dei criteri predefiniti della tabella.

Utilizzare il metodo [Concurrency:: CurrentScheduler:: GetPolicy](reference/currentscheduler-class.md#getpolicy) e [Concurrency:: Scheduler:: GetPolicy](reference/scheduler-class.md#getpolicy) per recuperare una copia dei criteri dell'utilità di pianificazione. I valori dei criteri ricevuti da questi metodi possono differire dai valori dei criteri specificati quando si crea l'utilità di pianificazione.

## <a name="example"></a>Esempio

Per esaminare gli esempi che usano criteri dell'utilità di pianificazione specifici per controllare il comportamento dell'utilità di [pianificazione, vedere Procedura: Specificare criteri](../../parallel/concrt/how-to-specify-specific-scheduler-policies.md) dell'utilità di pianificazione [specifici e procedura: Creare agenti che usano criteri](../../parallel/concrt/how-to-create-agents-that-use-specific-scheduler-policies.md)dell'utilità di pianificazione specifici.

## <a name="see-also"></a>Vedere anche

[Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)<br/>
[Procedura: Definire criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-specify-specific-scheduler-policies.md)<br/>
[Procedura: Creare agenti che usano criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-create-agents-that-use-specific-scheduler-policies.md)
