---
title: "__min | Microsoft Docs"
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
  - "__min"
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
apitype: "DLLExport"
f1_keywords: 
  - "__min"
  - "min"
  - "_min"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "__min (macro)"
  - "_min (macro)"
  - "min (macro)"
  - "minimum (macro)"
ms.assetid: 2037f26c-b48a-4a69-8870-22519f052a3c
caps.latest.revision: 14
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __min
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce il minore di due valori .  
  
## Sintassi  
  
```  
type __min(  
   type a,  
   type b   
);  
```  
  
#### Parametri  
 `type`  
 Tutti i tipi di dati numerici  
  
 `a, b`  
 Valori di qualsiasi tipo numerico da confrontare.  
  
## Valore restituito  
 Il più piccolo dei due argomenti.  
  
## Note  
 La macro `__min` confronta due valori e restituisce il valore di quello più piccolo.  Gli argomenti possono essere di qualsiasi tipo di dati numerico, con o senza segno.  Sia gli argomenti che il valore restituito deve essere dello stesso tipo di dati.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`__min`|\<stdlib.h\>|  
  
## Esempio  
  
```  
// crt_minmax.c  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   int a = 10;  
   int b = 21;  
  
   printf( "The larger of %d and %d is %d\n",  a, b, __max( a, b ) );  
   printf( "The smaller of %d and %d is %d\n", a, b, __min( a, b ) );  
}  
```  
  
  **Il maggiore tra 10 e 21 è 21**  
**Il minore tra 10 e 21 è 10**   
## Equivalente .NET Framework  
 [System::Math::Min](https://msdn.microsoft.com/en-us/library/system.math.min.aspx)  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [\_\_max](../../c-runtime-library/reference/max.md)