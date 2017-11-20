---
title: fabs, fabsf, fabsl | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- fabsf
- fabs
- fabsl
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
- fabs
- fabsf
- fabsl
- "math\fabs"
- "math\fabsf"
- "math\fabsl"
dev_langs: C++
helpviewer_keywords:
- absolute values
- fabsf function
- calculating absolute values
- fabs function
- fabsl function
ms.assetid: 23bca210-f408-4f5e-b46b-0ccaaec31e36
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: b448bdc601bbe050d93cc26976fa0925ce9fff14
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="fabs-fabsf-fabsl"></a>fabs, fabsf, fabsl
Calcola il valore assoluto dell'argomento a virgola mobile.  
  
## <a name="syntax"></a>Sintassi  
  
```  
double fabs(   
   double x   
);  
float fabs(  
   float x   
); // C++ only  
long double fabs(  
   long double x  
); // C++ only  
float fabsf(   
   float x   
);  
long double fabsl(  
   long double x  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `x`  
 Valore a virgola mobile.  
  
## <a name="return-value"></a>Valore restituito  
 Le funzioni `fabs` restituiscono il valore assoluto dell'argomento `x`. Non vi è restituzione di errori.  
  
|Input|Eccezione SEH|Eccezione Matherr|  
|-----------|-------------------|-----------------------|  
|± QNAN,IND|none|_DOMAIN|  
  
## <a name="remarks"></a>Note  
 C++ consente l'overload, pertanto è possibile chiamare gli overload di `fabs` se si include l'intestazione \<cmath>. In un programma C, `fabs` accetta e restituisce sempre un double.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione C obbligatoria|Intestazione C++ obbligatoria|  
|--------------|-----------------------|---------------------------|  
|`fabs`, `fabsf`, `fabsl`|\<math.h>|\<cmath> o \<math.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità) nell'introduzione.  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio per [abs](../../c-runtime-library/reference/abs-labs-llabs-abs64.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [abs, labs, llabs, _abs64](../../c-runtime-library/reference/abs-labs-llabs-abs64.md)   
 [_cabs](../../c-runtime-library/reference/cabs.md)   