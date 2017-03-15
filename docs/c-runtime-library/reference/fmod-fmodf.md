---
title: "fmod, fmodf | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "fmod"
  - "fmodf"
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
  - "fmod"
  - "_fmodl"
  - "fmodf"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "calcolo di resti a virgola mobile"
  - "fmodf (funzione)"
  - "fmod (funzione)"
  - "numeri a virgola mobile, calcolo dei resti"
ms.assetid: 6962d369-d11f-40b1-a6d7-6f67239f8a23
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# fmod, fmodf
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Calcola il resto in virgola mobile.  
  
## Sintassi  
  
```  
double fmod(   
   double x,  
   double y   
);  
float fmod(  
   float x,  
   float y   
);  // C++ only  
long double fmod(  
   long double x,  
   long double y  
);  // C++ only  
float fmodf(   
   float x,  
   float y   
);  
```  
  
#### Parametri  
 `x`, `y`  
 Valori a virgola mobile.  
  
## Valore restituito  
 `fmod` restituisce il resto in virgola mobile di `x` \/ `y`.  Se il valore di `y` è 0.0, `fmod` restituisce un valore NaN non interattivo.  Per informazioni sulla rappresentazione di un quiet Nan dalla famiglia `printf`, vedere [printf](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md).  
  
## Note  
 La funzione `fmod` calcola il resto a virgola mobile `f` di `x` \/ `y` in modo che `x` \= `i` `*` `y` \+ `f`, dove `i` è un Integer, `f` ha lo stesso segno di `x` e il valore assoluto di `f` è minore del valore assoluto di `y`.  
  
 Il C\+\+ consente l'overload, pertanto è possibile chiamare gli overload di `fmod`.  In un programma C, `fmod` accetta sempre due double e restituisce un double.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`fmod`, `fmodf`|\<math.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
```  
// crt_fmod.c  
// This program displays a floating-point remainder.  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double w = -10.0, x = 3.0, z;  
  
   z = fmod( w, x );  
   printf( "The remainder of %.2f / %.2f is %f\n", w, x, z );  
}  
```  
  
  **Il resto di \-10,00 \/ 3,00 è \-1,000000**   
## Equivalente .NET Framework  
 [System::Math::IEEERemainder](https://msdn.microsoft.com/en-us/library/system.math.ieeeremainder.aspx)  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [ceil, ceilf, ceill](../../c-runtime-library/reference/ceil-ceilf-ceill.md)   
 [fabs, fabsf, fabsl](../../c-runtime-library/reference/fabs-fabsf-fabsl.md)   
 [floor, floorf, floorl](../../c-runtime-library/reference/floor-floorf-floorl.md)   
 [\_CIfmod](../../c-runtime-library/cifmod.md)