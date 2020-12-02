---
title: div, ldiv, lldiv
description: Le funzioni div, ldiv e lldiv della libreria di runtime Microsoft C calcolano il quoziente e il resto di due valori integer.
ms.date: 11/21/2020
api_name:
- div
- ldiv
- lldiv
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
- api-ms-win-crt-utility-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- div
- ldiv
- lldiv
helpviewer_keywords:
- div function
- quotients, computing
- quotients
- dividing integers
- remainder computing
ms.openlocfilehash: d87b2e3a84e389be8b14970a3aa611bb288cbec8
ms.sourcegitcommit: 432c24dde31c400437c4320e8432b1ddb232f844
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/01/2020
ms.locfileid: "96440288"
---
# <a name="div-ldiv-lldiv"></a>`div`, `ldiv`, `lldiv`

Calcola il quoziente e il resto di due Integer.

## <a name="syntax"></a>Sintassi

```C
div_t div(
   int numer,
   int denom
);
ldiv_t ldiv(
   long numer,
   long denom
);
lldiv_t lldiv(
   long long numer,
   long long denom
);
```

```cpp
ldiv_t div(
   long numer,
   long denom
); /* C++ only */
lldiv_t div(
   long long numer,
   long long denom
); /* C++ only */
```

### <a name="parameters"></a>Parametri

*`numer`*\
Numeratore.

*`denom`*\
Denominatore.

## <a name="return-value"></a>Valore restituito

**`div`** chiamato usando gli argomenti di tipo **`int`** restituisce una struttura di tipo `div_t` , che contiene il quoziente e il resto. Il valore restituito con argomenti di tipo **`long`** è `ldiv_t` e il valore restituito con argomenti di tipo **`long long`** è `lldiv_t` . I `div_t` `ldiv_t` tipi, e `lldiv_t` sono definiti in \<stdlib.h> .

## <a name="remarks"></a>Commenti

La **`div`** funzione divide *`numer`* per *`denom`* e calcola il quoziente e il resto. La [`div_t`](../../c-runtime-library/standard-types.md) struttura contiene il quoziente, `quot` , e il resto, `rem` . Il segno del quoziente è uguale al segno del quoziente matematico. Il valore assoluto è l'intero più grande che è minore del valore assoluto del quoziente matematico. Se il denominatore è 0, il programma termina con un messaggio di errore.

Gli overload di **`div`** che accettano argomenti di tipo **`long`** o **`long long`** sono disponibili solo per il codice C++. I tipi restituiti [`ldiv_t`](../../c-runtime-library/standard-types.md) e [`lldiv_t`](../../c-runtime-library/standard-types.md) contengono i membri `quot` e `rem` , che hanno gli stessi significati dei membri di `div_t` .

## <a name="requirements"></a>Requisiti

| Routine | Intestazione obbligatoria |
|--|--|
| **`div`**, **`ldiv`**, **`lldiv`** | \<stdlib.h> |

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_div.c
// arguments: 876 13

// This example takes two integers as command-line
// arguments and displays the results of the integer
// division. This program accepts two arguments on the
// command line following the program name, then calls
// div to divide the first argument by the second.
// Finally, it prints the structure members quot and rem.
//

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main( int argc, char *argv[] )
{
   int x,y;
   div_t div_result;

   x = atoi( argv[1] );
   y = atoi( argv[2] );

   printf( "x is %d, y is %d\n", x, y );
   div_result = div( x, y );
   printf( "The quotient is %d, and the remainder is %d\n",
           div_result.quot, div_result.rem );
}
```

```Output
x is 876, y is 13
The quotient is 67, and the remainder is 5
```

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)\
[`imaxdiv`](imaxdiv.md)
