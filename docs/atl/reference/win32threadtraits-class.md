---
title: Classe Win32ThreadTraits | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a5d94f92d21ea435bf7d73a6e28470babd293ed3
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43206915"
---
# <a name="win32threadtraits-class"></a>Classe Win32ThreadTraits
Questa classe fornisce la funzione di creazione di un thread di Windows. Utilizzare questa classe se il thread non useranno le funzioni CRT.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```
class Win32ThreadTraits
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Win32ThreadTraits::CreateThread](#createthread)|(Statico) Chiamare questa funzione per creare un thread che non deve utilizzare funzioni CRT.|  
  
## <a name="remarks"></a>Note  
 Tratti di thread sono classi che forniscono una funzione di creazione per un particolare tipo di thread. La funzione di creazione ha la stessa firma e la semantica di Windows [CreateThread](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-createthread) (funzione).  
  
 Tratti di thread vengono usati dalle classi seguenti:  
  
- [CThreadPool](../../atl/reference/cthreadpool-class.md)  
  
- [CWorkerThread](../../atl/reference/cworkerthread-class.md)  
  
 Se il thread useranno le funzioni CRT, usare [CRTThreadTraits](../../atl/reference/crtthreadtraits-class.md) invece.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="createthread"></a>  Win32ThreadTraits::CreateThread  
 Chiamare questa funzione per creare un thread che non deve utilizzare funzioni CRT.  
  
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
 *lpsa*  
 Gli attributi di sicurezza per il nuovo thread.  
  
 *dwStackSize*  
 La dimensione dello stack per il nuovo thread.  
  
 *pfnThreadProc*  
 La routine del thread del nuovo thread.  
  
 *parametro pvParam*  
 Il parametro deve essere passato alla routine del thread.  
  
 *dwCreationFlags*  
 La creazione di flag (0 o CREATE_SUSPENDED).  
  
 *pdwThreadId*  
 [out] Indirizzo della variabile DWORD che, in caso di esito positivo riceve l'ID del thread del thread appena creato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'handle per il thread appena creato oppure NULL in caso di errore. Chiamare [GetLastError](https://msdn.microsoft.com/library/windows/desktop/ms679360) per ottenere informazioni dettagliate sull'errore.  
  
### <a name="remarks"></a>Note  
 Visualizzare [CreateThread](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-createthread) per altre informazioni sui parametri per questa funzione.  
  
 Questa funzione chiama `CreateThread` per creare il thread.  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica della classe](../../atl/atl-class-overview.md)
