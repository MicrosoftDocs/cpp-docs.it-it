---
title: Classe CNoWorkerThread
ms.date: 11/04/2016
f1_keywords:
- CNoWorkerThread
- ATLUTIL/ATL::CNoWorkerThread
- ATLUTIL/ATL::CNoWorkerThread::AddHandle
- ATLUTIL/ATL::CNoWorkerThread::AddTimer
- ATLUTIL/ATL::CNoWorkerThread::GetThreadHandle
- ATLUTIL/ATL::CNoWorkerThread::GetThreadId
- ATLUTIL/ATL::CNoWorkerThread::Initialize
- ATLUTIL/ATL::CNoWorkerThread::RemoveHandle
- ATLUTIL/ATL::CNoWorkerThread::Shutdown
helpviewer_keywords:
- CNoWorkerThread class
ms.assetid: 29f06bae-b658-4aac-9c14-331e996d25d1
ms.openlocfilehash: fcd103283738ce7d573faa2fb1025ee2af642021
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50520211"
---
# <a name="cnoworkerthread-class"></a>Classe CNoWorkerThread

Utilizzare questa classe come argomento per il `MonitorClass` parametro di modello per le classi di cache se si desidera disabilitare la manutenzione della cache dinamica.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
class CNoWorkerThread
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CNoWorkerThread::AddHandle](#addhandle)|Non funzionali pari [CWorkerThread::AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).|
|[CNoWorkerThread::AddTimer](#addtimer)|Non funzionali pari [CWorkerThread::AddTimer](../../atl/reference/cworkerthread-class.md#addtimer).|
|[CNoWorkerThread::GetThreadHandle](#getthreadhandle)|Non funzionali pari [CWorkerThread::GetThreadHandle](../../atl/reference/cworkerthread-class.md#getthreadhandle).|
|[CNoWorkerThread::GetThreadId](#getthreadid)|Non funzionali pari [CWorkerThread::GetThreadId](../../atl/reference/cworkerthread-class.md#getthreadid).|
|[CNoWorkerThread::Initialize](#initialize)|Non funzionali pari [CWorkerThread::Initialize](../../atl/reference/cworkerthread-class.md#initialize).|
|[CNoWorkerThread::RemoveHandle](#removehandle)|Non funzionali pari [CWorkerThread::RemoveHandle](../../atl/reference/cworkerthread-class.md#removehandle).|
|[CNoWorkerThread::Shutdown](#shutdown)|Non funzionali pari [CWorkerThread::Shutdown](../../atl/reference/cworkerthread-class.md#shutdown).|

## <a name="remarks"></a>Note

Questa classe fornisce la stessa interfaccia pubblica [CWorkerThread](../../atl/reference/cworkerthread-class.md). Questa interfaccia deve essere fornito dal `MonitorClass` parametro di modello per le classi di cache.

I metodi in questa classe vengono implementati per non eseguire alcuna operazione. I metodi che restituiscono sempre un valore HRESULT restituiscono S_OK, e i metodi che restituiscono sempre un ID di HANDLE o thread restituiscono 0.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlutil. h

##  <a name="addhandle"></a>  CNoWorkerThread::AddHandle

Non funzionali pari [CWorkerThread::AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).

```
HRESULT AddHandle(HANDLE /* hObject */,
    IWorkerThreadClient* /* pClient */,
    DWORD_PTR /* dwParam */) throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre S_OK.

### <a name="remarks"></a>Note

L'implementazione fornita da questa classe non esegue alcuna operazione.

##  <a name="addtimer"></a>  CNoWorkerThread::AddTimer

Non funzionali pari [CWorkerThread::AddTimer](../../atl/reference/cworkerthread-class.md#addtimer).

```
HRESULT AddTimer(DWORD /* dwInterval */,
    IWorkerThreadClient* /* pClient */,
    DWORD_PTR /* dwParam */,
    HANDLE* /* phTimer */) throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre S_OK.

### <a name="remarks"></a>Note

L'implementazione fornita da questa classe non esegue alcuna operazione.

##  <a name="getthreadhandle"></a>  CNoWorkerThread::GetThreadHandle

Non funzionali pari [CWorkerThread::GetThreadHandle](../../atl/reference/cworkerthread-class.md#getthreadhandle).

```
HANDLE GetThreadHandle() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre NULL.

### <a name="remarks"></a>Note

L'implementazione fornita da questa classe non esegue alcuna operazione.

##  <a name="getthreadid"></a>  CNoWorkerThread::GetThreadId

Non funzionali pari [CWorkerThread::GetThreadId](../../atl/reference/cworkerthread-class.md#getthreadid).

```
DWORD GetThreadId() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre 0.

### <a name="remarks"></a>Note

L'implementazione fornita da questa classe non esegue alcuna operazione.

##  <a name="initialize"></a>  CNoWorkerThread::Initialize

Non funzionali pari [CWorkerThread::Initialize](../../atl/reference/cworkerthread-class.md#initialize).

```
HRESULT Initialize() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre S_OK.

### <a name="remarks"></a>Note

L'implementazione fornita da questa classe non esegue alcuna operazione.

##  <a name="removehandle"></a>  CNoWorkerThread::RemoveHandle

Non funzionali pari [CWorkerThread::RemoveHandle](../../atl/reference/cworkerthread-class.md#removehandle).

```
HRESULT RemoveHandle(HANDLE /* hObject */) throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre S_OK.

### <a name="remarks"></a>Note

L'implementazione fornita da questa classe non esegue alcuna operazione.

##  <a name="shutdown"></a>  CNoWorkerThread::Shutdown

Non funzionali pari [CWorkerThread::Shutdown](../../atl/reference/cworkerthread-class.md#shutdown).

```
HRESULT Shutdown(DWORD dwWait = ATL_WORKER_THREAD_WAIT) throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre S_OK.

### <a name="remarks"></a>Note

L'implementazione fornita da questa classe non esegue alcuna operazione.
