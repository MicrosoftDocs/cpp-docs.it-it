---
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
ms.openlocfilehash: f3604f95c8217c7407c100671265140bbadbab78
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326738"
---
# <a name="cnonstatelessworker-class"></a>Classe CNonStatelessWorker

Riceve richieste da un pool di thread e le passa a un oggetto di lavoro creato ed eliminato a ogni richiesta.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class Worker>
class CNonStatelessWorker
```

#### <a name="parameters"></a>Parametri

*Lavoratore*<br/>
Una classe di thread di lavoro conforme [all'archetipo](../../atl/reference/worker-archetype.md) di lavoro adatto per la gestione delle richieste accodate in [CThreadPool](../../atl/reference/cthreadpool-class.md).

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CNonStatelessWorker::RequestType](#requesttype)|Implementazione di [WorkerArchetype::RequestType](worker-archetype.md#requesttype).|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CNonStatelessWorker::Execute](#execute)|Implementazione di [WorkerArchetype::Execute](worker-archetype.md#execute).|
|[CNonStatelessWorker::Initialize](#initialize)|Implementazione di [WorkerArchetype::Initialize](worker-archetype.md#initialize).|
|[CNonStatelessWorker::Terminate](#terminate)|Implementazione di [WorkerArchetype::Terminate](worker-archetype.md#terminate).|

## <a name="remarks"></a>Osservazioni

Questa classe è un thread di lavoro semplice da utilizzare con [CThreadPool](../../atl/reference/cthreadpool-class.md). Questa classe non fornisce funzionalità di gestione delle richieste proprie. Viene invece creata un'istanza di *Worker* per richiesta e viene evitata l'implementazione dei relativi metodi a tale istanza.

Il vantaggio di questa classe è che fornisce un modo pratico per modificare il modello di stato per le classi di thread di lavoro esistenti. `CThreadPool`creerà un singolo worker per la durata del thread, quindi se la classe di lavoro mantiene lo stato, lo manterrà tra più richieste. Eseguendo semplicemente il `CNonStatelessWorker` wrapping di tale `CThreadPool`classe nel modello prima di utilizzarla con , la durata del worker e lo stato in esso contenuto è limitato a una singola richiesta.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlutil.h

## <a name="cnonstatelessworkerexecute"></a><a name="execute"></a>CNonStatelessWorker::Execute

Implementazione di [WorkerArchetype::Execute](worker-archetype.md#execute).

```
void Execute(
    Worker::RequestType request,
    void* pvWorkerParam,
    OVERLAPPED* pOverlapped);
```

### <a name="remarks"></a>Osservazioni

Questo metodo crea un'istanza della classe *Worker* nello stack e chiama [Initialize](worker-archetype.md#initialize) su tale oggetto. Se l'inizializzazione ha esito positivo, questo metodo chiama anche [Execute](worker-archetype.md#execute) e [Terminate](worker-archetype.md#terminate) sullo stesso oggetto.

## <a name="cnonstatelessworkerinitialize"></a><a name="initialize"></a>CNonStatelessWorker::Initialize

Implementazione di [WorkerArchetype::Initialize](worker-archetype.md#initialize).

```
BOOL Initialize(void* /* pvParam */) throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre TRUE.

### <a name="remarks"></a>Osservazioni

Questa classe non esegue `Initialize`alcuna inizializzazione in .

## <a name="cnonstatelessworkerrequesttype"></a><a name="requesttype"></a>CNonStatelessWorker::RequestType

Implementazione di [WorkerArchetype::RequestType](worker-archetype.md#requesttype).

```
typedef Worker::RequestType RequestType;
```

### <a name="remarks"></a>Osservazioni

Questa classe gestisce lo stesso tipo di elemento di lavoro della classe utilizzata per il parametro di modello *Worker.* Per informazioni dettagliate, vedere Cenni preliminari su [CNonStatelessWorker.See CNonStatelessWorker Overview](../../atl/reference/cnonstatelessworker-class.md) for details.

## <a name="cnonstatelessworkerterminate"></a><a name="terminate"></a>CNonStatelessWorker::Terminate

Implementazione di [WorkerArchetype::Terminate](worker-archetype.md#terminate).

```
void Terminate(void* /* pvParam */) throw();
```

### <a name="remarks"></a>Osservazioni

Questa classe non esegue `Terminate`alcuna pulizia in .

## <a name="see-also"></a>Vedere anche

[Classe CThreadPool](../../atl/reference/cthreadpool-class.md)<br/>
[Archetipo operaio](../../atl/reference/worker-archetype.md)<br/>
[Classi](../../atl/reference/atl-classes.md)
