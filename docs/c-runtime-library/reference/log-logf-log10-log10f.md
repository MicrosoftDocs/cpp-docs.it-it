---
title: "log, logf, log10, log10f | Microsoft Docs"
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
  - "log10f"
  - "logf"
  - "log10"
  - "log"
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
  - "logf"
  - "_log10l"
  - "log"
  - "_logl"
  - "log10f"
  - "log10"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "calcolo di logaritmi"
  - "log10f (funzione)"
  - "log10 (funzione)"
  - "log (funzione)"
  - "logf (funzione)"
  - "logaritmi"
ms.assetid: 7adc77c2-04f7-4245-a980-21215563cfae
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# log, logf, log10, log10f
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Calcola i logaritmi.  
  
## Sintassi  
  
```  
  
      double log(  
   double x   
);  
float log(  
   float x  
);  // C++ only  
long double log(  
   long double x  
);  // C++ only  
float logf(  
   float x   
);  
double log10(  
   double x  
);  
float log10(  
   float x  
);  // C++ only  
long double log10(  
   long double x  
);  // C++ only  
float log10f (  
   float x  
);  
```  
  
#### Parametri  
 *x*  
 Valore di cui deve essere trovato il logaritmo.  
  
## Valore restituito  
 Le funzioni **log** restituiscono il logaritmo naturale \(in base e\) di *x* in caso di esito positivo.  Le funzioni log10 restituiscono il logaritmo in base 10.  Se *x* è negativo, queste funzioni per impostazione predefinita restituiscono un valore indefinito.  Se *x* è 0, restituiscono INF \(infinito\).  
  
|Input|Eccezione SEH|Eccezione Matherr|  
|-----------|-------------------|-----------------------|  
|± QNAN, IND|none|\_DOMAIN|  
|± 0|ZERODIVIDE|\_SING|  
|x \< 0|NON VALIDO|\_DOMAIN|  
  
 **log** e `log10` dispongono di un'implementazione che utilizza Streaming SIMD Extensions 2 \(SSE2\).  Vedere [\_set\_SSE2\_enable](../../c-runtime-library/reference/set-sse2-enable.md) per informazioni e le restrizioni sull'utilizzo dell'implementazione di SSE2.  
  
## Note  
 Poiché il C\+\+ consente l'overload, è possibile chiamare gli overload di **log** e `log10`.  In un programma C, **log** e `log10` prendono sempre come argomento e restituiscono un valore double.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|**log**, `logf`, `log10`, `log10f`|\<math.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```  
// crt_log.c  
/* This program uses log and log10  
 * to calculate the natural logarithm and  
 * the base-10 logarithm of 9,000.  
 */  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double x = 9000.0;  
   double y;  
  
   y = log( x );  
   printf( "log( %.2f ) = %f\n", x, y );  
   y = log10( x );  
   printf( "log10( %.2f ) = %f\n", x, y );  
}  
```  
  
## Output  
  
```  
log( 9000.00 ) = 9.104980  
log10( 9000.00 ) = 3.954243  
```  
  
 Per generare logaritmi per altre basi, utilizzare la relazione matematica: logaritmo in base b di a \=\= logaritmo naturale di a \/ logaritmo naturale di b.  
  
```  
// logbase.cpp  
#include <math.h>  
#include <stdio.h>  
  
double logbase(double a, double base)  
{  
   return log(a) / log(base);  
}  
  
int main()  
{  
   double x = 65536;  
   double result;  
  
   result = logbase(x, 2);  
   printf("Log base 2 of %lf is %lf\n", x, result);  
}  
```  
  
## Output  
  
```  
Log base 2 of 65536.000000 is 16.000000  
```  
  
## Equivalente .NET Framework  
  
-   [System::Math::Log](https://msdn.microsoft.com/en-us/library/system.math.log.aspx)  
  
-   [System::Math::Log10](https://msdn.microsoft.com/en-us/library/system.math.log10.aspx)  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [exp, expf](../../c-runtime-library/reference/exp-expf.md)   
 [\_matherr](../../c-runtime-library/reference/matherr.md)   
 [pow, powf, powl](../../c-runtime-library/reference/pow-powf-powl.md)   
 [\_CIlog](../../c-runtime-library/cilog.md)   
 [\_CIlog10](../../c-runtime-library/cilog10.md)