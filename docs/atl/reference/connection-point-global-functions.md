---
title: Funzioni globali del punto di connessione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- atlbase/ATL::AtlAdvise
- atlbase/ATL::AtlUnadvise
- atlbase/ATL::AtlAdviseSinkMap
dev_langs:
- C++
helpviewer_keywords:
- connection points [C++], global functions
ms.assetid: bcb4bf50-2155-4e20-b8bb-f2908b03a6e7
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ce7f6fc3d2a0b51f88952dd720955367b1dfe9d5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="connection-point-global-functions"></a>Funzioni globali del punto di connessione
Queste funzioni forniscono il supporto per i punti di connessione e sink di mappe.  
  
> [!IMPORTANT]
>  Le funzioni elencate nella tabella seguente non possono essere utilizzate nelle applicazioni eseguite in Windows Runtime.  
  
|||  
|-|-|  
|[AtlAdvise](#atladvise)|Crea una connessione tra il punto di connessione di un oggetto e il sink di un client.|  
|[AtlUnadvise](#atlunadvise)|Termina la connessione stabilita tramite `AtlAdvise`.|  
|[AtlAdviseSinkMap](#atladvisesinkmap)|Informa o unadvises voci nella mappa del sink di evento.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
   
##  <a name="atladvise"></a>AtlAdvise  
 Crea una connessione tra il punto di connessione di un oggetto e il sink di un client.  
  
> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite in Windows Runtime.  
  
```
HRESULT    AtlAdvise(
    IUnknown* pUnkCP,
    IUnknown* pUnk,
    const IID& iid,
    LPDWORD pdw);
```  
  
### <a name="parameters"></a>Parametri  
 `pUnkCP`  
 [in] Un puntatore al **IUnknown** dell'oggetto di una connessione con il client.  
  
 *pUnk*  
 [in] Un puntatore al client **IUnknown**.  
  
 `iid`  
 [in] Il GUID del punto di connessione. In genere, questo è lo stesso come interfaccia in uscita gestita dal punto di connessione.  
  
 `pdw`  
 [out] Puntatore al cookie che identifica in modo univoco la connessione.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Il sink implementa l'interfaccia in uscita supportata dal punto di connessione. Il client utilizza il `pdw` cookie per rimuovere la connessione tramite il passaggio al [AtlUnadvise](#atlunadvise).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing#91](../../atl/codesnippet/cpp/connection-point-global-functions_1.cpp)]  
  
##  <a name="atlunadvise"></a>AtlUnadvise  
 Termina la connessione stabilita tramite [AtlAdvise](#atladvise).  
  
> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite in Windows Runtime.  
  
```
HRESULT    AtlUnadvise(
    IUnknown* pUnkCP,
    const IID& iid,
    DWORD dw);
```  
  
### <a name="parameters"></a>Parametri  
 `pUnkCP`  
 [in] Un puntatore al **IUnknown** dell'oggetto con cui è connesso il client.  
  
 `iid`  
 [in] Il GUID del punto di connessione. In genere, questo è lo stesso come interfaccia in uscita gestita dal punto di connessione.  
  
 `dw`  
 [in] Cookie che identifica in modo univoco la connessione.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing#96](../../atl/codesnippet/cpp/connection-point-global-functions_2.cpp)]  
  
##  <a name="atladvisesinkmap"></a>AtlAdviseSinkMap  
 Chiamare questa funzione per inviare o annullare gli avvisi per tutte le voci della mappa eventi sink dell'oggetto.  
  
> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite in Windows Runtime.  
  
```
HRESULT AtlAdviseSinkMap(T* pT, bool bAdvise);
```  
  
### <a name="parameters"></a>Parametri  
 *pT*  
 [in] Un puntatore all'oggetto contenente la mappa di sink.  
  
 `bAdvise`  
 [in] **true** se tutte le voci di sink devono ricevere notifica; **false** se tutte le voci di sink devono essere unadvised.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing#92](../../atl/codesnippet/cpp/connection-point-global-functions_3.h)]  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../atl/reference/atl-functions.md)   
 [Macro di punto di connessione](../../atl/reference/connection-point-macros.md)
