---
title: Funzioni globali della mappa COMCOM Map Global Functions
ms.date: 11/04/2016
f1_keywords:
- atlbase/ATL::AtlInternalQueryInterface
- atlbase/ATL::InlineIsEqualIUnknown
helpviewer_keywords:
- COM interfaces, COM map global functions
ms.assetid: b9612d30-eb23-46ef-8093-d56f237d3cf1
ms.openlocfilehash: c4ce7c7a68c0744ad65ef4914088fa12d3340628
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326688"
---
# <a name="com-map-global-functions"></a>Funzioni globali della mappa COMCOM Map Global Functions

Queste funzioni forniscono `IUnknown` il supporto per le implementazioni della mappa COM.

|||
|-|-|
|[AtlInternalQueryInterface](#atlinternalqueryinterface)|Delega a `IUnknown` un oggetto non aggregato.|
|[InlineIsEqualIUnknown](#inlineisequaliunknown)|Genera codice efficiente per `IUnknown`il confronto delle interfacce con .|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="atlinternalqueryinterface"></a><a name="atlinternalqueryinterface"></a>AtlInternalQueryInterface (interfaccia utente

Recupera un puntatore all'interfaccia richiesta.

```
HRESULT AtlInternalQueryInterface(
    void* pThis,
    const _ATL_INTMAP_ENTRY* pEntries,
    REFIID iid,
    void** ppvObject);
```

### <a name="parameters"></a>Parametri

*pQuesto*<br/>
[in] Puntatore all'oggetto che contiene la mappa `QueryInterface`COM delle interfacce esposte a .

*pVoci*<br/>
[in] Matrice di `_ATL_INTMAP_ENTRY` strutture che accedono a una mappa delle interfacce disponibili.

*Iid*<br/>
[in] GUID dell'interfaccia richiesta.

*Oggetto ppv*<br/>
[fuori] Puntatore al puntatore a interfaccia specificato in *iid*o NULL se l'interfaccia non viene trovata.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

`AtlInternalQueryInterface` gestisce solo le interfacce nella tabella di mappe COM. Se l'oggetto è `AtlInternalQueryInterface` aggregato, non delega all'esterno sconosciuto. È possibile immettere interfacce nella tabella mappa COM con la [macro COM_INTERFACE_ENTRY](com-interface-entry-macros.md#com_interface_entry) o una delle relative varianti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#94](../../atl/codesnippet/cpp/com-map-global-functions_1.cpp)]

## <a name="inlineisequaliunknown"></a><a name="inlineisequaliunknown"></a>InlineIsEqualIUnknownInlineIsEqualIUnknown

Chiamare questa funzione, per il `IUnknown`caso speciale di test per .

```
BOOL InlineIsEqualUnknown(REFGUID rguid1);
```

### <a name="parameters"></a>Parametri

*rguid1*<br/>
[in] GUID da confrontare `IID_IUnknown`con .

## <a name="see-also"></a>Vedere anche

[Funzioni](../../atl/reference/atl-functions.md)<br/>
[Macro mappa COM](../../atl/reference/com-map-macros.md)
