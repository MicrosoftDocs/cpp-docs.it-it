---
title: Struttura IScheduler
ms.date: 11/04/2016
f1_keywords:
- IScheduler
- CONCRTRM/concurrency::IScheduler
- CONCRTRM/concurrency::IScheduler::IScheduler::AddVirtualProcessors
- CONCRTRM/concurrency::IScheduler::IScheduler::GetId
- CONCRTRM/concurrency::IScheduler::IScheduler::GetPolicy
- CONCRTRM/concurrency::IScheduler::IScheduler::NotifyResourcesExternallyBusy
- CONCRTRM/concurrency::IScheduler::IScheduler::NotifyResourcesExternallyIdle
- CONCRTRM/concurrency::IScheduler::IScheduler::RemoveVirtualProcessors
- CONCRTRM/concurrency::IScheduler::IScheduler::Statistics
helpviewer_keywords:
- IScheduler structure
ms.assetid: 471de85a-2b1a-4b6d-ab81-2eff2737161e
ms.openlocfilehash: cd7b04b0dc5ca1bc496ce87a6459d00ed5813bf7
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79422220"
---
# <a name="ischeduler-structure"></a>Struttura IScheduler

Un'interfaccia a un'astrazione di un'utilità di pianificazione del lavoro. Gestione risorse del runtime di concorrenza usa tale interfaccia per comunicare con le utilità di pianificazione del lavoro.

## <a name="syntax"></a>Sintassi

```cpp
struct IScheduler;
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IScheduler:: AddVirtualProcessors](#addvirtualprocessors)|Fornisce un'utilità di pianificazione con un set di radici del processore virtuale per l'utilizzo. Ogni interfaccia `IVirtualProcessorRoot` rappresenta il diritto di eseguire un singolo thread che può eseguire operazioni per conto dell'utilità di pianificazione.|
|[IScheduler:: GetId](#getid)|Restituisce un identificatore univoco per l'utilità di pianificazione.|
|[IScheduler:: GetPolicy](#getpolicy)|Restituisce una copia dei criteri dell'utilità di pianificazione. Per ulteriori informazioni sui criteri dell'utilità di pianificazione, vedere [SchedulerPolicy](schedulerpolicy-class.md).|
|[IScheduler:: NotifyResourcesExternallyBusy](#notifyresourcesexternallybusy)|Notifica all'utilità di pianificazione che i thread hardware rappresentati dal set di radici del processore virtuale nell'array `ppVirtualProcessorRoots` ora vengono utilizzati da altre utilità di pianificazione.|
|[IScheduler:: NotifyResourcesExternallyIdle](#notifyresourcesexternallyidle)|Notifica all'utilità di pianificazione che i thread hardware rappresentati dal set di radici del processore virtuale nella matrice `ppVirtualProcessorRoots` non vengono utilizzati da altre utilità di pianificazione.|
|[IScheduler:: RemoveVirtualProcessors](#removevirtualprocessors)|Avvia la rimozione delle radici del processore virtuale allocate in precedenza all'utilità di pianificazione.|
|[IScheduler:: Statistics](#statistics)|Fornisce informazioni correlate alle tariffe di arrivo e di completamento delle attività e alla lunghezza della coda per un'utilità di pianificazione.|

## <a name="remarks"></a>Osservazioni

Se si implementa un'utilità di pianificazione personalizzata che comunica con il Gestione risorse, è necessario fornire un'implementazione dell'interfaccia `IScheduler`. Questa interfaccia è una estremità di un canale bidirezionale di comunicazione tra un'utilità di pianificazione e la Gestione risorse. L'altra estremità è rappresentata dalle interfacce `IResourceManager` e `ISchedulerProxy` implementate dal Gestione risorse.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IScheduler`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

**Spazio dei nomi:** Concurrency

## <a name="addvirtualprocessors"></a>Metodo IScheduler:: AddVirtualProcessors

Fornisce un'utilità di pianificazione con un set di radici del processore virtuale per l'utilizzo. Ogni interfaccia `IVirtualProcessorRoot` rappresenta il diritto di eseguire un singolo thread che può eseguire operazioni per conto dell'utilità di pianificazione.

```cpp
virtual void AddVirtualProcessors(
    _In_reads_(count) IVirtualProcessorRoot** ppVirtualProcessorRoots,
    unsigned int count) = 0;
```

### <a name="parameters"></a>Parametri

*ppVirtualProcessorRoots*<br/>
Matrice di `IVirtualProcessorRoot` interfacce che rappresentano le radici del processore virtuale da aggiungere all'utilità di pianificazione.

*count*<br/>
Numero di interfacce di `IVirtualProcessorRoot` nella matrice.

### <a name="remarks"></a>Osservazioni

Il Gestione risorse richiama il metodo `AddVirtualProcessor` per concedere un set iniziale di radici del processore virtuale a un'utilità di pianificazione. Potrebbe inoltre richiamare il metodo per aggiungere le radici del processore virtuale all'utilità di pianificazione quando ribilancia le risorse tra le utilità di pianificazione.

## <a name="getid"></a>Metodo IScheduler:: GetId

Restituisce un identificatore univoco per l'utilità di pianificazione.

```cpp
virtual unsigned int GetId() const = 0;
```

### <a name="return-value"></a>Valore restituito

Identificatore univoco di tipo Integer.

### <a name="remarks"></a>Osservazioni

È necessario utilizzare la funzione [GetSchedulerId](concurrency-namespace-functions.md) per ottenere un identificatore univoco per l'oggetto che implementa l'interfaccia `IScheduler`, prima di utilizzare l'interfaccia come parametro per i metodi forniti dall'Gestione risorse. Si prevede che venga restituito lo stesso identificatore quando viene richiamata la funzione `GetId`.

Un identificatore ottenuto da un'origine diversa può causare un comportamento indefinito.

## <a name="getpolicy"></a>Metodo IScheduler:: GetPolicy

Restituisce una copia dei criteri dell'utilità di pianificazione. Per ulteriori informazioni sui criteri dell'utilità di pianificazione, vedere [SchedulerPolicy](schedulerpolicy-class.md).

```cpp
virtual SchedulerPolicy GetPolicy() const = 0;
```

### <a name="return-value"></a>Valore restituito

Una copia dei criteri dell'utilità di pianificazione.

## <a name="notifyresourcesexternallybusy"></a>Metodo IScheduler:: NotifyResourcesExternallyBusy

Notifica all'utilità di pianificazione che i thread hardware rappresentati dal set di radici del processore virtuale nell'array `ppVirtualProcessorRoots` ora vengono utilizzati da altre utilità di pianificazione.

```cpp
virtual void NotifyResourcesExternallyBusy(
    _In_reads_(count) IVirtualProcessorRoot** ppVirtualProcessorRoots,
    unsigned int count) = 0;
```

### <a name="parameters"></a>Parametri

*ppVirtualProcessorRoots*<br/>
Matrice di interfacce di `IVirtualProcessorRoot` associate ai thread hardware in cui altre utilità di pianificazione sono diventate occupate.

*count*<br/>
Numero di interfacce di `IVirtualProcessorRoot` nella matrice.

### <a name="remarks"></a>Osservazioni

È possibile che un particolare thread hardware sia assegnato a più utilità di pianificazione nello stesso momento. Un motivo potrebbe essere che il sistema non dispone di un numero sufficiente di thread hardware per soddisfare la concorrenza minima per tutte le utilità di pianificazione, senza condividere le risorse. Un'altra possibilità è che le risorse vengano assegnate temporaneamente ad altre utilità di pianificazione quando l'utilità di pianificazione proprietaria non le USA, in base a tutte le radici del processore virtuale presenti nel thread hardware da disattivare.

Il livello di sottoscrizione di un thread hardware è indicato dal numero di thread sottoscritti e dalle radici del processore virtuale attivate associate al thread hardware. Dal punto di vista di un particolare utilità di pianificazione, il livello di sottoscrizione esterno di un thread hardware è la parte della sottoscrizione a cui contribuiscono altre utilità di pianificazione. Le notifiche relative all'esterno della disponibilità delle risorse vengono inviate a un'utilità di pianificazione quando il livello di sottoscrizione esterno per un thread hardware viene spostato da zero in territorio positivo.

Le notifiche tramite questo metodo vengono inviate solo alle utilità di pianificazione che dispongono di un criterio in cui il valore per la chiave del criterio `MinConcurrency` è uguale al valore della chiave del criterio di `MaxConcurrency`. Per ulteriori informazioni sui criteri dell'utilità di pianificazione, vedere [SchedulerPolicy](schedulerpolicy-class.md).

Un'utilità di pianificazione che si qualifica per le notifiche ottiene un set di notifiche iniziali al momento della creazione, indicando se le risorse a cui è stata assegnata l'assegnazione sono occupate esternamente o inattive.

## <a name="notifyresourcesexternallyidle"></a>Metodo IScheduler:: NotifyResourcesExternallyIdle

Notifica all'utilità di pianificazione che i thread hardware rappresentati dal set di radici del processore virtuale nella matrice `ppVirtualProcessorRoots` non vengono utilizzati da altre utilità di pianificazione.

```cpp
virtual void NotifyResourcesExternallyIdle(
    _In_reads_(count) IVirtualProcessorRoot** ppVirtualProcessorRoots,
    unsigned int count) = 0;
```

### <a name="parameters"></a>Parametri

*ppVirtualProcessorRoots*<br/>
Matrice di interfacce di `IVirtualProcessorRoot` associate a thread hardware in cui altre utilità di pianificazione sono diventate inattive.

*count*<br/>
Numero di interfacce di `IVirtualProcessorRoot` nella matrice.

### <a name="remarks"></a>Osservazioni

È possibile che un particolare thread hardware sia assegnato a più utilità di pianificazione nello stesso momento. Un motivo potrebbe essere che il sistema non dispone di un numero sufficiente di thread hardware per soddisfare la concorrenza minima per tutte le utilità di pianificazione, senza condividere le risorse. Un'altra possibilità è che le risorse vengano assegnate temporaneamente ad altre utilità di pianificazione quando l'utilità di pianificazione proprietaria non le USA, in base a tutte le radici del processore virtuale presenti nel thread hardware da disattivare.

Il livello di sottoscrizione di un thread hardware è indicato dal numero di thread sottoscritti e dalle radici del processore virtuale attivate associate al thread hardware. Dal punto di vista di un particolare utilità di pianificazione, il livello di sottoscrizione esterno di un thread hardware è la parte della sottoscrizione a cui contribuiscono altre utilità di pianificazione. Le notifiche relative all'esterno delle risorse vengono inviate a un'utilità di pianificazione quando il livello di sottoscrizione esterno per un thread hardware scende a zero da un valore positivo precedente.

Le notifiche tramite questo metodo vengono inviate solo alle utilità di pianificazione che dispongono di un criterio in cui il valore per la chiave del criterio `MinConcurrency` è uguale al valore della chiave del criterio di `MaxConcurrency`. Per ulteriori informazioni sui criteri dell'utilità di pianificazione, vedere [SchedulerPolicy](schedulerpolicy-class.md).

Un'utilità di pianificazione che si qualifica per le notifiche ottiene un set di notifiche iniziali al momento della creazione, indicando se le risorse a cui è stata assegnata l'assegnazione sono occupate esternamente o inattive.

## <a name="removevirtualprocessors"></a>Metodo IScheduler:: RemoveVirtualProcessors

Avvia la rimozione delle radici del processore virtuale allocate in precedenza all'utilità di pianificazione.

```cpp
virtual void RemoveVirtualProcessors(
    _In_reads_(count) IVirtualProcessorRoot** ppVirtualProcessorRoots,
    unsigned int count) = 0;
```

### <a name="parameters"></a>Parametri

*ppVirtualProcessorRoots*<br/>
Matrice di interfacce di `IVirtualProcessorRoot` che rappresentano le radici del processore virtuale da rimuovere.

*count*<br/>
Numero di interfacce di `IVirtualProcessorRoot` nella matrice.

### <a name="remarks"></a>Osservazioni

Il Gestione risorse richiama il metodo `RemoveVirtualProcessors` per riportare un set di radici del processore virtuale da un'utilità di pianificazione. È previsto che l'utilità di pianificazione richiami il metodo [Remove](iexecutionresource-structure.md#remove) su ogni interfaccia quando viene eseguita con le radici del processore virtuale. Non usare un'interfaccia `IVirtualProcessorRoot` dopo aver richiamato il metodo di `Remove`.

Il parametro `ppVirtualProcessorRoots` punta a una matrice di interfacce. Tra il set di radici del processore virtuale da rimuovere, le radici non sono mai state attivate possono essere restituite immediatamente usando il metodo `Remove`. Le radici che sono state attivate e sono in esecuzione o sono state disattivate e sono in attesa dell'arrivo del lavoro, devono essere restituite in modo asincrono. L'utilità di pianificazione deve eseguire ogni tentativo di rimuovere la radice del processore virtuale nel minor tempo possibile. Il ritardo della rimozione delle radici del processore virtuale può comportare l'oversubscription accidentale nell'utilità di pianificazione.

## <a name="statistics"></a>Metodo IScheduler:: Statistics

Fornisce informazioni correlate alle tariffe di arrivo e di completamento delle attività e alla lunghezza della coda per un'utilità di pianificazione.

```cpp
virtual void Statistics(
    _Out_ unsigned int* pTaskCompletionRate,
    _Out_ unsigned int* pTaskArrivalRate,
    _Out_ unsigned int* pNumberOfTasksEnqueued) = 0;
```

### <a name="parameters"></a>Parametri

*pTaskCompletionRate*<br/>
Numero di attività completate dall'utilità di pianificazione dopo l'ultima chiamata a questo metodo.

*pTaskArrivalRate*<br/>
Il numero di attività che sono arrivate nell'utilità di pianificazione dall'ultima chiamata a questo metodo.

*pNumberOfTasksEnqueued*<br/>
Numero totale di attività in tutte le code dell'utilità di pianificazione.

### <a name="remarks"></a>Osservazioni

Questo metodo viene richiamato dal Gestione risorse per raccogliere le statistiche per un'utilità di pianificazione. Le statistiche raccolte qui verranno usate per guidare gli algoritmi di feedback dinamici per determinare quando è appropriato assegnare più risorse all'utilità di pianificazione e quando recuperare le risorse. I valori forniti dall'utilità di pianificazione possono essere ottimisti e non devono necessariamente riflettere il conteggio corrente in modo accurato.

È necessario implementare questo metodo se si desidera che in Gestione risorse venga utilizzato un feedback in merito all'arrivo delle attività per determinare come bilanciare la risorsa tra la propria utilità di pianificazione e le altre registrate con Gestione risorse. Se si sceglie di non raccogliere le statistiche, è possibile impostare la chiave dei criteri `DynamicProgressFeedback` sul valore `DynamicProgressFeedbackDisabled` nei criteri dell'utilità di pianificazione e il Gestione risorse non richiamerà questo metodo nell'utilità di pianificazione.

In assenza di informazioni statistiche, il Gestione risorse utilizzerà i livelli di sottoscrizione dei thread hardware per prendere decisioni relative all'allocazione e alla migrazione delle risorse. Per ulteriori informazioni sui livelli di sottoscrizione, vedere [IExecutionResource:: CurrentSubscriptionLevel](iexecutionresource-structure.md#currentsubscriptionlevel).

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[PolicyElementKey](concurrency-namespace-enums.md)<br/>
[Classe SchedulerPolicy](schedulerpolicy-class.md)<br/>
[Struttura IExecutionContext](iexecutioncontext-structure.md)<br/>
[Struttura IThreadProxy](ithreadproxy-structure.md)<br/>
[Struttura IVirtualProcessorRoot](ivirtualprocessorroot-structure.md)<br/>
[Struttura IResourceManager](iresourcemanager-structure.md)
