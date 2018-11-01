---
title: Istanze dell'utilità di pianificazione
ms.date: 11/04/2016
helpviewer_keywords:
- scheduler instances
ms.assetid: 4819365f-ef99-49cc-963e-50a2a35a8d6b
ms.openlocfilehash: 370f8a3a8fdcc8e1daaee2d3424f939fb719a449
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50570170"
---
# <a name="scheduler-instances"></a>Istanze dell'utilità di pianificazione

Questo documento viene descritto il ruolo delle istanze dell'utilità di pianificazione nel Runtime di concorrenza e come usare il [Concurrency:: Scheduler](../../parallel/concrt/reference/scheduler-class.md) e [Concurrency:: CurrentScheduler](../../parallel/concrt/reference/currentscheduler-class.md) classi per creare e gestire istanze dell'utilità di pianificazione. Le istanze dell'utilità di pianificazione sono utili quando si desidera associare i criteri di pianificazione espliciti a specifici tipi di carichi di lavoro. È possibile ad esempio creare un'istanza dell'utilità di pianificazione per eseguire alcune attività con una priorità di thread elevata e usare l'utilità di pianificazione predefinita per eseguire altre attività con una priorità di thread normale.

> [!TIP]
>  Il runtime di concorrenza fornisce un'utilità di pianificazione predefinita, pertanto non è necessario crearne una nell'applicazione. Poiché l'utilità di pianificazione consente di ottimizzare le prestazioni delle applicazioni, è consigliabile iniziare con il [libreria PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md) o nella [Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md) se si è familiarità con il Runtime di concorrenza.

##  <a name="top"></a> Sezioni

- [L'utilità di pianificazione e le classi CurrentScheduler](#classes)

- [Creazione di un'istanza dell'utilità di pianificazione](#creating)

- [Gestione della durata di un'istanza dell'utilità di pianificazione](#managing)

- [I metodi e funzionalità](#features)

- [Esempio](#example)

##  <a name="classes"></a> L'utilità di pianificazione e le classi CurrentScheduler

L'utilità di pianificazione consente alle applicazioni di usare uno o più *le istanze dell'utilità di pianificazione* per pianificare il lavoro. Il [Concurrency:: Scheduler](../../parallel/concrt/reference/scheduler-class.md) classe rappresenta un'istanza dell'utilità di pianificazione e incapsula la funzionalità correlata alla pianificazione delle attività.

Un thread in cui è collegato a un'utilità di pianificazione è noto come un *contesto di esecuzione*, o semplicemente *contesto*. Un'utilità di pianificazione può essere attivo nel contesto corrente in qualsiasi momento. È noto anche come l'utilità di pianificazione attivi il *utilità di pianificazione corrente*. Il Runtime di concorrenza Usa la [Concurrency:: CurrentScheduler](../../parallel/concrt/reference/currentscheduler-class.md) classe per fornire l'accesso all'utilità di pianificazione corrente. L'utilità di pianificazione corrente per un contesto può essere diverso dall'utilità di pianificazione corrente per un altro contesto. Il runtime non fornisce una rappresentazione a livello di processo dell'utilità di pianificazione corrente.

In genere, il `CurrentScheduler` classe viene utilizzata per accedere a utilità di pianificazione corrente. Il `Scheduler` classe è utile quando è necessario gestire un'utilità di pianificazione che non corrisponde a quello corrente.

Le sezioni seguenti descrivono come creare e gestire un'istanza dell'utilità di pianificazione. Per un esempio completo che illustra queste attività, vedere [procedura: gestire un'istanza dell'utilità di pianificazione](../../parallel/concrt/how-to-manage-a-scheduler-instance.md).

[[Torna all'inizio](#top)]

##  <a name="creating"></a> Creazione di un'istanza dell'utilità di pianificazione

Questi tre modi per creare un `Scheduler` oggetto:

- Se non esiste alcuna utilità di pianificazione, il runtime crea un'utilità di pianificazione predefinita per l'utente quando si usa la funzionalità di runtime, ad esempio, un algoritmo parallelo, per eseguire operazioni. L'utilità di pianificazione predefinita diventa l'utilità di pianificazione corrente per il contesto che avvia il lavoro parallelo.

- Il [CurrentScheduler](reference/currentscheduler-class.md#create) metodo crea un `Scheduler` oggetto che usa un criterio specifico e utilità in questione viene associato al contesto corrente.

- Il [Concurrency](reference/scheduler-class.md#create) metodo crea un `Scheduler` oggetto che usa un criterio specifico, ma non si associa il contesto corrente.

Consentendo il runtime creare un'utilità di pianificazione predefinita consente tutte le attività simultanee condividere la stessa utilità di pianificazione. In genere, la funzionalità fornita dal [Parallel Patterns Library](../../parallel/concrt/parallel-patterns-library-ppl.md) (PPL) o il [Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md) consente di eseguire attività in parallelo. Pertanto, non è necessario lavorare direttamente con l'utilità di pianificazione per controllare i criteri o un ciclo di vita. Quando si usa la libreria PPL o la libreria di agenti, il runtime crea l'utilità di pianificazione predefinita se non esiste e rende l'utilità di pianificazione corrente per ogni contesto. Quando si crea un'utilità di pianificazione e impostarlo come utilità di pianificazione corrente, il runtime usa l'utilità di pianificazione per pianificare le attività. Creare istanze dell'utilità di pianificazione aggiuntive solo quando è necessario un criterio di pianificazione specifico. Per altre informazioni sui criteri associati a un'utilità di pianificazione, vedere [criteri dell'utilità di pianificazione](../../parallel/concrt/scheduler-policies.md).

[[Torna all'inizio](#top)]

##  <a name="managing"></a> Gestione della durata di un'istanza dell'utilità di pianificazione

Il runtime usa un meccanismo di conteggio dei riferimenti per controllare la durata di `Scheduler` oggetti.

Quando si usa la `CurrentScheduler::Create` metodo o il `Scheduler::Create` metodo per creare un `Scheduler` dell'oggetto, il runtime imposta il conteggio di riferimento iniziale dell'unità di pianificazione a uno. Il runtime il conteggio dei riferimenti viene incrementato quando si chiama il [concurrency::Scheduler::Attach](reference/scheduler-class.md#attach) (metodo). Il `Scheduler::Attach` metodo associa il `Scheduler` oggetto al contesto corrente. Ciò rende l'utilità di pianificazione corrente. Quando si chiama il `CurrentScheduler::Create` metodo, il runtime crea un `Scheduler` dell'oggetto e lo collega al contesto corrente (e imposta il conteggio dei riferimenti a uno). È anche possibile usare la [concurrency::Scheduler::Reference](reference/scheduler-class.md#reference) metodo incrementare il conteggio dei riferimenti di un `Scheduler` oggetto.

Il runtime decrementa il conteggio riferimenti quando si chiama il [concurrency::CurrentScheduler::Detach](reference/currentscheduler-class.md#detach) metodo per scollegare l'utilità di pianificazione corrente oppure chiamare il [concurrency::Scheduler::Release](reference/scheduler-class.md#release) (metodo). Quando il conteggio dei riferimenti arriva a zero, il runtime elimina definitivamente il `Scheduler` oggetto Dopotutto pianificata termina le attività. Un'attività in esecuzione può incrementare il conteggio dei riferimenti dell'utilità di pianificazione corrente. Pertanto, se il conteggio dei riferimenti arriva a zero e il conteggio dei riferimenti viene incrementato di un'attività, il runtime non elimina definitivamente il `Scheduler` oggetto finché il conteggio dei riferimenti raggiunge nuovamente da zero e completare tutte le attività.

Il runtime gestisce uno stack interno di `Scheduler` oggetti per ogni contesto. Quando si chiama il `Scheduler::Attach` oppure `CurrentScheduler::Create` metodo, il runtime effettua il push che `Scheduler` oggetto nello stack per il contesto corrente. Ciò rende l'utilità di pianificazione corrente. Quando si chiama `CurrentScheduler::Detach`, il runtime viene visualizzata l'utilità di pianificazione corrente dallo stack per il contesto corrente e imposta quello precedente come utilità di pianificazione corrente.

Il runtime offre diversi modi per gestire la durata di un'istanza dell'utilità di pianificazione. La tabella seguente illustra il metodo appropriato che rilascia DLL o scollegato l'utilità di pianificazione nel contesto corrente per ogni metodo che crea o collega un'utilità di pianificazione per il contesto corrente.

|Creare o attach (metodo)|Metodo detach o di rilascio|
|-----------------------------|------------------------------|
|`CurrentScheduler::Create`|`CurrentScheduler::Detach`|
|`Scheduler::Create`|`Scheduler::Release`|
|`Scheduler::Attach`|`CurrentScheduler::Detach`|
|`Scheduler::Reference`|`Scheduler::Release`|

La chiamata di inappropriato di rilascio o scollegare metodo produce un comportamento non specificato in fase di esecuzione.

Quando si usa la funzionalità, ad esempio, la libreria PPL, che fa sì che il runtime creare l'utilità di pianificazione predefinita per l'utente, non rilasciare o scollegare questa utilità di pianificazione. Il runtime gestisce la durata di qualsiasi utilità di pianificazione che viene creato.

Perché il runtime non elimina definitivamente un `Scheduler` oggetto prima di aver completato tutte le attività, è possibile usare il [concurrency::Scheduler::RegisterShutdownEvent](reference/scheduler-class.md#registershutdownevent) metodo o il [Concurrency:: CurrentScheduler:: RegisterShutdownEvent](reference/currentscheduler-class.md#registershutdownevent) metodo per ricevere una notifica quando un `Scheduler` oggetto viene eliminato definitivamente. Ciò è utile quando è necessario attendere il completamento di tutte le attività che sono pianificata per un `Scheduler` oggetto alla fine.

[[Torna all'inizio](#top)]

##  <a name="features"></a> I metodi e funzionalità

Questa sezione vengono riepilogati i metodi importanti della `CurrentScheduler` e `Scheduler` classi.

Può essere considerata il `CurrentScheduler` classe come supporto per la creazione di un'utilità di pianificazione per l'utilizzo nel contesto corrente. Il `Scheduler` classe consente di controllare un'utilità di pianificazione che appartiene a un altro contesto.

La tabella seguente illustra i metodi importanti che sono definiti dal `CurrentScheduler` classe.

|Metodo|Descrizione|
|------------|-----------------|
|[creare](reference/currentscheduler-class.md#create)|Crea un `Scheduler` oggetto che utilizza i criteri specificati e lo associa al contesto corrente.|
|[Get](reference/currentscheduler-class.md#get)|Recupera un puntatore al `Scheduler` oggetto associato al contesto corrente. Questo metodo non incrementa il conteggio dei riferimenti di `Scheduler` oggetto.|
|[Detach](reference/currentscheduler-class.md#detach)|Consente di scollegare l'utilità di pianificazione corrente dal contesto corrente e imposta quello precedente come utilità di pianificazione corrente.|
|[RegisterShutdownEvent](reference/currentscheduler-class.md#registershutdownevent)|Registra un evento che viene impostato dal runtime quando viene eliminato definitivamente l'utilità di pianificazione corrente.|
|[CreateScheduleGroup](reference/currentscheduler-class.md#createschedulegroup)|Crea una [Concurrency:: ScheduleGroup](../../parallel/concrt/reference/schedulegroup-class.md) oggetto nell'utilità di pianificazione corrente.|
|[ScheduleTask](reference/currentscheduler-class.md#scheduletask)|Aggiunge un'attività leggera per la coda dell'utilità di pianificazione corrente.|
|[GetPolicy](reference/currentscheduler-class.md#getpolicy)|Recupera una copia del criterio associato con l'utilità di pianificazione corrente.|

La tabella seguente illustra i metodi importanti che sono definiti dal `Scheduler` classe.

|Metodo|Descrizione|
|------------|-----------------|
|[creare](reference/scheduler-class.md#create)|Crea un `Scheduler` oggetto che usa i criteri specificati.|
|[Attach](reference/scheduler-class.md#attach)|Associa il `Scheduler` oggetto al contesto corrente.|
|[Riferimento](reference/scheduler-class.md#reference)|Il contatore dei riferimenti viene incrementato il `Scheduler` oggetto.|
|[Rilascio](reference/scheduler-class.md#release)|Decrementa il contatore dei riferimenti di `Scheduler` oggetto.|
|[RegisterShutdownEvent](reference/scheduler-class.md#registershutdownevent)|Registra un evento che viene impostato dal runtime quando il `Scheduler` oggetto viene eliminato definitivamente.|
|[CreateScheduleGroup](reference/scheduler-class.md#createschedulegroup)|Crea una [Concurrency:: ScheduleGroup](../../parallel/concrt/reference/schedulegroup-class.md) dell'oggetto nel `Scheduler` oggetto.|
|[ScheduleTask](reference/scheduler-class.md#scheduletask)|Consente di pianificare un'attività leggera dal `Scheduler` oggetto.|
|[GetPolicy](reference/scheduler-class.md#getpolicy)|Recupera una copia dei criteri che sono associato il `Scheduler` oggetto.|
|[SetDefaultSchedulerPolicy](reference/scheduler-class.md#setdefaultschedulerpolicy)|Imposta i criteri per il runtime da utilizzare durante la creazione di utilità di pianificazione predefinita.|
|[ResetDefaultSchedulerPolicy](reference/scheduler-class.md#resetdefaultschedulerpolicy)|Consente di ripristinare il criterio predefinito a quello che era attivo prima della chiamata a `SetDefaultSchedulerPolicy`. Se l'utilità di pianificazione predefinita viene creato dopo questa chiamata, il runtime Usa le impostazioni di criteri predefinite per creare l'utilità di pianificazione.|

[[Torna all'inizio](#top)]

##  <a name="example"></a> Esempio

Per esempi di base di come creare e gestire un'istanza dell'utilità di pianificazione, vedere [procedura: gestire un'istanza dell'utilità di pianificazione](../../parallel/concrt/how-to-manage-a-scheduler-instance.md).

## <a name="see-also"></a>Vedere anche

[Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)<br/>
[Procedura: Gestire un'istanza dell'utilità di pianificazione](../../parallel/concrt/how-to-manage-a-scheduler-instance.md)<br/>
[Criteri dell'utilità di pianificazione](../../parallel/concrt/scheduler-policies.md)<br/>
[Gruppi di pianificazione](../../parallel/concrt/schedule-groups.md)

