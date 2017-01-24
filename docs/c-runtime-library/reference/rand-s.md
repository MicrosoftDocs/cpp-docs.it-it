---
title: "rand_s | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "rand_s"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-utility-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "rand_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "numeri casuali sicuri dal punto di vista crittografico"
  - "generazione di numeri pseudocasuali"
  - "numeri, generazione di numeri pseudocasuali"
  - "numeri, pseudocasuali"
  - "numeri pseudocasuali"
  - "rand_s (funzione)"
  - "numeri casuali, sicuri dal un punto di vista crittografico"
  - "numeri casuali, generazione"
ms.assetid: d6a0be60-997d-4904-8411-8aea6839cc94
caps.latest.revision: 24
caps.handback.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# rand_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Genera un numero pseudo\-casuale.  Una versione di [rand](../../c-runtime-library/reference/rand.md) con miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
errno_t rand_s(   unsigned int* randomValue);  
```  
  
## Valore restituito  
 Zero in caso di esito positivo; un codice di errore altrimenti.  Se il puntatore di input `randomValue` è un puntatore null, la funzione invoca un gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione restituisce `EINVAL` e imposta `errno` su `EINVAL`.  Se la funzione non riesce per qualsiasi altro motivo, \*`randomValue` è impostato a 0.  
  
## Note  
 La funzione `rand_s` scrive un integer pseudocasuale compreso nell'intervallo da 0 a `UINT_MAX` al puntatore di input.  La funzione `rand_s` utilizza il sistema operativo per generare numeri casuali a crittografia sicura.  Non utilizza il valore di inizializzazione generato dalla funzione [srand](../../c-runtime-library/reference/srand.md), né è influenzato dalla sequenza di numeri casuali utilizzata da `rand`.  
  
 La funzione `rand_s` richiede che la costante `_CRT_RAND_S` sia definita prima dell'istruzione di inclusione per la funzione da dichiarare, come nel seguente esempio:  
  
```  
#define _CRT_RAND_S  
#include <stdlib.h>  
```  
  
 `rand_s` dipende dalle API [RtlGenRandom](http://msdn.microsoft.com/library/windows/desktop/aa387694), che sono disponibili solo in Windows XP e versioni successive.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`rand_s`|\<stdlib.h\>|  
  
 Per ulteriori informazioni, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
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
  
## Esempio di output  
  
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
  
## Equivalente .NET Framework  
 [System::Random Classe](https://msdn.microsoft.com/en-us/library/system.random.aspx)  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [srand](../../c-runtime-library/reference/srand.md)