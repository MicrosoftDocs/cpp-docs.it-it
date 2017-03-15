---
title: imaxdiv | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- imaxdiv
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
- imaxdiv
dev_langs:
- C++
helpviewer_keywords:
- imaxdiv function
ms.assetid: 7d90126f-fdc2-4986-9cdf-94e4c9123d26
caps.latest.revision: 7
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
ms.sourcegitcommit: 84964b0a49b236bae056125de8155b18880eb378
ms.openlocfilehash: 1d86597d8ff759a1a388fea785ff864d47c823ae
ms.lasthandoff: 02/24/2017

---
# <a name="imaxdiv"></a>imaxdiv
Calcola il quoziente e il resto di due interi di qualsiasi dimensione come singola operazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
imaxdiv_t imaxdiv(   
   intmax_t numer,  
   intmax_t denom   
);   
```  
  
#### <a name="parameters"></a>Parametri  
 `numer`  
 Numeratore.  
  
 `denom`  
 Denominatore.  
  
## <a name="return-value"></a>Valore restituito  
 La funzione `imaxdiv` chiamata con argomenti di tipo [intmax_t](../../c-runtime-library/standard-types.md) restituisce una struttura di tipo [imaxdiv_t](../../c-runtime-library/standard-types.md) che include il quoziente e il resto.  
  
## <a name="remarks"></a>Note  
 La funzione `imaxdiv` divide `numer` per `denom` e pertanto calcola il quoziente e il resto. La struttura `imaxdiv_t` contiene il quoziente, `intmax_t``quot`, e il resto, `intmax_t``rem`. Il segno del quoziente è uguale a quello del quoziente matematico. Il valore assoluto del quoziente è l'intero più grande che è minore del valore assoluto del quoziente matematico. Se il denominatore è 0, il programma termina con un messaggio di errore.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`imaxdiv`|\<inttypes.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_imaxdiv.c  
// Build using: cl /W3 /Tc crt_imaxdiv.c  
// This example takes two integers as command-line  
// arguments and calls imaxdiv to divide the first   
// argument by the second, then displays the results.  
  
#include <stdio.h>  
#include <stdlib.h>  
#include <inttypes.h>  
  
int main(int argc, char *argv[])  
{  
   intmax_t x,y;  
   imaxdiv_t div_result;  
  
   x = atoll(argv[1]);  
   y = atoll(argv[2]);  
  
   printf("The call to imaxdiv(%lld, %lld)\n", x, y);  
   div_result = imaxdiv(x, y);  
   printf("results in a quotient of %lld, and a remainder of %lld\n\n",  
          div_result.quot, div_result.rem);  
}  
```  
  
 Quando viene compilato e quindi chiamato con i parametri della riga di comando `9460730470000000 8766`, il codice genera questo output:  
  
```Output  
The call to imaxdiv(9460730470000000, 8766)  
results in a quotient of 1079252848505, and a remainder of 5170  
```  
  
## <a name="net-framework-equivalent"></a>Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f) (Esempi di platform invoke).  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [div](../../c-runtime-library/reference/div.md)   
 [ldiv, lldiv](../../c-runtime-library/reference/ldiv-lldiv.md)
