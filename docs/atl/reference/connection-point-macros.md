---
title: Macro di punto di connessione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- atlcom/ATL::BEGIN_CONNECTION_POINT_MAP
- atlcom/ATL::END_CONNECTION_POINT_MAP
dev_langs:
- C++
helpviewer_keywords:
- connection points [C++], macros
ms.assetid: cc3a6dd3-5538-45df-b027-1f34963c31e5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a654f820d3c1dcdaa49ed8b3b3203d2c271b6880
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50055482"
---
# <a name="connection-point-macros"></a>Macro di punto di connessione

Queste macro definiscono mappe di punto di connessione e le voci.

|||
|-|-|
|[BEGIN_CONNECTION_POINT_MAP](#begin_connection_point_map)|Contrassegna l'inizio delle voci della mappa del punto di connessione.|
|[CONNECTION_POINT_ENTRY](#connection_point_entry)|Immette i punti di connessione della mappa.|
|[CONNECTION_POINT_ENTRY_P](#connection_point_entry)| (Visual Studio 2017) Analogamente a CONNECTION_POINT_ENTRY ma accetta un puntatore a iid.|
|[END_CONNECTION_POINT_MAP](#end_connection_point_map)|Contrassegna la fine delle voci della mappa del punto di connessione.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="begin_connection_point_map"></a>  BEGIN_CONNECTION_POINT_MAP

Contrassegna l'inizio delle voci della mappa del punto di connessione.

```
BEGIN_CONNECTION_POINT_MAP(x)
```

### <a name="parameters"></a>Parametri

*x*<br/>
[in] Il nome della classe che contiene i punti di connessione.

### <a name="remarks"></a>Note

Avviare la mappa dei punti di connessione con la macro BEGIN_CONNECTION_POINT_MAP, aggiungere le voci per ognuno dei punti di connessione con il [CONNECTION_POINT_ENTRY](#connection_point_entry) (macro) e completare la mappa con il [END_CONNECTION_ POINT_MAP](#end_connection_point_map) macro.

Per altre informazioni sui punti di connessione ATL, vedere l'articolo [punti di connessione](../../atl/atl-connection-points.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#101](../../atl/codesnippet/cpp/connection-point-macros_1.h)]

##  <a name="connection_point_entry"></a>  CONNECTION_POINT_ENTRY e CONNECTION_POINT_ENTRY_P

Inserisce un punto di connessione per l'interfaccia specificata nell'oggetto map di punto di connessione in modo che sia accessibile.

```
CONNECTION_POINT_ENTRY(iid)
CONNECTION_POINT_ENTRY_P(piid) // (Visual Studio 2017)
```

### <a name="parameters"></a>Parametri

*IID*<br/>
[in] Il GUID dell'interfaccia da aggiungere alla mappa del punto di connessione.

*piid*<br/>
[in] Puntatore al GUID dell'interfaccia in fase di adde.

### <a name="remarks"></a>Note

Le voci di punto di connessione nella mappa vengono utilizzate da [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md). La classe che contiene la mappa dei punti di connessione deve ereditare da `IConnectionPointContainerImpl`.

Avviare la mappa dei punti di connessione con il [BEGIN_CONNECTION_POINT_MAP](#begin_connection_point_map) macro, aggiungere le voci per ognuno dei punti di connessione con la macro CONNECTION_POINT_ENTRY e completare la mappa con il [END_CONNECTION_ POINT_MAP](#end_connection_point_map) macro.

Per altre informazioni sui punti di connessione ATL, vedere l'articolo [punti di connessione](../../atl/atl-connection-points.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#120](../../atl/codesnippet/cpp/connection-point-macros_2.h)]

##  <a name="end_connection_point_map"></a>  END_CONNECTION_POINT_MAP

Contrassegna la fine delle voci della mappa del punto di connessione.

```
END_CONNECTION_POINT_MAP()
```

### <a name="remarks"></a>Note

Avviare la mappa dei punti di connessione con il [BEGIN_CONNECTION_POINT_MAP](#begin_connection_point_map) macro, aggiungere le voci per ognuno dei punti di connessione con il [CONNECTION_POINT_ENTRY](#connection_point_entry) (macro) e completare la mappa con il END_ Macro CONNECTION_POINT_MAP.

Per altre informazioni sui punti di connessione ATL, vedere l'articolo [punti di connessione](../../atl/atl-connection-points.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#128](../../atl/codesnippet/cpp/connection-point-macros_3.h)]

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)<br/>
[Funzioni globali del punto di connessione](../../atl/reference/connection-point-global-functions.md)
