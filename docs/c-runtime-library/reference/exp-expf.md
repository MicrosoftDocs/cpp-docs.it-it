---
title: "exp, expf | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "expf"
  - "exp"
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
  - "_expl"
  - "expf"
  - "exp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "calcoli esponenziali"
  - "expf (funzione)"
  - "calcolo di esponenziali"
  - "exp (funzione)"
ms.assetid: 7070016d-1143-407e-9e9a-6b059bb88867
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# exp, expf
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Calcola l'esponenziale.  
  
## Sintassi  
  
```  
double exp(   
   double x  
);  
float exp(  
   float x  
);  // C++ only  
long double exp(  
   long double x  
);  // C++ only  
float expf(   
   float x  
);  
```  
  
#### Parametri  
 `x`  
 Valore a virgola mobile.  
  
## Valore restituito  
 La funzione `exp` restituisce il valore esponenziale dei parametri a virgola mobile, `x`, se eseguita correttamente.  Ovvero il risultato sarà e elevato alla potenza `x`, dove e costituisce la base del logaritmo naturale.  In caso di overflow, la funzione restituisce INF \(infinito\) ed in caso di underflow, `exp` restituisce 0.  
  
|Input|Eccezione SEH|Eccezione Matherr|  
|-----------|-------------------|-----------------------|  
|± QNAN, IND|None|\_DOMAIN|  
|± ∞|NON VALIDO|\_DOMAIN|  
|x ≥ 7.097827e\+002|INEXACT\+OVERFLOW|OVERFLOW|  
|X ≤ \-7.083964e\+002|INEXACT\+UNDERFLOW|UNDERFLOW|  
  
 `exp` dispone di un'implementazione che utilizza Streaming SIMD Extensions 2 \(SSE2\).  Vedere [\_set\_SSE2\_enable](../../c-runtime-library/reference/set-sse2-enable.md) per informazioni e le restrizioni sull'utilizzo dell'implementazione di SSE2.  
  
## Note  
 Il C\+\+ consente l'overload, pertanto è possibile chiamare gli overload di `exp`.  In un programma C, `exp` accetta sempre e restituisce un double.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`exp`, `expf`|\<math.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
```  
// crt_exp.c  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double x = 2.302585093, y;  
  
   y = exp( x );  
   printf( "exp( %f ) = %f\n", x, y );  
}  
```  
  
  **exp\( 2.302585 \) \= 10.000000**   
## Equivalente .NET Framework  
 [System::Math::Exp](https://msdn.microsoft.com/en-us/library/system.math.exp.aspx)  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [log, logf, log10, log10f](../../c-runtime-library/reference/log-logf-log10-log10f.md)   
 [\_CIexp](../../c-runtime-library/ciexp.md)