---
title: remquo, remquof, remquol | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- remquol function
- remquof function
- remquo function
ms.assetid: a1d3cb8b-8027-4cd3-8deb-04eb17f299fc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8d2bcb774d7ebe7e71c3877af326177bbf8d7160
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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

*/quo*<br/>
Puntatore a un intero per archiviare un valore con il segno e la grandezza approssimativa del quoziente.

## <a name="return-value"></a>Valore restituito

**remquo** restituisce il resto a virgola mobile di *x* / *y*. Se il valore di *y* è 0,0, **remquo** restituisce una costante NaN non interattiva. Per informazioni sulla rappresentazione di un NaN non interattivo per la **printf** famiglia, vedere [printf, printf_l, wprintf, wprintf_l](printf-printf-l-wprintf-wprintf-l.md).

## <a name="remarks"></a>Note

Il **remquo** funzione calcola il resto a virgola mobile *f* dei *x* / *y* tale *x*   =  *si* * *y* + *f*, dove *si* è un numero intero , *f* ha lo stesso segno *x*e il valore assoluto del *f* è inferiore al valore assoluto di *y*.

C++ consente l'overload, pertanto è possibile chiamare degli overload di **remquo** che accettano e restituiscono **float** oppure **lungo** **doppie** valori. In un programma C **remquo** ha sempre due **double** argomenti e restituisce un **doppie**.

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
