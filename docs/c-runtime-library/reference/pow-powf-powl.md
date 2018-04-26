---
title: pow, powf, powl | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- powl
- pow
- powf
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
- powl
- pow
- _powl
- powf
dev_langs:
- C++
helpviewer_keywords:
- exponential calculations
- powl function
- _powl function
- exponentiation
- powers, calculating
- calculating exponentials
- powf function
- pow function
ms.assetid: e75c33ed-2e59-48b1-be40-81da917324f1
caps.latest.revision: 18
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 59aecd68fd38ee1dadd9883374528554e67ce77e
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="pow-powf-powl"></a>pow, powf, powl

Calcola *x* elevato alla potenza di *y*.

## <a name="syntax"></a>Sintassi

```C
double pow( double x, double y );
float powf( float x, float y );
long double powl( long double x, long double y );
```

```cpp
double pow( double x, int y );  // C++ only
float pow( float x, float y );  // C++ only
float pow( float x, int y );  // C++ only
long double pow( long double x, long double y );  // C++ only
long double pow( long double x, int y );  // C++ only
```

### <a name="parameters"></a>Parametri

*x*<br/>
Base.

*y*<br/>
Esponente.

## <a name="return-value"></a>Valore restituito

Restituisce il valore del *x*<sup>*y*</sup>. In caso di overflow o di underflow non viene stampato alcun messaggio di errore.

|Valori di x e y|Valore restituito di pow|
|-----------------------|-------------------------|
|*x* ! = 0,0 e *y* = = 0,0|1|
|*x* = = 0,0 e *y* = = 0,0|1|
|*x* = = 0,0 e *y* < 0|INF|

## <a name="remarks"></a>Note

**pow** non riconosce i valori a virgola mobile e integrali maggiori di 2<sup>64</sup> (ad esempio, 1.0E100).

**pow** ha un'implementazione che utilizza Streaming SIMD Extensions 2 (SSE2). Per informazioni e le restrizioni sull'uso dell'implementazione SSE2, vedere [_set_SSE2_enable](set-sse2-enable.md).

Poiché C++ consente l'overload, è possibile chiamare uno dei diversi overload di **pow**. In un programma C **pow** ha sempre due **double** valori e restituisce un **doppie** valore.

L'overload `pow(int, int)` non è più disponibile. Se si utilizza questo overload, il compilatore può generare [C2668](../../error-messages/compiler-errors-2/compiler-error-c2668.md). Per evitare questo problema, eseguire il cast il primo parametro per **doppie**, **float**, o **lungo** **doppie**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|
|-|-|-|
|**pow**, **powf**, **powl**|\<math.h>|\<math.h> o \<cmath>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_pow.c

#include <math.h>
#include <stdio.h>

int main( void )
{
   double x = 2.0, y = 3.0, z;

   z = pow( x, y );
   printf( "%.1f to the power of %.1f is %.1f\n", x, y, z );
}
```

```Output
2.0 to the power of 3.0 is 8.0
```

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md) <br/>
[exp, expf, expl](exp-expf.md) <br/>
[log, logf, log10, log10f](log-logf-log10-log10f.md) <br/>
[sqrt, sqrtf, sqrtl](sqrt-sqrtf-sqrtl.md) <br/>
[_CIpow](../../c-runtime-library/cipow.md)<br/>
