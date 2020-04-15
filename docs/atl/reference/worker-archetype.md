---
title: Archetipo operaio
ms.date: 11/04/2016
helpviewer_keywords:
- Worker archetype
ms.assetid: 834145cd-09d3-4149-bc99-620e1871cbfb
ms.openlocfilehash: b0b32232d7386df0c0f13a1c3af1003369b906e0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329340"
---
# <a name="worker-archetype"></a>Archetipo operaio

Le classi conformi all'archetipo di *lavoro* forniscono il codice per elaborare gli elementi di lavoro accodati in un pool di thread.

**Implementazione**

Per implementare una classe conforme a questo archetipo, la classe deve fornire le funzionalità seguenti:To implement a class conforming to this archetype, the class must provide the following features:

|Metodo|Descrizione|
|------------|-----------------|
|[Inizializzare](#initialize)|Chiamato per inizializzare l'oggetto worker prima che le richieste vengano passate a [Execute.](#execute)|
|[Execute](#execute)|Chiamato per elaborare un elemento di lavoro.|
|[Terminare](#terminate)|Chiamato per annullare l'inizializzazione dell'oggetto worker dopo che tutte le richieste sono state passate a [Execute](#execute).|

|Typedef|Descrizione|
|-------------|-----------------|
|[RequestType](#requesttype)|Tipo di tipo per il tipo di elemento di lavoro che può essere elaborato dalla classe worker.|

Una classe *di lavoro* tipica è simile alla seguente:A typical worker class looks like this:

[!code-cpp[NVC_ATL_Utilities#137](../../atl/codesnippet/cpp/worker-archetype_1.cpp)]

**Implementazioni esistenti**

Queste classi sono conformi a questo archetipo:

|Classe|Descrizione|
|-----------|-----------------|
|[CNonStatelessWorker](../../atl/reference/cnonstatelessworker-class.md)|Riceve le richieste dal pool di thread e le passa a un oggetto di lavoro creato ed eliminato per ogni richiesta.|

**Utilizzare**

Questi parametri di modello prevedono che la classe sia conforme a questo archetipo:These template parameters expect the class to conform to this archetype:

|Nome parametro|Usato da|
|--------------------|-------------|
|*Lavoratore*|[CThreadPool](../../atl/reference/cthreadpool-class.md)|
|*Lavoratore*|[CNonStatelessWorker](../../atl/reference/cnonstatelessworker-class.md)|

### <a name="requirements"></a>Requisiti

**Intestazione:** atlutil.h

## <a name="workerarchetypeexecute"></a><a name="execute"></a>WorkerArchetype::Execute

Chiamato per elaborare un elemento di lavoro.

```
void Execute(
    RequestType request,
    void* pvWorkerParam,
    OVERLAPPED* pOverlapped);
```

#### <a name="parameters"></a>Parametri

*Richiesta*<br/>
Elemento di lavoro da elaborare. L'elemento di lavoro è `RequestType`dello stesso tipo di .

*pvWorkerParam*<br/>
Parametro personalizzato riconosciuto dalla classe worker. Passato anche `WorkerArchetype::Initialize` `Terminate`a e .

*pSovrapposto*<br/>
Puntatore alla struttura [OVERLAPPED](/windows/win32/api/minwinbase/ns-minwinbase-overlapped) utilizzata per creare la coda in cui sono stati accodati gli elementi di lavoro.

## <a name="workerarchetypeinitialize"></a><a name="initialize"></a>WorkerArchetype::Initialize

Chiamato per inizializzare l'oggetto worker `WorkerArchetype::Execute`prima che le richieste vengano passate a .

```
BOOL Initialize(void* pvParam) throw();
```

#### <a name="parameters"></a>Parametri

*pvParam (parametri di pvParam)*<br/>
Parametro personalizzato riconosciuto dalla classe worker. Passato anche `WorkerArchetype::Terminate` `WorkerArchetype::Execute`a e .

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="workerarchetyperequesttype"></a><a name="requesttype"></a>WorkerArchetype::RequestType

Tipo di tipo per il tipo di elemento di lavoro che può essere elaborato dalla classe worker.

```
typedef MyRequestType RequestType;
```

### <a name="remarks"></a>Osservazioni

Questo tipo deve essere utilizzato `WorkerArchetype::Execute` come primo parametro di e deve essere in grado di eseguire il cast da e verso un ULONG_PTR.

## <a name="workerarchetypeterminate"></a><a name="terminate"></a>WorkerArchetype::Terminate

Chiamato per annullare l'inizializzazione dell'oggetto worker dopo che tutte le richieste sono state passate a `WorkerArchetype::Execute`).

```
void Terminate(void* pvParam) throw();
```

#### <a name="parameters"></a>Parametri

*pvParam (parametri di pvParam)*<br/>
Parametro personalizzato riconosciuto dalla classe worker. Passato anche `WorkerArchetype::Initialize` `WorkerArchetype::Execute`a e .

## <a name="see-also"></a>Vedere anche

[Concetti](../../atl/active-template-library-atl-concepts.md)<br/>
[Componenti Desktop COM ATL](../../atl/atl-com-desktop-components.md)
