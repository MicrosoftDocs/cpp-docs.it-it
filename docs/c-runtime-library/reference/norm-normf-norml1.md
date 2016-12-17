---
title: "NORM, normf, norml | Microsoft Docs"
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
  - "norm"
  - "normf"
  - "norml"
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
  - "norm"
  - "normf"
  - "norml"
  - "complex/norm"
  - "complex/normf"
  - "complex/norml"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "norm (funzione)"
  - "funzione normf"
  - "funzione norml"
ms.assetid: 9786ecfe-0019-4553-b378-0af6c691e15c
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# NORM, normf, norml
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera la grandezza di un numero complesso al quadrato.  
  
## Sintassi  
  
```  
double norm(   
   _Dcomplex z   
);  
float norm(   
   _Fcomplex z   
);  // C++ only  
long double norm(   
  _Lcomplex z   
);  // C++ only  
float normf(   
   _Fcomplex z   
);  
long double norml(   
   _Lcomplex z   
);  
```  
  
#### Parametri  
 `z`  
 Numero complesso.  
  
## Valore restituito  
 La grandezza del quadrato `z`.  
  
## Note  
 Poiché C\+\+ consente l'overload, è possibile chiamare gli overload di `norm` che accettano `_Fcomplex` o `_Lcomplex` valori e restituire `float` o `long double` valori. In un programma C, `norm` ha sempre un `_Dcomplex` valore e restituisce un `double` valore.  
  
## Requisiti  
  
|Routine|Intestazione C|Intestazione C\+\+|  
|-------------|--------------------|------------------------|  
|`norm`, `normf`, `norml`|\<complex.h\>|\< ccomplex \>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [creal, crealf, creall](../../c-runtime-library/reference/creal-crealf-creall.md)   
 [cproj, cprojf, cprojl](../../c-runtime-library/reference/cproj-cprojf-cprojl.md)   
 [conj, conjf, conjl](../../c-runtime-library/reference/conj-conjf-conjl.md)   
 [cimag, cimagf, cimagl](../../c-runtime-library/reference/cimag-cimagf-cimagl.md)   
 [carg, cargf, cargl](../../c-runtime-library/reference/carg-cargf-cargl.md)   
 [file CAB, cabsf, cabsl](../../c-runtime-library/reference/cabs-cabsf-cabsl.md)