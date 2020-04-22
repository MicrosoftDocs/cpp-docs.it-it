---
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
ms.openlocfilehash: 5e52868f23883836919b96be9aec1815bc1c17b3
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81747452"
---
# <a name="cthreadpool-class"></a>Classe CThreadPool

Questa classe fornisce un pool di thread di lavoro che elaborano una coda di elementi di lavoro.

## <a name="syntax"></a>Sintassi

```
template <class Worker, class ThreadTraits = DefaultThreadTraits>
class CThreadPool : public IThreadPoolConfig
```

#### <a name="parameters"></a>Parametri

*Lavoratore*<br/>
Classe conforme [all'archetipo](../../atl/reference/worker-archetype.md) di lavoro che fornisce il codice utilizzato per elaborare gli elementi di lavoro accodati nel pool di thread.

*Tratti di filettatura*<br/>
Classe che fornisce la funzione utilizzata per creare i thread nel pool.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CThreadPool::CThreadPool](#cthreadpool)|Costruttore per il pool di thread.|
|[CThreadPool:: CThreadPool](#dtor)|Distruttore per il pool di thread.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CThreadPool::AddRef](#addref)|Implementazione di `IUnknown::AddRef`.|
|[CThreadPool::GetNumThreads](#getnumthreads)|Chiamare questo metodo per ottenere il numero di thread nel pool.|
|[CThreadPool::GetQueueHandle](#getqueuehandle)|Chiamare questo metodo per ottenere l'handle della porta di completamento I/O utilizzata per accodare gli elementi di lavoro.|
|[CThreadPool::GetSize](#getsize)|Chiamare questo metodo per ottenere il numero di thread nel pool.|
|[CThreadPool::GetTimeout](#gettimeout)|Chiamare questo metodo per ottenere il tempo massimo in millisecondi durante il momento in cui il pool di thread attenderà l'arresto di un thread.|
|[CThreadPool::Inizializzare](#initialize)|Chiamare questo metodo per inizializzare il pool di thread.|
|[CThreadPool::QueryInterface](#queryinterface)|Implementazione di `IUnknown::QueryInterface`.|
|[CThreadPool::QueueRequest](#queuerequest)|Chiamare questo metodo per accodare un elemento di lavoro che deve essere gestito da un thread nel pool.|
|[CThreadPool::Release](#release)|Implementazione di `IUnknown::Release`.|
|[CThreadPool::SetSize](#setsize)|Chiamare questo metodo per impostare il numero di thread nel pool.|
|[CThreadPool::SetTimeout](#settimeout)|Chiamare questo metodo per impostare il tempo massimo in millisecondi durante il momento in cui il pool di thread attenderà l'arresto di un thread.|
|[CThreadPool::Arresto](#shutdown)|Chiamare questo metodo per arrestare il pool di thread.|

## <a name="remarks"></a>Osservazioni

I thread nel pool vengono creati ed eliminati quando il pool viene inizializzato, ridimensionato o arrestato. Un'istanza della classe *Worker* verrà creata nello stack di ogni thread di lavoro nel pool. Ogni istanza vivrà per la durata del thread.

Immediatamente dopo la creazione *Worker*di`Initialize` un thread, Worker :: verrà chiamato sull'oggetto associato a tale thread. Immediatamente prima della distruzione di`Terminate` un thread, *Worker*:: verrà chiamato. Entrambi i metodi devono accettare un argomento **void.** <strong>\*</strong> Il valore di questo argomento viene passato al pool di thread tramite il parametro *pvWorkerParam* di [CThreadPool::Initialize](#initialize).

Quando sono presenti elementi di lavoro nella coda e thread di lavoro disponibili per `Execute` il lavoro, un thread di lavoro estrarrà un elemento dalla coda e chiamerà il metodo dell'oggetto *Worker* per tale thread. Al metodo vengono quindi passati tre elementi: l'elemento `pvWorkerParam` della coda, lo stesso passato a *Worker* `Initialize` :: e *Worker*:: `Terminate`e un puntatore alla struttura [OVERLAPPED](/windows/win32/api/minwinbase/ns-minwinbase-overlapped) utilizzata per la coda delle porte di completamento IO.

La classe *Worker* dichiara il tipo di elementi che verranno accodati nel pool `RequestType`di thread fornendo un typedef, *Worker*:: . Questo tipo deve essere in grado di essere sottoposto a cast da e verso un ULONG_PTR.

Un esempio di classe *Worker* è [CNonStatelessWorker Class](../../atl/reference/cnonstatelessworker-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IUnknown`

[IThreadPoolConfig](../../atl/reference/ithreadpoolconfig-interface.md)

`CThreadPool`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlutil.h

## <a name="cthreadpooladdref"></a><a name="addref"></a>CThreadPool::AddRef

Implementazione di `IUnknown::AddRef`.

```
ULONG STDMETHODCALLTYPE AddRef() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre 1.

### <a name="remarks"></a>Osservazioni

Questa classe non implementa il controllo della durata utilizzando il conteggio dei riferimenti.

## <a name="cthreadpoolcthreadpool"></a><a name="cthreadpool"></a>CThreadPool::CThreadPool

Costruttore per il pool di thread.

```
CThreadPool() throw();
```

### <a name="remarks"></a>Osservazioni

Inizializza il valore di timeout da ATLS_DEFAULT_THREADPOOLSHUTDOWNTIMEOUT. Il tempo predefinito è 36 secondi. Se necessario, è possibile definire un valore intero positivo personalizzato per questo simbolo prima di includere atlutil.h.

## <a name="cthreadpoolcthreadpool"></a><a name="dtor"></a>CThreadPool:: CThreadPool

Distruttore per il pool di thread.

```
~CThreadPool() throw();
```

### <a name="remarks"></a>Osservazioni

Chiama [CThreadPool::Shutdown](#shutdown).

## <a name="cthreadpoolgetnumthreads"></a><a name="getnumthreads"></a>CThreadPool::GetNumThreads

Chiamare questo metodo per ottenere il numero di thread nel pool.

```
int GetNumThreads() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di thread nel pool.

## <a name="cthreadpoolgetqueuehandle"></a><a name="getqueuehandle"></a>CThreadPool::GetQueueHandle

Chiamare questo metodo per ottenere l'handle della porta di completamento I/O utilizzata per accodare gli elementi di lavoro.

```
HANDLE GetQueueHandle() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'handle della coda o NULL se il pool di thread non è stato inizializzato.

## <a name="cthreadpoolgetsize"></a><a name="getsize"></a>CThreadPool::GetSize

Chiamare questo metodo per ottenere il numero di thread nel pool.

```
HRESULT STDMETHODCALLTYPE GetSize(int* pnNumThreads) throw();
```

### <a name="parameters"></a>Parametri

*PnNumThreads (file pnNumThreads)*<br/>
[fuori] Indirizzo della variabile che, in caso di esito positivo, riceve il numero di thread nel pool.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

## <a name="cthreadpoolgettimeout"></a><a name="gettimeout"></a>CThreadPool::GetTimeout

Chiamare questo metodo per ottenere il tempo massimo in millisecondi durante il momento in cui il pool di thread attenderà l'arresto di un thread.

```
HRESULT STDMETHODCALLTYPE GetTimeout(DWORD* pdwMaxWait) throw();
```

### <a name="parameters"></a>Parametri

*pdwMaxWait (pdwMaxWait)*<br/>
[fuori] Indirizzo della variabile che, in caso di esito positivo, riceve il tempo massimo in millisecondi durante il momento in cui il pool di thread attenderà l'arresto di un thread.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Questo valore di timeout viene utilizzato da [CThreadPool::Shutdown](#shutdown) se a tale metodo non viene fornito alcun altro valore.

## <a name="cthreadpoolinitialize"></a><a name="initialize"></a>CThreadPool::Inizializzare

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
Parametro worker da passare ai `Initialize`metodi `Execute`, `Terminate` , e dell'oggetto thread di lavoro.

*nNumThreads (informazioni in base ai thread di*<br/>
Numero richiesto di thread nel pool.

Se *nNumThreads* è negativo, il suo valore assoluto verrà moltiplicato per il numero di processori nel computer per ottenere il numero totale di thread.

Se *nNumThreads* è zero, ATLS_DEFAULT_THREADSPERPROC verrà moltiplicato per il numero di processori nel computer per ottenere il numero totale di thread.  Il valore predefinito è 2 thread per processore. Se necessario, è possibile definire un valore intero positivo personalizzato per questo simbolo prima di includere atlutil.h.

*dwStackSize*<br/>
Dimensione dello stack per ogni thread nel pool.

*hCompletamento*<br/>
Handle di un oggetto da associare alla porta di completamento.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

## <a name="cthreadpoolqueryinterface"></a><a name="queryinterface"></a>CThreadPool::QueryInterface

Implementazione di `IUnknown::QueryInterface`.

```
HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppv) throw();
```

### <a name="remarks"></a>Osservazioni

Gli oggetti di questa classe possono `IUnknown` essere sottoposti a query per le interfacce e [IThreadPoolConfig.](../../atl/reference/ithreadpoolconfig-interface.md)

## <a name="cthreadpoolqueuerequest"></a><a name="queuerequest"></a>CThreadPool::QueueRequest

Chiamare questo metodo per accodare un elemento di lavoro che deve essere gestito da un thread nel pool.

```
BOOL QueueRequest(Worker::RequestType request) throw();
```

### <a name="parameters"></a>Parametri

*request*<br/>
Richiesta da accodare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Questo metodo aggiunge un elemento di lavoro alla coda. I thread nel pool prelevano gli elementi dalla coda nell'ordine in cui vengono ricevuti.

## <a name="cthreadpoolrelease"></a><a name="release"></a>CThreadPool::Release

Implementazione di `IUnknown::Release`.

```
ULONG STDMETHODCALLTYPE Release() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre 1.

### <a name="remarks"></a>Osservazioni

Questa classe non implementa il controllo della durata utilizzando il conteggio dei riferimenti.

## <a name="cthreadpoolsetsize"></a><a name="setsize"></a>CThreadPool::SetSize

Chiamare questo metodo per impostare il numero di thread nel pool.

```
HRESULT STDMETHODCALLTYPE SetSizeint nNumThreads) throw();
```

### <a name="parameters"></a>Parametri

*nNumThreads (informazioni in base ai thread di*<br/>
Numero richiesto di thread nel pool.

Se *nNumThreads* è negativo, il suo valore assoluto verrà moltiplicato per il numero di processori nel computer per ottenere il numero totale di thread.

Se *nNumThreads* è zero, ATLS_DEFAULT_THREADSPERPROC verrà moltiplicato per il numero di processori nel computer per ottenere il numero totale di thread. Il valore predefinito è 2 thread per processore. Se necessario, è possibile definire un valore intero positivo personalizzato per questo simbolo prima di includere atlutil.h.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Se il numero di thread specificato è inferiore al numero di thread attualmente presenti nel pool, l'oggetto inserisce un messaggio di arresto nella coda per essere prelevato da un thread in attesa. Quando un thread in attesa estrae il messaggio dalla coda, invia una notifica al pool di thread ed esce dalla routine del thread. Questo processo viene ripetuto fino a quando il numero di thread nel pool raggiunge il numero specificato o fino a quando nessun thread è uscito entro il periodo specificato da [GetTimeout](#gettimeout)/ [SetTimeout](#settimeout). In questo caso il metodo restituirà un HRESULT corrispondente a WAIT_TIMEOUT e il messaggio di arresto in sospeso viene annullato.

## <a name="cthreadpoolsettimeout"></a><a name="settimeout"></a>CThreadPool::SetTimeout

Chiamare questo metodo per impostare il tempo massimo in millisecondi durante il momento in cui il pool di thread attenderà l'arresto di un thread.

```
HRESULT STDMETHODCALLTYPE SetTimeout(DWORD dwMaxWait) throw();
```

### <a name="parameters"></a>Parametri

*dwMaxWait*<br/>
Tempo massimo richiesto in millisecondi durante il periodo di attesa dell'arresto di un thread.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Il timeout viene inizializzato su ATLS_DEFAULT_THREADPOOLSHUTDOWNTIMEOUT. Il tempo predefinito è 36 secondi. Se necessario, è possibile definire un valore intero positivo personalizzato per questo simbolo prima di includere atlutil.h.

Si noti che *dwMaxWait* è il tempo in cui il pool attenderà l'arresto di un singolo thread. Il tempo massimo che è stato possibile impiegare per rimuovere più thread dal pool potrebbe essere leggermente inferiore a *dwMaxWait* moltiplicato per il numero di thread.

## <a name="cthreadpoolshutdown"></a><a name="shutdown"></a>CThreadPool::Arresto

Chiamare questo metodo per arrestare il pool di thread.

```cpp
void Shutdown(DWORD dwMaxWait = 0) throw();
```

### <a name="parameters"></a>Parametri

*dwMaxWait*<br/>
Tempo massimo richiesto in millisecondi durante il periodo di attesa dell'arresto di un thread. Se viene fornito 0 o nessun valore, questo metodo utilizzerà il timeout impostato da [CThreadPool::SetTimeout](#settimeout).

### <a name="remarks"></a>Osservazioni

Questo metodo invia una richiesta di arresto a tutti i thread del pool. Se il timeout scade, questo metodo chiamerà [TerminateThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-terminatethread) su qualsiasi thread che non è stato chiuso. Questo metodo viene chiamato automaticamente dal distruttore della classe.

## <a name="see-also"></a>Vedere anche

[Interfaccia IThreadPoolConfig](../../atl/reference/ithreadpoolconfig-interface.md)<br/>
[DefaultThreadTraits](atl-typedefs.md#defaultthreadtraits)<br/>
[Classi](../../atl/reference/atl-classes.md)
