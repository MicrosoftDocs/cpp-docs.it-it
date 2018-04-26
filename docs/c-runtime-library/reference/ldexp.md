---
title: ldexp, ldexpf, ldexpl | Documenti Microsoft
ms.custom: ''
ms.date: 04/05/2018
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- ldexp
- ldexpf
- ldexpl
- _ldexpl
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
- ldexp
- ldexpf
- ldexpl
- _ldexpl
dev_langs:
- C++
helpviewer_keywords:
- calculating real numbers
- computing real numbers
- mantissas, floating-point variables
- ldexp function
- ldexpf function
- ldexpl function
- exponent, floating-point numbers
- floating-point functions, mantissa and exponent
ms.assetid: aa7f5310-3879-4f63-ae74-86a39fbdedfa
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c0149832285013d9572c785ce109e0bb87974747
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="ldexp-ldexpf-ldexpl"></a>ldexp, ldexpf, ldexpl

Moltiplica un numero a virgola mobile per una potenza integrale di due.

## <a name="syntax"></a>Sintassi

```C
double ldexp(
   double x,
   int exp
);
float ldexp(
   float x,
   int exp
);  // C++ only
long double ldexp(
   long double x,
   int exp
);  // C++ only
float ldexpf(
   float x,
   int exp
);
long double ldexpl(
   long double x,
   int exp
);
```

### <a name="parameters"></a>Parametri

*x*<br/>
Valore a virgola mobile.

*exp*<br/>
Esponente dell'intero.

## <a name="return-value"></a>Valore restituito

Il **ldexp** le funzioni restituiscono il valore di *x* * 2<sup>*exp* </sup> se ha esito positivo. In caso di overflow e in base al segno del *x*, **ldexp** restituisce + /- **HUGE_VAL**; **errno** valore è impostato su **ERANGE** .

Per ulteriori informazioni **errno** e di errore possibili valori restituiti, vedere [errno, doserrno, sys_errlist e sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Dato che C++ consente l'overload, è possibile chiamare overload di **ldexp** che accettano **float** oppure **lungo** **doppie** tipi. In un programma C **ldexp** ha sempre un **double** e un **int** e restituisce un **doppie**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione C|Intestazione C++|
|-------------|--------------|------------------|
|**ldexp**, **ldexpf**, **ldexpl**|\<math.h>|\<cmath>|

Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_ldexp.c

#include <math.h>
#include <stdio.h>

int main( void )
{
   double x = 4.0, y;
   int p = 3;

   y = ldexp( x, p );
   printf( "%2.1f times two to the power of %d is %2.1f\n", x, p, y );
}
```

## <a name="output"></a>Output

```Output
4.0 times two to the power of 3 is 32.0
```

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[frexp](frexp.md)<br/>
[modf, modff, modfl](modf-modff-modfl.md)<br/>
