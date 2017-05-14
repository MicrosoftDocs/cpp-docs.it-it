---
title: log1p, log1pf, log1pl2 | Microsoft Docs
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
- log1p
- log1pf
- log1pl
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
- log1p
- log1pf
- log1pl
- math/log1p
- math/log1pf
- math/log1pl
helpviewer_keywords:
- log1p function
- log1pf function
- log1pl function
ms.assetid: a40d965d-b4f6-42f4-ba27-2395546f7c12
caps.latest.revision: 7
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
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: 99525c8b711d0774fa2b3132505a2cdbb21d5569
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="log1p-log1pf-log1pl"></a>log1p, log1pf, log1pl
Calcola il logaritmo naturale di 1 più il valore specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
double log1p(  
   double x  
);  
  
float log1p(  
   float x  
); //C++ only  
  
long double log1p(  
   long double x  
); //C++ only  
  
float log1pf(  
   float x  
);  
  
long double log1pl(  
   long double x  
);  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `x`  
 Argomento a virgola mobile.  
  
## <a name="return-value"></a>Valore restituito  
 In caso di esito positivo restituisce il logaritmo naturale (base e) di (`x`+1).  
  
 In caso contrario, può restituire uno dei valori seguenti:  
  
|Input|Risultato|Eccezione SEH|errno|  
|-----------|------------|-------------------|-----------|  
|+inf|+inf|||  
|Valori denormalizzati|Come input|UNDERFLOW||  
|±0|Come input|||  
|-1|-inf|DIVBYZERO|ERANGE|  
|< -1|nan|INVALID|EDOM|  
|-inf|nan|INVALID|EDOM|  
|±SNaN|Come input|INVALID||  
|±QNaN, indefinito|Come input|||  
  
 Il valore di `errno` è impostato su ERANGE se `x` = -1. Il `errno` è impostato su EDOM se `x` < -1.  
  
## <a name="remarks"></a>Note  
 Le funzioni `log1p` possono essere più accurate rispetto all'uso di log (`x`+1) quando x è prossimo allo 0.  
  
 Dato che C++ consente l'overload, è possibile chiamare overload di `log1p` che accettano e restituiscono i tipi float e long double. In un programma C `log1p` accetta e restituisce sempre un valore double.  
  
 Se `x` è un numero naturale, questa funzione restituisce il logaritmo del fattoriale di (`x`-1).  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione C|Intestazione C++|  
|--------------|--------------|------------------|  
|`log1p`,                `log1pf`,  `log1pl`|\<math.h>|\<cmath>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità).  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [log2, log2f, log2l](../../c-runtime-library/reference/log2-log2f-log2l.md)   
 [log, logf, log10, log10f](../../c-runtime-library/reference/log-logf-log10-log10f.md)
