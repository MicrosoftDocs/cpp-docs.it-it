---
title: "cacos, cacosf, cacosl | Microsoft Docs"
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
  - "cacos"
  - "cacosf"
  - "cacosl"
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
  - "cacos"
  - "cacosf"
  - "cacosl"
  - "complex/cacos"
  - "complex/cacosf"
  - "complex/cacosl"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "funzione cacos"
  - "funzione cacosf"
  - "funzione cacosl"
ms.assetid: 78118c00-0a07-49c1-8a13-4bf19ce3aea8
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# cacos, cacosf, cacosl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera l'arcocoseno di un numero complesso, con tagli ramo all'esterno dell'intervallo \[− 1, \+ 1\] lungo l'asse reale.  
  
## Sintassi  
  
```  
_Dcomplex cacos(   
  _Dcomplex z   
);  
_Fcomplex cacos(   
   _Fcomplex z   
);  // C++ only  
_Lcomplex cacos(   
   _Lcomplex z   
);  // C++ only  
_Fcomplex cacosf(   
   _Fcomplex z   
);  
_Lcomplex cacosl(   
   _Lcomplex z   
);  
```  
  
#### Parametri  
 `z`  
 Un numero complesso che rappresenta l'angolo, espresso in radianti.  
  
## Valore restituito  
 L'arcocoseno di `z`, espresso in radianti. Il risultato è unbounded lungo l'asse immaginario e nei nell'intervallo \[0, π\] lungo l'asse reale. Se si verificherà un errore di dominio `z` è compreso nell'intervallo \[\-1, \+ 1\].  
  
## Note  
 Dato che C\+\+ consente l'overload, è possibile chiamare degli overload di `cacos` che accettino e restituiscano valori `_Fcomplex` e `_Lcomplex`. In un programma C, `cacos` accetta e restituisce sempre un `_Dcomplex` valore.  
  
## Requisiti  
  
|Routine|Intestazione C|Intestazione C\+\+|  
|-------------|--------------------|------------------------|  
|`cacos`, `cacosf`, `cacosl`|\<complex.h\>|\< ccomplex \>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [catanh, catanhf, catanhl](../../c-runtime-library/reference/catanh-catanhf-catanhl.md)   
 [ctanh, ctanhf, ctanhl](../../c-runtime-library/reference/ctanh-ctanhf-ctanhl.md)   
 [catan, catanf, catanl](../../c-runtime-library/reference/catan-catanf-catanl.md)   
 [csinh, csinhf, csinhl](../../c-runtime-library/reference/csinh-csinhf-csinhl.md)   
 [casinh, casinhf, casinhl](../../c-runtime-library/reference/casinh-casinhf-casinhl.md)   
 [ccosh, ccoshf, ccoshl](../../c-runtime-library/reference/ccosh-ccoshf-ccoshl.md)   
 [cacosh, cacoshf, cacoshl](../../c-runtime-library/reference/cacosh-cacoshf-cacoshl.md)   
 [Ctan, ctanf, ctanl](../../c-runtime-library/reference/ctan-ctanf-ctanl.md)   
 [csin, csinf, csinl](../../c-runtime-library/reference/csin-csinf-csinl.md)   
 [casin, casinf, casinl](../../c-runtime-library/reference/casin-casinf-casinl.md)   
 [ccos, ccosf, ccosl](../../c-runtime-library/reference/ccos-ccosf-ccosl.md)   
 [csqrt, csqrtf, csqrtl](../../c-runtime-library/reference/csqrt-csqrtf-csqrtl.md)