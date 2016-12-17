---
title: "imaxdiv | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "imaxdiv"
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
  - "imaxdiv"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "imaxdiv (funzione)"
ms.assetid: 7d90126f-fdc2-4986-9cdf-94e4c9123d26
caps.latest.revision: 7
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# imaxdiv
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Calcola il quoziente e il resto di due valori Integer di qualsiasi dimensione come una sola operazione.  
  
## Sintassi  
  
```  
imaxdiv_t imaxdiv(   
   intmax_t numer,  
   intmax_t denom   
);   
```  
  
#### Parametri  
 `numer`  
 Numeratore.  
  
 `denom`  
 Denominatore.  
  
## Valore restituito  
 `imaxdiv` denominato con gli argomenti di tipo [intmax\_t](../../c-runtime-library/standard-types.md) restituisce una struttura di tipo [imaxdiv\_t](../../c-runtime-library/standard-types.md) in cui sono inclusi il quoziente e il resto.  
  
## Note  
 La funzione `imaxdiv` divide `numer` da `denom` e pertanto calcola il quoziente e il resto.  La struttura `imaxdiv_t` contiene il quoziente, `intmax_t` `quot`e il resto, `intmax_t` `rem`.  Il segno del quoziente è lo stesso di quello del quoziente matematico.  Il valore assoluto è il numero intero massimo che è minore del valore assoluto del quoziente matematico.  Se il denominatore è 0, il programma termina con un messaggio di errore.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`imaxdiv`|\<inttypes.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
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
  
 Una volta generato e quindi chiamato con i parametri della riga di comando `9460730470000000 8766`, il codice genera questo output:  
  
  **La chiamata a imaxdiv\(9460730470000000, 8766\)**  
**results in a quotient of 1079252848505, and a remainder of 5170**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [div](../../c-runtime-library/reference/div.md)   
 [ldiv, lldiv](../../c-runtime-library/reference/ldiv-lldiv.md)