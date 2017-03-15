---
title: "fdim, fdimf, fdiml | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "fdim"
  - "fdimf"
  - "fdiml"
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
  - "fdim"
  - "fdimf"
  - "fdiml"
  - "math/fdim"
  - "math/fdimf"
  - "math/fdiml"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "fdim (funzione)"
  - "fdimf (funzione)"
  - "funzione fdiml"
ms.assetid: 2d4ac639-51e9-462d-84ab-fb03b06971a0
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# fdim, fdimf, fdiml
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determina la differenza tra il primo e secondo valore positiva.  
  
## Sintassi  
  
```  
double fdim(  
   double x,   
   double y  
);  
  
float fdim(  
   float x,   
   float y  
); //C++ only  
  
long double fdim(  
   long double x,   
   long double y  
); //C++ only  
  
float fdimf(  
   float x,   
   float y  
);  
  
long double fdiml(  
   long double x,   
   long double y  
);  
  
```  
  
#### Parametri  
 \[in\] `x`  
 Primo valore.  
  
 \[in\] `y`  
 Secondo valore.  
  
## Valore restituito  
 Restituisce la differenza positiva tra `x` e `y`:  
  
|Valore restituito|Scenario|  
|-----------------------|--------------|  
|x\-y|Se x \> y|  
|0|Se x \< \= y|  
  
 In caso contrario, può restituire uno dei seguenti errori:  
  
|Problema|Valore restituito|  
|--------------|-----------------------|  
|Errore di intervallo di overflow|\+ HUGE\_VAL \+ HUGE\_VALF, o \+ HUGE\_VALL|  
|Errore di intervallo di underflow|valore corretto \(dopo l'arrotondamento\)|  
|`x` o `y` è NaN|NaN|  
  
 Gli errori vengono segnalati come specificato in [\_matherr](../../c-runtime-library/reference/matherr.md).  
  
## Note  
 Poiché C\+\+ consente l'overload, è possibile chiamare gli overload di `fdim` che accettano e restituiscono tipi float e long double. In un programma C, `fdim` sempre accetta e restituisce un valore double.  
  
 Fatta eccezione per la gestione di NaN, questa funzione è equivalente a [Fmax, fmaxf, fmaxl](../../c-runtime-library/reference/fmax-fmaxf-fmaxl.md)\(`x`\-`y,` 0\).  
  
## Requisiti  
  
|Funzione|Intestazione C|Intestazione C\+\+|  
|--------------|--------------------|------------------------|  
|`fdim`, `fdimf`,  `fdiml`|\<math.h\>|\<cmath\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [Fmax, fmaxf, fmaxl](../../c-runtime-library/reference/fmax-fmaxf-fmaxl.md)   
 [Abs, laboratori, llabs, abs64](../../c-runtime-library/reference/abs-labs-llabs-abs64.md)