---
title: "Le istanze dell'utilità di pianificazione | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- scheduler instances
ms.assetid: 4819365f-ef99-49cc-963e-50a2a35a8d6b
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1688a2b689b3fc3391e617f3d65d3c681f05a84f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="scheduler-instances"></a>Istanze dell'utilità di pianificazione
Questo documento viene descritto il ruolo delle istanze dell'utilità di pianificazione nel Runtime di concorrenza e come utilizzare il [Concurrency:: Scheduler](../../parallel/concrt/reference/scheduler-class.md) e [Concurrency:: CurrentScheduler](../../parallel/concrt/reference/currentscheduler-class.md) classi per creare e gestire istanze dell'utilità di pianificazione. Le istanze dell'utilità di pianificazione sono utili quando si desidera associare criteri di pianificazione espliciti a specifici tipi di carichi di lavoro. È possibile ad esempio creare un'istanza dell'utilità di pianificazione per eseguire alcune attività con una priorità di thread elevata e usare l'utilità di pianificazione predefinita per eseguire altre attività con una priorità di thread normale.  
  
> [!TIP]
>  Il runtime di concorrenza fornisce un'utilità di pianificazione predefinita, pertanto non è necessario crearne una nell'applicazione. Poiché l'utilità di pianificazione consente di ottimizzare le prestazioni delle applicazioni, è consigliabile iniziare con il [libreria PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md) o [libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md) se si è familiarità con il Runtime di concorrenza.  
  
##  <a name="top"></a> Sezioni  
  
-   [L'utilità di pianificazione e le classi CurrentScheduler](#classes)  
  
-   [Creazione di un'istanza dell'utilità di pianificazione](#creating)  
  
-   [Gestione della durata di un'istanza dell'utilità di pianificazione](#managing)  
  
-   [Metodi e le funzionalità](#features)  
  
-   [Esempio](#example)  
  
##  <a name="classes"></a>L'utilità di pianificazione e le classi CurrentScheduler  
 L'utilità di pianificazione consente alle applicazioni di utilizzare uno o più *istanze dell'utilità di pianificazione* per pianificare il lavoro. Il [Concurrency:: Scheduler](../../parallel/concrt/reference/scheduler-class.md) classe rappresenta un'istanza dell'utilità di pianificazione e incapsula la funzionalità correlate alla pianificazione delle attività.  
  
 Un thread che è collegato a un'utilità di pianificazione è noto come un *contesto di esecuzione*, o semplicemente *contesto*. Un'utilità di pianificazione può essere attivo nel contesto corrente in qualsiasi momento. Utilità di pianificazione attiva è noto anche come il *utilità di pianificazione corrente*. Il Runtime di concorrenza Usa il [Concurrency:: CurrentScheduler](../../parallel/concrt/reference/currentscheduler-class.md) classe per fornire l'accesso all'utilità di pianificazione corrente. Utilità di pianificazione corrente per un contesto può essere diverso dall'utilità di pianificazione corrente per un altro contesto. Il runtime non fornisce una rappresentazione a livello di processo dell'utilità di pianificazione corrente.  
  
 In genere, la `CurrentScheduler` classe viene utilizzata per accedere alle utilità di pianificazione corrente. La `Scheduler` classe è utile quando è necessario gestire un'utilità di pianificazione non è quello corrente.  
  
 Le sezioni seguenti descrivono come creare e gestire un'istanza dell'utilità di pianificazione. Per un esempio completo che illustra queste attività, vedere [procedura: gestire un'istanza dell'utilità di pianificazione](../../parallel/concrt/how-to-manage-a-scheduler-instance.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="creating"></a>Creazione di un'istanza dell'utilità di pianificazione  
 Sono disponibili i tre modi per creare un `Scheduler` oggetto:  
  
-   Se non esiste alcuna utilità di pianificazione, il runtime crea un'utilità di pianificazione predefinita per l'utente quando si utilizza la funzionalità di runtime, ad esempio, un algoritmo parallelo, per eseguire il lavoro. Utilità di pianificazione predefinita diventa l'utilità di pianificazione corrente per il contesto che avvia il lavoro parallelo.  
  

-   Il [concurrency::CurrentScheduler::Create](reference/currentscheduler-class.md#create) metodo crea un `Scheduler` oggetto che utilizza criteri specifici e associa l'utilità di pianificazione con il contesto corrente.  
  
-   Il [Concurrency](reference/scheduler-class.md#create) metodo crea un `Scheduler` oggetto che utilizza criteri specifici, ma non lo associa al contesto corrente.  

  
 Che consente al runtime di creare un'utilità di pianificazione predefinita consente tutte le attività simultanee di condividere la stessa pianificazione. In genere, la funzionalità fornita dal [Parallel Patterns Library](../../parallel/concrt/parallel-patterns-library-ppl.md) (PPL) o [libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md) viene utilizzato per eseguire un lavoro parallelo. Pertanto, non è necessario lavorare direttamente con l'utilità di pianificazione per controllare i criteri o la durata. Quando si utilizza la libreria PPL o la libreria di agenti, il runtime crea l'utilità di pianificazione predefinita se non esiste e rende l'utilità di pianificazione corrente per ogni contesto. Quando si crea un'utilità di pianificazione e impostarlo come utilità di pianificazione corrente, il runtime usa l'utilità di pianificazione per pianificare le attività. Creare istanze dell'utilità di pianificazione aggiuntive solo quando si richiede un criterio di pianificazione specifico. Per ulteriori informazioni sui criteri che sono associati a un'utilità di pianificazione, vedere [criteri dell'utilità di pianificazione](../../parallel/concrt/scheduler-policies.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="managing"></a>Gestione della durata di un'istanza dell'utilità di pianificazione  
 Il runtime utilizza un meccanismo di conteggio dei riferimenti per controllare la durata di `Scheduler` oggetti.  
  

 Quando si utilizza il `CurrentScheduler::Create` metodo o `Scheduler::Create` metodo per creare un `Scheduler` dell'oggetto, il runtime imposta il conteggio dei riferimenti iniziale dell'unità di pianificazione a uno. Il runtime incrementa il conteggio dei riferimenti quando si chiama il [concurrency::Scheduler::Attach](reference/scheduler-class.md#attach) metodo. Il `Scheduler::Attach` metodo associa la `Scheduler` oggetto al contesto corrente. In questo modo l'utilità di pianificazione corrente. Quando si chiama il `CurrentScheduler::Create` il metodo, il runtime crea un `Scheduler` dell'oggetto e lo collega al contesto corrente (e imposta il conteggio dei riferimenti a uno). È inoltre possibile utilizzare il [concurrency::Scheduler::Reference](reference/scheduler-class.md#reference) metodo per incrementare il conteggio dei riferimenti di un `Scheduler` oggetto.  
  
 Il runtime decrementa il conteggio dei riferimenti quando si chiama il [concurrency::CurrentScheduler::Detach](reference/currentscheduler-class.md#detach) metodo scollegare l'utilità di pianificazione corrente, oppure chiamare il [concurrency::Scheduler::Release](reference/scheduler-class.md#release) metodo. Quando il conteggio dei riferimenti arriva a zero, il runtime elimina il `Scheduler` oggetto dopo che tutti pianificato il completamento di attività. Un'attività in esecuzione è possibile incrementare il conteggio dei riferimenti dell'utilità di pianificazione corrente. Pertanto, se il conteggio dei riferimenti arriva a zero e il conteggio dei riferimenti viene incrementato di un'attività, il runtime non elimina il `Scheduler` fino a quando il conteggio dei riferimenti raggiunge nuovamente zero e tutte le attività dell'oggetto.  

  
 Il runtime gestisce uno stack interno di `Scheduler` oggetti per ogni contesto. Quando si chiama il `Scheduler::Attach` o `CurrentScheduler::Create` (metodo), il runtime inserisce il `Scheduler` oggetto nello stack per il contesto corrente. In questo modo l'utilità di pianificazione corrente. Quando si chiama `CurrentScheduler::Detach`, il runtime estrae l'utilità di pianificazione corrente dallo stack per il contesto corrente e imposta quello precedente come utilità di pianificazione corrente.  
  
 Il runtime fornisce diversi modi per gestire la durata di un'istanza dell'utilità di pianificazione. Nella tabella seguente viene illustrato il metodo appropriato che rilascia o disconnette l'utilità di pianificazione nel contesto corrente per ogni metodo che crea o collega un'utilità di pianificazione per il contesto corrente.  
  
|Creare o attach (metodo)|Rilasciare o detach (metodo)|  
|-----------------------------|------------------------------|  
|`CurrentScheduler::Create`|`CurrentScheduler::Detach`|  
|`Scheduler::Create`|`Scheduler::Release`|  
|`Scheduler::Attach`|`CurrentScheduler::Detach`|  
|`Scheduler::Reference`|`Scheduler::Release`|  
  
 La chiamata di inappropriato rilasciare o scollegare metodo produce un comportamento non specificato in fase di esecuzione.  
  
 Quando si utilizza la funzionalità, ad esempio, la libreria PPL, che consente al runtime creare l'utilità di pianificazione predefinita per l'utente, non rilasciare o scollegare l'utilità di pianificazione. Il runtime gestisce la durata di qualsiasi utilità di pianificazione che viene creato.  
  

 Poiché il runtime elimina un `Scheduler` oggetto prima del completamento di tutte le attività, è possibile utilizzare il [concurrency::Scheduler::RegisterShutdownEvent](reference/scheduler-class.md#registershutdownevent) metodo o [Concurrency:: CurrentScheduler:: RegisterShutdownEvent](reference/currentscheduler-class.md#registershutdownevent) per ricevere una notifica quando un `Scheduler` oggetto viene eliminato definitivamente. Ciò è utile quando è necessario attendere il completamento di ogni attività pianificata da un `Scheduler` oggetto completamento.  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="features"></a>Metodi e le funzionalità  
 Questa sezione vengono riepilogati i metodi importanti del `CurrentScheduler` e `Scheduler` classi.  
  
 Si consideri la `CurrentScheduler` classe come supporto per la creazione di un'utilità di pianificazione per l'utilizzo nel contesto corrente. La `Scheduler` classe consente di controllare un'utilità di pianificazione che appartiene a un altro contesto.  
  
 La tabella seguente illustra i metodi importanti definiti per il `CurrentScheduler` classe.  
  
|Metodo|Descrizione|  
|------------|-----------------|  
|[Creare](reference/currentscheduler-class.md#create)|Crea un `Scheduler` oggetto che utilizza i criteri specificati e lo associa al contesto corrente.|  
|[Get](reference/currentscheduler-class.md#get)|Recupera un puntatore per il `Scheduler` oggetto associato al contesto corrente. Questo metodo non incrementa il conteggio dei riferimenti di `Scheduler` oggetto.|  
|[Detach](reference/currentscheduler-class.md#detach)|Disconnette l'utilità di pianificazione corrente dal contesto corrente e imposta il precedente con l'utilità di pianificazione corrente.|  
|[RegisterShutdownEvent](reference/currentscheduler-class.md#registershutdownevent)|Registra un evento che viene impostato dal runtime quando viene eliminato definitivamente l'utilità di pianificazione corrente.|  
|[CreateScheduleGroup](reference/currentscheduler-class.md#createschedulegroup)|Crea un [Concurrency:: ScheduleGroup](../../parallel/concrt/reference/schedulegroup-class.md) oggetto nell'utilità di pianificazione corrente.|  
|[ScheduleTask](reference/currentscheduler-class.md#scheduletask)|Aggiunge un'attività leggera per la coda dell'utilità di pianificazione corrente.|  
|[GetPolicy](reference/currentscheduler-class.md#getpolicy)|Recupera una copia dei criteri che sono associato con l'utilità di pianificazione corrente.|  
  
 La tabella seguente illustra i metodi importanti definiti per il `Scheduler` classe.  
  
|Metodo|Descrizione|  
|------------|-----------------|  
|[Creare](reference/scheduler-class.md#create)|Crea un `Scheduler` oggetto che utilizza i criteri specificati.|  
|[Attach](reference/scheduler-class.md#attach)|Associa il `Scheduler` oggetto al contesto corrente.|  
|[Riferimento](reference/scheduler-class.md#reference)|Incrementa il contatore dei riferimenti di `Scheduler` oggetto.|  
|[Rilascio](reference/scheduler-class.md#release)|Decrementa il contatore dei riferimenti di `Scheduler` oggetto.|  
|[RegisterShutdownEvent](reference/scheduler-class.md#registershutdownevent)|Registra un evento che viene impostato dal runtime quando la `Scheduler` oggetto viene eliminato definitivamente.|  
|[CreateScheduleGroup](reference/scheduler-class.md#createschedulegroup)|Crea un [Concurrency:: ScheduleGroup](../../parallel/concrt/reference/schedulegroup-class.md) oggetto di `Scheduler` oggetto.|  
|[ScheduleTask](reference/scheduler-class.md#scheduletask)|Pianifica un'attività leggera dal `Scheduler` oggetto.|  
|[GetPolicy](reference/scheduler-class.md#getpolicy)|Recupera una copia dei criteri di cui sono associato il `Scheduler` oggetto.|  
|[SetDefaultSchedulerPolicy](reference/scheduler-class.md#setdefaultschedulerpolicy)|Imposta i criteri per il runtime da utilizzare quando viene creato l'utilità di pianificazione predefinita.|  
|[ResetDefaultSchedulerPolicy](reference/scheduler-class.md#resetdefaultschedulerpolicy)|Ripristina il criterio predefinito a quello che era attivo prima della chiamata a `SetDefaultSchedulerPolicy`. Se l'utilità di pianificazione predefinita viene creato dopo questa chiamata, il runtime Usa impostazioni predefinite dei criteri per creare l'utilità di pianificazione.|  

  
 [[Torna all'inizio](#top)]  
  
##  <a name="example"></a> Esempio  
 Per esempi di come creare e gestire un'istanza dell'utilità di pianificazione di base, vedere [procedura: gestire un'istanza dell'utilità di pianificazione](../../parallel/concrt/how-to-manage-a-scheduler-instance.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)   
 [Procedura: gestire un'istanza dell'utilità di pianificazione](../../parallel/concrt/how-to-manage-a-scheduler-instance.md)   
 [Criteri dell'utilità di pianificazione](../../parallel/concrt/scheduler-policies.md)   
 [Gruppi di pianificazione](../../parallel/concrt/schedule-groups.md)

