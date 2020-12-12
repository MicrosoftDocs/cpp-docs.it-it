---
description: 'Altre informazioni su: classe CThreadPool'
title: Classe CThreadPool
ms.date: 11/04/2016
f1_keywords:
- CThreadPool
- ATLUTIL/ATL::CThreadPool
- ATLUTIL/ATL::CThreadPool::CThreadPool
- ATLUTIL/ATL::CThreadPool::AddRef
- ATLUTIL/ATL::CThreadPool::GetNumThreads
- ATLUTIL/ATL::CThreadPool::GetQueueHandle
- ATLUTIL/ATL::CThreadPool::GetSize
- ATLUTIL/ATL::CThreadPool::GetTimeout
- ATLUTIL/ATL::CThreadPool::Initialize
- ATLUTIL/ATL::CThreadPool::QueryInterface
- ATLUTIL/ATL::CThreadPool::QueueRequest
- ATLUTIL/ATL::CThreadPool::Release
- ATLUTIL/ATL::CThreadPool::SetSize
- ATLUTIL/ATL::CThreadPool::SetTimeout
- ATLUTIL/ATL::CThreadPool::Shutdown
helpviewer_keywords:
- CThreadPool class
ms.assetid: 06683718-01b9-413c-9481-2dc1734ec70f
ms.openlocfilehash: 445b32ccff2df2456687e9b9ae34950c91c00613
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97140361"
---
# <a name="cthreadpool-class"></a>Classe CThreadPool

Questa classe fornisce un pool di thread di lavoro che elaborano una coda di elementi di lavoro.

## <a name="syntax"></a>Sintassi

```
template <class Worker, class ThreadTraits = DefaultThreadTraits>
class CThreadPool : public IThreadPoolConfig
```

#### <a name="parameters"></a>Parametri

*Worker*<br/>
Classe conforme all' [archetipo](../../atl/reference/worker-archetype.md) del ruolo di lavoro che fornisce il codice utilizzato per elaborare gli elementi di lavoro accodati nel pool di thread.

*ThreadTraits*<br/>
Classe che fornisce la funzione utilizzata per creare i thread nel pool.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CThreadPool:: CThreadPool](#cthreadpool)|Costruttore per il pool di thread.|
|[CThreadPool:: ~ CThreadPool](#dtor)|Distruttore per il pool di thread.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CThreadPool:: AddRef](#addref)|Implementazione di `IUnknown::AddRef`.|
|[CThreadPool:: GetNumThreads](#getnumthreads)|Chiamare questo metodo per ottenere il numero di thread nel pool.|
|[CThreadPool:: GetQueueHandle](#getqueuehandle)|Chiamare questo metodo per ottenere l'handle della porta di completamento IO utilizzata per accodare gli elementi di lavoro.|
|[CThreadPool:: GetSize](#getsize)|Chiamare questo metodo per ottenere il numero di thread nel pool.|
|[CThreadPool:: getTimeout](#gettimeout)|Chiamare questo metodo per ottenere il tempo massimo, in millisecondi, durante il quale il pool di thread resterà in attesa dell'arresto di un thread.|
|[CThreadPool:: Initialize](#initialize)|Chiamare questo metodo per inizializzare il pool di thread.|
|[CThreadPool:: QueryInterface](#queryinterface)|Implementazione di `IUnknown::QueryInterface`.|
|[CThreadPool:: QueueRequest](#queuerequest)|Chiamare questo metodo per accodare un elemento di lavoro che deve essere gestito da un thread nel pool.|
|[CThreadPool:: Release](#release)|Implementazione di `IUnknown::Release`.|
|[CThreadPool:: sesize](#setsize)|Chiamare questo metodo per impostare il numero di thread nel pool.|
|[CThreadPool:: timeout](#settimeout)|Chiamare questo metodo per impostare il tempo massimo, in millisecondi, durante il quale il pool di thread resterà in attesa dell'arresto di un thread.|
|[CThreadPool:: Shutdown](#shutdown)|Chiamare questo metodo per arrestare il pool di thread.|

## <a name="remarks"></a>Commenti

I thread nel pool vengono creati ed eliminati definitivamente quando il pool viene inizializzato, ridimensionato o arrestato. Verrà creata un'istanza della classe *Worker* nello stack di ogni thread di lavoro nel pool. Ogni istanza vivrà per la durata del thread.

Subito dopo la creazione di un thread, *Worker*:: `Initialize` verrà chiamato sull'oggetto associato a tale thread. Immediatamente prima dell'eliminazione di un thread, viene chiamato *Worker*:: `Terminate` . Entrambi i metodi devono accettare un **`void`** <strong>\*</strong> argomento. Il valore di questo argomento viene passato al pool di thread tramite il parametro *pvWorkerParam* di [CThreadPool:: Initialize](#initialize).

Quando sono presenti elementi di lavoro nella coda e i thread di lavoro sono disponibili per il lavoro, un thread di lavoro estrae un elemento dalla coda e chiama il `Execute` metodo dell'oggetto di *lavoro* per quel thread. Vengono quindi passati tre elementi al metodo: l'elemento dalla coda, lo stesso `pvWorkerParam` passato a *Worker*:: `Initialize` e *Worker*:: e `Terminate` un puntatore alla struttura [sovrapposta](/windows/win32/api/minwinbase/ns-minwinbase-overlapped) usata per la coda della porta di completamento i/o.

La classe *Worker* dichiara il tipo degli elementi che verranno accodati nel pool di thread fornendo un typedef, *Worker*:: `RequestType` . Questo tipo deve essere in grado di eseguire il cast da e verso un ULONG_PTR.

Un esempio di classe *Worker* è la [classe CNonStatelessWorker](../../atl/reference/cnonstatelessworker-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IUnknown`

[IThreadPoolConfig](../../atl/reference/ithreadpoolconfig-interface.md)

`CThreadPool`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlutil. h

## <a name="cthreadpooladdref"></a><a name="addref"></a> CThreadPool:: AddRef

Implementazione di `IUnknown::AddRef`.

```
ULONG STDMETHODCALLTYPE AddRef() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre 1.

### <a name="remarks"></a>Commenti

Questa classe non implementa il controllo della durata usando il conteggio dei riferimenti.

## <a name="cthreadpoolcthreadpool"></a><a name="cthreadpool"></a> CThreadPool:: CThreadPool

Costruttore per il pool di thread.

```
CThreadPool() throw();
```

### <a name="remarks"></a>Commenti

Inizializza il valore di timeout per ATLS_DEFAULT_THREADPOOLSHUTDOWNTIMEOUT. L'ora predefinita è 36 secondi. Se necessario, è possibile definire un valore intero positivo per questo simbolo prima di includere atlutil. h.

## <a name="cthreadpoolcthreadpool"></a><a name="dtor"></a> CThreadPool:: ~ CThreadPool

Distruttore per il pool di thread.

```
~CThreadPool() throw();
```

### <a name="remarks"></a>Commenti

Chiama [CThreadPool:: Shutdown](#shutdown).

## <a name="cthreadpoolgetnumthreads"></a><a name="getnumthreads"></a> CThreadPool:: GetNumThreads

Chiamare questo metodo per ottenere il numero di thread nel pool.

```
int GetNumThreads() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di thread nel pool.

## <a name="cthreadpoolgetqueuehandle"></a><a name="getqueuehandle"></a> CThreadPool:: GetQueueHandle

Chiamare questo metodo per ottenere l'handle della porta di completamento IO utilizzata per accodare gli elementi di lavoro.

```
HANDLE GetQueueHandle() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'handle della coda o NULL se il pool di thread non è stato inizializzato.

## <a name="cthreadpoolgetsize"></a><a name="getsize"></a> CThreadPool:: GetSize

Chiamare questo metodo per ottenere il numero di thread nel pool.

```
HRESULT STDMETHODCALLTYPE GetSize(int* pnNumThreads) throw();
```

### <a name="parameters"></a>Parametri

*pnNumThreads*<br/>
out Indirizzo della variabile che, in esito positivo, riceve il numero di thread nel pool.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

## <a name="cthreadpoolgettimeout"></a><a name="gettimeout"></a> CThreadPool:: getTimeout

Chiamare questo metodo per ottenere il tempo massimo, in millisecondi, durante il quale il pool di thread resterà in attesa dell'arresto di un thread.

```
HRESULT STDMETHODCALLTYPE GetTimeout(DWORD* pdwMaxWait) throw();
```

### <a name="parameters"></a>Parametri

*pdwMaxWait*<br/>
out Indirizzo della variabile che, in caso di esito positivo, riceve il tempo massimo in millisecondi durante il quale il pool di thread resterà in attesa dell'arresto di un thread.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

Questo valore di timeout viene usato da [CThreadPool:: Shutdown](#shutdown) se al metodo non viene fornito alcun altro valore.

## <a name="cthreadpoolinitialize"></a><a name="initialize"></a> CThreadPool:: Initialize

Chiamare questo metodo per inizializzare il pool di thread.

```
HRESULT Initialize(
    void* pvWorkerParam = NULL,
    int nNumThreads = 0,
    DWORD dwStackSize = 0,
    HANDLE hCompletion = INVALID_HANDLE_VALUE) throw();
```

### <a name="parameters"></a>Parametri

*pvWorkerParam*<br/>
Parametro del ruolo di lavoro da passare ai `Initialize` metodi, e dell'oggetto thread di lavoro `Execute` `Terminate` .

*nNumThreads*<br/>
Numero richiesto di thread nel pool.

Se *nNumThreads* è negativo, il relativo valore assoluto verrà moltiplicato per il numero di processori nel computer per ottenere il numero totale di thread.

Se *nNumThreads* è zero, ATLS_DEFAULT_THREADSPERPROC verrà moltiplicato per il numero di processori nel computer per ottenere il numero totale di thread.  Il valore predefinito è 2 thread per processore. Se necessario, è possibile definire un valore intero positivo per questo simbolo prima di includere atlutil. h.

*dwStackSize*<br/>
Dimensioni dello stack per ogni thread nel pool.

*hCompletion*<br/>
Handle di un oggetto da associare alla porta di completamento.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

## <a name="cthreadpoolqueryinterface"></a><a name="queryinterface"></a> CThreadPool:: QueryInterface

Implementazione di `IUnknown::QueryInterface`.

```
HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppv) throw();
```

### <a name="remarks"></a>Commenti

È possibile eseguire query sugli oggetti di questa classe per le `IUnknown` interfacce [IThreadPoolConfig](../../atl/reference/ithreadpoolconfig-interface.md) e.

## <a name="cthreadpoolqueuerequest"></a><a name="queuerequest"></a> CThreadPool:: QueueRequest

Chiamare questo metodo per accodare un elemento di lavoro che deve essere gestito da un thread nel pool.

```
BOOL QueueRequest(Worker::RequestType request) throw();
```

### <a name="parameters"></a>Parametri

*request*<br/>
Richiesta da accodare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

Questo metodo aggiunge un elemento di lavoro alla coda. I thread nel pool scelgono gli elementi dalla coda nell'ordine in cui vengono ricevuti.

## <a name="cthreadpoolrelease"></a><a name="release"></a> CThreadPool:: Release

Implementazione di `IUnknown::Release`.

```
ULONG STDMETHODCALLTYPE Release() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre 1.

### <a name="remarks"></a>Commenti

Questa classe non implementa il controllo della durata usando il conteggio dei riferimenti.

## <a name="cthreadpoolsetsize"></a><a name="setsize"></a> CThreadPool:: sesize

Chiamare questo metodo per impostare il numero di thread nel pool.

```
HRESULT STDMETHODCALLTYPE SetSizeint nNumThreads) throw();
```

### <a name="parameters"></a>Parametri

*nNumThreads*<br/>
Numero richiesto di thread nel pool.

Se *nNumThreads* è negativo, il relativo valore assoluto verrà moltiplicato per il numero di processori nel computer per ottenere il numero totale di thread.

Se *nNumThreads* è zero, ATLS_DEFAULT_THREADSPERPROC verrà moltiplicato per il numero di processori nel computer per ottenere il numero totale di thread. Il valore predefinito è 2 thread per processore. Se necessario, è possibile definire un valore intero positivo per questo simbolo prima di includere atlutil. h.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

Se il numero di thread specificato è inferiore al numero di thread attualmente presenti nel pool, l'oggetto inserisce un messaggio di chiusura nella coda da prelevare da un thread in attesa. Quando un thread in attesa estrae il messaggio dalla coda, invia una notifica al pool di thread e chiude la routine del thread. Questo processo viene ripetuto fino a quando il numero di thread nel pool non raggiunge il numero specificato o fino a quando non viene terminato alcun thread entro il periodo specificato da [timeout di getTimeout](#gettimeout) /  [](#settimeout). In questa situazione il metodo restituirà un valore HRESULT corrispondente a WAIT_TIMEOUT e il messaggio di chiusura in sospeso verrà annullato.

## <a name="cthreadpoolsettimeout"></a><a name="settimeout"></a> CThreadPool:: timeout

Chiamare questo metodo per impostare il tempo massimo, in millisecondi, durante il quale il pool di thread resterà in attesa dell'arresto di un thread.

```
HRESULT STDMETHODCALLTYPE SetTimeout(DWORD dwMaxWait) throw();
```

### <a name="parameters"></a>Parametri

*dwMaxWait*<br/>
Tempo massimo richiesto, in millisecondi, durante il quale il pool di thread resterà in attesa dell'arresto di un thread.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

Il timeout viene inizializzato per ATLS_DEFAULT_THREADPOOLSHUTDOWNTIMEOUT. L'ora predefinita è 36 secondi. Se necessario, è possibile definire un valore intero positivo per questo simbolo prima di includere atlutil. h.

Si noti che *dwMaxWait* è l'ora in cui il pool resterà in attesa dell'arresto di un singolo thread. Il tempo massimo che è possibile intraprendere per rimuovere più thread dal pool potrebbe essere leggermente inferiore a *dwMaxWait* moltiplicato per il numero di thread.

## <a name="cthreadpoolshutdown"></a><a name="shutdown"></a> CThreadPool:: Shutdown

Chiamare questo metodo per arrestare il pool di thread.

```cpp
void Shutdown(DWORD dwMaxWait = 0) throw();
```

### <a name="parameters"></a>Parametri

*dwMaxWait*<br/>
Tempo massimo richiesto, in millisecondi, durante il quale il pool di thread resterà in attesa dell'arresto di un thread. Se viene specificato 0 o nessun valore, questo metodo utilizzerà il timeout impostato da [CThreadPool::](#settimeout)SetValue.

### <a name="remarks"></a>Commenti

Questo metodo invia una richiesta di arresto a tutti i thread nel pool. Se il timeout scade, questo metodo chiamerà [TerminateThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-terminatethread) su un thread che non è stato chiuso. Questo metodo viene chiamato automaticamente dal distruttore della classe.

## <a name="see-also"></a>Vedi anche

[Interfaccia IThreadPoolConfig](../../atl/reference/ithreadpoolconfig-interface.md)<br/>
[DefaultThreadTraits](atl-typedefs.md#defaultthreadtraits)<br/>
[Classi](../../atl/reference/atl-classes.md)
