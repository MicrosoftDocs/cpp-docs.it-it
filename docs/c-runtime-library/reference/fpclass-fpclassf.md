---
title: _fpclass, _fpclassf
ms.date: 04/05/2018
api_name:
- _fpclass
- _fpclassf
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
ms.assetid: 2774872d-3543-446f-bc72-db85f8b95a6b
ms.openlocfilehash: db95453a44f6a55d4bf98638351dcda4bd8377c9
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74857840"
---
# <a name="_fpclass-_fpclassf"></a>_fpclass, _fpclassf

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

*x*<br/>
Valore a virgola mobile da verificare.

## <a name="return-value"></a>Valore restituito

Le funzioni **_fpclass** e **_fpclassf** restituiscono un valore intero che indica la classificazione a virgola mobile dell'argomento *x*. La classificazione può avere uno dei valori seguenti, definiti in \<float.h>.

|Valore|Descrizione|
|-----------|-----------------|
|**_FPCLASS_SNAN**|Segnalazione NaN|
|**_FPCLASS_QNAN**|NaN non interattivo|
|**_FPCLASS_NINF**|Infinito negativo (-INF)|
|**_FPCLASS_NN**|Valore diverso da zero normalizzato negativo|
|**_FPCLASS_ND**|Denormalizzato negativo|
|**_FPCLASS_NZ**|Zero negativo (-0)|
|**_FPCLASS_PZ**|0 positivo (+0)|
|**_FPCLASS_PD**|Denormalizzato positivo|
|**_FPCLASS_PN**|Diverso da zero normalizzato positivo|
|**_FPCLASS_PINF**|Infinito positivo (+INF)|

## <a name="remarks"></a>Note

Le funzioni **_fpclass** e **_fpclassf** sono specifiche di Microsoft. Sono simili a [fpclassify](fpclassify.md), ma restituiscono informazioni più dettagliate sull'argomento. La funzione **_fpclassf** è disponibile solo quando viene compilata per la piattaforma x64.

## <a name="requirements"></a>Requisiti di

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**_fpclass**, **_fpclassf**|\<float.h>|

Per altre informazioni sulla compatibilità e la conformità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[isnan, _isnan, _isnanf](isnan-isnan-isnanf.md)<br/>
[fpclassify](fpclassify.md)<br/>