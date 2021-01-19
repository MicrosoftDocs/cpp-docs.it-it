---
description: 'Altre informazioni su: _fpclass, _fpclassf'
title: _fpclass, _fpclassf
ms.date: 1/15/2021
api_name:
- _fpclass
- _fpclassf
- _o__fpclass
- _o__fpclassf
api_location:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-math-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- fpclass
- _fpclass
- _fpclassf
- math/_fpclass
- float/_fpclass
- math/_fpclassf
helpviewer_keywords:
- fpclass function
- floating-point numbers, IEEE representation
- _fpclass function
- _fpclassf function
ms.openlocfilehash: 3fb97c5aa787c4c102e787fa3b08650f23ca546a
ms.sourcegitcommit: 92dc6d99ba5dcf3b64dee164df2d29beb1e608da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/18/2021
ms.locfileid: "98563991"
---
# <a name="_fpclass-_fpclassf"></a>`_fpclass`, `_fpclassf`

Restituisce un valore che indica la classificazione a virgola mobile dell'argomento.

## <a name="syntax"></a>Sintassi

```C
int _fpclass(
   double x
);

int _fpclassf(
   float x
); /* x64 only */
```

### <a name="parameters"></a>Parametri

*`x`*\
Valore a virgola mobile da verificare.

## <a name="return-value"></a>Valore restituito

Le **`_fpclass`** **`_fpclassf`** funzioni e restituiscono un valore intero che indica la classificazione a virgola mobile dell'argomento *`x`* . La classificazione può avere uno dei seguenti valori, definito in `<float.h>` .

|Valore|Description|
|-----------|-----------------|
|**`_FPCLASS_SNAN`**|Segnalazione NaN|
|**`_FPCLASS_QNAN`**|NaN non interattivo|
|**`_FPCLASS_NINF`**|Infinito negativo ( `-INF` )|
|**`_FPCLASS_NN`**|Valore diverso da zero normalizzato negativo|
|**`_FPCLASS_ND`**|Denormalizzato negativo|
|**`_FPCLASS_NZ`**|Zero negativo (-0)|
|**`_FPCLASS_PZ`**|0 positivo (+0)|
|**`_FPCLASS_PD`**|Denormalizzato positivo|
|**`_FPCLASS_PN`**|Diverso da zero normalizzato positivo|
|**`_FPCLASS_PINF`**|Infinito positivo ( `+INF` )|

## <a name="remarks"></a>Commenti

Le **`_fpclass`** **`_fpclassf`** funzioni e sono specifiche di Microsoft. Sono simili a [`fpclassify`](fpclassify.md) , ma restituiscono informazioni più dettagliate sull'argomento. La **`_fpclassf`** funzione è disponibile solo quando viene compilata per la piattaforma x64.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**`_fpclass`**, **`_fpclassf`**|`<float.h>`|

Per altre informazioni sulla compatibilità e la conformità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)\
[`isnan`, `_isnan`, `_isnanf`](isnan-isnan-isnanf.md)\
[`fpclassify`](fpclassify.md)