---
title: atanh, atanhf, atanhl
description: Informazioni di riferimento sulle API per atanh, atanhf e atanhl; che calcola la tangente iperbolica inversa di un valore a virgola mobile.
ms.date: 08/31/2020
api_name:
- atanhl
- atanhf
- atanh
- _o_atanh
- _o_atanhf
- _o_atanhl
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
- atanhl
- atanhf
- atanh
helpviewer_keywords:
- atanhf function
- atanhl function
- atanh funciton
ms.assetid: 83a43b5b-2580-4461-854f-dc84236d9f32
ms.openlocfilehash: c0a8e06963519553144c7e49d26e61dbbde51c21
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89555592"
---
# <a name="atanh-atanhf-atanhl"></a>atanh, atanhf, atanhl

Calcola la tangente iperbolica inversa.

## <a name="syntax"></a>Sintassi

```C
double atanh( double x );
float atanhf( float x );
long double atanhl( long double x );
#define atanh(X) // Requires C11 or higher

float atanh( float x );  // C++ only
long double atanh( long double x );  // C++ only
```

### <a name="parameters"></a>Parametri

*x*\
Valore a virgola mobile.

## <a name="return-value"></a>Valore restituito

Le funzioni **atanh** restituiscono la tangente iperbolico inversa (tangente iperbolica di arco) di *x*. Se *x* è maggiore di 1 o minore di-1, **errno** viene impostato su **Edom** e il risultato è una NaN non interattiva. Se *x* è uguale a 1 o-1, viene restituito un infinito positivo o negativo, rispettivamente, e **errno** viene impostato su **ERANGE**.

|Input|Eccezione SEH|**Matherr** Eccezione|
|-----------|-------------------|-------------------------|
|± QNAN, IND|Nessuno|Nessuno|
|*X* ≥ 1; *x* ≤-1|Nessuno|Nessuno|

## <a name="remarks"></a>Osservazioni

Poiché C++ consente l'overload, è possibile chiamare overload di **atanh** che accettano e restituiscono **`float`** **`long double`** valori o. In un programma C, a meno che non si stia usando la \<tgmath.h> macro per chiamare questa funzione, **atanh** accetta e restituisce sempre **`double`** .

Se si usa la \<tgmath.h> `atanh()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Function|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**atanh**, **atanhf**, **atanhl**|\<math.h>|\<cmath> o \<math.h>|
|**atanh () (macro)** | \<tgmath.h> ||

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

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[acosh, acoshf, acoshl](acosh-acoshf-acoshl.md)<br/>
[asinh, asinhf, asinhl](asinh-asinhf-asinhl.md)<br/>
[cosh, coshf, coshl](cosh-coshf-coshl.md)<br/>
[sinh, sinhf, sinhl](sinh-sinhf-sinhl.md)<br/>
[tanh, tanhf, tanhl](tanh-tanhf-tanhl.md)<br/>
