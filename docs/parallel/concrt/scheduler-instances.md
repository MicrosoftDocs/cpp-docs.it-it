---
title: Istanze dell'utilità di pianificazione
ms.date: 11/04/2016
helpviewer_keywords:
- scheduler instances
ms.assetid: 4819365f-ef99-49cc-963e-50a2a35a8d6b
ms.openlocfilehash: e9e9b8124254084ac30191d37d49f2ef72bd677e
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77142288"
---
# <a name="scheduler-instances"></a>Istanze dell'utilità di pianificazione

Questo documento descrive il ruolo delle istanze dell'utilità di pianificazione nel runtime di concorrenza e come usare le classi [Concurrency:: Scheduler](../../parallel/concrt/reference/scheduler-class.md) e [Concurrency:: CurrentScheduler](../../parallel/concrt/reference/currentscheduler-class.md) per creare e gestire le istanze dell'utilità di pianificazione. Le istanze dell'utilità di pianificazione sono utili quando si desidera associare criteri di pianificazione espliciti a tipi specifici di carichi di lavoro. È possibile ad esempio creare un'istanza dell'utilità di pianificazione per eseguire alcune attività con una priorità di thread elevata e usare l'utilità di pianificazione predefinita per eseguire altre attività con una priorità di thread normale.

> [!TIP]
> Il runtime di concorrenza fornisce un'utilità di pianificazione predefinita, pertanto non è necessario crearne una nell'applicazione. Poiché il Utilità di pianificazione consente di ottimizzare le prestazioni delle applicazioni, è consigliabile iniziare con la libreria [PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md) o la [libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md) se non si ha familiarità con l'runtime di concorrenza.

## <a name="top"></a> Sezioni

- [Classi di utilità di pianificazione e CurrentScheduler](#classes)

- [Creazione di un'istanza dell'utilità di pianificazione](#creating)

- [Gestione della durata di un'istanza dell'utilità di pianificazione](#managing)

- [Metodi e funzionalità](#features)

- [Esempio](#example)

## <a name="classes"></a>Classi di utilità di pianificazione e CurrentScheduler

Il Utilità di pianificazione consente alle applicazioni di usare una o più *istanze dell'utilità di pianificazione* per pianificare il lavoro. La classe [Concurrency:: Scheduler](../../parallel/concrt/reference/scheduler-class.md) rappresenta un'istanza dell'utilità di pianificazione e incapsula la funzionalità correlata alle attività di pianificazione.

Un thread associato a un'utilità di pianificazione è noto come contesto di *esecuzione*oppure solo come *contesto*. Un'utilità di pianificazione può essere attiva nel contesto corrente in qualsiasi momento. L'utilità di pianificazione attiva è nota anche come *utilità di pianificazione corrente*. Il runtime di concorrenza usa la classe [Concurrency:: CurrentScheduler](../../parallel/concrt/reference/currentscheduler-class.md) per fornire l'accesso all'utilità di pianificazione corrente. L'utilità di pianificazione corrente per un contesto può differire dall'utilità di pianificazione corrente per un altro contesto. Il runtime non fornisce una rappresentazione a livello di processo dell'utilità di pianificazione corrente.

In genere, la classe `CurrentScheduler` viene utilizzata per accedere all'utilità di pianificazione corrente. La classe `Scheduler` è utile quando è necessario gestire un'utilità di pianificazione che non corrisponde a quella corrente.

Nelle sezioni seguenti viene descritto come creare e gestire un'istanza dell'utilità di pianificazione. Per un esempio completo in cui vengono illustrate queste attività, vedere [procedura: gestire un'istanza dell'utilità di pianificazione](../../parallel/concrt/how-to-manage-a-scheduler-instance.md).

[[Torna all'inizio](#top)]

## <a name="creating"></a>Creazione di un'istanza dell'utilità di pianificazione

Esistono tre modi per creare un oggetto `Scheduler`:

- Se non esiste alcuna utilità di pianificazione, il runtime crea automaticamente un'utilità di pianificazione predefinita quando si usa la funzionalità di runtime, ad esempio un algoritmo parallelo, per eseguire il lavoro. L'utilità di pianificazione predefinita diventa l'utilità di pianificazione corrente per il contesto che avvia il lavoro parallelo.

- Il metodo [Concurrency:: CurrentScheduler:: create](reference/currentscheduler-class.md#create) crea un oggetto `Scheduler` che utilizza un criterio specifico e associa tale utilità di pianificazione al contesto corrente.

- Il metodo [Concurrency:: Scheduler:: create](reference/scheduler-class.md#create) crea un `Scheduler` oggetto che utilizza un criterio specifico, ma non lo associa al contesto corrente.

Consentire al runtime di creare un'utilità di pianificazione predefinita consente a tutte le attività simultanee di condividere la stessa utilità di pianificazione. In genere, la funzionalità fornita dalla libreria PPL ( [Parallel Patterns Library](../../parallel/concrt/parallel-patterns-library-ppl.md) ) o dalla [libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md) viene utilizzata per eseguire operazioni parallele. Pertanto, non è necessario collaborare direttamente con l'utilità di pianificazione per controllare i criteri o la durata. Quando si usa la libreria PPL o la libreria di agenti, il runtime crea l'utilità di pianificazione predefinita se non esiste e la rende l'utilità di pianificazione corrente per ogni contesto. Quando si crea un'utilità di pianificazione e la si imposta come utilità di pianificazione corrente, il runtime usa tale utilità di pianificazione per pianificare le attività. Creare istanze dell'utilità di pianificazione aggiuntive solo quando sono necessari criteri di pianificazione specifici. Per ulteriori informazioni sui criteri associati a un'utilità di pianificazione, vedere criteri dell' [utilità di pianificazione](../../parallel/concrt/scheduler-policies.md).

[[Torna all'inizio](#top)]

## <a name="managing"></a>Gestione della durata di un'istanza dell'utilità di pianificazione

Il runtime usa un meccanismo di conteggio dei riferimenti per controllare la durata degli oggetti `Scheduler`.

Quando si usa il metodo `CurrentScheduler::Create` o il metodo `Scheduler::Create` per creare un oggetto `Scheduler`, il runtime imposta su uno il conteggio dei riferimenti iniziali di tale utilità di pianificazione. Il runtime incrementa il conteggio dei riferimenti quando si chiama il metodo [Concurrency:: Scheduler:: alconnessione](reference/scheduler-class.md#attach) . Il metodo `Scheduler::Attach` associa l'oggetto `Scheduler` insieme al contesto corrente. Questo lo rende l'utilità di pianificazione corrente. Quando si chiama il metodo `CurrentScheduler::Create`, il runtime crea un oggetto `Scheduler` e lo connette al contesto corrente (e imposta il conteggio dei riferimenti su uno). È anche possibile usare il metodo [Concurrency:: Scheduler:: Reference](reference/scheduler-class.md#reference) per incrementare il conteggio dei riferimenti di un oggetto `Scheduler`.

Il runtime decrementa il conteggio dei riferimenti quando si chiama il metodo [Concurrency:: CurrentScheduler::D etach](reference/currentscheduler-class.md#detach) per scollegare l'utilità di pianificazione corrente o chiamare il metodo [Concurrency:: Scheduler:: Release](reference/scheduler-class.md#release) . Quando il conteggio dei riferimenti raggiunge zero, il runtime elimina l'oggetto `Scheduler` dopo il completamento di tutte le attività pianificate. Un'attività in esecuzione può incrementare il conteggio dei riferimenti dell'utilità di pianificazione corrente. Di conseguenza, se il conteggio dei riferimenti raggiunge zero e un'attività incrementa il conteggio dei riferimenti, il runtime non elimina definitivamente l'oggetto `Scheduler` fino a quando il conteggio dei riferimenti non raggiunge di nuovo zero e tutte le attività vengono completate.

Il runtime mantiene uno stack interno di oggetti `Scheduler` per ogni contesto. Quando si chiama il metodo `Scheduler::Attach` o `CurrentScheduler::Create`, il runtime effettua il push dell'oggetto `Scheduler` nello stack per il contesto corrente. Questo lo rende l'utilità di pianificazione corrente. Quando si chiama `CurrentScheduler::Detach`, il runtime estrae l'utilità di pianificazione corrente dallo stack per il contesto corrente e imposta quello precedente come utilità di pianificazione corrente.

Il runtime offre diversi modi per gestire la durata di un'istanza dell'utilità di pianificazione. La tabella seguente illustra il metodo appropriato che rilascia o scollega l'utilità di pianificazione dal contesto corrente per ogni metodo che crea o connette un'utilità di pianificazione al contesto corrente.

|Metodo di creazione o di associazione|Metodo di rilascio o scollegamento|
|-----------------------------|------------------------------|
|`CurrentScheduler::Create`|`CurrentScheduler::Detach`|
|`Scheduler::Create`|`Scheduler::Release`|
|`Scheduler::Attach`|`CurrentScheduler::Detach`|
|`Scheduler::Reference`|`Scheduler::Release`|

La chiamata al metodo di rilascio o scollegamento non appropriato produce un comportamento non specificato nel Runtime.

Quando si usa la funzionalità, ad esempio la libreria PPL, che fa in modo che il runtime crei automaticamente l'utilità di pianificazione predefinita, non rilasciare o scollegare l'utilità di pianificazione. Il runtime gestisce la durata di tutte le utilità di pianificazione create.

Poiché il runtime non elimina definitivamente un oggetto `Scheduler` prima del completamento di tutte le attività, è possibile utilizzare il metodo [Concurrency:: Scheduler:: RegisterShutdownEvent](reference/scheduler-class.md#registershutdownevent) o il metodo [Concurrency:: CurrentScheduler:: RegisterShutdownEvent](reference/currentscheduler-class.md#registershutdownevent) per ricevere una notifica quando un oggetto `Scheduler` viene eliminato definitivamente. Questa operazione è utile quando è necessario attendere il completamento di ogni attività pianificata da un oggetto `Scheduler`.

[[Torna all'inizio](#top)]

## <a name="features"></a>Metodi e funzionalità

In questa sezione vengono riepilogati i metodi importanti delle classi `CurrentScheduler` e `Scheduler`.

Si pensi alla classe `CurrentScheduler` come helper per la creazione di un'utilità di pianificazione per l'utilizzo nel contesto corrente. La classe `Scheduler` consente di controllare un'utilità di pianificazione che appartiene a un altro contesto.

La tabella seguente illustra i metodi importanti definiti dalla classe `CurrentScheduler`.

|Metodo|Descrizione|
|------------|-----------------|
|[Creare](reference/currentscheduler-class.md#create)|Crea un `Scheduler` oggetto che utilizza il criterio specificato e lo associa al contesto corrente.|
|[GET](reference/currentscheduler-class.md#get)|Recupera un puntatore all'oggetto `Scheduler` associato al contesto corrente. Questo metodo non incrementa il conteggio dei riferimenti dell'oggetto `Scheduler`.|
|[Scollega](reference/currentscheduler-class.md#detach)|Scollega l'utilità di pianificazione corrente dal contesto corrente e imposta quella precedente come utilità di pianificazione corrente.|
|[RegisterShutdownEvent](reference/currentscheduler-class.md#registershutdownevent)|Registra un evento impostato dal runtime quando l'utilità di pianificazione corrente viene distrutta.|
|[CreateScheduleGroup](reference/currentscheduler-class.md#createschedulegroup)|Crea un oggetto [Concurrency:: ScheduleGroup](../../parallel/concrt/reference/schedulegroup-class.md) nell'utilità di pianificazione corrente.|
|[ScheduleTask](reference/currentscheduler-class.md#scheduletask)|Aggiunge un'attività leggera alla coda di pianificazione dell'utilità di pianificazione corrente.|
|[GetPolicy](reference/currentscheduler-class.md#getpolicy)|Recupera una copia del criterio associato all'utilità di pianificazione corrente.|

La tabella seguente illustra i metodi importanti definiti dalla classe `Scheduler`.

|Metodo|Descrizione|
|------------|-----------------|
|[Creare](reference/scheduler-class.md#create)|Crea un `Scheduler` oggetto che utilizza i criteri specificati.|
|[Collega](reference/scheduler-class.md#attach)|Associa l'oggetto `Scheduler` insieme al contesto corrente.|
|[Riferimento](reference/scheduler-class.md#reference)|Incrementa il contatore dei riferimenti dell'oggetto `Scheduler`.|
|[Versione](reference/scheduler-class.md#release)|Decrementa il contatore dei riferimenti dell'oggetto `Scheduler`.|
|[RegisterShutdownEvent](reference/scheduler-class.md#registershutdownevent)|Registra un evento impostato dal runtime quando l'oggetto `Scheduler` viene eliminato definitivamente.|
|[CreateScheduleGroup](reference/scheduler-class.md#createschedulegroup)|Crea un oggetto [Concurrency:: ScheduleGroup](../../parallel/concrt/reference/schedulegroup-class.md) nell'oggetto `Scheduler`.|
|[ScheduleTask](reference/scheduler-class.md#scheduletask)|Pianifica un'attività leggera dall'oggetto `Scheduler`.|
|[GetPolicy](reference/scheduler-class.md#getpolicy)|Recupera una copia del criterio associato all'oggetto `Scheduler`.|
|[SetDefaultSchedulerPolicy](reference/scheduler-class.md#setdefaultschedulerpolicy)|Imposta i criteri per il runtime da usare quando crea l'utilità di pianificazione predefinita.|
|[ResetDefaultSchedulerPolicy](reference/scheduler-class.md#resetdefaultschedulerpolicy)|Ripristina il criterio predefinito in quello che era attivo prima della chiamata a `SetDefaultSchedulerPolicy`. Se dopo questa chiamata viene creata l'utilità di pianificazione predefinita, il runtime usa le impostazioni predefinite dei criteri per creare l'utilità di pianificazione.|

[[Torna all'inizio](#top)]

## <a name="example"></a>Esempio

Per esempi di base su come creare e gestire un'istanza dell'utilità di pianificazione, vedere [procedura: gestire un'istanza dell'utilità di pianificazione](../../parallel/concrt/how-to-manage-a-scheduler-instance.md).

## <a name="see-also"></a>Vedere anche

[Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)<br/>
[Procedura: Gestire un'istanza dell'utilità di pianificazione](../../parallel/concrt/how-to-manage-a-scheduler-instance.md)<br/>
[Criteri dell'utilità di pianificazione](../../parallel/concrt/scheduler-policies.md)<br/>
[Gruppi di pianificazione](../../parallel/concrt/schedule-groups.md)
