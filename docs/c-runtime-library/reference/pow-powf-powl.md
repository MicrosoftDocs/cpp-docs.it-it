---
title: pow, powf, powl | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- powl
- pow
- powf
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-math-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- powl
- pow
- _powl
- powf
dev_langs:
- C++
helpviewer_keywords:
- exponential calculations
- powl function
- _powl function
- exponentiation
- powers, calculating
- calculating exponentials
- powf function
- pow function
ms.assetid: e75c33ed-2e59-48b1-be40-81da917324f1
caps.latest.revision: 18
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: 4400582a792644b928c02db346bc7eae1087dc85
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="pow-powf-powl"></a>pow, powf, powl
Calcolare il valore di `x` elevato alla potenza di `y`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
double pow(  
   double x,  
   double y   
);  
double pow(  
   double x,  
   int y  
);  // C++ only  
float pow(  
   float x,  
   float y   
);  // C++ only  
float pow(  
   float x,  
   int y  
);  // C++ only  
long double pow(  
   long double x,  
   long double y  
);  // C++ only  
long double pow(  
   long double x,  
   int y  
);  // C++ only  
float powf(  
   float x,  
   float y   
);  
long double powl(  
   long double x,  
   long double y  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `x`  
 Base.  
  
 `y`  
 Esponente.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce il valore di `x`<sup>y</sup>. In caso di overflow o di underflow non viene stampato alcun messaggio di errore.  
  
|Valori di x e y|Valore restituito di pow|  
|-----------------------|-------------------------|  
|`x` \< > 0 e `y` = 0,0|1|  
|`x` = 0,0 e `y` = 0,0|1|  
|`x` = 0,0 e `y` < 0|INF|  
  
## <a name="remarks"></a>Note  
 `pow` non riconosce i valori a virgola mobile integrali maggiori di 2<sup>64</sup> (ad esempio, `1.0E100`).  
  
 `pow` ha un'implementazione che usa SSE2 (Streaming SIMD Extensions 2). Per informazioni e le restrizioni sull'uso dell'implementazione SSE2, vedere [_set_SSE2_enable](../../c-runtime-library/reference/set-sse2-enable.md).  
  
 Dato che C++ consente l'overload, è possibile chiamare i vari overload di `pow`. In un programma C `pow` accetta sempre due valori double e restituisce un valore double.  
  
 L'overload `pow(int, int)` non è più disponibile. Se si usa questo overload, il compilatore può generare C2668. Per evitare questo problema, eseguire il cast del primo parametro a `double`, `float` o `long double`.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`pow`, `powf`, `powl`|\<math.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_pow.c  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double x = 2.0, y = 3.0, z;  
  
   z = pow( x, y );  
   printf( "%.1f to the power of %.1f is %.1f\n", x, y, z );  
}  
```  
  
## <a name="output"></a>Output  
  
```  
2.0 to the power of 3.0 is 8.0  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)  (Supporto delle funzioni a virgola mobile)  
 [EXP, expf, soluz](../../c-runtime-library/reference/exp-expf.md)   
 [log, logf, log10, log10f](../../c-runtime-library/reference/log-logf-log10-log10f.md)   
 [sqrt, sqrtf, sqrtl](../../c-runtime-library/reference/sqrt-sqrtf-sqrtl.md)   
 [_CIpow](../../c-runtime-library/cipow.md)
