---
title: ilogb, ilogbf, ilogbl2 | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.technology:
- cpp
- devlang-cpp
ms.topic: reference
apiname:
- ilogb
- ilogbf
- ilogbl
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
- ilogb
- ilogbf
- ilogbl
- math/ilogb
- math/ilogbf
- math/ilogbl
helpviewer_keywords:
- ilogb function
- ilogbf function
- ilogbl function
ms.assetid: 9ef19d57-1caa-41d5-8233-2faad3562fcb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1436874e1ab35cc72dc40390adf5597529d3bf57
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32398179"
---
# <a name="ilogb-ilogbf-ilogbl"></a>ilogb, ilogbf, ilogbl

Restituisce un valore intero che rappresenta l'esponente in base 2 non distorto del valore specificato.

## <a name="syntax"></a>Sintassi

```C
int ilogb(
   double x
);

int ilogb(
   float x
); //C++ only

int ilogb(
   long double x
); //C++ only

int ilogbf(
   float x
);

int ilogbl(
   long double x
);

```

### <a name="parameters"></a>Parametri

*x*<br/>
Valore specificato.

## <a name="return-value"></a>Valore restituito

Se l'operazione riesce, restituisce l'esponente in base 2 di *x* come con un segno **int** valore.

In caso contrario, restituisce uno dei valori seguenti definiti in \<math.h>:

|Input|Risultato|
|-----------|------------|
|±0|FP_ILOGB0|
|±INF, ±nan, indefinito|FP_ILOGBNAN|

Gli errori vengono segnalati come specificato in [matherr](matherr.md).

## <a name="remarks"></a>Note

Dato che C++ consente l'overload, è possibile chiamare overload di **ilogb** che accettano e restituiscono **float** e **lungo** **doppie** tipi. In un programma C **ilogb** accetta e restituisce sempre un **doppie**.

Chiamare questa funzione è simile alla chiamata l'equivalente **logb** (funzione), quindi eseguire il cast del valore restituito **int**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione C|Intestazione C++|
|-------------|--------------|------------------|
|**ilogb**, **ilogbf**, **ilogbl**|\<math.h>|\<cmath>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[frexp](frexp.md)<br/>
[logb, logbf, logbl, _logb, _logbf](logb-logbf-logbl-logb-logbf.md)<br/>
