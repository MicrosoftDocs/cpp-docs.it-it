---
description: 'Altre informazioni su: classe CD2DLinearGradientBrush'
title: Classe CD2DLinearGradientBrush
ms.date: 11/04/2016
f1_keywords:
- CD2DLinearGradientBrush
- AFXRENDERTARGET/CD2DLinearGradientBrush
- AFXRENDERTARGET/CD2DLinearGradientBrush::CD2DLinearGradientBrush
- AFXRENDERTARGET/CD2DLinearGradientBrush::Attach
- AFXRENDERTARGET/CD2DLinearGradientBrush::Create
- AFXRENDERTARGET/CD2DLinearGradientBrush::Destroy
- AFXRENDERTARGET/CD2DLinearGradientBrush::Detach
- AFXRENDERTARGET/CD2DLinearGradientBrush::Get
- AFXRENDERTARGET/CD2DLinearGradientBrush::GetEndPoint
- AFXRENDERTARGET/CD2DLinearGradientBrush::GetStartPoint
- AFXRENDERTARGET/CD2DLinearGradientBrush::SetEndPoint
- AFXRENDERTARGET/CD2DLinearGradientBrush::SetStartPoint
- AFXRENDERTARGET/CD2DLinearGradientBrush::m_LinearGradientBrushProperties
- AFXRENDERTARGET/CD2DLinearGradientBrush::m_pLinearGradientBrush
helpviewer_keywords:
- CD2DLinearGradientBrush [MFC], CD2DLinearGradientBrush
- CD2DLinearGradientBrush [MFC], Attach
- CD2DLinearGradientBrush [MFC], Create
- CD2DLinearGradientBrush [MFC], Destroy
- CD2DLinearGradientBrush [MFC], Detach
- CD2DLinearGradientBrush [MFC], Get
- CD2DLinearGradientBrush [MFC], GetEndPoint
- CD2DLinearGradientBrush [MFC], GetStartPoint
- CD2DLinearGradientBrush [MFC], SetEndPoint
- CD2DLinearGradientBrush [MFC], SetStartPoint
- CD2DLinearGradientBrush [MFC], m_LinearGradientBrushProperties
- CD2DLinearGradientBrush [MFC], m_pLinearGradientBrush
ms.assetid: d4be9ff9-0ea8-45e6-9b8d-f3bc5673cbac
ms.openlocfilehash: b133abe796e609a44d1ebe35a6e6e969c8ee2a68
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97180331"
---
# <a name="cd2dlineargradientbrush-class"></a>Classe CD2DLinearGradientBrush

Wrapper per ID2D1LinearGradientBrush.

## <a name="syntax"></a>Sintassi

```
class CD2DLinearGradientBrush : public CD2DGradientBrush;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DLinearGradientBrush:: CD2DLinearGradientBrush](#cd2dlineargradientbrush)|Costruisce un oggetto CD2DLinearGradientBrush.|
|[CD2DLinearGradientBrush:: ~ CD2DLinearGradientBrush](#_dtorcd2dlineargradientbrush)|Distruttore. Chiamato quando un oggetto pennello sfumatura lineare D2D viene eliminato definitivamente.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DLinearGradientBrush:: Connetti](#attach)|Connette l'interfaccia di risorsa esistente all'oggetto|
|[CD2DLinearGradientBrush:: create](#create)|Crea un CD2DLinearGradientBrush. Esegue l'override di [CD2DResource:: create](../../mfc/reference/cd2dresource-class.md#create).|
|[CD2DLinearGradientBrush::D estroy](#destroy)|Elimina definitivamente un oggetto CD2DLinearGradientBrush. Esegue l'override di [CD2DGradientBrush::D estroy](../../mfc/reference/cd2dgradientbrush-class.md#destroy).|
|[CD2DLinearGradientBrush::D etach](#detach)|Scollega l'interfaccia della risorsa dall'oggetto|
|[CD2DLinearGradientBrush:: Get](#get)|Restituisce l'interfaccia ID2D1LinearGradientBrush|
|[CD2DLinearGradientBrush:: GetEndPoint](#getendpoint)|Recupera le coordinate finali della sfumatura lineare|
|[CD2DLinearGradientBrush:: GetStartPoint](#getstartpoint)|Recupera le coordinate iniziali della sfumatura lineare|
|[CD2DLinearGradientBrush:: seendpoint](#setendpoint)|Imposta le coordinate finali della sfumatura lineare nello spazio delle coordinate del pennello|
|[CD2DLinearGradientBrush:: SetStartPoint](#setstartpoint)|Imposta le coordinate iniziali della sfumatura lineare nello spazio delle coordinate del pennello|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DLinearGradientBrush:: operator ID2D1LinearGradientBrush *](#operator_id2d1lineargradientbrush_star)|Restituisce l'interfaccia ID2D1LinearGradientBrush|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CD2DLinearGradientBrush:: m_LinearGradientBrushProperties](#m_lineargradientbrushproperties)|Punti iniziale e finale della sfumatura.|
|[CD2DLinearGradientBrush:: m_pLinearGradientBrush](#m_plineargradientbrush)|Puntatore a un ID2D1LinearGradientBrush.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource](../../mfc/reference/cd2dresource-class.md)

[CD2DBrush](../../mfc/reference/cd2dbrush-class.md)

[CD2DGradientBrush](../../mfc/reference/cd2dgradientbrush-class.md)

`CD2DLinearGradientBrush`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

## <a name="cd2dlineargradientbrushcd2dlineargradientbrush"></a><a name="_dtorcd2dlineargradientbrush"></a> CD2DLinearGradientBrush:: ~ CD2DLinearGradientBrush

Distruttore. Chiamato quando un oggetto pennello sfumatura lineare D2D viene eliminato definitivamente.

```
virtual ~CD2DLinearGradientBrush();
```

## <a name="cd2dlineargradientbrushattach"></a><a name="attach"></a> CD2DLinearGradientBrush:: Connetti

Connette l'interfaccia di risorsa esistente all'oggetto

```cpp
void Attach(ID2D1LinearGradientBrush* pResource);
```

### <a name="parameters"></a>Parametri

*pResource*<br/>
Interfaccia risorsa esistente. Non può essere NULL

## <a name="cd2dlineargradientbrushcd2dlineargradientbrush"></a><a name="cd2dlineargradientbrush"></a> CD2DLinearGradientBrush:: CD2DLinearGradientBrush

Costruisce un oggetto CD2DLinearGradientBrush.

```
CD2DLinearGradientBrush(
    CRenderTarget* pParentTarget,
    const D2D1_GRADIENT_STOP* gradientStops,
    UINT gradientStopsCount,
    D2D1_LINEAR_GRADIENT_BRUSH_PROPERTIES LinearGradientBrushProperties,
    D2D1_GAMMA colorInterpolationGamma = D2D1_GAMMA_2_2,
    D2D1_EXTEND_MODE extendMode = D2D1_EXTEND_MODE_CLAMP,
    CD2DBrushProperties* pBrushProperties = NULL,
    BOOL bAutoDestroy = TRUE);
```

### <a name="parameters"></a>Parametri

*pParentTarget*<br/>
Puntatore alla destinazione di rendering.

*gradientStops*<br/>
Puntatore a una matrice di strutture di D2D1_GRADIENT_STOP.

*gradientStopsCount*<br/>
Valore maggiore o uguale a 1 che specifica il numero di cursori sfumatura nella matrice gradientStops.

*LinearGradientBrushProperties*<br/>
Punti iniziale e finale della sfumatura.

*colorInterpolationGamma*<br/>
Spazio in cui viene eseguita l'interpolazione dei colori tra i cursori sfumatura.

*extendMode*<br/>
Comportamento della sfumatura al di fuori dell'intervallo normalizzato [0, 1].

*pBrushProperties*<br/>
Puntatore all'opacità e alla trasformazione di un pennello.

*bAutoDestroy*<br/>
Indica che l'oggetto verrà eliminato definitivamente dal proprietario (pParentTarget).

## <a name="cd2dlineargradientbrushcreate"></a><a name="create"></a> CD2DLinearGradientBrush:: create

Crea un CD2DLinearGradientBrush.

```
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```

### <a name="parameters"></a>Parametri

*pRenderTarget*<br/>
Puntatore alla destinazione di rendering.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="cd2dlineargradientbrushdestroy"></a><a name="destroy"></a> CD2DLinearGradientBrush::D estroy

Elimina definitivamente un oggetto CD2DLinearGradientBrush.

```
virtual void Destroy();
```

## <a name="cd2dlineargradientbrushdetach"></a><a name="detach"></a> CD2DLinearGradientBrush::D etach

Scollega l'interfaccia della risorsa dall'oggetto

```
ID2D1LinearGradientBrush* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia di risorsa scollegata.

## <a name="cd2dlineargradientbrushget"></a><a name="get"></a> CD2DLinearGradientBrush:: Get

Restituisce l'interfaccia ID2D1LinearGradientBrush

```
ID2D1LinearGradientBrush* Get();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1LinearGradientBrush o NULL se l'oggetto non è stato ancora inizializzato.

## <a name="cd2dlineargradientbrushgetendpoint"></a><a name="getendpoint"></a> CD2DLinearGradientBrush:: GetEndPoint

Recupera le coordinate finali della sfumatura lineare

```
CD2DPointF GetEndPoint() const;
```

### <a name="return-value"></a>Valore restituito

Coordinate bidimensionali finali della sfumatura lineare, nello spazio delle coordinate del pennello

## <a name="cd2dlineargradientbrushgetstartpoint"></a><a name="getstartpoint"></a> CD2DLinearGradientBrush:: GetStartPoint

Recupera le coordinate iniziali della sfumatura lineare

```
CD2DPointF GetStartPoint() const;
```

### <a name="return-value"></a>Valore restituito

Coordinate bidimensionali iniziali della sfumatura lineare, nello spazio delle coordinate del pennello

## <a name="cd2dlineargradientbrushm_lineargradientbrushproperties"></a><a name="m_lineargradientbrushproperties"></a> CD2DLinearGradientBrush:: m_LinearGradientBrushProperties

Punti iniziale e finale della sfumatura.

```
D2D1_LINEAR_GRADIENT_BRUSH_PROPERTIES m_LinearGradientBrushProperties;
```

## <a name="cd2dlineargradientbrushm_plineargradientbrush"></a><a name="m_plineargradientbrush"></a> CD2DLinearGradientBrush:: m_pLinearGradientBrush

Puntatore a un ID2D1LinearGradientBrush.

```
ID2D1LinearGradientBrush* m_pLinearGradientBrush;
```

## <a name="cd2dlineargradientbrushoperator-id2d1lineargradientbrush"></a><a name="operator_id2d1lineargradientbrush_star"></a> CD2DLinearGradientBrush:: operator ID2D1LinearGradientBrush *

Restituisce l'interfaccia ID2D1LinearGradientBrush

```
operator ID2D1LinearGradientBrush*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1LinearGradientBrush o NULL se l'oggetto non è stato ancora inizializzato.

## <a name="cd2dlineargradientbrushsetendpoint"></a><a name="setendpoint"></a> CD2DLinearGradientBrush:: seendpoint

Imposta le coordinate finali della sfumatura lineare nello spazio delle coordinate del pennello

```cpp
void SetEndPoint(CD2DPointF point);
```

### <a name="parameters"></a>Parametri

*punto*<br/>
Coordinate bidimensionali finali della sfumatura lineare, nello spazio delle coordinate del pennello

## <a name="cd2dlineargradientbrushsetstartpoint"></a><a name="setstartpoint"></a> CD2DLinearGradientBrush:: SetStartPoint

Imposta le coordinate iniziali della sfumatura lineare nello spazio delle coordinate del pennello

```cpp
void SetStartPoint(CD2DPointF point);
```

### <a name="parameters"></a>Parametri

*punto*<br/>
Coordinate bidimensionali iniziali della sfumatura lineare, nello spazio delle coordinate del pennello

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
