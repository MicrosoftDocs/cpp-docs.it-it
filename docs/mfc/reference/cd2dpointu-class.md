---
title: Classe CD2DPointF
ms.date: 11/04/2016
f1_keywords:
- CD2DPointU
- AFXRENDERTARGET/CD2DPointU
- AFXRENDERTARGET/CD2DPointU::CD2DPointU
helpviewer_keywords:
- CD2DPointU [MFC], CD2DPointU
ms.assetid: 04733f96-b6de-4a89-82e3-caad1e8087a9
ms.openlocfilehash: d66793abbb83015891df348eef8384e5c97baf2c
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57281122"
---
# <a name="cd2dpointu-class"></a>Classe CD2DPointF

Wrapper per `D2D1_POINT_2U`.

## <a name="syntax"></a>Sintassi

```
class CD2DPointU : public D2D1_POINT_2U;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DPointU::CD2DPointU](#cd2dpointu)|Di overload. Costruisce un `CD2DPointU` dall'oggetto `D2D1_POINT_2U` oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPoint CD2DPointU::operator](#operator_cpoint)|Consente di convertire `CD2DPointU` a `CPoint` oggetto.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`D2D1_POINT_2U`

`CD2DPointU`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

##  <a name="cd2dpointu"></a>  CD2DPointU::CD2DPointU

Costruisce un oggetto CD2DPointU dall'oggetto CPoint.

```
CD2DPointU(const CPoint& pt);
CD2DPointU(const D2D1_POINT_2U& pt);
  CD2DPointU(const D2D1_POINT_2U* pt);
CD2DPointU(UINT32 uX = 0, UINT32 uY = 0);
```

### <a name="parameters"></a>Parametri

*pt*<br/>
punto di origine

*uX*<br/>
origine X

*uY*<br/>
origine Y

##  <a name="operator_cpoint"></a>  CPoint CD2DPointU::operator

Converte un oggetto CPoint CD2DPointU.

```
operator CPoint();
```

### <a name="return-value"></a>Valore restituito

Valore corrente del punto di D2D.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
