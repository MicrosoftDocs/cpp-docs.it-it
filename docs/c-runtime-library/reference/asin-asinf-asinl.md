---
title: "asin, asinf, asinl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "asinf"
  - "asinl"
  - "asin"
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
  - "asin"
  - "asinl"
  - "asinf"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "arcoseno (funzione)"
  - "asin (funzione)"
  - "asinf (funzione)"
  - "asinl (funzione)"
  - "funzioni trigonometriche"
ms.assetid: ca05f9ea-b711-49f6-9f32-2f4019abfd69
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 14
---
# asin, asinf, asinl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Calcola l'arcoseno.  
  
## Sintassi  
  
```  
double asin(   
   double x   
);  
float asin(  
   float x  
);  // C++ only  
long double asin(  
   long double x  
);  // C++ only  
float asinf (   
   float x   
);  
long double asinl(  
   long double x  
);  
```  
  
#### Parametri  
 `x`  
 Valore di cui bisogna calcolare l'arcoseno.  
  
## Valore restituito  
 La funzione `asin` restituisce l'arcoseno \(la funzione di seno inverso\) di `x` nell'intervallo –π\/2 a π\/2 radianti.  
  
 Per impostazione predefinita, se `x` è minore di –1 o maggiore di 1, `asin` restituisce un valore indefinito.  
  
|Input|Eccezione SEH|Eccezione Matherr|  
|-----------|-------------------|-----------------------|  
|± ∞|`INVALID`|`_DOMAIN`|  
|± `QNAN`,`IND`|nessuno|`_DOMAIN`|  
|&#124;x&#124;\>1|`INVALID`|`_DOMAIN`|  
  
## Note  
 Poiché C\+\+ consente l'overload, è possibile chiamare l'overload di `asin` con `float` e valori `long double`.  In un programma C, `asin` accetta sempre e restituisce un double.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`asin`, `asinf`, `asinl`|\<math.h\>|  
  
## Esempio  
 Per ulteriori informazioni, vedere [acos, acosf, acosl](../../c-runtime-library/reference/acos-acosf-acosl.md).  
  
## Equivalente .NET Framework  
 [System::Math::Asin](https://msdn.microsoft.com/en-us/library/system.math.asin.aspx)  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [acos, acosf, acosl](../../c-runtime-library/reference/acos-acosf-acosl.md)   
 [atan, atanf, atanl, atan2, atan2f, atan2l](../../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)   
 [cos, cosf, cosl, cosh, coshf, coshl](../../c-runtime-library/reference/cos-cosf-cosl-cosh-coshf-coshl.md)   
 [\_matherr](../../c-runtime-library/reference/matherr.md)   
 [sin, sinf, sinl, sinh, sinhf, sinhl](../../c-runtime-library/reference/sin-sinf-sinl-sinh-sinhf-sinhl.md)   
 [tan, tanf, tanl, tanh, tanhf, tanhl](../../c-runtime-library/reference/tan-tanf-tanl-tanh-tanhf-tanhl.md)