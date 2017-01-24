---
title: "Funzioni di Bessel: _j0, _j1, _jn, _y0, _y1, _yn | Microsoft Docs"
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
  - "_j0"
  - "_j1"
  - "_jn"
  - "_y0"
  - "_y1"
  - "_yn"
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
  - "c.bessel"
  - "_j0"
  - "_j1"
  - "_jn"
  - "_y0"
  - "_y1"
  - "_yn"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "Funzioni di Bessel"
  - "_j0 (funzione)"
  - "_j1 (funzione)"
  - "_jn (funzione)"
  - "_y0 (funzione)"
  - "_y1 (funzione)"
  - "_yn (funzione)"
ms.assetid: a21a8bf1-df9d-4ba0-a8c2-e7ef71921d96
caps.latest.revision: 14
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Funzioni di Bessel: _j0, _j1, _jn, _y0, _y1, _yn
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Calcola la funzione di Bessel di primo o secondo tipo, degli ordini 0, 1 o n. Lefunzioni di Bessel vengono usate comunemente in matematica per la teoria delle onde elettromagnetiche.  
  
## Sintassi  
  
```  
double _j0(   
   double x   
);  
double _j1(   
   double x   
);  
double _jn(   
   int n,  
   double x   
);  
double _y0(   
   double x   
);  
double _y1(   
   double x   
);  
double _yn(   
   int n,  
   double x   
);  
```  
  
#### Parametri  
 `x`  
 Valore a virgola mobile.  
  
 `n`  
 Ordine Integer della funzione di Bessel.  
  
## Valore restituito  
 Ognuna di queste routine restituisce una funzione di Bessel di `x`. Se `x` è negativo nelle funzioni `_y0`, `_y1` o `_yn`, la routine imposta `errno` su `EDOM`, stampa un messaggio di errore `_DOMAIN` in `stderr` e restituisce `_HUGE_VAL`. È possibile modificare la gestione degli errori utilizzando `_matherr`.  
  
## Note  
 Le routine `_j0`, `_j1` e `_jn` restituiscono funzioni di Bessel di secondo tipo: ordini 0, 1 e n, rispettivamente.  
  
|Input|Eccezione SEH|Eccezione Matherr|  
|-----------|-------------------|-----------------------|  
|± `QNAN`,`IND`|`INVALID`|`_DOMAIN`|  
  
 Le routine `_y0`, `_y1` e `_yn` restituiscono funzioni di Bessel del secondo tipo: ordini 0, 1 e n, rispettivamente.  
  
|Input|Eccezione SEH|Eccezione Matherr|  
|-----------|-------------------|-----------------------|  
|± `QNAN`,`IND`|`INVALID`|`_DOMAIN`|  
|± 0|`ZERODIVIDE`|`_SING`|  
|&#124;x&#124;\<0,0|`INVALID`|`_DOMAIN`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_j0`, `_j1`, `_jn`, `_y0`, `_y1`, `_yn`|\<cmath\> \(C\+\+\), \<math.h\> \(C, C\+\+\)|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_bessel1.c  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double x = 2.387;  
   int n = 3, c;  
  
   printf( "Bessel functions for x = %f:\n", x );  
   printf( " Kind   Order  Function     Result\n\n" );  
   printf( " First  0      _j0( x )     %f\n", _j0( x ) );  
   printf( " First  1      _j1( x )     %f\n", _j1( x ) );  
   for( c = 2; c < 5; c++ )  
      printf( " First  %d      _jn( %d, x )  %f\n", c, c, _jn( c, x ) );  
   printf( " Second 0      _y0( x )     %f\n", _y0( x ) );  
   printf( " Second 1      _y1( x )     %f\n", _y1( x ) );  
   for( c = 2; c < 5; c++ )  
      printf( " Second %d      _yn( %d, x )  %f\n", c, c, _yn( c, x ) );  
}  
```  
  
```Output  
Bessel functions for x = 2.387000: Kind   Order  Function     Result First  0      _j0( x )     0.009288 First  1      _j1( x )     0.522941 First  2      _jn( 2, x )  0.428870 First  3      _jn( 3, x )  0.195734 First  4      _jn( 4, x )  0.063131 Second 0      _y0( x )     0.511681 Second 1      _y1( x )     0.094374 Second 2      _yn( 2, x )  -0.432608 Second 3      _yn( 3, x )  -0.819314 Second 4      _yn( 4, x )  -1.626833  
```  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [\_matherr](../../c-runtime-library/reference/matherr.md)