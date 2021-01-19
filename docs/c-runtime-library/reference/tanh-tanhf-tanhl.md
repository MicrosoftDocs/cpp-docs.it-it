---
title: tanh, tanhf, tanhl
description: Informazioni di riferimento sulle API per tanh, tanhf e tanhl; che calcola la tangente iperbolica di un valore a virgola mobile.
ms.date: 1/15/2021
api_name:
- tanh
- tanhf
- tanhl
- _o_tanh
- _o_tanhf
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
- tanh
- tanhf
- tanhl
- _tanhl
helpviewer_keywords:
- tanhl function
- _tanhl function
- tanh function
- tanhf function
- trigonometric functions
- hyperbolic functions
ms.openlocfilehash: c09655b4a86010ff6a476f7dacbce4f9f73ab3cc
ms.sourcegitcommit: 92dc6d99ba5dcf3b64dee164df2d29beb1e608da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/18/2021
ms.locfileid: "98564121"
---
# <a name="tanh-tanhf-tanhl"></a>`tanh`, `tanhf`, `tanhl`

Calcola la tangente iperbolica.

## <a name="syntax"></a>Sintassi

```C
double tanh( double x );
float tanhf( float x );
long double tanhl( long double x );
#define tanh(x) // Requires C11 or higher
```

```cpp
float tanh( float x );  // C++ only
long double tanh( long double x );  // C++ only
```

### <a name="parameters"></a>Parametri

*`x`*\
Angolo in radianti.

## <a name="return-value"></a>Valore restituito

Le **`tanh`** funzioni restituiscono la tangente iperbolica di *`x`* . Non viene restituito alcun errore.

|Input|Eccezione SEH|**`Matherr`** eccezione|
|-----------|-------------------|-------------------------|
|± `QNAN`,`IND`|Nessuno|`_DOMAIN`|

## <a name="remarks"></a>Commenti

Poiché C++ consente l'overload, è possibile chiamare gli overload di **`tanh`** che accettano e restituiscono **`float`** valori o **`long double`** . In un programma C, a meno che non si usi la `<tgmath.h>` macro per chiamare questa funzione, **`tanh`** accetta e restituisce sempre **`double`** .

Se si usa la `<tgmath.h>` `tanh()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria (C)|Intestazione obbligatoria (C)|
|-------------|---------------------|-|
|**`tanh`**, **`tanhf`**, **`tanhl`**|`<math.h>`|`<cmath>` o `<math.h>`|
|**`tanh()`** macro | `<tgmath.h>` ||

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_tanh.c
// This program displays the tangent of pi / 4
// and the hyperbolic tangent of the result.
// Compile by using: cl crt_tanh.c

#include <math.h>
#include <stdio.h>

int main( void )
{
   double pi = 3.1415926535;
   double x, y;

   x = tan( pi / 4 );
   y = tanh( x );
   printf( "tan( %f ) = %f\n", pi/4, x );
   printf( "tanh( %f ) = %f\n", x, y );
}
```

```Output
tan( 0.785398 ) = 1.000000
tanh( 1.000000 ) = 0.761594
```

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)\
[`acosh, acoshf, acoshl`](acosh-acoshf-acoshl.md)\
[`asinh, asinhf, asinhl`](asinh-asinhf-asinhl.md)\
[`atanh, atanhf, atanhl`](atanh-atanhf-atanhl.md)\
[`cosh, coshf, coshl`](cosh-coshf-coshl.md)\
[`sinh, sinhf, sinhl`](sinh-sinhf-sinhl.md)