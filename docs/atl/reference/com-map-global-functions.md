---
title: Funzioni globali COM mappa | Documenti di Microsoft
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
- COM interfaces, COM map global functions
ms.assetid: b9612d30-eb23-46ef-8093-d56f237d3cf1
caps.latest.revision: 19
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
ms.openlocfilehash: c37f722267107ad06fb51dc78bd682603161a476
ms.lasthandoff: 02/24/2017

---
# <a name="com-map-global-functions"></a>Funzioni globali della mappa COM
Queste funzioni forniscono il supporto per la mappa COM **IUnknown** implementazioni.  
  
|||  
|-|-|  
|[AtlInternalQueryInterface](#atlinternalqueryinterface)|Delega la **IUnknown** di un oggetto non aggregato.|  
|[InlineIsEqualIUnknown](#inlineisequaliunknown)|Genera un codice efficiente per il confronto tra interfacce con **IUnknown**.|  

  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  

##  <a name="a-nameatlinternalqueryinterfacea--atlinternalqueryinterface"></a><a name="atlinternalqueryinterface"></a>AtlInternalQueryInterface  
 Recupera un puntatore all'interfaccia richiesta.  
  
```
HRESULT AtlInternalQueryInterface(
    void* pThis,
    const _ATL_INTMAP_ENTRY* pEntries,
    REFIID iid,
    void** ppvObject);
```  
  
### <a name="parameters"></a>Parametri  
 `pThis`  
 [in] Un puntatore all'oggetto che contiene la mappa COM interfacce esposte a `QueryInterface`.  
  
 `pEntries`  
 [in] Matrice di **_ATL_INTMAP_ENTRY** strutture che accedono a una mappa delle interfacce disponibili.  
  
 `iid`  
 [in] GUID dell'interfaccia richiesta.  
  
 `ppvObject`  
 [out] Un puntatore a puntatore a interfaccia specificato `iid`, o **NULL** se l'interfaccia non viene trovato.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
### <a name="remarks"></a>Note  
 `AtlInternalQueryInterface` gestisce solo le interfacce nella tabella di mappe COM. Se l'oggetto è aggregato, `AtlInternalQueryInterface` non delegato per l'outer unknown. È possibile immettere le interfacce nella tabella di mappe COM con la macro [COM_INTERFACE_ENTRY](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) o una delle relative varianti.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing&#94;](../../atl/codesnippet/cpp/com-map-global-functions_1.cpp)]  
  
##  <a name="a-nameinlineisequaliunknowna--inlineisequaliunknown"></a><a name="inlineisequaliunknown"></a>InlineIsEqualIUnknown  
 Chiamare questa funzione per il caso speciale di test per **IUnknown**.  
  
```
BOOL InlineIsEqualUnknown(REFGUID rguid1);
```  
  
### <a name="parameters"></a>Parametri  
 *rguid1*  
 [in] Il GUID da confrontare con **IID_IUnknown**.  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../atl/reference/atl-functions.md)   
 [Macro della mappa COM](../../atl/reference/com-map-macros.md)

