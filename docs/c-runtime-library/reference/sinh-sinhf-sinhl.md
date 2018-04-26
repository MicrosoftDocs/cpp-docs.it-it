---
title: sinh, sinhf, sinhl | Documenti Microsoft
ms.custom: ''
ms.date: 04/10/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- sinhl
- sinhf
- sinhl
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
- sinh
- sinhf
- sinhl
dev_langs:
- C++
helpviewer_keywords:
- sinh function
- sinhl function
- sinhf function
- calculating hyperbolic sines
- trigonometric functions
- sinhf function
- sinhl function
- hyperbolic functions
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 96d71b77e5abc91136d8c9cc36d1ad6821c2d059
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="sinh-sinhf-sinhl"></a>sinh, sinhf, sinhl

Calcola il seno iperbolico.

## <a name="syntax"></a>Sintassi

```C
double sinh(double x);
float sinhf(float x);
long double sinhl(long double x);
```

```cpp
float sinh(float x);  // C++ only
long double sinh(long double x);  // C++ only
```

### <a name="parameters"></a>Parametri

*x*<br/>
Angolo in radianti.

## <a name="return-value"></a>Valore restituito

Il **sinh** le funzioni restituiscono il seno iperbolico del *x*. Per impostazione predefinita, se il risultato è troppo grande **sinh** imposta **errno** al **ERANGE** e restituisce ±**HUGE_VAL**.

|Input|Eccezione SEH|Eccezione Matherr|
|-----------|-------------------|-----------------------|
|± QNAN,IND|None|_DOMAIN|
|&#124;x&#124; ≥ 7.104760e + 002|OVERFLOW+INEXACT|OVERFLOW|

Per altre informazioni sui codici restituiti, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Dato che C++ consente l'overload, è possibile chiamare overload di **sinh** che accettano e restituiscono **float** oppure **lungo** **doppie** valori. In un programma C **sinh** accetta e restituisce sempre **doppie**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|
|-|-|-|
|**sinh**, **sinhf**, **sinhl**|\<math.h>|\<cmath> o \<math.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_sinhcosh.c
// This program displays the hyperbolic
// sine and hyperbolic cosine of pi / 2.
// Compile by using: cl /W4 crt_sinhcosh.c

#include <math.h>
#include <stdio.h>

int main( void)
{
   double pi = 3.1415926535;
   double x, y;

   x = pi / 2;
   y = sinh( x );
   printf( "sinh( %f ) = %f\n",x, y );
   y = cosh( x );
   printf( "cosh( %f ) = %f\n",x, y );
}
```

```Output
sinh( 1.570796 ) = 2.301299
cosh( 1.570796 ) = 2.509178
```

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[acosh, acoshf, acoshl](acosh-acoshf-acoshl.md)<br/>
[asinh, asinhf, asinhl](asinh-asinhf-asinhl.md)<br/>
[atanh, atanhf, atanhl](atanh-atanhf-atanhl.md)<br/>
[cosh, coshf, coshl](cosh-coshf-coshl.md)<br/>
[tanh, tanhf, tanhl](tanh-tanhf-tanhl.md)<br/>
