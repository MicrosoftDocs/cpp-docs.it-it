---
title: "fpclassify | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "fpclassify"
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
apitype: "HeaderDef"
f1_keywords: 
  - "fpclassify"
  - "math/fpclassify"
helpviewer_keywords: 
  - "fpclassify (macro)"
  - "fpclassify (funzione)"
ms.assetid: bf549499-7ff9-4a58-8692-f2d1cb6bab81
caps.latest.revision: 3
caps.handback.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# fpclassify
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce la classificazione dell'argomento a virgola mobile.  
  
## Sintassi  
  
```  
int fpclassify(   
   /* floating-point */ x   
);  
  
int fpclassify(   
   float x   
); // C++ only  
  
int fpclassify(   
   double x   
); // C++ only  
  
int fpclassify(   
   long double x   
); // C++ only  
  
```  
  
#### Parametri  
 `x`  
 Valore a virgola mobile da verificare.  
  
## Valore restituito  
 `fpclassify` Restituisce un valore intero che indica la classe a virgola mobile dell'argomento `x`. Questa tabella mostra i valori possibili restituiti da `fpclassify`, definito in \< Math. h \>.  
  
|Valore|Descrizione|  
|------------|-----------------|  
|`FP_NAN`|Quiet, segnalare o NaN indeterminato|  
|`FP_INFINITE`|Un infinito positivo o negativo|  
|`FP_NORMAL`|Un valore diverso da zero normalizzato positivo o negativo|  
|`FP_SUBNORMAL`|Un valore positivo o negativo denormalizzato|  
|`FP_ZERO`|Un numero positivo o negativo di valore pari a zero|  
  
## Note  
 In C, `fpclassify` è una macro; in C\+\+, `fpclassify` è una funzione in overload utilizzando tipi di argomento del `float`, `double`, o `long double`. In entrambi i casi, il valore restituito dipende dal tipo effettivo dell'espressione argomento e non su qualsiasi rappresentazione intermedia. Ad esempio, una normale `double` o `long double` valore può diventare un infinito, denormalizzato o zero valore quando viene convertito in un `float`.  
  
## Requisiti  
  
|Funzione\/Macro|Intestazione obbligatoria \(C\)|Intestazione obbligatoria \(C\+\+\)|  
|---------------------|-------------------------------------|-----------------------------------------|  
|`fpclassify`|\<math.h\>|\<math.h\> o \<cmath\>|  
  
 Il `fpclassify` macro e `fpclassify` funzioni rispettare il C99 e specifiche del linguaggio C\+\+ 11. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [isNaN, isNaN, \_isnanf](../../c-runtime-library/reference/isnan-isnan-isnanf.md)