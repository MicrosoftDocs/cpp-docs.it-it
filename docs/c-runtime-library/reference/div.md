---
title: "div | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "div"
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
  - "div"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "div (funzione)"
  - "divisione di integer"
  - "quozienti"
  - "quozienti, calcolo"
  - "calcolo di resti"
ms.assetid: 8ae80d97-54fd-499e-b14c-e30993b58119
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# div
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Calcola il quoziente e il resto di due valori interi.  
  
## Sintassi  
  
```  
div_t div(   
   int numer,  
   int denom   
);  
ldiv_t div(  
   long numer,  
   long denom  
); /* C++ only */   
lldiv_t div(  
   long long numer,  
   long long denom  
); /* C++ only */  
```  
  
#### Parametri  
 `numer`  
 Numeratore.  
  
 `denom`  
 Denominatore.  
  
## Valore restituito  
 `div` chiamata utilizzando argomenti di tipo `int` ritorna una struttura di tipo `div_t`, inclusi il quoziente e il resto.  Il valore restituito dell'overload con argomenti di tipo `long` è `ldiv_t`.  `div_t` e `ldiv_t` sono definiti in STDLIB.H.  
  
## Note  
 La funzione `div` divide `numer` da `denom` e pertanto calcola il quoziente e il resto.  La struttura [div\_t](../../c-runtime-library/standard-types.md) contiene il quoziente, `int` `quot`, e il resto, `int` `rem`.  Il segno del quoziente è lo stesso di quello del quoziente matematico.  Il valore assoluto è il numero intero massimo che è minore del valore assoluto del quoziente matematico.  Se il denominatore è 0, il programma termina con un messaggio di errore.  
  
 Gli overload che accettano argomenti di tipo `long` o `long long` sono disponibili solo nel codice C\+\+.  Il tipo restituito [ldiv\_t](../../c-runtime-library/standard-types.md) contiene membri `long` `quot` e `long` `rem` e il tipo restituito [lldiv\_t](../../c-runtime-library/standard-types.md) contiene membri `long long quot` e `long long rem`, con gli stessi significati dei membri `div_t`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`div`|\<stdlib.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
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
  
  **x è 876, y è 13**  
**Il quoziente è 67 e il resto è 5**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [ldiv, lldiv](../../c-runtime-library/reference/ldiv-lldiv.md)   
 [imaxdiv](../../c-runtime-library/reference/imaxdiv.md)