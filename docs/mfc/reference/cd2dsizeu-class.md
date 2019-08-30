---
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
ms.openlocfilehash: 45625331d0c1be8ca7c663d12c53516dc7bd77c7
ms.sourcegitcommit: e10a5feea193c249ddc5a6faba48e7c6d8784e73
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/30/2019
ms.locfileid: "70177194"
---
# <a name="cd2dsizeu-class"></a>Classe CD2DSizeU

Wrapper per D2D1_SIZE_U.

## <a name="syntax"></a>Sintassi

```
class CD2DSizeU : public D2D1_SIZE_U;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DSizeU::CD2DSizeU](#cd2dsizeu)|Di overload. Costruisce un `CD2DSizeU` oggetto da `D2D1_SIZE_U` un oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DSizeU::IsNull](#isnull)|Restituisce un valore booleano che indica se un'espressione non contiene dati validi (null).|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DSizeU:: operator CSize](#operator_csize)|Converte `CD2DSizeU` in`CSize` Object.|

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
dimensioni origine

*cx*<br/>
Larghezza origine

*cy*<br/>
altezza di origine

##  <a name="isnull"></a>  CD2DSizeU::IsNull

Restituisce un valore booleano che indica se un'espressione non contiene dati validi (null).

```
BOOL IsNull() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la larghezza e l'altezza sono vuote. in caso contrario, FALSE.

##  <a name="operator_csize"></a>CD2DSizeU:: operator CSize

Converte CD2DSizeU in un oggetto CSize.

```
operator CSize();
```

### <a name="return-value"></a>Valore restituito

Valore corrente della dimensione D2D.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
