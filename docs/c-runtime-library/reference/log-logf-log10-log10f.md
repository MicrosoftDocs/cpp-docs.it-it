---
title: log, logf, log10, log10f | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- log10f
- logf
- log10
- log
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
- logf
- _log10l
- log
- _logl
- log10f
- log10
dev_langs: C++
helpviewer_keywords:
- calculating logarithms
- log10f function
- log10 function
- log function
- logf function
- logarithms
ms.assetid: 7adc77c2-04f7-4245-a980-21215563cfae
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: d60347bc47c05a19cb1487e7a6738d328c78f846
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="log-logf-log10-log10f"></a>log, logf, log10, log10f
Calcola logaritmi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      double log(  
   double x   
);  
float log(  
   float x  
);  // C++ only  
long double log(  
   long double x  
);  // C++ only  
float logf(  
   float x   
);  
double log10(  
   double x  
);  
float log10(  
   float x  
);  // C++ only  
long double log10(  
   long double x  
);  // C++ only  
float log10f (  
   float x  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 *x*  
 Valore di cui trovare il logaritmo.  
  
## <a name="return-value"></a>Valore restituito  
 Le funzioni **log** restituiscono il logaritmo naturale (base e) di *x* in caso di esito positivo. Le funzioni log10 restituiscono il logaritmo in base 10. Se *x* è negativo, queste funzioni restituiscono un valore indefinito per impostazione predefinita. Se *x* è 0, restituiscono INF (infinito).  
  
|Input|Eccezione SEH|Eccezione Matherr|  
|-----------|-------------------|-----------------------|  
|± QNAN,IND|none|_DOMAIN|  
|± 0|ZERODIVIDE|_SING|  
|x < 0|NON VALIDO|_DOMAIN|  
  
 **log** e `log10` hanno un'implementazione che usa SSE2 (Streaming SIMD Extensions 2). Vedere [_set_SSE2_enable](../../c-runtime-library/reference/set-sse2-enable.md) per informazioni e le restrizioni sull'uso dell'implementazione SSE2.  
  
## <a name="remarks"></a>Note  
 C++ consente l'overload, quindi è possibile chiamare overload di **log** e `log10`. In un programma C **log** e `log10` accettano e restituiscono sempre un valore double.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|**log**, `logf`, `log10`, `log10f`|\<math.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_log.c  
/* This program uses log and log10  
 * to calculate the natural logarithm and  
 * the base-10 logarithm of 9,000.  
 */  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double x = 9000.0;  
   double y;  
  
   y = log( x );  
   printf( "log( %.2f ) = %f\n", x, y );  
   y = log10( x );  
   printf( "log10( %.2f ) = %f\n", x, y );  
}  
```  
  
## <a name="output"></a>Output  
  
```  
log( 9000.00 ) = 9.104980  
log10( 9000.00 ) = 3.954243  
```  
  
 Per generare logaritmi per altre basi, usare la relazione matematica: log base b di a == logaritmo naturale (a) / logaritmo naturale (b).  
  
```  
// logbase.cpp  
#include <math.h>  
#include <stdio.h>  
  
double logbase(double a, double base)  
{  
   return log(a) / log(base);  
}  
  
int main()  
{  
   double x = 65536;  
   double result;  
  
   result = logbase(x, 2);  
   printf("Log base 2 of %lf is %lf\n", x, result);  
}  
```  
  
## <a name="output"></a>Output  
  
```  
Log base 2 of 65536.000000 is 16.000000  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)  (Supporto delle funzioni a virgola mobile)  
 [EXP, expf, soluz](../../c-runtime-library/reference/exp-expf.md)   
 [_matherr](../../c-runtime-library/reference/matherr.md)   
 [pow, powf, powl](../../c-runtime-library/reference/pow-powf-powl.md)   
 [_CIlog](../../c-runtime-library/cilog.md)   
 [_CIlog10](../../c-runtime-library/cilog10.md)