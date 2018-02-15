---
title: fpclassify | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- fpclassify
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
apitype: HeaderDef
f1_keywords:
- fpclassify
- math/fpclassify
helpviewer_keywords:
- fpclassify macro
- fpclassify function
ms.assetid: bf549499-7ff9-4a58-8692-f2d1cb6bab81
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 81a2c9c5237d455908e1d0e4f58bff87418a7f8b
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="fpclassify"></a>fpclassify
Restituisce la classificazione a virgola mobile dell'argomento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int fpclassify(   
   /* floating-point */ x   
);  
  
int fpclassify(   
   float x   
); // C++ only  
  
int fpclassify(   
   double x   
); // C++ only  
  
int fpclassify(   
   long double x   
); // C++ only  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `x`  
 Valore a virgola mobile da verificare.  
  
## <a name="return-value"></a>Valore restituito  
 `fpclassify` restituisce un valore intero che indica la classe a virgola mobile dell'argomento `x`. Questa tabella mostra i valori possibili restituiti da `fpclassify`, definiti in \<math.h>.  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|`FP_NAN`|NaN silenzioso, segnalatore o indeterminato|  
|`FP_INFINITE`|Infinito positivo o negativo|  
|`FP_NORMAL`|Valore diverso da zero normalizzato positivo o negativo|  
|`FP_SUBNORMAL`|Valore denormalizzato positivo o negativo|  
|`FP_ZERO`|Valore zero positivo o negativo|  
  
## <a name="remarks"></a>Note  
 In C, `fpclassify` è una macro. In C++, `fpclassify` è una funzione in overload che usa i tipi di argomento `float`, `double` o `long double`. In entrambi i casi, il valore restituito dipende dal tipo effettivo dell'espressione argomento e non da qualsiasi rappresentazione intermedia. Ad esempio, un valore `double` o `long double` normale può diventare un valore infinito, denormalizzato o zero quando viene convertito in `float`.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione/Macro|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|  
|---------------------|---------------------------|-------------------------------|  
|`fpclassify`|\<math.h>|\<math.h> o \<cmath>|  
  
 La macro `fpclassify` e le funzioni `fpclassify` sono conformi alle specifiche C99 e C++11. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)  (Supporto delle funzioni a virgola mobile)  
 [isnan, _isnan, _isnanf](../../c-runtime-library/reference/isnan-isnan-isnanf.md)