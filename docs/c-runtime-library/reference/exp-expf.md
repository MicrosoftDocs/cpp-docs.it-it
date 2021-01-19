---
title: exp, expf, expl
description: Informazioni di riferimento sulle API per exp, expf e soluz; che calcolano l'esponenziale.
ms.date: 1/15/2021
api_name:
- expf
- expl
- exp
- _o_exp
- _o_expf
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
ms.openlocfilehash: ac51744fe332fbf378139df11e7d07afe44029ca
ms.sourcegitcommit: 92dc6d99ba5dcf3b64dee164df2d29beb1e608da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/18/2021
ms.locfileid: "98564004"
---
# <a name="exp-expf-expl"></a>`exp`, `expf`, `expl`

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
#define exp(z) // Requires C11 or higher
```

### <a name="parameters"></a>Parametri

*`x`*\
Valore a virgola mobile in cui exponentiate il logaritmo naturale base *e* da.

## <a name="return-value"></a>Valore restituito

Le **`exp`** funzioni restituiscono il valore esponenziale del parametro a virgola mobile, *`x`* , se ha esito positivo. Ovvero il risultato è *e* <sup>*`x`*</sup> , dove *e* è la base del logaritmo naturale. In un overflow, la funzione restituisce `INF` (infinito) e in underflow, **`exp`** restituisce 0.

|Input|Eccezione SEH|`Matherr` eccezione|
|-----------|-------------------|-----------------------|
|± NaN silenzioso, indeterminato|nessuno|`_DOMAIN`|
|Infinito ±|`INVALID`|`_DOMAIN`|
|x ≥ 7.097827e+002|`INEXACT+OVERFLOW`|`OVERFLOW`|
|X ≤ -7.083964e+002|`INEXACT+UNDERFLOW`|`UNDERFLOW`|

La **`exp`** funzione ha un'implementazione che usa Streaming SIMD Extensions 2 (SSE2). [`_set_SSE2_enable`](set-sse2-enable.md)Per informazioni e restrizioni sull'uso dell'implementazione SSE2, vedere.

## <a name="remarks"></a>Commenti

C++ consente l'overload, quindi è possibile chiamare gli overload di **`exp`** che accettano un **`float`** **`long double`** argomento o. In un programma C, a meno che non si stia usando la `<tgmath.h>` macro per chiamare questa funzione, **`exp`** accetta sempre e restituisce un **`double`** .

Se si usa la `<tgmath.h>` `exp()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C obbligatoria|Intestazione C++ obbligatoria|
|--------------|---------------------|---|
|**`exp`**, **`expf`**, **`expl`**|`<math.h>`|`<cmath>` o `<math.h>`|
|**`exp`** macro| `<tgmath.h>` ||

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

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

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)\
[l`og, logf, log10, log10f`](log-logf-log10-log10f.md)\
[`_CIexp`](../../c-runtime-library/ciexp.md)