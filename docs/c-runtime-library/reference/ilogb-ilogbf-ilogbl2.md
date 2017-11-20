---
title: ilogb, ilogbf, ilogbl2 | Microsoft Docs
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
- ilogb
- ilogbf
- ilogbl
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
- ilogb
- ilogbf
- ilogbl
- math/ilogb
- math/ilogbf
- math/ilogbl
helpviewer_keywords:
- ilogb function
- ilogbf function
- ilogbl function
ms.assetid: 9ef19d57-1caa-41d5-8233-2faad3562fcb
caps.latest.revision: "4"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: f0b2e084e27b951676fddfb20b53d5f74944089e
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="ilogb-ilogbf-ilogbl"></a>ilogb, ilogbf, ilogbl
Restituisce un valore intero che rappresenta l'esponente in base 2 non distorto del valore specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int ilogb(  
   double x  
);  
  
int ilogb(  
   float x  
); //C++ only  
  
int ilogb(  
   long double x  
); //C++ only  
  
int ilogbf(  
   float x  
);  
  
int ilogbl(  
   long double x  
);  
  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `x`  
 Valore specificato.  
  
## <a name="return-value"></a>Valore restituito  
 In caso di esito positivo, restituisce l'esponente in base 2 di `x` come valore `int` con segno.  
  
 In caso contrario, restituisce uno dei valori seguenti definiti in \<math.h>:  
  
|Input|Risultato|  
|-----------|------------|  
|±0|FP_ILOGB0|  
|±inf, ±nan, indefinito|FP_ILOGBNAN|  
  
 Gli errori vengono segnalati come specificato in [matherr](../../c-runtime-library/reference/matherr.md).  
  
## <a name="remarks"></a>Note  
 Dato che C++ consente l'overload, è possibile chiamare gli overload di `ilogb` che accettano e restituiscono i tipi float e long double. In un programma C `ilogb` accetta e restituisce sempre un valore double.  
  
 Chiamare questa funzione è simile alla chiamata della funzione `logb` equivalente con successivo cast del valore restituito in `int`.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione C|Intestazione C++|  
|-------------|--------------|------------------|  
|`ilogb`,                `ilogbf`,  `ilogbl`|\<math.h>|\<cmath>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità).  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [frexp](../../c-runtime-library/reference/frexp.md)   
 [logb, logbf, logbl, _logb, _logbf](../../c-runtime-library/reference/logb-logbf-logbl-logb-logbf.md)