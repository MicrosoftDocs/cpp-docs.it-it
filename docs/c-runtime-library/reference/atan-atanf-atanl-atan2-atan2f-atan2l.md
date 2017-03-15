---
title: "atan, atanf, atanl, atan2, atan2f, atan2l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "atan2f"
  - "atan2l"
  - "atan2"
  - "atanf"
  - "atan"
  - "atanl"
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
  - "atan"
  - "atan2l"
  - "atan2"
  - "atanl"
  - "atanf"
  - "atan2f"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "arctangent (funzione)"
  - "atan (funzione)"
  - "atan2 (funzione)"
  - "atan2f (funzione)"
  - "atan2l (funzione)"
  - "atanf (funzione)"
  - "atanl (funzione)"
  - "funzioni trigonometriche"
ms.assetid: 7a87a18e-c94d-4727-9cb1-1bb5c2725ae4
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 21
---
# atan, atanf, atanl, atan2, atan2f, atan2l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Calcola l'arcotangente di `x` \(`atan`, `atanf` e `atanl`\) o l'arcotangente di `y`\/`x` \(`atan2`, `atan2f` e `atan2l`\).  
  
## Sintassi  
  
```  
double atan(   
   double x   
);  
float atan(  
   float x   
);  // C++ only  
long double atan(  
   long double x  
);  // C++ only  
double atan2(   
   double y,   
   double x   
);  
float atan2(  
   float y,  
   float x  
);  // C++ only  
long double atan2(  
   long double y,  
   long double x  
);  // C++ only  
float atanf(   
   float x   
);  
long double atanl(  
   long double x  
);  
float atan2f(  
   float y,  
   float x  
);  
long double atan2l(  
   long double y,  
   long double x  
);  
```  
  
#### Parametri  
 `x`, `y`  
 Qualsiasi numero.  
  
## Valore restituito  
 `atan` restituisce l'arcotangente di `x` nell'intervallo tra \-π\/2 e π\/2 radianti.  `atan2` restituisce l'arcotangente di `y/x` nell'intervallo tra \-π e π radianti.  Se `x` è 0, `atan` restituisce 0.  Se entrambi i parametri di `atan2` sono 0, la funzione restituisce 0.  Tutti i risultati sono in radianti.  
  
 `atan2` utilizza i segni di entrambi i parametri per determinare il quadrante del valore restituito.  
  
|Input|Eccezione SEH|Eccezione Matherr|  
|-----------|-------------------|-----------------------|  
|± `QNAN`,`IND`|nessuno|`_DOMAIN`|  
  
## Note  
 La funzione `atan` calcola l'arcotangente \(la funzione inversa della tangente\) di `x`.  `atan2` calcola l'arcotangente di `y`\/`x` \(se `x` è uguale a 0, `atan2` restituisce π\/2 se `y` è positivo, \- π\/2 se `y` è negativo, oppure 0 se `y` è 0.\)  
  
 `atan` dispone di un'implementazione che utilizza Streaming SIMD Extensions 2 \(SSE2\).  Per informazioni e le restrizioni sull'implementazione SSE2, vedere [\_set\_SSE2\_enable](../../c-runtime-library/reference/set-sse2-enable.md).  
  
 Poiché il C\+\+ consente l'overload, è possibile chiamare gli overload di `atan` e `atan2`.  In un programma C, `atan` e `atan2` accettano e restituiscono sempre valori double.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`atan`, `atan2`, `atanf`, `atan2f`, `atanl`, `atan2l`|\<math.h\>|  
  
## Esempio  
  
```  
// crt_atan.c  
// arguments: 5 0.5  
#include <math.h>  
#include <stdio.h>  
#include <errno.h>  
  
int main( int ac, char* av[] )   
{  
   double x, y, theta;  
   if( ac != 3 ){  
      fprintf( stderr, "Usage: %s <x> <y>\n", av[0] );  
      return 1;  
   }  
   x = atof( av[1] );  
   theta = atan( x );  
   printf( "Arctangent of %f: %f\n", x, theta );  
   y = atof( av[2] );  
   theta = atan2( y, x );  
   printf( "Arctangent of %f / %f: %f\n", y, x, theta );   
   return 0;  
}  
```  
  
  **Arctangent di 5,000000: 1,373401**  
**Arctangent di 0.500000 \/ 5.000000: 0.099669**   
## Equivalente .NET Framework  
  
-   [System::Math::Atan](https://msdn.microsoft.com/en-us/library/system.math.atan.aspx)  
  
-   [System::Math::Atan2](https://msdn.microsoft.com/en-us/library/system.math.atan2.aspx)  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [acos, acosf, acosl](../../c-runtime-library/reference/acos-acosf-acosl.md)   
 [asin, asinf, asinl](../../c-runtime-library/reference/asin-asinf-asinl.md)   
 [cos, cosf, cosl, cosh, coshf, coshl](../../c-runtime-library/reference/cos-cosf-cosl-cosh-coshf-coshl.md)   
 [\_matherr](../../c-runtime-library/reference/matherr.md)   
 [sin, sinf, sinl, sinh, sinhf, sinhl](../../c-runtime-library/reference/sin-sinf-sinl-sinh-sinhf-sinhl.md)   
 [tan, tanf, tanl, tanh, tanhf, tanhl](../../c-runtime-library/reference/tan-tanf-tanl-tanh-tanhf-tanhl.md)   
 [\_CIatan](../../c-runtime-library/ciatan.md)   
 [\_CIatan2](../../c-runtime-library/ciatan2.md)