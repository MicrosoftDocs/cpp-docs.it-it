---
title: Classe CD2DPointF
ms.date: 08/29/2019
f1_keywords:
- CD2DPointU
- AFXRENDERTARGET/CD2DPointU
- AFXRENDERTARGET/CD2DPointU::CD2DPointU
helpviewer_keywords:
- CD2DPointU [MFC], CD2DPointU
ms.assetid: 04733f96-b6de-4a89-82e3-caad1e8087a9
ms.openlocfilehash: 8c6db55f1dde1fd054a1f75590f5969c097b2f90
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369150"
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
|[CD2DPointU::CD2DPointU (informazioni in o base)CD2DPointU::CD2DPointU](#cd2dpointu)|Di overload. Costruisce un `CD2DPointU` `D2D1_POINT_2U` oggetto from.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DPointU::operatore CPoint](#operator_cpoint)|Converte `CD2DPointU` `CPoint` in oggetto.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`D2D1_POINT_2U`

`CD2DPointU`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget.h

## <a name="cd2dpointucd2dpointu"></a><a name="cd2dpointu"></a>CD2DPointU::CD2DPointU (informazioni in o base)CD2DPointU::CD2DPointU

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

*Ux*<br/>
sorgente X

*Uy*<br/>
origine Y

## <a name="cd2dpointuoperator-cpoint"></a><a name="operator_cpoint"></a>CD2DPointU::operatore CPoint

Converte CD2DPointU in CPoint oggetto.

```
operator CPoint();
```

### <a name="return-value"></a>Valore restituito

Valore corrente del punto D2D.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
