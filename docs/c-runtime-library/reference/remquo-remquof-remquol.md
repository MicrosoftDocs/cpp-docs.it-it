---
title: remquo, remquof, remquol
description: Informazioni di riferimento sulle API per remquo, remquof e remquol; che calcola il resto di due valori integer e archivia un valore intero con il segno e la grandezza approssimativa del quoziente in una posizione specificata in un parametro.
ms.date: 9/1/2020
api_name:
- remquof
- remquo
- remquol
- _o_remquo
- _o_remquof
- _o_remquol
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
- remquof
- remquol
- remquo
helpviewer_keywords:
- remquol function
- remquof function
- remquo function
ms.assetid: a1d3cb8b-8027-4cd3-8deb-04eb17f299fc
ms.openlocfilehash: b80815ef9a92e6551b7866ccc2b589268642c095
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91507544"
---
# <a name="remquo-remquof-remquol"></a>remquo, remquof, remquol

Calcola il resto di due valori interi e archivia un valore intero con il segno e la grandezza approssimativa del quoziente in una posizione specificata in un parametro.

## <a name="syntax"></a>Sintassi

```C
double remquo( double numer, double denom, int* quo );
float remquof( float numer, float denom, int* quo );
long double remquol( long double numer, long double denom, int* quo );
#define remquo(X, Y, INT_PTR) // Requires C11 or higher

float remquo( float numer, float denom, int* quo ); /* C++ only */
long double remquo( long double numer, long double denom, int* quo ); /* C++ only */
```

### <a name="parameters"></a>Parametri

*numero*\
Numeratore.

*Denom*\
Denominatore.

*quo*\
Puntatore a un intero per archiviare un valore con il segno e la grandezza approssimativa del quoziente.

## <a name="return-value"></a>Valore restituito

**remquo** restituisce il resto a virgola mobile di *x*  /  *y*. Se il valore di *y* è 0,0, **remquo** restituisce un valore NaN non interattiva. Per informazioni sulla rappresentazione di un valore NaN non interattivo da parte della famiglia **printf** , vedere [printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md).

## <a name="remarks"></a>Osservazioni

La funzione **remquo** calcola il resto a virgola mobile *f* di *x*  /  *y* in modo *che x*  =  *i* \* *y*  +  *f*, dove *i* è un numero intero, *f* ha lo stesso segno di *x*e il valore assoluto di *f* è minore del valore assoluto di *y*.

C++ consente l'overload, quindi è possibile chiamare overload di **remquo** che accettano e restituiscono **`float`** **`long double`** valori o. In un programma C, a meno che non si stia usando la \<tgmath.h> macro per chiamare questa funzione, **remquo** accetta sempre due **`double`** argomenti e restituisce un **`double`** .

Se si usa la \<tgmath.h> `remquo()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|
|--------------|---------------------|-|
|**remquo**, **remquof**, **remquol**|\<math.h>|\<cmath> o \<math.h>|
|**remquo** (macro) | \<tgmath.h> ||

Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_remquo.c
// This program displays a floating-point remainder.

#include <math.h>
#include <stdio.h>

int main( void )
{
   double w = -10.0, x = 3.0, z;
   int quo = 0;

   z = remquo(w, x, &quo);
   printf("The remainder of %.2f / %.2f is %f\n", w, x, z);
   printf("Approximate signed quotient is %d\n", quo);
}
```

```Output
The remainder of -10.00 / 3.00 is -1.000000
Approximate signed quotient is -3
```

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[ldiv, lldiv](./div.md)<br/>
[imaxdiv](imaxdiv.md)<br/>
[fmod, fmodf](fmod-fmodf.md)<br/>
[remainder, remainderf, remainderl](remainder-remainderf-remainderl.md)<br/>
