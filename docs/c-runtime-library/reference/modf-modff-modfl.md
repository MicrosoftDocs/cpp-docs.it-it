---
title: modf, modff, modfl
ms.date: 04/05/2018
apiname:
- modff
- modf
- modfl
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
- modff
- _modfl
- modf
- modfl
- math/modf
- math/modff
- math/modfl
helpviewer_keywords:
- modf function
- modff function
- modfl function
ms.assetid: b1c7abf5-d476-43ca-a03c-02072a86e32d
ms.openlocfilehash: 59d6e2b9b02ad182c5630d6dc9a989c035e8fa92
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50478065"
---
# <a name="modf-modff-modfl"></a>modf, modff, modfl

Divide un valore a virgola mobile in parte frazionaria e parte intera.

## <a name="syntax"></a>Sintassi

```C
double modf( double x, double * intptr );
float modff( float x, float * intptr );
long double modfl( long double x, long double * intptr );
```

```cpp
float modf( float x, float * intptr );  // C++ only
long double modf( long double x, long double * intptr );  // C++ only
```

### <a name="parameters"></a>Parametri

*x*<br/>
Valore a virgola mobile.

*IntPtr*<br/>
Puntatore alla parte intera archiviata.

## <a name="return-value"></a>Valore restituito

Questa funzione restituisce la parte frazionaria con segno di *x*. Non vi è restituzione di errori.

## <a name="remarks"></a>Note

Il **modf** funzioni suddividono il valore a virgola mobile *x* in parte frazionaria e parte intera, ognuno dei quali ha lo stesso segno *x*. La parte frazionaria con segno di *x* viene restituito. La parte intera viene archiviata come un valore a virgola mobile in corrispondenza *intptr*.

**modf** dispone di un'implementazione che usa Streaming SIMD Extensions 2 (SSE2). Per informazioni e per le restrizioni sull'uso dell'implementazione SSE2, vedere [_set_SSE2_enable](set-sse2-enable.md).

C++ consente l'overload, quindi è possibile chiamare overload di **modf** che accettano e restituiscono **float** oppure **long** **double** parametri. In un programma C **modf** sempre accetta due valori double e restituisce un valore double.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**modf**, **modff**, **modfl**|C: \<math.h><br /><br /> C++:, \<cmath> o \<math.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_modf.c

#include <math.h>
#include <stdio.h>

int main( void )
{
   double x, y, n;

   x = -14.87654321;      /* Divide x into its fractional */
   y = modf( x, &n );     /* and integer parts            */

   printf( "For %f, the fraction is %f and the integer is %.f\n",
           x, y, n );
}
```

```Output
For -14.876543, the fraction is -0.876543 and the integer is -14
```

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[frexp](frexp.md)<br/>
[ldexp](ldexp.md)<br/>
