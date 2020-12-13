---
description: 'Altre informazioni su: COM map Global Functions'
title: Funzioni globali della mappa COM
ms.date: 11/04/2016
f1_keywords:
- atlbase/ATL::AtlInternalQueryInterface
- atlbase/ATL::InlineIsEqualIUnknown
helpviewer_keywords:
- COM interfaces, COM map global functions
ms.assetid: b9612d30-eb23-46ef-8093-d56f237d3cf1
ms.openlocfilehash: ee502a68a0a3b21849d2fabdadcc9ecbbcc1602d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97141336"
---
# <a name="com-map-global-functions"></a>Funzioni globali della mappa COM

Queste funzioni forniscono supporto per le implementazioni della mappa COM `IUnknown` .

|Funzione|Descrizione|
|-|-|
|[AtlInternalQueryInterface](#atlinternalqueryinterface)|Delega a `IUnknown` di un oggetto non aggregato.|
|[InlineIsEqualIUnknown](#inlineisequaliunknown)|Genera codice efficiente per confrontare le interfacce con `IUnknown` .|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="atlinternalqueryinterface"></a><a name="atlinternalqueryinterface"></a> AtlInternalQueryInterface

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
in Puntatore all'oggetto che contiene la mappa COM delle interfacce esposte a `QueryInterface` .

*pEntries*<br/>
in Matrice di `_ATL_INTMAP_ENTRY` strutture che accedono a una mappa delle interfacce disponibili.

*IID*<br/>
in GUID dell'interfaccia richiesta.

*ppvObject*<br/>
out Puntatore al puntatore a interfaccia specificato in *IID* oppure null se l'interfaccia non viene trovata.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Commenti

`AtlInternalQueryInterface` gestisce solo le interfacce nella tabella di mappe COM. Se l'oggetto è aggregato, non `AtlInternalQueryInterface` delega al sconosciuto esterno. È possibile immettere interfacce nella tabella della mappa COM con la macro [COM_INTERFACE_ENTRY](com-interface-entry-macros.md#com_interface_entry) o una delle relative varianti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#94](../../atl/codesnippet/cpp/com-map-global-functions_1.cpp)]

## <a name="inlineisequaliunknown"></a><a name="inlineisequaliunknown"></a> InlineIsEqualIUnknown

Chiamare questa funzione per il caso speciale di test di `IUnknown` .

```
BOOL InlineIsEqualUnknown(REFGUID rguid1);
```

### <a name="parameters"></a>Parametri

*rguid1*<br/>
in GUID con cui eseguire il confronto `IID_IUnknown` .

## <a name="see-also"></a>Vedi anche

[Funzioni](../../atl/reference/atl-functions.md)<br/>
[Macro mappa COM](../../atl/reference/com-map-macros.md)
