---
title: Macro del punto di connessione
ms.date: 11/04/2016
f1_keywords:
- atlcom/ATL::BEGIN_CONNECTION_POINT_MAP
- atlcom/ATL::END_CONNECTION_POINT_MAP
helpviewer_keywords:
- connection points [C++], macros
ms.assetid: cc3a6dd3-5538-45df-b027-1f34963c31e5
ms.openlocfilehash: cb8d6f696980ef91d7b43c960dc50289ea8500a6
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78872486"
---
# <a name="connection-point-macros"></a>Macro del punto di connessione

Queste macro definiscono le mappe e le voci dei punti di connessione.

|||
|-|-|
|[BEGIN_CONNECTION_POINT_MAP](#begin_connection_point_map)|Contrassegna l'inizio delle voci della mappa del punto di connessione.|
|[CONNECTION_POINT_ENTRY](#connection_point_entry)|Immette i punti di connessione nella mappa.|
|[CONNECTION_POINT_ENTRY_P](#connection_point_entry)| (Visual Studio 2017) Simile a CONNECTION_POINT_ENTRY ma accetta un puntatore a IID.|
|[END_CONNECTION_POINT_MAP](#end_connection_point_map)|Contrassegna la fine delle voci della mappa del punto di connessione.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="begin_connection_point_map"></a>BEGIN_CONNECTION_POINT_MAP

Contrassegna l'inizio delle voci della mappa del punto di connessione.

```
BEGIN_CONNECTION_POINT_MAP(x)
```

### <a name="parameters"></a>Parametri

*x*<br/>
in Nome della classe che contiene i punti di connessione.

### <a name="remarks"></a>Osservazioni

Avviare la mappa dei punti di connessione con la macro BEGIN_CONNECTION_POINT_MAP, aggiungere voci per ogni punto di connessione con la macro [CONNECTION_POINT_ENTRY](#connection_point_entry) e completare la mappa con la macro [END_CONNECTION_POINT_MAP](#end_connection_point_map) .

Per ulteriori informazioni sui punti di connessione in ATL, vedere l'articolo [punti di connessione](../../atl/atl-connection-points.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#101](../../atl/codesnippet/cpp/connection-point-macros_1.h)]

##  <a name="connection_point_entry"></a>CONNECTION_POINT_ENTRY e CONNECTION_POINT_ENTRY_P

Immette un punto di connessione per l'interfaccia specificata nel mapping del punto di connessione in modo che sia possibile accedervi.

```
CONNECTION_POINT_ENTRY(iid)
CONNECTION_POINT_ENTRY_P(piid) // (Visual Studio 2017)
```

### <a name="parameters"></a>Parametri

*IID*<br/>
in GUID dell'interfaccia aggiunta alla mappa del punto di connessione.

*pIID*<br/>
in Puntatore al GUID dell'interfaccia aggiunta.

### <a name="remarks"></a>Osservazioni

Le voci dei punti di connessione nella mappa vengono utilizzate da [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md). La classe che contiene la mappa del punto di connessione deve ereditare da `IConnectionPointContainerImpl`.

Avviare la mappa dei punti di connessione con la macro [BEGIN_CONNECTION_POINT_MAP](#begin_connection_point_map) , aggiungere voci per ogni punto di connessione con la macro CONNECTION_POINT_ENTRY e completare la mappa con la macro [END_CONNECTION_POINT_MAP](#end_connection_point_map) .

Per ulteriori informazioni sui punti di connessione in ATL, vedere l'articolo [punti di connessione](../../atl/atl-connection-points.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#120](../../atl/codesnippet/cpp/connection-point-macros_2.h)]

##  <a name="end_connection_point_map"></a>END_CONNECTION_POINT_MAP

Contrassegna la fine delle voci della mappa del punto di connessione.

```
END_CONNECTION_POINT_MAP()
```

### <a name="remarks"></a>Osservazioni

Avviare la mappa dei punti di connessione con la macro [BEGIN_CONNECTION_POINT_MAP](#begin_connection_point_map) , aggiungere voci per ogni punto di connessione con la macro [CONNECTION_POINT_ENTRY](#connection_point_entry) e completare la mappa con la macro END_CONNECTION_POINT_MAP.

Per ulteriori informazioni sui punti di connessione in ATL, vedere l'articolo [punti di connessione](../../atl/atl-connection-points.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#128](../../atl/codesnippet/cpp/connection-point-macros_3.h)]

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)<br/>
[Funzioni globali del punto di connessione](../../atl/reference/connection-point-global-functions.md)
