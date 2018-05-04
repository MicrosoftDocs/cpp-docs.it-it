---
title: rand_s | Microsoft Docs
ms.custom: ''
ms.date: 1/02/2018
ms.technology:
- cpp-standard-libraries
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
ms.workload:
- cplusplus
ms.openlocfilehash: 8407848db8f442324127df8d7267a5350c077b2f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="rands"></a>rand_s

Genera un numero pseudocasuale. Si tratta di una versione più sicura della funzione [rand](rand.md), con miglioramenti della sicurezza, come descritto in [funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t rand_s(unsigned int* randomValue);
```

### <a name="parameters"></a>Parametri

*randomValue*<br/>
Puntatore a un numero intero per contenere il valore generato.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo. In caso contrario un codice di errore. Se il puntatore di input _randomValue_ è un puntatore null, la funzione richiama un gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce **EINVAL** e imposta **errno** al **EINVAL**. Se la funzione ha esito negativo per qualsiasi motivo, *_randomValue_ è impostato su 0.

## <a name="remarks"></a>Note

Il **rand_s** funzione scrive un integer pseudocasuale nell'intervallo da 0 a **UINT_MAX** al puntatore di input. Il **rand_s** funzione utilizza il sistema operativo per generare numeri casuali crittograficamente sicuro. Non viene utilizzato il valore di inizializzazione generati dal [srand](srand.md) funzione, né la sequenza di numeri casuali usata dal [rand](rand.md).

Il **rand_s** funzione richiede la costante **_CRT_RAND_S** essere definiti prima dell'istruzione di inclusione per la funzione devono essere dichiarati, come nell'esempio seguente:

```C
#define _CRT_RAND_S
#include <stdlib.h>
```

**rand_s** varia in base il [RtlGenRandom](http://msdn.microsoft.com/library/windows/desktop/aa387694) API, in cui è disponibile solo in Windows XP e versioni successive.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**rand_s**|\<stdlib.h>|

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

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[rand](rand.md)<br/>
[srand](srand.md)<br/>
