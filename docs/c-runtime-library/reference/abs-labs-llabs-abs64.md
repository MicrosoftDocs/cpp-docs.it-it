---
title: "Abs, laboratori, llabs, abs64 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "abs"
  - "_abs64"
  - "labs"
  - "llabs"
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
  - "api-ms-win-crt-utility-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "stdlib/_abs64"
  - "math/abs"
  - "_abs64"
  - "abs"
  - "labs"
  - "math/labs"
  - "llabs"
  - "math/llabs"
  - "cmath/abs"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "valori assoluti"
  - "abs (funzione)"
  - "abs64 (funzione)"
  - "_abs64 (funzione)"
  - "calcolo di valori assoluti"
ms.assetid: 60f789d1-4a1e-49f5-9e4e-0bdb277ea26a
caps.latest.revision: 29
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 29
---
# Abs, laboratori, llabs, abs64
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Calcola il valore assoluto dell'argomento.  
  
## Sintassi  
  
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
  
#### Parametri  
 `n`  
 Valore numerico.  
  
## Valore restituito  
 Il `abs`, `labs`, `llabs` e `_abs64` funzioni restituiscono il valore assoluto del parametro `n`. Non vi è restituzione di errori.  
  
## Note  
 Poiché C\+\+ consente l'overload, è possibile chiamare gli overload di `abs` che accettano e restituiscono `long`, `long long`, `float`, `double`, e `long double` valori. Questi overload sono definiti nell'intestazione \< cmath \>. In un programma C, `abs` sempre accetta e restituisce un tipo int.  
  
 **Sezione specifica Microsoft**  
  
 Poiché l'intervallo di numeri interi negativi che possono essere rappresentati utilizzando qualsiasi tipo integrale è maggiore dell'intervallo di numeri interi positivi che può essere rappresentato con tale tipo, è possibile fornire un argomento alle funzioni che non può essere convertito. Se il valore assoluto dell'argomento non può essere rappresentato dal tipo restituito, il `abs` funzioni restituiscono il valore dell'argomento invariato. In particolare, `abs(INT_MIN)` restituisce `INT_MIN`, `labs(LONG_MIN)` restituisce `LONG_MIN`, `llabs(LLONG_MIN)` restituisce `LLONG_MIN`, e `_abs64(_I64_MIN)` restituisce `_I64_MIN`. Ciò significa che il `abs` funzioni non possono essere utilizzate per garantire un valore positivo.  
  
 **Fine sezione specifica Microsoft**  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria C|Intestazione obbligatoria di C\+\+|  
|-------------|---------------------------------|----------------------------------------|  
|`abs`, `labs`, `llabs`|\< Math. h \> o \< STDLIB. h \>|\< cmath \>, \< cstdlib \>, \< STDLIB. h \> o \< Math. h \>|  
|`_abs64`|\<stdlib.h\>|\< cstdlib \> o \< STDLIB. h \>|  
  
 Utilizzare le versioni di overload `abs` in C\+\+, è necessario includere l'intestazione \< cmath \>.  
  
## Esempio  
 Il programma calcola e visualizza i valori assoluti di numeri diversi.  
  
```c  
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
Il valore assoluto di -4 è 4, il valore assoluto di-41567 è il valore assoluto di-9876543210 è 9876543210 è il valore assoluto di 0xffffffffffffffff 41567 risultati specifici dell'implementazione Microsoft di 0x0000000000000001: abs(INT_MIN) restituisce -2147483648 labs(LONG_MIN) restituisce -2147483648 llabs(LLONG_MIN) restituisce -9223372036854775808 _abs64(_I64_MIN) restituisce 0x8000000000000000  
  
```  
  
## Equivalente .NET Framework  
 [System::Math::Abs](https://msdn.microsoft.com/en-us/library/system.math.abs.aspx)  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [\_cabs](../../c-runtime-library/reference/cabs.md)   
 [fabs, fabsf, fabsl](../../c-runtime-library/reference/fabs-fabsf-fabsl.md)   
 [imaxabs](../../c-runtime-library/reference/imaxabs.md)