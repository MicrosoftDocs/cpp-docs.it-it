---
title: remquo, remquof, remquol | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- remquof
- remquo
- remquol
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
- remquof
- remquol
- remquo
dev_langs:
- C++
helpviewer_keywords:
- remquol function
- remquof function
- remquo function
ms.assetid: a1d3cb8b-8027-4cd3-8deb-04eb17f299fc
caps.latest.revision: 8
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
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: fb7cbf4fe2450d574a4418e62c43dca699cde9b8
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="remquo-remquof-remquol"></a>remquo, remquof, remquol
Calcola il resto di due valori interi e archivia un valore intero con il segno e la grandezza approssimativa del quoziente in una posizione specificata in un parametro.  
  
## <a name="syntax"></a>Sintassi  
  
```  
double remquo(   
   double numer,  
   double denom,  
   int* quo  
);  
float remquo(   
   float numer,  
   float denom,  
   int* quo  
); /* C++ only */  
long double remquo(   
   long double numer,  
   long double denom,  
   int* quo  
); /* C++ only */  
float remquof(   
   float numer,  
   float denom,  
   int* quo  
);  
long double remquol(   
   long double numer,  
   long double denom,  
   int* quo  
);  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `numer`  
 Numeratore.  
  
 `denom`  
 Denominatore.  
  
 `quo`  
 Puntatore a un intero per archiviare un valore con il segno e la grandezza approssimativa del quoziente.  
  
## <a name="return-value"></a>Valore restituito  
 `remquo` restituisce il resto a virgola mobile di `x` / `y`. Se il valore di `y` è 0,0, `remquo` restituisce un valore NaN silenzioso (QNaN). Per informazioni sulla rappresentazione di un NaN non interattivo dalla famiglia `printf`, vedere [printf, _printf_l, wprintf, _wprintf_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md).  
  
## <a name="remarks"></a>Note  
 La funziona `remquo` calcola il resto a virgola mobile `f` di `x` / `y` come `x` = `i` `*` `y` + `f`, dove `i` è un intero, `f` ha lo stesso segno di `x` e il valore assoluto di `f` è minore del valore assoluto di `y`.  
  
 C++ consente l'overload, quindi è possibile chiamare overload di `remquo` che accettino e restituiscano i valori `float` o `long double`. In un programma C `remquo` accetta sempre due valori double e restituisce un valore double.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`remquo`, `remquof`, `remquol`|\<math.h>|  
  
 Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```C  
// crt_remquo.c  
// This program displays a floating-point remainder.  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double w = -10.0, x = 3.0, z;  
   int quo = 0;  
  
   z = remquo(w, x, &quo);  
   printf("The remainder of %.2f / %.2f is %f\n", w, x, z);  
   printf("Approximate signed quotient is %d\n", quo);  
}  
```  
  
```Output  
The remainder of -10.00 / 3.00 is -1.000000  
Approximate signed quotient is -3  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)  (Supporto delle funzioni a virgola mobile)  
 [ldiv, lldiv](../../c-runtime-library/reference/ldiv-lldiv.md)   
 [imaxdiv](../../c-runtime-library/reference/imaxdiv.md)   
 [fmod, fmodf](../../c-runtime-library/reference/fmod-fmodf.md)   
 [remainder, remainderf, remainderl](../../c-runtime-library/reference/remainder-remainderf-remainderl.md)
