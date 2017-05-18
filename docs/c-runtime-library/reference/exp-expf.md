---
title: EXP, expf, soluz | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- expf
- expl
- exp
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
- _expl
- expf
- expl
- exp
dev_langs:
- C++
helpviewer_keywords:
- exponential calculations
- expf function
- expl function
- calculating exponentials
- exp function
ms.assetid: 7070016d-1143-407e-9e9a-6b059bb88867
caps.latest.revision: 13
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: bce9249134b9d0e3716d8b79a0bc0642c64fc5e6
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="exp-expf-expl"></a>EXP, expf, soluz
Calcola l'esponenziale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
double exp(   
   double x  
);  
float exp(  
   float x  
);  // C++ only  
long double exp(  
   long double x  
);  // C++ only  
float expf(   
   float x  
);  
long double expl(  
   long double x  
);  
```  
  
### <a name="parameters"></a>Parametri  
 `x`  
 Valore a virgola mobile a exponentiate la base del logaritmo naturale *e* da.  
  
## <a name="return-value"></a>Valore restituito  
 Il `exp` funzioni restituiscono il valore esponenziale del parametro a virgola mobile, *x*, se ha esito positivo. Il risultato è *e*<sup>*x*</sup>, dove *e* è la base del logaritmo naturale. In caso di overflow, la funzione restituisce INF (infinito) e in caso di underflow, `exp` restituisce 0.  
  
|Input|Eccezione SEH|Eccezione Matherr|  
|-----------|-------------------|-----------------------|  
|± NaN non interattivo, indeterminato|Nessuno|_DOMAIN|  
|Infinito ±|INVALID|_DOMAIN|  
|x ≥ 7.097827e+002|INEXACT+OVERFLOW|OVERFLOW|  
|X ≤ -7.083964e+002|INEXACT+UNDERFLOW|UNDERFLOW|  
  
 Il `exp` funzione è un'implementazione che utilizza Streaming SIMD Extensions 2 (SSE2). Per informazioni e per le restrizioni sull'uso dell'implementazione SSE2, vedere [_set_SSE2_enable](../../c-runtime-library/reference/set-sse2-enable.md).  
  
## <a name="remarks"></a>Note  
 C++ consente l'overload, pertanto è possibile chiamare degli overload di `exp` che accettano un **float** o **long double** argomento. In un programma C, `exp` accetta e restituisce sempre un **double**.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione C obbligatoria|Intestazione C++ obbligatoria|  
|--------------|---------------------|---|  
|`exp`, `expf`|\<math.h>|\<cmath> o \<math.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_exp.c  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double x = 2.302585093, y;  
  
   y = exp( x );  
   printf( "exp( %f ) = %f\n", x, y );  
}  
```  
  
```Output  
exp( 2.302585 ) = 10.000000  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)  (Supporto a virgola mobile)  
 [log, logf, log10, log10f](../../c-runtime-library/reference/log-logf-log10-log10f.md)   
 [_CIexp](../../c-runtime-library/ciexp.md)
