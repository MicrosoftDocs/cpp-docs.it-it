---
title: Classe CNoWorkerThread | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CNoWorkerThread
- ATLUTIL/ATL::CNoWorkerThread
- ATLUTIL/ATL::CNoWorkerThread::AddHandle
- ATLUTIL/ATL::CNoWorkerThread::AddTimer
- ATLUTIL/ATL::CNoWorkerThread::GetThreadHandle
- ATLUTIL/ATL::CNoWorkerThread::GetThreadId
- ATLUTIL/ATL::CNoWorkerThread::Initialize
- ATLUTIL/ATL::CNoWorkerThread::RemoveHandle
- ATLUTIL/ATL::CNoWorkerThread::Shutdown
dev_langs:
- C++
helpviewer_keywords:
- CNoWorkerThread class
ms.assetid: 29f06bae-b658-4aac-9c14-331e996d25d1
caps.latest.revision: 21
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 4c38d778849a31d55a657fc1022c2e9f4a370eec
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cnoworkerthread-class"></a>Classe CNoWorkerThread
Utilizzare questa classe come argomento per il `MonitorClass` parametro di modello classi cache se si desidera disabilitare la manutenzione della cache dinamica.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CNoWorkerThread
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CNoWorkerThread::AddHandle](#addhandle)|Punto di vista funzionale a non [CWorkerThread::AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).|  
|[CNoWorkerThread::AddTimer](#addtimer)|Punto di vista funzionale a non [CWorkerThread::AddTimer](../../atl/reference/cworkerthread-class.md#addtimer).|  
|[CNoWorkerThread::GetThreadHandle](#getthreadhandle)|Punto di vista funzionale a non [CWorkerThread::GetThreadHandle](../../atl/reference/cworkerthread-class.md#getthreadhandle).|  
|[CNoWorkerThread::GetThreadId](#getthreadid)|Punto di vista funzionale a non [CWorkerThread::GetThreadId](../../atl/reference/cworkerthread-class.md#getthreadid).|  
|[CNoWorkerThread::Initialize](#initialize)|Punto di vista funzionale a non [CWorkerThread::Initialize](../../atl/reference/cworkerthread-class.md#initialize).|  
|[CNoWorkerThread::RemoveHandle](#removehandle)|Punto di vista funzionale a non [CWorkerThread::RemoveHandle](../../atl/reference/cworkerthread-class.md#removehandle).|  
|[CNoWorkerThread::Shutdown](#shutdown)|Punto di vista funzionale a non [CWorkerThread::Shutdown](../../atl/reference/cworkerthread-class.md#shutdown).|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce la stessa interfaccia pubblica di [CWorkerThread](../../atl/reference/cworkerthread-class.md). Questa interfaccia è previsto a cura di `MonitorClass` parametro di modello per le classi di cache.  
  
 I metodi in questa classe vengono implementati per non eseguire alcuna operazione. I metodi che restituiscono sempre un valore HRESULT restituiscono S_OK e i metodi che restituiscono sempre un ID thread o HANDLE restituiscono 0.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlutil. h  
  
##  <a name="addhandle"></a>CNoWorkerThread::AddHandle  
 Punto di vista funzionale a non [CWorkerThread::AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).  
  
```
HRESULT AddHandle(HANDLE /* hObject
 */,
    IWorkerThreadClient* /* pClient
 */,
    DWORD_PTR /* dwParam
 */) throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre S_OK.  
  
### <a name="remarks"></a>Note  
 L'implementazione fornita da questa classe non esegue alcuna operazione.  
  
##  <a name="addtimer"></a>CNoWorkerThread::AddTimer  
 Punto di vista funzionale a non [CWorkerThread::AddTimer](../../atl/reference/cworkerthread-class.md#addtimer).  
  
```
HRESULT AddTimer(DWORD /* dwInterval
 */,
    IWorkerThreadClient* /* pClient
 */,
    DWORD_PTR /* dwParam
 */,
    HANDLE* /* phTimer
 */) throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre S_OK.  
  
### <a name="remarks"></a>Note  
 L'implementazione fornita da questa classe non esegue alcuna operazione.  
  
##  <a name="getthreadhandle"></a>CNoWorkerThread::GetThreadHandle  
 Punto di vista funzionale a non [CWorkerThread::GetThreadHandle](../../atl/reference/cworkerthread-class.md#getthreadhandle).  
  
```
HANDLE GetThreadHandle() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre NULL.  
  
### <a name="remarks"></a>Note  
 L'implementazione fornita da questa classe non esegue alcuna operazione.  
  
##  <a name="getthreadid"></a>CNoWorkerThread::GetThreadId  
 Punto di vista funzionale a non [CWorkerThread::GetThreadId](../../atl/reference/cworkerthread-class.md#getthreadid).  
  
```
DWORD GetThreadId() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione fornita da questa classe non esegue alcuna operazione.  
  
##  <a name="initialize"></a>CNoWorkerThread::Initialize  
 Punto di vista funzionale a non [CWorkerThread::Initialize](../../atl/reference/cworkerthread-class.md#initialize).  
  
```
HRESULT Initialize() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre S_OK.  
  
### <a name="remarks"></a>Note  
 L'implementazione fornita da questa classe non esegue alcuna operazione.  
  
##  <a name="removehandle"></a>CNoWorkerThread::RemoveHandle  
 Punto di vista funzionale a non [CWorkerThread::RemoveHandle](../../atl/reference/cworkerthread-class.md#removehandle).  
  
```
HRESULT RemoveHandle(HANDLE /* hObject
 */) throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre S_OK.  
  
### <a name="remarks"></a>Note  
 L'implementazione fornita da questa classe non esegue alcuna operazione.  
  
##  <a name="shutdown"></a>CNoWorkerThread::Shutdown  
 Punto di vista funzionale a non [CWorkerThread::Shutdown](../../atl/reference/cworkerthread-class.md#shutdown).  
  
```
HRESULT Shutdown(DWORD dwWait = ATL_WORKER_THREAD_WAIT) throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre S_OK.  
  
### <a name="remarks"></a>Note  
 L'implementazione fornita da questa classe non esegue alcuna operazione.

