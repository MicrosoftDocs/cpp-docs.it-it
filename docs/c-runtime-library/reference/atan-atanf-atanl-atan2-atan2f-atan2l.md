---
title: atan, atanf, atanl, atan2, atan2f, atan2l
ms.date: 04/05/2018
api_name:
- atan2f
- atan2l
- atan2
- atanf
- atan
- atanl
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
- atan
- atan2l
- atan2
- atanl
- atanf
- atan2f
helpviewer_keywords:
- atan function
- atanf function
- atanl function
- atan2 function
- atan2l function
- arctangent function
- trigonometric functions
- atan2f function
ms.assetid: 7a87a18e-c94d-4727-9cb1-1bb5c2725ae4
ms.openlocfilehash: 8c485dea281d2b754628c9663e38ea10a9b6ab57
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70939600"
---
# <a name="atan-atanf-atanl-atan2-atan2f-atan2l"></a>atan, atanf, atanl, atan2, atan2f, atan2l

Calcola il arcotangente di **x** (**atan**, **atanf**e **atanl**) o la arcotangente di **y**/**x** (**Atan2**, **atan2f**e **atan2l**).

## <a name="syntax"></a>Sintassi

```C
double atan( double x );
float atanf( float x );
long double atanl( long double x );

double atan2( double y, double x );
float atan2f( float y, float x );
long double atan2l( long double y, long double x );
```

```cpp
float atan( float x );  // C++ only
long double atan( long double x );  // C++ only

float atan2( float y, float x );  // C++ only
long double atan2( long double y, long double x );  // C++ only
```

### <a name="parameters"></a>Parametri

*x*, *y*<br/>
Qualsiasi numero.

## <a name="return-value"></a>Valore restituito

**atan** restituisce il arcotangente di *x* compreso tra-π/2 e π/2 radianti. **Atan2** restituisce il arcotangente di *y*/*x* compreso tra-π e π radianti. Se *x* è 0, **atan** restituisce 0. Se entrambi i parametri di **Atan2** sono 0, la funzione restituisce 0. Tutti i risultati sono in radianti.

**Atan2** usa i segni di entrambi i parametri per determinare il quadrante del valore restituito.

|Input|Eccezione SEH|Eccezione Matherr|
|-----------|-------------------|-----------------------|
|± **QNAN**, **IND**|none|**_DOMAIN**|

## <a name="remarks"></a>Note

La funzione **atan** calcola il arcotangente (funzione inversa della tangente) di *x*. **Atan2** calcola il arcotangente di *y*/*x* (se *x* è uguale a 0, **Atan2** restituisce π/2 Se *y* è positivo,-π/2 Se *y* è negativo oppure 0 se *y* è 0).

**atan** dispone di un'implementazione che usa Streaming SIMD Extensions 2 (SSE2). Per informazioni e le restrizioni sull'uso dell'implementazione SSE2, vedere [_set_SSE2_enable](set-sse2-enable.md).

Poiché C++ consente l'overload, è possibile chiamare gli overload di **atan** e **Atan2** che accettano gli argomenti di tipo **float** o **Long** **Double** . In un programma C, **atan** e **Atan2** accettano sempre gli argomenti **doppi** e restituiscono un **valore Double**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|
|-------------|---------------------|-|
|**atan**, **atan2**, **atanf**, **atan2f**, **atanl**, **atan2l**|\<math.h>|\<cmath> o \<math.h>|

## <a name="example"></a>Esempio

```C
// crt_atan.c
// arguments: 5 0.5
#include <math.h>
#include <stdio.h>
#include <errno.h>

int main( int ac, char* av[] )
{
   double x, y, theta;
   if( ac != 3 ){
      fprintf( stderr, "Usage: %s <x> <y>\n", av[0] );
      return 1;
   }
   x = atof( av[1] );
   theta = atan( x );
   printf( "Arctangent of %f: %f\n", x, theta );
   y = atof( av[2] );
   theta = atan2( y, x );
   printf( "Arctangent of %f / %f: %f\n", y, x, theta );
   return 0;
}
```

```Output
Arctangent of 5.000000: 1.373401
Arctangent of 0.500000 / 5.000000: 0.099669
```

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[acos, acosf, acosl](acos-acosf-acosl.md)<br/>
[asin, asinf, asinl](asin-asinf-asinl.md)<br/>
[cos, cosf, cosl](cos-cosf-cosl.md)<br/>
[_matherr](matherr.md)<br/>
[sin, sinf, sinl](sin-sinf-sinl.md)<br/>
[tan, tanf, tanl](tan-tanf-tanl.md)<br/>
[_CIatan](../../c-runtime-library/ciatan.md)<br/>
[_CIatan2](../../c-runtime-library/ciatan2.md)<br/>
