---
description: 'Altre informazioni su: classe CD2DPointU'
title: Classe CD2DPointF
ms.date: 08/29/2019
f1_keywords:
- CD2DPointU
- AFXRENDERTARGET/CD2DPointU
- AFXRENDERTARGET/CD2DPointU::CD2DPointU
helpviewer_keywords:
- CD2DPointU [MFC], CD2DPointU
ms.assetid: 04733f96-b6de-4a89-82e3-caad1e8087a9
ms.openlocfilehash: 04c1c366f3026e4a621892fc1c7617707c33d23d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97250998"
---
# <a name="cd2dpointu-class"></a>Classe CD2DPointF

Wrapper per `D2D1_POINT_2U`.

## <a name="syntax"></a>Sintassi

```
class CD2DPointU : public D2D1_POINT_2U;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DPointU:: CD2DPointU](#cd2dpointu)|Di overload. Costruisce un `CD2DPointU` oggetto da un `D2D1_POINT_2U` oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DPointU:: operator CPoint](#operator_cpoint)|Converte `CD2DPointU` in `CPoint` Object.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`D2D1_POINT_2U`

`CD2DPointU`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

## <a name="cd2dpointucd2dpointu"></a><a name="cd2dpointu"></a> CD2DPointU:: CD2DPointU

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

## <a name="cd2dpointuoperator-cpoint"></a><a name="operator_cpoint"></a> CD2DPointU:: operator CPoint

Converte CD2DPointU in un oggetto CPoint.

```
operator CPoint();
```

### <a name="return-value"></a>Valore restituito

Valore corrente del punto di D2D.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
