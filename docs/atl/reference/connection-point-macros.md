---
title: Macro dei punti di connessione
ms.date: 11/04/2016
f1_keywords:
- atlcom/ATL::BEGIN_CONNECTION_POINT_MAP
- atlcom/ATL::END_CONNECTION_POINT_MAP
helpviewer_keywords:
- connection points [C++], macros
ms.assetid: cc3a6dd3-5538-45df-b027-1f34963c31e5
ms.openlocfilehash: 361cf6ab2c7af142c1d57c002681ccf6e4a87bda
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81331488"
---
# <a name="connection-point-macros"></a>Macro dei punti di connessione

Queste macro definiscono le mappe e le voci dei punti di connessione.

|||
|-|-|
|[BEGIN_CONNECTION_POINT_MAP](#begin_connection_point_map)|Contrassegna l'inizio delle voci della mappa dei punti di connessione.|
|[CONNECTION_POINT_ENTRY](#connection_point_entry)|Inserisce i punti di connessione nella mappa.|
|[CONNECTION_POINT_ENTRY_P](#connection_point_entry)| (Visual Studio 2017) Simile a CONNECTION_POINT_ENTRY ma accetta un puntatore a iid.|
|[END_CONNECTION_POINT_MAP](#end_connection_point_map)|Contrassegna la fine delle voci della mappa dei punti di connessione.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="begin_connection_point_map"></a><a name="begin_connection_point_map"></a>BEGIN_CONNECTION_POINT_MAP

Contrassegna l'inizio delle voci della mappa dei punti di connessione.

```
BEGIN_CONNECTION_POINT_MAP(x)
```

### <a name="parameters"></a>Parametri

*X*<br/>
[in] Nome della classe contenente i punti di connessione.

### <a name="remarks"></a>Osservazioni

Iniziare la mappa dei punti di connessione con la macro BEGIN_CONNECTION_POINT_MAP, aggiungere voci per ognuno dei punti di connessione con la macro [CONNECTION_POINT_ENTRY](#connection_point_entry) e completare la mappa con la macro [END_CONNECTION_POINT_MAP.](#end_connection_point_map)

Per ulteriori informazioni sui punti di connessione in ATL, vedere l'articolo [Punti di connessione](../../atl/atl-connection-points.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#101](../../atl/codesnippet/cpp/connection-point-macros_1.h)]

## <a name="connection_point_entry-and-connection_point_entry_p"></a><a name="connection_point_entry"></a>CONNECTION_POINT_ENTRY e CONNECTION_POINT_ENTRY_P

Consente di immettere un punto di connessione per l'interfaccia specificata nella mappa dei punti di connessione in modo che sia possibile accedervi.

```
CONNECTION_POINT_ENTRY(iid)
CONNECTION_POINT_ENTRY_P(piid) // (Visual Studio 2017)
```

### <a name="parameters"></a>Parametri

*Iid*<br/>
[in] GUID dell'interfaccia aggiunta alla mappa dei punti di connessione.

*piid*<br/>
[in] Puntatore al GUID dell'interfaccia adde.

### <a name="remarks"></a>Osservazioni

Le voci del punto di connessione nella mappa vengono utilizzate da [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md). La classe contenente la mappa `IConnectionPointContainerImpl`del punto di connessione deve ereditare da .

Iniziare la mappa dei punti di connessione con la macro [BEGIN_CONNECTION_POINT_MAP,](#begin_connection_point_map) aggiungere voci per ognuno dei punti di connessione con la macro CONNECTION_POINT_ENTRY e completare la mappa con la macro [END_CONNECTION_POINT_MAP.](#end_connection_point_map)

Per ulteriori informazioni sui punti di connessione in ATL, vedere l'articolo [Punti di connessione](../../atl/atl-connection-points.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#120](../../atl/codesnippet/cpp/connection-point-macros_2.h)]

## <a name="end_connection_point_map"></a><a name="end_connection_point_map"></a>END_CONNECTION_POINT_MAP

Contrassegna la fine delle voci della mappa dei punti di connessione.

```
END_CONNECTION_POINT_MAP()
```

### <a name="remarks"></a>Osservazioni

Iniziare la mappa dei punti di connessione con la macro [BEGIN_CONNECTION_POINT_MAP,](#begin_connection_point_map) aggiungere voci per ognuno dei punti di connessione con la macro [CONNECTION_POINT_ENTRY](#connection_point_entry) e completare la mappa con la macro END_CONNECTION_POINT_MAP.

Per ulteriori informazioni sui punti di connessione in ATL, vedere l'articolo [Punti di connessione](../../atl/atl-connection-points.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#128](../../atl/codesnippet/cpp/connection-point-macros_3.h)]

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)<br/>
[Funzioni globali dei punti di connessione](../../atl/reference/connection-point-global-functions.md)
