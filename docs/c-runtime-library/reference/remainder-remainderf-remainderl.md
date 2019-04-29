---
title: remainder, remainderf, remainderl
ms.date: 04/05/2018
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
helpviewer_keywords:
- remainderf
- remainderl
- remainder
ms.assetid: 5f721fb3-8b78-4597-9bc0-ca9bcd1f1d0e
ms.openlocfilehash: 9a9abe82e69122ca87f44e293e1da725c97045d4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62357642"
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

Il resto a virgola mobile e del *x* / *y*. Se il valore di *y* è 0,0, **resto** restituisce un NaN non interattivo. Per informazioni sulla rappresentazione di un NaN non interattivo per il **printf** famiglia, vedere [printf, printf_l, wprintf, wprintf_l](printf-printf-l-wprintf-wprintf-l.md).

## <a name="remarks"></a>Note

Il **resto** funzioni calcolano il resto a virgola mobile *r* dei *x* / *y* modo tale che *x*   =  *n* \* *y* + *r*, dove *n*è la numero intero più vicino al valore per *x* / *y* e *n*anche ogni volta che &#124; *n*  -  *x* / *y* &#124; = 1 o 2. Quando *r* = 0, *r* ha lo stesso segno *x*.

Dato che C++ consente l'overload, è possibile chiamare overload di **resto** che accettano e restituiscono **float** oppure **long** **double** valori. In un programma C **resto** accetta sempre due **double** argomenti e restituisce un **double**.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|
|--------------|---------------------|-|
|**remainder**, **remainderf**, **remainderl**|\<math.h>|\<cmath> o \<math.h>|

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
