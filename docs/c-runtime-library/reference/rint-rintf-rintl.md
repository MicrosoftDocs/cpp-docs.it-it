---
title: "rint, rintf, rintl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "rintf"
  - "rintl"
  - "rint"
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
  - "rintf"
  - "rintl"
  - "rint"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "rintf (funzione)"
  - "rint (funzione)"
  - "rintl (funzione)"
ms.assetid: 312ae3e6-278c-459a-9393-11b8f87d9184
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# rint, rintf, rintl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Arrotonda un valore a virgola mobile all'intero più vicino nel formato a virgola mobile.  
  
## Sintassi  
  
```  
double rint( double x ); float rint( float x );  // C++ only long double rint( long double x );  // C++ only float rintf( float x );  long double rintl( long double x );    
```  
  
#### Parametri  
 `x`  
 Valore a virgola mobile da arrotondare.  
  
## Valore restituito  
 Le funzioni `rint` restituiscono un valore a virgola mobile che rappresenta l'intero più vicino a `x`.  I valori a metà vengono arrotondati in base alle attuali impostazioni per la modalità di arrotondamento a virgola mobile, come accade con le funzioni `nearbyint`.  A differenza delle funzioni `nearbyint`, le funzioni `rint` possono generare l'eccezione di virgola mobile `FE_INEXACT` se il risultato è diverso dall'argomento in termini di valore.  Non vi è restituzione di errori.  
  
|Input|Eccezione SEH|Eccezione `_matherr`|  
|-----------|-------------------|--------------------------|  
|± ∞, QNAN, IND|nessuno|nessuno|  
|Valori denormalizzati|EXCEPTION\_FLT\_UNDERFLOW|nessuno|  
  
## Note  
 Dato che C\+\+ consente l'overload, è possibile chiamare degli overload di `rint` che accettino e restituiscano valori `float` e `long double`.  In un programma C `rint` accetta e restituisce sempre un valore `double`.  
  
## Requisiti  
  
|Funzione|Intestazione C|Intestazione C\+\+|  
|--------------|--------------------|------------------------|  
|`rint`, `rintf`, `rintl`|\<math.h\>|\<cmath\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_rint.c  
// Build with: cl /W3 /Tc crt_rint.c  
// This example displays the rounded results of  
// the floating-point values 2.499999, -2.499999,   
// 2.8, -2.8, 2.5 and -2.5.  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double x = 2.499999;  
   float y = 2.8f;  
   long double z = 2.5;  
  
   printf("rint(%f) is %.0f\n", x, rint (x));  
   printf("rint(%f) is %.0f\n", -x, rint (-x));  
   printf("rintf(%f) is %.0f\n", y, rintf(y));  
   printf("rintf(%f) is %.0f\n", -y, rintf(-y));  
   printf("rintl(%Lf) is %.0Lf\n", z, rintl(z));  
   printf("rintl(%Lf) is %.0Lf\n", -z, rintl(-z));  
}  
```  
  
  **rint\(2,499999\) è 2**  
**rint\(\-2.499999\) è \-2**  
**rintf\(2,800000\) è 3**  
**rintf\(\-2.800000\) è \-3**  
**rintl\(2,500000\) è 3**  
**rintl\(\-2.500000\) è \-3**   
## Equivalente .NET Framework  
 [System::Math::Round](https://msdn.microsoft.com/en-us/library/system.math.round.aspx)  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [ceil, ceilf, ceill](../../c-runtime-library/reference/ceil-ceilf-ceill.md)   
 [floor, floorf, floorl](../../c-runtime-library/reference/floor-floorf-floorl.md)   
 [fmod, fmodf](../../c-runtime-library/reference/fmod-fmodf.md)   
 [lrint, lrintf, lrintl, llrint, llrintf, llrintl](http://msdn.microsoft.com/it-it/312fd869-a9c0-4107-bb23-ab8299d04385)   
 [lround, lroundf, lroundl, llround, llroundf, llroundl](../../c-runtime-library/reference/lround-lroundf-lroundl-llround-llroundf-llroundl.md)   
 [nearbyint, nearbyintf, nearbyintl](http://msdn.microsoft.com/it-it/15111e73-331d-41d1-81b7-3e10df894848)   
 [rint](../../c-runtime-library/reference/rint-rintf-rintl.md)