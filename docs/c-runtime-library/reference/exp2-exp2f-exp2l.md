---
title: "EXP2, exp2f, exp2l | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "exp2"
  - "exp2f"
  - "exp2l"
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
  - "exp2"
  - "math/exp2"
  - "exp2f"
  - "math/exp2f"
  - "exp2l"
  - "math/exp2l"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "exp2 (funzione)"
  - "exp2f (funzione)"
  - "funzione exp2l"
ms.assetid: 526e3e10-201a-4610-a886-533f44ece344
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# EXP2, exp2f, exp2l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Calcola 2 al valore specificato \(ad esempio, 2ˣ\).  
  
## Sintassi  
  
```  
double exp2(  
   double x  
);  
  
float exp2(  
   float x  
);  // C++ only  
  
long double exp2(  
   long double x  
); // C++ only  
  
float exp2f(  
   float x  
);  
  
long double exp2l(  
   long double x  
);  
  
```  
  
#### Parametri  
 \[in\] `x`  
 Il valore dell'esponente.  
  
## Valore restituito  
 Se ha esito positivo, restituisce l'esponente in base 2 di `x` \(2ˣ\). In caso contrario, può restituire uno dei valori seguenti:  
  
|Problema|Valore restituito|  
|--------------|-----------------------|  
|`x` \= ±0|1|  
|`x` \= \- INFINITO|\+0|  
|`x` \= \+ INFINITO|\+ INFINITY|  
|`x` \= NaN|NaN|  
|Errore di intervallo di overflow|\+ HUGE\_VAL \+ HUGE\_VALF, o \+ HUGE\_VALL|  
|Errore di intervallo di underflow|risultato corretto, dopo l'arrotondamento|  
  
 Gli errori vengono segnalati come specificato in [\_matherr](../../c-runtime-library/reference/matherr.md).  
  
## Note  
 Poiché C\+\+ consente l'overload, è possibile chiamare gli overload di `exp2` che accettano e restituiscono tipi float e long double. In un programma C, `exp2` sempre accetta e restituisce un valore double.  
  
## Requisiti  
  
|Routine|Intestazione C|Intestazione C\+\+|  
|-------------|--------------------|------------------------|  
|`exp`, `expf`, `expl`|\<math.h\>|\<cmath\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [exp, expf](../../c-runtime-library/reference/exp-expf.md)   
 [LOG2, log2f, log2l](../../c-runtime-library/reference/log2-log2f-log2l.md)