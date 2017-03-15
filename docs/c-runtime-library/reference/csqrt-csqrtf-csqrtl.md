---
title: "csqrt, csqrtf, csqrtl | Microsoft Docs"
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
  - "csqrt"
  - "csqrtf"
  - "csqrtl"
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
  - "csqrt"
  - "csqrtf"
  - "csqrtl"
  - "complex/csqrt"
  - "complex/csqrtf"
  - "complex/csqrtl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzione csqrt"
  - "funzione csqrtf"
  - "funzione csqrtl"
ms.assetid: b65f086b-0f55-4622-a7a3-4e79d9c9c05c
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# csqrt, csqrtf, csqrtl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera la radice quadrata di un numero complesso, con un ramo tagliato lungo l'asse reale negativo.  
  
## Sintassi  
  
```  
_Dcomplex csqrt(   
   _Dcomplex z   
);  
_Fcomplex csqrt(   
   _Fcomplex z   
);  // C++ only  
_Lcomplex csqrt(   
   _Lcomplex z   
);  // C++ only  
_Fcomplex csqrtf(   
   _Fcomplex z   
);  
_Lcomplex csqrtl(   
   _Lcomplex z   
);  
```  
  
#### Parametri  
 `z`  
 Numero complesso.  
  
## Valore restituito  
 Radice quadrata di `z`. Il risultato è il piano di metà destra.  
  
|Input|Eccezione SEH|Eccezione `_matherr`|  
|-----------|-------------------|--------------------------|  
|± QNAN, IND|none|\_DOMAIN|  
|\- ∞|none|\_DOMAIN|  
  
## Note  
 Dato che C\+\+ consente l'overload, è possibile chiamare degli overload di `csqrt` che accettino e restituiscano valori `_Fcomplex` e `_Lcomplex`. In un programma C, `csqrt` accetta e restituisce sempre un `_Dcomplex` valore.  
  
## Requisiti  
  
|Routine|Intestazione C|Intestazione C\+\+|  
|-------------|--------------------|------------------------|  
|`csqrt`, `csqrtf`, `csqrtl`|\<complex.h\>|\< ccomplex \>|  
  
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
 [cacos, cacosf, cacosl](../../c-runtime-library/reference/cacos-cacosf-cacosl.md)   
 [Ctan, ctanf, ctanl](../../c-runtime-library/reference/ctan-ctanf-ctanl.md)   
 [csin, csinf, csinl](../../c-runtime-library/reference/csin-csinf-csinl.md)   
 [casin, casinf, casinl](../../c-runtime-library/reference/casin-casinf-casinl.md)   
 [ccos, ccosf, ccosl](../../c-runtime-library/reference/ccos-ccosf-ccosl.md)