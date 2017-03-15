---
title: logb, logbf, logbl, _logb, _logbf | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- logb
- _logb
- _logbl
- logbf
- logbl
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
- logb
- logbl
- _logb
- _logbf
- logbf
dev_langs:
- C++
helpviewer_keywords:
- _logbf function
- mantissas, floating-point variables
- logbf function
- _logb function
- exponent, floating-point numbers
- logbl function
- logb function
- floating-point functions
- floating-point functions, mantissa and exponent
- exponents and mantissas
ms.assetid: 780c4daa-6fe6-4fbc-9412-4c1ba1a1766f
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
ms.openlocfilehash: 4751d6e182004760ba9829e00329f76aa97accd0
ms.lasthandoff: 02/24/2017

---
# <a name="logb-logbf-logbl-logb-logbf"></a>logb, logbf, logbl, _logb, _logbf
Estrae il valore dell'esponente di un argomento a virgola mobile.  
  
## <a name="syntax"></a>Sintassi  
  
```  
double logb(  
   double x   
);  
float logb(  
   float x   
); // C++ only  
long double logb(  
   long double x   
); // C++ only   
float logbf(  
   float x   
);  
long double logbl(  
   long double x   
);  
double _logb(  
   double x   
);  
float _logbf(  
   float x   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 x  
 Un valore a virgola mobile.  
  
## <a name="return-value"></a>Valore restituito  
 `logb` restituisce il valore dell'esponente non distorto di `x` come intero con segno rappresentato come un valore a virgola mobile.  
  
## <a name="remarks"></a>Note  
 Le funzioni `logb` estraggono il valore esponenziale dell'argomento a virgola mobile `x`, come se `x` fosse rappresentato con un intervallo infinito. Se l'argomento `x` è denormalizzato, viene considerato come se fosse normalizzato.  
  
 Dato che C++ consente l'overload, è possibile chiamare degli overload di `logb` che accettino e restituiscano valori `float` o `long double`. In un programma C `logb` accetta e restituisce sempre un valore `double`.  
  
|Input|Eccezione SEH|Eccezione Matherr|  
|-----------|-------------------|-----------------------|  
|± QNAN,IND|None|_DOMAIN|  
|± 0|ZERODIVIDE|_SING|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_logb`|\<float.h>|  
|`logb`, `logbf`, `logbl`, `_logbf`|\<math.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="net-framework-equivalent"></a>Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f) (Esempi di platform invoke).  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [frexp](../../c-runtime-library/reference/frexp.md)
