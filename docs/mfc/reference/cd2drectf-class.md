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
ms.openlocfilehash: 33d3c5f9e795ad6c91b689436e8a3b1b56966dce
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369115"
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
|[CD2DRectF::CD2DRectF](#cd2drectf)|Di overload. Costruisce un `CD2DRectF` oggetto `D2D1_RECT_F` dall'oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DRectF::IsNull](#isnull)|Restituisce un valore **booleano** che indica se un'espressione non contiene dati validi (NULL).|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DRectF::operatore CRect](#operator_crect)|Converte `CD2DRectF` `CRect` in oggetto.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`D2D1_RECT_F`

`CD2DRectF`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget.h

## <a name="cd2drectfcd2drectf"></a><a name="cd2drectf"></a>CD2DRectF::CD2DRectF

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

*fSuperiore*<br/>
coordinata superiore di origine

*Paura*<br/>
coordinata destra di origine

*fInferiore*<br/>
coordinata inferiore di origine

## <a name="cd2drectfisnull"></a><a name="isnull"></a>CD2DRectF::IsNull

Restituisce un valore booleano che indica se un'espressione non contiene dati validi (Null).

```
BOOL IsNull() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe i valori superiore, sinistro, inferiore e destro del rettangolo sono tutti uguali a 0; in caso contrario, FALSE.

## <a name="cd2drectfoperator-crect"></a><a name="operator_crect"></a>CD2DRectF::operatore CRect

Converte CD2DRectF in CRect oggetto.

```
operator CRect();
```

### <a name="return-value"></a>Valore restituito

Valore corrente del rettangolo D2D.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
