---
title: "Macro _STATIC_ASSERT | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
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
  - "_STATIC_ASSERT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_STATIC_ASSERT (macro)"
ms.assetid: 89b0350c-2c2f-4be6-9786-8b1f0780a5da
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Macro _STATIC_ASSERT
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Valuta un'espressione in fase di compilazione e genera un errore quando il risultato è `FALSE`.  
  
## Sintassi  
  
```  
_STATIC_ASSERT(  
    booleanExpression  
);  
```  
  
#### Parametri  
 `booleanExpression`  
 Espressione \(comprendente i puntatori\) che restituisce un valore diverso da zero \(`TRUE`\) oppure 0 \(`FALSE`\).  
  
## Note  
 Questa macro è simile alle [macro \_ASSERT e \_ASSERTE](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md), con la differenza che `booleanExpression` viene valutato in fase di compilazione anziché in fase di esecuzione.  Se `booleanExpression` valuta `FALSE` \(0\), viene generato [Errore del compilatore C2466](../../error-messages/compiler-errors-1/compiler-error-c2466.md).  
  
## Esempio  
 In questo esempio, controlliamo se `sizeof` di un `int` è maggiore o uguale a 2 byte e se `sizeof` di un `long` è di 1 byte.  Il programma non verrà compilato e genererà [Errore del compilatore C2466](../../error-messages/compiler-errors-1/compiler-error-c2466.md) perché `long` è maggiore di 1 byte.  
  
```  
// crt__static_assert.c  
  
#include <crtdbg.h>  
#include <stdio.h>  
  
_STATIC_ASSERT(sizeof(int) >= 2);  
_STATIC_ASSERT(sizeof(long) == 1);  // C2466  
  
int main()  
{  
    printf("I am sure that sizeof(int) will be >= 2: %d\n",  
        sizeof(int));  
    printf("I am not so sure that sizeof(long) == 1: %d\n",  
        sizeof(long));  
}  
```  
  
## Requisiti  
  
|Macro|Intestazione obbligatoria|  
|-----------|-------------------------------|  
|`_STATIC_ASSERT`|\<crtdbg.h\>|  
  
## Equivalente .NET Framework  
 [System::Diagnostics::Debug::Assert](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.assert.aspx)  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [Macro \_ASSERT, \_ASSERTE, \_ASSERT\_EXPR](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md)