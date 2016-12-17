---
title: "clog10, clog10f, clog10l | Microsoft Docs"
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
  - "clog10"
  - "clog10f"
  - "clog10l"
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
  - "clog10"
  - "clog10f"
  - "clog10l"
  - "complex/clog10"
  - "complex/clog10f"
  - "complex/clog10l"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "funzione clog10"
  - "funzione clog10f"
  - "funzione clog10l"
ms.assetid: 2ddae00d-ef93-4441-add3-f4d58358401b
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# clog10, clog10f, clog10l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera il logaritmo in base 10 di un numero complesso.  
  
## Sintassi  
  
```  
_Dcomplex clog10(   
   _Dcomplex z   
);  
_Fcomplex clog10(   
  _Fcomplex z   
);  // C++ only  
_Lcomplex clog10(   
   _Lcomplex z   
);  // C++ only  
_Fcomplex clog10f(   
   _Fcomplex z   
);  
_Lcomplex clog10l(   
   _Lcomplex z   
);  
```  
  
#### Parametri  
 `z`  
 Base del logaritmo.  
  
## Valore restituito  
 I valori restituiti possibili sono:  
  
|parametro z|Valore restituito|  
|-----------------|-----------------------|  
|Positivo|Il logaritmo in base 10 di z|  
|Zero|\- ∞|  
|Negativo|NaN|  
|NaN|NaN|  
|\+ ∞|\+ ∞|  
  
## Note  
 Dato che C\+\+ consente l'overload, è possibile chiamare degli overload di `clog10` che accettino e restituiscano valori `_Fcomplex` e `_Lcomplex`. In un programma C, `clog10` accetta e restituisce sempre un `_Dcomplex` valore.  
  
## Requisiti  
  
|Routine|Intestazione C|Intestazione C\+\+|  
|-------------|--------------------|------------------------|  
|`clog10`, `clog10f`, `clogl`|\<complex.h\>|\< ccomplex \>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [cexp, cexpf, cexpl](../../c-runtime-library/reference/cexp-cexpf-cexpl.md)   
 [cpow, cpowf, cpowl](../../c-runtime-library/reference/cpow-cpowf-cpowl.md)   
 [CLOG, clogf, clogl](../../c-runtime-library/reference/clog-clogf-clogl.md)