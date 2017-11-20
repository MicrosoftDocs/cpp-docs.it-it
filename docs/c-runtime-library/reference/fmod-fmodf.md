---
title: fmod, fmodf | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- fmod
- fmodf
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
- fmod
- _fmodl
- fmodf
dev_langs: C++
helpviewer_keywords:
- calculating floating-point remainders
- fmodf function
- fmod function
- floating-point numbers, calculating remainders
ms.assetid: 6962d369-d11f-40b1-a6d7-6f67239f8a23
caps.latest.revision: "13"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: c6a53a704e14c3c8f8e022398b16e002c33c8328
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="fmod-fmodf"></a>fmod, fmodf
Calcola il resto a virgola mobile.  
  
## <a name="syntax"></a>Sintassi  
  
```  
double fmod(   
   double x,  
   double y   
);  
float fmod(  
   float x,  
   float y   
);  // C++ only  
long double fmod(  
   long double x,  
   long double y  
);  // C++ only  
float fmodf(   
   float x,  
   float y   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `x`, `y`  
 Valori a virgola mobile.  
  
## <a name="return-value"></a>Valore restituito  
 `fmod` restituisce il resto a virgola mobile di `x` / `y`. Se il valore di `y` è 0,0, `fmod` restituisce un valore NaN silenzioso (QNaN). Per informazioni sulla rappresentazione di un valore NaN silenzioso dalla famiglia `printf`, vedere [printf](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md).  
  
## <a name="remarks"></a>Note  
 La funziona `fmod` calcola il resto a virgola mobile `f` di `x` / `y` come `x` = `i` `*` `y` + `f`, dove `i` è un intero, `f` ha lo stesso segno di `x` e il valore assoluto di `f` è minore del valore assoluto di `y`.  
  
 C++ consente l'overload, quindi è possibile chiamare overload di `fmod`. In un programma C `fmod` accetta sempre due valori double e restituisce un valore double.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`fmod`, `fmodf`|\<math.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_fmod.c  
// This program displays a floating-point remainder.  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double w = -10.0, x = 3.0, z;  
  
   z = fmod( w, x );  
   printf( "The remainder of %.2f / %.2f is %f\n", w, x, z );  
}  
```  
  
```Output  
The remainder of -10.00 / 3.00 is -1.000000  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [ceil, ceilf, ceill](../../c-runtime-library/reference/ceil-ceilf-ceill.md)   
 [fabs, fabsf, fabsl](../../c-runtime-library/reference/fabs-fabsf-fabsl.md)   
 [floor, floorf, floorl](../../c-runtime-library/reference/floor-floorf-floorl.md)   
 [_CIfmod](../../c-runtime-library/cifmod.md)