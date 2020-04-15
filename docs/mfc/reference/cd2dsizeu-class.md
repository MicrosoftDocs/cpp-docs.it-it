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
ms.openlocfilehash: a5b87fe2ddd8fb32ddbbb2884c630952afdb079c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81359297"
---
# <a name="cd2dsizeu-class"></a>Classe CD2DSizeU

Un involucro per D2D1_SIZE_U.

## <a name="syntax"></a>Sintassi

```
class CD2DSizeU : public D2D1_SIZE_U;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DSizeU::CD2DSizeU](#cd2dsizeu)|Di overload. Costruisce un `CD2DSizeU` oggetto `D2D1_SIZE_U` dall'oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DSizeU::IsNull](#isnull)|Restituisce un valore **booleano** che indica se un'espressione non contiene dati validi (NULL).|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DSizeU::operator CSize](#operator_csize)|Converte `CD2DSizeU` `CSize` in oggetto.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`D2D1_SIZE_U`

[CD2DSizeU (informazioni in base al tallinaimi di](../../mfc/reference/cd2dsizeu-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget.h

## <a name="cd2dsizeucd2dsizeu"></a><a name="cd2dsizeu"></a>CD2DSizeU::CD2DSizeU

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

*Dimensione*<br/>
dimensione dell'origine

*Cx*<br/>
larghezza di origine

*Cy*<br/>
altezza di origine

## <a name="cd2dsizeuisnull"></a><a name="isnull"></a>CD2DSizeU::IsNull

Restituisce un valore booleano che indica se un'espressione non contiene dati validi (Null).

```
BOOL IsNull() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe larghezza e altezza sono vuote. in caso contrario, FALSE.

## <a name="cd2dsizeuoperator-csize"></a><a name="operator_csize"></a>CD2DSizeU::operator CSize

Converte CD2DSizeU in CSize oggetto.

```
operator CSize();
```

### <a name="return-value"></a>Valore restituito

Valore corrente della dimensione D2D.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
