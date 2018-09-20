---
title: Classe CD2DRadialGradientBrush | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 36a5c33f8dd9ce4ecef1c2900a13100683fe2889
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46405138"
---
# <a name="cd2dradialgradientbrush-class"></a>Classe CD2DRadialGradientBrush

Un wrapper per ID2D1RadialGradientBrush.

## <a name="syntax"></a>Sintassi

```
class CD2DRadialGradientBrush : public CD2DGradientBrush;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DRadialGradientBrush::CD2DRadialGradientBrush](#cd2dradialgradientbrush)|Costruisce un oggetto CD2DLinearGradientBrush.|
|[CD2DRadialGradientBrush:: ~ CD2DRadialGradientBrush](#_dtorcd2dradialgradientbrush)|Distruttore. Chiamato quando viene eliminata definitivamente un oggetto di un pennello sfumatura radiale D2D.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DRadialGradientBrush::Attach](#attach)|Collega esistente all'oggetto di interfaccia delle risorse|
|[CD2DRadialGradientBrush::Create](#create)|Crea un CD2DRadialGradientBrush. (Esegue l'override [CD2DResource:: Create](../../mfc/reference/cd2dresource-class.md#create).)|
|[CD2DRadialGradientBrush::Destroy](#destroy)|Elimina un oggetto CD2DRadialGradientBrush. (Esegue l'override [CD2DGradientBrush:: Destroy](../../mfc/reference/cd2dgradientbrush-class.md#destroy).)|
|[CD2DRadialGradientBrush::Detach](#detach)|Scollega interfaccia di risorse dall'oggetto|
|[CD2DRadialGradientBrush::Get](#get)|Restituisce l'interfaccia ID2D1RadialGradientBrush|
|[CD2DRadialGradientBrush::GetCenter](#getcenter)|Recupera il centro dell'ellisse sfumatura|
|[CD2DRadialGradientBrush::GetGradientOriginOffset](#getgradientoriginoffset)|Recupera l'offset di origine della sfumatura rispetto al centro dell'ellisse sfumatura|
|[CD2DRadialGradientBrush::GetRadiusX](#getradiusx)|Recupera il raggio x dell'ellisse sfumatura|
|[CD2DRadialGradientBrush::GetRadiusY](#getradiusy)|Recupera il raggio y dell'ellisse sfumatura|
|[CD2DRadialGradientBrush::SetCenter](#setcenter)|Specifica il centro dell'ellisse sfumatura nello spazio delle coordinate del pennello|
|[CD2DRadialGradientBrush::SetGradientOriginOffset](#setgradientoriginoffset)|Specifica l'offset dell'origine della sfumatura rispetto al centro dell'ellisse sfumatura|
|[CD2DRadialGradientBrush::SetRadiusX](#setradiusx)|Specifica il raggio x dell'ellisse sfumatura, nello spazio delle coordinate del pennello|
|[CD2DRadialGradientBrush::SetRadiusY](#setradiusy)|Specifica il raggio y dell'ellisse sfumatura, nello spazio delle coordinate del pennello|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DRadialGradientBrush::operator ID2D1RadialGradientBrush *](#operator_id2d1radialgradientbrush_star)|Restituisce l'interfaccia ID2D1RadialGradientBrush|

### <a name="protected-data-members"></a>Membri dati protetti

|nome|Descrizione|
|----------|-----------------|
|[CD2DRadialGradientBrush::m_pRadialGradientBrush](#m_pradialgradientbrush)|Puntatore a un ID2D1RadialGradientBrush.|
|[CD2DRadialGradientBrush::m_RadialGradientBrushProperties](#m_radialgradientbrushproperties)|Il centro, offset dell'origine della sfumatura e raggi x e raggio y del pennello 's sfumatura.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource](../../mfc/reference/cd2dresource-class.md)

[CD2DBrush](../../mfc/reference/cd2dbrush-class.md)

[CD2DGradientBrush](../../mfc/reference/cd2dgradientbrush-class.md)

`CD2DRadialGradientBrush`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

##  <a name="_dtorcd2dradialgradientbrush"></a>  CD2DRadialGradientBrush:: ~ CD2DRadialGradientBrush

Distruttore. Chiamato quando viene eliminata definitivamente un oggetto di un pennello sfumatura radiale D2D.

```
virtual ~CD2DRadialGradientBrush();
```

##  <a name="attach"></a>  CD2DRadialGradientBrush::Attach

Collega esistente all'oggetto di interfaccia delle risorse

```
void Attach(ID2D1RadialGradientBrush* pResource);
```

### <a name="parameters"></a>Parametri

*pResource*<br/>
Interfaccia di risorse esistente. Non può essere NULL

##  <a name="cd2dradialgradientbrush"></a>  CD2DRadialGradientBrush::CD2DRadialGradientBrush

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
Puntatore a una matrice di strutture D2D1_GRADIENT_STOP.

*gradientStopsCount*<br/>
Un valore maggiore o uguale a 1 che specifica il numero di punti di sfumatura della matrice gradientStops.

*RadialGradientBrushProperties*<br/>
Il centro, offset dell'origine della sfumatura e raggi x e raggio y del pennello 's sfumatura.

*colorInterpolationGamma*<br/>
Lo spazio in cui colore viene eseguita l'interpolazione tra i cursori sfumatura.

*extendMode*<br/>
Il comportamento della sfumatura compreso nell'intervallo [0,1] normalizzato.

*pBrushProperties*<br/>
Un puntatore all'opacità e alla trasformazione di un pennello.

*flag bAutoDestroy*<br/>
Indica che l'oggetto viene distrutto dal proprietario (pParentTarget).

##  <a name="create"></a>  CD2DRadialGradientBrush::Create

Crea un CD2DRadialGradientBrush.

```
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```

### <a name="parameters"></a>Parametri

*pRenderTarget*<br/>
Puntatore alla destinazione di rendering.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

##  <a name="destroy"></a>  CD2DRadialGradientBrush::Destroy

Elimina un oggetto CD2DRadialGradientBrush.

```
virtual void Destroy();
```

##  <a name="detach"></a>  CD2DRadialGradientBrush::Detach

Scollega interfaccia di risorse dall'oggetto

```
ID2D1RadialGradientBrush* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia risorse scollegato.

##  <a name="get"></a>  CD2DRadialGradientBrush::Get

Restituisce l'interfaccia ID2D1RadialGradientBrush

```
ID2D1RadialGradientBrush* Get();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1RadialGradientBrush o NULL se l'oggetto non è ancora inizializzato.

##  <a name="getcenter"></a>  CD2DRadialGradientBrush::GetCenter

Recupera il centro dell'ellisse sfumatura

```
CD2DPointF GetCenter() const;
```

### <a name="return-value"></a>Valore restituito

Il centro dell'ellisse sfumatura. Questo valore viene espresso nello spazio delle coordinate del pennello

##  <a name="getgradientoriginoffset"></a>  CD2DRadialGradientBrush::GetGradientOriginOffset

Recupera l'offset di origine della sfumatura rispetto al centro dell'ellisse sfumatura

```
CD2DPointF GetGradientOriginOffset() const;
```

### <a name="return-value"></a>Valore restituito

L'offset dell'origine della sfumatura dal centro dell'ellisse sfumatura. Questo valore viene espresso nello spazio delle coordinate del pennello

##  <a name="getradiusx"></a>  CD2DRadialGradientBrush::GetRadiusX

Recupera il raggio x dell'ellisse sfumatura

```
FLOAT GetRadiusX() const;
```

### <a name="return-value"></a>Valore restituito

Il raggio x dell'ellisse sfumatura. Questo valore viene espresso nello spazio delle coordinate del pennello

##  <a name="getradiusy"></a>  CD2DRadialGradientBrush::GetRadiusY

Recupera il raggio y dell'ellisse sfumatura

```
FLOAT GetRadiusY() const;
```

### <a name="return-value"></a>Valore restituito

Il raggio y dell'ellisse sfumatura. Questo valore viene espresso nello spazio delle coordinate del pennello

##  <a name="m_pradialgradientbrush"></a>  CD2DRadialGradientBrush::m_pRadialGradientBrush

Puntatore a un ID2D1RadialGradientBrush.

```
ID2D1RadialGradientBrush* m_pRadialGradientBrush;
```

##  <a name="m_radialgradientbrushproperties"></a>  CD2DRadialGradientBrush::m_RadialGradientBrushProperties

Il centro, offset dell'origine della sfumatura e raggi x e raggio y del pennello 's sfumatura.

```
D2D1_RADIAL_GRADIENT_BRUSH_PROPERTIES m_RadialGradientBrushProperties;
```

##  <a name="operator_id2d1radialgradientbrush_star"></a>  CD2DRadialGradientBrush::operator ID2D1RadialGradientBrush *

Restituisce l'interfaccia ID2D1RadialGradientBrush

```
operator ID2D1RadialGradientBrush*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1RadialGradientBrush o NULL se l'oggetto non è ancora inizializzato.

##  <a name="setcenter"></a>  CD2DRadialGradientBrush::SetCenter

Specifica il centro dell'ellisse sfumatura nello spazio delle coordinate del pennello

```
void SetCenter(CD2DPointF point);
```

### <a name="parameters"></a>Parametri

*punto*<br/>
Il centro dell'ellisse sfumatura, nello spazio delle coordinate del pennello

##  <a name="setgradientoriginoffset"></a>  CD2DRadialGradientBrush::SetGradientOriginOffset

Specifica l'offset dell'origine della sfumatura rispetto al centro dell'ellisse sfumatura

```
void SetGradientOriginOffset(CD2DPointF gradientOriginOffset);
```

### <a name="parameters"></a>Parametri

*gradientOriginOffset*<br/>
L'offset dell'origine della sfumatura dal centro dell'ellisse sfumatura

##  <a name="setradiusx"></a>  CD2DRadialGradientBrush::SetRadiusX

Specifica il raggio x dell'ellisse sfumatura, nello spazio delle coordinate del pennello

```
void SetRadiusX(FLOAT radiusX);
```

### <a name="parameters"></a>Parametri

*radiusX*<br/>
Il raggio x dell'ellisse sfumatura. Questo valore è nello spazio delle coordinate del pennello

##  <a name="setradiusy"></a>  CD2DRadialGradientBrush::SetRadiusY

Specifica il raggio y dell'ellisse sfumatura, nello spazio delle coordinate del pennello

```
void SetRadiusY(FLOAT radiusY);
```

### <a name="parameters"></a>Parametri

*radiusY*<br/>
Il raggio y dell'ellisse sfumatura. Questo valore è nello spazio delle coordinate del pennello

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
