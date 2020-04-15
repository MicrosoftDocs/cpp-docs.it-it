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
ms.openlocfilehash: 532247ca1776452ad32476d2bcdfafcee3481058
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81358796"
---
# <a name="iexecutioncontext-structure"></a>Struttura IExecutionContext

Un'interfaccia a un contesto di esecuzione che può essere in esecuzione su un processore virtuale specificato e il cui contesto può essere cambiato cooperativamente.

## <a name="syntax"></a>Sintassi

```cpp
struct IExecutionContext;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IExecutionContext::Dispatch](#dispatch)|Metodo chiamato quando un proxy del thread inizia l'esecuzione di un particolare contesto di esecuzione. Questa dovrebbe essere la routine di lavoro principale per l'utilità di pianificazione.|
|[IExecutionContext::GetIdIExecutionContext::GetId](#getid)|Restituisce un identificatore univoco per il contesto di esecuzione.|
|[IExecutionContext::GetProxy](#getproxy)|Restituisce un'interfaccia al proxy del thread che esegue questo contesto.|
|[IExecutionContext::GetScheduler](#getscheduler)|Restituisce un'interfaccia all'utilità di pianificazione a cui appartiene questo contesto di esecuzione.|
|[IExecutionContext::SetProxy](#setproxy)|Associa un proxy del thread a questo contesto di esecuzione. Il proxy del thread associato richiama questo metodo prima `Dispatch` di avviare l'esecuzione del metodo del contesto.|

## <a name="remarks"></a>Osservazioni

Se si implementa un'utilità di pianificazione personalizzata che si interfaccia con Gestione `IExecutionContext` risorse del runtime di concorrenza, sarà necessario implementare l'interfaccia. I thread creati da Gestione risorse eseguono operazioni per `IExecutionContext::Dispatch` conto dell'utilità di pianificazione eseguendo il metodo .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IExecutionContext`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm.h

**Spazio dei nomi:** Concurrency

## <a name="iexecutioncontextdispatch-method"></a><a name="dispatch"></a>Metodo IExecutionContext::Dispatch

Metodo chiamato quando un proxy del thread inizia l'esecuzione di un particolare contesto di esecuzione. Questa dovrebbe essere la routine di lavoro principale per l'utilità di pianificazione.

```cpp
virtual void Dispatch(_Inout_ DispatchState* pDispatchState) = 0;
```

### <a name="parameters"></a>Parametri

*pDispatchState (stati di pDispatchState)*<br/>
Puntatore allo stato in cui viene inviato questo contesto di esecuzione. Per ulteriori informazioni sullo stato di invio, vedere [DispatchState](dispatchstate-structure.md).

## <a name="iexecutioncontextgetid-method"></a><a name="getid"></a>Metodo IExecutionContext::GetIdIExecutionContext::GetId Method

Restituisce un identificatore univoco per il contesto di esecuzione.

```cpp
virtual unsigned int GetId() const = 0;
```

### <a name="return-value"></a>Valore restituito

Identificatore integer univoco.

### <a name="remarks"></a>Osservazioni

È necessario utilizzare `GetExecutionContextId` il metodo per ottenere un `IExecutionContext` identificatore univoco per l'oggetto che implementa l'interfaccia, prima di utilizzare l'interfaccia come parametro per i metodi forniti da Gestione risorse. Si prevede di restituire lo `GetId` stesso identificatore quando viene richiamata la funzione.

Un identificatore ottenuto da un'origine diversa potrebbe causare un comportamento indefinito.

## <a name="iexecutioncontextgetproxy-method"></a><a name="getproxy"></a>Metodo IExecutionContext::GetProxyIExecutionContext::GetProxy Method

Restituisce un'interfaccia al proxy del thread che esegue questo contesto.

```cpp
virtual IThreadProxy* GetProxy() = 0;
```

### <a name="return-value"></a>Valore restituito

Interfaccia `IThreadProxy`. Se il proxy del thread del contesto di `SetProxy`esecuzione non è `NULL`stato inizializzato con una chiamata a , la funzione deve restituire .

### <a name="remarks"></a>Osservazioni

Gestione risorse richiamerà il `SetProxy` metodo in `IThreadProxy` un contesto di esecuzione, `Dispatch` con un'interfaccia come parametro, prima di immettere il metodo nel nel contesto. È necessario archiviare questo argomento e `GetProxy()`restituirlo nelle chiamate a .

## <a name="iexecutioncontextgetscheduler-method"></a><a name="getscheduler"></a>Metodo IExecutionContext::GetSchedulerIExecutionContext::GetScheduler Method

Restituisce un'interfaccia all'utilità di pianificazione a cui appartiene questo contesto di esecuzione.

```cpp
virtual IScheduler* GetScheduler() = 0;
```

### <a name="return-value"></a>Valore restituito

Interfaccia `IScheduler`.

### <a name="remarks"></a>Osservazioni

È necessario inizializzare il contesto `IScheduler` di esecuzione con un'interfaccia valida prima di utilizzarlo come parametro per i metodi forniti da Gestione risorse.

## <a name="iexecutioncontextsetproxy-method"></a><a name="setproxy"></a>Metodo IExecutionContext::SetProxyIExecutionContext::SetProxy Method

Associa un proxy del thread a questo contesto di esecuzione. Il proxy del thread associato richiama questo metodo prima `Dispatch` di avviare l'esecuzione del metodo del contesto.

```cpp
virtual void SetProxy(_Inout_ IThreadProxy* pThreadProxy) = 0;
```

### <a name="parameters"></a>Parametri

*pThreadProxy*<br/>
Interfaccia al proxy del thread che `Dispatch` sta per immettere il metodo in questo contesto di esecuzione.

### <a name="remarks"></a>Osservazioni

È previsto il salvataggio `pThreadProxy` del parametro e `GetProxy` restituirlo in una chiamata al metodo. Gestione risorse garantisce che il proxy del thread associato al contesto di `Dispatch` esecuzione non verrà modificato durante l'esecuzione del metodo da parte del proxy del thread.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Struttura IScheduler](ischeduler-structure.md)<br/>
[Struttura IThreadProxy](ithreadproxy-structure.md)
