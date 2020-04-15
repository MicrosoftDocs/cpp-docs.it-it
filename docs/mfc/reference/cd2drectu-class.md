---
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
ms.openlocfilehash: 26e647ae01a498a6ad8ca2d7c866f33b01910881
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369103"
---
# <a name="cd2drectu-class"></a>Classe CD2DRectU

Wrapper per `D2D1_RECT_U`.

## <a name="syntax"></a>Sintassi

```
class CD2DRectU : public D2D1_RECT_U;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DRectU::CD2DRectU (CD2DRectU)](#cd2drectu)|Di overload. Costruisce un `CD2DRectU` oggetto `D2D1_RECT_U` dall'oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DRectU::IsNull](#isnull)|Restituisce un valore **booleano** che indica se un'espressione non contiene dati validi (NULL).|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DRectU::operatorE](#operator_crect)|Converte `CD2DRectU` `CRect` in oggetto.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`D2D1_RECT_U`

`CD2DRectU`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget.h

## <a name="cd2drectucd2drectu"></a><a name="cd2drectu"></a>CD2DRectU::CD2DRectU (CD2DRectU)

Costruisce un oggetto CD2DRectU dall'oggetto CRect.

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

*uLeft (Sinistra)*<br/>
coordinata sinistra di origine

*uTop (Informazioni in stato di vita*<br/>
coordinata superiore di origine

*uDestra*<br/>
coordinata destra di origine

*uInferiore*<br/>
coordinata inferiore di origine

## <a name="cd2drectuisnull"></a><a name="isnull"></a>CD2DRectU::IsNull

Restituisce un valore booleano che indica se un'espressione non contiene dati validi (Null).

```
BOOL IsNull() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe i valori superiore, sinistro, inferiore e destro del rettangolo sono tutti uguali a 0; in caso contrario, FALSE.

## <a name="cd2drectuoperator-crect"></a><a name="operator_crect"></a>CD2DRectU::operatorE

Converte CD2DRectU in CRect oggetto.

```
operator CRect();
```

### <a name="return-value"></a>Valore restituito

Valore corrente del rettangolo D2D.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
