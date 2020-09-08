---
title: modf, modff, modfl
description: Informazioni di riferimento sulle API per modf, modff e modFL; che dividono un valore a virgola mobile in parti frazionarie e intere.
ms.date: 4/2/2020
api_name:
- modff
- modf
- modfl
- _o_modf
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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
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
ms.openlocfilehash: 0d3522079acc8a9d2c8409b1cad78e7f50a7f788
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89556762"
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

Questa funzione restituisce la parte frazionaria con segno di *x*. Non viene restituito alcun errore.

## <a name="remarks"></a>Osservazioni

Le funzioni **modf** suddividono il valore a virgola mobile *x* in parti frazionarie e intere, ognuna delle quali ha lo stesso segno di *x*. Viene restituita la parte frazionaria con segno di *x* . La parte intera viene archiviata come valore a virgola mobile in *IntPtr*.

**modf** dispone di un'implementazione che usa Streaming SIMD Extensions 2 (SSE2). Vedere [_set_SSE2_enable](set-sse2-enable.md) per informazioni e le restrizioni sull'uso dell'implementazione SSE2.

C++ consente l'overload, quindi è possibile chiamare overload di **modf** che accettano e restituiscono **`float`** **`long double`** parametri o. In un programma C **modf** accetta sempre due valori Double e restituisce un valore Double.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**modf**, **modff**, **modFL**|C \<math.h><br /><br /> C++:, \<cmath> o \<math.h>|

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

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[frexp](frexp.md)<br/>
[ldexp](ldexp.md)<br/>
