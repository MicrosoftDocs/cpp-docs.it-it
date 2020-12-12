---
description: 'Altre informazioni su: classe CD2DPointF'
title: Classe CD2DPointF
ms.date: 11/04/2016
f1_keywords:
- CD2DPointF
- AFXRENDERTARGET/CD2DPointF
- AFXRENDERTARGET/CD2DPointF::CD2DPointF
helpviewer_keywords:
- CD2DPointF [MFC], CD2DPointF
ms.assetid: 30f72083-1c8a-4f50-adb2-72dbbe3522d4
ms.openlocfilehash: 0f63aa35acb33504c96316b67ecc4f885f4f0247
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97193357"
---
# <a name="cd2dpointf-class"></a>Classe CD2DPointF

Wrapper per `D2D1_POINT_2F`.

## <a name="syntax"></a>Sintassi

```
class CD2DPointF : public D2D1_POINT_2F;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DPointF:: CD2DPointF](#cd2dpointf)|Di overload. Costruisce un `CD2DPointF` oggetto da un `D2D1_POINT_2F` oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DPointF:: operator CPoint](#operator_cpoint)|Converte `CD2DPointF` in `CPoint` Object.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`D2D1_POINT_2F`

`CD2DPointF`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

## <a name="cd2dpointfcd2dpointf"></a><a name="cd2dpointf"></a> CD2DPointF:: CD2DPointF

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

*fX*<br/>
origine X

*fY*<br/>
origine Y

## <a name="cd2dpointfoperator-cpoint"></a><a name="operator_cpoint"></a> CD2DPointF:: operator CPoint

Converte CD2DPointF in un oggetto CPoint.

```
operator CPoint();
```

### <a name="return-value"></a>Valore restituito

Valore corrente del punto di D2D.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
