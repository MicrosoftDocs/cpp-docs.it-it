---
description: 'Altre informazioni su: Classe CD2DRectF'
title: Classe CD2DRectF
ms.date: 11/04/2016
f1_keywords:
- CD2DRectF
- AFXRENDERTARGET/CD2DRectF
- AFXRENDERTARGET/CD2DRectF::CD2DRectF
- AFXRENDERTARGET/CD2DRectF::IsNull
helpviewer_keywords:
- CD2DRectF [MFC], CD2DRectF
- CD2DRectF [MFC], IsNull
ms.assetid: 87c12d87-9d18-4a19-ba14-0f51d6b6835a
ms.openlocfilehash: 273a3d07f152f8b24a24175c0f466c8969830ebd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97136019"
---
# <a name="cd2drectf-class"></a>Classe CD2DRectF

Wrapper per `D2D1_RECT_F`.

## <a name="syntax"></a>Sintassi

```
class CD2DRectF : public D2D1_RECT_F;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DRectF:: CD2DRectF](#cd2drectf)|Di overload. Costruisce un `CD2DRectF` oggetto da un `D2D1_RECT_F` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DRectF:: IsNull](#isnull)|Restituisce un valore **booleano** che indica se un'espressione non contiene dati validi (null).|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DRectF:: operator CRect](#operator_crect)|Converte `CD2DRectF` in `CRect` Object.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`D2D1_RECT_F`

`CD2DRectF`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

## <a name="cd2drectfcd2drectf"></a><a name="cd2drectf"></a> CD2DRectF:: CD2DRectF

Costruisce un oggetto CD2DRectF da un oggetto CRect.

```
CD2DRectF(const CRect& rect);
CD2DRectF(const D2D1_RECT_F& rect);
CD2DRectF(const D2D1_RECT_F* rect);

CD2DRectF(
    FLOAT fLeft = 0.,
    FLOAT fTop = 0.,
    FLOAT fRight = 0.,
    FLOAT fBottom = 0.);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
rettangolo di origine

*fLeft*<br/>
coordinata sinistra di origine

*fTop*<br/>
coordinata principale di origine

*Paura*<br/>
coordinata destra di origine

*fBottom*<br/>
coordinata inferiore origine

## <a name="cd2drectfisnull"></a><a name="isnull"></a> CD2DRectF:: IsNull

Restituisce un valore booleano che indica se un'espressione non contiene dati validi (null).

```
BOOL IsNull() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se i valori in alto, a sinistra, in basso e a destra del rettangolo sono tutti uguali a 0; in caso contrario, FALSE.

## <a name="cd2drectfoperator-crect"></a><a name="operator_crect"></a> CD2DRectF:: operator CRect

Converte CD2DRectF in un oggetto CRect.

```
operator CRect();
```

### <a name="return-value"></a>Valore restituito

Valore corrente del rettangolo D2D.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
