---
title: imaxdiv
ms.date: 04/05/2018
api_name:
- imaxdiv
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
- imaxdiv
helpviewer_keywords:
- imaxdiv function
ms.assetid: 7d90126f-fdc2-4986-9cdf-94e4c9123d26
ms.openlocfilehash: 298356da8e8e76c132b963ef4f71db6a3d0e74f7
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91505627"
---
# <a name="imaxdiv"></a>imaxdiv

Calcola il quoziente e il resto di due interi di qualsiasi dimensione come singola operazione.

## <a name="syntax"></a>Sintassi

```C
imaxdiv_t imaxdiv(
   intmax_t numer,
   intmax_t denom
);
```

### <a name="parameters"></a>Parametri

*numero*<br/>
Numeratore.

*Denom*<br/>
Denominatore.

## <a name="return-value"></a>Valore restituito

**imaxdiv** chiamato con argomenti di tipo [intmax_t](../../c-runtime-library/standard-types.md) restituisce una struttura di tipo [imaxdiv_t](../../c-runtime-library/standard-types.md) che comprende il quoziente e il resto.

## <a name="remarks"></a>Osservazioni

La funzione **imaxdiv** divide i *numeri* per *Denom* e quindi calcola il quoziente e il resto. La **struttura imaxdiv_t** contiene il quoziente **, intmax_t** **quot**e il resto **intmax_t** **REM**. Il segno del quoziente è identico a quello del quoziente matematico. Il valore assoluto del quoziente è l'intero più grande che è minore del valore assoluto del quoziente matematico. Se il denominatore è 0, il programma termina con un messaggio di errore.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**imaxdiv**|\<inttypes.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_imaxdiv.c
// Build using: cl /W3 /Tc crt_imaxdiv.c
// This example takes two integers as command-line
// arguments and calls imaxdiv to divide the first
// argument by the second, then displays the results.

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main(int argc, char *argv[])
{
   intmax_t x,y;
   imaxdiv_t div_result;

   x = atoll(argv[1]);
   y = atoll(argv[2]);

   printf("The call to imaxdiv(%lld, %lld)\n", x, y);
   div_result = imaxdiv(x, y);
   printf("results in a quotient of %lld, and a remainder of %lld\n\n",
          div_result.quot, div_result.rem);
}
```

Quando viene compilato e quindi chiamato con i parametri della riga di comando `9460730470000000 8766`, il codice genera questo output:

```Output
The call to imaxdiv(9460730470000000, 8766)
results in a quotient of 1079252848505, and a remainder of 5170
```

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[div](div.md)<br/>
[ldiv, lldiv](./div.md)<br/>
