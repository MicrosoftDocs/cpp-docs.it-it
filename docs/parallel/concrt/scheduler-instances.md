---
title: "Istanze dell&#39;utilit&#224; di pianificazione | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "istanze dell'utilità di pianificazione"
ms.assetid: 4819365f-ef99-49cc-963e-50a2a35a8d6b
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Istanze dell&#39;utilit&#224; di pianificazione
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo documento viene descritto il ruolo delle istanze dell'utilità di pianificazione del runtime di concorrenza e come utilizzare le classi [concurrency::Scheduler](../../parallel/concrt/reference/scheduler-class.md) e [concurrency::CurrentScheduler](../../parallel/concrt/reference/currentscheduler-class.md) per creare e gestire le istanze dell'utilità di pianificazione.  Le istanze dell'utilità di pianificazione sono utili quando si desidera associare i criteri di pianificazione espliciti a specifici tipi di carichi di lavoro.  È possibile ad esempio creare un'istanza dell'utilità di pianificazione per eseguire alcune attività con una priorità di thread elevata e utilizzare l'utilità di pianificazione predefinita per eseguire altre attività con una priorità di thread normale.  
  
> [!TIP]
>  Il runtime di concorrenza fornisce un'utilità di pianificazione predefinita, pertanto non è necessario crearne una nell'applicazione.  Poiché l'utilità di pianificazione consente di ottimizzare le prestazioni delle applicazioni, è consigliabile iniziare con la [PPL \(Parallel Patterns Library\)](../../parallel/concrt/parallel-patterns-library-ppl.md) o la [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md) se non si ha familiarità con il runtime di concorrenza.  
  
##  <a name="top"></a> Sezioni  
  
-   [Classi Scheduler e CurrentScheduler](#classes)  
  
-   [Creazione di un'istanza dell'utilità di pianificazione](#creating)  
  
-   [Gestione della durata di un'istanza dell'utilità di pianificazione](#managing)  
  
-   [Metodi e funzionalità](#features)  
  
-   [Esempio](#example)  
  
##  <a name="classes"></a> Classi Scheduler e CurrentScheduler  
 L'Utilità di pianificazione consente alle applicazioni di utilizzare una o più *istanze dell'utilità di pianificazione* per pianificare il lavoro.  La classe [concurrency::Scheduler](../../parallel/concrt/reference/scheduler-class.md) rappresenta un'istanza dell'utilità di pianificazione e incapsula la funzionalità correlata alla pianificazione delle attività.  
  
 Un thread associato a un'utilità di pianificazione viene definito *contesto di esecuzione* o semplicemente *contesto*.  Nel contesto corrente può essere attiva una sola utilità di pianificazione alla volta.  L'utilità di pianificazione attiva è anche nota come *utilità di pianificazione corrente*.  Il runtime di concorrenza utilizza la classe [concurrency::CurrentScheduler](../../parallel/concrt/reference/currentscheduler-class.md) per fornire l'accesso all'utilità di pianificazione corrente.  L'utilità di pianificazione corrente di un contesto può differire dall'utilità di pianificazione corrente di un altro contesto.  Il runtime non fornisce una rappresentazione a livello di processo dell'utilità di pianificazione corrente.  
  
 In genere, la classe `CurrentScheduler` viene utilizzata per accedere all'utilità di pianificazione corrente.  La classe `Scheduler` è utile quando è necessario gestire un'utilità di pianificazione che non corrisponde a quella corrente.  
  
 Nelle sezioni seguenti viene descritto come creare e gestire un'istanza dell'utilità di pianificazione.  Per un esempio completo relativo a tali attività, vedere [Procedura: Gestire un'istanza dell'utilità di pianificazione](../../parallel/concrt/how-to-manage-a-scheduler-instance.md).  
  
 \[[Top](#top)\]  
  
##  <a name="creating"></a> Creazione di un'istanza dell'utilità di pianificazione  
 Per creare un oggetto `Scheduler` sono disponibili i tre modi seguenti:  
  
-   Se non esiste alcuna utilità di pianificazione, il runtime crea automaticamente un'utilità di pianificazione predefinita quando si utilizza la funzionalità di runtime, ad esempio un algoritmo parallelo, per eseguire il lavoro.  L'utilità di pianificazione predefinita diventa l'utilità di pianificazione corrente per il contesto che avvia il lavoro parallelo.  
  
-   Il metodo [concurrency::CurrentScheduler::Create](../Topic/CurrentScheduler::Create%20Method.md) crea un oggetto `Scheduler` che utilizza criteri specifici e associa l'utilità di pianificazione al contesto corrente.  
  
-   Il metodo [concurrency::Scheduler::Create](../Topic/Scheduler::Create%20Method.md) crea un oggetto `Scheduler` che utilizza criteri specifici ma non associa l'utilità di pianificazione al contesto corrente.  
  
 Se si consente al runtime di creare un'utilità di pianificazione predefinita, tutte le attività simultanee condivideranno la stessa utilità di pianificazione.  In genere, la funzionalità fornita dalla [libreria PPL \(Parallel Patterns Library\)](../../parallel/concrt/parallel-patterns-library-ppl.md) o dalla [libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md) viene utilizzata per eseguire il lavoro parallelo.  Pertanto, non è necessario utilizzare direttamente l'utilità di pianificazione per controllarne i criteri o la durata.  Quando si utilizza la libreria PPL o la libreria di agenti, il runtime crea l'utilità di pianificazione predefinita, se non esiste e la imposta come utilità di pianificazione corrente per ogni contesto.  Se si crea un'utilità di pianificazione impostandola come utilità di pianificazione corrente, il runtime utilizzerà tale utilità di pianificazione.  Creare istanze dell'utilità di pianificazione aggiuntive solo quando sono necessari criteri di pianificazione specifici.  Per ulteriori informazioni sui criteri associati a un'utilità di pianificazione, vedere [Criteri dell'utilità di pianificazione](../../parallel/concrt/scheduler-policies.md).  
  
 \[[Top](#top)\]  
  
##  <a name="managing"></a> Gestione della durata di un'istanza dell'utilità di pianificazione  
 Il runtime utilizza un meccanismo di conteggio dei riferimenti per controllare la durata degli oggetti `Scheduler`.  
  
 Quando si utilizza il metodo `CurrentScheduler::Create` o il metodo `Scheduler::Create` per creare un oggetto `Scheduler`, il runtime imposta il conteggio dei riferimenti iniziale dell'utilità di pianificazione su uno.  Il runtime incrementa il conteggio dei riferimenti quando si chiama il metodo [concurrency::Scheduler::Attach](../Topic/Scheduler::Attach%20Method.md).  Il metodo `Scheduler::Attach` associa l'oggetto `Scheduler` al contesto corrente.  impostandolo come utilità di pianificazione corrente.  Quando si chiama il metodo `CurrentScheduler::Create`, il runtime crea un oggetto `Scheduler` e lo associa al contesto corrente impostando il conteggio dei riferimenti su uno.  È inoltre possibile utilizzare il metodo [concurrency::Scheduler::Reference](../Topic/Scheduler::Reference%20Method.md) per incrementare il conteggio dei riferimenti di un oggetto `Scheduler`.  
  
 Il runtime decrementa il conteggio dei riferimenti quando si chiama il metodo [concurrency::CurrentScheduler::Detach](../Topic/CurrentScheduler::Detach%20Method.md) per disconnettere l'utilità di pianificazione corrente o si chiama il metodo [concurrency::Scheduler::Release](../Topic/Scheduler::Release%20Method.md).  Quando il conteggio dei riferimenti arriva a zero, il runtime elimina l'oggetto `Scheduler` dopo il completamento di tutte le attività pianificate.  Un'attività in esecuzione può incrementare il conteggio dei riferimenti dell'utilità di pianificazione corrente.  Pertanto, se il conteggio dei riferimenti arriva a zero e un'attività incrementa tale conteggio, il runtime non elimina l'oggetto `Scheduler` finché il conteggio dei riferimenti non arriva di nuovo a zero e non vengono completate tutte le attività.  
  
 Il runtime gestisce uno stack interno di oggetti `Scheduler` per ogni contesto.  Quando si chiama il metodo `Scheduler::Attach` o `CurrentScheduler::Create`, il runtime inserisce l'oggetto `Scheduler` nello stack per il contesto corrente,  impostandolo come utilità di pianificazione corrente.  Quando si chiama `CurrentScheduler::Detach`, il runtime estrae l'utilità di pianificazione corrente dallo stack per il contesto corrente e imposta l'utilità precedente come utilità di pianificazione corrente.  
  
 Il runtime fornisce diversi modi per gestire la durata di un'istanza dell'utilità di pianificazione.  Nella tabella seguente viene illustrato il metodo appropriato che rilascia o disconnette l'utilità di pianificazione dal contesto corrente per ogni metodo che crea o associa un'utilità di pianificazione al contesto corrente.  
  
|Metodo che crea o associa l'utilità di pianificazione|Metodo che rilascia o disconnette l'utilità di pianificazione|  
|-----------------------------------------------------------|-------------------------------------------------------------------|  
|`CurrentScheduler::Create`|`CurrentScheduler::Detach`|  
|`Scheduler::Create`|`Scheduler::Release`|  
|`Scheduler::Attach`|`CurrentScheduler::Detach`|  
|`Scheduler::Reference`|`Scheduler::Release`|  
  
 Se si chiama il metodo non appropriato per rilasciare o disconnettere l'utilità di pianificazione, viene generato un comportamento non specificato in runtime.  
  
 Quando, ad esempio, si utilizza la libreria PPL che consente al runtime di creare automaticamente l'utilità di pianificazione predefinita, non rilasciare o disconnettere tale utilità di pianificazione.  Il runtime gestisce la durata di tutte le utilità di pianificazione create.  
  
 Poiché il runtime elimina un oggetto `Scheduler` solo dopo il completamento di tutte le attività, è possibile utilizzare il metodo [concurrency::Scheduler::RegisterShutdownEvent](../Topic/Scheduler::RegisterShutdownEvent%20Method.md) o il metodo [concurrency::CurrentScheduler::RegisterShutdownEvent](../Topic/CurrentScheduler::RegisterShutdownEvent%20Method.md) per ricevere una notifica quando un oggetto `Scheduler` viene eliminato.  Questa funzionalità è utile quando è necessario attendere il completamento di ogni attività pianificata da un oggetto `Scheduler`.  
  
 \[[Top](#top)\]  
  
##  <a name="features"></a> Metodi e funzionalità  
 In questa sezione vengono riepilogati i metodi principali delle classi `CurrentScheduler` e `Scheduler`.  
  
 La classe `CurrentScheduler` può essere considerata come un supporto per la creazione di un'utilità di pianificazione da utilizzare nel contesto corrente.  La classe `Scheduler` consente di controllare un'utilità di pianificazione che appartiene a un altro contesto.  
  
 Nella tabella seguente vengono illustrati i metodi principali definiti dalla classe `CurrentScheduler`.  
  
|Metodo|Descrizione|  
|------------|-----------------|  
|[Create](../Topic/CurrentScheduler::Create%20Method.md)|Crea un oggetto `Scheduler` che utilizza i criteri specificati e lo associa al contesto corrente.|  
|[Get](../Topic/CurrentScheduler::Get%20Method.md)|Recupera un puntatore all'oggetto `Scheduler` associato al contesto corrente.  Questo metodo non incrementa il conteggio dei riferimenti dell'oggetto `Scheduler`.|  
|[Disconnetti](../Topic/CurrentScheduler::Detach%20Method.md)|Disconnette l'utilità di pianificazione corrente dal contesto corrente e imposta l'utilità precedente come utilità di pianificazione corrente.|  
|[RegisterShutdownEvent](../Topic/CurrentScheduler::RegisterShutdownEvent%20Method.md)|Registra un evento che il runtime imposta quando viene eliminata l'utilità di pianificazione corrente.|  
|[CreateScheduleGroup](../Topic/CurrentScheduler::CreateScheduleGroup%20Method.md)|Crea un oggetto [concurrency::ScheduleGroup](../../parallel/concrt/reference/schedulegroup-class.md) nell'utilità di pianificazione corrente.|  
|[ScheduleTask](../Topic/CurrentScheduler::ScheduleTask%20Method.md)|Aggiunge un'attività leggera alla coda di pianificazione dell'utilità di pianificazione corrente.|  
|[GetPolicy](../Topic/CurrentScheduler::GetPolicy%20Method.md)|Recupera una copia dei criteri associati all'utilità di pianificazione corrente.|  
  
 Nella tabella seguente vengono illustrati i metodi principali definiti dalla classe `Scheduler`.  
  
|Metodo|Descrizione|  
|------------|-----------------|  
|[Create](../Topic/Scheduler::Create%20Method.md)|Crea un oggetto `Scheduler` che utilizza i criteri specificati.|  
|[Connetti](../Topic/Scheduler::Attach%20Method.md)|Associa l'oggetto `Scheduler` al contesto corrente.|  
|[Riferimento](../Topic/Scheduler::Reference%20Method.md)|Incrementa il contatore dei riferimenti dell'oggetto `Scheduler`.|  
|[Release](../Topic/Scheduler::Release%20Method.md)|Decrementa il contatore dei riferimenti dell'oggetto `Scheduler`.|  
|[RegisterShutdownEvent](../Topic/Scheduler::RegisterShutdownEvent%20Method.md)|Registra un evento che il runtime imposta quando viene eliminato l'oggetto `Scheduler`.|  
|[CreateScheduleGroup](../Topic/Scheduler::CreateScheduleGroup%20Method.md)|Crea un oggetto [concurrency::ScheduleGroup](../../parallel/concrt/reference/schedulegroup-class.md) nell'oggetto `Scheduler`.|  
|[ScheduleTask](../Topic/Scheduler::ScheduleTask%20Method.md)|Pianifica un'attività leggera dall'oggetto `Scheduler`.|  
|[GetPolicy](../Topic/Scheduler::GetPolicy%20Method.md)|Recupera una copia dei criteri associati all'oggetto `Scheduler`.|  
|[SetDefaultSchedulerPolicy](../Topic/Scheduler::SetDefaultSchedulerPolicy%20Method.md)|Imposta i criteri che devono essere utilizzati dal runtime quando viene creata l'utilità di pianificazione predefinita.|  
|[ResetDefaultSchedulerPolicy](../Topic/Scheduler::ResetDefaultSchedulerPolicy%20Method.md)|Ripristina i criteri predefiniti impostando i criteri che erano attivi prima della chiamata a `SetDefaultSchedulerPolicy`.  Se l'utilità di pianificazione predefinita viene creata dopo questa chiamata, il runtime utilizza le impostazioni dei criteri predefiniti per creare l'utilità di pianificazione.|  
  
 \[[Top](#top)\]  
  
##  <a name="example"></a> Esempio  
 Per gli esempi di base relativi alla creazione e alla gestione di un'istanza dell'utilità di pianificazione, vedere [Procedura: Gestire un'istanza dell'utilità di pianificazione](../../parallel/concrt/how-to-manage-a-scheduler-instance.md).  
  
## Vedere anche  
 [Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)   
 [Procedura: Gestire un'istanza dell'utilità di pianificazione](../../parallel/concrt/how-to-manage-a-scheduler-instance.md)   
 [Criteri dell'utilità di pianificazione](../../parallel/concrt/scheduler-policies.md)   
 [Gruppi di pianificazione](../../parallel/concrt/schedule-groups.md)