---
title: isnan, _isnan, _isnanf | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _isnan
- _isnanf
- isnan
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
- _isnan
- isnan
- math/isnan
- math/_isnan
- math/_isnanf
- _isnanf
dev_langs:
- C++
helpviewer_keywords:
- NAN (not a number)
- _isnan function
- IEEE floating-point representation
- Not a Number (NANs)
- isnan function
ms.assetid: 391fbc5b-89a4-4fba-997e-68f1131caf82
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 10d0997b1a6b304634c612f0f1615a059fd812b2
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="isnan-isnan-isnanf"></a>isnan, _isnan, _isnanf
Verifica se un valore a virgola mobile non è un numero (NaN, Not a Number).  
  
## <a name="syntax"></a>Sintassi  
  
```  
int isnan(  
   /* floating-point */ x   
); /* C-only macro */  
  
int _isnan(  
   double x   
);  
  
int _isnanf(  
   float x  
); /* x64 only */  
  
template <class T>  
bool isnan(  
   T x  
) throw(); /* C++ only */  
```  
  
#### <a name="parameters"></a>Parametri  
 *x*  
 Valore a virgola mobile da verificare.  
  
## <a name="return-value"></a>Valore restituito  
 In C, la macro `isnan` e le funzioni `_isnan` e `_isnanf` restituiscono un valore diverso da zero se l'argomento `x` è NaN. In caso contrario restituiscono 0.  
  
 In C++, le funzioni modello `isnan` restituiscono `true` se l'argomento `x` è NaN. In caso contrario restituiscono `false`.  
  
## <a name="remarks"></a>Note  
 La macro C `isnan` e le funzioni `_isnan` e `_isnanf` verificano il valore a virgola mobile *x* e restituiscono un valore diverso da zero se *x* è un valore NaN (Not a Number). Viene generato un valore NaN quando il risultato dell'operazione a virgola mobile non può essere rappresentato in formato a virgola mobile IEEE 754 per il tipo specificato. Per informazioni sulla rappresentazione di un valore NaN per l'output, vedere [printf](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md).  
  
 Se compilata come C++, la macro `isnan` non è definita e viene invece definita una funzione modello `isnan`. Restituisce un valore di tipo `bool` invece di un intero.  
  
 Le funzioni `_isnan` e `_isnanf` sono specifiche di Microsoft. La funzione `_isnanf` è disponibile solo per la compilazione per la piattaforma x64.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|  
|-------------|---------------------------|-------------------------------|  
|`isnan`, `_isnanf`|\<math.h>|\<math.h> o \<cmath>|  
|`_isnan`|\<float.h>|\<float.h> o \<cfloat>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)  (Supporto delle funzioni a virgola mobile)  
 [_finite, _finitef](../../c-runtime-library/reference/finite-finitef.md)   
 [_fpclass, _fpclassf](../../c-runtime-library/reference/fpclass-fpclassf.md)