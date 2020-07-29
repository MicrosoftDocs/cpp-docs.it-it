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
ms.openlocfilehash: af6b10d1552770c776762ed195f5efceab30a3d5
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87215790"
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
|[IExecutionResource:: CurrentSubscriptionLevel](#currentsubscriptionlevel)|Restituisce il numero di radici del processore virtuale attivato e i thread esterni sottoscritti attualmente associati al thread hardware sottostante rappresentato da questa risorsa di esecuzione.|
|[IExecutionResource:: GetExecutionResourceId](#getexecutionresourceid)|Restituisce un identificatore univoco per il thread hardware rappresentato da questa risorsa di esecuzione.|
|[IExecutionResource:: GetNodeId](#getnodeid)|Restituisce un identificatore univoco per il nodo del processore a cui appartiene questa risorsa di esecuzione.|
|[IExecutionResource:: Remove](#remove)|Restituisce la risorsa di esecuzione al Gestione risorse.|

## <a name="remarks"></a>Osservazioni

Le risorse di esecuzione possono essere autonome o associate a radici del processore virtuale. Una risorsa di esecuzione autonoma viene creata quando un thread nell'applicazione crea una sottoscrizione di thread. I metodi [ISchedulerProxy:: SubscribeThread](ischedulerproxy-structure.md#subscribecurrentthread) e [ISchedulerProxy:: RequestInitialVirtualProcessors](ischedulerproxy-structure.md#requestinitialvirtualprocessors) creano sottoscrizioni di thread e restituiscono un' `IExecutionResource` interfaccia che rappresenta la sottoscrizione. La creazione di una sottoscrizione di thread è un modo per informare il Gestione risorse che un determinato thread parteciperà al lavoro accodato a un'utilità di pianificazione, insieme alle radici del processore virtuale Gestione risorse assegnato all'utilità di pianificazione. Il Gestione risorse utilizza le informazioni per evitare l'oversubscriptioning dei thread hardware dove possibile.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IExecutionResource`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

**Spazio dei nomi:** Concurrency

## <a name="iexecutionresourcecurrentsubscriptionlevel-method"></a><a name="currentsubscriptionlevel"></a>Metodo IExecutionResource:: CurrentSubscriptionLevel

Restituisce il numero di radici del processore virtuale attivato e i thread esterni sottoscritti attualmente associati al thread hardware sottostante rappresentato da questa risorsa di esecuzione.

```cpp
virtual unsigned int CurrentSubscriptionLevel() const = 0;
```

### <a name="return-value"></a>Valore restituito

Livello di sottoscrizione corrente.

### <a name="remarks"></a>Osservazioni

Il livello di sottoscrizione indica il numero di thread in esecuzione associati al thread hardware. Sono inclusi solo i thread di cui Gestione risorse è a conoscenza sotto forma di thread sottoscritti e le radici del processore virtuale che eseguono attivamente i proxy di thread.

Se si chiama il metodo [ISchedulerProxy:: SubscribeCurrentThread](ischedulerproxy-structure.md#subscribecurrentthread)o il metodo [ISchedulerProxy:: RequestInitialVirtualProcessors](ischedulerproxy-structure.md#requestinitialvirtualprocessors) con il parametro impostato sul valore, il `doSubscribeCurrentThread` livello di **`true`** sottoscrizione di un thread hardware viene incrementato di uno. Restituiscono anche un' `IExecutionResource` interfaccia che rappresenta la sottoscrizione. Una chiamata corrispondente a [IExecutionResource:: Remove](#remove) decrementa di uno il livello di sottoscrizione del thread hardware.

L'azione di attivazione di una radice del processore virtuale tramite il metodo [IVirtualProcessorRoot:: Activate](ivirtualprocessorroot-structure.md#activate) incrementa il livello di sottoscrizione di un thread hardware di uno. I metodi [IVirtualProcessorRoot::D ttiva](ivirtualprocessorroot-structure.md#deactivate)o [IExecutionResource:: Remove](#remove) decrementano di uno il livello di sottoscrizione quando viene richiamato su una radice del processore virtuale attivata.

Il Gestione risorse utilizza informazioni sul livello di sottoscrizione come uno dei modi in cui determinare quando spostare le risorse tra le utilità di pianificazione.

## <a name="iexecutionresourcegetexecutionresourceid-method"></a><a name="getexecutionresourceid"></a>Metodo IExecutionResource:: GetExecutionResourceId

Restituisce un identificatore univoco per il thread hardware rappresentato da questa risorsa di esecuzione.

```cpp
virtual unsigned int GetExecutionResourceId() const = 0;
```

### <a name="return-value"></a>Valore restituito

Identificatore univoco per il thread hardware sottostante a questa risorsa di esecuzione.

### <a name="remarks"></a>Osservazioni

A ogni thread hardware viene assegnato un identificatore univoco da parte del runtime di concorrenza. Se a più risorse di esecuzione è associato un thread hardware, tutti avranno lo stesso identificatore di risorsa di esecuzione.

## <a name="iexecutionresourcegetnodeid-method"></a><a name="getnodeid"></a>Metodo IExecutionResource:: GetNodeId

Restituisce un identificatore univoco per il nodo del processore a cui appartiene questa risorsa di esecuzione.

```cpp
virtual unsigned int GetNodeId() const = 0;
```

### <a name="return-value"></a>Valore restituito

Identificatore univoco per un nodo del processore.

### <a name="remarks"></a>Osservazioni

Il runtime di concorrenza rappresenta i thread hardware del sistema in gruppi di nodi del processore. I nodi vengono in genere derivati dalla topologia hardware del sistema. Ad esempio, tutti i processori in un socket specifico o in uno specifico nodo NUMA possono appartenere allo stesso nodo del processore. Il Gestione risorse assegna identificatori univoci a questi nodi iniziando con `0` fino a e includendo `nodeCount - 1` , dove `nodeCount` rappresenta il numero totale di nodi del processore nel sistema.

Il numero di nodi può essere ottenuto dalla funzione [GetProcessorNodeCount](concurrency-namespace-functions.md).

## <a name="iexecutionresourceremove-method"></a><a name="remove"></a>Metodo IExecutionResource:: Remove

Restituisce la risorsa di esecuzione al Gestione risorse.

```cpp
virtual void Remove(_Inout_ IScheduler* pScheduler) = 0;
```

### <a name="parameters"></a>Parametri

*pScheduler*<br/>
Interfaccia all'utilità di pianificazione che effettua la richiesta di rimozione della risorsa di esecuzione.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per restituire le risorse di esecuzione autonoma, nonché le risorse di esecuzione associate alle radici del processore virtuale al Gestione risorse.

Se si tratta di una risorsa di esecuzione autonoma ricevuta da uno dei metodi [ISchedulerProxy:: SubscribeCurrentThread](ischedulerproxy-structure.md#subscribecurrentthread) o [ISchedulerProxy:: RequestInitialVirtualProcessors](ischedulerproxy-structure.md#requestinitialvirtualprocessors), la chiamata al metodo `Remove` terminerà la sottoscrizione del thread che la risorsa è stata creata per rappresentare. È necessario terminare tutte le sottoscrizioni di thread prima di arrestare un proxy di utilità di pianificazione e chiamare `Remove` dal thread che ha creato la sottoscrizione.

Anche le radici del processore virtuale possono essere restituite a Gestione risorse richiamando il metodo `Remove`, poiché l'interfaccia `IVirtualProcessorRoot` eredita dall'interfaccia `IExecutionResource`. Potrebbe essere necessario restituire una radice del processore virtuale in risposta a una chiamata al metodo [IScheduler:: RemoveVirtualProcessors](ischeduler-structure.md#removevirtualprocessors) oppure al termine di una radice del processore virtuale con oversubscription ottenuta dal metodo [ISchedulerProxy:: CreateOversubscriber](ischedulerproxy-structure.md#createoversubscriber) . Per le radici del processore virtuale, non esistono restrizioni sul thread che può richiamare il `Remove` metodo.

`invalid_argument`viene generata se il parametro `pScheduler` è impostato su `NULL` .

`invalid_operation`viene generata se il parametro `pScheduler` è diverso dall'utilità di pianificazione per la quale è stata creata la risorsa di esecuzione oppure con una risorsa di esecuzione autonoma, se il thread corrente è diverso dal thread che ha creato la sottoscrizione del thread.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Struttura IVirtualProcessorRoot](ivirtualprocessorroot-structure.md)
