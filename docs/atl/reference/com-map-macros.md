---
title: Macro mappa COM
ms.date: 11/04/2016
f1_keywords:
- atlcom/ATL::BEGIN_COM_MAP
- atlcom/ATL::END_COM_MAP
helpviewer_keywords:
- COM interfaces, COM map macros
ms.assetid: 0f33656d-321f-4996-90cc-9a7f21ab73c3
ms.openlocfilehash: 3159a53b5a500aa61b85cf2bc5a97d321ed6ebb5
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78864931"
---
# <a name="com-map-macros"></a>Macro mappa COM

Queste macro definiscono le mappe dell'interfaccia COM.

|||
|-|-|
|[BEGIN_COM_MAP](#begin_com_map)|Contrassegna l'inizio delle voci della mappa dell'interfaccia COM.|
|[END_COM_MAP](#end_com_map)|Contrassegna la fine delle voci della mappa dell'interfaccia COM.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="begin_com_map"></a>BEGIN_COM_MAP

La mappa COM è il meccanismo che espone le interfacce di un oggetto a un client tramite `QueryInterface`.

```
BEGIN_COM_MAP(x)
```

### <a name="parameters"></a>Parametri

*x*<br/>
in Nome dell'oggetto classe in cui si stanno esponendo le interfacce.

### <a name="remarks"></a>Osservazioni

[CComObjectRootEx:: InternalQueryInterface](ccomobjectrootex-class.md#internalqueryinterface) restituisce solo i puntatori per le interfacce nella mappa com. Avviare la mappa dell'interfaccia con la macro BEGIN_COM_MAP, aggiungere voci per ogni interfaccia con la macro [COM_INTERFACE_ENTRY](com-interface-entry-macros.md#com_interface_entry) o una delle relative varianti e completare la mappa con la macro [END_COM_MAP](#end_com_map) .

### <a name="example"></a>Esempio

Dall'esempio di [beeper](../../overview/visual-cpp-samples.md) ATL:

[!code-cpp[NVC_ATL_COM#1](../../atl/codesnippet/cpp/com-map-macros_1.h)]

##  <a name="end_com_map"></a>END_COM_MAP

Termina la definizione della mappa dell'interfaccia COM.

```
END_COM_MAP()
```

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)<br/>
[Funzioni globali di mappa COM](../../atl/reference/com-map-global-functions.md)
