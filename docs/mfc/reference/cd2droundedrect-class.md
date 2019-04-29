---
title: Classe CD2DRoundedRect
ms.date: 11/04/2016
f1_keywords:
- CD2DRoundedRect
- AFXRENDERTARGET/CD2DRoundedRect
- AFXRENDERTARGET/CD2DRoundedRect::CD2DRoundedRect
helpviewer_keywords:
- CD2DRoundedRect [MFC], CD2DRoundedRect
ms.assetid: 06207fb5-e92b-41c0-bceb-b45d8f466531
ms.openlocfilehash: 51913a0d261a0bc91aef8f8504547a10c3e1cf36
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62396262"
---
# <a name="cd2droundedrect-class"></a>Classe CD2DRoundedRect

Wrapper per `D2D1_ROUNDED_RECT`.

## <a name="syntax"></a>Sintassi

```
class CD2DRoundedRect : public D2D1_ROUNDED_RECT;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DRoundedRect::CD2DRoundedRect](#cd2droundedrect)|Di overload. Costruisce un `CD2DRoundedRect` dall'oggetto `D2D1_ROUNDED_RECT` oggetto.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`D2D1_ROUNDED_RECT`

[CD2DRoundedRect](../../mfc/reference/cd2droundedrect-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

##  <a name="cd2droundedrect"></a>  CD2DRoundedRect::CD2DRoundedRect

Costruisce un oggetto CD2DRoundedRect dall'oggetto CD2DRectF.

```
CD2DRoundedRect(
    const CD2DRectF& rectIn,
    const CD2DSizeF& sizeRadius);

CD2DRoundedRect(const D2D1_ROUNDED_RECT& rectIn);
CD2DRoundedRect(const D2D1_ROUNDED_RECT* rectIn);
```

### <a name="parameters"></a>Parametri

*rectIn*<br/>
rettangolo di origine

*sizeRadius*<br/>
dimensioni RADIUS

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
