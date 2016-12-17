---
title: "lrint, lrintf, lrintl, llrint, llrintf, llrintl | Microsoft Docs"
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
  - "lrint"
  - "lrintl"
  - "lrintf"
  - "llrint"
  - "llrintf"
  - "llrintl"
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
  - "lrint"
  - "lrintf"
  - "lrintl"
  - "llrint"
  - "llrintf"
  - "llrintl"
  - "math/lrint"
  - "math/lrintf"
  - "math/lrintl"
  - "math/llrint"
  - "math/llrintf"
  - "math/llrintl"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "funzione lrint"
  - "funzione lrintf"
  - "funzione lrintl"
  - "funzione llrint"
  - "funzione llrintf"
  - "funzione llrintl"
ms.assetid: 28ccd5b3-5e6f-434f-997d-a21d51b8ce7f
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# lrint, lrintf, lrintl, llrint, llrintf, llrintl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Arrotonda il valore a virgola mobile specificato al valore integrale più vicino, utilizzando la modalità di arrotondamento corrente e la direzione.  
  
## Sintassi  
  
```  
long int lrint(  
   double x  
);  
  
long int lrint(  
   float x  
); //C++ only  
  
long int lrint(  
   long double x  
); //C++ only  
  
long int lrintf(  
   float x  
);  
  
long int lrintl(  
   long double x  
);  
  
long long int llrint(  
   double x  
);  
  
long long int llrint(  
   float x  
); //C++ only  
  
long long int llrint(  
   long double x  
); //C++ only  
  
long long int llrintf(  
   float x  
);  
  
long long int llrintl(  
   long double x  
);  
  
```  
  
#### Parametri  
 \[in\] `x`  
 il valore da arrotondare.  
  
## Valore restituito  
 Se ha esito positivo, restituisce il valore intero arrotondato del `x`.  
  
|Problema|Valore restituito|  
|--------------|-----------------------|  
|`x` è compreso nell'intervallo del tipo restituito<br /><br /> `x` \= ±∞<br /><br /> `x` \= NaN|Genera FE\_INVALID e restituisce zero \(0\).|  
  
## Note  
 Poiché C\+\+ consente l'overload, è possibile chiamare gli overload di `lrint` e `llrint` che accettano tipi float e long double. In un programma C, `lrint` e `llrint` hanno sempre un valore double.  
  
 Se `x` non rappresenta l'equivalente a virgola mobile di un valore integrale, queste funzioni generano FE\_INEXACT.  
  
 **Specifici di Microsoft**: quando il risultato è compreso nell'intervallo del tipo restituito o quando il parametro è un NaN o infinito, il valore restituito è definito dall'implementazione. Il compilatore Microsoft restituisce un valore zero \(0\).  
  
## Requisiti  
  
|Funzione|Intestazione C|Intestazione C\+\+|  
|--------------|--------------------|------------------------|  
|`lrint`, `lrintf`, `lrintl`, `llrint`, `llrintf`, `llrintl`|\<math.h\>|\<cmath\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)