---
title: sqrt, sqrtf, sqrtl | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- sqrtl
- sqrtf
- sqrt
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
- sqrt
- sqrtf
- _sqrtl
dev_langs: C++
helpviewer_keywords:
- sqrtf function
- sqrt function
- sqrtl function
- _sqrtl function
- calculating square roots
- square roots, calculating
ms.assetid: 2ba9467b-f172-41dc-8f10-b86f68fa813c
caps.latest.revision: "18"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: f711ca2a09126b6a2e914ab094f5f491a9998c41
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="sqrt-sqrtf-sqrtl"></a>sqrt, sqrtf, sqrtl
Calcola la radice quadrata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
double sqrt(  
   double x   
);  
float sqrt(  
   float x   
);  // C++ only  
long double sqrt(  
   long double x  
);  // C++ only  
float sqrtf(  
   float x   
);  
long double sqrtl(  
   long double x   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `x`  
 Valore a virgola mobile non negativo  
  
## <a name="remarks"></a>Note  
 Poiché C++ consente l'overload, è possibile chiamare overload di `sqrt` che accettino tipi `float` e `long double`. In un programma C, `sqrt` accetta e restituisce sempre `double`.  
  
## <a name="return-value"></a>Valore restituito  
 La funzione `sqrt` restituisce la radice quadrata di `x`. Per impostazione predefinita, se `x` è negativo, `sqrt` restituisce un valore NaN indefinito.  
  
|Input|Eccezione SEH|Eccezione `_matherr`|  
|-----------|-------------------|--------------------------|  
|± QNAN,IND|none|_DOMAIN|  
|- ∞|none|_DOMAIN|  
|x<0|none|_DOMAIN|  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione C|Intestazione C++|  
|--------------|--------------|------------------|  
|`sqrt`, `sqrtf`, `sqrtl`|\<math.h>|\<cmath>|  
  
 Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```C  
// crt_sqrt.c  
// This program calculates a square root.  
  
#include <math.h>  
#include <stdio.h>  
#include <stdlib.h>  
  
int main( void )  
{  
   double question = 45.35, answer;  
   answer = sqrt( question );  
   if( question < 0 )  
      printf( "Error: sqrt returns %f\n", answer );  
   else  
      printf( "The square root of %.2f is %.2f\n", question, answer );  
}  
```  
  
```Output  
The square root of 45.35 is 6.73  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)  (Supporto delle funzioni a virgola mobile)  
 [EXP, expf, soluz](../../c-runtime-library/reference/exp-expf.md)   
 [log, logf, log10, log10f](../../c-runtime-library/reference/log-logf-log10-log10f.md)   
 [pow, powf, powl](../../c-runtime-library/reference/pow-powf-powl.md)   
 [_CIsqrt](../../c-runtime-library/cisqrt.md)