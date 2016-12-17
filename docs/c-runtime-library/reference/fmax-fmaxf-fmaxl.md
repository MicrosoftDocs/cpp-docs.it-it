---
title: "Fmax, fmaxf, fmaxl | Microsoft Docs"
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
  - "fmax"
  - "fmaxf"
  - "fmaxl"
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
  - "fmax"
  - "fmaxf"
  - "fmaxl"
  - "math/fmax"
  - "math/fmaxf"
  - "math/fmaxl"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "fmax (funzione)"
  - "fmaxf (funzione)"
  - "funzione fmaxl"
ms.assetid: a773ccf7-495e-4a9a-8c6d-dfb53e341e35
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Fmax, fmaxf, fmaxl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determinare il più elevato tra due valori numerici specificati.  
  
## Sintassi  
  
```  
double fmax(  
   double x,   
   double y  
);  
  
float fmax(  
   float x,   
   float y  
); //C++ only  
  
long double fmax(  
   long double x,   
   long double y  
); //C++ only  
  
float fmaxf(  
   float x,   
   float y  
);  
  
long double fmaxl(  
   long double x,   
   long double y  
);  
  
```  
  
#### Parametri  
 \[in\] `x`  
 Primo valore da confrontare.  
  
 \[in\] `y`  
 Secondo valore da confrontare.  
  
## Valore restituito  
 Se ha esito positivo, restituisce il maggiore dei `x` o `y`. Il valore restituito è esatto e non dipende da qualsiasi forma di arrotondamento.  
  
 In caso contrario, può restituire uno dei valori seguenti:  
  
|Problema|Valore restituito|  
|--------------|-----------------------|  
|`x` \= NaN|`y`|  
|`y` \= NaN|`x`|  
|`x` e `y` \= NaN|NaN|  
  
 Questa funzione non utilizza gli errori specificati  [\_matherr](../../c-runtime-library/reference/matherr.md).  
  
## Note  
 Poiché C\+\+ consente l'overload, è possibile chiamare l'overload che accettano e restituiscono tipi float e long double di fmax. In un programma C, fmax accetta e restituisce sempre un valore double.  
  
## Requisiti  
  
|Funzione|Intestazione C|Intestazione C\+\+|  
|--------------|--------------------|------------------------|  
|`fmax`, `fmaxf`, `fmaxl`|\<math.h\>|\<cmath\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [fmin, fminf, fminl](../Topic/fmin,%20fminf,%20fminl1.md)