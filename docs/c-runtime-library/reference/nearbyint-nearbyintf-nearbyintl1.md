---
title: "nearbyint, nearbyintf, nearbyintl1 | Microsoft Docs"
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
  - "nearbyint"
  - "nearbyintf"
  - "nerabyintl"
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
  - "nearbyint"
  - "nearbyintf"
  - "nearbyintl"
  - "math/nearbyint"
  - "math/narbyintf"
  - "math/narbyintl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "nearbyint (funzione)"
  - "nearbyintf (funzione)"
  - "funzione nearbyintl"
ms.assetid: dd39cb68-96b0-434b-820f-6ff2ea65584f
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# nearbyint, nearbyintf, nearbyintl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Arrotonda il valore a virgola mobile specificato in un valore integer e restituisce tale valore in un formato a virgola mobile.  
  
## Sintassi  
  
```  
double nearbyint(  
   double x  
);  
  
float nearbyint(  
   float x  
); //C++ only  
  
long double nearbyint(  
   long double x  
); //C++ only  
  
float nearbyintf(  
   float x  
);  
  
long double nearbyintl(  
   long double x  
);  
  
```  
  
#### Parametri  
 \[in\] `x`  
 Il valore da arrotondare.  
  
## Valore restituito  
 Se ha esito positivo, restituisce `x`, arrotondato all'intero più vicino, utilizzando il formato di arrotondamento corrente come definito dalla fegetround. In caso contrario, la funzione può restituire uno dei valori seguenti:  
  
|Problema|Valore restituito|  
|--------------|-----------------------|  
|`x` \= ±INFINITY|±INFINITY, non modificato|  
|`x` \= ±0|± 0, non modificato|  
|`x` \= NaN|NaN|  
  
 Gli errori non vengono segnalati tramite [\_matherr](../../c-runtime-library/reference/matherr.md); in particolare, questa funzione non segnala eventuali eccezioni FE\_INEXACT.  
  
## Note  
 La differenza principale tra questa funzione e `rint` è che questa funzione non genera l'eccezione punto a virgola mobile inesatti.  
  
 Poiché i massimi valori a virgola mobile sono numeri interi esatto, questa funzione non sarà mai un overflow. piuttosto, l'output può superare il valore restituito, a seconda della versione della funzione è utilizzare.  
  
## Requisiti  
  
|Funzione|Intestazione C|Intestazione C\+\+|  
|--------------|--------------------|------------------------|  
|`nearbyint`, `nearbyintf`,  `nearbyintl`|\<math.h\>|\<cmath\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)