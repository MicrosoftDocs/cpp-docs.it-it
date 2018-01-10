---
title: lgamma, lgammaf, lgammal | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- lgamma
- lgammaf
- lgammal
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
- lgamma
- lgammaf
- lgammal
- math/lgamma
- math/lgammaf
- math/lgammal
dev_langs: C++
helpviewer_keywords:
- lgamma function
- lgammal function
- lgammaf function
ms.assetid: 6e326c58-7077-481a-a329-c82ae56ae9e6
caps.latest.revision: "13"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 4bd91c4dd26582e98f4a6ee9f92ad0293c460433
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="lgamma-lgammaf-lgammal"></a>lgamma, lgammaf, lgammal
Determina il logaritmo naturale del valore assoluto della funzione gamma del valore specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
double lgamma(  
   double x  
);  
  
float lgamma(  
   float x  
); //C++ only  
  
long double lgamma(  
   long double x  
); //C++ only  
  
float lgammaf(  
   float x  
);  
  
long double lgammal(  
   long double x  
);  
  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `x`  
 Valore da calcolare.  
  
## <a name="return-value"></a>Valore restituito  
 In caso di esito positivo, restituisce il logaritmo naturale del valore assoluto della funzione gamma di `x.`.  
  
|Problema|INVIO|  
|-----------|------------|  
|`x` = NaN|NaN|  
|`x` = ±0|+INFINITO|  
|`x`= intero negativo|+INFINITO|  
|±INFINITY|+INFINITO|  
|Errore polo|+HUGE_VAL, +HUGE_VALF o +HUGE_VALL|  
|Errore di intervallo di overflow|±HUGE_VAL, ±HUGE_VALF o ±HUGE_VALL|  
  
 Gli errori vengono segnalati come specificato in [_matherr](../../c-runtime-library/reference/matherr.md).  
  
## <a name="remarks"></a>Note  
 Dato che C++ consente l'overload, è possibile chiamare gli overload di `lgamma` che accettano e restituiscono i tipi float e long double. In un programma C `lgamma` accetta e restituisce sempre un valore double.  
  
 Se x è un numero razionale, questa funzione restituisce il logaritmo del fattoriale di (`x`-1).  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione C|Intestazione C++|  
|--------------|--------------|------------------|  
|`lgamma`,                `lgammaf`,  `lgammal`|\<math.h>|\<cmath>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)  (Riferimento alfabetico alle funzioni)  
 [tgamma, tgammaf, tgammal](../../c-runtime-library/reference/tgamma-tgammaf-tgammal.md)