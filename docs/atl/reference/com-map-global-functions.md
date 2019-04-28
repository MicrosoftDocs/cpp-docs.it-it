---
title: Funzioni globali di mappa COM
ms.date: 11/04/2016
f1_keywords:
- atlbase/ATL::AtlInternalQueryInterface
- atlbase/ATL::InlineIsEqualIUnknown
helpviewer_keywords:
- COM interfaces, COM map global functions
ms.assetid: b9612d30-eb23-46ef-8093-d56f237d3cf1
ms.openlocfilehash: 75d081674fa4b63e66f1296834d3de305665ab9a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62258416"
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

*pThis*<br/>
[in] Un puntatore all'oggetto che contiene la mappa COM di interfacce esposte a `QueryInterface`.

*pEntries*<br/>
[in] Matrice di `_ATL_INTMAP_ENTRY` strutture che accedono a una mappa delle interfacce disponibili.

*iid*<br/>
[in] Il GUID dell'interfaccia richiesto.

*ppvObject*<br/>
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

*rguid1*<br/>
[in] Il GUID da confrontare con `IID_IUnknown`.

## <a name="see-also"></a>Vedere anche

[Funzioni](../../atl/reference/atl-functions.md)<br/>
[Macro di mappa COM](../../atl/reference/com-map-macros.md)
