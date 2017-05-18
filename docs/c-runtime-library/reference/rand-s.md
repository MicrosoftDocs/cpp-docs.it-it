---
title: rand_s | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
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
ms.assetid: d6a0be60-997d-4904-8411-8aea6839cc94
caps.latest.revision: 24
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 5087948c5737f105e9bc694da1e866be659ff18f
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="rands"></a>rand_s
Genera un numero pseudocasuale. Questa è una versione di [rand](../../c-runtime-library/reference/rand.md) che include miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
errno_t rand_s(   unsigned int* randomValue);  
```  
  
## <a name="return-value"></a>Valore restituito  
 Zero in caso di esito positivo. In caso contrario un codice di errore. Se il puntatore di input `randomValue` è un puntatore Null, questa funzione richiama un gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce `EINVAL` e imposta `errno` su `EINVAL`. Se la funzione non riesce per qualsiasi altro motivo, *`randomValue` viene impostato su 0.  
  
## <a name="remarks"></a>Note  
 La funzione `rand_s` scrivere un intero pseudocasuale nell'intervallo compreso tra 0 e `UINT_MAX` nel puntatore di input. La funzione `rand_s` usa il sistema operativo per generare numeri casuali sicuri dal punto di vista crittografico. Non usa il valore di inizializzazione generato dalla funzione [srand](../../c-runtime-library/reference/srand.md) e non influisce sulla sequenza di numeri casuali usata da `rand`.  
  
 La funzione `rand_s` richiede la definizione della costante `_CRT_RAND_S` prima della dichiarazione dell'istruzione di inclusione per la funzione, come nell'esempio seguente:  
  
```  
#define _CRT_RAND_S  
#include <stdlib.h>  
```  
  
 `rand_s` dipende dall'API [RtlGenRandom](http://msdn.microsoft.com/library/windows/desktop/aa387694), disponibile solo in Windows XP e versioni successive.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`rand_s`|\<stdlib.h>|  
  
 Per altre informazioni, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```  
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
  
## <a name="sample-output"></a>Esempio di output  
  
```  
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
 [srand](../../c-runtime-library/reference/srand.md)
