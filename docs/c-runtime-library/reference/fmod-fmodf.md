---
title: fmod, fmodf, fmodl | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- fmod
- fmodf
- fmodl
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
- fmod
- _fmodl
- fmodf
dev_langs:
- C++
helpviewer_keywords:
- calculating floating-point remainders
- fmodf function
- fmodl function
- fmod function
- floating-point numbers, calculating remainders
ms.assetid: 6962d369-d11f-40b1-a6d7-6f67239f8a23
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c473b5cb6822df07f4972ff2c964c828b14b5966
ms.sourcegitcommit: 7eadb968405bcb92ffa505e3ad8ac73483e59685
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/23/2018
ms.locfileid: "39207533"
---
# <a name="fmod-fmodf-fmodl"></a>fmod, fmodf, fmodl

Calcola il resto a virgola mobile.

## <a name="syntax"></a>Sintassi

```C
double fmod(
   double x,
   double y
);
float fmod(
   float x,
   float y
);  // C++ only
long double fmod(
   long double x,
   long double y
);  // C++ only
float fmodf(
   float x,
   float y
);
long double fmodl(
   long double x,
   long double y
);
```

### <a name="parameters"></a>Parametri

*x*, *y*<br/>
Valori a virgola mobile.

## <a name="return-value"></a>Valore restituito

**fmod** restituisce il resto a virgola mobile e di *x* / *y*. Se il valore di *y* è 0,0, **fmod** restituisce un NaN non interattivo. Per informazioni sulla rappresentazione di un NaN non interattivo per il **printf** famiglia, vedere [printf](printf-printf-l-wprintf-wprintf-l.md).

## <a name="remarks"></a>Note

Il **fmod** funzione calcola il resto a virgola mobile *f* dei *x* / *y* modo tale che *x*  =  *ho* \* *y* + *f*, dove *ho* è un numero intero, *f* ha lo stesso segno *x*e il valore assoluto del *f* è minore del valore assoluto di *y*.

C++ consente l'overload, quindi è possibile chiamare overload di **fmod** che accettano e restituiscono **float** e **long** **double** valori. In un programma C **fmod** accetta sempre due **double** argomenti e restituisce un **double**.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**fmod**, **fmodf**, **fmodl**|\<math.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_fmod.c
// This program displays a floating-point remainder.

#include <math.h>
#include <stdio.h>

int main( void )
{
   double w = -10.0, x = 3.0, z;

   z = fmod( w, x );
   printf( "The remainder of %.2f / %.2f is %f\n", w, x, z );
}
```

```Output
The remainder of -10.00 / 3.00 is -1.000000
```

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[ceil, ceilf, ceill](ceil-ceilf-ceill.md)<br/>
[fabs, fabsf, fabsl](fabs-fabsf-fabsl.md)<br/>
[floor, floorf, floorl](floor-floorf-floorl.md)<br/>
[_CIfmod](../../c-runtime-library/cifmod.md)<br/>
