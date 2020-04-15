---
title: atan, atanf, atanl, atan2, atan2f, atan2l
ms.date: 4/2/2020
api_name:
- atan2f
- atan2l
- atan2
- atanf
- atan
- atanl
- _o_atan
- _o_atan2
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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: 3b8411f9839022477dff3100792e271e2f0b572b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81334113"
---
# <a name="atan-atanf-atanl-atan2-atan2f-atan2l"></a>atan, atanf, atanl, atan2, atan2f, atan2l

Calcola l'arcotangente di **x** (**atan**, **atanf**e **atanl**) o l'arcotangente di **y**/**x** (**atan2**, **atan2f**e **atan2l**).

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

**atan** restituisce l'arcotangente di *x* compreso nell'intervallo compreso tra -2 e 2 radianti. **atan2** restituisce l'arcotangente di *y*/*x* nell'intervallo -a - a . Se *x* è 0, **atan** restituisce 0. Se entrambi i parametri di **atan2** sono 0, la funzione restituisce 0. Tutti i risultati sono in radianti.

**atan2** utilizza i segni di entrambi i parametri per determinare il quadrante del valore restituito.

|Input|Eccezione SEH|Eccezione Matherr|
|-----------|-------------------|-----------------------|
|**QNAN**, **IND**|none|**_DOMAIN**|

## <a name="remarks"></a>Osservazioni

La funzione **atan** calcola l'arcotangente (funzione tangente inversa) di *x*. **atan2** calcola l'arcotangente di *y*/*x* (se *x* è uguale a 0, **atan2** restituisce s/2 se *y* è positivo, -/2 se *y* è negativo o 0 se *y* è 0.)

**atan** ha un'implementazione che utilizza streaming SIMD Extensions 2 (SSE2). Per informazioni e le restrizioni sull'uso dell'implementazione SSE2, vedere [_set_SSE2_enable](set-sse2-enable.md).

Dal momento che il linguaggio C, è possibile chiamare overload di **atan** e **atan2** che accettano argomenti **float** o **long** **double.** In un programma C, **atan** e **atan2** accettano sempre **doppi** argomenti e restituiscono un **valore double**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|
|-------------|---------------------|-|
|**atan**, **atan2**, **atanf**, **atan2f**, **atanl , atanl**, **atan2l**|\<math.h>|\<cmath> o \<math.h>|

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

[Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[acos, acosf, acosl](acos-acosf-acosl.md)<br/>
[asin, asinf, asinl](asin-asinf-asinl.md)<br/>
[cos, cosf, cosl](cos-cosf-cosl.md)<br/>
[_matherr](matherr.md)<br/>
[sin, sinf, sinl](sin-sinf-sinl.md)<br/>
[tan, tanf, tanl](tan-tanf-tanl.md)<br/>
[_CIatan](../../c-runtime-library/ciatan.md)<br/>
[_CIatan2](../../c-runtime-library/ciatan2.md)<br/>
