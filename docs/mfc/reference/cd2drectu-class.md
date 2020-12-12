---
description: 'Altre informazioni su: Classe CD2DRectU'
title: Classe CD2DRectU
ms.date: 11/04/2016
f1_keywords:
- CD2DRectU
- AFXRENDERTARGET/CD2DRectU
- AFXRENDERTARGET/CD2DRectU::CD2DRectU
- AFXRENDERTARGET/CD2DRectU::IsNull
helpviewer_keywords:
- CD2DRectU [MFC], CD2DRectU
- CD2DRectU [MFC], IsNull
ms.assetid: a62f17d1-011d-4867-8f51-fd7e7c00561d
ms.openlocfilehash: dadbaf37f1ed11f96f29c7e4cf78eebf8095590d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97301620"
---
# <a name="cd2drectu-class"></a>Classe CD2DRectU

Wrapper per `D2D1_RECT_U`.

## <a name="syntax"></a>Sintassi

```
class CD2DRectU : public D2D1_RECT_U;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DRectU:: CD2DRectU](#cd2drectu)|Di overload. Costruisce un `CD2DRectU` oggetto da un `D2D1_RECT_U` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DRectU:: IsNull](#isnull)|Restituisce un valore **booleano** che indica se un'espressione non contiene dati validi (null).|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DRectU:: operator CRect](#operator_crect)|Converte `CD2DRectU` in `CRect` Object.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`D2D1_RECT_U`

`CD2DRectU`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

## <a name="cd2drectucd2drectu"></a><a name="cd2drectu"></a> CD2DRectU:: CD2DRectU

Costruisce un oggetto CD2DRectU da un oggetto CRect.

```
CD2DRectU(const CRect& rect);
CD2DRectU(const D2D1_RECT_U& rect);
CD2DRectU(const D2D1_RECT_U* rect);

CD2DRectU(
    UINT32 uLeft = 0,
    UINT32 uTop = 0,
    UINT32 uRight = 0,
    UINT32 uBottom = 0);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
rettangolo di origine

*uLeft*<br/>
coordinata sinistra di origine

*uTop*<br/>
coordinata principale di origine

*uRight*<br/>
coordinata destra di origine

*uBottom*<br/>
coordinata inferiore origine

## <a name="cd2drectuisnull"></a><a name="isnull"></a> CD2DRectU:: IsNull

Restituisce un valore booleano che indica se un'espressione non contiene dati validi (null).

```
BOOL IsNull() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se i valori in alto, a sinistra, in basso e a destra del rettangolo sono tutti uguali a 0; in caso contrario, FALSE.

## <a name="cd2drectuoperator-crect"></a><a name="operator_crect"></a> CD2DRectU:: operator CRect

Converte CD2DRectU in un oggetto CRect.

```
operator CRect();
```

### <a name="return-value"></a>Valore restituito

Valore corrente del rettangolo D2D.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
