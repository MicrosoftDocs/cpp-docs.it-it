---
title: rand_s | Microsoft Docs
ms.custom: 
ms.date: 1/02/2018
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- rand_s
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
- rand_s
dev_langs:
- C++
helpviewer_keywords:
- generating pseudorandom numbers
- random numbers, cryptographically secure
- random numbers, generating
- rand_s function
- numbers, pseudorandom
- cryptographically secure random numbers
- pseudorandom numbers
- numbers, generating pseudorandom
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2438b2ced054667a658f8f31a37c9a62112debc6
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="rands"></a>rand_s

Genera un numero pseudocasuale. Si tratta di una versione più sicura della funzione [rand](../../c-runtime-library/reference/rand.md), con miglioramenti della sicurezza, come descritto in [funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md). 

## <a name="syntax"></a>Sintassi

```C
errno_t rand_s(unsigned int* randomValue);
```

### <a name="parameters"></a>Parametri

*randomValue*  
Puntatore a un numero intero per contenere il valore generato.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo. In caso contrario un codice di errore. Se il puntatore di input _randomValue_ è un puntatore null, la funzione richiama un gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce `EINVAL` e imposta `errno` su `EINVAL`. Se la funzione ha esito negativo per qualsiasi motivo, *_randomValue_ è impostato su 0.

## <a name="remarks"></a>Note

La funzione `rand_s` scrivere un intero pseudocasuale nell'intervallo compreso tra 0 e `UINT_MAX` nel puntatore di input. La funzione `rand_s` usa il sistema operativo per generare numeri casuali sicuri dal punto di vista crittografico. Non usa il valore di inizializzazione generato dalla funzione [srand](../../c-runtime-library/reference/srand.md) e non influisce sulla sequenza di numeri casuali usata da `rand`.

La funzione `rand_s` richiede la definizione della costante `_CRT_RAND_S` prima della dichiarazione dell'istruzione di inclusione per la funzione, come nell'esempio seguente:

```C
#define _CRT_RAND_S
#include <stdlib.h>
```

`rand_s` dipende dall'API [RtlGenRandom](http://msdn.microsoft.com/library/windows/desktop/aa387694), disponibile solo in Windows XP e versioni successive.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`rand_s`|\<stdlib.h>|

Per altre informazioni, vedere [Compatibility](../../c-runtime-library/compatibility.md).

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

### <a name="sample-output"></a>Esempio di output

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

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)  
[rand](../../c-runtime-library/reference/rand.md)  
[srand](../../c-runtime-library/reference/srand.md)  
