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
ms.openlocfilehash: 9469770dc0538b968cfaafa2de45f28bd864193c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50532002"
---
# <a name="cworkerthread-class"></a>Classe CWorkerThread

Questa classe crea un thread di lavoro o viene utilizzato uno esistente, è in attesa su una o più handle di oggetto kernel ed esegue una funzione di client specificato quando uno degli handle viene segnalato.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template <class ThreadTraits = DefaultThreadTraits>
class CWorkerThread
```

### <a name="parameters"></a>Parametri

*ThreadTraits*<br/>
La classe che fornisce la funzione di creazione di thread, ad esempio [CRTThreadTraits](../../atl/reference/crtthreadtraits-class.md) oppure [Win32ThreadTraits](../../atl/reference/win32threadtraits-class.md).

## <a name="members"></a>Membri

### <a name="protected-structures"></a>Strutture protette

|nome|Descrizione|
|----------|-----------------|
|`WorkerClientEntry`||

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWorkerThread::CWorkerThread](#cworkerthread)|Il costruttore per il thread di lavoro.|
|[CWorkerThread:: ~ CWorkerThread](#dtor)|Il distruttore per il thread di lavoro.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWorkerThread::AddHandle](#addhandle)|Chiamare questo metodo per aggiungere handle dell'oggetto waitable all'elenco gestito dal thread di lavoro.|
|[CWorkerThread::AddTimer](#addtimer)|Chiamare questo metodo per aggiungere un timer periodico waitable all'elenco gestito dal thread di lavoro.|
|[CWorkerThread::GetThreadHandle](#getthreadhandle)|Chiamare questo metodo per ottenere l'handle del thread del thread di lavoro.|
|[CWorkerThread::GetThreadId](#getthreadid)|Chiamare questo metodo per ottenere l'ID del thread del thread di lavoro.|
|[CWorkerThread::Initialize](#initialize)|Chiamare questo metodo per inizializzare il thread di lavoro.|
|[CWorkerThread::RemoveHandle](#removehandle)|Chiamare questo metodo per rimuovere un handle dall'elenco di oggetti awaitable.|
|[CWorkerThread::Shutdown](#shutdown)|Chiamare questo metodo per arrestare il thread di lavoro.|

## <a name="remarks"></a>Note

### <a name="to-use-cworkerthread"></a>Usare CWorkerThread

1. Creare un'istanza di questa classe.

1. Chiamare [CWorkerThread::Initialize](#initialize).

1. Chiamare [CWorkerThread::AddHandle](#addhandle) con l'handle di un oggetto kernel e un puntatore a un'implementazione del [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md).

   \- oppure -

   Chiamare [CWorkerThread::AddTimer](#addtimer) con un puntatore a un'implementazione del [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md).

1. Implementare [IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) a eseguire qualche azione quando viene segnalato l'handle o un timer.

1. Per rimuovere un oggetto dall'elenco di oggetti awaitable, chiamare [CWorkerThread::RemoveHandle](#removehandle).

1. Per terminare il thread, chiamare [CWorkerThread::Shutdown](#shutdown).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlutil. h

##  <a name="addhandle"></a>  CWorkerThread::AddHandle

Chiamare questo metodo per aggiungere handle dell'oggetto waitable all'elenco gestito dal thread di lavoro.

```
HRESULT AddHandle(
    HANDLE hObject,
    IWorkerThreadClient* pClient,
    DWORD_PTR dwParam) throw();
```

### <a name="parameters"></a>Parametri

*hObject*<br/>
Handle per un oggetto awaitable.

*pClient*<br/>
Il puntatore per il [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md) interfaccia sull'oggetto da chiamare quando l'handle viene segnalato.

*dwParam*<br/>
Il parametro deve essere passato [IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) quando l'handle viene segnalato.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

[IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) verrà chiamato attraverso *pClient* quando l'handle *hObject*, viene segnalato.

##  <a name="addtimer"></a>  CWorkerThread::AddTimer

Chiamare questo metodo per aggiungere un timer periodico waitable all'elenco gestito dal thread di lavoro.

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
Il puntatore per il [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md) interfaccia sull'oggetto da chiamare quando l'handle viene segnalato.

*dwParam*<br/>
Il parametro deve essere passato [IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) quando l'handle viene segnalato.

*phTimer*<br/>
[out] Indirizzo della variabile di HANDLE che, in caso di esito positivo riceve l'handle per il timer appena creato.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

[IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) verrà chiamato attraverso *pClient* quando viene segnalato il timer.

Passare l'handle di timer dalla *phTimer* al [CWorkerThread::RemoveHandle](#removehandle) per chiudere il timer.

##  <a name="cworkerthread"></a>  CWorkerThread::CWorkerThread

Costruttore.

```
CWorkerThread() throw();
```

##  <a name="dtor"></a>  CWorkerThread:: ~ CWorkerThread

Distruttore.

```
~CWorkerThread() throw();
```

### <a name="remarks"></a>Note

Le chiamate [CWorkerThread::Shutdown](#shutdown).

##  <a name="getthreadhandle"></a>  CWorkerThread::GetThreadHandle

Chiamare questo metodo per ottenere l'handle del thread del thread di lavoro.

```
HANDLE GetThreadHandle() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'handle del thread o NULL se il thread di lavoro non è stato inizializzato.

##  <a name="getthreadid"></a>  CWorkerThread::GetThreadId

Chiamare questo metodo per ottenere l'ID del thread del thread di lavoro.

```
DWORD GetThreadId() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'ID del thread o NULL se il thread di lavoro non è stato inizializzato.

##  <a name="initialize"></a>  CWorkerThread::Initialize

Chiamare questo metodo per inizializzare il thread di lavoro.

```
HRESULT Initialize() throw();

HRESULT Initialize(CWorkerThread<ThreadTraits>* pThread) throw();
```

### <a name="parameters"></a>Parametri

*pThread*<br/>
Un thread di lavoro esistente.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Questo metodo deve essere chiamato per inizializzare l'oggetto dopo la creazione o dopo una chiamata a [CWorkerThread::Shutdown](#shutdown).

Per avere due o più `CWorkerThread` oggetti usano lo stesso thread di lavoro, uno di essi senza passare alcun argomento quindi passa un puntatore a tale oggetto per inizializzare il `Initialize` degli altri metodi. Gli oggetti inizializzati usando il puntatore devono essere arrestati prima dell'oggetto usata per inizializzarli.

Visualizzare [CWorkerThread::Shutdown](#shutdown) per informazioni sul modo in cui il comportamento del metodo in questione cambia quando inizializzata usando un puntatore a un oggetto esistente.

##  <a name="removehandle"></a>  CWorkerThread::RemoveHandle

Chiamare questo metodo per rimuovere un handle dall'elenco di oggetti awaitable.

```
HRESULT RemoveHandle(HANDLE hObject) throw();
```

### <a name="parameters"></a>Parametri

*hObject*<br/>
Handle da rimuovere.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Quando viene rimosso l'handle [IWorkerThreadClient::CloseHandle](../../atl/reference/iworkerthreadclient-interface.md#closehandle) viene chiamato sull'oggetto associato passato al [AddHandle](#addhandle). Se questa chiamata ha esito negativo, `CWorkerThread` chiamerà il Windows [CloseHandle](https://msdn.microsoft.com/library/windows/desktop/ms724211) dell'handle di funzione.

##  <a name="shutdown"></a>  CWorkerThread::Shutdown

Chiamare questo metodo per arrestare il thread di lavoro.

```
HRESULT Shutdown(DWORD dwWait = ATL_WORKER_THREAD_WAIT) throw();
```

### <a name="parameters"></a>Parametri

*dwWait*<br/>
Tempo in millisecondi di attesa per il thread di lavoro da arrestare. ATL_WORKER_THREAD_WAIT il valore predefinito è 10 secondi. Se necessario, è possibile definire il proprio valore per questo simbolo prima di includere atlutil. h.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK su esito positivo o un errore HRESULT in errore, ad esempio se il valore di timeout *dwWait*, viene superato.

### <a name="remarks"></a>Note

Per riutilizzare l'oggetto, chiamare [CWorkerThread::Initialize](#initialize) dopo aver chiamato questo metodo.

Si noti che la chiamata `Shutdown` su un oggetto inizializzato con un puntatore a un altro `CWorkerThread` oggetto non ha alcun effetto e restituisce sempre S_OK.

## <a name="see-also"></a>Vedere anche

[DefaultThreadTraits](atl-typedefs.md#defaultthreadtraits)<br/>
[Classi](../../atl/reference/atl-classes.md)<br/>
[Multithreading: creazione di thread di lavoro](../../parallel/multithreading-creating-worker-threads.md)<br/>
[Interfaccia IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md)
