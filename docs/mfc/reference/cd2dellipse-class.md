---
title: Classe CD2DEllipse
ms.date: 11/04/2016
f1_keywords:
- CD2DEllipse
- AFXRENDERTARGET/CD2DEllipse
- AFXRENDERTARGET/CD2DEllipse::CD2DEllipse
helpviewer_keywords:
- CD2DEllipse [MFC], CD2DEllipse
ms.assetid: e9f02f54-acf2-427e-b349-db50cd9a77df
ms.openlocfilehash: aa280215aaac55e3aaa9542ca1ab2bd9d21655e8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50642039"
---
# <a name="cd2dellipse-class"></a>Classe CD2DEllipse

Wrapper per `D2D1_ELLIPSE`.

## <a name="syntax"></a>Sintassi

```
class CD2DEllipse : public D2D1_ELLIPSE;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DEllipse::CD2DEllipse](#cd2dellipse)|Di overload. Costruisce un `CD2DEllipse` dall'oggetto `D2D1_ELLIPSE` oggetto.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`D2D1_ELLIPSE`

`CD2DEllipse`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

##  <a name="cd2dellipse"></a>  CD2DEllipse::CD2DEllipse

Costruisce un oggetto CD2DEllipse dall'oggetto CD2DRectF.

```
CD2DEllipse(const CD2DRectF& rect);
CD2DEllipse(const D2D1_ELLIPSE& ellipse);
  CD2DEllipse(const D2D1_ELLIPSE* ellipse);

CD2DEllipse(
    const CD2DPointF& ptCenter,
    const CD2DSizeF& sizeRadius);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
rettangolo di origine

*ellisse*<br/>
ellisse di origine

*ptCenter*<br/>
Il punto centrale dell'ellisse.

*sizeRadius*<br/>
Il raggio X e raggio Y dell'ellisse.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
