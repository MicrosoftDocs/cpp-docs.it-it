---
title: EXP, expf, soluz | Documenti Microsoft
ms.custom: ''
ms.date: 04/05/2018
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- expf
- expl
- exp
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
- _expl
- expf
- expl
- exp
dev_langs:
- C++
helpviewer_keywords:
- exponential calculations
- expf function
- expl function
- calculating exponentials
- exp function
ms.assetid: 7070016d-1143-407e-9e9a-6b059bb88867
caps.latest.revision: 13
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 580c756c53f1a177506230f669fabd2be39d71d6
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="exp-expf-expl"></a>EXP, expf, soluz

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
Valore a virgola mobile a exponentiate la base del logaritmo naturale *e* da.

## <a name="return-value"></a>Valore restituito

Il **exp** le funzioni restituiscono il valore esponenziale del parametro a virgola mobile *x*, se ha esito positivo. Il risultato è *e*<sup>*x*</sup>, dove *e* è la base del logaritmo naturale. In caso di overflow, la funzione restituisce INF (infinito) e in caso di underflow, **exp** restituisce 0.

|Input|Eccezione SEH|Eccezione Matherr|
|-----------|-------------------|-----------------------|
|± NaN non interattivo, indeterminato|Nessuno|_DOMAIN|
|Infinito ±|NON VALIDO|_DOMAIN|
|x ≥ 7.097827e+002|INEXACT+OVERFLOW|OVERFLOW|
|X ≤ -7.083964e+002|INEXACT+UNDERFLOW|UNDERFLOW|

Il **exp** funzione è un'implementazione che utilizza Streaming SIMD Extensions 2 (SSE2). Per informazioni e per le restrizioni sull'uso dell'implementazione SSE2, vedere [_set_SSE2_enable](set-sse2-enable.md).

## <a name="remarks"></a>Note

C++ consente l'overload, pertanto è possibile chiamare degli overload di **exp** che accettano un **float** oppure **long double** argomento. In un programma C **exp** accetta e restituisce sempre un **doppie**.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C obbligatoria|Intestazione C++ obbligatoria|
|--------------|---------------------|---|
|**EXP**, **expf**, **expl**|\<math.h>|\<cmath> o \<math.h>|

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

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[log, logf, log10, log10f](log-logf-log10-log10f.md)<br/>
[_CIexp](../../c-runtime-library/ciexp.md)<br/>
