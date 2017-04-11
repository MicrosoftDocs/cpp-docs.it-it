---
title: Classe CThreadPool | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
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
caps.latest.revision: 22
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: d2d39abf526a58b8442107b5ee816f316ae841f5
ms.openlocfilehash: b3c944958ba73240131fba33db95dbc20ec9bec8
ms.lasthandoff: 03/31/2017

---
# <a name="cthreadpool-class"></a>CThreadPool (classe)
Questa classe fornisce un pool di thread di lavoro di elaborazione di una coda di elementi di lavoro.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Worker, class ThreadTraits = DefaultThreadTraits>  
class CThreadPool : public IThreadPoolConfig
```  
  
#### <a name="parameters"></a>Parametri  
 *Lavoro*  
 La classe conforme al [sistema per lavoro](../../atl/reference/worker-archetype.md) fornendo il codice utilizzato per elaborare gli elementi in coda nel pool di thread di lavoro.  
  
 `ThreadTraits`  
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
|[CThreadPool::GetQueueHandle](#getqueuehandle)|Chiamare questo metodo per ottenere l'handle della porta di completamento i/o utilizzata per accodare gli elementi di lavoro.|  
|[:: GetSize](#getsize)|Chiamare questo metodo per ottenere il numero di thread nel pool.|  
|[CThreadPool::GetTimeout](#gettimeout)|Chiamare questo metodo per ottenere il tempo massimo in millisecondi di attesa per un thread arrestare il pool di thread.|  
|[CThreadPool::Initialize](#initialize)|Chiamare questo metodo per inizializzare il pool di thread.|  
|[CThreadPool::QueryInterface](#queryinterface)|Implementazione di **IUnknown:: QueryInterface**.|  
|[CThreadPool::QueueRequest](#queuerequest)|Chiamare questo metodo per accodare un elemento di lavoro deve essere gestito da un thread nel pool.|  
|[CThreadPool::Release](#release)|Implementazione di `IUnknown::Release`.|  
|[CThreadPool:: SetSize](#setsize)|Chiamare questo metodo per impostare il numero di thread nel pool.|  
|[CThreadPool::SetTimeout](#settimeout)|Chiamare questo metodo per impostare il tempo massimo in millisecondi di attesa per un thread arrestare il pool di thread.|  
|[CThreadPool::Shutdown](#shutdown)|Chiamare questo metodo per arrestare il pool di thread.|  
  
## <a name="remarks"></a>Note  
 Nel pool di thread vengono creati e distrutti quando viene inizializzato, ridimensionato o arrestare il pool di. Un'istanza della classe *lavoro* verrà creato nello stack di ogni thread di lavoro nel pool. Ogni istanza verrà in tempo reale per la durata del thread.  
  
 Subito dopo la creazione di un thread, *lavoro*:: `Initialize` verrà chiamato sull'oggetto associata al thread. Immediatamente prima dell'eliminazione di un thread, *lavoro*:: `Terminate` verrà chiamato. Entrambi i metodi devono accettare un **void\*** argomento. Il valore di questo argomento viene passato al pool di thread tramite il `pvWorkerParam` parametro di [CThreadPool::Initialize](#initialize).  
  
 Quando sono disponibili gli elementi di lavoro fra i thread di lavoro e coda di lavoro, un thread di lavoro effettuerà il pull un elemento all'esterno della coda e chiamare il **Execute** metodo del *lavoro* oggetto per il thread. Tre elementi vengono quindi passati al metodo: l'elemento dalla coda, lo stesso `pvWorkerParam` passato a *lavoro*:: `Initialize` e *lavoro*:: `Terminate`e un puntatore di [OVERLAPPED](http://msdn.microsoft.com/library/windows/desktop/ms684342) struttura utilizzata per la coda di porta di completamento i/o.  
  
 Il *lavoro* classe dichiara il tipo degli elementi che saranno accodate nel pool di thread fornendo un typedef, *lavoro*:: `RequestType`. Questo tipo deve essere in grado di sottoposto a cast da e verso un **ULONG_PTR**.  
  
 Un esempio di un *lavoro* classe è [CNonStatelessWorker classe](../../atl/reference/cnonstatelessworker-class.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IUnknown`  
  
 [IThreadPoolConfig](../../atl/reference/ithreadpoolconfig-interface.md)  
  
 `CThreadPool`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlutil. h  
  
##  <a name="addref"></a>CThreadPool::AddRef  
 Implementazione di `IUnknown::AddRef`.  
  
```
ULONG STDMETHODCALLTYPE AddRef() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre 1.  
  
### <a name="remarks"></a>Note  
 Questa classe non implementa il controllo della durata mediante il conteggio dei riferimenti.  
  
##  <a name="cthreadpool"></a>CThreadPool::CThreadPool  
 Il costruttore per il pool di thread.  
  
```
CThreadPool() throw();
```  
  
### <a name="remarks"></a>Note  
 Inizializza il valore di timeout per `ATLS_DEFAULT_THREADPOOLSHUTDOWNTIMEOUT`. Il tempo predefinito è secondi 36. Se necessario, è possibile definire il proprio valore intero positivo per questo simbolo prima di includere atlutil. h.  
  
##  <a name="dtor"></a>CThreadPool:: ~ CThreadPool  
 Il distruttore per il pool di thread.  
  
```
~CThreadPool() throw();
```  
  
### <a name="remarks"></a>Note  
 Chiamate [CThreadPool::Shutdown](#shutdown).  
  
##  <a name="getnumthreads"></a>CThreadPool::GetNumThreads  
 Chiamare questo metodo per ottenere il numero di thread nel pool.  
  
```
int GetNumThreads() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di thread nel pool.  
  
##  <a name="getqueuehandle"></a>CThreadPool::GetQueueHandle  
 Chiamare questo metodo per ottenere l'handle della porta di completamento i/o utilizzata per accodare gli elementi di lavoro.  
  
```
HANDLE GetQueueHandle() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'handle della coda o NULL se il pool di thread non è stato inizializzato.  
  
##  <a name="getsize"></a>:: GetSize  
 Chiamare questo metodo per ottenere il numero di thread nel pool.  
  
```
HRESULT STDMETHODCALLTYPE GetSize(int* pnNumThreads) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pnNumThreads`  
 [out] Indirizzo della variabile che, se l'operazione riesce, riceve il numero di thread nel pool.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
##  <a name="gettimeout"></a>CThreadPool::GetTimeout  
 Chiamare questo metodo per ottenere il tempo massimo in millisecondi di attesa per un thread arrestare il pool di thread.  
  
```
HRESULT STDMETHODCALLTYPE GetTimeout(DWORD* pdwMaxWait) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pdwMaxWait`  
 [out] Indirizzo della variabile che, se l'operazione riesce, riceve il tempo massimo in millisecondi di attesa per un thread arrestare il pool di thread.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questo valore di timeout viene usato da [CThreadPool::Shutdown](#shutdown) se nessun altro valore viene fornito a tale metodo.  
  
##  <a name="initialize"></a>CThreadPool::Initialize  
 Chiamare questo metodo per inizializzare il pool di thread.  
  
```
HRESULT Initialize(
    void* pvWorkerParam = NULL,
    int nNumThreads = 0,
    DWORD dwStackSize = 0,
    HANDLE hCompletion = INVALID_HANDLE_VALUE) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pvWorkerParam`  
 Il parametro di lavoro deve essere passato all'oggetto di thread di lavoro `Initialize`, **Execute**, e `Terminate` metodi.  
  
 `nNumThreads`  
 Il numero richiesto di thread nel pool.  
  
 Se `nNumThreads` è negativo, il valore assoluto verrà moltiplicato per il numero di processori del computer per ottenere il numero totale di thread.  
  
 Se `nNumThreads` è zero, `ATLS_DEFAULT_THREADSPERPROC` verrà moltiplicata per il numero di processori del computer per ottenere il numero totale di thread.  Il valore predefinito è 2 thread per processore. Se necessario, è possibile definire il proprio valore intero positivo per questo simbolo prima di includere atlutil. h.
  
 `dwStackSize`  
 La dimensione dello stack per ogni thread nel pool.  
  
 *hCompletion*  
 L'handle di un oggetto da associare la porta di completamento.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
##  <a name="queryinterface"></a>CThreadPool::QueryInterface  
 Implementazione di **IUnknown:: QueryInterface**.  
  
```
HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppv) throw();
```  
  
### <a name="remarks"></a>Note  
 Oggetti di questa classe è possibile interrogare per il **IUnknown** e [IThreadPoolConfig](../../atl/reference/ithreadpoolconfig-interface.md) interfacce.  
  
##  <a name="queuerequest"></a>CThreadPool::QueueRequest  
 Chiamare questo metodo per accodare un elemento di lavoro deve essere gestito da un thread nel pool.  
  
```
BOOL QueueRequest(Worker::RequestType request) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `request`  
 La richiesta da inserire in coda.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questo metodo aggiunge un elemento di lavoro alla coda. I thread nel pool di selezionare gli elementi dalla coda nell'ordine in cui vengono ricevuti.  
  
##  <a name="release"></a>CThreadPool::Release  
 Implementazione di `IUnknown::Release`.  
  
```
ULONG STDMETHODCALLTYPE Release() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre 1.  
  
### <a name="remarks"></a>Note  
 Questa classe non implementa il controllo della durata mediante il conteggio dei riferimenti.  
  
##  <a name="setsize"></a>CThreadPool:: SetSize  
 Chiamare questo metodo per impostare il numero di thread nel pool.  
  
```
HRESULT STDMETHODCALLTYPE SetSizeint nNumThreads) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nNumThreads`  
 Il numero richiesto di thread nel pool.  
  
 Se `nNumThreads` è negativo, il valore assoluto verrà moltiplicato per il numero di processori del computer per ottenere il numero totale di thread.  
  
 Se `nNumThreads` è zero, `ATLS_DEFAULT_THREADSPERPROC` verrà moltiplicata per il numero di processori del computer per ottenere il numero totale di thread. Il valore predefinito è 2 thread per processore. Se necessario, è possibile definire il proprio valore intero positivo per questo simbolo prima di includere atlutil. h.
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Se il numero di thread specificato è minore del numero di thread attualmente nel pool, l'oggetto inserisce un messaggio di chiusura nella coda di essere prelevate da un thread in attesa. Quando un thread in attesa preleva il messaggio dalla coda, il pool di thread di notifica e lo chiude la procedura del thread. Questo processo viene ripetuto fino a quando il numero di thread nel pool raggiunge il numero specificato o nessun thread è stato chiuso entro il periodo specificato da [GetTimeout](#gettimeout)/ [SetTimeout](#settimeout). In questo caso il metodo restituirà un valore HRESULT corrispondente **WAIT_TIMEOUT** e il messaggio di arresto in sospeso è stato annullato.  
  
##  <a name="settimeout"></a>CThreadPool::SetTimeout  
 Chiamare questo metodo per impostare il tempo massimo in millisecondi di attesa per un thread arrestare il pool di thread.  
  
```
HRESULT STDMETHODCALLTYPE SetTimeout(DWORD dwMaxWait) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `dwMaxWait`  
 Il tempo massimo richiesto in millisecondi di attesa per un thread arrestare il pool di thread.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Il timeout viene inizializzato su `ATLS_DEFAULT_THREADPOOLSHUTDOWNTIMEOUT`. Il tempo predefinito è secondi 36. Se necessario, è possibile definire il proprio valore intero positivo per questo simbolo prima di includere atlutil. h. 
  
 Si noti che `dwMaxWait` è il tempo atteso per un singolo thread arrestare il pool. Il tempo massimo che può essere eseguito per rimuovere più thread dal pool potrebbe essere leggermente inferiore a `dwMaxWait` moltiplicato per il numero di thread.  
  
##  <a name="shutdown"></a>CThreadPool::Shutdown  
 Chiamare questo metodo per arrestare il pool di thread.  
  
```
void Shutdown(DWORD dwMaxWait = 0) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `dwMaxWait`  
 Il tempo massimo richiesto in millisecondi di attesa per un thread arrestare il pool di thread. Se viene fornito alcun valore o 0, questo metodo verrà utilizzato il timeout impostato [CThreadPool::SetTimeout](#settimeout).  
  
### <a name="remarks"></a>Note  
 Questo metodo invia una richiesta di arresto a tutti i thread nel pool. Se il timeout scade, questo metodo chiama il metodo [TerminateThread](http://msdn.microsoft.com/library/windows/desktop/ms686717) in qualsiasi thread che non è stato chiuso. Questo metodo viene chiamato automaticamente dal distruttore della classe.  
  
## <a name="see-also"></a>Vedere anche  
 [Interfaccia IThreadPoolConfig](../../atl/reference/ithreadpoolconfig-interface.md)   
 [DefaultThreadTraits](atl-typedefs.md#defaultthreadtraits)   
 [Classi](../../atl/reference/atl-classes.md)

