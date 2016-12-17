---
title: "isNaN, isNaN, _isnanf | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_isnan"
  - "_isnanf"
  - "isnan"
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
  - "_isnan"
  - "isnan"
  - "math/isnan"
  - "math/_isnan"
  - "math/_isnanf"
  - "_isnanf"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "NAN (non un numero)"
  - "_isnan (funzione)"
  - "formato a virgola mobile IEEE"
  - "non un numero (NAN)"
  - "isnan (funzione)"
ms.assetid: 391fbc5b-89a4-4fba-997e-68f1131caf82
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# isNaN, isNaN, _isnanf
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Verifica se un valore a virgola mobile non è un numero \(NAN\).  
  
## Sintassi  
  
```  
int isnan(  
   /* floating-point */ x   
); /* C-only macro */  
  
int _isnan(  
   double x   
);  
  
int _isnanf(  
   float x  
); /* x64 only */  
  
template <class T>  
bool isnan(  
   T x  
) throw(); /* C++ only */  
```  
  
#### Parametri  
 *x*  
 Valore a virgola mobile da verificare.  
  
## Valore restituito  
 In C, il `isnan` macro e `_isnan` e `_isnanf` funzioni restituiscono un valore diverso da zero se l'argomento `x` è NAN; in caso contrario restituiscono 0.  
  
 In C\+\+, il `isnan` modello le funzioni restituiscono `true` Se l'argomento `x` è NAN; in caso contrario restituiscono `false`.  
  
## Note  
 C `isnan` macro e `_isnan` e `_isnanf` funzioni testano valore a virgola mobile *x*, restituendo un valore diverso da zero se *x* non è un valore di numero \(NAN\). NAN viene generata quando il risultato dell'operazione a virgola mobile non può essere rappresentato in formato a virgola mobile IEEE 754 per il tipo specificato. Per informazioni sulla modalità di rappresentazione NAN per l'output, vedere [printf](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md).  
  
 Se compilato come C\+\+, il `isnan` \(macro\) non è definito e un `isnan` definita funzione di modello. Restituisce un valore di tipo `bool` anziché un intero.  
  
 Il `_isnan` e `_isnanf` funzioni sono specifici di Microsoft. Il `_isnanf` funzione è disponibile solo quando compilato per x64.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria \(C\)|Intestazione obbligatoria \(C\+\+\)|  
|-------------|-------------------------------------|-----------------------------------------|  
|`isnan`, `_isnanf`|\<math.h\>|\<math.h\> o \<cmath\>|  
|`_isnan`|\<float.h\>|\< float. h \> o \< cfloat \>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [\_finite, \_finitef](../../c-runtime-library/reference/finite-finitef.md)   
 [fpclass, \_fpclassf](../../c-runtime-library/reference/fpclass-fpclassf.md)