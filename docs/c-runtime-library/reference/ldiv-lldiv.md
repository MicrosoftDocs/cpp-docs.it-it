---
title: "ldiv, lldiv | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "ldiv"
  - "lldiv"
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
  - "ldiv"
  - "lldiv"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "calcolo di quozienti"
  - "calcolo di resti"
  - "ldiv (funzione)"
  - "lldiv (funzione)"
  - "quozienti, calcolo"
  - "calcolo di resti"
ms.assetid: 68ab5d83-27a4-479c-9d52-d055eb139eca
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# ldiv, lldiv
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Calcola il quoziente e il resto di due numeri interi come un'operazione.  
  
## Sintassi  
  
```  
ldiv_t ldiv(  
   long numer,  
   long denom   
);  
lldiv_t lldiv(  
   long long numer,  
   long long denom   
);  
```  
  
#### Parametri  
 `numer`  
 Numeratore  
  
 `denom`  
 Denominatore.  
  
## Valore restituito  
 `ldiv` restituisce una struttura di tipo [ldiv\_t](../../c-runtime-library/standard-types.md) che include il quoziente e il resto.  `lldiv` restituisce una struttura di tipo [lldiv\_t](../../c-runtime-library/standard-types.md) che include il quoziente e il resto.  
  
## Note  
 Le funzioni `ldiv` e `lldiv` dividono `numer` per `denom`, e pertanto calcolano il quoziente e il resto.  Il segno del quoziente è lo stesso di quello del quoziente matematico.  Il valore assoluto del quoziente è il numero intero massimo che è minore del valore assoluto del quoziente matematico.  Se il denominatore è 0, il programma termina con un messaggio di errore.  `ldiv` e `lldiv` sono uguali a `div`, ma gli argomenti `ldiv` e i membri della struttura restituita sono tutti di tipo `long` e gli argomenti `lldiv` e i membri della struttura restituita sono di tipo `long long`.  
  
 Le strutture `lldiv_t` `ldiv_t` sono definite in \<stdlib.h.\>  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`ldiv`, `lldiv`|\<stdlib.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```  
// crt_ldiv.c  
  
#include <stdlib.h>  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   long x = 5149627, y = 234879;  
   ldiv_t div_result;  
  
   div_result = ldiv( x, y );  
   printf( "For %ld / %ld, the quotient is ", x, y );  
   printf( "%ld, and the remainder is %ld\n",   
            div_result.quot, div_result.rem );  
}  
```  
  
## Output  
  
```  
For 5149627 / 234879, the quotient is 21, and the remainder is 217168  
```  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [div](../../c-runtime-library/reference/div.md)   
 [imaxdiv](../../c-runtime-library/reference/imaxdiv.md)