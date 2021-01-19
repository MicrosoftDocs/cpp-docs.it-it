---
title: fmod, fmodf, fmodl
description: Informazioni di riferimento sulle API per fmod, fmodf e fmodl; che calcola il resto a virgola mobile.
ms.date: 1/15/2021
api_name:
- fmod
- fmodf
- fmodl
- _o_fmod
- _o_fmodf
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
- fmod
- _fmodl
- fmodf
helpviewer_keywords:
- calculating floating-point remainders
- fmodf function
- fmodl function
- fmod function
- floating-point numbers, calculating remainders
ms.openlocfilehash: 8d2c3bcb0f871eb707f264478c4ce492bbb9c80c
ms.sourcegitcommit: 92dc6d99ba5dcf3b64dee164df2d29beb1e608da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/18/2021
ms.locfileid: "98563938"
---
# <a name="fmod-fmodf-fmodl"></a>`fmod`, `fmodf`, `fmodl`

Calcola il resto a virgola mobile.

## <a name="syntax"></a>Sintassi

```C
double fmod(
   double x,
   double y
);
float fmod(
   float x,
   float y
);  // C++ only
long double fmod(
   long double x,
   long double y
);  // C++ only
float fmodf(
   float x,
   float y
);
long double fmodl(
   long double x,
   long double y
);

#define fmod(X, Y) // Requires C11 or higher
```

### <a name="parameters"></a>Parametri

*`x`*, *`y`*\
Valori a virgola mobile.

## <a name="return-value"></a>Valore restituito

**`fmod`** Restituisce il resto a virgola mobile di *`x`*  /  *`y`* . Se il valore di *`y`* è 0,0, **`fmod`** restituisce un valore NaN non interattiva. Per informazioni sulla rappresentazione di un valore NaN non interattivo da parte della **`printf`** famiglia, vedere [printf](printf-printf-l-wprintf-wprintf-l.md).

## <a name="remarks"></a>Commenti

La **`fmod`** funzione calcola il resto della *f* a virgola mobile di *`x`*  /  *`y`* in modo che i *`x`*  =   \* *`y`*  +  *`f`* , dove *`i`* è un numero intero, *`f`* ha lo stesso segno di *`x`* e il valore assoluto di *`f`* è minore del valore assoluto di *`y`* .

C++ consente l'overload, quindi è possibile chiamare gli overload di **`fmod`** che accettano e restituiscono **`float`** **`long double`** i valori e. In un programma C, a meno che non si stia usando la `<tgmath.h>` macro per chiamare questa funzione, **`fmod`** accetta sempre due **`double`** argomenti e restituisce un **`double`** .

Se si usa la `<tgmath.h>` `fmod()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**`fmod`**, **`fmodf`**, **`fmodl`**|`<math.h>`|
|**`fmod`** macro | `<tgmath.h>` |

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_fmod.c
// This program displays a floating-point remainder.

#include <math.h>
#include <stdio.h>

int main( void )
{
   double w = -10.0, x = 3.0, z;

   z = fmod( w, x );
   printf( "The remainder of %.2f / %.2f is %f\n", w, x, z );
}
```

```Output
The remainder of -10.00 / 3.00 is -1.000000
```

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)\
[`ceil, ceilf, ceill`](ceil-ceilf-ceill.md)\
[`fabs, fabsf, fabsl`](fabs-fabsf-fabsl.md)\
[f`loor, floorf, floorl`](floor-floorf-floorl.md)\
[`_CIfmod`](../../c-runtime-library/cifmod.md)