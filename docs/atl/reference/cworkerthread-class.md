---
title: Classe CWorkerThread | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CWorkerThread class
ms.assetid: be79a832-1345-4a36-a13e-a406cc65286f
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: be7a000e48cb044a67f7eee120206f46ecaef2ce
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cworkerthread-class"></a>Classe CWorkerThread
Questa classe crea un thread di lavoro o utilizza uno esistente, è in attesa su una o più handle di oggetto kernel ed esegue una funzione di client specificato quando uno degli handle viene segnalato.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class ThreadTraits = DefaultThreadTraits>  
class CWorkerThread
```  
  
#### <a name="parameters"></a>Parametri  
 `ThreadTraits`  
 La classe che fornisce la funzione di creazione di thread, ad esempio [CRTThreadTraits](../../atl/reference/crtthreadtraits-class.md) o [Win32ThreadTraits](../../atl/reference/win32threadtraits-class.md).  
  
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
|[CWorkerThread::AddHandle](#addhandle)|Chiamare questo metodo per aggiungere l'handle dell'oggetto waitable all'elenco gestito dal thread di lavoro.|  
|[CWorkerThread::AddTimer](#addtimer)|Chiamare questo metodo per aggiungere un timer waitable periodico all'elenco gestito dal thread di lavoro.|  
|[CWorkerThread::GetThreadHandle](#getthreadhandle)|Chiamare questo metodo per ottenere l'handle del thread del thread di lavoro.|  
|[CWorkerThread::GetThreadId](#getthreadid)|Chiamare questo metodo per ottenere l'ID di thread del thread di lavoro.|  
|[CWorkerThread::Initialize](#initialize)|Chiamare questo metodo per inizializzare il thread di lavoro.|  
|[CWorkerThread::RemoveHandle](#removehandle)|Chiamare questo metodo per rimuovere un handle dall'elenco di oggetti awaitable.|  
|[CWorkerThread::Shutdown](#shutdown)|Chiamare questo metodo per arrestare il thread di lavoro.|  
  
## <a name="remarks"></a>Note  
  
### <a name="to-use-cworkerthread"></a>Per utilizzare CWorkerThread  
  
1.  Creare un'istanza di questa classe.  
  
2.  Chiamare [CWorkerThread::Initialize](#initialize).  
  
3.  Chiamare [CWorkerThread::AddHandle](#addhandle) con l'handle di un oggetto del kernel e un puntatore a un'implementazione di [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md).  
  
     - oppure -  
  
     Chiamare [CWorkerThread::AddTimer](#addtimer) con un puntatore a un'implementazione di [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md).  
  
4.  Implementare [IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) eseguire un'azione quando viene segnalato l'handle o un timer.  
  
5.  Per rimuovere un oggetto dall'elenco di oggetti waitable, chiamare [CWorkerThread::RemoveHandle](#removehandle).  
  
6.  Per terminare il thread, chiamare [CWorkerThread::Shutdown](#shutdown).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlutil. h  
  
##  <a name="addhandle"></a>CWorkerThread::AddHandle  
 Chiamare questo metodo per aggiungere l'handle dell'oggetto waitable all'elenco gestito dal thread di lavoro.  
  
```
HRESULT AddHandle(
    HANDLE hObject,
    IWorkerThreadClient* pClient,
    DWORD_PTR dwParam) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `hObject`  
 Handle a un oggetto awaitable.  
  
 `pClient`  
 Il puntatore di [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md) interfaccia sull'oggetto da chiamare quando l'handle viene segnalato.  
  
 `dwParam`  
 Il parametro deve essere passato [IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) quando l'handle viene segnalato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 [IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) verrà chiamato tramite `pClient` quando l'handle, `hObject`, viene segnalato.  
  
##  <a name="addtimer"></a>CWorkerThread::AddTimer  
 Chiamare questo metodo per aggiungere un timer waitable periodico all'elenco gestito dal thread di lavoro.  
  
```
HRESULT AddTimer(
    DWORD dwInterval,
    IWorkerThreadClient* pClient,
    DWORD_PTR dwParam,
    HANDLE* phTimer) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *dwInterval*  
 Specifica il periodo del timer in millisecondi.  
  
 `pClient`  
 Il puntatore di [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md) interfaccia sull'oggetto da chiamare quando l'handle viene segnalato.  
  
 `dwParam`  
 Il parametro deve essere passato [IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) quando l'handle viene segnalato.  
  
 `phTimer`  
 [out] Indirizzo della variabile di HANDLE che, se l'operazione riesce, riceve l'handle per il timer appena creato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 [IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) verrà chiamato tramite `pClient` segnalato quando il timer.  
  
 Passare l'handle di timer da `phTimer` a [CWorkerThread::RemoveHandle](#removehandle) per chiudere il timer.  
  
##  <a name="cworkerthread"></a>CWorkerThread::CWorkerThread  
 Costruttore.  
  
```
CWorkerThread() throw();
```  
  
##  <a name="dtor"></a>CWorkerThread:: ~ CWorkerThread  
 Distruttore.  
  
```
~CWorkerThread() throw();
```  
  
### <a name="remarks"></a>Note  
 Chiamate [CWorkerThread::Shutdown](#shutdown).  
  
##  <a name="getthreadhandle"></a>CWorkerThread::GetThreadHandle  
 Chiamare questo metodo per ottenere l'handle del thread del thread di lavoro.  
  
```
HANDLE GetThreadHandle() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'handle del thread o NULL se il thread di lavoro non è stato inizializzato.  
  
##  <a name="getthreadid"></a>CWorkerThread::GetThreadId  
 Chiamare questo metodo per ottenere l'ID di thread del thread di lavoro.  
  
```
DWORD GetThreadId() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'ID del thread o NULL se il thread di lavoro non è stato inizializzato.  
  
##  <a name="initialize"></a>CWorkerThread::Initialize  
 Chiamare questo metodo per inizializzare il thread di lavoro.  
  
```
HRESULT Initialize() throw();

HRESULT Initialize(CWorkerThread<ThreadTraits>* pThread) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pThread`  
 Un thread di lavoro esistente.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questo metodo deve essere chiamato per inizializzare l'oggetto dopo la creazione o dopo una chiamata a [CWorkerThread::Shutdown](#shutdown).  
  
 Per disporre di due o più `CWorkerThread` oggetti utilizza il thread di lavoro stesso, uno di essi senza passare gli argomenti quindi passare un puntatore all'oggetto per inizializzare il `Initialize` metodi dagli altri. Gli oggetti inizializzati utilizzando l'indicatore di misura devono essere arrestati prima dell'oggetto usata per inizializzarli.  
  
 Vedere [CWorkerThread::Shutdown](#shutdown) per informazioni su come comportamento del metodo cambia durante l'inizializzazione mediante un puntatore a un oggetto esistente.  
  
##  <a name="removehandle"></a>CWorkerThread::RemoveHandle  
 Chiamare questo metodo per rimuovere un handle dall'elenco di oggetti awaitable.  
  
```
HRESULT RemoveHandle(HANDLE hObject) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `hObject`  
 L'handle da rimuovere.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Quando viene rimosso l'handle [IWorkerThreadClient::CloseHandle](../../atl/reference/iworkerthreadclient-interface.md#closehandle) verrà chiamato sull'oggetto associato è stato passato a [AddHandle](#addhandle). Se la chiamata ha esito negativo, `CWorkerThread` chiamerà Windows [CloseHandle](http://msdn.microsoft.com/library/windows/desktop/ms724211) funzione dell'handle.  
  
##  <a name="shutdown"></a>CWorkerThread::Shutdown  
 Chiamare questo metodo per arrestare il thread di lavoro.  
  
```
HRESULT Shutdown(DWORD dwWait = ATL_WORKER_THREAD_WAIT) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `dwWait`  
 Il tempo in millisecondi di attesa per il thread di lavoro arrestare. ATL_WORKER_THREAD_WAIT per impostazione predefinita 10 secondi. Se necessario, è possibile definire il proprio valore per questo simbolo prima di includere atlutil. h. 
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore, ad esempio se il valore di timeout, `dwWait`, viene superato.  
  
### <a name="remarks"></a>Note  
 Per riutilizzare l'oggetto, chiamare [CWorkerThread::Initialize](#initialize) dopo aver chiamato questo metodo.  
  
 Si noti che la chiamata **arresto** su un oggetto inizializzato con un puntatore a un altro `CWorkerThread` oggetto non ha alcun effetto e restituisce sempre S_OK.  
  
## <a name="see-also"></a>Vedere anche  
 [DefaultThreadTraits](atl-typedefs.md#defaultthreadtraits)   
 [Classi](../../atl/reference/atl-classes.md)   
 [Multithreading: Creazione di thread di lavoro](../../parallel/multithreading-creating-worker-threads.md)   
 [Interfaccia IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md)
