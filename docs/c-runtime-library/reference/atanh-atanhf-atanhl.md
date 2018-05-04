---
title: atanh, atanhf, atanhl | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- atanhl
- atanhf
- atanh
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
- atanhl
- atanhf
- atanh
dev_langs:
- C++
helpviewer_keywords:
- atanhf function
- atanhl function
- atanh funciton
ms.assetid: 83a43b5b-2580-4461-854f-dc84236d9f32
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 90a24945a7d630fac909e097728ea4df61ae2b40
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="atanh-atanhf-atanhl"></a>atanh, atanhf, atanhl

Calcola la tangente iperbolica inversa.

## <a name="syntax"></a>Sintassi

```C
double atanh( double x );
float atanhf( float x );
long double atanhl( long double x );
```

```cpp
float atanh( float x );  // C++ only
long double atanh( long double x );  // C++ only
```

### <a name="parameters"></a>Parametri

*x*<br/>
Valore a virgola mobile.

## <a name="return-value"></a>Valore restituito

Il **atanh** le funzioni restituiscono la tangente iperbolica inversa (tangente iperbolica arco) di *x*. Se *x* è maggiore di 1 o minore di -1, **errno** è impostato su **EDOM** e il risultato è un NaN non interattivo. Se *x* è uguale a 1 o -1, un valore infinito positivo o negativo viene restituito, rispettivamente, e **errno** è impostato su **ERANGE**.

|Input|Eccezione SEH|**Matherr** (eccezione)|
|-----------|-------------------|-------------------------|
|± QNAN,IND|nessuna|none|
|*X* ≥ 1. *x* ≤ -1|none|none|

## <a name="remarks"></a>Note

Dato che C++ consente l'overload, è possibile chiamare overload di **atanh** che accettano e restituiscono **float** oppure **lungo** **doppie** valori. In un programma C **atanh** accetta e restituisce sempre **doppie**.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**Atanh**, **atanhf**, **atanhl**|\<math.h>|\<cmath> o \<math.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_atanh.c
// This program displays the hyperbolic tangent of pi / 4
// and the arc hyperbolic tangent of the result.
//

#include <math.h>
#include <stdio.h>

int main( void )
{
   double pi = 3.1415926535;
   double x, y;

   x = tanh( pi / 4 );
   y = atanh( x );
   printf( "tanh( %f ) = %f\n", pi/4, x );
   printf( "atanh( %f ) = %f\n", x, y );
}
```

```Output
tanh( 0.785398 ) = 0.655794
atanh( 0.655794 ) = 0.785398
```

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[acosh, acoshf, acoshl](acosh-acoshf-acoshl.md)<br/>
[asinh, asinhf, asinhl](asinh-asinhf-asinhl.md)<br/>
[cosh, coshf, coshl](cosh-coshf-coshl.md)<br/>
[sinh, sinhf, sinhl](sinh-sinhf-sinhl.md)<br/>
[tanh, tanhf, tanhl](tanh-tanhf-tanhl.md)<br/>
