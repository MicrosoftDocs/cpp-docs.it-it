---
description: 'Altre informazioni su: archetipo del ruolo di lavoro'
title: Archetipo del ruolo di lavoro
ms.date: 11/04/2016
helpviewer_keywords:
- Worker archetype
ms.assetid: 834145cd-09d3-4149-bc99-620e1871cbfb
ms.openlocfilehash: 8cb8c2b281bbdc074bb700b77a856f4d26c26cf6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97157568"
---
# <a name="worker-archetype"></a>Archetipo del ruolo di lavoro

Le classi conformi *all'archetipo del ruolo di lavoro forniscono* il codice per l'elaborazione degli elementi di lavoro accodati in un pool di thread.

**Implementazione**

Per implementare una classe conforme a questo archetipo, la classe deve fornire le funzionalità seguenti:

|Metodo|Descrizione|
|------------|-----------------|
|[Inizializzare](#initialize)|Chiamato per inizializzare l'oggetto di lavoro prima che vengano passate richieste da [eseguire](#execute).|
|[Eseguire](#execute)|Chiamato per elaborare un elemento di lavoro.|
|[Terminate](#terminate).|Chiamato per annullare l'inizializzazione dell'oggetto di lavoro dopo che tutte le richieste sono state passate per l' [esecuzione](#execute).|

|Typedef|Descrizione|
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

|Nome parametro|Usato da|
|--------------------|-------------|
|*Worker*|[CThreadPool](../../atl/reference/cthreadpool-class.md)|
|*Worker*|[CNonStatelessWorker](../../atl/reference/cnonstatelessworker-class.md)|

### <a name="requirements"></a>Requisiti

**Intestazione:** atlutil. h

## <a name="workerarchetypeexecute"></a><a name="execute"></a> WorkerArchetype:: Execute

Chiamato per elaborare un elemento di lavoro.

```cpp
void Execute(
    RequestType request,
    void* pvWorkerParam,
    OVERLAPPED* pOverlapped);
```

#### <a name="parameters"></a>Parametri

*request*<br/>
Elemento di lavoro da elaborare. L'elemento di lavoro è dello stesso tipo di `RequestType` .

*pvWorkerParam*<br/>
Parametro personalizzato riconosciuto dalla classe Worker. Passato anche a `WorkerArchetype::Initialize` e `Terminate` .

*pOverlapped*<br/>
Puntatore alla struttura [sovrapposta](/windows/win32/api/minwinbase/ns-minwinbase-overlapped) usata per creare la coda in cui gli elementi di lavoro sono stati accodati.

## <a name="workerarchetypeinitialize"></a><a name="initialize"></a> WorkerArchetype:: Initialize

Chiamato per inizializzare l'oggetto di lavoro prima che vengano passate richieste a `WorkerArchetype::Execute` .

```
BOOL Initialize(void* pvParam) throw();
```

#### <a name="parameters"></a>Parametri

*pvParam*<br/>
Parametro personalizzato riconosciuto dalla classe Worker. Passato anche a `WorkerArchetype::Terminate` e `WorkerArchetype::Execute` .

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="workerarchetyperequesttype"></a><a name="requesttype"></a> WorkerArchetype:: RequestType

Typedef per il tipo di elemento di lavoro che può essere elaborato dalla classe Worker.

```
typedef MyRequestType RequestType;
```

### <a name="remarks"></a>Commenti

Questo tipo deve essere utilizzato come primo parametro di `WorkerArchetype::Execute` e deve essere in grado di eseguire il cast da e verso un ULONG_PTR.

## <a name="workerarchetypeterminate"></a><a name="terminate"></a> WorkerArchetype:: terminate

Chiamata eseguita per annullare l'inizializzazione dell'oggetto di lavoro dopo che tutte le richieste sono state passate a `WorkerArchetype::Execute` .

```cpp
void Terminate(void* pvParam) throw();
```

#### <a name="parameters"></a>Parametri

*pvParam*<br/>
Parametro personalizzato riconosciuto dalla classe Worker. Passato anche a `WorkerArchetype::Initialize` e `WorkerArchetype::Execute` .

## <a name="see-also"></a>Vedi anche

[Concetti](../../atl/active-template-library-atl-concepts.md)<br/>
[Componenti Desktop COM ATL](../../atl/atl-com-desktop-components.md)
