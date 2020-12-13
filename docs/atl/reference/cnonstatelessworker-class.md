---
description: 'Altre informazioni su: classe CNonStatelessWorker'
title: Classe CNonStatelessWorker
ms.date: 11/04/2016
f1_keywords:
- CNonStatelessWorker
- ATLUTIL/ATL::CNonStatelessWorker
- ATLUTIL/ATL::CNonStatelessWorker::RequestType
- ATLUTIL/ATL::CNonStatelessWorker::Execute
- ATLUTIL/ATL::CNonStatelessWorker::Initialize
- ATLUTIL/ATL::CNonStatelessWorker::Terminate
helpviewer_keywords:
- CNonStatelessWorker class
ms.assetid: d00936c6-9e7d-49fb-b87d-417b963367d1
ms.openlocfilehash: 68457c9594bfaf4d8dd53acd80d7997355c3a3f5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97141427"
---
# <a name="cnonstatelessworker-class"></a>Classe CNonStatelessWorker

Riceve le richieste da un pool di thread e le passa a un oggetto di lavoro creato ed eliminato in base a ogni richiesta.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class Worker>
class CNonStatelessWorker
```

#### <a name="parameters"></a>Parametri

*Worker*<br/>
Classe thread di lavoro conforme all'archetipo del ruolo di [lavoro](../../atl/reference/worker-archetype.md) idoneo per la gestione delle richieste accodate in [CThreadPool](../../atl/reference/cthreadpool-class.md).

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|[CNonStatelessWorker:: RequestType](#requesttype)|Implementazione di [WorkerArchetype:: RequestType](worker-archetype.md#requesttype).|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CNonStatelessWorker:: Execute](#execute)|Implementazione di [WorkerArchetype:: Execute](worker-archetype.md#execute).|
|[CNonStatelessWorker:: Initialize](#initialize)|Implementazione di [WorkerArchetype:: Initialize](worker-archetype.md#initialize).|
|[CNonStatelessWorker:: terminate](#terminate)|Implementazione di [WorkerArchetype:: terminate](worker-archetype.md#terminate).|

## <a name="remarks"></a>Commenti

Questa classe è un semplice thread di lavoro da usare con [CThreadPool](../../atl/reference/cthreadpool-class.md). Questa classe non fornisce alcuna funzionalità di gestione delle richieste. Bensì crea un'istanza del ruolo di *lavoro* per ogni richiesta e delega l'implementazione dei relativi metodi a tale istanza.

Il vantaggio di questa classe è che fornisce un modo pratico per modificare il modello di stato per le classi di thread di lavoro esistenti. `CThreadPool` creerà un singolo thread di lavoro per la durata del thread, quindi, se la classe Worker possiede lo stato, lo manterrà tra più richieste. Eseguendo semplicemente il wrapping di tale classe nel `CNonStatelessWorker` modello prima di utilizzarla con `CThreadPool` , la durata del processo di lavoro e lo stato che possiede è limitata a una singola richiesta.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlutil. h

## <a name="cnonstatelessworkerexecute"></a><a name="execute"></a> CNonStatelessWorker:: Execute

Implementazione di [WorkerArchetype:: Execute](worker-archetype.md#execute).

```cpp
void Execute(
    Worker::RequestType request,
    void* pvWorkerParam,
    OVERLAPPED* pOverlapped);
```

### <a name="remarks"></a>Commenti

Questo metodo crea un'istanza della classe *Worker* nello stack e chiama [Initialize](worker-archetype.md#initialize) su tale oggetto. Se l'inizializzazione ha esito positivo, questo metodo chiama anche [Execute](worker-archetype.md#execute) e [Terminate](worker-archetype.md#terminate) sullo stesso oggetto.

## <a name="cnonstatelessworkerinitialize"></a><a name="initialize"></a> CNonStatelessWorker:: Initialize

Implementazione di [WorkerArchetype:: Initialize](worker-archetype.md#initialize).

```
BOOL Initialize(void* /* pvParam */) throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre TRUE.

### <a name="remarks"></a>Commenti

Questa classe non esegue alcuna inizializzazione in `Initialize` .

## <a name="cnonstatelessworkerrequesttype"></a><a name="requesttype"></a> CNonStatelessWorker:: RequestType

Implementazione di [WorkerArchetype:: RequestType](worker-archetype.md#requesttype).

```
typedef Worker::RequestType RequestType;
```

### <a name="remarks"></a>Commenti

Questa classe gestisce lo stesso tipo di elemento di lavoro della classe utilizzata per il parametro *del modello di lavoro.* Per informazioni dettagliate, vedere [Panoramica di CNonStatelessWorker](../../atl/reference/cnonstatelessworker-class.md) .

## <a name="cnonstatelessworkerterminate"></a><a name="terminate"></a> CNonStatelessWorker:: terminate

Implementazione di [WorkerArchetype:: terminate](worker-archetype.md#terminate).

```cpp
void Terminate(void* /* pvParam */) throw();
```

### <a name="remarks"></a>Commenti

Questa classe non esegue alcuna pulizia in `Terminate` .

## <a name="see-also"></a>Vedi anche

[Classe CThreadPool](../../atl/reference/cthreadpool-class.md)<br/>
[Archetipo del ruolo di lavoro](../../atl/reference/worker-archetype.md)<br/>
[Classi](../../atl/reference/atl-classes.md)
