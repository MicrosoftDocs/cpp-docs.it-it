---
description: 'Altre informazioni su: classe CD2DSizeU'
title: Classe CD2DSizeU
ms.date: 08/29/2019
f1_keywords:
- CD2DSizeU
- AFXRENDERTARGET/CD2DSizeU
- AFXRENDERTARGET/CD2DSizeU::CD2DSizeU
- AFXRENDERTARGET/CD2DSizeU::IsNull
helpviewer_keywords:
- CD2DSizeU [MFC], CD2DSizeU
- CD2DSizeU [MFC], IsNull
ms.assetid: 6e679ba8-2112-43c3-8275-70b660856f02
ms.openlocfilehash: 0bb2d7cc632012fe8d8c0e3ada09025c2b025e64
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97154708"
---
# <a name="cd2dsizeu-class"></a>Classe CD2DSizeU

Wrapper per D2D1_SIZE_U.

## <a name="syntax"></a>Sintassi

```
class CD2DSizeU : public D2D1_SIZE_U;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DSizeU:: CD2DSizeU](#cd2dsizeu)|Di overload. Costruisce un `CD2DSizeU` oggetto da un `D2D1_SIZE_U` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DSizeU:: IsNull](#isnull)|Restituisce un valore **booleano** che indica se un'espressione non contiene dati validi (null).|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DSizeU:: operator CSize](#operator_csize)|Converte `CD2DSizeU` in `CSize` Object.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`D2D1_SIZE_U`

[CD2DSizeU](../../mfc/reference/cd2dsizeu-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

## <a name="cd2dsizeucd2dsizeu"></a><a name="cd2dsizeu"></a> CD2DSizeU:: CD2DSizeU

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
dimensioni origine

*CX*<br/>
Larghezza origine

*CY*<br/>
altezza di origine

## <a name="cd2dsizeuisnull"></a><a name="isnull"></a> CD2DSizeU:: IsNull

Restituisce un valore booleano che indica se un'espressione non contiene dati validi (null).

```
BOOL IsNull() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la larghezza e l'altezza sono vuote. in caso contrario, FALSE.

## <a name="cd2dsizeuoperator-csize"></a><a name="operator_csize"></a> CD2DSizeU:: operator CSize

Converte CD2DSizeU in un oggetto CSize.

```
operator CSize();
```

### <a name="return-value"></a>Valore restituito

Valore corrente della dimensione D2D.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
