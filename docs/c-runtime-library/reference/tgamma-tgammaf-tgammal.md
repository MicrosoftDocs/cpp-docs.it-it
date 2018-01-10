---
title: tgamma, tgammaf, tgammal | Microsoft Docs
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
- tgamma
- tgammaf
- tgammal
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
- tgamma
- tgammaf
- tgammal
- math/tgamma
- math/tgammaf
- math/tgammal
dev_langs: C++
helpviewer_keywords:
- tgamma function
- tgammaf function
- tgammal function
ms.assetid: f1bd2681-8af2-48a9-919d-5358fd068acd
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: fefaaaf6dd6e660c4cda53d28194d6052d1d8bf4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tgamma-tgammaf-tgammal"></a>tgamma, tgammaf, tgammal
Determina la funzione gamma del valore specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
double tgamma(  
   double x  
);  
  
float tgamma(  
   float x  
); //C++ only  
  
long double tgamma(  
   long double x  
); //C++ only  
  
float tgammaf(  
   float x  
);  
  
long double tgammal(  
   long double x  
);  
  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `x`  
 Valore di cui trovare la funzione gamma.  
  
## <a name="return-value"></a>Valore restituito  
 In caso di esito positivo restituisce la funzione gamma di `x`.  
  
 Può verificarsi un errore di intervallo se la grandezza di `x` è troppo grande o troppo piccola per il tipo di dati. Può verificarsi un errore di dominio o un errore di intervallo se `x` <=0.  
  
|Problema|INVIO|  
|-----------|------------|  
|x = ± 0|±INFINITY|  
|x = intero negativo|NaN|  
|x =  -INFINITY|NaN|  
|x = +INFINITY|+INFINITO|  
|x = NaN|NaN|  
|Eerrore di dominio|NaN|  
|Errore polo|±HUGE_VAL, ±HUGE_VALF o ±HUGE_VALL|  
|Errore di intervallo di overflow|±HUGE_VAL, ±HUGE_VALF o ±HUGE_VALL|  
|Errore di intervallo di underflow|Valore corretto dopo l'arrotondamento.|  
  
 Gli errori vengono segnalati come specificato in [_matherr](../../c-runtime-library/reference/matherr.md).  
  
## <a name="remarks"></a>Note  
 Dato che C++ consente l'overload, è possibile chiamare overload di tgamma che accettano e restituiscono i tipi float e long double. In un programma C tgamma accetta e restituisce sempre un valore double.  
  
 Se x è un numero naturale, questa funzione restituisce il fattoriale di (x-1).  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione C|Intestazione C++|  
|--------------|--------------|------------------|  
|`tgamma`,                `tgammaf`,  `tgammal`|\<math.h>|\<cmath>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)  (Riferimento alfabetico alle funzioni)  
 [lgamma, lgammaf, lgammal](../../c-runtime-library/reference/lgamma-lgammaf-lgammal.md)