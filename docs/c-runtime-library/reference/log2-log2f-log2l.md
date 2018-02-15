---
title: log2, log2f, log2l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- log2
- log2l
- log2f
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
dev_langs:
- C++
ms.assetid: 94d11b38-70b7-4d3a-94ac-523153c92b2e
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: cd35b9298cec4e56da1fb9d255cc012d0f525623
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="log2-log2f-log2l"></a>log2, log2f, log2l
Determina il logaritmo in base 2 binario del valore specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
double log2(  
   double x  
);  
  
float log2(  
   float x  
); //C++ only  
  
long double log2(  
   long double x  
); //C++ only  
  
float log2f(  
   float x  
);  
  
long double log2l(  
   long double x  
);  
  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `x`  
 Valore di cui determinare il logaritmo in base 2.  
  
## <a name="return-value"></a>Valore restituito  
 In caso di esito positivo restituisce log2 `x`.  
  
 In caso contrario può restituire uno dei valori seguenti:  
  
|Problema|INVIO|  
|-----------|------------|  
|`x` < 0|NaN|  
|`x` = ±0|-INFINITY|  
|`x` = 1|+0|  
|+INFINITY|+INFINITO|  
|NaN|NaN|  
|Eerrore di dominio|NaN|  
|Errore polo|-HUGE_VAL, -HUGE_VALF o -HUGE_VALL|  
  
 Gli errori vengono segnalati come specificato in [_matherr](../../c-runtime-library/reference/matherr.md).  
  
## <a name="remarks"></a>Note  
 Se x è un intero, questa funzione restituisce essenzialmente l'indice in base zero del bit 1 più significativo di `x`.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione C|Intestazione C++|  
|--------------|--------------|------------------|  
|`log2`,                `log2f`,  `log2l`|\<math.h>|\<cmath>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)  (Riferimento alfabetico alle funzioni)  
 [exp2, exp2f, exp2l](../../c-runtime-library/reference/exp2-exp2f-exp2l.md)   
 [log, logf, log10, log10f](../../c-runtime-library/reference/log-logf-log10-log10f.md)