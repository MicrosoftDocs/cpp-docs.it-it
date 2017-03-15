---
title: Classe CThreadPool | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL.CThreadPool
- ATL::CThreadPool
- CThreadPool
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 632514d03e7037ef42a1566462db5dec6f5cc1e5
ms.lasthandoff: 02/24/2017

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
 La classe conforme al [archetipo lavoro](../../atl/reference/worker-archetype.md) fornendo il codice utilizzato per elaborare gli elementi in coda nel pool di thread di lavoro.  
  
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
|[CThreadPool::GetQueueHandle](#getqueuehandle)|Chiamare questo metodo per ottenere l'handle della porta di completamento i/o utilizzato per accodare gli elementi di lavoro.|  
|[:: GetSize](#getsize)|Chiamare questo metodo per ottenere il numero di thread nel pool.|  
|[CThreadPool::GetTimeout](#gettimeout)|Chiamare questo metodo per ottenere il tempo massimo in millisecondi di attesa per un thread arrestare il pool di thread.|  
|[CThreadPool::Initialize](#initialize)|Chiamare questo metodo per inizializzare il pool di thread.|  
|[CThreadPool::QueryInterface](#queryinterface)|Implementazione di **IUnknown:: QueryInterface**.|  
|[CThreadPool::QueueRequest](#queuerequest)|Chiamare questo metodo per inserire in coda un elemento di lavoro deve essere gestito da un thread nel pool.|  
|[CThreadPool::Release](#release)|Implementazione di `IUnknown::Release`.|  
|[CThreadPool:: SetSize](#setsize)|Chiamare questo metodo per impostare il numero di thread nel pool.|  
|[CThreadPool::SetTimeout](#settimeout)|Chiamare questo metodo per impostare il tempo massimo in millisecondi che il pool di thread attenderà per un thread chiuso.|  
|[CThreadPool::Shutdown](#shutdown)|Chiamare questo metodo per arrestare il pool di thread.|  
  
## <a name="remarks"></a>Note  
 Thread del pool vengono creati e distrutti quando il pool viene inizializzato, ridimensionato o arrestato. Un'istanza della classe *lavoro* verrà creato nello stack di ogni thread di lavoro nel pool. Ogni istanza verrà live per la durata del thread.  
  
 Subito dopo la creazione di un thread, *lavoro*:: `Initialize` verrà chiamato sull'oggetto associata al thread. Immediatamente prima dell'eliminazione di un thread, *lavoro*:: `Terminate` verrà chiamato. Entrambi i metodi devono accettare un **void\* ** argomento. Il valore di questo argomento viene passato al pool di thread tramite il `pvWorkerParam` parametro di [CThreadPool::Initialize](#initialize).  
  
 Quando sono disponibili gli elementi di lavoro fra i thread di lavoro e coda di lavoro, un thread di lavoro effettuerà il pull di un elemento all'esterno della coda e chiamare il **Execute** metodo il *lavoro* oggetto per tale thread. Tre elementi vengono quindi passati al metodo: l'elemento dalla coda, lo stesso `pvWorkerParam` passato a *lavoro*:: `Initialize` e *lavoro*:: `Terminate`e un puntatore per il [OVERLAPPED](http://msdn.microsoft.com/library/windows/desktop/ms684342) struttura utilizzata per la coda di porta di completamento i/o.  
  
 Il *lavoro* classe dichiara il tipo degli elementi che verranno accodati nel pool di thread, fornendo un typedef *lavoro*:: `RequestType`. Questo tipo deve essere in grado di sottoposto a cast da e verso un **ULONG_PTR**.  
  
 Un esempio di un *lavoro* è classe [CNonStatelessWorker classe](../../atl/reference/cnonstatelessworker-class.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IUnknown`  
  
 [IThreadPoolConfig](../../atl/reference/ithreadpoolconfig-interface.md)  
  
 `CThreadPool`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlutil. h  
  
##  <a name="a-nameaddrefa--cthreadpooladdref"></a><a name="addref"></a>CThreadPool::AddRef  
 Implementazione di `IUnknown::AddRef`.  
  
```
ULONG STDMETHODCALLTYPE AddRef() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre 1.  
  
### <a name="remarks"></a>Note  
 Questa classe non implementa il controllo della durata mediante il conteggio dei riferimenti.  
  
##  <a name="a-namecthreadpoola--cthreadpoolcthreadpool"></a><a name="cthreadpool"></a>CThreadPool::CThreadPool  
 Il costruttore per il pool di thread.  
  
```
CThreadPool() throw();
```  
  
### <a name="remarks"></a>Note  
 Inizializza il valore di timeout per [ATLS_DEFAULT_THREADPOOLSHUTDOWNTIMEOUT](http://msdn.microsoft.com/library/c1e660a7-d490-42af-bbe1-ded76e80cc10).  
  
##  <a name="a-namedtora--cthreadpoolcthreadpool"></a><a name="dtor"></a>CThreadPool:: ~ CThreadPool  
 Il distruttore per il pool di thread.  
  
```
~CThreadPool() throw();
```  
  
### <a name="remarks"></a>Note  
 Chiamate [CThreadPool::Shutdown](#shutdown).  
  
##  <a name="a-namegetnumthreadsa--cthreadpoolgetnumthreads"></a><a name="getnumthreads"></a>CThreadPool::GetNumThreads  
 Chiamare questo metodo per ottenere il numero di thread nel pool.  
  
```
int GetNumThreads() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di thread nel pool.  
  
##  <a name="a-namegetqueuehandlea--cthreadpoolgetqueuehandle"></a><a name="getqueuehandle"></a>CThreadPool::GetQueueHandle  
 Chiamare questo metodo per ottenere l'handle della porta di completamento i/o utilizzato per accodare gli elementi di lavoro.  
  
```
HANDLE GetQueueHandle() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'handle di coda o NULL se il pool di thread non è stato inizializzato.  
  
##  <a name="a-namegetsizea--cthreadpoolgetsize"></a><a name="getsize"></a>:: GetSize  
 Chiamare questo metodo per ottenere il numero di thread nel pool.  
  
```
HRESULT STDMETHODCALLTYPE GetSize(int* pnNumThreads) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pnNumThreads`  
 [out] Indirizzo della variabile che, in caso di riuscita, riceve il numero di thread nel pool.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
##  <a name="a-namegettimeouta--cthreadpoolgettimeout"></a><a name="gettimeout"></a>CThreadPool::GetTimeout  
 Chiamare questo metodo per ottenere il tempo massimo in millisecondi di attesa per un thread arrestare il pool di thread.  
  
```
HRESULT STDMETHODCALLTYPE GetTimeout(DWORD* pdwMaxWait) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pdwMaxWait`  
 [out] Indirizzo della variabile che, in caso di riuscita, riceve il tempo massimo in millisecondi che il pool di thread attenderà per un thread chiuso.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questo valore di timeout viene utilizzato da [CThreadPool::Shutdown](#shutdown) se nessun altro valore viene fornito a tale metodo.  
  
##  <a name="a-nameinitializea--cthreadpoolinitialize"></a><a name="initialize"></a>CThreadPool::Initialize  
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
 Il parametro di lavoro deve essere passato all'oggetto thread di lavoro `Initialize`, **Execute**, e `Terminate` metodi.  
  
 `nNumThreads`  
 Il numero richiesto di thread nel pool.  
  
 Se `nNumThreads` è negativo, il valore assoluto corrispondente verrà moltiplicato per il numero di processori del computer per ottenere il numero totale di thread.  
  
 Se `nNumThreads` è zero, [ATLS_DEFAULT_THREADSPERPROC](http://msdn.microsoft.com/library/e0dcf107-72a9-4122-abb4-83c63aa7d571) verrà moltiplicata per il numero di processori del computer per ottenere il numero totale di thread.  
  
 `dwStackSize`  
 La dimensione dello stack per ogni thread nel pool.  
  
 *hCompletion*  
 L'handle di un oggetto per associare la porta di completamento.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
##  <a name="a-namequeryinterfacea--cthreadpoolqueryinterface"></a><a name="queryinterface"></a>CThreadPool::QueryInterface  
 Implementazione di **IUnknown:: QueryInterface**.  
  
```
HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppv) throw();
```  
  
### <a name="remarks"></a>Note  
 Gli oggetti di questa classe possano essere interrogati per il **IUnknown** e [IThreadPoolConfig](../../atl/reference/ithreadpoolconfig-interface.md) interfacce.  
  
##  <a name="a-namequeuerequesta--cthreadpoolqueuerequest"></a><a name="queuerequest"></a>CThreadPool::QueueRequest  
 Chiamare questo metodo per inserire in coda un elemento di lavoro deve essere gestito da un thread nel pool.  
  
```
BOOL QueueRequest(Worker::RequestType request) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `request`  
 La richiesta viene accodata.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE esito positivo, FALSE in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questo metodo aggiunge un elemento di lavoro alla coda. I thread nel pool di selezionare gli elementi dalla coda nell'ordine in cui vengono ricevuti.  
  
##  <a name="a-namereleasea--cthreadpoolrelease"></a><a name="release"></a>CThreadPool::Release  
 Implementazione di `IUnknown::Release`.  
  
```
ULONG STDMETHODCALLTYPE Release() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre 1.  
  
### <a name="remarks"></a>Note  
 Questa classe non implementa il controllo della durata mediante il conteggio dei riferimenti.  
  
##  <a name="a-namesetsizea--cthreadpoolsetsize"></a><a name="setsize"></a>CThreadPool:: SetSize  
 Chiamare questo metodo per impostare il numero di thread nel pool.  
  
```
HRESULT STDMETHODCALLTYPE SetSizeint nNumThreads) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nNumThreads`  
 Il numero richiesto di thread nel pool.  
  
 Se `nNumThreads` è negativo, il valore assoluto corrispondente verrà moltiplicato per il numero di processori del computer per ottenere il numero totale di thread.  
  
 Se `nNumThreads` è zero, [ATLS_DEFAULT_THREADSPERPROC](http://msdn.microsoft.com/library/e0dcf107-72a9-4122-abb4-83c63aa7d571) verrà moltiplicata per il numero di processori del computer per ottenere il numero totale di thread.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Se il numero di thread specificato è minore del numero di thread nel pool, l'oggetto inserisce un messaggio di chiusura della coda deve essere prelevato da un thread in attesa. Quando un thread in attesa preleva il messaggio dalla coda, il pool di thread di notifica e viene chiuso la procedura del thread. Questo processo viene ripetuto fino a quando il numero di thread nel pool raggiunge il numero specificato o nessun thread è stato chiuso entro il periodo specificato da [GetTimeout](#gettimeout)/ [SetTimeout](#settimeout). In questo caso il metodo restituirà un valore HRESULT corrispondente **WAIT_TIMEOUT** e il messaggio di arresto in sospeso è stato annullato.  
  
##  <a name="a-namesettimeouta--cthreadpoolsettimeout"></a><a name="settimeout"></a>CThreadPool::SetTimeout  
 Chiamare questo metodo per impostare il tempo massimo in millisecondi che il pool di thread attenderà per un thread chiuso.  
  
```
HRESULT STDMETHODCALLTYPE SetTimeout(DWORD dwMaxWait) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `dwMaxWait`  
 Il tempo massimo richiesto in millisecondi che il pool di thread attenderà per un thread chiuso.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Il timeout viene inizializzato su [ATLS_DEFAULT_THREADPOOLSHUTDOWNTIMEOUT](http://msdn.microsoft.com/library/c1e660a7-d490-42af-bbe1-ded76e80cc10) nel costruttore.  
  
 Si noti che `dwMaxWait` è il tempo atteso per un singolo thread arrestare il pool. Il tempo massimo che può essere eseguito per rimuovere più thread dal pool potrebbe essere leggermente inferiore a `dwMaxWait` moltiplicato per il numero di thread.  
  
##  <a name="a-nameshutdowna--cthreadpoolshutdown"></a><a name="shutdown"></a>CThreadPool::Shutdown  
 Chiamare questo metodo per arrestare il pool di thread.  
  
```
void Shutdown(DWORD dwMaxWait = 0) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `dwMaxWait`  
 Il tempo massimo richiesto in millisecondi che il pool di thread attenderà per un thread chiuso. Se viene specificato 0 o nessun valore, questo metodo verrà utilizzato il timeout impostato [CThreadPool::SetTimeout](#settimeout).  
  
### <a name="remarks"></a>Note  
 Questo metodo invia una richiesta di arresto a tutti i thread nel pool. Se il timeout scade, questo metodo chiama il metodo [TerminateThread](http://msdn.microsoft.com/library/windows/desktop/ms686717) in qualsiasi thread che non è stato chiuso. Questo metodo viene chiamato automaticamente dal distruttore della classe.  
  
## <a name="see-also"></a>Vedere anche  
 [Interfaccia IThreadPoolConfig](../../atl/reference/ithreadpoolconfig-interface.md)   
 [DefaultThreadTraits](atl-typedefs.md#defaultthreadtraits)   
 [Classi](../../atl/reference/atl-classes.md)

