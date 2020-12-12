---
description: 'Altre informazioni su: classe CNoWorkerThread'
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
ms.openlocfilehash: 5159c04a8390f8933291f697faccedb7353fb48e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97141414"
---
# <a name="cnoworkerthread-class"></a>Classe CNoWorkerThread

Utilizzare questa classe come argomento per il `MonitorClass` parametro di modello per memorizzare le classi nella cache se si desidera disabilitare la manutenzione dinamica della cache.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CNoWorkerThread
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CNoWorkerThread:: AddHandle](#addhandle)|Equivalente non funzionale di [CWorkerThread:: AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).|
|[CNoWorkerThread::AddTimer](#addtimer)|Equivalente non funzionale di [CWorkerThread:: AddTimer](../../atl/reference/cworkerthread-class.md#addtimer).|
|[CNoWorkerThread::GetThreadHandle](#getthreadhandle)|Equivalente non funzionale di [CWorkerThread:: GetThreadHandle](../../atl/reference/cworkerthread-class.md#getthreadhandle).|
|[CNoWorkerThread::GetThreadId](#getthreadid)|Equivalente non funzionale di [CWorkerThread:: GetThreadId](../../atl/reference/cworkerthread-class.md#getthreadid).|
|[CNoWorkerThread:: Initialize](#initialize)|Equivalente non funzionale di [CWorkerThread:: Initialize](../../atl/reference/cworkerthread-class.md#initialize).|
|[CNoWorkerThread:: RemoveHandle](#removehandle)|Equivalente non funzionale di [CWorkerThread:: RemoveHandle](../../atl/reference/cworkerthread-class.md#removehandle).|
|[CNoWorkerThread:: Shutdown](#shutdown)|Equivalente non funzionale di [CWorkerThread:: Shutdown](../../atl/reference/cworkerthread-class.md#shutdown).|

## <a name="remarks"></a>Commenti

Questa classe fornisce la stessa interfaccia pubblica di [CWorkerThread](../../atl/reference/cworkerthread-class.md). Questa interfaccia deve essere fornita dal `MonitorClass` parametro di modello per le classi della cache.

I metodi di questa classe sono implementati in modo da non eseguire alcuna operazione. I metodi che restituiscono un valore HRESULT restituiscono sempre S_OK e i metodi che restituiscono un HANDLE o un ID di thread restituiscono sempre 0.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlutil. h

## <a name="cnoworkerthreadaddhandle"></a><a name="addhandle"></a> CNoWorkerThread:: AddHandle

Equivalente non funzionale di [CWorkerThread:: AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).

```
HRESULT AddHandle(HANDLE /* hObject */,
    IWorkerThreadClient* /* pClient */,
    DWORD_PTR /* dwParam */) throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre S_OK.

### <a name="remarks"></a>Commenti

L'implementazione fornita da questa classe non esegue alcuna operazione.

## <a name="cnoworkerthreadaddtimer"></a><a name="addtimer"></a> CNoWorkerThread::AddTimer

Equivalente non funzionale di [CWorkerThread:: AddTimer](../../atl/reference/cworkerthread-class.md#addtimer).

```
HRESULT AddTimer(DWORD /* dwInterval */,
    IWorkerThreadClient* /* pClient */,
    DWORD_PTR /* dwParam */,
    HANDLE* /* phTimer */) throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre S_OK.

### <a name="remarks"></a>Commenti

L'implementazione fornita da questa classe non esegue alcuna operazione.

## <a name="cnoworkerthreadgetthreadhandle"></a><a name="getthreadhandle"></a> CNoWorkerThread::GetThreadHandle

Equivalente non funzionale di [CWorkerThread:: GetThreadHandle](../../atl/reference/cworkerthread-class.md#getthreadhandle).

```
HANDLE GetThreadHandle() throw();
```

### <a name="return-value"></a>Valore restituito

Viene restituito sempre NULL.

### <a name="remarks"></a>Commenti

L'implementazione fornita da questa classe non esegue alcuna operazione.

## <a name="cnoworkerthreadgetthreadid"></a><a name="getthreadid"></a> CNoWorkerThread::GetThreadId

Equivalente non funzionale di [CWorkerThread:: GetThreadId](../../atl/reference/cworkerthread-class.md#getthreadid).

```
DWORD GetThreadId() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre 0.

### <a name="remarks"></a>Commenti

L'implementazione fornita da questa classe non esegue alcuna operazione.

## <a name="cnoworkerthreadinitialize"></a><a name="initialize"></a> CNoWorkerThread:: Initialize

Equivalente non funzionale di [CWorkerThread:: Initialize](../../atl/reference/cworkerthread-class.md#initialize).

```
HRESULT Initialize() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre S_OK.

### <a name="remarks"></a>Commenti

L'implementazione fornita da questa classe non esegue alcuna operazione.

## <a name="cnoworkerthreadremovehandle"></a><a name="removehandle"></a> CNoWorkerThread:: RemoveHandle

Equivalente non funzionale di [CWorkerThread:: RemoveHandle](../../atl/reference/cworkerthread-class.md#removehandle).

```
HRESULT RemoveHandle(HANDLE /* hObject */) throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre S_OK.

### <a name="remarks"></a>Commenti

L'implementazione fornita da questa classe non esegue alcuna operazione.

## <a name="cnoworkerthreadshutdown"></a><a name="shutdown"></a> CNoWorkerThread:: Shutdown

Equivalente non funzionale di [CWorkerThread:: Shutdown](../../atl/reference/cworkerthread-class.md#shutdown).

```
HRESULT Shutdown(DWORD dwWait = ATL_WORKER_THREAD_WAIT) throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre S_OK.

### <a name="remarks"></a>Commenti

L'implementazione fornita da questa classe non esegue alcuna operazione.
