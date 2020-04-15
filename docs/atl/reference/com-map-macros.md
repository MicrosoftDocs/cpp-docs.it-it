---
title: Macro mappa COM
ms.date: 11/04/2016
f1_keywords:
- atlcom/ATL::BEGIN_COM_MAP
- atlcom/ATL::END_COM_MAP
helpviewer_keywords:
- COM interfaces, COM map macros
ms.assetid: 0f33656d-321f-4996-90cc-9a7f21ab73c3
ms.openlocfilehash: 191a0ba0aeda6ad18cdac7ba14f7ab5f3b2282f7
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326607"
---
# <a name="com-map-macros"></a>Macro mappa COM

Queste macro definiscono le mappe dell'interfaccia COM.

|||
|-|-|
|[BEGIN_COM_MAP](#begin_com_map)|Contrassegna l'inizio delle voci della mappa dell'interfaccia COM.|
|[END_COM_MAP](#end_com_map)|Contrassegna la fine delle voci della mappa dell'interfaccia COM.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="begin_com_map"></a><a name="begin_com_map"></a>BEGIN_COM_MAP

La mappa COM è il meccanismo che espone le `QueryInterface`interfacce su un oggetto a un client tramite .

```
BEGIN_COM_MAP(x)
```

### <a name="parameters"></a>Parametri

*X*<br/>
[in] Nome dell'oggetto classe su cui si espongono le interfacce.

### <a name="remarks"></a>Osservazioni

[CComObjectRootEx::InternalQueryInterface](ccomobjectrootex-class.md#internalqueryinterface) restituisce solo puntatori per le interfacce nella mappa COM. Iniziare la mappa dell'interfaccia con la macro BEGIN_COM_MAP, aggiungere voci per ciascuna delle interfacce con la macro [COM_INTERFACE_ENTRY](com-interface-entry-macros.md#com_interface_entry) o una delle relative varianti e completare la mappa con la macro [END_COM_MAP.](#end_com_map)

### <a name="example"></a>Esempio

Dall'esempio ATL [BEEPER:](../../overview/visual-cpp-samples.md)

[!code-cpp[NVC_ATL_COM#1](../../atl/codesnippet/cpp/com-map-macros_1.h)]

## <a name="end_com_map"></a><a name="end_com_map"></a>END_COM_MAP

Termina la definizione della mappa dell'interfaccia COM.

```
END_COM_MAP()
```

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)<br/>
[Funzioni globali della mappa COMCOM Map Global Functions](../../atl/reference/com-map-global-functions.md)
