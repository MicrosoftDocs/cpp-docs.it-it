---
title: Funzioni globali del punto di connessione | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- connection points [C++], global functions
ms.assetid: bcb4bf50-2155-4e20-b8bb-f2908b03a6e7
caps.latest.revision: 20
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
ms.openlocfilehash: 8271f512141e4d2cc274d180b31e1ad33bfc354e
ms.lasthandoff: 02/24/2017

---
# <a name="connection-point-global-functions"></a>Funzioni globali del punto di connessione
Queste funzioni forniscono il supporto per i punti di connessione e mappe del sink.  
  
> [!IMPORTANT]
>  Le funzioni elencate nella tabella seguente non possono essere utilizzate nelle applicazioni eseguite nel [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
|||  
|-|-|  
|[AtlAdvise](#atladvise)|Crea una connessione tra il punto di connessione di un oggetto e il sink di un client.|  
|[AtlUnadvise](#atlunadvise)|Termina la connessione stabilita tramite `AtlAdvise`.|  
|[AtlAdviseSinkMap](#atladvisesinkmap)|Informa o unadvises voci in una mappa del sink di evento.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
   
##  <a name="a-nameatladvisea--atladvise"></a><a name="atladvise"></a>AtlAdvise  
 Crea una connessione tra il punto di connessione di un oggetto e il sink di un client.  
  
> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite nel [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
HRESULT    AtlAdvise(
    IUnknown* pUnkCP,
    IUnknown* pUnk,
    const IID& iid,
    LPDWORD pdw);
```  
  
### <a name="parameters"></a>Parametri  
 `pUnkCP`  
 [in] Un puntatore per il **IUnknown** dell'oggetto desidera connettersi con il client.  
  
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
 [!code-cpp[NVC_ATL_Windowing&#91;](../../atl/codesnippet/cpp/connection-point-global-functions_1.cpp)]  
  
##  <a name="a-nameatlunadvisea--atlunadvise"></a><a name="atlunadvise"></a>AtlUnadvise  
 Termina la connessione stabilita tramite [AtlAdvise](#atladvise).  
  
> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite nel [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
HRESULT    AtlUnadvise(
    IUnknown* pUnkCP,
    const IID& iid,
    DWORD dw);
```  
  
### <a name="parameters"></a>Parametri  
 `pUnkCP`  
 [in] Un puntatore per il **IUnknown** dell'oggetto che il client è connesso con.  
  
 `iid`  
 [in] Il GUID del punto di connessione. In genere, questo è lo stesso come interfaccia in uscita gestita dal punto di connessione.  
  
 `dw`  
 [in] Cookie che identifica in modo univoco la connessione.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#96; NVC_ATL_Windowing](../../atl/codesnippet/cpp/connection-point-global-functions_2.cpp)]  
  
##  <a name="a-nameatladvisesinkmapa--atladvisesinkmap"></a><a name="atladvisesinkmap"></a>AtlAdviseSinkMap  
 Chiamare questa funzione per inviare o annullare gli avvisi per tutte le voci della mappa eventi sink dell'oggetto.  
  
> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite nel [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
HRESULT AtlAdviseSinkMap(T* pT, bool bAdvise);
```  
  
### <a name="parameters"></a>Parametri  
 *pT*  
 [in] Puntatore all'oggetto che contiene la mappa di sink.  
  
 `bAdvise`  
 [in] **true** se tutte le voci di sink devono essere informato; **false** se devono essere unadvised tutte le voci di sink.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing&#92;](../../atl/codesnippet/cpp/connection-point-global-functions_3.h)]  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../atl/reference/atl-functions.md)   
 [Macro di punto di connessione](../../atl/reference/connection-point-macros.md)

