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
ms.openlocfilehash: df895c278003e2c71f37a00af6bf14912756701a
ms.sourcegitcommit: e10a5feea193c249ddc5a6faba48e7c6d8784e73
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/30/2019
ms.locfileid: "70177196"
---
# <a name="cd2dsizef-class"></a>Classe CD2DSizeF

Wrapper per D2D1_SIZE_F.

## <a name="syntax"></a>Sintassi

```
class CD2DSizeF : public D2D1_SIZE_F;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CD2DSizeF::CD2DSizeF](#cd2dsizef)|Di overload. Costruisce un `CD2DSizeF` oggetto da `D2D1_SIZE_F` un oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DSizeF::IsNull](#isnull)|Restituisce un valore booleano che indica se un'espressione non contiene dati validi (null).|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DSizeF:: operator CSize](#operator_csize)|Converte `CD2DSizeF` in`CSize` Object.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`D2D1_SIZE_F`

[CD2DSizeF](../../mfc/reference/cd2dsizef-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

##  <a name="cd2dsizef"></a>  CD2DSizeF::CD2DSizeF

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

*size*<br/>
dimensioni origine

*cx*<br/>
Larghezza origine

*cy*<br/>
altezza di origine

##  <a name="isnull"></a>  CD2DSizeF::IsNull

Restituisce un valore booleano che indica se un'espressione non contiene dati validi (null).

```
BOOL IsNull() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la larghezza e l'altezza sono vuote. in caso contrario, FALSE.

##  <a name="operator_csize"></a>CD2DSizeF:: operator CSize

Converte CD2DSizeF in un oggetto CSize.

```
operator CSize();
```

### <a name="return-value"></a>Valore restituito

Valore corrente della dimensione D2D.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
