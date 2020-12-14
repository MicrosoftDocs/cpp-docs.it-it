---
description: 'Altre informazioni su: Classe CD2DGradientBrush'
title: Classe CD2DGradientBrush
ms.date: 03/27/2019
f1_keywords:
- CD2DGradientBrush
- AFXRENDERTARGET/CD2DGradientBrush
- AFXRENDERTARGET/CD2DGradientBrush::CD2DGradientBrush
- AFXRENDERTARGET/CD2DGradientBrush::Destroy
- AFXRENDERTARGET/CD2DGradientBrush::m_arGradientStops
- AFXRENDERTARGET/CD2DGradientBrush::m_colorInterpolationGamma
- AFXRENDERTARGET/CD2DGradientBrush::m_extendMode
- AFXRENDERTARGET/CD2DGradientBrush::m_pGradientStops
helpviewer_keywords:
- CD2DGradientBrush [MFC], CD2DGradientBrush
- CD2DGradientBrush [MFC], Destroy
- CD2DGradientBrush [MFC], m_arGradientStops
- CD2DGradientBrush [MFC], m_colorInterpolationGamma
- CD2DGradientBrush [MFC], m_extendMode
- CD2DGradientBrush [MFC], m_pGradientStops
ms.assetid: 5bf133e6-16b7-4e3a-845d-0ce63fafe5ec
ms.openlocfilehash: c1af08ae27bd2cbee48c4abe22f413ffeb85cd1c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97193396"
---
# <a name="cd2dgradientbrush-class"></a>Classe CD2DGradientBrush

Classe base delle classi CD2DLinearGradientBrush e CD2DRadialGradientBrush.

## <a name="syntax"></a>Sintassi

```
class CD2DGradientBrush : public CD2DBrush;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DGradientBrush:: CD2DGradientBrush](#cd2dgradientbrush)|Costruisce un oggetto CD2DGradientBrush.|
|[CD2DGradientBrush:: ~ CD2DGradientBrush](#_dtorcd2dgradientbrush)|Distruttore. Chiamato quando un oggetto pennello sfumatura D2D viene eliminato definitivamente.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CD2DGradientBrush::D estroy](#destroy)|Elimina definitivamente un oggetto CD2DGradientBrush. Esegue l'override di [CD2DBrush::D estroy](../../mfc/reference/cd2dbrush-class.md#destroy).|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CD2DGradientBrush:: m_arGradientStops](#m_argradientstops)|Matrice delle strutture di D2D1_GRADIENT_STOP.|
|[CD2DGradientBrush:: m_colorInterpolationGamma](#m_colorinterpolationgamma)|Spazio in cui viene eseguita l'interpolazione dei colori tra i cursori sfumatura.|
|[CD2DGradientBrush:: m_extendMode](#m_extendmode)|Comportamento della sfumatura al di fuori dell'intervallo normalizzato [0, 1].|
|[CD2DGradientBrush:: m_pGradientStops](#m_pgradientstops)|Puntatore a una matrice di strutture di D2D1_GRADIENT_STOP.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource](../../mfc/reference/cd2dresource-class.md)

[CD2DBrush](../../mfc/reference/cd2dbrush-class.md)

`CD2DGradientBrush`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

## <a name="cd2dgradientbrushcd2dgradientbrush"></a><a name="_dtorcd2dgradientbrush"></a> CD2DGradientBrush:: ~ CD2DGradientBrush

Distruttore. Chiamato quando un oggetto pennello sfumatura D2D viene eliminato definitivamente.

```
virtual ~CD2DGradientBrush();
```

## <a name="cd2dgradientbrushcd2dgradientbrush"></a><a name="cd2dgradientbrush"></a> CD2DGradientBrush:: CD2DGradientBrush

Costruisce un oggetto CD2DGradientBrush.

```
CD2DGradientBrush(
    CRenderTarget* pParentTarget,
    const D2D1_GRADIENT_STOP* gradientStops,
    UINT gradientStopsCount,
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

*colorInterpolationGamma*<br/>
Spazio in cui viene eseguita l'interpolazione dei colori tra i cursori sfumatura.

*extendMode*<br/>
Comportamento della sfumatura al di fuori dell'intervallo normalizzato [0, 1].

*pBrushProperties*<br/>
Puntatore all'opacità e alla trasformazione di un pennello.

*bAutoDestroy*<br/>
Indica che l'oggetto verrà eliminato definitivamente dal proprietario (pParentTarget).

## <a name="cd2dgradientbrushdestroy"></a><a name="destroy"></a> CD2DGradientBrush::D estroy

Elimina definitivamente un oggetto CD2DGradientBrush.

```
virtual void Destroy();
```

## <a name="cd2dgradientbrushm_argradientstops"></a><a name="m_argradientstops"></a> CD2DGradientBrush:: m_arGradientStops

Matrice delle strutture di D2D1_GRADIENT_STOP.

```
CArray<D2D1_GRADIENT_STOP, D2D1_GRADIENT_STOP> m_arGradientStops;
```

## <a name="cd2dgradientbrushm_colorinterpolationgamma"></a><a name="m_colorinterpolationgamma"></a> CD2DGradientBrush:: m_colorInterpolationGamma

Spazio in cui viene eseguita l'interpolazione dei colori tra i cursori sfumatura.

```
D2D1_GAMMA m_colorInterpolationGamma;
```

## <a name="cd2dgradientbrushm_extendmode"></a><a name="m_extendmode"></a> CD2DGradientBrush:: m_extendMode

Comportamento della sfumatura al di fuori dell'intervallo normalizzato [0, 1].

```
D2D1_EXTEND_MODE m_extendMode;
```

## <a name="cd2dgradientbrushm_pgradientstops"></a><a name="m_pgradientstops"></a> CD2DGradientBrush:: m_pGradientStops

Puntatore a una matrice di strutture di D2D1_GRADIENT_STOP.

```
ID2D1GradientStopCollection* m_pGradientStops;
```

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
