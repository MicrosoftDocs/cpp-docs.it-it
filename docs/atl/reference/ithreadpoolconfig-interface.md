---
title: Interfaccia IThreadPoolConfig | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- IThreadPoolConfig
- ATLUTIL/ATL::IThreadPoolConfig
- ATLUTIL/ATL::GetSize
- ATLUTIL/ATL::GetTimeout
- ATLUTIL/ATL::SetSize
- ATLUTIL/ATL::SetTimeout
dev_langs:
- C++
helpviewer_keywords:
- IThreadPoolConfig interface
ms.assetid: 69e642bf-6925-46e6-9a37-cce52231b1cc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 935175f522dd0b41851763f7b76781228c1881c0
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37880154"
---
# <a name="ithreadpoolconfig-interface"></a>Interfaccia IThreadPoolConfig
Questa interfaccia fornisce metodi per la configurazione di un pool di thread.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.  
  
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
|[SetTimeout](#settimeout)|Chiamare questo metodo per impostare il tempo massimo in millisecondi di attesa per un thread arrestare il pool di thread.|  
  
## <a name="remarks"></a>Note  
 Questa interfaccia viene implementata da [CThreadPool](../../atl/reference/cthreadpool-class.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlutil. h  
  
##  <a name="getsize"></a>  IThreadPoolConfig::GetSize  
 Chiamare questo metodo per ottenere il numero di thread nel pool.  
  
```
STDMETHOD(GetSize)(int* pnNumThreads);
```  
  
### <a name="parameters"></a>Parametri  
 *pnNumThreads*  
 [out] Indirizzo della variabile che, in caso di esito positivo riceve il numero di thread nel pool.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#134](../../atl/codesnippet/cpp/ithreadpoolconfig-interface_1.cpp)]  
  
##  <a name="gettimeout"></a>  IThreadPoolConfig::GetTimeout  
 Chiamare questo metodo per ottenere il tempo massimo in millisecondi di attesa per un thread arrestare il pool di thread.  
  
```
STDMETHOD(GetTimeout)(DWORD* pdwMaxWait);
```  
  
### <a name="parameters"></a>Parametri  
 *pdwMaxWait*  
 [out] Indirizzo della variabile che, in caso di esito positivo riceve il tempo massimo in millisecondi di attesa per un thread arrestare il pool di thread.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
### <a name="example"></a>Esempio  
 Visualizzare [IThreadPoolConfig::GetSize](#getsize).  
  
##  <a name="setsize"></a>  IThreadPoolConfig::SetSize  
 Chiamare questo metodo per impostare il numero di thread nel pool.  
  
```
STDMETHOD(SetSize)int nNumThreads);
```  
  
### <a name="parameters"></a>Parametri  
 *nNumThreads*  
 Il numero richiesto di thread nel pool.  
  
 Se *nNumThreads* è negativo, il valore assoluto corrispondente verrà moltiplicato per il numero di processori del computer per ottenere il numero totale di thread.  
  
 Se *nNumThreads* è uguale a zero, [ATLS_DEFAULT_THREADSPERPROC](http://msdn.microsoft.com/library/e0dcf107-72a9-4122-abb4-83c63aa7d571) verrà moltiplicata per il numero di processori del computer per ottenere il numero totale di thread.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
### <a name="example"></a>Esempio  
 Visualizzare [IThreadPoolConfig::GetSize](#getsize).  
  
##  <a name="settimeout"></a>  IThreadPoolConfig::SetTimeout  
 Chiamare questo metodo per impostare il tempo massimo in millisecondi di attesa per un thread arrestare il pool di thread.  
  
```
STDMETHOD(SetTimeout)(DWORD dwMaxWait);
```  
  
### <a name="parameters"></a>Parametri  
 *dwMaxWait*  
 Il tempo massimo richiesto in millisecondi di attesa per un thread arrestare il pool di thread.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
### <a name="example"></a>Esempio  
 Visualizzare [IThreadPoolConfig::GetSize](#getsize).  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../atl/reference/atl-classes.md)   
 [Classe CThreadPool](../../atl/reference/cthreadpool-class.md)
