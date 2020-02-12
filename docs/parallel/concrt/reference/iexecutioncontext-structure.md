---
title: Struttura IExecutionContext
ms.date: 11/04/2016
f1_keywords:
- IExecutionContext
- CONCRTRM/concurrency::IExecutionContext
- CONCRTRM/concurrency::IExecutionContext::IExecutionContext::Dispatch
- CONCRTRM/concurrency::IExecutionContext::IExecutionContext::GetId
- CONCRTRM/concurrency::IExecutionContext::IExecutionContext::GetProxy
- CONCRTRM/concurrency::IExecutionContext::IExecutionContext::GetScheduler
- CONCRTRM/concurrency::IExecutionContext::IExecutionContext::SetProxy
helpviewer_keywords:
- IExecutionContext structure
ms.assetid: f3108089-ecda-4b07-86db-3efae60c31e0
ms.openlocfilehash: 45d65a5e16121d39233c3ceb801933aa1f5a5f8e
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77138918"
---
# <a name="iexecutioncontext-structure"></a>Struttura IExecutionContext

Un'interfaccia a un contesto di esecuzione che può essere in esecuzione su un processore virtuale specificato e il cui contesto può essere cambiato cooperativamente.

## <a name="syntax"></a>Sintassi

```cpp
struct IExecutionContext;
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IExecutionContext::D patch](#dispatch)|Metodo chiamato quando un proxy del thread avvia l'esecuzione di un determinato contesto di esecuzione. Questa deve essere la routine di lavoro principale per l'utilità di pianificazione.|
|[IExecutionContext:: GetId](#getid)|Restituisce un identificatore univoco per il contesto di esecuzione.|
|[IExecutionContext:: GetProxy](#getproxy)|Restituisce un'interfaccia al proxy del thread che esegue questo contesto.|
|[IExecutionContext:: GetScheduler](#getscheduler)|Restituisce un'interfaccia all'utilità di pianificazione a cui appartiene il contesto di esecuzione.|
|[IExecutionContext:: seproxy](#setproxy)|Associa un proxy del thread a questo contesto di esecuzione. Il proxy di thread associato richiama questo metodo immediatamente prima di avviare l'esecuzione del metodo `Dispatch` del contesto.|

## <a name="remarks"></a>Osservazioni

Se si implementa un'utilità di pianificazione personalizzata che si interfaccia con la Gestione risorse di runtime di concorrenza, sarà necessario implementare l'interfaccia `IExecutionContext`. I thread creati dal Gestione risorse eseguono il lavoro per conto dell'utilità di pianificazione eseguendo il metodo di `IExecutionContext::Dispatch`.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IExecutionContext`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

**Spazio dei nomi:** Concurrency

## <a name="dispatch"></a>IExecutionContext: metodo:D la patch

Metodo chiamato quando un proxy del thread avvia l'esecuzione di un determinato contesto di esecuzione. Questa deve essere la routine di lavoro principale per l'utilità di pianificazione.

```cpp
virtual void Dispatch(_Inout_ DispatchState* pDispatchState) = 0;
```

### <a name="parameters"></a>Parametri

*pDispatchState*<br/>
Puntatore allo stato in cui viene inviato il contesto di esecuzione. Per ulteriori informazioni sullo stato di invio, vedere [DispatchState](dispatchstate-structure.md).

## <a name="getid"></a>Metodo IExecutionContext:: GetId

Restituisce un identificatore univoco per il contesto di esecuzione.

```cpp
virtual unsigned int GetId() const = 0;
```

### <a name="return-value"></a>Valore restituito

Identificatore univoco di tipo Integer.

### <a name="remarks"></a>Osservazioni

È necessario utilizzare il metodo `GetExecutionContextId` per ottenere un identificatore univoco per l'oggetto che implementa l'interfaccia `IExecutionContext`, prima di utilizzare l'interfaccia come parametro per i metodi forniti dal Gestione risorse. Si prevede che venga restituito lo stesso identificatore quando viene richiamata la funzione `GetId`.

Un identificatore ottenuto da un'origine diversa può causare un comportamento indefinito.

## <a name="getproxy"></a>Metodo IExecutionContext:: GetProxy

Restituisce un'interfaccia al proxy del thread che esegue questo contesto.

```cpp
virtual IThreadProxy* GetProxy() = 0;
```

### <a name="return-value"></a>Valore restituito

Interfaccia `IThreadProxy`. Se il proxy del thread del contesto di esecuzione non è stato inizializzato con una chiamata a `SetProxy`, la funzione deve restituire `NULL`.

### <a name="remarks"></a>Osservazioni

Il Gestione risorse richiamerà il metodo `SetProxy` su un contesto di esecuzione, con un'interfaccia `IThreadProxy` come parametro, prima di immettere il metodo `Dispatch` su nel contesto. Si prevede di archiviare questo argomento e di restituirlo alle chiamate a `GetProxy()`.

## <a name="getscheduler"></a>Metodo IExecutionContext:: GetScheduler

Restituisce un'interfaccia all'utilità di pianificazione a cui appartiene il contesto di esecuzione.

```cpp
virtual IScheduler* GetScheduler() = 0;
```

### <a name="return-value"></a>Valore restituito

Interfaccia `IScheduler`.

### <a name="remarks"></a>Osservazioni

È necessario inizializzare il contesto di esecuzione con un'interfaccia `IScheduler` valida prima di usarla come parametro per i metodi forniti dall'Gestione risorse.

## <a name="setproxy"></a>Metodo IExecutionContext:: seproxy

Associa un proxy del thread a questo contesto di esecuzione. Il proxy di thread associato richiama questo metodo immediatamente prima di avviare l'esecuzione del metodo `Dispatch` del contesto.

```cpp
virtual void SetProxy(_Inout_ IThreadProxy* pThreadProxy) = 0;
```

### <a name="parameters"></a>Parametri

*pThreadProxy*<br/>
Interfaccia al proxy del thread che sta per accedere al metodo `Dispatch` su questo contesto di esecuzione.

### <a name="remarks"></a>Osservazioni

È previsto che il parametro venga salvato `pThreadProxy` e restituito in una chiamata al metodo `GetProxy`. Il Gestione risorse garantisce che il proxy di thread associato al contesto di esecuzione non cambierà quando il proxy del thread eseguirà il metodo di `Dispatch`.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Struttura IScheduler](ischeduler-structure.md)<br/>
[Struttura IThreadProxy](ithreadproxy-structure.md)
