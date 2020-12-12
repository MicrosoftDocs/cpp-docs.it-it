---
description: 'Altre informazioni su: Classe CD2DRadialGradientBrush'
title: Classe CD2DRadialGradientBrush
ms.date: 11/04/2016
f1_keywords:
- CD2DRadialGradientBrush
- AFXRENDERTARGET/CD2DRadialGradientBrush
- AFXRENDERTARGET/CD2DRadialGradientBrush::CD2DRadialGradientBrush
- AFXRENDERTARGET/CD2DRadialGradientBrush::Attach
- AFXRENDERTARGET/CD2DRadialGradientBrush::Create
- AFXRENDERTARGET/CD2DRadialGradientBrush::Destroy
- AFXRENDERTARGET/CD2DRadialGradientBrush::Detach
- AFXRENDERTARGET/CD2DRadialGradientBrush::Get
- AFXRENDERTARGET/CD2DRadialGradientBrush::GetCenter
- AFXRENDERTARGET/CD2DRadialGradientBrush::GetGradientOriginOffset
- AFXRENDERTARGET/CD2DRadialGradientBrush::GetRadiusX
- AFXRENDERTARGET/CD2DRadialGradientBrush::GetRadiusY
- AFXRENDERTARGET/CD2DRadialGradientBrush::SetCenter
- AFXRENDERTARGET/CD2DRadialGradientBrush::SetGradientOriginOffset
- AFXRENDERTARGET/CD2DRadialGradientBrush::SetRadiusX
- AFXRENDERTARGET/CD2DRadialGradientBrush::SetRadiusY
- AFXRENDERTARGET/CD2DRadialGradientBrush::m_pRadialGradientBrush
- AFXRENDERTARGET/CD2DRadialGradientBrush::m_RadialGradientBrushProperties
helpviewer_keywords:
- CD2DRadialGradientBrush [MFC], CD2DRadialGradientBrush
- CD2DRadialGradientBrush [MFC], Attach
- CD2DRadialGradientBrush [MFC], Create
- CD2DRadialGradientBrush [MFC], Destroy
- CD2DRadialGradientBrush [MFC], Detach
- CD2DRadialGradientBrush [MFC], Get
- CD2DRadialGradientBrush [MFC], GetCenter
- CD2DRadialGradientBrush [MFC], GetGradientOriginOffset
- CD2DRadialGradientBrush [MFC], GetRadiusX
- CD2DRadialGradientBrush [MFC], GetRadiusY
- CD2DRadialGradientBrush [MFC], SetCenter
- CD2DRadialGradientBrush [MFC], SetGradientOriginOffset
- CD2DRadialGradientBrush [MFC], SetRadiusX
- CD2DRadialGradientBrush [MFC], SetRadiusY
- CD2DRadialGradientBrush [MFC], m_pRadialGradientBrush
- CD2DRadialGradientBrush [MFC], m_RadialGradientBrushProperties
ms.assetid: 6c76d84a-d831-4ee2-96f1-82c1f5b0d6a9
ms.openlocfilehash: c5e169a5d608edd246d5c7269c94e3b225fdd491
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97118745"
---
# <a name="cd2dradialgradientbrush-class"></a>Classe CD2DRadialGradientBrush

Wrapper per ID2D1RadialGradientBrush.

## <a name="syntax"></a>Sintassi

```
class CD2DRadialGradientBrush : public CD2DGradientBrush;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DRadialGradientBrush:: CD2DRadialGradientBrush](#cd2dradialgradientbrush)|Costruisce un oggetto CD2DLinearGradientBrush.|
|[CD2DRadialGradientBrush:: ~ CD2DRadialGradientBrush](#_dtorcd2dradialgradientbrush)|Distruttore. Chiamato quando viene eliminato definitivamente un oggetto pennello a sfumatura radiale D2D.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DRadialGradientBrush:: Connetti](#attach)|Connette l'interfaccia di risorsa esistente all'oggetto|
|[CD2DRadialGradientBrush:: create](#create)|Crea un CD2DRadialGradientBrush. Esegue l'override di [CD2DResource:: create](../../mfc/reference/cd2dresource-class.md#create).|
|[CD2DRadialGradientBrush::D estroy](#destroy)|Elimina definitivamente un oggetto CD2DRadialGradientBrush. Esegue l'override di [CD2DGradientBrush::D estroy](../../mfc/reference/cd2dgradientbrush-class.md#destroy).|
|[CD2DRadialGradientBrush::D etach](#detach)|Scollega l'interfaccia della risorsa dall'oggetto|
|[CD2DRadialGradientBrush:: Get](#get)|Restituisce l'interfaccia ID2D1RadialGradientBrush|
|[CD2DRadialGradientBrush:: GetCenter](#getcenter)|Recupera il centro dell'ellisse della sfumatura|
|[CD2DRadialGradientBrush:: GetGradientOriginOffset](#getgradientoriginoffset)|Recupera l'offset dell'origine della sfumatura rispetto al centro dell'ellisse della sfumatura|
|[CD2DRadialGradientBrush:: GetRadiusX](#getradiusx)|Recupera il raggio x dell'ellisse della sfumatura|
|[CD2DRadialGradientBrush:: GetRadiusY](#getradiusy)|Recupera il raggio y dell'ellisse della sfumatura|
|[CD2DRadialGradientBrush:: secenter](#setcenter)|Specifica il centro dell'ellisse sfumatura nello spazio delle coordinate del pennello|
|[CD2DRadialGradientBrush:: SetGradientOriginOffset](#setgradientoriginoffset)|Specifica l'offset dell'origine della sfumatura rispetto al centro dell'ellisse della sfumatura|
|[CD2DRadialGradientBrush:: SetRadiusX](#setradiusx)|Specifica il raggio x dell'ellisse della sfumatura nello spazio delle coordinate del pennello|
|[CD2DRadialGradientBrush:: toradiusy](#setradiusy)|Specifica il raggio y dell'ellisse della sfumatura nello spazio delle coordinate del pennello|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DRadialGradientBrush:: operator ID2D1RadialGradientBrush *](#operator_id2d1radialgradientbrush_star)|Restituisce l'interfaccia ID2D1RadialGradientBrush|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CD2DRadialGradientBrush:: m_pRadialGradientBrush](#m_pradialgradientbrush)|Puntatore a un ID2D1RadialGradientBrush.|
|[CD2DRadialGradientBrush:: m_RadialGradientBrushProperties](#m_radialgradientbrushproperties)|Offset centrale, offset origine sfumatura e raggio x e raggio y della sfumatura del pennello.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource](../../mfc/reference/cd2dresource-class.md)

[CD2DBrush](../../mfc/reference/cd2dbrush-class.md)

[CD2DGradientBrush](../../mfc/reference/cd2dgradientbrush-class.md)

`CD2DRadialGradientBrush`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

## <a name="cd2dradialgradientbrushcd2dradialgradientbrush"></a><a name="_dtorcd2dradialgradientbrush"></a> CD2DRadialGradientBrush:: ~ CD2DRadialGradientBrush

Distruttore. Chiamato quando viene eliminato definitivamente un oggetto pennello a sfumatura radiale D2D.

```
virtual ~CD2DRadialGradientBrush();
```

## <a name="cd2dradialgradientbrushattach"></a><a name="attach"></a> CD2DRadialGradientBrush:: Connetti

Connette l'interfaccia di risorsa esistente all'oggetto

```cpp
void Attach(ID2D1RadialGradientBrush* pResource);
```

### <a name="parameters"></a>Parametri

*pResource*<br/>
Interfaccia risorsa esistente. Non può essere NULL

## <a name="cd2dradialgradientbrushcd2dradialgradientbrush"></a><a name="cd2dradialgradientbrush"></a> CD2DRadialGradientBrush:: CD2DRadialGradientBrush

Costruisce un oggetto CD2DLinearGradientBrush.

```
CD2DRadialGradientBrush(
    CRenderTarget* pParentTarget,
    const D2D1_GRADIENT_STOP* gradientStops,
    UINT gradientStopsCount,
    D2D1_RADIAL_GRADIENT_BRUSH_PROPERTIES RadialGradientBrushProperties,
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

*RadialGradientBrushProperties*<br/>
Offset centrale, offset origine sfumatura e raggio x e raggio y della sfumatura del pennello.

*colorInterpolationGamma*<br/>
Spazio in cui viene eseguita l'interpolazione dei colori tra i cursori sfumatura.

*extendMode*<br/>
Comportamento della sfumatura al di fuori dell'intervallo normalizzato [0, 1].

*pBrushProperties*<br/>
Puntatore all'opacità e alla trasformazione di un pennello.

*bAutoDestroy*<br/>
Indica che l'oggetto verrà eliminato definitivamente dal proprietario (pParentTarget).

## <a name="cd2dradialgradientbrushcreate"></a><a name="create"></a> CD2DRadialGradientBrush:: create

Crea un CD2DRadialGradientBrush.

```
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```

### <a name="parameters"></a>Parametri

*pRenderTarget*<br/>
Puntatore alla destinazione di rendering.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="cd2dradialgradientbrushdestroy"></a><a name="destroy"></a> CD2DRadialGradientBrush::D estroy

Elimina definitivamente un oggetto CD2DRadialGradientBrush.

```
virtual void Destroy();
```

## <a name="cd2dradialgradientbrushdetach"></a><a name="detach"></a> CD2DRadialGradientBrush::D etach

Scollega l'interfaccia della risorsa dall'oggetto

```
ID2D1RadialGradientBrush* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia di risorsa scollegata.

## <a name="cd2dradialgradientbrushget"></a><a name="get"></a> CD2DRadialGradientBrush:: Get

Restituisce l'interfaccia ID2D1RadialGradientBrush

```
ID2D1RadialGradientBrush* Get();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1RadialGradientBrush o NULL se l'oggetto non è stato ancora inizializzato.

## <a name="cd2dradialgradientbrushgetcenter"></a><a name="getcenter"></a> CD2DRadialGradientBrush:: GetCenter

Recupera il centro dell'ellisse della sfumatura

```
CD2DPointF GetCenter() const;
```

### <a name="return-value"></a>Valore restituito

Centro dell'ellisse della sfumatura. Questo valore è espresso nello spazio delle coordinate del pennello

## <a name="cd2dradialgradientbrushgetgradientoriginoffset"></a><a name="getgradientoriginoffset"></a> CD2DRadialGradientBrush:: GetGradientOriginOffset

Recupera l'offset dell'origine della sfumatura rispetto al centro dell'ellisse della sfumatura

```
CD2DPointF GetGradientOriginOffset() const;
```

### <a name="return-value"></a>Valore restituito

Offset dell'origine della sfumatura dal centro dell'ellisse della sfumatura. Questo valore è espresso nello spazio delle coordinate del pennello

## <a name="cd2dradialgradientbrushgetradiusx"></a><a name="getradiusx"></a> CD2DRadialGradientBrush:: GetRadiusX

Recupera il raggio x dell'ellisse della sfumatura

```
FLOAT GetRadiusX() const;
```

### <a name="return-value"></a>Valore restituito

Raggio x dell'ellisse sfumatura. Questo valore è espresso nello spazio delle coordinate del pennello

## <a name="cd2dradialgradientbrushgetradiusy"></a><a name="getradiusy"></a> CD2DRadialGradientBrush:: GetRadiusY

Recupera il raggio y dell'ellisse della sfumatura

```
FLOAT GetRadiusY() const;
```

### <a name="return-value"></a>Valore restituito

Raggio y dell'ellisse della sfumatura. Questo valore è espresso nello spazio delle coordinate del pennello

## <a name="cd2dradialgradientbrushm_pradialgradientbrush"></a><a name="m_pradialgradientbrush"></a> CD2DRadialGradientBrush:: m_pRadialGradientBrush

Puntatore a un ID2D1RadialGradientBrush.

```
ID2D1RadialGradientBrush* m_pRadialGradientBrush;
```

## <a name="cd2dradialgradientbrushm_radialgradientbrushproperties"></a><a name="m_radialgradientbrushproperties"></a> CD2DRadialGradientBrush:: m_RadialGradientBrushProperties

Offset centrale, offset origine sfumatura e raggio x e raggio y della sfumatura del pennello.

```
D2D1_RADIAL_GRADIENT_BRUSH_PROPERTIES m_RadialGradientBrushProperties;
```

## <a name="cd2dradialgradientbrushoperator-id2d1radialgradientbrush"></a><a name="operator_id2d1radialgradientbrush_star"></a> CD2DRadialGradientBrush:: operator ID2D1RadialGradientBrush *

Restituisce l'interfaccia ID2D1RadialGradientBrush

```
operator ID2D1RadialGradientBrush*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1RadialGradientBrush o NULL se l'oggetto non è stato ancora inizializzato.

## <a name="cd2dradialgradientbrushsetcenter"></a><a name="setcenter"></a> CD2DRadialGradientBrush:: secenter

Specifica il centro dell'ellisse sfumatura nello spazio delle coordinate del pennello

```cpp
void SetCenter(CD2DPointF point);
```

### <a name="parameters"></a>Parametri

*punto*<br/>
Centro dell'ellisse della sfumatura, nello spazio delle coordinate del pennello

## <a name="cd2dradialgradientbrushsetgradientoriginoffset"></a><a name="setgradientoriginoffset"></a> CD2DRadialGradientBrush:: SetGradientOriginOffset

Specifica l'offset dell'origine della sfumatura rispetto al centro dell'ellisse della sfumatura

```cpp
void SetGradientOriginOffset(CD2DPointF gradientOriginOffset);
```

### <a name="parameters"></a>Parametri

*gradientOriginOffset*<br/>
Offset dell'origine della sfumatura dal centro dell'ellisse della sfumatura

## <a name="cd2dradialgradientbrushsetradiusx"></a><a name="setradiusx"></a> CD2DRadialGradientBrush:: SetRadiusX

Specifica il raggio x dell'ellisse della sfumatura nello spazio delle coordinate del pennello

```cpp
void SetRadiusX(FLOAT radiusX);
```

### <a name="parameters"></a>Parametri

*radiusX*<br/>
Raggio x dell'ellisse sfumatura. Questo valore si trova nello spazio delle coordinate del pennello

## <a name="cd2dradialgradientbrushsetradiusy"></a><a name="setradiusy"></a> CD2DRadialGradientBrush:: toradiusy

Specifica il raggio y dell'ellisse della sfumatura nello spazio delle coordinate del pennello

```cpp
void SetRadiusY(FLOAT radiusY);
```

### <a name="parameters"></a>Parametri

*radiusY*<br/>
Raggio y dell'ellisse della sfumatura. Questo valore si trova nello spazio delle coordinate del pennello

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
