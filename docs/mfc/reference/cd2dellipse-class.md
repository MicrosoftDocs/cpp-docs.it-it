---
description: 'Altre informazioni su: Classe CD2DEllipse'
title: Classe CD2DEllipse
ms.date: 08/29/2019
f1_keywords:
- CD2DEllipse
- AFXRENDERTARGET/CD2DEllipse
- AFXRENDERTARGET/CD2DEllipse::CD2DEllipse
helpviewer_keywords:
- CD2DEllipse [MFC], CD2DEllipse
ms.assetid: e9f02f54-acf2-427e-b349-db50cd9a77df
ms.openlocfilehash: 827ba5515cb4b20cb8e5b10012590a001e01c08f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97313060"
---
# <a name="cd2dellipse-class"></a>Classe CD2DEllipse

Wrapper per `D2D1_ELLIPSE`.

## <a name="syntax"></a>Sintassi

```
class CD2DEllipse : public D2D1_ELLIPSE;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DEllipse:: CD2DEllipse](#cd2dellipse)|Di overload. Costruisce un `CD2DEllipse` oggetto da un `D2D1_ELLIPSE` oggetto.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`D2D1_ELLIPSE`

`CD2DEllipse`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

## <a name="cd2dellipsecd2dellipse"></a><a name="cd2dellipse"></a> CD2DEllipse:: CD2DEllipse

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
Punto centrale dell'ellisse.

*sizeRadius*<br/>
Raggio X e raggio Y dell'ellisse.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
