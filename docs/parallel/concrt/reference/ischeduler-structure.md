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
ms.openlocfilehash: ccd82b5c5112bc322717f2b58d79d4c8f34f5bbd
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368166"
---
# <a name="ischeduler-structure"></a>Struttura IScheduler

Un'interfaccia a un'astrazione di un'utilità di pianificazione del lavoro. Gestione risorse del runtime di concorrenza usa tale interfaccia per comunicare con le utilità di pianificazione del lavoro.

## <a name="syntax"></a>Sintassi

```cpp
struct IScheduler;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IScheduler::AddVirtualProcessors](#addvirtualprocessors)|Fornisce un'utilità di pianificazione con un set di radici del processore virtuale per il relativo utilizzo. Ogni `IVirtualProcessorRoot` interfaccia rappresenta il diritto di eseguire un singolo thread in grado di eseguire operazioni per conto dell'utilità di pianificazione.|
|[IScheduler::GetId](#getid)|Restituisce un identificatore univoco per l'utilità di pianificazione.|
|[IScheduler::GetPolicy](#getpolicy)|Restituisce una copia dei criteri dell'utilità di pianificazione. Per ulteriori informazioni sui criteri dell'utilità di pianificazione, vedere [SchedulerPolicy](schedulerpolicy-class.md).|
|[IScheduler::NotifyResourcesExternallyBusy](#notifyresourcesexternallybusy)|Notifica a questa utilità di pianificazione che i thread di `ppVirtualProcessorRoots` hardware rappresentati dal set di radici del processore virtuale nell'array sono ora utilizzati da altre utilità di pianificazione.|
|[IScheduler::NotifyResourcesExternallyIdle](#notifyresourcesexternallyidle)|Notifica a questa utilità di pianificazione che i thread di `ppVirtualProcessorRoots` hardware rappresentati dal set di radici del processore virtuale nell'array non vengono utilizzati da altre utilità di pianificazione.|
|[IScheduler::RemoveVirtualProcessors](#removevirtualprocessors)|Avvia la rimozione delle radici del processore virtuale precedentemente allocate a questa utilità di pianificazione.|
|[IScheduler::Statistiche](#statistics)|Fornisce informazioni relative alle frequenze di arrivo e completamento delle attività e alla modifica della lunghezza della coda per un'utilità di pianificazione.|

## <a name="remarks"></a>Osservazioni

Se si implementa un'utilità di pianificazione personalizzata che comunica con `IScheduler` Gestione risorse, è necessario fornire un'implementazione dell'interfaccia. Questa interfaccia è un'estremità di un canale bidirezionale di comunicazione tra un'utilità di pianificazione e Gestione risorse. L'altra estremità `IResourceManager` è `ISchedulerProxy` rappresentata dalle interfacce e implementate da Gestione risorse.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IScheduler`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm.h

**Spazio dei nomi:** Concurrency

## <a name="ischeduleraddvirtualprocessors-method"></a><a name="addvirtualprocessors"></a>Metodo IScheduler::AddVirtualProcessors

Fornisce un'utilità di pianificazione con un set di radici del processore virtuale per il relativo utilizzo. Ogni `IVirtualProcessorRoot` interfaccia rappresenta il diritto di eseguire un singolo thread in grado di eseguire operazioni per conto dell'utilità di pianificazione.

```cpp
virtual void AddVirtualProcessors(
    _In_reads_(count) IVirtualProcessorRoot** ppVirtualProcessorRoots,
    unsigned int count) = 0;
```

### <a name="parameters"></a>Parametri

*ppVirtualProcessorRoots*<br/>
Matrice di `IVirtualProcessorRoot` interfacce che rappresentano le radici del processore virtuale aggiunte all'utilità di pianificazione.

*count*<br/>
Numero di `IVirtualProcessorRoot` interfacce nella matrice.

### <a name="remarks"></a>Osservazioni

Gestione risorse richiama `AddVirtualProcessor` il metodo per concedere un set iniziale di radici del processore virtuale a un'utilità di pianificazione. Potrebbe anche richiamare il metodo per aggiungere radici del processore virtuale all'utilità di pianificazione quando ribilancia le risorse tra le utilità di pianificazione.

## <a name="ischedulergetid-method"></a><a name="getid"></a>Metodo IScheduler::GetId

Restituisce un identificatore univoco per l'utilità di pianificazione.

```cpp
virtual unsigned int GetId() const = 0;
```

### <a name="return-value"></a>Valore restituito

Identificatore integer univoco.

### <a name="remarks"></a>Osservazioni

È necessario utilizzare la funzione [GetSchedulerId](concurrency-namespace-functions.md) per ottenere un `IScheduler` identificatore univoco per l'oggetto che implementa l'interfaccia, prima di utilizzare l'interfaccia come parametro per i metodi forniti da Gestione risorse. Si prevede di restituire lo `GetId` stesso identificatore quando viene richiamata la funzione.

Un identificatore ottenuto da un'origine diversa potrebbe causare un comportamento indefinito.

## <a name="ischedulergetpolicy-method"></a><a name="getpolicy"></a>Metodo IScheduler::GetPolicy

Restituisce una copia dei criteri dell'utilità di pianificazione. Per ulteriori informazioni sui criteri dell'utilità di pianificazione, vedere [SchedulerPolicy](schedulerpolicy-class.md).

```cpp
virtual SchedulerPolicy GetPolicy() const = 0;
```

### <a name="return-value"></a>Valore restituito

Copia dei criteri dell'utilità di pianificazione.

## <a name="ischedulernotifyresourcesexternallybusy-method"></a><a name="notifyresourcesexternallybusy"></a>Metodo IScheduler::NotifyResourcesExternallyBusyIScheduler::NotifyResourcesExternallyBusy Method

Notifica a questa utilità di pianificazione che i thread di `ppVirtualProcessorRoots` hardware rappresentati dal set di radici del processore virtuale nell'array sono ora utilizzati da altre utilità di pianificazione.

```cpp
virtual void NotifyResourcesExternallyBusy(
    _In_reads_(count) IVirtualProcessorRoot** ppVirtualProcessorRoots,
    unsigned int count) = 0;
```

### <a name="parameters"></a>Parametri

*ppVirtualProcessorRoots*<br/>
Matrice di `IVirtualProcessorRoot` interfacce associate ai thread di hardware in cui altre utilità di pianificazione sono diventate occupate.

*count*<br/>
Numero di `IVirtualProcessorRoot` interfacce nella matrice.

### <a name="remarks"></a>Osservazioni

È possibile che un particolare thread di hardware venga assegnato a più utilità di pianificazione contemporaneamente. Uno dei motivi potrebbe essere che non ci sono abbastanza thread di hardware nel sistema per soddisfare la concorrenza minima per tutte le utilità di pianificazione, senza condividere le risorse. Un'altra possibilità è che le risorse vengano temporaneamente assegnate ad altre utilità di pianificazione quando l'utilità di pianificazione proprietaria non le utilizza, tramite tutte le radici del processore virtuale in tale thread di hardware che viene disattivato.

Il livello di sottoscrizione di un thread di hardware è indicato dal numero di thread sottoscritti e dalle radici del processore virtuale attivate associate a tale thread di hardware. Dal punto di vista di una particolare utilità di pianificazione, il livello di sottoscrizione esterno di un thread di hardware è la parte della sottoscrizione a cui contribuiscono altre utilità di pianificazione. Le notifiche che le risorse sono occupate esternamente vengono inviate a un'utilità di pianificazione quando il livello di sottoscrizione esterno per un thread di hardware si sposta da zero in territorio positivo.

Le notifiche tramite questo metodo vengono inviate solo alle `MinConcurrency` utilità di pianificazione che dispongono di un criterio in cui il valore per la chiave dei criteri è uguale al valore per la chiave dei `MaxConcurrency` criteri. Per ulteriori informazioni sui criteri dell'utilità di pianificazione, vedere [SchedulerPolicy](schedulerpolicy-class.md).

Un'utilità di pianificazione qualificata per le notifiche ottiene un set di notifiche iniziali quando viene creata, informandolo se le risorse appena assegnate sono occupate esternamente o inattive.

## <a name="ischedulernotifyresourcesexternallyidle-method"></a><a name="notifyresourcesexternallyidle"></a>Metodo IScheduler::NotifyResourcesExternallyIdle

Notifica a questa utilità di pianificazione che i thread di `ppVirtualProcessorRoots` hardware rappresentati dal set di radici del processore virtuale nell'array non vengono utilizzati da altre utilità di pianificazione.

```cpp
virtual void NotifyResourcesExternallyIdle(
    _In_reads_(count) IVirtualProcessorRoot** ppVirtualProcessorRoots,
    unsigned int count) = 0;
```

### <a name="parameters"></a>Parametri

*ppVirtualProcessorRoots*<br/>
Matrice di `IVirtualProcessorRoot` interfacce associate a thread di hardware in cui altre utilità di pianificazione sono diventate inattive.

*count*<br/>
Numero di `IVirtualProcessorRoot` interfacce nella matrice.

### <a name="remarks"></a>Osservazioni

È possibile che un particolare thread di hardware venga assegnato a più utilità di pianificazione contemporaneamente. Uno dei motivi potrebbe essere che non ci sono abbastanza thread di hardware nel sistema per soddisfare la concorrenza minima per tutte le utilità di pianificazione, senza condividere le risorse. Un'altra possibilità è che le risorse vengano temporaneamente assegnate ad altre utilità di pianificazione quando l'utilità di pianificazione proprietaria non le utilizza, tramite tutte le radici del processore virtuale in tale thread di hardware che viene disattivato.

Il livello di sottoscrizione di un thread di hardware è indicato dal numero di thread sottoscritti e dalle radici del processore virtuale attivate associate a tale thread di hardware. Dal punto di vista di una particolare utilità di pianificazione, il livello di sottoscrizione esterno di un thread di hardware è la parte della sottoscrizione a cui contribuiscono altre utilità di pianificazione. Le notifiche che le risorse sono occupate esternamente vengono inviate a un'utilità di pianificazione quando il livello di sottoscrizione esterno per un thread di hardware scende a zero da un valore positivo precedente.

Le notifiche tramite questo metodo vengono inviate solo alle `MinConcurrency` utilità di pianificazione che dispongono di un criterio in cui il valore per la chiave dei criteri è uguale al valore per la chiave dei `MaxConcurrency` criteri. Per ulteriori informazioni sui criteri dell'utilità di pianificazione, vedere [SchedulerPolicy](schedulerpolicy-class.md).

Un'utilità di pianificazione qualificata per le notifiche ottiene un set di notifiche iniziali quando viene creata, informandolo se le risorse appena assegnate sono occupate esternamente o inattive.

## <a name="ischedulerremovevirtualprocessors-method"></a><a name="removevirtualprocessors"></a>Metodo IScheduler::RemoveVirtualProcessors

Avvia la rimozione delle radici del processore virtuale precedentemente allocate a questa utilità di pianificazione.

```cpp
virtual void RemoveVirtualProcessors(
    _In_reads_(count) IVirtualProcessorRoot** ppVirtualProcessorRoots,
    unsigned int count) = 0;
```

### <a name="parameters"></a>Parametri

*ppVirtualProcessorRoots*<br/>
Matrice di `IVirtualProcessorRoot` interfacce che rappresentano le radici del processore virtuale da rimuovere.

*count*<br/>
Numero di `IVirtualProcessorRoot` interfacce nella matrice.

### <a name="remarks"></a>Osservazioni

Gestione risorse richiama `RemoveVirtualProcessors` il metodo per riprendere un set di radici del processore virtuale da un'utilità di pianificazione. L'utilità di pianificazione deve richiamare il [Remove](iexecutionresource-structure.md#remove) metodo su ogni interfaccia quando viene eseguita con le radici del processore virtuale. Non utilizzare `IVirtualProcessorRoot` un'interfaccia dopo aver `Remove` richiamato il metodo su di essa.

Il `ppVirtualProcessorRoots` parametro punta a una matrice di interfacce. Tra l'insieme di radici del processore virtuale da rimuovere, le radici `Remove` non sono mai state attivate possono essere restituite immediatamente utilizzando il metodo. Le radici che sono state attivate e che eseguono il lavoro o sono state disattivate e sono in attesa dell'arrivo del lavoro, devono essere restituite in modo asincrono. L'utilità di pianificazione deve eseguire ogni tentativo di rimuovere la radice del processore virtuale il più rapidamente possibile. Ritardare la rimozione delle radici del processore virtuale può comportare l'oversubscription non intenzionale all'interno dell'utilità di pianificazione.

## <a name="ischedulerstatistics-method"></a><a name="statistics"></a>Metodo IScheduler::Statistics

Fornisce informazioni relative alle frequenze di arrivo e completamento delle attività e alla modifica della lunghezza della coda per un'utilità di pianificazione.

```cpp
virtual void Statistics(
    _Out_ unsigned int* pTaskCompletionRate,
    _Out_ unsigned int* pTaskArrivalRate,
    _Out_ unsigned int* pNumberOfTasksEnqueued) = 0;
```

### <a name="parameters"></a>Parametri

*pTaskCompletionRate (Tassodicompletamento di base)*<br/>
Numero di attività completate dall'utilità di pianificazione dall'ultima chiamata a questo metodo.

*pTaskArrivalRate (tassodiarrivi di pTask)*<br/>
Numero di attività che sono arrivate nell'utilità di pianificazione dall'ultima chiamata a questo metodo.

*pNumberNumberOfTasksIn coda*<br/>
Numero totale di attività in tutte le code dell'utilità di pianificazione.

### <a name="remarks"></a>Osservazioni

Questo metodo viene richiamato da Gestione risorse per raccogliere statistiche per un'utilità di pianificazione. Le statistiche raccolte qui verranno usate per guidare gli algoritmi di feedback dinamico per determinare quando è opportuno assegnare più risorse all'utilità di pianificazione e quando eliminare le risorse. I valori forniti dall'utilità di pianificazione possono essere ottimistici e non devono necessariamente riflettere in modo accurato il conteggio corrente.

È necessario implementare questo metodo se si desidera che in Gestione risorse venga utilizzato un feedback in merito all'arrivo delle attività per determinare come bilanciare la risorsa tra la propria utilità di pianificazione e le altre registrate con Gestione risorse. Se si sceglie di non raccogliere statistiche, `DynamicProgressFeedback` è `DynamicProgressFeedbackDisabled` possibile impostare la chiave dei criteri sul valore nei criteri dell'utilità di pianificazione e Gestione risorse non richiamerà questo metodo nell'utilità di pianificazione.

In assenza di informazioni statistiche, Gestione risorse utilizzerà i livelli di sottoscrizione dei thread hardware per prendere decisioni relative all'allocazione e alla migrazione delle risorse. Per ulteriori informazioni sui livelli di sottoscrizione, vedere [IExecutionResource::CurrentSubscriptionLevel](iexecutionresource-structure.md#currentsubscriptionlevel).

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[PolicyElementKey](concurrency-namespace-enums.md)<br/>
[Classe SchedulerPolicy](schedulerpolicy-class.md)<br/>
[Struttura IExecutionContext](iexecutioncontext-structure.md)<br/>
[Struttura IThreadProxy](ithreadproxy-structure.md)<br/>
[Struttura IVirtualProcessorRoot](ivirtualprocessorroot-structure.md)<br/>
[Struttura IResourceManager](iresourcemanager-structure.md)
