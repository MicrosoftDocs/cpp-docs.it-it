---
title: Classe Win32ThreadTraits | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- Win32ThreadTraits
- ATLBASE/ATL::Win32ThreadTraits
- ATLBASE/ATL::Win32ThreadTraits::CreateThread
dev_langs:
- C++
helpviewer_keywords:
- threading [ATL], Windows threads
- threading [ATL], creation functions
- Win32ThreadTraits class
ms.assetid: 50279c38-eae1-4301-9ea6-97ccea580f3e
caps.latest.revision: 20
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: c55726a1728185f699afbac4ba68a6dc0f70c2bf
ms.openlocfilehash: a777b3c1ae6056fe4ae414371cbed4eee1accd86
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="win32threadtraits-class"></a>Classe Win32ThreadTraits
Questa classe fornisce la funzione di creazione di un thread di Windows. Utilizzare questa classe se il thread non utilizzerà le funzioni CRT.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
class Win32ThreadTraits
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Win32ThreadTraits::CreateThread](#createthread)|(Statico) Chiamare questa funzione per creare un thread che è possibile utilizzare le funzioni CRT.|  
  
## <a name="remarks"></a>Note  
 Tratti di thread sono classi che forniscono una funzione di creazione per un particolare tipo di thread. La funzione di creazione ha la stessa firma e la semantica di Windows [CreateThread](http://msdn.microsoft.com/library/windows/desktop/ms682453) (funzione).  
  
 Tratti di thread vengono utilizzati dalle classi seguenti:  
  
- [CThreadPool](../../atl/reference/cthreadpool-class.md)  
  
- [CWorkerThread](../../atl/reference/cworkerthread-class.md)  
  
 Se il thread utilizza funzioni CRT, utilizzare [CRTThreadTraits](../../atl/reference/crtthreadtraits-class.md) invece.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="createthread"></a>Win32ThreadTraits::CreateThread  
 Chiamare questa funzione per creare un thread che è possibile utilizzare le funzioni CRT.  
  
```
static HANDLE CreateThread(
    LPSECURITY_ATTRIBUTES lpsa,
    DWORD dwStackSize,
    LPTHREAD_START_ROUTINE pfnThreadProc,
    void* pvParam,
    DWORD dwCreationFlags,
    DWORD* pdwThreadId) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `lpsa`  
 Attributi di protezione per il nuovo thread.  
  
 `dwStackSize`  
 La dimensione dello stack per il nuovo thread.  
  
 `pfnThreadProc`  
 La procedura del thread del nuovo thread.  
  
 `pvParam`  
 Il parametro deve essere passato alla routine del thread.  
  
 `dwCreationFlags`  
 La creazione di flag (0 o CREATE_SUSPENDED).  
  
 `pdwThreadId`  
 [out] Indirizzo della variabile DWORD che, se l'operazione riesce, riceve l'ID di thread del thread appena creato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'handle per il thread appena creato o NULL in caso di errore. Chiamare [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) per ottenere informazioni dettagliate sull'errore.  
  
### <a name="remarks"></a>Note  
 Vedere [CreateThread](http://msdn.microsoft.com/library/windows/desktop/ms682453) per ulteriori informazioni sui parametri per questa funzione.  
  
 Questa funzione chiama `CreateThread` per creare il thread.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

