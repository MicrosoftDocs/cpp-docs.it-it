---
title: remquo, remquof, remquol
ms.date: 04/05/2018
apiname:
- remquof
- remquo
- remquol
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
- remquof
- remquol
- remquo
helpviewer_keywords:
- remquol function
- remquof function
- remquo function
ms.assetid: a1d3cb8b-8027-4cd3-8deb-04eb17f299fc
ms.openlocfilehash: 4c7e93806600ff674baf186a66662aafdeceeaca
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50605105"
---
# <a name="remquo-remquof-remquol"></a>remquo, remquof, remquol

Calcola il resto di due valori interi e archivia un valore intero con il segno e la grandezza approssimativa del quoziente in una posizione specificata in un parametro.

## <a name="syntax"></a>Sintassi

```C
double remquo( double numer, double denom, int* quo );
float remquof( float numer, float denom, int* quo );
long double remquol( long double numer, long double denom, int* quo );
```

```cpp
float remquo( float numer, float denom, int* quo ); /* C++ only */
long double remquo( long double numer, long double denom, int* quo ); /* C++ only */
```

### <a name="parameters"></a>Parametri

*numero*<br/>
Numeratore.

*denom*<br/>
Denominatore.

*quo*<br/>
Puntatore a un intero per archiviare un valore con il segno e la grandezza approssimativa del quoziente.

## <a name="return-value"></a>Valore restituito

**remquo** restituisce il resto a virgola mobile e di *x* / *y*. Se il valore di *y* è 0,0, **remquo** restituisce un NaN non interattivo. Per informazioni sulla rappresentazione di un NaN non interattivo per il **printf** famiglia, vedere [printf, printf_l, wprintf, wprintf_l](printf-printf-l-wprintf-wprintf-l.md).

## <a name="remarks"></a>Note

Il **remquo** funzione calcola il resto a virgola mobile *f* dei *x* / *y* modo tale che *x*   =  *ho* \* *y* + *f*, dove *ho* è un numero intero , *f* ha lo stesso segno *x*e il valore assoluto del *f* è inferiore al valore assoluto di *y*.

C++ consente l'overload, quindi è possibile chiamare overload di **remquo** che accettano e restituiscono **float** oppure **long** **double** valori. In un programma C **remquo** accetta sempre due **double** argomenti e restituisce un **double**.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|
|--------------|---------------------|-|
|**remquo**, **remquof**, **remquol**|\<math.h>|\<cmath> o \<math.h>|

Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_remquo.c
// This program displays a floating-point remainder.

#include <math.h>
#include <stdio.h>

int main( void )
{
   double w = -10.0, x = 3.0, z;
   int quo = 0;

   z = remquo(w, x, &quo);
   printf("The remainder of %.2f / %.2f is %f\n", w, x, z);
   printf("Approximate signed quotient is %d\n", quo);
}
```

```Output
The remainder of -10.00 / 3.00 is -1.000000
Approximate signed quotient is -3
```

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[ldiv, lldiv](ldiv-lldiv.md)<br/>
[imaxdiv](imaxdiv.md)<br/>
[fmod, fmodf](fmod-fmodf.md)<br/>
[remainder, remainderf, remainderl](remainder-remainderf-remainderl.md)<br/>
