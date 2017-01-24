---
title: "trunc, truncf, truncl | Microsoft Docs"
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
  - "trunc"
  - "truncf"
  - "truncl"
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
  - "trunc"
  - "truncf"
  - "truncl"
  - "math/trunc"
  - "math/truncf"
  - "math/truncl"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "trunc (funzione)"
  - "truncf (funzione)"
  - "funzione truncl"
ms.assetid: de2038ac-ac0b-483e-870c-e8992dcd4fd0
caps.latest.revision: 13
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# trunc, truncf, truncl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determina l'intero più vicino che è minore o uguale al valore a virgola mobile specificato.  
  
## Sintassi  
  
```  
double trunc(  
   double x  
);  
  
float trunc(  
   float x  
); //C++ only  
  
long double trunc(  
   long double x  
); //C++ only  
  
float trunc(  
   float x  
); //C++ only  
  
long double truncl(  
   long double x  
);  
  
```  
  
#### Parametri  
 \[in\] `x`  
 Valore da troncare.  
  
## Valore restituito  
 Se ha esito positivo, restituisce un valore intero di `x`, arrotondato verso lo zero.  
  
 In caso contrario, può restituire uno dei seguenti:  
  
|Problema|Valore restituito|  
|--------------|-----------------------|  
|`x` \= ±INFINITY|x|  
|`x` \=  ±0|x|  
|`x` \= NaN|NaN|  
  
 Gli errori vengono segnalati come specificato in [\_matherr](../../c-runtime-library/reference/matherr.md).  
  
## Note  
 Poiché C\+\+ consente l'overload, è possibile chiamare gli overload di `trunc` che accettano e restituiscono tipi float e long double. In un programma C, `trunc` sempre accetta e restituisce un valore double.  
  
 Poiché i valori a virgola mobile più grandi sono numeri interi esatto, questa funzione non sarà un overflow autonomamente. Tuttavia, si può provocare l'overflow restituendo un valore in un tipo integer della funzione.  
  
 È anche possibile arrotondare convertendo in modo implicito a virgola mobile e integrali; Tuttavia, se tale operazione è limitato ai valori che possono essere archiviati nel tipo di destinazione.  
  
## Requisiti  
  
|Funzione|Intestazione C|Intestazione C\+\+|  
|--------------|--------------------|------------------------|  
|`trunc`, `truncf`,  `truncl`|\<math.h\>|\<cmath\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [floor, floorf, floorl](../../c-runtime-library/reference/floor-floorf-floorl.md)   
 [ceil, ceilf, ceill](../../c-runtime-library/reference/ceil-ceilf-ceill.md)   
 [round, roundf, roundl](../../c-runtime-library/reference/round-roundf-roundl.md)