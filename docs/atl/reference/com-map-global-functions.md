---
title: Funzioni globali COM mappa | Documenti Microsoft
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
ms.sourcegitcommit: d2d39abf526a58b8442107b5ee816f316ae841f5
ms.openlocfilehash: d6f23de1a5fd13d61d376acded35f9217d0a898d
ms.lasthandoff: 03/31/2017

---
# <a name="com-map-global-functions"></a>Funzioni globali COM mappa
Queste funzioni forniscono il supporto per la mappa COM **IUnknown** implementazioni.  
  
|||  
|-|-|  
|[AtlInternalQueryInterface](#atlinternalqueryinterface)|Delega al **IUnknown** di un oggetto non aggregato.|  
|[InlineIsEqualIUnknown](#inlineisequaliunknown)|Genera un codice efficiente per il confronto tra interfacce con **IUnknown**.|  

  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  

##  <a name="atlinternalqueryinterface"></a>AtlInternalQueryInterface  
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
 [in] Un puntatore all'oggetto che contiene la mappa COM di interfacce esposte a `QueryInterface`.  
  
 `pEntries`  
 [in] Matrice di **_ATL_INTMAP_ENTRY** strutture che accedono a una mappa delle interfacce disponibili.  
  
 `iid`  
 [in] Il GUID dell'interfaccia richiesto.  
  
 `ppvObject`  
 [out] Un puntatore a puntatore a interfaccia specificato `iid`, o **NULL** se l'interfaccia non viene trovato.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori HRESULT standard.  
  
### <a name="remarks"></a>Note  
 `AtlInternalQueryInterface` gestisce solo le interfacce nella tabella di mappe COM. Se l'oggetto è aggregato, `AtlInternalQueryInterface` non delegare unknown esterno. È possibile immettere le interfacce nella tabella di mappe COM con la macro [COM_INTERFACE_ENTRY](com-interface-entry-macros.md#com_interface_entry) o una delle relative varianti.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing #94](../../atl/codesnippet/cpp/com-map-global-functions_1.cpp)]  
  
##  <a name="inlineisequaliunknown"></a>InlineIsEqualIUnknown  
 Chiamare questa funzione per il caso speciale di test per **IUnknown**.  
  
```
BOOL InlineIsEqualUnknown(REFGUID rguid1);
```  
  
### <a name="parameters"></a>Parametri  
 *rguid1*  
 [in] Il GUID da confrontare con **IID_IUnknown**.  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../atl/reference/atl-functions.md)   
 [Macro di mappa COM](../../atl/reference/com-map-macros.md)

