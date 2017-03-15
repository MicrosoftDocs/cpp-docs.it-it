---
title: "FMA, fmaf, fmal | Microsoft Docs"
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
  - "fma"
  - "fmaf"
  - "fmal"
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
  - "fma"
  - "fmaf"
  - "fmal"
  - "math/fma"
  - "math/fmaf"
  - "math/fmal"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "fma (funzione)"
  - "fmaf (funzione)"
  - "funzione fmal"
ms.assetid: 584a6037-da1e-4e86-9f0c-97aae86de0c0
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# FMA, fmaf, fmal
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Moltiplica due valori, aggiunge un terzo valore e quindi arrotonda il risultato, senza perdita di qualsiasi precisione in seguito all'arrotondamento intermediario.  
  
## Sintassi  
  
```  
double fma(  
   double x,   
   double y,   
   double z  
);  
  
float fma(  
   float  x,   
   float  y,   
   float z  
); //C++ only  
  
long double fma(  
   long double  x,   
   long double  y,   
   long double z  
); //C++ only  
  
float fmaf(  
   float  x,   
   float  y,   
   float z  
);  
  
long double fmal(  
   long double  x,   
   long double  y,   
   long double z  
);  
  
```  
  
#### Parametri  
 \[in\] `x`  
 Primo valore da moltiplicare.  
  
 \[in\] `y`  
 Secondo valore da moltiplicare.  
  
 \[in\] `z`  
 Il valore da aggiungere.  
  
## Valore restituito  
 Returns \(`x` ×    `y`\) \+ `z`. Il valore restituito viene quindi arrotondato utilizzando il formato di arrotondamento corrente.  
  
 In caso contrario, può restituire uno dei valori seguenti:  
  
|Problema|Valore restituito|  
|--------------|-----------------------|  
|`x` \= INFINITO, `y` \= 0 o<br /><br /> `x` \= 0, `y` \= INFINITO|NaN|  
|`x` o `y` \= ± esatto infinito, `z` \= infinito con segno opposto|NaN|  
|`x` o `y` \= NaN|NaN|  
|non \(`x` \= 0, `y`\= indefinito\) e `z` \= NaN<br /><br /> non \(`x`\= indefinito, `y`\= 0\) e `z` \= NaN|NaN|  
|Errore di intervallo di overflow|±HUGE\_VAL, ±HUGE\_VALF o ±HUGE\_VALL|  
|Errore di intervallo di underflow|valore corretto dopo l'arrotondamento.|  
  
 Gli errori vengono segnalati come specificato in [\_matherr](../../c-runtime-library/reference/matherr.md).  
  
## Note  
 Poiché C\+\+ consente l'overload, è possibile chiamare gli overload di `fma` che accettano e restituiscono tipi float e long double. In un programma C, `fma` sempre accetta e restituisce un valore double.  
  
 Questa funzione calcola il valore come se sono stati eseguiti per precisione infinita e quindi arrotonda il risultato finale.  
  
## Requisiti  
  
|Funzione|Intestazione C|Intestazione C\+\+|  
|--------------|--------------------|------------------------|  
|`fma`, `fmaf`,  `fmal`|\<math.h\>|\<cmath\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [remainder, remainderf, remainderl](../../c-runtime-library/reference/remainder-remainderf-remainderl.md)   
 [remquo, remquof, remquol](../../c-runtime-library/reference/remquo-remquof-remquol.md)