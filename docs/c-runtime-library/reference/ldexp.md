---
title: "ldexp | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "ldexp"
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
  - "api-ms-win-crt-math-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "ldexp"
  - "_ldexpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "calcolo di numeri reali"
  - "numeri reali, calcolo"
  - "esponente, numeri a virgola mobile"
  - "funzioni a virgola mobile, mantissa ed esponente"
  - "ldexp (funzione)"
  - "mantisse, variabili a virgola mobile"
ms.assetid: aa7f5310-3879-4f63-ae74-86a39fbdedfa
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# ldexp
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Moltiplica un numero a virgola mobile per una potenza integrale di due.  
  
## Sintassi  
  
```  
double ldexp(    double x,    int exp  ); float ldexp(    float x,    int exp );  // C++ only long double ldexp(    long double x,    int exp );  // C++ only  float ldexpf(    float x,    int exp );  long double ldexpl(    long double x,    int exp );   
```  
  
#### Parametri  
 `x`  
 Valore a virgola mobile.  
  
 `exp`  
 Esponente dell'intero.  
  
## Valore restituito  
 Se eseguita correttamente, la funzione `ldexp` restituisce il valore di `x` \* 2<sup>exp</sup>.  In condizione di overflow e in base al segno di `x`, `ldexp` restituisce \+\/– `HUGE_VAL`; il valore `errno` viene impostato su `ERANGE`.  
  
 Per altre informazioni su `errno` e i possibili valori di errore restituiti, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 Poiché C\+\+ consente l'overload, è possibile chiamare overload di `ldexp` che accettino tipi `float` e `long double`.  In un programma C, `ldexp` accetta sempre un `double` e un `int` e restituisce un `double`.  
  
## Requisiti  
  
|Routine|Intestazione C|Intestazione C\+\+|  
|-------------|--------------------|------------------------|  
|`ldexp`, `ldexpf`, `ldexpl`|\<math.h\>|\<cmath\>|  
  
 Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_ldexp.c  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double x = 4.0, y;  
   int p = 3;  
  
   y = ldexp( x, p );  
   printf( "%2.1f times two to the power of %d is %2.1f\n", x, p, y );  
}  
```  
  
## Output  
  
```  
4.0 times two to the power of 3 is 32.0  
```  
  
## Equivalente .NET Framework  
 [System::Math::Pow](https://msdn.microsoft.com/en-us/library/system.math.pow.aspx)  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [frexp](../../c-runtime-library/reference/frexp.md)   
 [modf, modff, modfl](../../c-runtime-library/reference/modf-modff-modfl.md)