---
title: sqrt, sqrtf, sqrtl | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- sqrtl
- sqrtf
- sqrt
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
- sqrt
- sqrtf
- _sqrtl
dev_langs:
- C++
helpviewer_keywords:
- sqrtf function
- sqrt function
- sqrtl function
- _sqrtl function
- calculating square roots
- square roots, calculating
ms.assetid: 2ba9467b-f172-41dc-8f10-b86f68fa813c
caps.latest.revision: 18
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7e02cd23aeabc54eb9c8e4d2823a33d9c20b563f
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="sqrt-sqrtf-sqrtl"></a>sqrt, sqrtf, sqrtl

Calcola la radice quadrata.

## <a name="syntax"></a>Sintassi

```C
double sqrt(
   double x
);
float sqrt(
   float x
);  // C++ only
long double sqrt(
   long double x
);  // C++ only
float sqrtf(
   float x
);
long double sqrtl(
   long double x
);
```

### <a name="parameters"></a>Parametri

*x*<br/>
Valore a virgola mobile non negativo

## <a name="remarks"></a>Note

Dato che C++ consente l'overload, è possibile chiamare overload di **sqrt** che accettano **float** oppure **lungo** **doppie** tipi. In un programma C **sqrt** accetta e restituisce sempre **doppie**.

## <a name="return-value"></a>Valore restituito

Il **sqrt** le funzioni restituiscono la radice quadrata di *x*. Per impostazione predefinita, se *x* è negativo, **sqrt** restituisce un valore NaN indefinito.

|Input|Eccezione SEH|**matherr** (eccezione)|
|-----------|-------------------|--------------------------|
|± QNAN,IND|none|_DOMAIN|
|- ∞|none|_DOMAIN|
|x<0|none|_DOMAIN|

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**sqrt**, **sqrtf**, **sqrtl**|\<math.h>|\<cmath>|

Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_sqrt.c
// This program calculates a square root.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
   double question = 45.35, answer;
   answer = sqrt( question );
   if( question < 0 )
      printf( "Error: sqrt returns %f\n", answer );
   else
      printf( "The square root of %.2f is %.2f\n", question, answer );
}
```

```Output
The square root of 45.35 is 6.73
```

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[exp, expf, expl](exp-expf.md)<br/>
[log, logf, log10, log10f](log-logf-log10-log10f.md)<br/>
[pow, powf, powl](pow-powf-powl.md)<br/>
[_CIsqrt](../../c-runtime-library/cisqrt.md)<br/>
