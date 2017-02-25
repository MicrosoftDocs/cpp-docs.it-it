---
title: "_cabs | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_cabs"
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
  - "cabsl"
  - "_cabs"
  - "_cabsl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_cabs (funzione)"
  - "_cabsl (funzione)"
  - "valori assoluti"
  - "cabs (funzione)"
  - "cabsl (funzione)"
  - "calcolo di valori assoluti"
ms.assetid: fea292ee-1a39-4a0a-b416-4a189346ff26
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# _cabs
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Calcola il valore assoluto di un numero complesso.  
  
## Sintassi  
  
```  
double _cabs(   
   struct _complex z   
);  
```  
  
#### Parametri  
 `z`  
 Numero complesso.  
  
## Valore restituito  
 `_cabs` restituisce il valore assoluto dell'argomento se l'operazione termina con successo.  In caso di overflow, `_cabs` restituisce `HUGE_VAL` e imposta `errno` a `ERANGE`.  È possibile modificare la gestione degli errori con [\_matherr](../../c-runtime-library/reference/matherr.md).  
  
## Note  
 La funzione `_cabs` calcola il valore assoluto di un numero complesso, che deve essere una struttura di tipo [\_complex](../../c-runtime-library/standard-types.md).  La struttura `z` è costituita da una parte reale `x` e un componente immaginaria `y`.  Una chiamata a `_cabs` produce un valore equivalente a quello dell'espressione `sqrt`\( `z.x``*``z.x` `+` `z.y`\*`z.y` \).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_cabs`|\<math.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_cabs.c  
/* Using _cabs, this program calculates  
 * the absolute value of a complex number.  
 */  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   struct _complex number = { 3.0, 4.0 };  
   double d;  
  
   d = _cabs( number );  
   printf( "The absolute value of %f + %fi is %f\n",  
           number.x, number.y, d );  
}  
```  
  
  **Il valore assoluto di 3.000000 \+ 4.000000i è 5.000000**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [Abs, laboratori, llabs, abs64](../../c-runtime-library/reference/abs-labs-llabs-abs64.md)   
 [fabs, fabsf, fabsl](../../c-runtime-library/reference/fabs-fabsf-fabsl.md)   
 [labs, llabs](../../misc/labs-llabs.md)