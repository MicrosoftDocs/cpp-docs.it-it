---
title: ldexp | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- ldexp
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
- ldexp
- _ldexpl
dev_langs:
- C++
helpviewer_keywords:
- calculating real numbers
- computing real numbers
- mantissas, floating-point variables
- ldexp function
- exponent, floating-point numbers
- floating-point functions, mantissa and exponent
ms.assetid: aa7f5310-3879-4f63-ae74-86a39fbdedfa
caps.latest.revision: 12
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
ms.openlocfilehash: 567098b286ba81f2bdd091706518f812f9d2e128
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="ldexp"></a>ldexp
Moltiplica un numero a virgola mobile per una potenza integrale di due.  
  
## <a name="syntax"></a>Sintassi  
  
```  
double ldexp(  
   double x,  
   int exp   
);  
float ldexp(  
   float x,  
   int exp  
);  // C++ only  
long double ldexp(  
   long double x,  
   int exp  
);  // C++ only   
float ldexpf(  
   float x,  
   int exp  
);   
long double ldexpl(  
   long double x,  
   int exp  
);   
```  
  
#### <a name="parameters"></a>Parametri  
 `x`  
 Valore a virgola mobile.  
  
 `exp`  
 Esponente dell'intero.  
  
## <a name="return-value"></a>Valore restituito  
 In caso di esito positivo, la funzione `ldexp` restituisce il valore di `x` * 2<sup>exp</sup>. In caso di overflow e in base al segno di `x`, `ldexp` restituisce + /- `HUGE_VAL`; `errno` è impostato su `ERANGE`.  
  
 Per altre informazioni su `errno` e i possibili valori di errore restituiti, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 Poiché C++ consente l'overload, è possibile chiamare overload di `ldexp` che accettino tipi `float` e `long double`. In un programma C, `ldexp` accetta sempre un `double` e un `int` e restituisce un `double`.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione C|Intestazione C++|  
|-------------|--------------|------------------|  
|`ldexp`, `ldexpf`, `ldexpl`|\<math.h>|\<cmath>|  
  
 Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_ldexp.c  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double x = 4.0, y;  
   int p = 3;  
  
   y = ldexp( x, p );  
   printf( "%2.1f times two to the power of %d is %2.1f\n", x, p, y );  
}  
```  
  
## <a name="output"></a>Output  
  
```  
4.0 times two to the power of 3 is 32.0  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [frexp](../../c-runtime-library/reference/frexp.md)   
 [modf, modff, modfl](../../c-runtime-library/reference/modf-modff-modfl.md)
