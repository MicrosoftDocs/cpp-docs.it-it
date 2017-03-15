---
title: "CLOG, clogf, clogl | Microsoft Docs"
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
  - "clog"
  - "clogf"
  - "clogl"
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
  - "clog"
  - "clogf"
  - "clogl"
  - "complex/clog"
  - "complex/clogf"
  - "complex/clogl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "clog (funzione)"
  - "funzione clogf"
  - "funzione clogl"
ms.assetid: 870b9b0b-6618-46f3-bfcf-da595cbd5e18
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# CLOG, clogf, clogl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera il logaritmo naturale di un numero complesso, con un ramo tagliato lungo l'asse reale negativo.  
  
## Sintassi  
  
```  
_Dcomplex clog(   
   _Dcomplex z   
);  
_Fcomplex clog(   
   _Fcomplex z   
);  // C++ only  
_Lcomplex clog(   
   _Lcomplex z   
);  // C++ only  
_Fcomplex clogf(   
   _Fcomplex z   
);  
_Lcomplex clogl(   
   _Lcomplex z   
);  
```  
  
#### Parametri  
 `z`  
 Base del logaritmo.  
  
## Valore restituito  
 Il logaritmo naturale di `z`. Il risultato è unbounded lungo l'asse reale e nell'intervallo \[−iπ \+ iπ\] lungo l'asse immaginario.  
  
 I valori restituiti possibili sono:  
  
|parametro z|Valore restituito|  
|-----------------|-----------------------|  
|Positivo|Il logaritmo in base 10 di z|  
|Zero|\- ∞|  
|Negativo|NaN|  
|NaN|NaN|  
|\+ ∞|\+ ∞|  
  
## Note  
 Dato che C\+\+ consente l'overload, è possibile chiamare degli overload di `clog` che accettino e restituiscano valori `_Fcomplex` e `_Lcomplex`. In un programma C, `clog` accetta e restituisce sempre un `_Dcomplex` valore.  
  
## Requisiti  
  
|Routine|Intestazione C|Intestazione C\+\+|  
|-------------|--------------------|------------------------|  
|`clog`, `clogf`, `clogl`|\<complex.h\>|\< ccomplex \>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [cexp, cexpf, cexpl](../../c-runtime-library/reference/cexp-cexpf-cexpl.md)   
 [cpow, cpowf, cpowl](../../c-runtime-library/reference/cpow-cpowf-cpowl.md)   
 [clog10, clog10f, clog10l](../../c-runtime-library/reference/clog10-clog10f-clog10l.md)