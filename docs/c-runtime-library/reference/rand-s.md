---
title: rand_s
ms.date: 4/2/2020
api_name:
- rand_s
- _o_rand_s
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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- rand_s
helpviewer_keywords:
- generating pseudorandom numbers
- random numbers, cryptographically secure
- random numbers, generating
- rand_s function
- numbers, pseudorandom
- cryptographically secure random numbers
- pseudorandom numbers
- numbers, generating pseudorandom
ms.openlocfilehash: cad1740e64c7bbda553ac1a6c777d7e2295152ba
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82919533"
---
# <a name="rand_s"></a>rand_s

Genera un numero pseudocasuale. Si tratta di una versione più sicura della funzione [Rand](rand.md), con miglioramenti per la sicurezza, come descritto in [funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t rand_s(unsigned int* randomValue);
```

### <a name="parameters"></a>Parametri

*randomValue*<br/>
Puntatore a un Integer in cui deve essere presente il valore generato.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo. In caso contrario un codice di errore. Se il puntatore di input _randomValue_ è un puntatore null, la funzione richiama un gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce **EINVAL** e imposta **errno** su **EINVAL**. Se la funzione ha esito negativo per qualsiasi altro motivo, *_randomValue_ è impostato su 0.

## <a name="remarks"></a>Osservazioni

La funzione **rand_s** scrive un Integer pseudocasuale nell'intervallo compreso tra 0 e **UINT_MAX** al puntatore di input. La funzione **rand_s** usa il sistema operativo per generare numeri casuali crittograficamente sicuri. Non usa il valore di inizializzazione generato dalla funzione [srand](srand.md) , né influisce sulla sequenza numerica casuale usata da [Rand](rand.md).

La funzione **rand_s** richiede che la costante **_CRT_RAND_S** venga definita prima dell'istruzione di inclusione per la funzione da dichiarare, come nell'esempio seguente:

```C
By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

#define _CRT_RAND_S
#include <stdlib.h>
```

**rand_s** dipende dall'API [RtlGenRandom](/windows/win32/api/ntsecapi/nf-ntsecapi-rtlgenrandom) , disponibile solo in Windows XP e versioni successive.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**rand_s**|\<stdlib.h>|

Per altre informazioni, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_rand_s.c
// This program illustrates how to generate random
// integer or floating point numbers in a specified range.

// Remembering to define _CRT_RAND_S prior
// to inclusion statement.
#define _CRT_RAND_S

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main( void )
{
    int             i;
    unsigned int    number;
    double          max = 100.0;
    errno_t         err;

    // Display 10 random integers in the range [ 1,10 ].
    for( i = 0; i < 10;i++ )
    {
        err = rand_s( &number );
        if (err != 0)
        {
            printf_s("The rand_s function failed!\n");
        }
        printf_s( "  %u\n", (unsigned int) ((double)number /
                       ((double) UINT_MAX + 1 ) * 10.0) + 1);
    }

    printf_s("\n");

    // Display 10 random doubles in [0, max).
    for (i = 0; i < 10;i++ )
    {
        err = rand_s( &number );
        if (err != 0)
        {
            printf_s("The rand_s function failed!\n");
        }
        printf_s( "  %g\n", (double) number /
                          ((double) UINT_MAX + 1) * max );
    }
}
```

### <a name="sample-output"></a>Output di esempio

```Output
10
4
5
2
8
2
5
6
1
1

32.6617
29.4471
11.5413
6.41924
20.711
60.2878
61.0094
20.1222
80.9192
65.0712
```

## <a name="see-also"></a>Vedere anche

[Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[Rand](rand.md)<br/>
[srand](srand.md)<br/>
