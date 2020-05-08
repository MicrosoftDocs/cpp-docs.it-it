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
ms.assetid: 7070016d-1143-407e-9e9a-6b059bb88867
ms.openlocfilehash: b6d4906212073ab8cb04a0ab77d1234d444a4c95
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82909660"
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

*x*<br/>
Valore a virgola mobile in cui exponentiate il logaritmo naturale base *e* da.

## <a name="return-value"></a>Valore restituito

Le funzioni **Exp** restituiscono il valore esponenziale del parametro a virgola mobile, *x*, se ha esito positivo. Ovvero il risultato è *e*<sup>*x*</sup>, dove *e* è la base del logaritmo naturale. In un overflow, la funzione restituisce INF (infinito) e in underflow, **Exp** restituisce 0.

|Input|Eccezione SEH|Eccezione Matherr|
|-----------|-------------------|-----------------------|
|± NaN silenzioso, indeterminato|Nessuno|_DOMAIN|
|Infinito ±|NON VALIDO|_DOMAIN|
|x ≥ 7.097827e+002|INEXACT+OVERFLOW|OVERFLOW|
|X ≤ -7.083964e+002|INEXACT+UNDERFLOW|UNDERFLOW|

La funzione **Exp** ha un'implementazione che usa Streaming SIMD Extensions 2 (SSE2). Vedere [_set_SSE2_enable](set-sse2-enable.md) per informazioni e le restrizioni sull'uso dell'implementazione SSE2.

## <a name="remarks"></a>Osservazioni

C++ consente l'overload, quindi è possibile chiamare gli overload di **Exp** che accettano un argomento **float** o **long double** . In un programma C, **Exp** accetta e restituisce sempre un **valore Double**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Function|Intestazione C obbligatoria|Intestazione C++ obbligatoria|
|--------------|---------------------|---|
|**Exp**, **expf**, **soluz**|\<math.h>|\<cmath> o \<math.h>|

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
