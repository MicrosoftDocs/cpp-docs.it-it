---
title: Classe CWorkerThread | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL::CWorkerThread<ThreadTraits>
- ATL::CWorkerThread
- ATL.CWorkerThread
- ATL.CWorkerThread<ThreadTraits>
- CWorkerThread
dev_langs:
- C++
helpviewer_keywords:
- CWorkerThread class
ms.assetid: be79a832-1345-4a36-a13e-a406cc65286f
caps.latest.revision: 24
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
ms.openlocfilehash: ab1c92c1b7442025f91007ef971d81d087351212
ms.lasthandoff: 02/24/2017

---
# <a name="cworkerthread-class"></a>Classe CWorkerThread
Questa classe crea un thread di lavoro o utilizza uno esistente, è in attesa su una o più handle di oggetto kernel ed esegue una funzione client specificato quando uno degli handle viene segnalato.  
  
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
  
|Nome|Descrizione|  
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
|[CWorkerThread::GetThreadId](#getthreadid)|Chiamare questo metodo per ottenere l'ID di thread del thread di lavoro.|  
|[CWorkerThread::Initialize](#initialize)|Chiamare questo metodo per inizializzare il thread di lavoro.|  
|[CWorkerThread::RemoveHandle](#removehandle)|Chiamare questo metodo per rimuovere l'elenco di oggetti waitable un handle.|  
|[CWorkerThread::Shutdown](#shutdown)|Chiamare questo metodo per arrestare il thread di lavoro.|  
  
## <a name="remarks"></a>Note  
  
### <a name="to-use-cworkerthread"></a>Utilizzare CWorkerThread  
  
1.  Creare un'istanza di questa classe.  
  
2.  Chiamare [CWorkerThread::Initialize](#initialize).  
  
3.  Chiamare [CWorkerThread::AddHandle](#addhandle) con l'handle di un oggetto kernel e un puntatore a un'implementazione di [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md).  
  
     - oppure -  
  
     Chiamare [CWorkerThread::AddTimer](#addtimer) con un puntatore a un'implementazione di [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md).  
  
4.  Implementare [IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) eseguire un'azione quando viene segnalato l'handle o timer.  
  
5.  Per rimuovere un oggetto dall'elenco di oggetti waitable, chiamare [CWorkerThread::RemoveHandle](#removehandle).  
  
6.  Per terminare il thread, chiamare [CWorkerThread::Shutdown](#shutdown).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlutil. h  
  
##  <a name="a-nameaddhandlea--cworkerthreadaddhandle"></a><a name="addhandle"></a>CWorkerThread::AddHandle  
 Chiamare questo metodo per aggiungere handle dell'oggetto waitable all'elenco gestito dal thread di lavoro.  
  
```
HRESULT AddHandle(
    HANDLE hObject,
    IWorkerThreadClient* pClient,
    DWORD_PTR dwParam) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `hObject`  
 Handle per un oggetto waitable.  
  
 `pClient`  
 Il puntatore per il [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md) interfaccia sull'oggetto da chiamare quando l'handle viene segnalato.  
  
 `dwParam`  
 Il parametro deve essere passato [IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) quando l'handle viene segnalato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 [IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) verrà chiamato tramite `pClient` quando l'handle, `hObject`, viene segnalato.  
  
##  <a name="a-nameaddtimera--cworkerthreadaddtimer"></a><a name="addtimer"></a>CWorkerThread::AddTimer  
 Chiamare questo metodo per aggiungere un timer periodico waitable all'elenco gestito dal thread di lavoro.  
  
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
 Il puntatore per il [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md) interfaccia sull'oggetto da chiamare quando l'handle viene segnalato.  
  
 `dwParam`  
 Il parametro deve essere passato [IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) quando l'handle viene segnalato.  
  
 `phTimer`  
 [out] Indirizzo della variabile di HANDLE che, in caso di riuscita, riceve l'handle per il timer appena creato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 [IWorkerThreadClient::Execute](../../atl/reference/iworkerthreadclient-interface.md#execute) verrà chiamato tramite `pClient` quando viene segnalato il timer.  
  
 Passare l'handle di timer da `phTimer` a [CWorkerThread::RemoveHandle](#removehandle) per chiudere il timer.  
  
##  <a name="a-namecworkerthreada--cworkerthreadcworkerthread"></a><a name="cworkerthread"></a>CWorkerThread::CWorkerThread  
 Costruttore.  
  
```
CWorkerThread() throw();
```  
  
##  <a name="a-namedtora--cworkerthreadcworkerthread"></a><a name="dtor"></a>CWorkerThread:: ~ CWorkerThread  
 Distruttore.  
  
```
~CWorkerThread() throw();
```  
  
### <a name="remarks"></a>Note  
 Chiamate [CWorkerThread::Shutdown](#shutdown).  
  
##  <a name="a-namegetthreadhandlea--cworkerthreadgetthreadhandle"></a><a name="getthreadhandle"></a>CWorkerThread::GetThreadHandle  
 Chiamare questo metodo per ottenere l'handle del thread del thread di lavoro.  
  
```
HANDLE GetThreadHandle() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'handle del thread oppure NULL se il thread di lavoro non è stato inizializzato.  
  
##  <a name="a-namegetthreadida--cworkerthreadgetthreadid"></a><a name="getthreadid"></a>CWorkerThread::GetThreadId  
 Chiamare questo metodo per ottenere l'ID di thread del thread di lavoro.  
  
```
DWORD GetThreadId() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'ID del thread oppure NULL se il thread di lavoro non è stato inizializzato.  
  
##  <a name="a-nameinitializea--cworkerthreadinitialize"></a><a name="initialize"></a>CWorkerThread::Initialize  
 Chiamare questo metodo per inizializzare il thread di lavoro.  
  
```
HRESULT Initialize() throw();

HRESULT Initialize(CWorkerThread<ThreadTraits>* pThread) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pThread`  
 Un thread di lavoro esistente.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questo metodo deve essere chiamato per inizializzare l'oggetto dopo la creazione o dopo una chiamata a [CWorkerThread::Shutdown](#shutdown).  
  
 Disporre di due o più `CWorkerThread` oggetti utilizzare lo stesso thread di lavoro, uno di essi senza passare argomenti quindi passano un puntatore a tale oggetto per inizializzare il `Initialize` degli altri metodi. L'oggetto inizializzato utilizzando il puntatore deve essere chiuso prima dell'oggetto usata per inizializzarli.  
  
 Vedere [CWorkerThread::Shutdown](#shutdown) per informazioni su come comportamento del metodo cambia quando inizializzato utilizzando un puntatore a un oggetto esistente.  
  
##  <a name="a-nameremovehandlea--cworkerthreadremovehandle"></a><a name="removehandle"></a>CWorkerThread::RemoveHandle  
 Chiamare questo metodo per rimuovere l'elenco di oggetti waitable un handle.  
  
```
HRESULT RemoveHandle(HANDLE hObject) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `hObject`  
 L'handle da rimuovere.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Quando viene rimosso l'handle [IWorkerThreadClient::CloseHandle](../../atl/reference/iworkerthreadclient-interface.md#closehandle) verrà chiamato sull'oggetto associato passato a [AddHandle](#addhandle). Se questa chiamata non riesce, `CWorkerThread` chiamerà Windows [CloseHandle](http://msdn.microsoft.com/library/windows/desktop/ms724211) funzione sull'handle.  
  
##  <a name="a-nameshutdowna--cworkerthreadshutdown"></a><a name="shutdown"></a>CWorkerThread::Shutdown  
 Chiamare questo metodo per arrestare il thread di lavoro.  
  
```
HRESULT Shutdown(DWORD dwWait = ATL_WORKER_THREAD_WAIT) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `dwWait`  
 Il tempo in millisecondi di attesa per il thread di lavoro chiuso.  
  
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

