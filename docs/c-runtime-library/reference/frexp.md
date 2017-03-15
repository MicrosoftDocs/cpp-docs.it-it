---
title: frexp | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- frexp
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
- frexp
- _frexpl
dev_langs:
- C++
helpviewer_keywords:
- _frexpl function
- mantissas, floating-point variables
- frexpl function
- exponent, floating-point numbers
- frexp function
- floating-point functions, mantissa and exponent
ms.assetid: 9b020f2e-3967-45ec-a6a8-d467a071aa55
caps.latest.revision: 13
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
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 1f255fbc6eb63374a8651a11abaf0266ed9cfd6f
ms.lasthandoff: 02/24/2017

---
# <a name="frexp"></a>frexp
Ottiene la mantissa e l'esponente di un numero a virgola mobile.  
  
## <a name="syntax"></a>Sintassi  
  
```  
double frexp(  
   double x,  
   int *expptr   
);  
float frexp(  
   float x,  
   int * expptr  
);  // C++ only  
long double frexp(  
   long double x,  
   int * expptr  
);  // C++ only  
```  
  
#### <a name="parameters"></a>Parametri  
 `x`  
 Valore a virgola mobile.  
  
 `expptr`  
 Puntatore all'esponente intero archiviato.  
  
## <a name="return-value"></a>Valore restituito  
 `frexp` restituisce la mantissa. Se `x` è 0, la funzione restituisce 0 sia per la mantissa che per l'esponente. Se `expptr` è `NULL`, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta `errno` su`EINVAL` e restituisce 0.  
  
## <a name="remarks"></a>Note  
 La funzione `frexp` suddivide il valore a virgola mobile (`x`) in una mantissa (`m`) e un esponente (`n`), in modo che il valore assoluto di `m` sia maggiore o uguale a 0,5 e minore di 1,0 e `x` = `m`*2<sup>n</sup>. L'esponente intero `n` viene archiviato in corrispondenza della posizione a cui punta `expptr`.  
  
 C++ consente l'overload, quindi è possibile chiamare overload di `frexp`. In un programma C, `frexp` accetta sempre un double e un intero e restituisce un double.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`frexp`|\<math.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_frexp.c  
// This program calculates frexp( 16.4, &n )  
// then displays y and n.  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double x, y;  
   int n;  
  
   x = 16.4;  
   y = frexp( x, &n );  
   printf( "frexp( %f, &n ) = %f, n = %d\n", x, y, n );  
}  
```  
  
```Output  
frexp( 16.400000, &n ) = 0.512500, n = 5  
```  
  
## <a name="net-framework-equivalent"></a>Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f) (Esempi di platform invoke).  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [ldexp](../../c-runtime-library/reference/ldexp.md)   
 [modf, modff, modfl](../../c-runtime-library/reference/modf-modff-modfl.md)
