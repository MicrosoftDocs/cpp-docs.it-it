---
title: "Long Double | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.types"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "long double 10 byte"
  - "Windows a 16 bit"
  - "Windows a 32 bit"
  - "long double 8 byte"
  - "precisione 80 bit"
  - "precisione 80 bit"
  - "long double 8 byte"
  - "long double"
ms.assetid: bb581e20-b5c2-4079-8ee8-ac6739a37852
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Long Double
Le versioni precedenti a 16 bit di Microsoft C\/C\+\+ e Microsoft Visual C\+\+ supportano il tipo di dati `long double` con precisione 80 bit.  Nella programmazione Win32, tuttavia, il tipo di dati `double` mappa a `long double` con precisione a 64 bit.  La libreria di runtime di Microsoft fornisce le versioni di `long double` delle funzioni matematiche solo per la compatibilità con le versioni precedenti.  Prototipi di funzione di `long double` sono identici ai prototipi delle controparti di `double`, ad eccezione del tipo di dati `long` `double` che sostituisce il tipo di dati `double`.  Le versioni `long double` di queste funzioni non devono essere utilizzate nel codice.  
  
### Doppie funzioni e le relative controparti Long Double  
  
|Funzione|Long double<br /><br /> controparte|Funzione|Long double<br /><br /> controparte|  
|--------------|---------------------------------|--------------|---------------------------------|  
|[acos](../c-runtime-library/reference/acos-acosf-acosl.md)|`acosl`|[frexp](../c-runtime-library/reference/frexp.md)|`frexpl`|  
|[asin](../c-runtime-library/reference/asin-asinf-asinl.md)|`asinl`|[\_hypot](../c-runtime-library/reference/hypot-hypotf-hypotl-hypot-hypotf-hypotl.md)|`_hypotl`|  
|[atan](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)|`atanl`|[ldexp](../c-runtime-library/reference/ldexp.md)|`ldexpl`|  
|[atan2](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)|`atan2l`|[log](../c-runtime-library/reference/log-logf-log10-log10f.md)|`logl`|  
|[atof](../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)|`_atold`|[log10](../c-runtime-library/reference/log-logf-log10-log10f.md)|`log10l`|  
|[Funzioni di Bessel: j0, j1, jn](../misc/bessel-functions-j0-j1-jn.md)|`j0l, j1l, jnl`|[\_matherr](../c-runtime-library/reference/matherr.md)|`_matherrl`|  
|[Funzioni di Bessel: y0, y1, yn](../Topic/Bessel%20Functions:%20_y0,%20_y1,%20_yn.md)|`y0l, y1l, ynl`|[modf](../c-runtime-library/reference/modf-modff-modfl.md)|`modfl`|  
|[\_cabs](../c-runtime-library/reference/cabs.md)|`_cabsl`|[pow](../c-runtime-library/reference/pow-powf-powl.md)|`powl`|  
|[ceil](../c-runtime-library/reference/ceil-ceilf-ceill.md)|`ceill`|[sin](../c-runtime-library/reference/sin-sinf-sinl-sinh-sinhf-sinhl.md)|`sinl`|  
|[cos](../c-runtime-library/reference/cos-cosf-cosl-cosh-coshf-coshl.md)|`cosl`|[sinh](../c-runtime-library/reference/sin-sinf-sinl-sinh-sinhf-sinhl.md)|`sinhl`|  
|[cosh](../c-runtime-library/reference/cos-cosf-cosl-cosh-coshf-coshl.md)|`coshl`|[sqrt](../c-runtime-library/reference/sqrt-sqrtf-sqrtl.md)|`sqrtl`|  
|[exp](../c-runtime-library/reference/exp-expf.md)|`expl`|[strtod](../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md)|`_strtold`|  
|[fabs](../c-runtime-library/reference/fabs-fabsf-fabsl.md)|`fabsl`|[tan](../c-runtime-library/reference/tan-tanf-tanl-tanh-tanhf-tanhl.md)|`tanl`|  
|[floor](../c-runtime-library/reference/floor-floorf-floorl.md)|`floorl`|[tanh](../c-runtime-library/reference/tan-tanf-tanl-tanh-tanhf-tanhl.md)|`tanhl`|  
|[fmod](../c-runtime-library/reference/fmod-fmodf.md)|`fmodl`|||  
  
## Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)