---
title: frexp, frexpf, frexpl
ms.date: 4/2/2020
api_name:
- frexp
- _o_frexp
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
ms.openlocfilehash: 79fe70341f0d6fef1dc7fe00f872456a11972876
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81345802"
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

*X*<br/>
Valore a virgola mobile.

*expptr*<br/>
Puntatore all'esponente intero archiviato.

## <a name="return-value"></a>Valore restituito

**frexp** restituisce la mantissa. Se *x* è 0, la funzione restituisce 0 sia per la mantissa che per l'esponente. Se *expptr* è **NULL**, il gestore di parametri non validi viene richiamato come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione imposta **errno** su **EINVAL** e restituisce 0.

## <a name="remarks"></a>Osservazioni

La funzione **frexp** scompone il valore a virgola mobile (*x*) in una mantissa (*m*) e un esponente (*n*), in modo che il valore assoluto di *m* sia maggiore o uguale a 0,5 e minore di 1,0 e *x* = *m* , 2<sup>*n*</sup>. L'esponente intero *n* viene memorizzato nella posizione a cui punta *expptr*.

Il linguaggio C, ovvero l'overload, in modo da poter chiamare gli overload di **frexp**. In un programma C, **frexp** accetta sempre un **puntatore double** e un **int** e restituisce un **doppio**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

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

[Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[ldexp](ldexp.md)<br/>
[modf, modff, modfl](modf-modff-modfl.md)<br/>
