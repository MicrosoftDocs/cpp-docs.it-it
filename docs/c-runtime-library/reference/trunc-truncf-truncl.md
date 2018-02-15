---
title: trunc, truncf, truncl | Microsoft Docs
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
- trunc
- truncf
- truncl
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
- trunc
- truncf
- truncl
- math/trunc
- math/truncf
- math/truncl
dev_langs:
- C++
helpviewer_keywords:
- trunc function
- truncf function
- truncl function
ms.assetid: de2038ac-ac0b-483e-870c-e8992dcd4fd0
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b97cc80701ef7f099fd7df177b40a935cce30a52
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="trunc-truncf-truncl"></a>trunc, truncf, truncl
Restituisce l'intero più prossimo minore o uguale al valore a virgola mobile specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
double trunc(  
   double x  
);  
  
float trunc(  
   float x  
); //C++ only  
  
long double trunc(  
   long double x  
); //C++ only  
  
float trunc(  
   float x  
); //C++ only  
  
long double truncl(  
   long double x  
);  
  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `x`  
 Valore da troncare.  
  
## <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, restituisce un valore intero di `x`, arrotondato verso lo zero.  
  
 In caso contrario, può restituire uno dei valori seguenti:  
  
|Problema|INVIO|  
|-----------|------------|  
|`x` = ±INFINITY|x|  
|`x` =  ±0|x|  
|`x` = NaN|NaN|  
  
 Gli errori vengono segnalati come specificato in [_matherr](../../c-runtime-library/reference/matherr.md).  
  
## <a name="remarks"></a>Note  
 Dato che C++ consente l'overload, è possibile chiamare gli overload di `trunc` che accettano e restituiscono i tipi float e long double. In un programma C `trunc` accetta e restituisce sempre un valore double.  
  
 Poiché i valori a virgola mobile più grandi sono numeri interi esatti, questa funzione non genererà un overflow autonomamente. Tuttavia, è possibile causare l'overflow della funzione restituendo un valore in un tipo Integer.  
  
 È anche possibile eseguire un arrotondamento verso il basso convertendo in modo implicito un valore da virgola mobile a integrale. Ciò è possibile solo per i valori che possono essere archiviati nel tipo di destinazione.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione C|Intestazione C++|  
|--------------|--------------|------------------|  
|`trunc`,                `truncf`,  `truncl`|\<math.h>|\<cmath>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)  (Riferimento alfabetico alle funzioni)  
 [floor, floorf, floorl](../../c-runtime-library/reference/floor-floorf-floorl.md)   
 [ceil, ceilf, ceill](../../c-runtime-library/reference/ceil-ceilf-ceill.md)   
 [round, roundf, roundl](../../c-runtime-library/reference/round-roundf-roundl.md)