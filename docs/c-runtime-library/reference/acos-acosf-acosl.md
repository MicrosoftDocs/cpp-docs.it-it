---
title: "acos, acosf, acosl | Microsoft Docs"
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
  - "acosf"
  - "acos"
  - "acosl"
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
  - "acos"
  - "acosl"
  - "acosf"
  - "math/acosf"
  - "math/acosl"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "acos (funzione)"
  - "acosf (funzione)"
  - "acosl (funzione)"
  - "arcocoseno (funzione)"
  - "funzioni trigonometriche"
ms.assetid: 00b89c48-8faf-4824-aa95-fa4349a4975d
caps.latest.revision: 19
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# acos, acosf, acosl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Calcola l'arcocoseno.  
  
## Sintassi  
  
```  
double acos(   
   double x   
);  
float acos(  
   float x   
);   // C++ only  
long double acos(  
   long double x  
);   // C++ only  
float acosf(  
   float x   
);  
long double acosl(  
   long double x  
);  
```  
  
#### Parametri  
 `x`  
 Valore compreso tra \- 1 e 1, per il quale calcolare l'arcocoseno \(il coseno inverso\).  
  
## Valore restituito  
 La funzione `acos` restituisce l'arcocoseno `x` nell'intervallo da 0 a π radianti.  
  
 Per impostazione predefinita, se `x` è minore di –1 o maggiore di 1, `acos` restituisce un valore indefinito.  
  
|Input|Eccezione SEH|Eccezione Matherr|  
|-----------|-------------------|-----------------------|  
|± ∞|`INVALID`|`_DOMAIN`|  
|± QNAN, IND|nessuno|`_DOMAIN`|  
|&#124;x&#124;\>1|`INVALID`|`_DOMAIN`|  
  
## Note  
 Poiché C\+\+ consente l'overload, è possibile chiamare gli overload di `acos` che accettano e restituiscono tipi `float` e `long double`.  In un programma C, `acos` accetta e restituisce sempre un `double`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazioni facoltative|  
|-------------|-------------------------------|------------------------------|  
|`acos`, `acosf`, `acosl`|\<math.h\>|\<errno.h\>|  
  
## Esempio  
 Questo programma richiede di inserire un valore compreso tra \-1 e 1.  I valori di input all'esterno di questo intervallo producono i messaggi di errore `_DOMAIN`.  Se un valore valido viene inserito, il programma stampa l'arcoseno e l'arcocoseno di tale valore.  
  
```  
// crt_asincos.c  
// arguments: 0  
  
#include <math.h>  
#include <stdio.h>  
#include <stdlib.h>  
#include <errno.h>  
  
int main( int ac, char* av[] )  
{  
    double  x,  
            y;  
    errno_t err;   
  
    // argument checking  
    if (ac != 2)  
    {  
        fprintf_s( stderr, "Usage: %s <number between -1 and 1>\n",  
                   av[0]);  
        return 1;  
    }  
  
    // Convert argument into a double value  
    if ((err = sscanf_s( av[1], "%lf", &x )) != 1)  
    {  
        fprintf_s( stderr, "Error converting argument into ",  
                   "double value.\n");  
        return 1;  
    }  
  
    // Arcsine of X  
    y = asin( x );  
    printf_s( "Arcsine of %f = %f\n", x, y );  
  
    // Arccosine of X  
    y = acos( x );  
    printf_s( "Arccosine of %f = %f\n", x, y );  
}  
```  
  
  **Arcoseno di 0,000000 \= 0,000000**  
**Arcocoseno di 0,000000 \= 1,570796**   
## Equivalente .NET Framework  
 [System::Math::Acos](https://msdn.microsoft.com/en-us/library/system.math.acos.aspx)  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [asin, asinf, asinl](../../c-runtime-library/reference/asin-asinf-asinl.md)   
 [atan, atanf, atanl, atan2, atan2f, atan2l](../../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)   
 [cos, cosf, cosl, cosh, coshf, coshl](../../c-runtime-library/reference/cos-cosf-cosl-cosh-coshf-coshl.md)   
 [\_matherr](../../c-runtime-library/reference/matherr.md)   
 [sin, sinf, sinl, sinh, sinhf, sinhl](../../c-runtime-library/reference/sin-sinf-sinl-sinh-sinhf-sinhl.md)   
 [tan, tanf, tanl, tanh, tanhf, tanhl](../../c-runtime-library/reference/tan-tanf-tanl-tanh-tanhf-tanhl.md)