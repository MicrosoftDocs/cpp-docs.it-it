---
title: Classe CD2DPointF
ms.date: 11/04/2016
f1_keywords:
- CD2DPointF
- AFXRENDERTARGET/CD2DPointF
- AFXRENDERTARGET/CD2DPointF::CD2DPointF
helpviewer_keywords:
- CD2DPointF [MFC], CD2DPointF
ms.assetid: 30f72083-1c8a-4f50-adb2-72dbbe3522d4
ms.openlocfilehash: 5d66c31289f9e17df99df4681cff1d5cf6a0ec86
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369165"
---
# <a name="cd2dpointf-class"></a>Classe CD2DPointF

Wrapper per `D2D1_POINT_2F`.

## <a name="syntax"></a>Sintassi

```
class CD2DPointF : public D2D1_POINT_2F;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DPointF::CD2DPointF](#cd2dpointf)|Di overload. Costruisce un `CD2DPointF` oggetto `D2D1_POINT_2F` dall'oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DPointF::operator ECPoint](#operator_cpoint)|Converte `CD2DPointF` `CPoint` in oggetto.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`D2D1_POINT_2F`

`CD2DPointF`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget.h

## <a name="cd2dpointfcd2dpointf"></a><a name="cd2dpointf"></a>CD2DPointF::CD2DPointF

Costruisce un oggetto CD2DPointF dall'oggetto CPoint.

```
CD2DPointF(const CPoint& pt);
CD2DPointF(const D2D1_POINT_2F& pt);
CD2DPointF(const D2D1_POINT_2F* pt);
CD2DPointF(FLOAT fX = 0., FLOAT fY = 0.);
```

### <a name="parameters"></a>Parametri

*pt*<br/>
punto di origine

*Fx*<br/>
sorgente X

*Fy*<br/>
origine Y

## <a name="cd2dpointfoperator-cpoint"></a><a name="operator_cpoint"></a>CD2DPointF::operator ECPoint

Converte CD2DPointF in cPoint oggetto.

```
operator CPoint();
```

### <a name="return-value"></a>Valore restituito

Valore corrente del punto D2D.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
