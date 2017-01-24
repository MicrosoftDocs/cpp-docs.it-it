---
title: "asinh, asinhf, asinhl | Microsoft Docs"
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
  - "asinh"
  - "asinhf"
  - "asinhl"
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
  - "asinhf"
  - "asinhl"
  - "asinh"
dev_langs: 
  - "C++"
ms.assetid: 4488babe-1a7e-44ca-8b7b-c2db0a70084f
caps.latest.revision: 7
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# asinh, asinhf, asinhl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Calcola il seno iperbolico inverso.  
  
## Sintassi  
  
```  
double asinh(    double x  ); float asinh(    float x  );  // C++ only long double asinh(    long double x );  // C++ only float asinhf(    float x  ); long double asinhl(    long double x );  
```  
  
#### Parametri  
 `x`  
 Valore a virgola mobile.  
  
## Valore restituito  
 Le funzioni `asinh` restituiscono il seno iperbolico inverso \(seno iperbolico d'arco\) di `x`.  Questa funzione è valida nel dominio a virgola mobile.  Se `x` è una costante NaN non interattiva, un valore indefinito o infinito, sarà restituito lo stesso valore.  
  
|Input|Eccezione SEH|Eccezione `_matherr`|  
|-----------|-------------------|--------------------------|  
|± QNAN, IND, INF|none|none|  
  
## Note  
 Quando si usa C\+\+, è possibile chiamare overload di `asinh` che accettano e restituiscono valori `float` o `long double`.  In un programma C, `asinh` accetta e restituisce sempre `double`.  
  
## Requisiti  
  
|Funzione|Intestazione C|Intestazione C\+\+|  
|--------------|--------------------|------------------------|  
|`asinh`, `asinhf`, `asinhl`|\<math.h\>|\<cmath\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```c  
// crt_asinh.c  
// Compile by using: cl /W4 crt_asinh.c  
// This program displays the hyperbolic sine of pi / 4  
// and the arc hyperbolic sine of the result.  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double pi = 3.1415926535;  
   double x, y;  
  
   x = sinh( pi / 4 );  
   y = asinh( x );  
   printf( "sinh( %f ) = %f\n", pi/4, x );  
   printf( "asinh( %f ) = %f\n", x, y );  
}  
```  
  
  **sinh\( 0.785398 \) \= 0.868671**  
**asinh\( 0.868671 \) \= 0.785398**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [Long Double](../../misc/long-double.md)   
 [cos, cosf, cosl, cosh, coshf, coshl](../../c-runtime-library/reference/cos-cosf-cosl-cosh-coshf-coshl.md)   
 [acosh, acoshf, acoshl](../../c-runtime-library/reference/acosh-acoshf-acoshl.md)   
 [sin, sinf, sinl, sinh, sinhf, sinhl](../../c-runtime-library/reference/sin-sinf-sinl-sinh-sinhf-sinhl.md)   
 [tan, tanf, tanl, tanh, tanhf, tanhl](../../c-runtime-library/reference/tan-tanf-tanl-tanh-tanhf-tanhl.md)   
 [atanh, atanhf, atanhl](../../c-runtime-library/reference/atanh-atanhf-atanhl.md)   
 [\_CItan](../../c-runtime-library/citan.md)