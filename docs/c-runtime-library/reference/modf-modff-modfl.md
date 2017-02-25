---
title: "modf, modff, modfl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "modff"
  - "modf"
  - "modfl"
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
  - "modff"
  - "_modfl"
  - "modf"
  - "modfl"
  - "math/modf"
  - "math/modff"
  - "math/modfl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "modf (funzione)"
  - "modff (funzione)"
  - "funzione modfl"
ms.assetid: b1c7abf5-d476-43ca-a03c-02072a86e32d
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# modf, modff, modfl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Divide un valore a virgola mobile in frazionari e parti intere.  
  
## Sintassi  
  
```  
double modf(  
   double x,  
   double * intptr   
);  
float modf(  
   float x,  
   float * intptr  
);  // C++ only  
long double modf(  
   long double x,  
   long double * intptr  
);  // C++ only  
float modff(  
   float x,  
   float * intptr   
);  
long double modfl(  
   long double x,  
   long double * intptr  
);  
```  
  
#### Parametri  
 *x*  
 Valore a virgola mobile.  
  
 `intptr`  
 Puntatore alla parte intera stored.  
  
## Valore restituito  
 Questa funzione restituisce la parte decimale con segno del *x*. Non vi è restituzione di errori.  
  
## Note  
 Il `modf` funzioni suddividere il valore a virgola mobile `x` in frazionari e parti di integer, ognuno dei quali ha lo stesso segno `x`. La parte decimale con segno del `x` viene restituito. La parte intera viene archiviata come un valore a virgola mobile `intptr.`  
  
 `modf` è un'implementazione che utilizza Streaming SIMD Extensions 2 \(SSE2\). Vedere [\_set\_SSE2\_enable](../../c-runtime-library/reference/set-sse2-enable.md) per informazioni e le restrizioni sull'utilizzo dell'implementazione SSE2.  
  
 C\+\+ consente l'overload, pertanto è possibile chiamare gli overload di `modf` che accettano e restituiscono `float` o `long double` parametri. In un programma C, `modf` sempre accetta due valori double e restituisce un valore double.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`modf`, `modff`, `modfl`|C: \< Math. h \><br /><br /> C\+\+:, \< cmath \> o \< Math. h \>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```  
// crt_modf.c  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double x, y, n;  
  
   x = -14.87654321;      /* Divide x into its fractional */  
   y = modf( x, &n );     /* and integer parts            */  
  
   printf( "For %f, the fraction is %f and the integer is %.f\n",   
           x, y, n );  
}  
```  
  
## Output  
  
```  
For -14.876543, the fraction is -0.876543 and the integer is -14  
```  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [frexp](../../c-runtime-library/reference/frexp.md)   
 [ldexp](../../c-runtime-library/reference/ldexp.md)