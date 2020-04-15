---
title: exp, expf, expl
ms.date: 4/2/2020
api_name:
- expf
- expl
- exp
- _o_exp
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
- _expl
- expf
- expl
- exp
helpviewer_keywords:
- exponential calculations
- expf function
- expl function
- calculating exponentials
- exp function
ms.assetid: 7070016d-1143-407e-9e9a-6b059bb88867
ms.openlocfilehash: cbf303b2b92afd83a1c3181dc98a1dbdcd639c1b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81347589"
---
# <a name="exp-expf-expl"></a>exp, expf, expl

Calcola l'esponenziale.

## <a name="syntax"></a>Sintassi

```C
double exp(
   double x
);
float exp(
   float x
);  // C++ only
long double exp(
   long double x
);  // C++ only
float expf(
   float x
);
long double expl(
   long double x
);
```

### <a name="parameters"></a>Parametri

*X*<br/>
Valore a virgola mobile per esporre la base naturale del logaritmo *e* by.

## <a name="return-value"></a>Valore restituito

Le funzioni **exp** restituiscono il valore esponenziale del parametro a virgola mobile, *x*, in caso di esito positivo. Cioè, il risultato è *e*<sup>*x*</sup>, dove *e* è la base del logaritmo naturale. In caso di overflow, la funzione restituisce INF (infinito) e in caso di underflow, **exp** restituisce 0.

|Input|Eccezione SEH|Eccezione Matherr|
|-----------|-------------------|-----------------------|
|- Tranquilla NaN, indeterminata|nessuno|_DOMAIN|
|- Infinito|NON VALIDO|_DOMAIN|
|x ≥ 7.097827e+002|INEXACT+OVERFLOW|OVERFLOW|
|X ≤ -7.083964e+002|INEXACT+UNDERFLOW|UNDERFLOW|

La funzione **exp** ha un'implementazione che utilizza Streaming SIMD Extensions 2 (SSE2). Vedere [_set_SSE2_enable](set-sse2-enable.md) per informazioni e le restrizioni sull'uso dell'implementazione SSE2.

## <a name="remarks"></a>Osservazioni

Il linguaggio C, ovvero l'overload, pertanto è possibile chiamare overload di **exp** che accettano un argomento **float** o **long double.** In un programma C, **exp** accetta e restituisce sempre un **valore double**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C obbligatoria|Intestazione C++ obbligatoria|
|--------------|---------------------|---|
|**exp**, **expf**, **expl**|\<math.h>|\<cmath> o \<math.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_exp.c

#include <math.h>
#include <stdio.h>

int main( void )
{
   double x = 2.302585093, y;

   y = exp( x );
   printf( "exp( %f ) = %f\n", x, y );
}
```

```Output
exp( 2.302585 ) = 10.000000
```

## <a name="see-also"></a>Vedere anche

[Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[log, logf, log10, log10f](log-logf-log10-log10f.md)<br/>
[_CIexp](../../c-runtime-library/ciexp.md)<br/>
