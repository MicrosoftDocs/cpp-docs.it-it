---
title: Archetipo worker | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- Worker archetype
ms.assetid: 834145cd-09d3-4149-bc99-620e1871cbfb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 90d389fb9ad6ffb3fbdbb726f7968d464170d693
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50062093"
---
# <a name="worker-archetype"></a>Archetipo worker

Classi conformi al *lavoro* archetipo forniscono il codice per gli elementi di lavoro di processo in coda nel pool di thread.

**Implementazione**

Per implementare una classe conforme a archetipo, la classe deve fornire le funzionalità seguenti:

|Metodo|Descrizione|
|------------|-----------------|
|[Initialize](#initialize)|Chiamato per inizializzare l'oggetto ruolo di lavoro prima che tutte le richieste vengono passate al [Execute](#execute).|
|[Execute](#execute)|Chiamato per elaborare un elemento di lavoro.|
|[Terminate](#terminate)|Chiamato da non inizializzare l'oggetto ruolo di lavoro dopo che tutte le richieste sono state passate al [Execute](#execute).|

|Typedef|Descrizione|
|-------------|-----------------|
|[RequestType](#requesttype)|Typedef per il tipo di elemento di lavoro che può essere elaborato dalla classe ruolo di lavoro.|

Una tipica *lavoro* abbia un aspetto simile al seguente:

[!code-cpp[NVC_ATL_Utilities#137](../../atl/codesnippet/cpp/worker-archetype_1.cpp)]

**Implementazioni esistenti**

Queste classi sono conformi all'archetipo:

|Classe|Descrizione|
|-----------|-----------------|
|[CNonStatelessWorker](../../atl/reference/cnonstatelessworker-class.md)|Riceve le richieste del pool di thread e li passa ad un oggetto di lavoro che verrà creato ed eliminato per ogni richiesta.|

**Usare**

Questi parametri del modello prevede che la classe di conformarsi all'archetipo:

|Nome del parametro|Utilizzata da|
|--------------------|-------------|
|*Ruolo di lavoro*|[CThreadPool](../../atl/reference/cthreadpool-class.md)|
|*Ruolo di lavoro*|[CNonStatelessWorker](../../atl/reference/cnonstatelessworker-class.md)|

### <a name="requirements"></a>Requisiti

**Intestazione:** atlutil. h

## <a name="execute"></a>WorkerArchetype::Execute

Chiamato per elaborare un elemento di lavoro.

```
void Execute(
    RequestType request,
    void* pvWorkerParam,
    OVERLAPPED* pOverlapped);
```

#### <a name="parameters"></a>Parametri

*Richiesta*<br/>
L'elemento di lavoro da elaborare. L'elemento di lavoro è dello stesso tipo `RequestType`.

*pvWorkerParam*<br/>
Un parametro personalizzato riconosciuto dalla classe ruolo di lavoro. Anche passato a `WorkerArchetype::Initialize` e `Terminate`.

*pOverlapped*<br/>
Un puntatore per il [OVERLAPPED](/windows/desktop/api/minwinbase/ns-minwinbase-_overlapped) struttura utilizzata per creare la coda in cui gli elementi messe in coda.

## <a name="initialize"></a> WorkerArchetype::Initialize

Chiamato per inizializzare l'oggetto ruolo di lavoro prima di tutte le richieste vengono passate al `WorkerArchetype::Execute`.
```
BOOL Initialize(void* pvParam) throw();
```

#### <a name="parameters"></a>Parametri

*parametro pvParam*<br/>
Un parametro personalizzato riconosciuto dalla classe ruolo di lavoro. Anche passato a `WorkerArchetype::Terminate` e `WorkerArchetype::Execute`.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

## <a name="requesttype"></a> WorkerArchetype::RequestType

Typedef per il tipo di elemento di lavoro che può essere elaborato dalla classe ruolo di lavoro.

```
typedef MyRequestType RequestType;
```

### <a name="remarks"></a>Note

Questo tipo deve essere utilizzato come primo parametro di `WorkerArchetype::Execute` e deve essere in grado di sottoposto a cast da e verso un ULONG_PTR.

## <a name="terminate"></a> WorkerArchetype::Terminate

Chiamato da non inizializzare l'oggetto ruolo di lavoro dopo che tutte le richieste sono state passate al `WorkerArchetype::Execute`).

```
void Terminate(void* pvParam) throw();
```

#### <a name="parameters"></a>Parametri

*parametro pvParam*<br/>
Un parametro personalizzato riconosciuto dalla classe ruolo di lavoro. Anche passato a `WorkerArchetype::Initialize` e `WorkerArchetype::Execute`.

## <a name="see-also"></a>Vedere anche

[Concetti](../../atl/active-template-library-atl-concepts.md)<br/>
[Componenti Desktop COM ATL](../../atl/atl-com-desktop-components.md)

