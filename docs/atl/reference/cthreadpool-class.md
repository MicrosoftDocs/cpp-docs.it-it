---
title: Classe CThreadPool | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CThreadPool class
ms.assetid: 06683718-01b9-413c-9481-2dc1734ec70f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f55f7d676988e43216adbf6e8a0b6c21afd958a3
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37884087"
---
# <a name="cthreadpool-class"></a>Classe CThreadPool
Questa classe fornisce un pool di thread di lavoro che elaborano una coda di elementi di lavoro.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Worker, class ThreadTraits = DefaultThreadTraits>  
class CThreadPool : public IThreadPoolConfig
```  
  
#### <a name="parameters"></a>Parametri  
 *Ruolo di lavoro*  
 La classe conforme al [archetipo worker](../../atl/reference/worker-archetype.md) fornendo il codice utilizzato per elaborare gli elementi in coda nel pool di thread di lavoro.  
  
 *ThreadTraits*  
 La classe che fornisce la funzione utilizzata per creare il thread nel pool.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CThreadPool::CThreadPool](#cthreadpool)|Il costruttore per il pool di thread.|  
|[CThreadPool:: ~ CThreadPool](#dtor)|Il distruttore per il pool di thread.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CThreadPool::AddRef](#addref)|Implementazione di `IUnknown::AddRef`.|  
|[CThreadPool::GetNumThreads](#getnumthreads)|Chiamare questo metodo per ottenere il numero di thread nel pool.|  
|[CThreadPool::GetQueueHandle](#getqueuehandle)|Chiamare questo metodo per ottenere l'handle della porta di completamento i/o utilizzato per accodare gli elementi di lavoro.|  
|[:: GetSize](#getsize)|Chiamare questo metodo per ottenere il numero di thread nel pool.|  
|[CThreadPool::GetTimeout](#gettimeout)|Chiamare questo metodo per ottenere il tempo massimo in millisecondi di attesa per un thread arrestare il pool di thread.|  
|[CThreadPool::Initialize](#initialize)|Chiamare questo metodo per inizializzare il pool di thread.|  
|[CThreadPool::QueryInterface](#queryinterface)|Implementazione di `IUnknown::QueryInterface`.|  
|[CThreadPool::QueueRequest](#queuerequest)|Chiamare questo metodo per accodare un elemento di lavoro per essere gestito da un thread nel pool.|  
|[CThreadPool::Release](#release)|Implementazione di `IUnknown::Release`.|  
|[CThreadPool:: SetSize](#setsize)|Chiamare questo metodo per impostare il numero di thread nel pool.|  
|[CThreadPool::SetTimeout](#settimeout)|Chiamare questo metodo per impostare il tempo massimo in millisecondi di attesa per un thread arrestare il pool di thread.|  
|[CThreadPool::Shutdown](#shutdown)|Chiamare questo metodo per arrestare il pool di thread.|  
  
## <a name="remarks"></a>Note  
 Thread del pool vengono create ed eliminate quando viene inizializzato, ridimensionato o arrestare il pool. Un'istanza della classe *lavoro* verrà creato nello stack di ogni thread di lavoro nel pool. Ogni istanza verrà eseguito per la durata del thread.  
  
 Immediatamente dopo la creazione di un thread *Worker*:: `Initialize` verrà chiamato sull'oggetto associato a tale thread. Immediatamente prima dell'eliminazione di un thread *Worker*:: `Terminate` verrà chiamato. Entrambi i metodi devono accettare un **void\***  argomento. Il valore di questo argomento viene passato al pool di thread tramite il *pvWorkerParam* del parametro [CThreadPool::Initialize](#initialize).  
  
 Quando sono presenti elementi di lavoro nel thread della coda e di lavoro disponibili per il lavoro, un thread di lavoro eseguirà il pull un elemento all'esterno della coda e chiamare il `Execute` metodo per il *Worker* oggetto per il thread. Tre elementi vengono quindi passati al metodo: l'elemento dalla coda, lo stesso `pvWorkerParam` passato a *Worker*:: `Initialize` e *lavoro*:: `Terminate`e un puntatore per il [OVERLAPPED](http://msdn.microsoft.com/library/windows/desktop/ms684342) struttura utilizzata per la coda di porta di completamento i/o.  
  
 Il *Worker* classe dichiara il tipo degli elementi che verranno accodati nel pool di thread, fornendo un typedef *Worker*:: `RequestType`. Questo tipo deve essere in grado di sottoposto a cast da e verso un ULONG_PTR.  
  
 Un esempio di un *Worker* classe viene [classe CNonStatelessWorker](../../atl/reference/cnonstatelessworker-class.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IUnknown`  
  
 [IThreadPoolConfig](../../atl/reference/ithreadpoolconfig-interface.md)  
  
 `CThreadPool`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlutil. h  
  
##  <a name="addref"></a>  CThreadPool::AddRef  
 Implementazione di `IUnknown::AddRef`.  
  
```
ULONG STDMETHODCALLTYPE AddRef() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre 1.  
  
### <a name="remarks"></a>Note  
 Questa classe non implementa il controllo della durata usando il conteggio dei riferimenti.  
  
##  <a name="cthreadpool"></a>  CThreadPool::CThreadPool  
 Il costruttore per il pool di thread.  
  
```
CThreadPool() throw();
```  
  
### <a name="remarks"></a>Note  
 Inizializza il valore di timeout per ATLS_DEFAULT_THREADPOOLSHUTDOWNTIMEOUT. Il tempo predefinito è 36 secondi. Se necessario, è possibile definire il proprio valore intero positivo per questo simbolo prima di includere atlutil. h.  
  
##  <a name="dtor"></a>  CThreadPool:: ~ CThreadPool  
 Il distruttore per il pool di thread.  
  
```
~CThreadPool() throw();
```  
  
### <a name="remarks"></a>Note  
 Le chiamate [CThreadPool::Shutdown](#shutdown).  
  
##  <a name="getnumthreads"></a>  CThreadPool::GetNumThreads  
 Chiamare questo metodo per ottenere il numero di thread nel pool.  
  
```
int GetNumThreads() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di thread nel pool.  
  
##  <a name="getqueuehandle"></a>  CThreadPool::GetQueueHandle  
 Chiamare questo metodo per ottenere l'handle della porta di completamento i/o utilizzato per accodare gli elementi di lavoro.  
  
```
HANDLE GetQueueHandle() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'handle di coda o NULL se il pool di thread non è stato inizializzato.  
  
##  <a name="getsize"></a>  :: GetSize  
 Chiamare questo metodo per ottenere il numero di thread nel pool.  
  
```
HRESULT STDMETHODCALLTYPE GetSize(int* pnNumThreads) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *pnNumThreads*  
 [out] Indirizzo della variabile che, in caso di esito positivo riceve il numero di thread nel pool.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="gettimeout"></a>  CThreadPool::GetTimeout  
 Chiamare questo metodo per ottenere il tempo massimo in millisecondi di attesa per un thread arrestare il pool di thread.  
  
```
HRESULT STDMETHODCALLTYPE GetTimeout(DWORD* pdwMaxWait) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *pdwMaxWait*  
 [out] Indirizzo della variabile che, in caso di esito positivo riceve il tempo massimo in millisecondi di attesa per un thread arrestare il pool di thread.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questo valore di timeout viene usato da [CThreadPool::Shutdown](#shutdown) se nessun altro valore viene fornito a tale metodo.  
  
##  <a name="initialize"></a>  CThreadPool::Initialize  
 Chiamare questo metodo per inizializzare il pool di thread.  
  
```
HRESULT Initialize(
    void* pvWorkerParam = NULL,
    int nNumThreads = 0,
    DWORD dwStackSize = 0,
    HANDLE hCompletion = INVALID_HANDLE_VALUE) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *pvWorkerParam*  
 Il parametro di ruolo di lavoro deve essere passato l'oggetto thread worker `Initialize`, `Execute`, e `Terminate` metodi.  
  
 *nNumThreads*  
 Il numero richiesto di thread nel pool.  
  
 Se *nNumThreads* è negativo, il valore assoluto corrispondente verrà moltiplicato per il numero di processori del computer per ottenere il numero totale di thread.  
  
 Se *nNumThreads* è uguale a zero, ATLS_DEFAULT_THREADSPERPROC verrà moltiplicata per il numero di processori del computer per ottenere il numero totale di thread.  Il valore predefinito è 2 thread per processore. Se necessario, è possibile definire il proprio valore intero positivo per questo simbolo prima di includere atlutil. h.
  
 *dwStackSize*  
 La dimensione dello stack per ogni thread nel pool.  
  
 *hCompletion*  
 L'handle di un oggetto da associare la porta di completamento.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="queryinterface"></a>  CThreadPool::QueryInterface  
 Implementazione di `IUnknown::QueryInterface`.  
  
```
HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppv) throw();
```  
  
### <a name="remarks"></a>Note  
 Gli oggetti di questa classe possano essere interrogati per il `IUnknown` e [IThreadPoolConfig](../../atl/reference/ithreadpoolconfig-interface.md) interfacce.  
  
##  <a name="queuerequest"></a>  CThreadPool::QueueRequest  
 Chiamare questo metodo per accodare un elemento di lavoro per essere gestito da un thread nel pool.  
  
```
BOOL QueueRequest(Worker::RequestType request) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *Richiesta*  
 La richiesta da inserire in coda.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questo metodo aggiunge un elemento di lavoro alla coda. I thread nel pool di selezionare gli elementi dalla coda nell'ordine in cui vengono ricevuti.  
  
##  <a name="release"></a>  CThreadPool::Release  
 Implementazione di `IUnknown::Release`.  
  
```
ULONG STDMETHODCALLTYPE Release() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre 1.  
  
### <a name="remarks"></a>Note  
 Questa classe non implementa il controllo della durata usando il conteggio dei riferimenti.  
  
##  <a name="setsize"></a>  CThreadPool:: SetSize  
 Chiamare questo metodo per impostare il numero di thread nel pool.  
  
```
HRESULT STDMETHODCALLTYPE SetSizeint nNumThreads) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *nNumThreads*  
 Il numero richiesto di thread nel pool.  
  
 Se *nNumThreads* è negativo, il valore assoluto corrispondente verrà moltiplicato per il numero di processori del computer per ottenere il numero totale di thread.  
  
 Se *nNumThreads* è uguale a zero, ATLS_DEFAULT_THREADSPERPROC verrà moltiplicata per il numero di processori del computer per ottenere il numero totale di thread. Il valore predefinito è 2 thread per processore. Se necessario, è possibile definire il proprio valore intero positivo per questo simbolo prima di includere atlutil. h.
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
### <a name="remarks"></a>Note  
 Se il numero di thread specificato è minore del numero di thread nel pool, l'oggetto inserisce un messaggio di chiusura nella coda del prelievo da un thread in attesa. Quando un thread in attesa preleva il messaggio dalla coda, invia una notifica del pool di thread e viene chiusa la routine del thread. Questo processo viene ripetuto fino a quando il numero di thread nel pool raggiunga il numero specificato o fino a quando nessun thread è terminato entro il periodo specificato da [GetTimeout](#gettimeout)/ [SetTimeout](#settimeout). In questo caso il metodo restituisce un valore HRESULT corrispondente WAIT_TIMEOUT e il messaggio di arresto in sospeso è stato annullato.  
  
##  <a name="settimeout"></a>  CThreadPool::SetTimeout  
 Chiamare questo metodo per impostare il tempo massimo in millisecondi di attesa per un thread arrestare il pool di thread.  
  
```
HRESULT STDMETHODCALLTYPE SetTimeout(DWORD dwMaxWait) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *dwMaxWait*  
 Il tempo massimo richiesto in millisecondi di attesa per un thread arrestare il pool di thread.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
### <a name="remarks"></a>Note  
 Il timeout viene inizializzato ATLS_DEFAULT_THREADPOOLSHUTDOWNTIMEOUT. Il tempo predefinito è 36 secondi. Se necessario, è possibile definire il proprio valore intero positivo per questo simbolo prima di includere atlutil. h. 
  
 Si noti che *dwMaxWait* è il tempo di attesa per un singolo thread arrestare il pool. Il tempo massimo che può essere impiegato per rimuovere più thread dal pool potrebbe essere leggermente minore *dwMaxWait* moltiplicato per il numero di thread.  
  
##  <a name="shutdown"></a>  CThreadPool::Shutdown  
 Chiamare questo metodo per arrestare il pool di thread.  
  
```
void Shutdown(DWORD dwMaxWait = 0) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *dwMaxWait*  
 Il tempo massimo richiesto in millisecondi di attesa per un thread arrestare il pool di thread. Se viene fornito alcun valore o 0, questo metodo verrà utilizzato il timeout impostato [CThreadPool::SetTimeout](#settimeout).  
  
### <a name="remarks"></a>Note  
 Questo metodo invia una richiesta di arresto a tutti i thread nel pool. Se il timeout scade, questo metodo chiamerà [TerminateThread](http://msdn.microsoft.com/library/windows/desktop/ms686717) in qualsiasi thread che non è stato chiuso. Questo metodo viene chiamato automaticamente dal distruttore della classe.  
  
## <a name="see-also"></a>Vedere anche  
 [Interfaccia IThreadPoolConfig](../../atl/reference/ithreadpoolconfig-interface.md)   
 [DefaultThreadTraits](atl-typedefs.md#defaultthreadtraits)   
 [Classi](../../atl/reference/atl-classes.md)
