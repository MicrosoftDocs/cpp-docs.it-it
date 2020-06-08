---
title: log, logf, logl, log10, log10f, log10l
ms.date: 6/5/2020
api_name:
- log10f
- logf
- log10
- log
- log10l
- logl
- _o_log
- _o_log10
- _o_log10f
- _o_logf
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
- logf
- logl
- _log10l
- log
- _logl
- log10f
- log10l
- log10
helpviewer_keywords:
- calculating logarithms
- log10f function
- log10 function
- log function
- log10l function
- logl function
- logf function
- logarithms
ms.assetid: 7adc77c2-04f7-4245-a980-21215563cfae
ms.openlocfilehash: ce01a16e173ba3afb7ad8a0d55303559519fe19e
ms.sourcegitcommit: fe146adb3a02872538637196bb3c45aeeeaaf5c2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/08/2020
ms.locfileid: "84507040"
---
# <a name="log-logf-logl-log10-log10f-log10l"></a>log, logf, logl, log10, log10f, log10l

Calcola logaritmi.

## <a name="syntax"></a>Sintassi

```C
double log( double x );
float logf( float x );
long double logl( double x );
double log10( double x );
float log10f ( float x );
long double log10l( double x );
```

```cpp
float log( float x );  // C++ only
long double log( long double x );  // C++ only
float log10( float x );  // C++ only
long double log10( long double x );  // C++ only
```

### <a name="parameters"></a>Parametri

*x*<br/>
Valore di cui trovare il logaritmo.

## <a name="return-value"></a>Valore restituito

Le funzioni di **log** restituiscono il logaritmo naturale (base *e*) di *x* in caso di esito positivo. Le funzioni **log10** restituiscono il logaritmo in base 10. Se *x* è negativo, queste funzioni restituiscono un valore indefinito (IND) per impostazione predefinita. Se *x* è 0, restituiscono Infinity (inf).

|Input|Eccezione SEH|Eccezione Matherr|
|-----------|-------------------|-----------------------|
|± QNAN, IND|Nessuno|_DOMAIN|
|± 0|ZERODIVIDE|_SING|
|*x* < 0|NON VALIDO|_DOMAIN|

**log** e **log10** hanno un'implementazione che usa Streaming SIMD Extensions 2 (SSE2). Vedere [_set_SSE2_enable](set-sse2-enable.md) per informazioni e le restrizioni sull'uso dell'implementazione SSE2.

## <a name="remarks"></a>Osservazioni

C++ consente l'overload, quindi è possibile chiamare overload di **log** e **log10** che accettano e restituiscono valori **float** o **long double** . In un programma C, **log** e **log10** accettano sempre e restituiscono un **valore Double**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**log**, **logf**, **logl**, **log10**, **log10f**, **log10l**|\<math.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_log.c
/* This program uses log and log10
* to calculate the natural logarithm and
* the base-10 logarithm of 9,000.
*/

#include <math.h>
#include <stdio.h>

int main( void )
{
   double x = 9000.0;
   double y;

   y = log( x );
   printf( "log( %.2f ) = %f\n", x, y );
   y = log10( x );
   printf( "log10( %.2f ) = %f\n", x, y );
}
```

```Output
log( 9000.00 ) = 9.104980
log10( 9000.00 ) = 3.954243
```

Per generare logaritmi per altre basi, usare la relazione matematica: log base b di a == logaritmo naturale (a) / logaritmo naturale (b).

```cpp
// logbase.cpp
#include <math.h>
#include <stdio.h>

double logbase(double a, double base)
{
   return log(a) / log(base);
}

int main()
{
   double x = 65536;
   double result;

   result = logbase(x, 2);
   printf("Log base 2 of %lf is %lf\n", x, result);
}
```

```Output
Log base 2 of 65536.000000 is 16.000000
```

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md) <br/>
[exp, expf, expl](exp-expf.md) <br/>
[_matherr](matherr.md) <br/>
[pow, powf, powl](pow-powf-powl.md) <br/>
[_CIlog](../../c-runtime-library/cilog.md) <br/>
[_CIlog10](../../c-runtime-library/cilog10.md)<br/>
