---
title: Archetipo del ruolo di lavoro
ms.date: 11/04/2016
helpviewer_keywords:
- Worker archetype
ms.assetid: 834145cd-09d3-4149-bc99-620e1871cbfb
ms.openlocfilehash: 3efd77c38508df8302fa4e1dd5c9b51f66cd5e43
ms.sourcegitcommit: 46d24d6e70c03e05484923d9efc6ed5150e96a64
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2019
ms.locfileid: "68915452"
---
# <a name="worker-archetype"></a>Archetipo del ruolo di lavoro

Le classi conformi all'archetipo del ruolo di lavoro forniscono il codice per l'elaborazione degli elementi di lavoro accodati in un pool di thread.

**Implementazione**

Per implementare una classe conforme a questo archetipo, la classe deve fornire le funzionalità seguenti:

|Metodo|DESCRIZIONE|
|------------|-----------------|
|[Initialize](#initialize)|Chiamato per inizializzare l'oggetto di lavoro prima che vengano passate richieste da [eseguire](#execute).|
|[Execute](#execute)|Chiamato per elaborare un elemento di lavoro.|
|[Terminate](#terminate)|Chiamato per annullare l'inizializzazione dell'oggetto di lavoro dopo che tutte le richieste sono state passate per l' [esecuzione](#execute).|

|Typedef|DESCRIZIONE|
|-------------|-----------------|
|[RequestType](#requesttype)|Typedef per il tipo di elemento di lavoro che può essere elaborato dalla classe Worker.|

Una classe di *lavoro* tipica ha un aspetto simile al seguente:

[!code-cpp[NVC_ATL_Utilities#137](../../atl/codesnippet/cpp/worker-archetype_1.cpp)]

**Implementazioni esistenti**

Queste classi sono conformi a questo archetipo:

|Classe|Descrizione|
|-----------|-----------------|
|[CNonStatelessWorker](../../atl/reference/cnonstatelessworker-class.md)|Riceve le richieste dal pool di thread e le passa a un oggetto di lavoro creato ed eliminato definitivamente per ogni richiesta.|

**Uso**

Questi parametri di modello si aspettano che la classe sia conforme a questo archetipo:

|Nome parametro|Utilizzata da|
|--------------------|-------------|
|*Lavoro*|[CThreadPool](../../atl/reference/cthreadpool-class.md)|
|*Lavoro*|[CNonStatelessWorker](../../atl/reference/cnonstatelessworker-class.md)|

### <a name="requirements"></a>Requisiti

**Intestazione:** atlutil. h

## <a name="execute"></a>WorkerArchetype:: Execute

Chiamato per elaborare un elemento di lavoro.

```
void Execute(
    RequestType request,
    void* pvWorkerParam,
    OVERLAPPED* pOverlapped);
```

#### <a name="parameters"></a>Parametri

*request*<br/>
Elemento di lavoro da elaborare. L'elemento di lavoro è dello stesso tipo `RequestType`di.

*pvWorkerParam*<br/>
Parametro personalizzato riconosciuto dalla classe Worker. Passato anche a `WorkerArchetype::Initialize` e `Terminate`.

*pOverlapped*<br/>
Puntatore alla struttura [sovrapposta](/windows/desktop/api/minwinbase/ns-minwinbase-overlapped) usata per creare la coda in cui gli elementi di lavoro sono stati accodati.

## <a name="initialize"></a>WorkerArchetype:: Initialize

Chiamato per inizializzare l'oggetto di lavoro prima che vengano passate `WorkerArchetype::Execute`richieste a.
```
BOOL Initialize(void* pvParam) throw();
```

#### <a name="parameters"></a>Parametri

*pvParam*<br/>
Parametro personalizzato riconosciuto dalla classe Worker. Passato anche a `WorkerArchetype::Terminate` e `WorkerArchetype::Execute`.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="requesttype"></a> WorkerArchetype::RequestType

Typedef per il tipo di elemento di lavoro che può essere elaborato dalla classe Worker.

```
typedef MyRequestType RequestType;
```

### <a name="remarks"></a>Note

Questo tipo deve essere utilizzato come primo parametro di `WorkerArchetype::Execute` e deve essere in grado di eseguire il cast a e da un ULONG_PTR.

## <a name="terminate"></a>WorkerArchetype:: terminate

Chiamata eseguita per annullare l'inizializzazione dell'oggetto di lavoro dopo che tutte `WorkerArchetype::Execute`le richieste sono state passate a.

```
void Terminate(void* pvParam) throw();
```

#### <a name="parameters"></a>Parametri

*pvParam*<br/>
Parametro personalizzato riconosciuto dalla classe Worker. Passato anche a `WorkerArchetype::Initialize` e `WorkerArchetype::Execute`.

## <a name="see-also"></a>Vedere anche

[Concetti](../../atl/active-template-library-atl-concepts.md)<br/>
[Componenti Desktop COM ATL](../../atl/atl-com-desktop-components.md)
