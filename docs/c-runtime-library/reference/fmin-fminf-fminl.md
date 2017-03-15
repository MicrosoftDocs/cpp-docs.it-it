---
title: Fmin, fminf, fminl | Documenti di Microsoft
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
caps.latest.revision: 5
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
translationtype: Machine Translation
ms.sourcegitcommit: 8953e3bd81158ce183e1abb5dfa969164c1f9ced
ms.openlocfilehash: b7fd6a2b91c1bc7cd973d2ac60f2d6fc39d322bb
ms.lasthandoff: 02/24/2017

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
 [Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md) (Riferimento alfabetico alle funzioni)  
 [fmax, fmaxf, fmaxl](fmax-fmaxf-fmaxl.md)  
