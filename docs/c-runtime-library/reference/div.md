---
title: div, ldiv, lldiv | Documenti Microsoft
ms.custom: ''
ms.date: 04/05/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- div
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
- api-ms-win-crt-utility-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- div
dev_langs:
- C++
helpviewer_keywords:
- div function
- quotients, computing
- quotients
- dividing integers
- remainder computing
ms.assetid: 8ae80d97-54fd-499e-b14c-e30993b58119
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3ba1625105adf6edbc6419bd4fdabc8bda5d0e98
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="div-ldiv-lldiv"></a>div, ldiv, lldiv

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

*numero*<br/>
Numeratore.

*denom*<br/>
Denominatore.

## <a name="return-value"></a>Valore restituito

**div** chiamato utilizzando argomenti di tipo **int** restituisce una struttura di tipo **div_t**, inclusi il quoziente e il resto. Il valore restituito con argomenti di tipo **lungo** viene **ldiv_t**e il valore restituito con argomenti di tipo **lungo** **lungo** è **lldiv_t**. **div_t**, **ldiv_t**, e **lldiv_t** definiti in \<STDLIB. h >.

## <a name="remarks"></a>Note

Il **div** funzione divide *numero* dal *denom* e quindi calcola il quoziente e il resto. Il [div_t](../../c-runtime-library/standard-types.md) struttura contiene il quoziente **quot**e il resto **rem**. Il segno del quoziente è uguale a quello del quoziente matematico. Il valore assoluto del quoziente è l'intero più grande che è minore del valore assoluto del quoziente matematico. Se il denominatore è 0, il programma termina con un messaggio di errore.

Gli overload delle **div** che accetta argomenti di tipo **long** o **lungo** **lungo** sono disponibili solo per codice C++. I tipi restituiti [ldiv_t](../../c-runtime-library/standard-types.md) e [lldiv_t](../../c-runtime-library/standard-types.md) contiene membri **quot** e **rem**, che hanno gli stessi significati dei membri di **div_t**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**div**, **ldiv**, **lldiv**|\<stdlib.h>|

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

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[ldiv, lldiv](ldiv-lldiv.md)<br/>
[imaxdiv](imaxdiv.md)<br/>
