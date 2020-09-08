---
title: acosh, acoshf, acoshl
description: Informazioni di riferimento sulle API per acosh, acoshf e acoshl; che calcola il coseno iperbolico inverso di un valore a virgola mobile.
ms.date: 08/31/2020
api_name:
- acoshf
- acosh
- acoshl
- _o_acosh
- _o_acoshf
- _o_acoshl
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
- acosh
- acoshf
- acoshl
- math/acosh
- math/acoshf
- math/acoshl
helpviewer_keywords:
- acoshf function
- acosh function
- acoshl function
ms.assetid: 6985c4d7-9e2a-44ce-9a9b-5a43015f15f7
ms.openlocfilehash: ef6d47ca07f96be84962303c13162b154086e5f2
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89555111"
---
# <a name="acosh-acoshf-acoshl"></a>acosh, acoshf, acoshl

Calcola il coseno iperbolico inverso.

## <a name="syntax"></a>Sintassi

```C
double acosh( double x );
float acoshf( float x );
long double acoshl( long double x );
#define acosh(X) // Requires C11 or higher

float acosh( float x );  // C++ only
long double acosh( long double x );  // C++ only
```

### <a name="parameters"></a>Parametri

*x*\
Valore a virgola mobile.

## <a name="return-value"></a>Valore restituito

Le funzioni **acosh** restituiscono il coseno iperbolico inverso (coseno iperbolico d'arco) di *x*. Queste funzioni sono valide nel dominio *x* ≥ 1. Se *x* è minore di 1, `errno` viene impostato su `EDOM` e il risultato è una NaN non interattiva. Se *x* è un valore NaN non interattiva, indefinito o infinito, viene restituito lo stesso valore.

|Input|Eccezione SEH|Eccezione`_matherr`|
|-----------|-------------------|--------------------------|
|± QNAN, IND, INF|Nessuno|Nessuno|
|*x* < 1|Nessuno|Nessuno|

## <a name="remarks"></a>Osservazioni

Quando si usa C++, è possibile chiamare overload di **acosh** che accettano e restituiscono **`float`** valori o **`long double`** . In un programma C, a meno che non si stia usando la \<tgmath.h> macro per chiamare questa funzione, **acosh** accetta e restituisce sempre **`double`** .

Se si usa la \<tgmath.h> `acosh()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Function|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**acosh**, **acoshf**, **acoshl**|\<math.h>|\<cmath>|
|**acosh () (macro)** | \<tgmath.h> ||

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_acosh.c
// Compile by using: cl /W4 crt_acosh.c
// This program displays the hyperbolic cosine of pi / 4
// and the arc hyperbolic cosine of the result.

#include <math.h>
#include <stdio.h>

int main( void )
{
   double pi = 3.1415926535;
   double x, y;

   x = cosh( pi / 4 );
   y = acosh( x );
   printf( "cosh( %f ) = %f\n", pi/4, x );
   printf( "acosh( %f ) = %f\n", x, y );
}
```

```Output
cosh( 0.785398 ) = 1.324609
acosh( 1.324609 ) = 0.785398
```

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[asinh, asinhf, asinhl](asinh-asinhf-asinhl.md)<br/>
[atanh, atanhf, atanhl](atanh-atanhf-atanhl.md)<br/>
[cosh, coshf, coshl](cosh-coshf-coshl.md)<br/>
[sinh, sinhf, sinhl](sinh-sinhf-sinhl.md)<br/>
[tanh, tanhf, tanhl](tanh-tanhf-tanhl.md)
