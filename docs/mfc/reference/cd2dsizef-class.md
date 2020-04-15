---
title: Classe CD2DSizeF
ms.date: 08/29/2019
f1_keywords:
- CD2DSizeF
- AFXRENDERTARGET/CD2DSizeF
- AFXRENDERTARGET/CD2DSizeF::CD2DSizeF
- AFXRENDERTARGET/CD2DSizeF::IsNull
helpviewer_keywords:
- CD2DSizeF [MFC], CD2DSizeF
- CD2DSizeF [MFC], IsNull
ms.assetid: f486a1e1-997d-4286-8cb9-26369dc82055
ms.openlocfilehash: be050f98855e5af794166e1f86962111a23bfa2e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369074"
---
# <a name="cd2dsizef-class"></a>Classe CD2DSizeF

Un involucro per D2D1_SIZE_F.

## <a name="syntax"></a>Sintassi

```
class CD2DSizeF : public D2D1_SIZE_F;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DSizeF::CD2DSizeF](#cd2dsizef)|Di overload. Costruisce un `CD2DSizeF` oggetto `D2D1_SIZE_F` dall'oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DSizeF::IsNull](#isnull)|Restituisce un valore **booleano** che indica se un'espressione non contiene dati validi (NULL).|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DSizeF::operatorCSize](#operator_csize)|Converte `CD2DSizeF` `CSize` in oggetto.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`D2D1_SIZE_F`

[CD2DSizeF (informazioni in base alla proprietà del file CD2DSize](../../mfc/reference/cd2dsizef-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget.h

## <a name="cd2dsizefcd2dsizef"></a><a name="cd2dsizef"></a>CD2DSizeF::CD2DSizeF

Costruisce un oggetto CD2DSizeF dall'oggetto CSize.

```
CD2DSizeF(const CSize& size);
CD2DSizeF(const D2D1_SIZE_F& size);
CD2DSizeF(const D2D1_SIZE_F* size);

CD2DSizeF(
    FLOAT cx = 0.,
    FLOAT cy = 0.);
```

### <a name="parameters"></a>Parametri

*Dimensione*<br/>
dimensione dell'origine

*Cx*<br/>
larghezza di origine

*Cy*<br/>
altezza di origine

## <a name="cd2dsizefisnull"></a><a name="isnull"></a>CD2DSizeF::IsNull

Restituisce un valore booleano che indica se un'espressione non contiene dati validi (Null).

```
BOOL IsNull() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe larghezza e altezza sono vuote. in caso contrario, FALSE.

## <a name="cd2dsizefoperator-csize"></a><a name="operator_csize"></a>CD2DSizeF::operatorCSize

Converte CD2DSizeF in CSize oggetto.

```
operator CSize();
```

### <a name="return-value"></a>Valore restituito

Valore corrente della dimensione D2D.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
