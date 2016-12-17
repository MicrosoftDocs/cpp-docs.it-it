---
title: "_clear87, _clearfp | Microsoft Docs"
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
  - "_clearfp"
  - "_clear87"
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
  - "api-ms-win-crt-runtime-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "clearfp"
  - "_clearfp"
  - "_clear87"
  - "clear87"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_clear87 (funzione)"
  - "_clearfp (funzione)"
  - "clear87 (funzione)"
  - "clearfp (funzione)"
  - "cancellazione della parola di stato a virgola mobile"
ms.assetid: 72d24a70-7688-4793-ae09-c96d33fcca52
caps.latest.revision: 17
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _clear87, _clearfp
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene e cancella la parola di stato a virgola mobile.  
  
## Sintassi  
  
```  
unsigned int _clear87( void );  
unsigned int _clearfp( void );  
```  
  
## Valore restituito  
 I bit nel valore restituito indicano lo stato a virgola mobile prima della chiamata a `_clear87` o a `_clearfp`.  Per una definizione completa dei bit restituiti da `_clear87`, vedere Float.h.  Molte funzioni della libreria matematica modificano la parola di stato 8087\/80287, con risultati imprevisti.  I valori restituiti da `_clear87` e `_status87` diventano più affidabili se vengono eseguite meno operazioni a virgola mobile tra gli stati noti della parola di stato a virgola mobile.  
  
## Note  
 La funzione `_clear87` cancella i flag di eccezione nella parola di stato a virgola mobile, imposta il bit impegnato su 0 e restituisce la parola di stato.  La parola di stato a virgola mobile è una combinazione della parola di stato 8087\/80287 e di altre condizioni rilevate dal gestore eccezioni 8087\/80287, come ad esempio l'overflow e underflow di stack a virgola mobile.  
  
 `_clearfp` è una versione indipendente dalla piattaforma e portabile della routine `_clear87`.  È identica a `_clear87` su piattaforme Intel \(x86\) e viene supportata anche dalle piattaforme x64 e ARM.  Per assicurarsi che il codice a virgola mobile sia portabile su piattaforme x64 e ARM, usare `_clearfp`.  Se si fa riferimento solo a piattaforme x86, è possibile usare `_clear87` o `_clearfp`.  
  
 Questa funzione è deprecata durante la compilazione con [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md) o `/clr:pure` poiché Common Language Runtime supporta solamente la precisione a virgola mobile predefinita.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_clear87`|\<float.h\>|  
|`_clearfp`|\<float.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_clear87.c  
// compile with: /Od  
  
// This program creates various floating-point   
// problems, then uses _clear87 to report on these problems.  
// Compile this program with Optimizations disabled (/Od).   
// Otherwise the optimizer will remove the code associated with   
// the unused floating-point values.  
//  
  
#include <stdio.h>  
#include <float.h>  
  
int main( void )  
{  
   double a = 1e-40, b;  
   float x, y;  
  
   printf( "Status: %.4x - clear\n", _clear87()  );  
  
   // Store into y is inexact and underflows:  
   y = a;  
   printf( "Status: %.4x - inexact, underflow\n", _clear87() );  
  
   // y is denormal:   
   b = y;  
   printf( "Status: %.4x - denormal\n", _clear87() );  
}  
```  
  
  **Stato: 0000 \- cancella**  
**Stato: 0003 \- non esatto, underflow**  
**Stato: 80000 \- non normale**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [\_control87, \_controlfp, \_\_control87\_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md)   
 [\_status87, \_statusfp, \_statusfp2](../../c-runtime-library/reference/status87-statusfp-statusfp2.md)