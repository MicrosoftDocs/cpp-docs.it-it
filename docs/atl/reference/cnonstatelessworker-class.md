---
title: CNonStatelessWorker Class
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
ms.openlocfilehash: abfd3e585c843fcc4ed4ad273c8ed217eaaccb7d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62245530"
---
# <a name="cnonstatelessworker-class"></a>CNonStatelessWorker Class

Riceve le richieste da un pool di thread e li passa ad un oggetto di lavoro che verrà creato ed eliminato a ogni richiesta.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template <class Worker>
class CNonStatelessWorker
```

#### <a name="parameters"></a>Parametri

*Ruolo di lavoro*<br/>
Una classe di thread di lavoro conforme al [archetipo worker](../../atl/reference/worker-archetype.md) adatto per la gestione delle richieste in coda sul [CThreadPool](../../atl/reference/cthreadpool-class.md).

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

## <a name="remarks"></a>Note

Questa classe è un thread di lavoro semplice per l'uso con [CThreadPool](../../atl/reference/cthreadpool-class.md). Questa classe non include funzionalità di gestione delle richieste di un proprio. Al contrario, viene creata un'istanza di un'istanza di *lavoro* per ogni richiesta e delega l'implementazione dei metodi a tale istanza.

Il vantaggio di questa classe è che offre un modo pratico per modificare il modello di stato per le classi di thread di lavoro esistenti. `CThreadPool` verrà creato un singolo lavoro per la durata del thread, in modo che se la classe ruolo di lavoro mantiene lo stato, che dovrà contenere tra più richieste. Eseguendo semplicemente il wrapping di tale classe nel `CNonStatelessWorker` modello prima di utilizzarlo con `CThreadPool`, la durata del ruolo di lavoro e lo stato, contiene è limitato a una singola richiesta.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlutil. h

##  <a name="execute"></a>  CNonStatelessWorker::Execute

Implementazione di [WorkerArchetype::Execute](worker-archetype.md#execute).

```
void Execute(
    Worker::RequestType request,
    void* pvWorkerParam,
    OVERLAPPED* pOverlapped);
```

### <a name="remarks"></a>Note

Questo metodo crea un'istanza del *Worker* classe su stack e chiamate [inizializzare](worker-archetype.md#initialize) su tale oggetto. Se l'inizializzazione ha esito positivo, questo metodo chiama anche [Execute](worker-archetype.md#execute) e [Terminate](worker-archetype.md#terminate) sullo stesso oggetto.

##  <a name="initialize"></a>  CNonStatelessWorker::Initialize

Implementazione di [WorkerArchetype::Initialize](worker-archetype.md#initialize).

```
BOOL Initialize(void* /* pvParam */) throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre TRUE.

### <a name="remarks"></a>Note

Questa classe non esegue qualsiasi inizializzazione `Initialize`.

##  <a name="requesttype"></a>  CNonStatelessWorker::RequestType

Implementazione di [WorkerArchetype::RequestType](worker-archetype.md#requesttype).

```
typedef Worker::RequestType RequestType;
```

### <a name="remarks"></a>Note

Questa classe gestisce lo stesso tipo di elemento di lavoro come la classe utilizzata per la *lavoro* parametro di modello. Visualizzare [CNonStatelessWorker Panoramica](../../atl/reference/cnonstatelessworker-class.md) per informazioni dettagliate.

##  <a name="terminate"></a>  CNonStatelessWorker::Terminate

Implementazione di [WorkerArchetype::Terminate](worker-archetype.md#terminate).

```
void Terminate(void* /* pvParam */) throw();
```

### <a name="remarks"></a>Note

Questa classe non esegue le operazioni di pulitura `Terminate`.

## <a name="see-also"></a>Vedere anche

[Classe CThreadPool](../../atl/reference/cthreadpool-class.md)<br/>
[Archetipo Worker](../../atl/reference/worker-archetype.md)<br/>
[Classi](../../atl/reference/atl-classes.md)
