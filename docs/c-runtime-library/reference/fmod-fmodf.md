---
title: fmod, fmodf, fmodl
ms.date: 04/05/2018
api_name:
- fmod
- fmodf
- fmodl
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
- fmod
- _fmodl
- fmodf
helpviewer_keywords:
- calculating floating-point remainders
- fmodf function
- fmodl function
- fmod function
- floating-point numbers, calculating remainders
ms.assetid: 6962d369-d11f-40b1-a6d7-6f67239f8a23
ms.openlocfilehash: e98432a73df8b872593d4cd610139bdfa72a25c4
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70957071"
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

**fmod** restituisce il resto a virgola mobile di *x* / *y*. Se il valore di *y* è 0,0, **fmod** restituisce un valore NaN non interattiva. Per informazioni sulla rappresentazione di un valore NaN non interattivo da parte della famiglia **printf** , vedere [printf](printf-printf-l-wprintf-wprintf-l.md).

## <a name="remarks"></a>Note

La **funzione fmod** calcola il resto a virgola mobile *f* di *x* / *y* in modo che *x* = *i* \* *y* + *f*, dove *i* è un numero intero, *f* ha lo stesso segno di *x*e il valore assoluto di *f* è minore del valore assoluto di *y*.

C++consente l'overload, quindi è possibile chiamare overload di **fmod** che accettano e restituiscono valori **float** e **Long** **Double** . In un programma C **fmod** accetta sempre due argomenti **doppi** e restituisce un **valore Double**.

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
