---
title: frexp, frexpf, frexpl
ms.date: 04/05/2018
api_name:
- frexp
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- frexp
- _frexpl
helpviewer_keywords:
- _frexpl function
- mantissas, floating-point variables
- frexpl function
- exponent, floating-point numbers
- frexp function
- floating-point functions, mantissa and exponent
ms.assetid: 9b020f2e-3967-45ec-a6a8-d467a071aa55
ms.openlocfilehash: 3a67ced9bd6653a7c40c98a8cf015663c37457bb
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70956630"
---
# <a name="frexp-frexpf-frexpl"></a>frexp, frexpf, frexpl

Ottiene la mantissa e l'esponente di un numero a virgola mobile.

## <a name="syntax"></a>Sintassi

```C
double frexp(
   double x,
   int *expptr
);
float frexpf(
   float x,
   int * expptr
);
long double frexpl(
   long double x,
   int * expptr
);
float frexp(
   float x,
   int * expptr
);  // C++ only
long double frexp(
   long double x,
   int * expptr
);  // C++ only
```

### <a name="parameters"></a>Parametri

*x*<br/>
Valore a virgola mobile.

*expptr*<br/>
Puntatore all'esponente intero archiviato.

## <a name="return-value"></a>Valore restituito

**frexp** restituisce mantissa. Se *x* è 0, la funzione restituisce 0 sia per mantissa che per l'esponente. Se *expptr* è **null**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione imposta **errno** su **EINVAL** e restituisce 0.

## <a name="remarks"></a>Note

La funzione **frexp** suddivide il valore a virgola mobile (*x*) in un mantissa (*m*) e un esponente (*n*), in modo che il valore assoluto di *m* sia maggiore o uguale a 0,5 e minore di 1,0 e *x*  =  *m* * 2<sup>*n*</sup>. L'esponente integer *n* viene archiviato nella posizione a cui punta *expptr*.

C++consente l'overload, in modo che sia possibile chiamare gli overload di **frexp**. In un programma C **frexp** accetta sempre un **valore Double** e un puntatore **int** e restituisce un **valore Double**.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**frexp**, **frexpf**, **frexpl**|\<math.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_frexp.c
// This program calculates frexp( 16.4, &n )
// then displays y and n.

#include <math.h>
#include <stdio.h>

int main( void )
{
   double x, y;
   int n;

   x = 16.4;
   y = frexp( x, &n );
   printf( "frexp( %f, &n ) = %f, n = %d\n", x, y, n );
}
```

```Output
frexp( 16.400000, &n ) = 0.512500, n = 5
```

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[ldexp](ldexp.md)<br/>
[modf, modff, modfl](modf-modff-modfl.md)<br/>
