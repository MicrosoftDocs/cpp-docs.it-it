---
title: imaxabs
description: Riferimento API per imaxabs, che calcola il valore assoluto di un intero di qualsiasi dimensione.
ms.date: 04/05/2018
api_name:
- imaxabs
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
- imaxabs
helpviewer_keywords:
- imaxabs function
ms.assetid: de2566a3-1415-4e9a-91b5-7ac3a49ebf5e
ms.openlocfilehash: 599e8a0cb20f24bda24201be40fa1acc0ade993c
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89555501"
---
# <a name="imaxabs"></a>imaxabs

Calcola il valore assoluto di un intero di qualsiasi dimensione.

## <a name="syntax"></a>Sintassi

```C
intmax_t imaxabs(
   intmax_t n
);
```

### <a name="parameters"></a>Parametri

*n*<br/>
Valore intero.

## <a name="return-value"></a>Valore restituito

La funzione **imaxabs** restituisce il valore assoluto dell'argomento. Non viene restituito alcun errore.

> [!NOTE]
> Poiché l'intervallo di numeri interi negativi che possono essere rappresentati usando **intmax_t** è maggiore dell'intervallo di numeri interi positivi che possono essere rappresentati, è possibile fornire un argomento a **imaxabs** che non può essere convertito. Se il valore assoluto dell'argomento non può essere rappresentato dal tipo restituito, il comportamento di **imaxabs** non è definito.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**imaxabs**|\<inttypes.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

```C
// crt_imaxabs.c
// Build using: cl /W3 /Tc crt_imaxabs.c
// This example calls imaxabs to compute an
// absolute value, then displays the results.

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main(int argc, char *argv[])
{
   intmax_t x = LLONG_MIN + 2;

   printf("The absolute value of %lld is %lld\n", x, imaxabs(x));
}
```

```Output
The absolute value of -9223372036854775806 is 9223372036854775806
```

## <a name="see-also"></a>Vedere anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[abs, labs, llabs, _abs64](abs-labs-llabs-abs64.md)<br/>
[_cabs](cabs.md)<br/>
[fabs, fabsf, fabsl](fabs-fabsf-fabsl.md)<br/>
