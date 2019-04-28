---
title: Macro di punto di connessione
ms.date: 11/04/2016
f1_keywords:
- atlcom/ATL::BEGIN_CONNECTION_POINT_MAP
- atlcom/ATL::END_CONNECTION_POINT_MAP
helpviewer_keywords:
- connection points [C++], macros
ms.assetid: cc3a6dd3-5538-45df-b027-1f34963c31e5
ms.openlocfilehash: cb8d6f696980ef91d7b43c960dc50289ea8500a6
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62278202"
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

*iid*<br/>
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
