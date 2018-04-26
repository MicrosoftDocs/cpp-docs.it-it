---
title: remainder, remainderf, remainderl | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- remainderl
- remainder
- remainderf
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
- remainderf
- remainder
- remainderl
dev_langs:
- C++
helpviewer_keywords:
- remainderf
- remainderl
- remainder
ms.assetid: 5f721fb3-8b78-4597-9bc0-ca9bcd1f1d0e
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 52abbfef2e20bebd531ef2d6c7a414f8345d996b
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="remainder-remainderf-remainderl"></a>remainder, remainderf, remainderl

Calcola il resto del quoziente di due valori a virgola mobile, arrotondati al valore integrale più vicino.

## <a name="syntax"></a>Sintassi

```C
double remainder( double x, double y );
float remainderf( float x, float y );
long double remainderl( long double x, long double y );
```

```cpp
float remainder( float x, float y ); /* C++ only */
long double remainder( long double x, long double y ); /* C++ only */
```

### <a name="parameters"></a>Parametri

*x*<br/>
Numeratore.

*y*<br/>
Denominatore.

## <a name="return-value"></a>Valore restituito

Il resto a virgola mobile della *x* / *y*. Se il valore di *y* è 0,0, **resto** restituisce una costante NaN non interattiva. Per informazioni sulla rappresentazione di un NaN non interattivo per la **printf** famiglia, vedere [printf, printf_l, wprintf, wprintf_l](printf-printf-l-wprintf-wprintf-l.md).

## <a name="remarks"></a>Note

Il **resto** funzioni calcolano il resto a virgola mobile *r* dei *x* / *y* tale *x*   =  *n* * *y* + *r*, dove *n*è la numero intero più vicino al valore per *x* / *y* e *n*anche ogni volta che &#124; *n*  -  *x* / *y* &#124; = 1 o 2. Quando si *r* = 0, *r* ha lo stesso segno *x*.

Dato che C++ consente l'overload, è possibile chiamare overload di **resto** che accettano e restituiscono **float** oppure **lungo** **doppie** valori. In un programma C **resto** ha sempre due **double** argomenti e restituisce un **doppie**.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|
|--------------|---------------------|-|
|**resto**, **remainderf**, **remainderl**|\<math.h>|\<cmath> o \<math.h>|

Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_remainder.c
// This program displays a floating-point remainder.

#include <math.h>
#include <stdio.h>

int main( void )
{
   double w = -10.0, x = 3.0, z;

   z = remainder(w, x);
   printf("The remainder of %.2f / %.2f is %f\n", w, x, z);
}
```

```Output
The remainder of -10.00 / 3.00 is -1.000000
```

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[ldiv, lldiv](ldiv-lldiv.md)<br/>
[imaxdiv](imaxdiv.md)<br/>
[fmod, fmodf](fmod-fmodf.md)<br/>
[remquo, remquof, remquol](remquo-remquof-remquol.md)<br/>
