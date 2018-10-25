---
title: Macro di mappa COM | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- atlcom/ATL::BEGIN_COM_MAP
- atlcom/ATL::END_COM_MAP
dev_langs:
- C++
helpviewer_keywords:
- COM interfaces, COM map macros
ms.assetid: 0f33656d-321f-4996-90cc-9a7f21ab73c3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 057652eaf1f188cfd61dcfa4a0d433a43ef8c56c
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50068892"
---
# <a name="com-map-macros"></a>Macro di mappa COM

Queste macro definiscono mappe dell'interfaccia COM.

|||
|-|-|
|[BEGIN_COM_MAP](#begin_com_map)|Contrassegna l'inizio delle voci della mappa dell'interfaccia COM.|
|[END_COM_MAP](#end_com_map)|Contrassegna la fine delle voci della mappa dell'interfaccia COM.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="begin_com_map"></a>  BEGIN_COM_MAP

La mappa COM è il meccanismo che espone le interfacce in un oggetto a un client tramite `QueryInterface`.

```
BEGIN_COM_MAP(x)
```

### <a name="parameters"></a>Parametri

*x*<br/>
[in] Il nome dell'oggetto di classe in che si siano esponendo le interfacce.

### <a name="remarks"></a>Note

[CComObjectRootEx:: InternalQueryInterface](ccomobjectrootex-class.md#internalqueryinterface) restituisce solo i puntatori per le interfacce nella mappa COM. Avviare la mappa dell'interfaccia con la macro BEGIN_COM_MAP, aggiungere le voci per ognuna delle interfacce con la [COM_INTERFACE_ENTRY](com-interface-entry-macros.md#com_interface_entry) macro o una delle relative varianti e completare la mappa con il [END_COM_MAP](#end_com_map) macro.

### <a name="example"></a>Esempio

Da ATL [CERCAPERSONE](../../visual-cpp-samples.md) esempio:

[!code-cpp[NVC_ATL_COM#1](../../atl/codesnippet/cpp/com-map-macros_1.h)]

##  <a name="end_com_map"></a>  END_COM_MAP

Termina la definizione della mappa dell'interfaccia COM.

```
END_COM_MAP()
```

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)<br/>
[Funzioni globali di mappa COM](../../atl/reference/com-map-global-functions.md)
