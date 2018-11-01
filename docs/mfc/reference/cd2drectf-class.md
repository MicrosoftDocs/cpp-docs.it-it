---
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
ms.openlocfilehash: fad906510a111a2132d590d7c221d2484645f044
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50591204"
---
# <a name="cd2drectf-class"></a>Classe CD2DRectF

Wrapper per `D2D1_RECT_F`.

## <a name="syntax"></a>Sintassi

```
class CD2DRectF : public D2D1_RECT_F;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DRectF::CD2DRectF](#cd2drectf)|Di overload. Costruisce un `CD2DRectF` dall'oggetto `D2D1_RECT_F` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DRectF::IsNull](#isnull)|Restituisce un **booleana** valore che indica se un'espressione non contiene dati validi (NULL).|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRect CD2DRectF::operator](#operator_crect)|Consente di convertire `CD2DRectF` a `CRect` oggetto.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`D2D1_RECT_F`

`CD2DRectF`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

##  <a name="cd2drectf"></a>  CD2DRectF::CD2DRectF

Costruisce un oggetto CD2DRectF dall'oggetto CRect.

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
coordinata superiore di origine

*Tra*<br/>
coordinata destra di origine

*fBottom*<br/>
coordinata inferiore di origine

##  <a name="isnull"></a>  CD2DRectF::IsNull

Restituisce un valore booleano che indica se un'espressione non contiene dati validi (Null).

```
BOOL IsNull() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se sono tutti uguali a 0; del rettangolo superiore, sinistro, inferiore e valori corretti in caso contrario, FALSE.

##  <a name="operator_crect"></a>  CRect CD2DRectF::operator

Converte un oggetto CRect CD2DRectF.

```
operator CRect();
```

### <a name="return-value"></a>Valore restituito

Valore corrente del rettangolo D2D.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
