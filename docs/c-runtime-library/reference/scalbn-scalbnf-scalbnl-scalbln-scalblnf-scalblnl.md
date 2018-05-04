---
title: scalbn, scalbnf, scalbnl, scalbln, scalblnf, scalblnl | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- scalblnl
- scalbnl
- scalbnf
- scalblnf
- scalbn
- scalbln
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
- scalblnf
- scalbnl
- scalblnl
- scalbln
- scalbn
- scalbnf
dev_langs:
- C++
helpviewer_keywords:
- scalbn function
- scalbln function
- scalblnl function
- scalbnl function
- scalbnf function
- scalblnf function
ms.assetid: df2f1543-8e39-4af4-a5cf-29307e64807d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 26f3d4945ef339f5166bdd07bc8d5615b161d266
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="scalbn-scalbnf-scalbnl-scalbln-scalblnf-scalblnl"></a>scalbn, scalbnf, scalbnl, scalbln, scalblnf, scalblnl

Moltiplica un numero a virgola mobile per una potenza integrale di FLT_RADIX.

## <a name="syntax"></a>Sintassi

```C
double scalbn(
   double x,
   int exp
);
float scalbn(
   float x,
   int exp
);  // C++ only
long double scalbn(
   long double x,
   int exp
);  // C++ only
float scalbnf(
   float x,
   int exp
);
long double scalbnl(
   long double x,
   int exp
);
double scalbln(
   double x,
   long exp
);
float scalbln(
   float x,
   long exp
);  // C++ only
long double scalbln(
   long double x,
   long exp
);  // C++ only
float scalblnf(
   float x,
   long exp
);
long double scalblnl(
   long double x,
   long exp
);
```

### <a name="parameters"></a>Parametri

*x*<br/>
Valore a virgola mobile.

*exp*<br/>
Esponente dell'intero.

## <a name="return-value"></a>Valore restituito

Il **scalbn** le funzioni restituiscono il valore di *x* * **FLT_RADIX**<sup>exp</sup> quando ha esito positivo. In caso di overflow (in base al segno del *x*), **scalbn** restituisce + /- **HUGE_VAL**; **errno** valore è impostato su **ERANGE** .

Per ulteriori informazioni **errno** e di errore possibili valori restituiti, vedere [errno, doserrno, sys_errlist e sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

**FLT_RADIX** è definito in \<float. h > ha un valore pari a 2, come la radice a virgola mobile nativa; nei sistemi binari, e **scalbn** equivale al [ldexp](ldexp.md).

Dato che C++ consente l'overload, è possibile chiamare overload di **scalbn** e **scalbln** che accettino e restituiscano **float** oppure **lungo** **doppie** tipi. In un programma C **scalbn** ha sempre un **double** e un **int** e restituisce un **doppie**, e **scalbln**accetta sempre una **doppie** e un **long** e restituisce un **doppie**.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**scalbn**, **scalbnf**, **scalbnl**, **scalbln**, **scalblnf**, **scalblnl**|\<math.h>|\<cmath>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_scalbn.c
// Compile using: cl /W4 crt_scalbn.c
#include <math.h>
#include <stdio.h>

int main( void )
{
   double x = 6.4, y;
   int p = 3;

   y = scalbn( x, p );
   printf( "%2.1f times FLT_RADIX to the power of %d is %2.1f\n", x, p, y );
}
```

### <a name="output"></a>Output

```Output
6.4 times FLT_RADIX to the power of 3 is 51.2
```

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[frexp](frexp.md)<br/>
[ldexp](ldexp.md)<br/>
[modf, modff, modfl](modf-modff-modfl.md)<br/>
