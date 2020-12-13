---
description: 'Altre informazioni su: funzioni globali del punto di connessione'
title: Funzioni globali del punto di connessione
ms.date: 11/04/2016
f1_keywords:
- atlbase/ATL::AtlAdvise
- atlbase/ATL::AtlUnadvise
- atlbase/ATL::AtlAdviseSinkMap
helpviewer_keywords:
- connection points [C++], global functions
ms.assetid: bcb4bf50-2155-4e20-b8bb-f2908b03a6e7
ms.openlocfilehash: 33a9f81b086b572bb31f730e4a6ce1bac0fb45d2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97141141"
---
# <a name="connection-point-global-functions"></a>Funzioni globali del punto di connessione

Queste funzioni forniscono supporto per i punti di connessione e le mappe sink.

> [!IMPORTANT]
> Le funzioni elencate nella tabella seguente non possono essere usate nelle applicazioni eseguite nel Windows Runtime.

|Funzione|Descrizione|
|-|-|
|[AtlAdvise](#atladvise)|Crea una connessione tra il punto di connessione di un oggetto e il sink di un client.|
|[AtlUnadvise](#atlunadvise)|Termina la connessione stabilita tramite `AtlAdvise` .|
|[AtlAdviseSinkMap](#atladvisesinkmap)|Consiglia o Annulla la notifica delle voci in una mappa di sink di evento.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="atladvise"></a><a name="atladvise"></a> AtlAdvise

Crea una connessione tra il punto di connessione di un oggetto e il sink di un client.

> [!IMPORTANT]
> Questa funzione non può essere utilizzata nelle applicazioni eseguite nel Windows Runtime.

```
HRESULT    AtlAdvise(
    IUnknown* pUnkCP,
    IUnknown* pUnk,
    const IID& iid,
    LPDWORD pdw);
```

### <a name="parameters"></a>Parametri

*pUnkCP*<br/>
in Puntatore all' `IUnknown` oggetto dell'oggetto al quale il client desidera connettersi.

*pUnk*<br/>
in Puntatore all'oggetto del client `IUnknown` .

*IID*<br/>
in GUID del punto di connessione. In genere, questo è lo stesso dell'interfaccia in uscita gestita dal punto di connessione.

*PDW*<br/>
out Puntatore al cookie che identifica in modo univoco la connessione.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

Il sink implementa l'interfaccia in uscita supportata dal punto di connessione. Il client usa il cookie *PDW* per rimuovere la connessione passandola a [AtlUnadvise](#atlunadvise).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#91](../../atl/codesnippet/cpp/connection-point-global-functions_1.cpp)]

## <a name="atlunadvise"></a><a name="atlunadvise"></a> AtlUnadvise

Termina la connessione stabilita tramite [AtlAdvise](#atladvise).

> [!IMPORTANT]
> Questa funzione non può essere utilizzata nelle applicazioni eseguite nel Windows Runtime.

```
HRESULT    AtlUnadvise(
    IUnknown* pUnkCP,
    const IID& iid,
    DWORD dw);
```

### <a name="parameters"></a>Parametri

*pUnkCP*<br/>
in Puntatore all' `IUnknown` oggetto dell'oggetto a cui è connesso il client.

*IID*<br/>
in GUID del punto di connessione. In genere, questo è lo stesso dell'interfaccia in uscita gestita dal punto di connessione.

*dw*<br/>
in Cookie che identifica in modo univoco la connessione.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#96](../../atl/codesnippet/cpp/connection-point-global-functions_2.cpp)]

## <a name="atladvisesinkmap"></a><a name="atladvisesinkmap"></a> AtlAdviseSinkMap

Chiamare questa funzione per inviare o annullare gli avvisi per tutte le voci della mappa eventi sink dell'oggetto.

> [!IMPORTANT]
> Questa funzione non può essere utilizzata nelle applicazioni eseguite nel Windows Runtime.

```
HRESULT AtlAdviseSinkMap(T* pT, bool bAdvise);
```

### <a name="parameters"></a>Parametri

*pT*<br/>
in Puntatore all'oggetto che contiene la mappa del sink.

*bAdvise*<br/>
in TRUE se tutte le voci di sink devono essere consigliate; FALSE se tutte le voci di sink devono essere non consigliate.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#92](../../atl/codesnippet/cpp/connection-point-global-functions_3.h)]

## <a name="see-also"></a>Vedi anche

[Funzioni](../../atl/reference/atl-functions.md)<br/>
[Macro del punto di connessione](../../atl/reference/connection-point-macros.md)
