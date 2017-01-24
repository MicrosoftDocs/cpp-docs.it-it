---
title: "log1p, log1pf, log1pl | Microsoft Docs"
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
  - "log1p"
  - "log1pf"
  - "log1pl"
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
  - "log1p"
  - "log1pf"
  - "log1pl"
  - "math/log1p"
  - "math/log1pf"
  - "math/log1pl"
helpviewer_keywords: 
  - "log1p (funzione)"
  - "log1pf (funzione)"
  - "funzione log1pl"
ms.assetid: a40d965d-b4f6-42f4-ba27-2395546f7c12
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# log1p, log1pf, log1pl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Calcola il logaritmo naturale di 1 più il valore specificato.  
  
## Sintassi  
  
```  
double log1p(  
   double x  
);  
  
float log1p(  
   float x  
); //C++ only  
  
long double log1p(  
   long double x  
); //C++ only  
  
float log1pf(  
   float x  
);  
  
long double log1pl(  
   long double x  
);  
  
```  
  
#### Parametri  
 `x`  
 L'argomento a virgola mobile.  
  
## Valore restituito  
 Se ha esito positivo, restituisce il logaritmo naturale \(base e\) di \(`x`\+ 1\).  
  
 In caso contrario, può restituire uno dei valori seguenti:  
  
|Input|Risultato|Eccezione SEH|errno|  
|-----------|---------------|-------------------|-----------|  
|\+ inf|\+ inf|||  
|Valori denormalizzati|Come per input|UNDERFLOW||  
|±0|Come per input|||  
|\-1|\-inf|DIVBYZERO|ERANGE|  
|\< \-1|NaN|VALIDO|EDOM|  
|\-inf|NaN|VALIDO|EDOM|  
|±SNaN|Come per input|VALIDO||  
|±QNaN, indefinito|Come per input|||  
  
 Il `errno` è impostato su ERANGE se `x` \= \-1. Il `errno` è impostato su EDOM se `x` \< − 1.  
  
## Note  
 Il `log1p` le funzioni possono essere più accurate rispetto all'utilizzo di log \(`x`\+ 1\) quando x è vicini a 0.  
  
 Poiché C\+\+ consente l'overload, è possibile chiamare gli overload di `log1p` che accettano e restituiscono tipi float e long double. In un programma C, `log1p` sempre accetta e restituisce un valore double.  
  
 Se `x` è un numero naturale, questa funzione restituisce il logaritmo di calcolare il fattoriale \(`x`\-1\).  
  
## Requisiti  
  
|Funzione|Intestazione C|Intestazione C\+\+|  
|--------------|--------------------|------------------------|  
|`log1p`, `log1pf`,  `log1pl`|\<math.h\>|\<cmath\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [LOG2, log2f, log2l](../../c-runtime-library/reference/log2-log2f-log2l.md)   
 [log, logf, log10, log10f](../../c-runtime-library/reference/log-logf-log10-log10f.md)