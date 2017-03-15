---
title: "floor, floorf, floorl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "floorf"
  - "floorl"
  - "floor"
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
  - "floor"
  - "floorl"
  - "_floorl"
  - "floorf"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "calcolo floor di valori"
  - "floor (funzione)"
  - "floorf (funzione)"
  - "floorl (funzione)"
ms.assetid: e9955f70-d659-414f-8050-132e13c8ff36
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# floor, floorf, floorl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Calcola l'arrotondamento per difetto del valore.  
  
## Sintassi  
  
```  
double floor(  
   double x  
);  
float floor(  
   float x   
); // C++ only  
long double floor(  
   long double x  
); // C++ only  
float floorf(  
   float x  
);  
long double floorl(  
   long double x  
);  
```  
  
#### Parametri  
 `x`  
 Valore a virgola mobile.  
  
## Valore restituito  
 Le funzioni `floor` restituiscono un valore in virgola mobile che rappresenta il numero intero più grande che sia maggiore o uguale a `x`.  Nessun ritorno di errore.  
  
|Input|Eccezione SEH|Eccezione Matherr|  
|-----------|-------------------|-----------------------|  
|± QNAN, IND|nessuno|\_DOMAIN|  
  
 `floor` dispone di un'implementazione che utilizza Streaming SIMD Extensions 2 \(SSE2\).  Per informazioni e le restrizioni sull'implementazione SSE2, vedere [\_set\_SSE2\_enable](../../c-runtime-library/reference/set-sse2-enable.md).  
  
## Note  
 C\+\+ consente l'overload, quindi è possibile chiamare gli overload di `floor` che accettano e restituiscono i valori `float` o `long double`.  In un programma C, `floor` accetta e restituisce sempre un `double`.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`floor`, `floorf`, `floorl`|\<math.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_floor.c  
// This example displays the largest integers  
// less than or equal to the floating-point values 2.8  
// and -2.8. It then shows the smallest integers greater  
// than or equal to 2.8 and -2.8.  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double y;  
  
   y = floor( 2.8 );  
   printf( "The floor of 2.8 is %f\n", y );  
   y = floor( -2.8 );  
   printf( "The floor of -2.8 is %f\n", y );  
  
   y = ceil( 2.8 );  
   printf( "The ceil of 2.8 is %f\n", y );  
   y = ceil( -2.8 );  
   printf( "The ceil of -2.8 is %f\n", y );  
}  
```  
  
  **L'arrotondamento per difetto di 2.8 è 2.000000**  
**L'arrotondamento per difetto di \-2.8 è \-3.000000**  
**L'arrotondamento per eccesso di 2.8 è 3.000000**  
**L'arrotondamento per eccesso di \-2.8 è \-2.000000**   
## Equivalente .NET Framework  
 [System::Math::Floor](https://msdn.microsoft.com/en-us/library/system.math.floor.aspx)  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [ceil, ceilf, ceill](../../c-runtime-library/reference/ceil-ceilf-ceill.md)   
 [round, roundf, roundl](../../c-runtime-library/reference/round-roundf-roundl.md)   
 [fmod, fmodf](../../c-runtime-library/reference/fmod-fmodf.md)