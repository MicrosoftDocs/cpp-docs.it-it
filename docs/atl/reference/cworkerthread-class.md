---
description: 'Altre informazioni su: classe CWorkerThread'
title: Classe CWorkerThread
ms.date: 11/04/2016
f1_keywords:
- CWorkerThread
- ATLUTIL/ATL::CWorkerThread
- ATLUTIL/ATL::CWorkerThread::CWorkerThread
- ATLUTIL/ATL::CWorkerThread::AddHandle
- ATLUTIL/ATL::CWorkerThread::AddTimer
- ATLUTIL/ATL::CWorkerThread::GetThreadHandle
- ATLUTIL/ATL::CWorkerThread::GetThreadId
- ATLUTIL/ATL::CWorkerThread::Initialize
- ATLUTIL/ATL::CWorkerThread::RemoveHandle
- ATLUTIL/ATL::CWorkerThread::Shutdown
helpviewer_keywords:
- CWorkerThread class
ms.assetid: be79a832-1345-4a36-a13e-a406cc65286f
ms.openlocfilehash: 6ba4646f2e52d3a199ba42009f53d88717c8e2c3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97139997"
---
# <a name="cworkerthread-class"></a>Classe CWorkerThread

Questa classe crea un thread di lavoro o ne usa uno esistente, attende uno o più handle di oggetti kernel ed esegue una funzione client specificata quando uno degli handle viene segnalato.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class ThreadTraits = DefaultThreadTraits>
class CWorkerThread
```

### <a name="parameters"></a>Parametri

*ThreadTraits*<br/>
Classe che fornisce la funzione di creazione del thread, ad esempio [CRTThreadTraits](../../atl/reference/crtthreadtraits-class.md) o [Win32ThreadTraits](../../atl/reference/win32threadtraits-class.md).

## <a name="members"></a>Membri

### <a name="protected-structures"></a>Strutture protette

|Nome|Description|
|----------|-----------------|
|`WorkerClientEntry`||

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CWorkerThread:: CWorkerThread](#cworkerthread)|Costruttore per il thread di lavoro.|
|[CWorkerThread:: ~ CWorkerThread](#dtor)|Distruttore del thread di lavoro.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CWorkerThread:: AddHandle](#addhandle)|Chiamare questo metodo per aggiungere un handle dell'oggetto waitable all'elenco gestito dal thread di lavoro.|
|[CWorkerThread:: AddTimer](#addtimer)|Chiamare questo metodo per aggiungere un timer waitable periodico all'elenco gestito dal thread di lavoro.|
|[CWorkerThread:: GetThreadHandle](#getthreadhandle)|Chiamare questo metodo per ottenere l'handle del thread di lavoro.|
|[CWorkerThread:: GetThreadId](#getthreadid)|Chiamare questo metodo per ottenere l'ID del thread di lavoro.|
|[CWorkerThread:: Initialize](#initialize)|Chiamare questo metodo per inizializzare il thread di lavoro.|
|[CWorkerThread:: RemoveHandle](#removehandle)|Chiamare questo metodo per rimuovere un handle dall'elenco di oggetti in attesa.|
|[CWorkerThread:: Shutdown](#shutdown)|Chiamare questo metodo per arrestare il thread di lavoro.|

## <a name="remarks"></a>Commenti

### <a name="to-use-cworkerthread"></a>Per usare CWorkerThread

1. Creare un'istanza di questa classe.

1. Chiamare [CWorkerThread:: Initialize](#initialize).

1. Chiamare [CWorkerThread:: AddHandle](#addhandle) con l'handle di un oggetto kernel e un puntatore a un'implementazione di [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md).

   \- - oppure -

   Chiamare [CWorkerThread:: AddTimer](#addtimer) con un puntatore a un'implementazione di [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md).

1. Implementare [IWorkerThreadClient:: Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) per eseguire un'azione quando viene segnalato l'handle o il timer.

1. Per rimuovere un oggetto dall'elenco di oggetti waitable, chiamare [CWorkerThread:: RemoveHandle](#removehandle).

1. Per terminare il thread, chiamare [CWorkerThread:: Shutdown](#shutdown).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlutil. h

## <a name="cworkerthreadaddhandle"></a><a name="addhandle"></a> CWorkerThread:: AddHandle

Chiamare questo metodo per aggiungere un handle dell'oggetto waitable all'elenco gestito dal thread di lavoro.

```
HRESULT AddHandle(
    HANDLE hObject,
    IWorkerThreadClient* pClient,
    DWORD_PTR dwParam) throw();
```

### <a name="parameters"></a>Parametri

*hObject*<br/>
Handle per un oggetto in attesa.

*pClient*<br/>
Puntatore all'interfaccia [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md) sull'oggetto da chiamare quando viene segnalato l'handle.

*dwParam*<br/>
Parametro da passare a [IWorkerThreadClient:: Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) quando viene segnalato l'handle.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

[IWorkerThreadClient:: Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) verrà chiamato tramite *pClient* quando viene segnalato l'handle, *hObject*.

## <a name="cworkerthreadaddtimer"></a><a name="addtimer"></a> CWorkerThread:: AddTimer

Chiamare questo metodo per aggiungere un timer waitable periodico all'elenco gestito dal thread di lavoro.

```
HRESULT AddTimer(
    DWORD dwInterval,
    IWorkerThreadClient* pClient,
    DWORD_PTR dwParam,
    HANDLE* phTimer) throw();
```

### <a name="parameters"></a>Parametri

*dwInterval*<br/>
Specifica il periodo del timer in millisecondi.

*pClient*<br/>
Puntatore all'interfaccia [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md) sull'oggetto da chiamare quando viene segnalato l'handle.

*dwParam*<br/>
Parametro da passare a [IWorkerThreadClient:: Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) quando viene segnalato l'handle.

*phTimer*<br/>
out Indirizzo della variabile dell'HANDLE che, in esito positivo, riceve l'handle per il timer appena creato.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

[IWorkerThreadClient:: Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) verrà chiamato tramite *pClient* quando il timer viene segnalato.

Passare l'handle del timer da *phTimer* a [CWorkerThread:: RemoveHandle](#removehandle) per chiudere il timer.

## <a name="cworkerthreadcworkerthread"></a><a name="cworkerthread"></a> CWorkerThread:: CWorkerThread

Costruttore.

```
CWorkerThread() throw();
```

## <a name="cworkerthreadcworkerthread"></a><a name="dtor"></a> CWorkerThread:: ~ CWorkerThread

Distruttore.

```
~CWorkerThread() throw();
```

### <a name="remarks"></a>Commenti

Chiama [CWorkerThread:: Shutdown](#shutdown).

## <a name="cworkerthreadgetthreadhandle"></a><a name="getthreadhandle"></a> CWorkerThread:: GetThreadHandle

Chiamare questo metodo per ottenere l'handle del thread di lavoro.

```
HANDLE GetThreadHandle() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'handle del thread o NULL se il thread di lavoro non è stato inizializzato.

## <a name="cworkerthreadgetthreadid"></a><a name="getthreadid"></a> CWorkerThread:: GetThreadId

Chiamare questo metodo per ottenere l'ID del thread di lavoro.

```
DWORD GetThreadId() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'ID del thread o NULL se il thread di lavoro non è stato inizializzato.

## <a name="cworkerthreadinitialize"></a><a name="initialize"></a> CWorkerThread:: Initialize

Chiamare questo metodo per inizializzare il thread di lavoro.

```
HRESULT Initialize() throw();

HRESULT Initialize(CWorkerThread<ThreadTraits>* pThread) throw();
```

### <a name="parameters"></a>Parametri

*pThread*<br/>
Un thread di lavoro esistente.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

Questo metodo deve essere chiamato per inizializzare l'oggetto dopo la creazione o dopo una chiamata a [CWorkerThread:: Shutdown](#shutdown).

Per fare in modo che due o più `CWorkerThread` oggetti usino lo stesso thread di lavoro, inizializzarne uno senza passare alcun argomento, quindi passare un puntatore a tale oggetto ai `Initialize` metodi degli altri. Gli oggetti inizializzati utilizzando il puntatore devono essere arrestati prima che l'oggetto venga utilizzato per inizializzarli.

Vedere [CWorkerThread:: Shutdown](#shutdown) per informazioni su come cambia il comportamento del metodo quando viene inizializzato usando un puntatore a un oggetto esistente.

## <a name="cworkerthreadremovehandle"></a><a name="removehandle"></a> CWorkerThread:: RemoveHandle

Chiamare questo metodo per rimuovere un handle dall'elenco di oggetti in attesa.

```
HRESULT RemoveHandle(HANDLE hObject) throw();
```

### <a name="parameters"></a>Parametri

*hObject*<br/>
Handle da rimuovere.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

Quando l'handle viene rimosso, [IWorkerThreadClient:: CloseHandle](../../atl/reference/iworkerthreadclient-interface.md#closehandle) verrà chiamato sull'oggetto associato passato a [AddHandle](#addhandle). Se la chiamata ha esito negativo, chiamerà `CWorkerThread` la funzione [CloseHandle](/windows/win32/api/handleapi/nf-handleapi-closehandle) di Windows sull'handle.

## <a name="cworkerthreadshutdown"></a><a name="shutdown"></a> CWorkerThread:: Shutdown

Chiamare questo metodo per arrestare il thread di lavoro.

```
HRESULT Shutdown(DWORD dwWait = ATL_WORKER_THREAD_WAIT) throw();
```

### <a name="parameters"></a>Parametri

*dwWait*<br/>
Tempo in millisecondi di attesa per l'arresto del thread di lavoro. ATL_WORKER_THREAD_WAIT valore predefinito è 10 secondi. Se necessario, è possibile definire un valore personalizzato per questo simbolo prima di includere atlutil. h.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore, ad esempio se viene superato il valore di timeout *dwWait*.

### <a name="remarks"></a>Commenti

Per riutilizzare l'oggetto, chiamare [CWorkerThread:: Initialize](#initialize) dopo la chiamata a questo metodo.

Si noti che la chiamata a `Shutdown` su un oggetto inizializzato con un puntatore a un altro `CWorkerThread` oggetto non ha alcun effetto e restituisce sempre S_OK.

## <a name="see-also"></a>Vedi anche

[DefaultThreadTraits](atl-typedefs.md#defaultthreadtraits)<br/>
[Classi](../../atl/reference/atl-classes.md)<br/>
[Multithreading: creazione di thread di lavoro](../../parallel/multithreading-creating-worker-threads.md)<br/>
[Interfaccia IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md)
