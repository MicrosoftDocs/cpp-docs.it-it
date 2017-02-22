---
title: "tan, tanf, tanl, tanh, tanhf, tanhl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "tanhf"
  - "tanh"
  - "tan"
  - "tanhl"
  - "tanf"
  - "tanl"
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
  - "tanh"
  - "tan"
  - "_tanl"
  - "tanl"
  - "_tanhl"
  - "tanf"
  - "tanhf"
  - "tanhl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tanl (funzione)"
  - "tanhl (funzione)"
  - "_tanl (funzione)"
  - "_tanhl (funzione)"
  - "tan (funzione)"
  - "calcolo di tangenti"
  - "tangente"
  - "tanh (funzione)"
  - "tanhf (funzione)"
  - "tanf (funzione)"
  - "funzioni trigonometriche"
  - "funzioni iperboliche"
ms.assetid: 36cc0ce8-9c80-4653-b354-ddb3b378b6bd
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# tan, tanf, tanl, tanh, tanhf, tanhl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Calcola la tangente \(`tan`, `tanf` o `tanl`\), o tangente iperbolica \(`tanh`, `tanhf`, oppure `tanhl`\).  
  
## Sintassi  
  
```  
double tan(  
   double x   
);  
float tan(  
   float x   
);  // C++ only  
long double tan(  
   long double x  
);  // C++ only  
float tanf(  
   float x   
);  
long double tanl(  
   long double x  
);  
double tanh(  
   double x   
);  
float tanh(  
   float x   
);  // C++ only  
long double tanh(  
   long double x  
);  // C++ only  
float tanhf(  
   float x   
);  
long double tanhl(  
   long double x  
);  
```  
  
#### Parametri  
 `x`  
 Angolo in radianti.  
  
## Valore restituito  
 Le funzioni `tan` restituiscono la tangente di `x`.  Se `x` è maggiore o uguale a 263, o inferiore o uguale a 263, si verifica una perdita di importanza nel risultato.  
  
 Le funzioni `tanh` restituiscono la tangente iperbolica di `x`.  Nessun ritorno di errore.  
  
|Input|Eccezione SEH|Eccezione `Matherr`|  
|-----------|-------------------|-------------------------|  
|± QNAN, IND|nessuno|\_DOMAIN|  
|± ∞  \(`tan`, `tanf`\)|`INVALID`|\_DOMAIN|  
  
## Note  
 Poiché C\+\+ consente l'overload, è possibile chiamare gli overload di `tan` e `tanh` che accettano e restituiscono i valori `float` o `long double`.  In un programma C, `tan` e `tanh` vengono sempre accettati e restituiscono un `double`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`tan`, `tanf`, `tanl`, `tanh`, `tanhf`, `tanhl`|\<math.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_tan.c  
// This program displays the tangent of pi / 4  
// and the hyperbolic tangent of the result.  
//  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double pi = 3.1415926535;  
   double x, y;  
  
   x = tan( pi / 4 );  
   y = tanh( x );  
   printf( "tan( %f ) = %f\n", pi/4, x );  
   printf( "tanh( %f ) = %f\n", x, y );  
}  
```  
  
  **tan\( 0,785398 \) \= 1,000000**  
**tanh\( 1.000000 \) \= 0.761594**   
## Equivalente .NET Framework  
  
-   [System::Math::Tan](https://msdn.microsoft.com/en-us/library/system.math.tan.aspx)  
  
-   [System::Math::Tanh](https://msdn.microsoft.com/en-us/library/system.math.tanh.aspx)  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [Long Double](../../misc/long-double.md)   
 [acos, acosf, acosl](../../c-runtime-library/reference/acos-acosf-acosl.md)   
 [asin, asinf, asinl](../../c-runtime-library/reference/asin-asinf-asinl.md)   
 [atan, atanf, atanl, atan2, atan2f, atan2l](../../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)   
 [cos, cosf, cosl, cosh, coshf, coshl](../../c-runtime-library/reference/cos-cosf-cosl-cosh-coshf-coshl.md)   
 [sin, sinf, sinl, sinh, sinhf, sinhl](../../c-runtime-library/reference/sin-sinf-sinl-sinh-sinhf-sinhl.md)   
 [\_CItan](../../c-runtime-library/citan.md)