---
title: nearbyint, nearbyintf, nearbyintl1 | Microsoft Docs
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
- nearbyint
- nearbyintf
- nerabyintl
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
- nearbyint
- nearbyintf
- nearbyintl
- math/nearbyint
- math/narbyintf
- math/narbyintl
dev_langs: C++
helpviewer_keywords:
- nearbyint function
- nearbyintf function
- nearbyintl function
ms.assetid: dd39cb68-96b0-434b-820f-6ff2ea65584f
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: d95f92d15dcf4b8baf84b762b994bdb52930346d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="nearbyint-nearbyintf-nearbyintl"></a>nearbyint, nearbyintf, nearbyintl
Arrotonda il valore a virgola mobile specificato a un intero e restituisce tale valore in un formato a virgola mobile.  
  
## <a name="syntax"></a>Sintassi  
  
```  
double nearbyint(  
   double x  
);  
  
float nearbyint(  
   float x  
); //C++ only  
  
long double nearbyint(  
   long double x  
); //C++ only  
  
float nearbyintf(  
   float x  
);  
  
long double nearbyintl(  
   long double x  
);  
  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `x`  
 Il valore da arrotondare.  
  
## <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, restituisce `x`, arrotondato all'intero più prossimo, usando il formato di arrotondamento corrente come definito da fegetround. In caso contrario, la funzione può restituire uno dei valori seguenti:  
  
|Problema|INVIO|  
|-----------|------------|  
|`x`= ±INFINITY|±INFINITY, non modificato|  
|`x` = ±0|± 0, non modificato|  
|`x` = NaN|NaN|  
  
 Gli errori non vengono segnalati tramite [_matherr](../../c-runtime-library/reference/matherr.md). In particolare, questa funzione non segnala eventuali eccezioni FE_INEXACT.  
  
## <a name="remarks"></a>Note  
 La differenza principale tra questa funzione e `rint` è che questa funzione non genera l'eccezione per operazioni a virgola mobile con risultato inesatto.  
  
 Dato che i valori a virgola massimi sono interi esatti, questa funzione da sola non genererà mai un overflow. È invece possibile un overflow del valore restituito nell'output, a seconda della versione della funzione usata.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione C|Intestazione C++|  
|--------------|--------------|------------------|  
|`nearbyint`,                `nearbyintf`,  `nearbyintl`|\<math.h>|\<cmath>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)