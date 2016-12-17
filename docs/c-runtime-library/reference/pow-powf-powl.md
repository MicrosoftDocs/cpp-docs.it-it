---
title: "pow, powf, powl | Microsoft Docs"
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
  - "powl"
  - "pow"
  - "powf"
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
  - "powl"
  - "pow"
  - "_powl"
  - "powf"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_powl (funzione)"
  - "calcolo di esponenziali"
  - "calcoli esponenziali"
  - "elevamento a potenza"
  - "pow (funzione)"
  - "potenze, calcolo"
  - "powf (funzione)"
  - "powl (funzione)"
ms.assetid: e75c33ed-2e59-48b1-be40-81da917324f1
caps.latest.revision: 18
caps.handback.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# pow, powf, powl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Calcola `x` elevato alla potenza di `y`.  
  
## Sintassi  
  
```  
double pow(  
   double x,  
   double y   
);  
double pow(  
   double x,  
   int y  
);  // C++ only  
float pow(  
   float x,  
   float y   
);  // C++ only  
float pow(  
   float x,  
   int y  
);  // C++ only  
long double pow(  
   long double x,  
   long double y  
);  // C++ only  
long double pow(  
   long double x,  
   int y  
);  // C++ only  
float powf(  
   float x,  
   float y   
);  
long double powl(  
   long double x,  
   long double y  
);  
```  
  
#### Parametri  
 `x`  
 Base.  
  
 `y`  
 Esponente.  
  
## Valore restituito  
 Restituisce il valore di `x`<sup>y</sup>.  Nessun messaggio di errore viene visualizzato in caso di overflow o underflow.  
  
|Valori x e y|Valore restituito della potenza|  
|------------------|-------------------------------------|  
|`x` \< \> 0 e `y` \= 0.0|1|  
|`x` \= 0.0 e `y` \= 0.0|1|  
|`x` \= 0.0 e `y` \< 0|INF|  
  
## Note  
 `pow` non riconosce valori a virgola mobile integrali maggiori di 2<sup>64</sup> \(ad esempio, `1.0E100`\).  
  
 `pow` dispone di un'implementazione che utilizza Streaming SIMD Extensions 2 \(SSE2\).  Per informazioni e le restrizioni sull'implementazione SSE2, vedere [\_set\_SSE2\_enable](../../c-runtime-library/reference/set-sse2-enable.md).  
  
 Poiché C\+\+ consente l'overload, è possibile chiamare uno dei vari overload di `pow`.  In un programma C, `pow` accetta sempre due valori double e restituisce un valore double.  
  
 L'overload `pow(int, int)` non è più disponibile.  Se si utilizza questo overload, il compilatore può generare C2668.  Per evitare questo problema, eseguire il cast del primo parametro a `double`, `float`, o `long double`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`pow`, `powf`, `powl`|\<math.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```  
// crt_pow.c  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double x = 2.0, y = 3.0, z;  
  
   z = pow( x, y );  
   printf( "%.1f to the power of %.1f is %.1f\n", x, y, z );  
}  
```  
  
## Output  
  
```  
2.0 to the power of 3.0 is 8.0  
```  
  
## Equivalente .NET Framework  
 [System::Math::Pow](https://msdn.microsoft.com/en-us/library/system.math.pow.aspx)  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [exp, expf](../../c-runtime-library/reference/exp-expf.md)   
 [log, logf, log10, log10f](../../c-runtime-library/reference/log-logf-log10-log10f.md)   
 [sqrt, sqrtf, sqrtl](../../c-runtime-library/reference/sqrt-sqrtf-sqrtl.md)   
 [\_CIpow](../../c-runtime-library/cipow.md)