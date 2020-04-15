---
title: Struttura IExecutionResource
ms.date: 11/04/2016
f1_keywords:
- IExecutionResource
- CONCRTRM/concurrency::IExecutionResource
- CONCRTRM/concurrency::IExecutionResource::IExecutionResource::CurrentSubscriptionLevel
- CONCRTRM/concurrency::IExecutionResource::IExecutionResource::GetExecutionResourceId
- CONCRTRM/concurrency::IExecutionResource::IExecutionResource::GetNodeId
- CONCRTRM/concurrency::IExecutionResource::IExecutionResource::Remove
helpviewer_keywords:
- IExecutionResource structure
ms.assetid: 6b27042b-b98c-4f7f-b831-566950af84cd
ms.openlocfilehash: 4305948aa4e5da36023c1d4fe8b0b84aa4d59e23
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81377309"
---
# <a name="iexecutionresource-structure"></a>Struttura IExecutionResource

Un'astrazione per un thread hardware.

## <a name="syntax"></a>Sintassi

```cpp
struct IExecutionResource;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IExecutionResource::CurrentSubscriptionLevelIExecutionResource::CurrentSubscriptionLevel](#currentsubscriptionlevel)|Restituisce il numero di radici del processore virtuale attivate e di thread esterni sottoscritti attualmente associati al thread di hardware sottostante rappresentato da questa risorsa di esecuzione.|
|[IExecutionResource::GetExecutionResourceIdIExecutionResource::GetExecutionResourceId](#getexecutionresourceid)|Restituisce un identificatore univoco per il thread di hardware rappresentato da questa risorsa di esecuzione.|
|[IExecutionResource::GetNodeIdIExecutionResource::GetNodeId](#getnodeid)|Restituisce un identificatore univoco per il nodo del processore a cui appartiene questa risorsa di esecuzione.|
|[IExecutionResource::RimuovereI.IExecutionResource::Remove](#remove)|Restituisce questa risorsa di esecuzione a Resource Manager.|

## <a name="remarks"></a>Osservazioni

Le risorse di esecuzione possono essere autonome o associate alle radici del processore virtuale. Una risorsa di esecuzione autonoma viene creata quando un thread nell'applicazione crea una sottoscrizione di thread. I metodi [ISchedulerProxy::SubscribeThread](ischedulerproxy-structure.md#subscribecurrentthread) e [ISchedulerProxy::RequestInitialVirtualProcessors](ischedulerproxy-structure.md#requestinitialvirtualprocessors) creano `IExecutionResource` sottoscrizioni di thread e restituiscono un'interfaccia che rappresenta la sottoscrizione. La creazione di una sottoscrizione di thread consente di informare Gestione risorse che un determinato thread parteciperà al lavoro in coda a un'utilità di pianificazione, insieme alle radici del processore virtuale assegnate da Gestione risorse all'utilità di pianificazione. Gestione risorse utilizza le informazioni per evitare di sovrascrivere i thread di hardware dove è possibile.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IExecutionResource`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm.h

**Spazio dei nomi:** Concurrency

## <a name="iexecutionresourcecurrentsubscriptionlevel-method"></a><a name="currentsubscriptionlevel"></a>Metodo IExecutionResource::CurrentSubscriptionLevelIExecutionResource::CurrentSubscriptionLevel Method

Restituisce il numero di radici del processore virtuale attivate e di thread esterni sottoscritti attualmente associati al thread di hardware sottostante rappresentato da questa risorsa di esecuzione.

```cpp
virtual unsigned int CurrentSubscriptionLevel() const = 0;
```

### <a name="return-value"></a>Valore restituito

Livello di sottoscrizione corrente.

### <a name="remarks"></a>Osservazioni

Il livello di sottoscrizione indica il numero di thread in esecuzione associati al thread di hardware. Sono inclusi solo i thread di cui Gestione risorse è a conoscenza sotto forma di thread sottoscritti e le radici del processore virtuale che eseguono attivamente i proxy dei thread.

La chiamata al metodo [ISchedulerProxy::SubscribeCurrentThread](ischedulerproxy-structure.md#subscribecurrentthread)o al metodo [ISchedulerProxy::RequestInitialVirtualProcessors](ischedulerproxy-structure.md#requestinitialvirtualprocessors) con il parametro `doSubscribeCurrentThread` impostato sul valore **true** incrementa di uno il livello di sottoscrizione di un thread di hardware. Restituiscono inoltre `IExecutionResource` un'interfaccia che rappresenta la sottoscrizione. Una chiamata corrispondente a [IExecutionResource::Remove](#remove) decrementa il livello di sottoscrizione del thread di hardware di uno.

L'atto di attivare una radice del processore virtuale utilizzando il metodo [IVirtualProcessorRoot::Activate](ivirtualprocessorroot-structure.md#activate) incrementa il livello di sottoscrizione di un thread di hardware di uno. I metodi [IVirtualProcessorRoot::Deactivate](ivirtualprocessorroot-structure.md#deactivate)o [IExecutionResource::Remove](#remove) decrement di uno quando vengono richiamati su una radice del processore virtuale attivato.

Gestione risorse usa le informazioni a livello di sottoscrizione come uno dei modi in cui determinare quando spostare le risorse tra le utilità di pianificazione.

## <a name="iexecutionresourcegetexecutionresourceid-method"></a><a name="getexecutionresourceid"></a>Metodo IExecutionResource::GetExecutionResourceIdIExecutionResource::GetExecutionResourceId Method

Restituisce un identificatore univoco per il thread di hardware rappresentato da questa risorsa di esecuzione.

```cpp
virtual unsigned int GetExecutionResourceId() const = 0;
```

### <a name="return-value"></a>Valore restituito

Identificatore univoco del thread di hardware sottostante questa risorsa di esecuzione.

### <a name="remarks"></a>Osservazioni

A ogni thread di hardware viene assegnato un identificatore univoco dal runtime di concorrenza. Se più risorse di esecuzione sono associate thread di hardware, avranno tutti lo stesso identificatore di risorsa di esecuzione.

## <a name="iexecutionresourcegetnodeid-method"></a><a name="getnodeid"></a>Metodo IExecutionResource::GetNodeIdIExecutionResource::GetNodeId Method

Restituisce un identificatore univoco per il nodo del processore a cui appartiene questa risorsa di esecuzione.

```cpp
virtual unsigned int GetNodeId() const = 0;
```

### <a name="return-value"></a>Valore restituito

Identificatore univoco di un nodo del processore.

### <a name="remarks"></a>Osservazioni

Il runtime di concorrenza rappresenta i thread di hardware nel sistema in gruppi di nodi del processore. I nodi sono in genere derivati dalla topologia hardware del sistema. Ad esempio, tutti i processori su un socket specifico o un nodo NUMA specifico possono appartenere allo stesso nodo del processore. Gestione risorse assegna identificatori univoci a `0` questi nodi `nodeCount - 1`a `nodeCount` partire da , dove rappresenta il numero totale di nodi del processore nel sistema.

Il numero di nodi può essere ottenuto dalla funzione [GetProcessorNodeCount](concurrency-namespace-functions.md).

## <a name="iexecutionresourceremove-method"></a><a name="remove"></a>Metodo IExecutionResource::RemoveIExecutionResource::Remove Method

Restituisce questa risorsa di esecuzione a Resource Manager.

```cpp
virtual void Remove(_Inout_ IScheduler* pScheduler) = 0;
```

### <a name="parameters"></a>Parametri

*pScheduler (Utilità di pianificazione)*<br/>
Interfaccia all'utilità di pianificazione che effettua la richiesta di rimozione di questa risorsa di esecuzione.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per restituire risorse di esecuzione autonome e risorse di esecuzione associate alle radici del processore virtuale a Gestione risorse.

Se si tratta di una risorsa di esecuzione autonoma ricevuta da uno dei metodi [ISchedulerProxy::SubscribeCurrentThread](ischedulerproxy-structure.md#subscribecurrentthread) `Remove` o [ISchedulerProxy::RequestInitialVirtualProcessors](ischedulerproxy-structure.md#requestinitialvirtualprocessors), la chiamata al metodo terminerà la sottoscrizione del thread creata dalla risorsa per rappresentare. È necessario terminare tutte le sottoscrizioni di thread prima di `Remove` arrestare un proxy dell'utilità di pianificazione e chiamare dal thread che ha creato la sottoscrizione.

Anche le radici del processore virtuale possono essere restituite a Gestione risorse richiamando il metodo `Remove`, poiché l'interfaccia `IVirtualProcessorRoot` eredita dall'interfaccia `IExecutionResource`. Potrebbe essere necessario restituire una radice del processore virtuale in risposta a una chiamata al metodo [IScheduler::RemoveVirtualProcessors](ischeduler-structure.md#removevirtualprocessors) o quando è stata completata una radice del processore virtuale con sottoscrizione eccessiva ottenuta dal metodo [ISchedulerProxy::CreateOversubscriber.](ischedulerproxy-structure.md#createoversubscriber) Per le radici del processore virtuale, non esistono `Remove` restrizioni su quale thread può richiamare il metodo.

`invalid_argument`se il parametro `pScheduler` è `NULL`impostato su .

`invalid_operation`viene generata `pScheduler` se il parametro è diverso dall'utilità di pianificazione per cui è stata creata questa risorsa di esecuzione o, con una risorsa di esecuzione autonoma, se il thread corrente è diverso dal thread che ha creato la sottoscrizione del thread.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Struttura IVirtualProcessorRoot](ivirtualprocessorroot-structure.md)
