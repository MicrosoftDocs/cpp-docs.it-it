---
title: Funzioni globali di mappa COM | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- atlbase/ATL::AtlInternalQueryInterface
- atlbase/ATL::InlineIsEqualIUnknown
dev_langs:
- C++
helpviewer_keywords:
- COM interfaces, COM map global functions
ms.assetid: b9612d30-eb23-46ef-8093-d56f237d3cf1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f9d3db2a3d7f673c8e81b1077bcb45e9b8241d37
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43751861"
---
# <a name="com-map-global-functions"></a>Funzioni globali di mappa COM

Queste funzioni forniscono supporto per la mappa COM `IUnknown` implementazioni.

|||
|-|-|
|[AtlInternalQueryInterface](#atlinternalqueryinterface)|Delega la `IUnknown` di un oggetto non aggregato.|
|[InlineIsEqualIUnknown](#inlineisequaliunknown)|Genera codice efficace per il confronto di interfacce con `IUnknown`.|  

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h  

##  <a name="atlinternalqueryinterface"></a>  AtlInternalQueryInterface

Recupera un puntatore all'interfaccia richiesta.

```
HRESULT AtlInternalQueryInterface(
    void* pThis,
    const _ATL_INTMAP_ENTRY* pEntries,
    REFIID iid,
    void** ppvObject);
```

### <a name="parameters"></a>Parametri

*pThis*  
[in] Un puntatore all'oggetto che contiene la mappa COM di interfacce esposte a `QueryInterface`.

*pEntries*  
[in] Matrice di `_ATL_INTMAP_ENTRY` strutture che accedono a una mappa delle interfacce disponibili.

*IID*  
[in] Il GUID dell'interfaccia richiesto.

*ppvObject*  
[out] Un puntatore a puntatore a interfaccia specificato nella *iid*, oppure NULL se l'interfaccia non viene trovato.

### <a name="return-value"></a>Valore restituito

Uno dei valori di HRESULT standard.

### <a name="remarks"></a>Note

`AtlInternalQueryInterface` gestisce solo le interfacce nella tabella di mappe COM. Se l'oggetto è aggregato, `AtlInternalQueryInterface` non delegare a unknown esterno. È possibile inserire le interfacce nella tabella di mappe COM con la macro [COM_INTERFACE_ENTRY](com-interface-entry-macros.md#com_interface_entry) o una delle relative varianti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#94](../../atl/codesnippet/cpp/com-map-global-functions_1.cpp)]

##  <a name="inlineisequaliunknown"></a>  InlineIsEqualIUnknown

Chiamare questa funzione, per il caso speciale di test per `IUnknown`.

```
BOOL InlineIsEqualUnknown(REFGUID rguid1);
```

### <a name="parameters"></a>Parametri

*rguid1*  
[in] Il GUID da confrontare con `IID_IUnknown`.

## <a name="see-also"></a>Vedere anche

[Funzioni](../../atl/reference/atl-functions.md)   
[Macro di mappa COM](../../atl/reference/com-map-macros.md)
