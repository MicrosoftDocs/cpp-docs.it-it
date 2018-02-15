---
title: fmin, fminf, fminl | Microsoft Docs
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
- fmin
- fminf
- fminl
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
- fmin
- fminf
- fminl
- math/fmin
- math/fminf
- math/fminl
helpviewer_keywords:
- fmin function
- fminf function
- fminl function
ms.assetid: 1916dfb5-99c1-4b0d-aefb-513525c3f2ac
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d90de1e734b2d2da4770c7a5ad85a5ee60a15408
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="fmin-fminf-fminl"></a>fmin, fminf, fminl
Determina il valore più piccolo tra due valori specificati.  
  
## <a name="syntax"></a>Sintassi  
  
```  
double fmin(  
   double x,   
   double y  
);  
  
float fmin(  
   float x,   
   float y  
); //C++ only  
  
long double fmin(  
   long double x,   
   long double y  
); //C++ only  
  
float fminf(  
   float x,   
   float y  
);  
  
long double fminl(  
   long double x,   
   long double y  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `x`  
 Primo valore da confrontare.  
  
 `y`  
 Secondo valore da confrontare.  
  
## <a name="return-value"></a>Valore restituito  
 In caso di esito positivo restituisce il valore più piccolo tra `x` o `y`.  
  
|Input|Risultato|  
|-----------|------------|  
|`x` è NaN|`y`|  
|`y` è NaN|`x`|  
|`x` e `y` sono NaN|NaN|  
  
 La funzione non comporta la chiamata di [matherr](../../c-runtime-library/reference/matherr.md), non causa alcuna eccezione di virgola mobile o non modifica il valore di `errno`.  
  
## <a name="remarks"></a>Note  
 Dato che C++ consente l'overload, è possibile chiamare gli overload di `fmin` che accettano e restituiscono i tipi float e long double. In un programma C `fmin` accetta e restituisce sempre un valore double.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`fmin`, `fminf`, `fminl`|C: \<math.h><br />C++: \<math.h> o \<cmath>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)  
 [fmax, fmaxf, fmaxl](fmax-fmaxf-fmaxl.md)  