---
title: lrint, lrintf, lrintl, llrint, llrintf, llrintl | Microsoft Docs
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
- lrint
- lrintl
- lrintf
- llrint
- llrintf
- llrintl
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
- lrint
- lrintf
- lrintl
- llrint
- llrintf
- llrintl
- math/lrint
- math/lrintf
- math/lrintl
- math/llrint
- math/llrintf
- math/llrintl
dev_langs:
- C++
helpviewer_keywords:
- lrint function
- lrintf function
- lrintl function
- llrint function
- llrintf function
- llrintl function
ms.assetid: 28ccd5b3-5e6f-434f-997d-a21d51b8ce7f
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 80a331618df913040ea145346299ebd30509ce8e
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="lrint-lrintf-lrintl-llrint-llrintf-llrintl"></a>lrint, lrintf, lrintl, llrint, llrintf, llrintl
Arrotonda il valore a virgola mobile specificato al valore integrale più prossimo, usando la modalità di arrotondamento e la direzione correnti.  
  
## <a name="syntax"></a>Sintassi  
  
```  
long int lrint(  
   double x  
);  
  
long int lrint(  
   float x  
); //C++ only  
  
long int lrint(  
   long double x  
); //C++ only  
  
long int lrintf(  
   float x  
);  
  
long int lrintl(  
   long double x  
);  
  
long long int llrint(  
   double x  
);  
  
long long int llrint(  
   float x  
); //C++ only  
  
long long int llrint(  
   long double x  
); //C++ only  
  
long long int llrintf(  
   float x  
);  
  
long long int llrintl(  
   long double x  
);  
  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `x`  
 Valore da arrotondare.  
  
## <a name="return-value"></a>Valore restituito  
 In caso di esito positivo restituisce il valore integrale arrotondato di `x`.  
  
|Problema|Valore restituito|  
|-----------|------------|  
|`x` non è compreso nell'intervallo del tipo restituito<br /><br /> `x` = ±∞<br /><br /> `x` = NaN|Genera FE_INVALID e restituisce zero (0).|  
  
## <a name="remarks"></a>Note  
 Dato che C++ consente l'overload, è possibile chiamare overload di `lrint` e `llrint` che accettano i tipi float e long double. In un programma C, `lrint` e `llrint` accettano sempre un valore double.  
  
 Se `x` non rappresenta l'equivalente a virgola mobile di un valore integrale, queste funzioni generano FE_INEXACT.  
  
 **Informazioni specifiche Microsoft**: quando il risultato non è compreso nell'intervallo del tipo restituito o quando il parametro è NaN o infinito, il valore restituito è definito dall'implementazione. Il compilatore Microsoft restituisce un valore zero (0).  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione C|Intestazione C++|  
|--------------|--------------|------------------|  
|`lrint`,                `lrintf`, `lrintl`, `llrint`, `llrintf`, `llrintl`|\<math.h>|\<cmath>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)