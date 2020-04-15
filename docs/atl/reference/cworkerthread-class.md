---
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
ms.openlocfilehash: 05e6b432d44927fa7e276792643e29c80c42d822
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81330216"
---
# <a name="cworkerthread-class"></a>Classe CWorkerThread

Questa classe crea un thread di lavoro o ne utilizza uno esistente, attende uno o più handle di oggetto kernel ed esegue una funzione client specificata quando viene segnalato uno degli handle.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class ThreadTraits = DefaultThreadTraits>
class CWorkerThread
```

### <a name="parameters"></a>Parametri

*Tratti di filettatura*<br/>
La classe che fornisce la funzione di creazione del thread, ad esempio [CRTThread Traits](../../atl/reference/crtthreadtraits-class.md) o [Win32Thread Traits](../../atl/reference/win32threadtraits-class.md).

## <a name="members"></a>Membri

### <a name="protected-structures"></a>Strutture protette

|Nome|Descrizione|
|----------|-----------------|
|`WorkerClientEntry`||

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWorkerThread::CWorkerThread](#cworkerthread)|Costruttore per il thread di lavoro.|
|[CWorkerThread:: CWorkerThread](#dtor)|Distruttore per il thread di lavoro.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWorkerThread::AddHandle](#addhandle)|Chiamare questo metodo per aggiungere l'handle di un oggetto waitable all'elenco gestito dal thread di lavoro.|
|[CWorkerThread::AddTimer](#addtimer)|Chiamare questo metodo per aggiungere un timer waitable periodico all'elenco gestito dal thread di lavoro.|
|[CWorkerThread::GetThreadHandle](#getthreadhandle)|Chiamare questo metodo per ottenere l'handle del thread del thread di lavoro.|
|[CWorkerThread::GetThreadId](#getthreadid)|Chiamare questo metodo per ottenere l'ID del thread di lavoro.|
|[CWorkerThread::Initialize](#initialize)|Chiamare questo metodo per inizializzare il thread di lavoro.|
|[CWorkerThread::RemoveHandle](#removehandle)|Chiamare questo metodo per rimuovere un handle dall'elenco di oggetti waitable.|
|[CWorkerThread::Arresto](#shutdown)|Chiamare questo metodo per arrestare il thread di lavoro.|

## <a name="remarks"></a>Osservazioni

### <a name="to-use-cworkerthread"></a>Per utilizzare CWorkerThread

1. Creare un'istanza di questa classe.

1. Chiamare [CWorkerThread::Initialize](#initialize).

1. Chiamare [CWorkerThread::AddHandle](#addhandle) con l'handle di un oggetto kernel e un puntatore a un'implementazione di [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md).

   \- - oppure -

   Chiamare [CWorkerThread::AddTimer](#addtimer) con un puntatore a un'implementazione di [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md).

1. Implementare [IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) per eseguire un'azione quando l'handle o il timer viene segnalato.

1. Per rimuovere un oggetto dall'elenco di oggetti waitable, chiamare [CWorkerThread::RemoveHandle](#removehandle).

1. Per terminare il thread, chiamare [CWorkerThread::Shutdown](#shutdown).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlutil.h

## <a name="cworkerthreadaddhandle"></a><a name="addhandle"></a>CWorkerThread::AddHandle

Chiamare questo metodo per aggiungere l'handle di un oggetto waitable all'elenco gestito dal thread di lavoro.

```
HRESULT AddHandle(
    HANDLE hObject,
    IWorkerThreadClient* pClient,
    DWORD_PTR dwParam) throw();
```

### <a name="parameters"></a>Parametri

*hOggetto*<br/>
Handle a un oggetto waitable.

*pCliente*<br/>
Puntatore all'interfaccia [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md) sull'oggetto da chiamare quando viene segnalato l'handle.

*dwParam (informazioni in base al tano*<br/>
Parametro da passare a [IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) quando l'handle viene segnalato.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

[IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) verrà chiamato tramite *pClient* quando viene segnalato l'handle *hObject.*

## <a name="cworkerthreadaddtimer"></a><a name="addtimer"></a>CWorkerThread::AddTimer

Chiamare questo metodo per aggiungere un timer waitable periodico all'elenco gestito dal thread di lavoro.

```
HRESULT AddTimer(
    DWORD dwInterval,
    IWorkerThreadClient* pClient,
    DWORD_PTR dwParam,
    HANDLE* phTimer) throw();
```

### <a name="parameters"></a>Parametri

*dwInterval (inbase)*<br/>
Specifica il periodo del timer in millisecondi.

*pCliente*<br/>
Puntatore all'interfaccia [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md) sull'oggetto da chiamare quando viene segnalato l'handle.

*dwParam (informazioni in base al tano*<br/>
Parametro da passare a [IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) quando l'handle viene segnalato.

*fallire*<br/>
[fuori] Indirizzo della variabile HANDLE che, in caso di esito positivo, riceve l'handle per il timer appena creato.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

[IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) verrà chiamato tramite *pClient* quando il timer viene segnalato.

Passare l'handle del timer da *phTimer* a [CWorkerThread::RemoveHandle](#removehandle) per chiudere il timer.

## <a name="cworkerthreadcworkerthread"></a><a name="cworkerthread"></a>CWorkerThread::CWorkerThread

Costruttore.

```
CWorkerThread() throw();
```

## <a name="cworkerthreadcworkerthread"></a><a name="dtor"></a>CWorkerThread:: CWorkerThread

Distruttore.

```
~CWorkerThread() throw();
```

### <a name="remarks"></a>Osservazioni

Chiama [CWorkerThread::Shutdown](#shutdown).

## <a name="cworkerthreadgetthreadhandle"></a><a name="getthreadhandle"></a>CWorkerThread::GetThreadHandle

Chiamare questo metodo per ottenere l'handle del thread del thread di lavoro.

```
HANDLE GetThreadHandle() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'handle del thread o NULL se il thread di lavoro non è stato inizializzato.

## <a name="cworkerthreadgetthreadid"></a><a name="getthreadid"></a>CWorkerThread::GetThreadId

Chiamare questo metodo per ottenere l'ID del thread di lavoro.

```
DWORD GetThreadId() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'ID del thread o NULL se il thread di lavoro non è stato inizializzato.

## <a name="cworkerthreadinitialize"></a><a name="initialize"></a>CWorkerThread::Initialize

Chiamare questo metodo per inizializzare il thread di lavoro.

```
HRESULT Initialize() throw();

HRESULT Initialize(CWorkerThread<ThreadTraits>* pThread) throw();
```

### <a name="parameters"></a>Parametri

*pThread*<br/>
Un thread di lavoro esistente.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Questo metodo deve essere chiamato per inizializzare l'oggetto dopo la creazione o dopo una chiamata a [CWorkerThread::Shutdown](#shutdown).

Per fare in `CWorkerThread` modo che due o più oggetti utilizzino lo stesso thread di `Initialize` lavoro, inizializzarne uno senza passare alcun argomento, quindi passare un puntatore a tale oggetto ai metodi degli altri. Gli oggetti inizializzati utilizzando il puntatore devono essere arrestati prima dell'oggetto utilizzato per inizializzarli.

Vedere [CWorkerThread::Shutdown](#shutdown) per informazioni su come cambia il comportamento di tale metodo quando viene inizializzato utilizzando un puntatore a un oggetto esistente.

## <a name="cworkerthreadremovehandle"></a><a name="removehandle"></a>CWorkerThread::RemoveHandle

Chiamare questo metodo per rimuovere un handle dall'elenco di oggetti waitable.

```
HRESULT RemoveHandle(HANDLE hObject) throw();
```

### <a name="parameters"></a>Parametri

*hOggetto*<br/>
Maniglia da rimuovere.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Quando l'handle viene [rimosso, IWorkerThreadClient::CloseHandle](../../atl/reference/iworkerthreadclient-interface.md#closehandle) verrà chiamato sull'oggetto associato passato a [AddHandle](#addhandle). Se questa chiamata `CWorkerThread` ha esito negativo, chiamerà la funzione [CloseHandle](/windows/win32/api/handleapi/nf-handleapi-closehandle) di Windows sull'handle.

## <a name="cworkerthreadshutdown"></a><a name="shutdown"></a>CWorkerThread::Arresto

Chiamare questo metodo per arrestare il thread di lavoro.

```
HRESULT Shutdown(DWORD dwWait = ATL_WORKER_THREAD_WAIT) throw();
```

### <a name="parameters"></a>Parametri

*dwAttesa*<br/>
Tempo di attesa in millisecondi per l'arresto del thread di lavoro. il valore predefinito della ATL_WORKER_THREAD_WAIT è 10 secondi. Se necessario, è possibile definire un valore personalizzato per questo simbolo prima di includere atlutil.h.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore, ad esempio se viene superato il valore di *timeout, dwWait*.

### <a name="remarks"></a>Osservazioni

Per riutilizzare l'oggetto, chiamare [CWorkerThread::Initialize](#initialize) dopo aver chiamato questo metodo.

Si noti che la chiamata `Shutdown` a `CWorkerThread` un oggetto inizializzato con un puntatore a un altro oggetto non ha alcun effetto e restituisce sempre S_OK.

## <a name="see-also"></a>Vedere anche

[DefaultThreadTraits](atl-typedefs.md#defaultthreadtraits)<br/>
[Classi](../../atl/reference/atl-classes.md)<br/>
[Multithreading: creazione di thread di lavoro](../../parallel/multithreading-creating-worker-threads.md)<br/>
[Interfaccia IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md)
