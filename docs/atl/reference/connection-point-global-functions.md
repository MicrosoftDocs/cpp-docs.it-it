---
title: Funzioni globali dei punti di connessione
ms.date: 11/04/2016
f1_keywords:
- atlbase/ATL::AtlAdvise
- atlbase/ATL::AtlUnadvise
- atlbase/ATL::AtlAdviseSinkMap
helpviewer_keywords:
- connection points [C++], global functions
ms.assetid: bcb4bf50-2155-4e20-b8bb-f2908b03a6e7
ms.openlocfilehash: 6474297f8b9adf04541f7d232fb88d5e52d4e88c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81331525"
---
# <a name="connection-point-global-functions"></a>Funzioni globali dei punti di connessione

Queste funzioni forniscono supporto per i punti di connessione e le mappe sink.

> [!IMPORTANT]
> Le funzioni elencate nella tabella seguente non possono essere utilizzate nelle applicazioni eseguite in Windows Runtime.

|||
|-|-|
|[AtlAdvise](#atladvise)|Crea una connessione tra il punto di connessione di un oggetto e il sink di un client.|
|[AtlUnadvise](#atlunadvise)|Termina la connessione `AtlAdvise`stabilita tramite .|
|[AtlAdviseSinkMap](#atladvisesinkmap)|Avvisa o annulla la visualizzazione delle voci in una mappa del sink di evento.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="atladvise"></a><a name="atladvise"></a>AtlAdvise

Crea una connessione tra il punto di connessione di un oggetto e il sink di un client.

> [!IMPORTANT]
> Questa funzione non può essere utilizzata nelle applicazioni eseguite in Windows Runtime.

```
HRESULT    AtlAdvise(
    IUnknown* pUnkCP,
    IUnknown* pUnk,
    const IID& iid,
    LPDWORD pdw);
```

### <a name="parameters"></a>Parametri

*pUnkCP (pUnkCP)*<br/>
[in] Puntatore all'oggetto `IUnknown` con cui il client desidera connettersi.

*Punk*<br/>
[in] Puntatore all'oggetto `IUnknown`.

*Iid*<br/>
[in] GUID del punto di connessione. In genere, si tratta dello stesso interfaccia in uscita gestita dal punto di connessione.

*Pdw*<br/>
[fuori] Puntatore al cookie che identifica in modo univoco la connessione.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Il sink implementa l'interfaccia in uscita supportata dal punto di connessione. Il client utilizza il cookie *pdw* per rimuovere la connessione passandola ad [AtlUnadvise](#atlunadvise).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#91](../../atl/codesnippet/cpp/connection-point-global-functions_1.cpp)]

## <a name="atlunadvise"></a><a name="atlunadvise"></a>AtlUnadvise

Termina la connessione stabilita tramite [AtlAdvise](#atladvise).

> [!IMPORTANT]
> Questa funzione non può essere utilizzata nelle applicazioni eseguite in Windows Runtime.

```
HRESULT    AtlUnadvise(
    IUnknown* pUnkCP,
    const IID& iid,
    DWORD dw);
```

### <a name="parameters"></a>Parametri

*pUnkCP (pUnkCP)*<br/>
[in] Puntatore all'oggetto `IUnknown` con cui è connesso il client.

*Iid*<br/>
[in] GUID del punto di connessione. In genere, si tratta dello stesso interfaccia in uscita gestita dal punto di connessione.

*dw*<br/>
[in] Cookie che identifica in modo univoco la connessione.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#96](../../atl/codesnippet/cpp/connection-point-global-functions_2.cpp)]

## <a name="atladvisesinkmap"></a><a name="atladvisesinkmap"></a>AtlAdviseSinkMap (Mappa di AtlAdviseSinkMap)

Chiamare questa funzione per inviare o annullare gli avvisi per tutte le voci della mappa eventi sink dell'oggetto.

> [!IMPORTANT]
> Questa funzione non può essere utilizzata nelle applicazioni eseguite in Windows Runtime.

```
HRESULT AtlAdviseSinkMap(T* pT, bool bAdvise);
```

### <a name="parameters"></a>Parametri

*Pt*<br/>
[in] Puntatore all'oggetto contenente la mappa sink.

*bConsigli*<br/>
[in] TRUESe tutte le voci di sink devono essere comunicate; FALSE se tutte le voci di sink devono essere annullate.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#92](../../atl/codesnippet/cpp/connection-point-global-functions_3.h)]

## <a name="see-also"></a>Vedere anche

[Funzioni](../../atl/reference/atl-functions.md)<br/>
[Macro dei punti di connessione](../../atl/reference/connection-point-macros.md)
