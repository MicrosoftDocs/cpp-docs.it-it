---
title: Funzioni globali del punto di connessione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b85da5991357f1b67c6d2249d854e6084ee48c23
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37884061"
---
# <a name="connection-point-global-functions"></a>Funzioni globali del punto di connessione
Queste funzioni forniscono supporto per i punti di connessione e le mappe di sink.  
  
> [!IMPORTANT]
>  Le funzioni elencate nella tabella seguente non possono essere utilizzate nelle applicazioni eseguite nel Runtime di Windows.  
  
|||  
|-|-|  
|[AtlAdvise](#atladvise)|Crea una connessione tra il punto di connessione di un oggetto e il sink di un client.|  
|[AtlUnadvise](#atlunadvise)|Termina la connessione stabilita tramite `AtlAdvise`.|  
|[AtlAdviseSinkMap](#atladvisesinkmap)|Avvisa o Annulla l'avviso di voci nella mappa del sink di evento.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
   
##  <a name="atladvise"></a>  AtlAdvise  
 Crea una connessione tra il punto di connessione di un oggetto e il sink di un client.  
  
> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite nel Runtime di Windows.  
  
```
HRESULT    AtlAdvise(
    IUnknown* pUnkCP,
    IUnknown* pUnk,
    const IID& iid,
    LPDWORD pdw);
```  
  
### <a name="parameters"></a>Parametri  
 *pUnkCP*  
 [in] Un puntatore al `IUnknown` dell'oggetto desidera connettersi con il client.  
  
 *pUnk*  
 [in] Un puntatore al client `IUnknown`.  
  
 *IID*  
 [in] Il GUID del punto di connessione. In genere, questo è lo stesso come interfaccia in uscita gestita dal punto di connessione.  
  
 *PDW*  
 [out] Puntatore a cookie che identifica in modo univoco la connessione.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Il sink implementa l'interfaccia in uscita dal punto di connessione è supportata. Il client usa la *pdw* cookie per rimuovere la connessione passando a [AtlUnadvise](#atlunadvise).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing#91](../../atl/codesnippet/cpp/connection-point-global-functions_1.cpp)]  
  
##  <a name="atlunadvise"></a>  AtlUnadvise  
 Termina la connessione stabilita tramite [AtlAdvise](#atladvise).  
  
> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite nel Runtime di Windows.  
  
```
HRESULT    AtlUnadvise(
    IUnknown* pUnkCP,
    const IID& iid,
    DWORD dw);
```  
  
### <a name="parameters"></a>Parametri  
 *pUnkCP*  
 [in] Un puntatore al `IUnknown` dell'oggetto che il client è connesso con.  
  
 *IID*  
 [in] Il GUID del punto di connessione. In genere, questo è lo stesso come interfaccia in uscita gestita dal punto di connessione.  
  
 *dw*  
 [in] Cookie che identifica in modo univoco la connessione.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing#96](../../atl/codesnippet/cpp/connection-point-global-functions_2.cpp)]  
  
##  <a name="atladvisesinkmap"></a>  AtlAdviseSinkMap  
 Chiamare questa funzione per inviare o annullare gli avvisi per tutte le voci della mappa eventi sink dell'oggetto.  
  
> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite nel Runtime di Windows.  
  
```
HRESULT AtlAdviseSinkMap(T* pT, bool bAdvise);
```  
  
### <a name="parameters"></a>Parametri  
 *pT*  
 [in] Un puntatore all'oggetto che contiene la mappa di sink.  
  
 *bAdvise*  
 [in] TRUE se tutte le voci di sink a cui annunciare; FALSE se devono essere annullare tutte le voci di sink.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing#92](../../atl/codesnippet/cpp/connection-point-global-functions_3.h)]  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../atl/reference/atl-functions.md)   
 [Macro di punto di connessione](../../atl/reference/connection-point-macros.md)
