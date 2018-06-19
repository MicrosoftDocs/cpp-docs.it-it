---
title: _fpclass, _fpclassf | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _fpclass
- _fpclassf
apilocation:
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
apitype: DLLExport
f1_keywords:
- fpclass
- _fpclass
- _fpclassf
- math/_fpclass
- float/_fpclass
- math/_fpclassf
dev_langs:
- C++
helpviewer_keywords:
- fpclass function
- floating-point numbers, IEEE representation
- _fpclass function
- _fpclassf function
ms.assetid: 2774872d-3543-446f-bc72-db85f8b95a6b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 79895cf19c188addee45236df5dc47d3f4ebf6a3
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32398377"
---
# <a name="fpclass-fpclassf"></a>_fpclass, _fpclassf

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

Il **fpclass** e **_fpclassf** funzioni restituiscono un valore intero che indica la classificazione dell'argomento a virgola mobile *x*. La classificazione può avere uno dei valori seguenti, definiti in \<float.h>.

|Valore|Descrizione|
|-----------|-----------------|
|**_FPCLASS_SNAN**|Segnalazione NaN|
|**_FPCLASS_QNAN**|NaN non interattivo|
|**_FPCLASS_NINF**|Valore di infinito negativo (-INF)|
|**_FPCLASS_NN**|Valore diverso da zero normalizzato negativo|
|**_FPCLASS_ND**|Denormalizzato negativo|
|**_FPCLASS_NZ**|Zero negativo (- 0)|
|**_FPCLASS_PZ**|0 positivo (+0)|
|**_FPCLASS_PD**|Denormalizzato positivo|
|**_FPCLASS_PN**|Diverso da zero normalizzato positivo|
|**_FPCLASS_PINF**|Infinito positivo (+INF)|

## <a name="remarks"></a>Note

Il **fpclass** e **_fpclassf** funzioni sono specifiche di Microsoft. Sono simili a [fpclassify](fpclassify.md), ma restituiscono informazioni più dettagliate sull'argomento. Il **_fpclassf** funzione è disponibile solo quando compilato per x64 della piattaforma.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**fpclass**, **_fpclassf**|\<float.h>|

Per altre informazioni sulla compatibilità e la conformità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[isnan, _isnan, _isnanf](isnan-isnan-isnanf.md)<br/>
[fpclassify](fpclassify.md)<br/>