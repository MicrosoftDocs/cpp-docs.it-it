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
ms.openlocfilehash: 8c49df5a8c7f214b574b4f6118d182b63fec5dca
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57264963"
---
# <a name="iexecutioncontext-structure"></a>Struttura IExecutionContext

Un'interfaccia a un contesto di esecuzione che può essere in esecuzione su un processore virtuale specificato e il cui contesto può essere cambiato cooperativamente.

## <a name="syntax"></a>Sintassi

```
struct IExecutionContext;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IExecutionContext::Dispatch](#dispatch)|Il metodo che viene chiamato quando un proxy del thread viene avviata l'esecuzione di un particolare contesto di esecuzione. Deve essere la routine principale di lavoro per le utilità di pianificazione.|
|[IExecutionContext::GetId](#getid)|Restituisce un identificatore univoco per il contesto di esecuzione.|
|[IExecutionContext::GetProxy](#getproxy)|Restituisce un'interfaccia per il proxy thread in esecuzione in questo contesto.|
|[IExecutionContext::GetScheduler](#getscheduler)|Restituisce un'interfaccia per l'utilità di pianificazione a cui appartiene questo contesto di esecuzione.|
|[IExecutionContext::SetProxy](#setproxy)|Associa questo contesto di esecuzione di un proxy del thread. Il proxy thread associato richiama questo metodo poco prima di avviare l'esecuzione del contesto `Dispatch` (metodo).|

## <a name="remarks"></a>Note

Se si sta implementando un'utilità di pianificazione personalizzate che si interfaccia con Gestione risorse del Runtime di concorrenza, è necessario implementare il `IExecutionContext` interfaccia. I thread creati da Gestione risorse di eseguono operazioni per conto dell'utilità di pianificazione tramite l'esecuzione di `IExecutionContext::Dispatch` (metodo).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IExecutionContext`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

**Spazio dei nomi:** Concurrency

##  <a name="dispatch"></a>  Metodo IExecutionContext:: dispatch

Il metodo che viene chiamato quando un proxy del thread viene avviata l'esecuzione di un particolare contesto di esecuzione. Deve essere la routine principale di lavoro per le utilità di pianificazione.

```
virtual void Dispatch(_Inout_ DispatchState* pDispatchState) = 0;
```

### <a name="parameters"></a>Parametri

*pDispatchState*<br/>
Puntatore allo stato in cui è stato inviato il contesto di esecuzione. Per altre informazioni sullo stato di recapito, vedere [DispatchState](dispatchstate-structure.md).

##  <a name="getid"></a>  Metodo IExecutionContext:: GetID

Restituisce un identificatore univoco per il contesto di esecuzione.

```
virtual unsigned int GetId() const = 0;
```

### <a name="return-value"></a>Valore restituito

Un identificatore univoco di tipo integer.

### <a name="remarks"></a>Note

È consigliabile usare il metodo `GetExecutionContextId` per ottenere un identificatore univoco per l'oggetto che implementa il `IExecutionContext` interfaccia, prima di usare l'interfaccia come parametro ai metodi forniti da Gestione risorse. Devono restituire lo stesso identificatore quando il `GetId` funzione viene richiamata.

Un identificatore ottenuto da un'origine diversa potrebbe causare un comportamento indefinito.

##  <a name="getproxy"></a>  Metodo IExecutionContext:: GetProxy

Restituisce un'interfaccia per il proxy thread in esecuzione in questo contesto.

```
virtual IThreadProxy* GetProxy() = 0;
```

### <a name="return-value"></a>Valore restituito

Interfaccia di `IThreadProxy`. Se proxy del thread del contesto di esecuzione non è stato inizializzato con una chiamata a `SetProxy`, la funzione deve restituire `NULL`.

### <a name="remarks"></a>Note

Richiama il gestore di risorse il `SetProxy` metodo in un contesto di esecuzione, con un `IThreadProxy` interfaccia come parametro, prima di inserire il `Dispatch` metodo sul nel contesto del. È necessario archiviare in questo argomento e restituirlo nelle chiamate a `GetProxy()`.

##  <a name="getscheduler"></a>  Metodo IExecutionContext:: GetScheduler

Restituisce un'interfaccia per l'utilità di pianificazione a cui appartiene questo contesto di esecuzione.

```
virtual IScheduler* GetScheduler() = 0;
```

### <a name="return-value"></a>Valore restituito

Interfaccia di `IScheduler`.

### <a name="remarks"></a>Note

È necessario inizializzare il contesto di esecuzione con un valore valido `IScheduler` interfaccia prima di utilizzarlo come parametro ai metodi forniti da Gestione risorse.

##  <a name="setproxy"></a>  Metodo IExecutionContext:: SetProxy

Associa questo contesto di esecuzione di un proxy del thread. Il proxy thread associato richiama questo metodo poco prima di avviare l'esecuzione del contesto `Dispatch` (metodo).

```
virtual void SetProxy(_Inout_ IThreadProxy* pThreadProxy) = 0;
```

### <a name="parameters"></a>Parametri

*pThreadProxy*<br/>
Un'interfaccia per il proxy thread che sta per attivare il `Dispatch` metodo sul contesto di esecuzione.

### <a name="remarks"></a>Note

È necessario salvare il parametro `pThreadProxy` e lo restituisce in una chiamata al `GetProxy` (metodo). Resource Manager garantisce che il proxy thread associato al contesto di esecuzione non verrà modificati mentre il proxy thread è in esecuzione il `Dispatch` (metodo).

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Struttura IScheduler](ischeduler-structure.md)<br/>
[Struttura IThreadProxy](ithreadproxy-structure.md)
