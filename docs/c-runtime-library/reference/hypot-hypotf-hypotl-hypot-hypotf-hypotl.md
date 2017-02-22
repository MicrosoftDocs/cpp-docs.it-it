---
title: "hypot, hypotf, hypotl, _hypot, _hypotf, _hypotl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_hypotf"
  - "hypot"
  - "hypotf"
  - "_hypot"
  - "_hypotl"
  - "hypotl"
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
  - "hypotf"
  - "hypotl"
  - "_hypotl"
  - "hypot"
  - "_hypot"
  - "_hypotf"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_hypot (funzione)"
  - "calcolo di ipotenuse"
  - "hypot (funzione)"
  - "ipotenuse, calcolo"
  - "hypotf (funzione)"
  - "hypotl (funzione)"
  - "triangoli, calcolo dell'ipotenusa"
ms.assetid: 6a13887f-bd53-43fc-9d77-5b42d6e49925
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 17
---
# hypot, hypotf, hypotl, _hypot, _hypotf, _hypotl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Calcola l'ipotenusa.  
  
## Sintassi  
  
```  
double hypot(   
   double x,  
   double y   
);  
float hypotf(   
   float x,  
   float y   
);  
long double hypotl(  
   long double x,  
   long double y  
);  
double _hypot(   
   double x,  
   double y   
);  
float _hypotf(   
   float x,  
   float y   
);  
long double _hypotl(  
   long double x,  
   long double y  
);  
```  
  
#### Parametri  
 `x`, `y`  
 Valori a virgola mobile.  
  
## Valore restituito  
 Se l'operazione riesce, `hypot` restituisce la lunghezza dell'ipotenusa; in caso di overflow, `hypot` restituisce INF \(infinito\) e la variabile `errno` è impostata su `ERANGE`.  È possibile utilizzare `_matherr` per modificare la gestione degli errori.  
  
 Per ulteriori informazioni sui codici restituiti, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 Le funzioni `hypot` calcolano la lunghezza dell'ipotenusa di un triangolo rettangolo, in base alla lunghezza dei due lati `x` e `y` \(in altre parole, la radice quadrata di `x`<sup>2</sup> \+ `y`<sup>2</sup>\).  
  
 Le versioni delle funzioni che hanno le sottolineature vengono fornite per conformità agli standard precedenti.  Questo comportamento è identico alle versioni che non dispongono di un carattere di sottolineatura.  Si consiglia di utilizzare le versioni senza caratteri di sottolineatura per il nuovo codice.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`hypot`, `hypotf`, `hypotl`, `_hypot`, `_hypotf`, `_hypotl`|\<math.h\>|  
  
 Per ulteriori informazioni di compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_hypot.c  
// This program prints the hypotenuse of a right triangle.  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double x = 3.0, y = 4.0;  
  
   printf( "If a right triangle has sides %2.1f and %2.1f, "  
           "its hypotenuse is %2.1f\n", x, y, _hypot( x, y ) );  
}  
```  
  
  **Se un triangolo rettangolo ha lati 3,0 e 4,0, la relativa ipotenusa è 5,0**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [\_cabs](../../c-runtime-library/reference/cabs.md)   
 [\_matherr](../../c-runtime-library/reference/matherr.md)