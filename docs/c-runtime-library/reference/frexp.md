---
title: "frexp | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "frexp"
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
  - "frexp"
  - "_frexpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_frexpl (funzione)"
  - "esponente, numeri a virgola mobile"
  - "funzioni a virgola mobile, mantissa ed esponente"
  - "frexp (funzione)"
  - "frexpl (funzione)"
  - "mantisse, variabili a virgola mobile"
ms.assetid: 9b020f2e-3967-45ec-a6a8-d467a071aa55
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# frexp
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene la mantissa ed esponente di un numero a virgola mobile.  
  
## Sintassi  
  
```  
double frexp(  
   double x,  
   int *expptr   
);  
float frexp(  
   float x,  
   int * expptr  
);  // C++ only  
long double frexp(  
   long double x,  
   int * expptr  
);  // C++ only  
```  
  
#### Parametri  
 `x`  
 Valore a virgola mobile.  
  
 `expptr`  
 Puntatore all'esponente Integer memorizzato.  
  
## Valore restituito  
 `frexp` restituisce la mantissa.  Se `x` è 0, la funzione restituisce 0 sia per la mantissa che l'esponente.  Se `expptr` è `NULL`, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione imposta `errno` a `EINVAL` e restituisce 0 .  
  
## Note  
 La funzione di `frexp` suddivide il valore a virgola mobile \(`x`\) in una mantissa \(`m`\) e un esponente \(`n`\), in modo che il valore assoluto di `m` è maggiore o uguale a 0,5 e minore di 1,0 e `x` \= `m`. \*2.<sup>n</sup> L'esponente Integer `n` viene archiviato nella posizione indicata da `expptr`.  
  
 Il C\+\+ consente l'overload, pertanto è possibile chiamare gli overload di `frexp`.  In un programma C, `frexp` sempre accetta un valore double e un numero intero e restituisce un valore double.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`frexp`|\<math.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
```  
// crt_frexp.c  
// This program calculates frexp( 16.4, &n )  
// then displays y and n.  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double x, y;  
   int n;  
  
   x = 16.4;  
   y = frexp( x, &n );  
   printf( "frexp( %f, &n ) = %f, n = %d\n", x, y, n );  
}  
```  
  
  **frexp \(16,400000, &n\) \= 0,512500, n \= 5**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [ldexp](../../c-runtime-library/reference/ldexp.md)   
 [modf, modff, modfl](../../c-runtime-library/reference/modf-modff-modfl.md)