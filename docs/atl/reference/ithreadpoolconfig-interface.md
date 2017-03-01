---
title: Interfaccia IThreadPoolConfig | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IThreadPoolConfig
- ATL::IThreadPoolConfig
- ATL.IThreadPoolConfig
dev_langs:
- C++
helpviewer_keywords:
- IThreadPoolConfig interface
ms.assetid: 69e642bf-6925-46e6-9a37-cce52231b1cc
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
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: e10885373442890978feff42cda99309692a21d0
ms.lasthandoff: 02/24/2017

---
# <a name="ithreadpoolconfig-interface"></a>Interfaccia IThreadPoolConfig
Questa interfaccia fornisce metodi per la configurazione di un pool di thread.  
  
> [!IMPORTANT]
>  Non è possibile utilizzare questa classe e i relativi membri in applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## <a name="syntax"></a>Sintassi  
  
```
__interface
    __declspec(uuid("B1F64757-6E88-4fa2-8886-7848B0D7E660")) IThreadPoolConfig : public IUnknown
```  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[GetSize](#getsize)|Chiamare questo metodo per ottenere il numero di thread nel pool.|  
|[GetTimeout](#gettimeout)|Chiamare questo metodo per ottenere il tempo massimo in millisecondi di attesa per un thread arrestare il pool di thread.|  
|[SetSize](#setsize)|Chiamare questo metodo per impostare il numero di thread nel pool.|  
|[SetTimeout](#settimeout)|Chiamare questo metodo per impostare il tempo massimo in millisecondi che il pool di thread attenderà per un thread chiuso.|  
  
## <a name="remarks"></a>Note  
 Questa interfaccia viene implementata da [CThreadPool](../../atl/reference/cthreadpool-class.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlutil. h  
  
##  <a name="a-namegetsizea--ithreadpoolconfiggetsize"></a><a name="getsize"></a>IThreadPoolConfig::GetSize  
 Chiamare questo metodo per ottenere il numero di thread nel pool.  
  
```
STDMETHOD(GetSize)(int* pnNumThreads);
```  
  
### <a name="parameters"></a>Parametri  
 `pnNumThreads`  
 [out] Indirizzo della variabile che, in caso di riuscita, riceve il numero di thread nel pool.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#134; NVC_ATL_Utilities](../../atl/codesnippet/cpp/ithreadpoolconfig-interface_1.cpp)]  
  
##  <a name="a-namegettimeouta--ithreadpoolconfiggettimeout"></a><a name="gettimeout"></a>IThreadPoolConfig::GetTimeout  
 Chiamare questo metodo per ottenere il tempo massimo in millisecondi di attesa per un thread arrestare il pool di thread.  
  
```
STDMETHOD(GetTimeout)(DWORD* pdwMaxWait);
```  
  
### <a name="parameters"></a>Parametri  
 `pdwMaxWait`  
 [out] Indirizzo della variabile che, in caso di riuscita, riceve il tempo massimo in millisecondi che il pool di thread attenderà per un thread chiuso.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="example"></a>Esempio  
 Vedere [IThreadPoolConfig::GetSize](#getsize).  
  
##  <a name="a-namesetsizea--ithreadpoolconfigsetsize"></a><a name="setsize"></a>IThreadPoolConfig::SetSize  
 Chiamare questo metodo per impostare il numero di thread nel pool.  
  
```
STDMETHOD(SetSize)int nNumThreads);
```  
  
### <a name="parameters"></a>Parametri  
 `nNumThreads`  
 Il numero richiesto di thread nel pool.  
  
 Se `nNumThreads` è negativo, il valore assoluto corrispondente verrà moltiplicato per il numero di processori del computer per ottenere il numero totale di thread.  
  
 Se `nNumThreads` è zero, [ATLS_DEFAULT_THREADSPERPROC](http://msdn.microsoft.com/library/e0dcf107-72a9-4122-abb4-83c63aa7d571) verrà moltiplicata per il numero di processori del computer per ottenere il numero totale di thread.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="example"></a>Esempio  
 Vedere [IThreadPoolConfig::GetSize](#getsize).  
  
##  <a name="a-namesettimeouta--ithreadpoolconfigsettimeout"></a><a name="settimeout"></a>IThreadPoolConfig::SetTimeout  
 Chiamare questo metodo per impostare il tempo massimo in millisecondi che il pool di thread attenderà per un thread chiuso.  
  
```
STDMETHOD(SetTimeout)(DWORD dwMaxWait);
```  
  
### <a name="parameters"></a>Parametri  
 `dwMaxWait`  
 Il tempo massimo richiesto in millisecondi che il pool di thread attenderà per un thread chiuso.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="example"></a>Esempio  
 Vedere [IThreadPoolConfig::GetSize](#getsize).  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../atl/reference/atl-classes.md)   
 [CThreadPool (classe)](../../atl/reference/cthreadpool-class.md)

