---
title: "cos, cosf, cosl, cosh, coshf, coshl | Microsoft Docs"
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
  - "coshl"
  - "cosh"
  - "cos"
  - "cosl"
  - "cosf"
  - "coshf"
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
  - "coshl"
  - "cos"
  - "cosf"
  - "cosh"
  - "cosl"
  - "coshf"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "calcolo del coseno"
  - "cos (funzione)"
  - "cosf (funzione)"
  - "cosh (funzione)"
  - "coshf (funzione)"
  - "coshl (funzione)"
  - "coseni"
  - "coseni, calcolo"
  - "cosl (funzione)"
  - "funzioni iperboliche"
  - "funzioni trigonometriche"
ms.assetid: ae90435e-6b68-4a47-a81f-be87d5c08f16
caps.latest.revision: 17
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# cos, cosf, cosl, cosh, coshf, coshl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Calcola il coseno \(`cos`, `cosf`, o `cosl`\) o coseno iperbolico \(`cosh`, `coshf`, o `coshl`\).  
  
## Sintassi  
  
```  
double cos(   
   double x   
);  
float cos(  
   float x   
);  // C++ only  
long double cos(  
   long double x  
);  // C++ only  
float cosf(   
   float x   
);  
long double cosl(  
   long double x  
);  
double cosh(   
   double x   
);  
float cosh(  
   float x   
);  // C++ only  
long double cosh(  
   long double x  
);  // C++ only  
float coshf(  
   float x   
);  
long double coshl(  
   long double x  
);  
```  
  
#### Parametri  
 `x`  
 Angolo in radianti.  
  
## Valore restituito  
 Coseno o coseno iperbolico di `x`.  Se `x` è maggiore o uguale a 263, o inferiore o uguale a 263, si verifica una perdita di significatività del risultato di una chiamata a `cos`, `cosf`, o `cosl`.  
  
 Per impostazione predefinita, se il risultato è troppo grande in `cosh`, `coshf`, o nella chiamata `coshl`, la funzione restituisce `HUGE_VAL` e imposta `errno` a `ERANGE`.  
  
|Input|Eccezione SEH|Eccezione Matherr|  
|-----------|-------------------|-----------------------|  
|± `QNAN`,`IND`|nessuno|`_DOMAIN`|  
|± ∞  \(`cosf`, `cos`, `cosl`\)|`INVALID`|`_DOMAIN`|  
|x ≥ 7.104760e\+002 \(`cosh`, `coshf`, `coshl`\)|`INEXACT`\+`OVERFLOW`|`OVERFLOW`|  
  
## Note  
 Poiché C\+\+ consente l'overload, è possibile chiamare gli overload di `cos` e `cosh` che accettano e restituiscono i valori `float` o `long double`.  In un programma C, `cos` e `cosh` vengono sempre accettati e restituiscono `double`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`cos`, `cosh`, `cosf`, `coshf`, `cosl`, `coshl`|\<math.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
 Vedere l'esempio in [sin, sinf, sinl, sinh, sinhf, sinhl](../../c-runtime-library/reference/sin-sinf-sinl-sinh-sinhf-sinhl.md).  
  
## Equivalente .NET Framework  
  
-   [System::Math::Cos](https://msdn.microsoft.com/en-us/library/system.math.cos.aspx)  
  
-   [System::Math::Cosh](https://msdn.microsoft.com/en-us/library/system.math.cosh.aspx)  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [acos, acosf, acosl](../../c-runtime-library/reference/acos-acosf-acosl.md)   
 [asin, asinf, asinl](../../c-runtime-library/reference/asin-asinf-asinl.md)   
 [atan, atanf, atanl, atan2, atan2f, atan2l](../../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)   
 [\_matherr](../../c-runtime-library/reference/matherr.md)   
 [sin, sinf, sinl, sinh, sinhf, sinhl](../../c-runtime-library/reference/sin-sinf-sinl-sinh-sinhf-sinhl.md)   
 [tan, tanf, tanl, tanh, tanhf, tanhl](../../c-runtime-library/reference/tan-tanf-tanl-tanh-tanhf-tanhl.md)   
 [\_CIcos](../../c-runtime-library/cicos.md)