---
title: nextafter, nextafterf, nextafterl, _nextafter, _nextafterf, nexttoward, nexttowardf, nexttowardl | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- nextafterf
- _nextafterf
- nextafter
- nextafterl
- _nextafter
- nexttoward
- nexttowardf
- nexttowardl
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
- nextafter
- _nextafter
- nextafterf
- nextafterl
- _nextafterf
- math/nextafter
- math/nextafterf
- math/nextafterl
- nexttoward
- nexttowardf
- nexttowardl
- math/nexttoward
- math/nexttowardf
- math/nexttowardl
dev_langs: C++
helpviewer_keywords:
- _nextafter function
- nextafter function
- _nextafterf function
- nextafterf function
- nextafterl function
- nexttoward function
- nexttowardf function
- nexttowardl function
ms.assetid: 9785bfb9-de53-4bd0-9637-f05fa0c1f6ab
caps.latest.revision: "13"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 798e39624c617d8178a7598e74451ca2851cfe12
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="nextafter-nextafterf-nextafterl-nextafter-nextafterf-nexttoward-nexttowardf-nexttowardl"></a>nextafter, nextafterf, nextafterl, _nextafter, _nextafterf, nexttoward, nexttowardf, nexttowardl
Restituisce il valore a virgola mobile rappresentabile successivo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
double nextafter(  
   double x,  
   double y   
);  
  
float nextafter(  
   float x,  
   float y   
); /* C++ only, requires <cmath> */  
  
long double nextafter(  
   long double x,  
   long double y   
); /* C++ only, requires <cmath> */  
  
float nextafterf(  
   float x,  
   float y   
);   
  
long double nextafterl(  
   long double x,  
   long double y   
);  
  
double _nextafter(  
   double x,  
   double y   
);  
  
float _nextafterf(  
   float x,  
   float y   
); /* x64 only */  
  
double nexttoward(  
   double x,  
   long double y   
);  
  
float nexttoward(  
   float x,  
   long double y   
); /* C++ only, requires <cmath> */  
  
long double nexttoward(  
   long double x,  
   long double y   
); /* C++ only, requires <cmath> */  
  
float nexttowardf(  
   float x,  
   long double y   
);   
  
long double nexttowardl(  
   long double x,  
   long double y   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `x`  
 Valore a virgola mobile da cui partire.  
  
 `y`  
 Valore a virgola mobile da cui proseguire.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce il valore a virgola mobile rappresentabile del tipo restituito successivo, dopo `x` nella direzione di `y`. Se `x`=`y`, la funzione restituisce `y`, convertito nel tipo restituito, senza attivazione di alcuna eccezione. Se `x` è diverso da `y`, il risultato è denormalizzato o zero, vengono impostati gli stati FE_UNDERFLOW e FE_INEXACT per eccezioni in operazioni a virgola mobile e viene restituito il risultato corretto. Se `x` o `y` è NaN, il valore restituito è uno dei valori NaN di input. Se `x` è finito e il risultato è infinito o non rappresentabile nel tipo, viene restituito un valore infinito o NaN con il segno corretto, vengono impostati gli stati FE_OVERFLOW e FE_INEXACT per eccezioni in operazioni a virgola mobile e `errno` viene impostato su ERANGE.  
  
## <a name="remarks"></a>Note  
 Le famiglie di funzioni `nextafter` e `nexttoward` sono equivalenti, tranne per il tipo del parametro `y`. Se `x` e `y` sono uguali, il valore restituito è `y` convertito nel tipo restituito.  
  
 Dato che C++ consente l'overload, se si include \<cmath> è possibile chiamare overload di `nextafter` e `nexttoward` che restituiscano i tipi `float` e `long double`. In un programma C, `nextafter` e `nexttoward` restituiscono sempre `double`.  
  
 Le funzioni `_nextafter` e `_nextafterf` sono specifiche di Microsoft. La funzione `_nextafterf` è disponibile solo per la compilazione per la piattaforma x64.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|  
|-------------|---------------------------|-------------------------------|  
|`nextafter`, `nextafterf`, `nextafterl`, `_nextafterf`, `nexttoward`, `nexttowardf`, `nexttowardl`|\<math.h>|\<math.h> o \<cmath>|  
|`_nextafter`|\<float.h>|\<float.h> o \<cfloat>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)  (Supporto delle funzioni a virgola mobile)  
 [isnan, _isnan, _isnanf](../../c-runtime-library/reference/isnan-isnan-isnanf.md)