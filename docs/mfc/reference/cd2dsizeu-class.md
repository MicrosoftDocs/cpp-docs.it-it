---
title: Classe CD2DSizeU
ms.date: 11/04/2016
f1_keywords:
- CD2DSizeU
- AFXRENDERTARGET/CD2DSizeU
- AFXRENDERTARGET/CD2DSizeU::CD2DSizeU
- AFXRENDERTARGET/CD2DSizeU::IsNull
helpviewer_keywords:
- CD2DSizeU [MFC], CD2DSizeU
- CD2DSizeU [MFC], IsNull
ms.assetid: 6e679ba8-2112-43c3-8275-70b660856f02
ms.openlocfilehash: bad73a53eabe0a4c75483e9871a4fdc4a361449b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50512476"
---
# <a name="cd2dsizeu-class"></a>Classe CD2DSizeU

Un wrapper per D2D1_SIZE_U.

## <a name="syntax"></a>Sintassi

```
class CD2DSizeU : public D2D1_SIZE_U;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DSizeU::CD2DSizeU](#cd2dsizeu)|Di overload. Costruisce un `CD2DSizeU` dall'oggetto `D2D1_SIZE_U` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DSizeU::IsNull](#isnull)|Restituisce un **booleana** valore che indica se un'espressione non contiene dati validi (NULL).|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DSizeU::operator CSize](#operator_csize)|Consente di convertire `CD2DSizeU` a `CSize` oggetto.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`D2D1_SIZE_U`

[CD2DSizeU](../../mfc/reference/cd2dsizeu-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

##  <a name="cd2dsizeu"></a>  CD2DSizeU::CD2DSizeU

Costruisce un oggetto CD2DSizeU dall'oggetto CSize.

```
CD2DSizeU(const CSize& size);
CD2DSizeU(const D2D1_SIZE_U& size);
  CD2DSizeU(const D2D1_SIZE_U* size);

CD2DSizeU(
    UINT32 cx = 0,
    UINT32 cy = 0);
```

### <a name="parameters"></a>Parametri

*size*<br/>
dimensioni di origine

*CX*<br/>
larghezza di origine

*CY*<br/>
altezza di origine

##  <a name="isnull"></a>  CD2DSizeU::IsNull

Restituisce un valore booleano che indica se un'espressione non contiene dati validi (Null).

```
BOOL IsNull() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la larghezza e altezza sono vuote; in caso contrario, FALSE.

##  <a name="operator_csize"></a>  CD2DSizeU::operator CSize

Converte un oggetto CSize CD2DSizeU.

```
operator CSize();
```

### <a name="return-value"></a>Valore restituito

Valore corrente della dimensione D2D.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
