---
title: abs, labs, llabs, _abs64 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- abs
- _abs64
- labs
- llabs
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
- api-ms-win-crt-utility-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- stdlib/_abs64
- math/abs
- _abs64
- abs
- labs
- math/labs
- llabs
- math/llabs
- cmath/abs
dev_langs:
- C++
helpviewer_keywords:
- absolute values
- abs function
- abs64 function
- _abs64 function
- calculating absolute values
ms.assetid: 60f789d1-4a1e-49f5-9e4e-0bdb277ea26a
caps.latest.revision: 29
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
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
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 804ed3ac260097c4eb088058580bf801b3bee9f1
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="abs-labs-llabs-abs64"></a>abs, labs, llabs, _abs64
Calcola il valore assoluto dell'argomento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int abs(   
   int n   
);  
long abs(   
   long n   
);   // C++ only  
long long abs(   
   long long n   
);   // C++ only  
double abs(   
   double n   
);   // C++ only  
long double abs(  
   long double n  
);   // C++ only  
float abs(  
   float n   
);   // C++ only  
long labs(  
   long n   
);  
long long llabs(  
   long long n   
);  
__int64 _abs64(   
   __int64 n   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `n`  
 Valore numerico.  
  
## <a name="return-value"></a>Valore restituito  
 Le funzioni `abs`, `labs`, `llabs` e `_abs64` restituiscono il valore assoluto del parametro `n`. Non vi è restituzione di errori.  
  
## <a name="remarks"></a>Note  
 Poiché C++ consente l'overload, è possibile chiamare gli overload di `abs` che accettano e restituiscono valori `long`, `long long`, `float`, `double` e `long double`. Questi overload sono definiti nell'intestazione \<cmath>. In un programma C, `abs` accetta e restituisce sempre un valore int.  
  
 **Sezione specifica Microsoft**  
  
 Poiché l'intervallo di interi negativi che possono essere rappresentati usando qualsiasi tipo integrale è maggiore dell'intervallo di interi positivi che possono essere rappresentati usando lo stesso tipo, è possibile fornire a queste funzioni un argomento che non può essere convertito. Se il valore assoluto dell'argomento non può essere rappresentato dal tipo restituito, le funzioni `abs` restituiscono il valore dell'argomento non modificato. In particolare, `abs(INT_MIN)` restituisce `INT_MIN`, `labs(LONG_MIN)` restituisce `LONG_MIN`, `llabs(LLONG_MIN)` restituisce `LLONG_MIN` e `_abs64(_I64_MIN)` restituisce `_I64_MIN`. Ciò significa che le funzioni `abs` non possono essere usate per garantire un valore positivo.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione C obbligatoria|Intestazione C++ obbligatoria|  
|-------------|-----------------------|---------------------------|  
|`abs`, `labs`, `llabs`|\<math.h> o \<stdlib.h>|\<cmath>, \<cstdlib>, \<stdlib.h> o \<math.h>|  
|`_abs64`|\<stdlib.h>|\<cstdlib> o \<stdlib.h>|  
  
 Per usare le versioni di overload di `abs` in C++, è necessario includere l'intestazione \<cmath>.  
  
## <a name="example"></a>Esempio  
 Questo programma calcola e visualizza i valori assoluti di diversi numeri.  
  
```C  
// crt_abs.c  
// Build: cl /W3 /TC crt_abs.c  
// This program demonstrates the use of the abs function  
// by computing and displaying the absolute values of  
// several numbers.  
  
#include <stdio.h>  
#include <math.h>  
#include <stdlib.h>  
#include <limits.h>  
  
int main( void )  
{  
    int ix = -4;  
    long lx = -41567L;  
    long long llx = -9876543210LL;  
    __int64 wx = -1;  
  
    // absolute 32 bit integer value  
    printf_s("The absolute value of %d is %d\n", ix, abs(ix));  
  
    // absolute long integer value  
    printf_s("The absolute value of %ld is %ld\n", lx, labs(lx));  
  
    // absolute long long integer value  
    printf_s("The absolute value of %lld is %lld\n", llx, llabs(llx));  
  
    // absolute 64 bit integer value  
    printf_s("The absolute value of 0x%.16I64x is 0x%.16I64x\n", wx,   
        _abs64(wx));  
  
    // Integer error cases:  
    printf_s("Microsoft implementation-specific results:\n");  
    printf_s(" abs(INT_MIN) returns %d\n", abs(INT_MIN));  
    printf_s(" labs(LONG_MIN) returns %ld\n", labs(LONG_MIN));  
    printf_s(" llabs(LLONG_MIN) returns %lld\n", llabs(LLONG_MIN));  
    printf_s(" _abs64(_I64_MIN) returns 0x%.16I64x\n", _abs64(_I64_MIN));  
}  
```  
  
```Output  
The absolute value of -4 is 4  
The absolute value of -41567 is 41567  
The absolute value of -9876543210 is 9876543210  
The absolute value of 0xffffffffffffffff is 0x0000000000000001  
Microsoft implementation-specific results:  
 abs(INT_MIN) returns -2147483648  
 labs(LONG_MIN) returns -2147483648  
 llabs(LLONG_MIN) returns -9223372036854775808  
 _abs64(_I64_MIN) returns 0x8000000000000000  
  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Data Conversion](../../c-runtime-library/data-conversion.md)  (Conversione dei dati)  
 [Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [_cabs](../../c-runtime-library/reference/cabs.md)   
 [fabs, fabsf, fabsl](../../c-runtime-library/reference/fabs-fabsf-fabsl.md)   
 [imaxabs](../../c-runtime-library/reference/imaxabs.md)
