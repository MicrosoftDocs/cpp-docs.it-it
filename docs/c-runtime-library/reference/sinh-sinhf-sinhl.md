---
title: sinh, sinhf, sinhl
description: Informazioni di riferimento sulle API per il calcolo del seno iperbolico di un valore a virgola mobile.
ms.date: 1/15/2021
api_name:
- sinh
- sinhl
- sinhf
- sinhl
- _o_sinh
- _o_sinhf
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
- sinh
- sinhf
- sinhl
helpviewer_keywords:
- sinh function
- sinhl function
- sinhf function
- calculating hyperbolic sines
- trigonometric functions
- sinhf function
- sinhl function
- hyperbolic functions
ms.openlocfilehash: 73f7210105419c4b8cb9a6e47e5c5f0e43437738
ms.sourcegitcommit: 92dc6d99ba5dcf3b64dee164df2d29beb1e608da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/18/2021
ms.locfileid: "98563796"
---
# <a name="sinh-sinhf-sinhl"></a>`sinh`, `sinhf`, `sinhl`

Calcola il seno iperbolico.

## <a name="syntax"></a>Sintassi

```C
double sinh(double x);
float sinhf(float x);
long double sinhl(long double x);
#define sinh(x) // Requires C11 or higher

float sinh(float x);  // C++ only
long double sinh(long double x);  // C++ only
```

### <a name="parameters"></a>Parametri

*`x`*\
Angolo in radianti.

## <a name="return-value"></a>Valore restituito

Le **`sinh`** funzioni restituiscono il seno iperbolico di *`x`* . Per impostazione predefinita, se il risultato è troppo grande, **`sinh`** imposta **`errno`** su **`ERANGE`** e restituisce ± **`HUGE_VAL`** .

|Input|Eccezione SEH|`Matherr` eccezione|
|-----------|-------------------|-----------------------|
|± `QNAN`,`IND`|nessuno|`_DOMAIN`|
|&#124;x&#124; ≥ 7.104760 e + 002|`OVERFLOW+INEXACT`|`OVERFLOW`|

Per ulteriori informazioni sui codici restituiti, vedere [ `errno` , `_doserrno` , `_sys_errlist` e `_sys_nerr` ](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Commenti

Poiché C++ consente l'overload, è possibile chiamare gli overload di **`sinh`** che accettano e restituiscono **`float`** valori o **`long double`** . In un programma C, a meno che non si usi la `<tgmath.h>` macro per chiamare questa funzione, **`sinh`** accetta e restituisce sempre **`double`** .

Se si usa la `<tgmath.h>` `sinh()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|
|-|-|-|
|**`sinh`**, **`sinhf`**, **`sinhl`**|`<math.h>`|`<cmath>` o `<math.h>`|
|**`sinh()`** macro | `<tgmath.h>` ||

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

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

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)\
[`acosh`, `acoshf`, `acoshl`](acosh-acoshf-acoshl.md)\
[`asinh`, `asinhf`, `asinhl`](asinh-asinhf-asinhl.md)\
[`atanh`, `atanhf`, `atanhl`](atanh-atanhf-atanhl.md)\
[`cosh`, `coshf`, `coshl`](cosh-coshf-coshl.md)\
[`tanh`, `tanhf`, `tanhl`](tanh-tanhf-tanhl.md)