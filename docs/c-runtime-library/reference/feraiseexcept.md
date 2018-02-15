---
title: feraiseexcept | Microsoft Docs
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
- feraiseexcept
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
- feraiseexcept
- fenv/feraiseexcept
dev_langs:
- C++
helpviewer_keywords:
- feraiseexcept function
ms.assetid: 87e89151-83c2-4563-9a9a-45666245d437
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: aaaa1848af2c8a7831017f6332afa988c305fe05
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="feraiseexcept"></a>feraiseexcept
Genera le eccezioni a virgola mobile specificate.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int feraiseexcept(  
   int excepts  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `excepts`  
 Eccezioni a virgola mobile da generare.  
  
## <a name="return-value"></a>Valore restituito  
 Se tutte le eccezioni specificate vengono generate correttamente, restituisce 0.  
  
## <a name="remarks"></a>Note  
 La funzione `feraiseexcept` prova a generare le eccezioni a virgola mobile specificate da `excepts`.   La funzione `feraiseexcept` supporta queste macro di eccezioni, definite in \<fenv.h>:  
  
|Macro di eccezioni|Descrizione|  
|---------------------|-----------------|  
|FE_DIVBYZERO|Si è verificato un errore di singolarità o polo in un'operazione precedente a virgola mobile. È stato creato un valore di infinità.|  
|FE_INEXACT|La funzione è stata forzata ad arrotondare il risultato archiviato di un'operazione precedente a virgola mobile.|  
|FE_INVALID|Si è verificato un errore di dominio in un'operazione precedente a virgola mobile.|  
|FE_OVERFLOW|Si è verificato un errore di intervallo. Un risultato dell'operazione precedente a virgola mobile era troppo grande per essere rappresentato.|  
|FE_UNDERFLOW|Un risultato dell'operazione precedente a virgola mobile era troppo piccolo per essere rappresentato con la massima precisione. È stato creato un valore denormalizzato.|  
|FE_ALLEXCEPT|OR bit per bit di tutte le eccezioni a virgola mobile supportate.|  
  
 L'argomento `excepts` può essere zero, uno dei valori delle macro di eccezioni oppure OR bit per bit di due o più macro di eccezioni supportate. Se una delle macro di eccezioni specificata è FE_OVERFLOW o FE_UNDERFLOW, può essere generata l'eccezione FE_INEXACT come effetto collaterale.  
  
 Per usare questa funzione, è necessario disattivare le ottimizzazioni a virgola mobile che potrebbero impedire l'accesso tramite la direttiva `#pragma fenv_access(on)` prima della chiamata. Per altre informazioni, vedere [fenv_access](../../preprocessor/fenv-access.md).  
  
 **Specifico Microsoft:** le eccezioni specificate in `excepts` sono generate nell'ordine FE_INVALID, FE_DIVBYZERO, FE_OVERFLOW, FE_UNDERFLOW, FE_INEXACT. Tuttavia, FE_INEXACT può essere generata quando viene generata FE_OVERFLOW o FE_UNDERFLOW, anche se non è specificata `excepts`. **Fine sezione specifica Microsoft**  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione C|Intestazione C++|  
|--------------|--------------|------------------|  
|`feraiseexcept`|\<fenv.h>|\<cfenv>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)  (Riferimento alfabetico alle funzioni)  
 [fesetexceptflag](../../c-runtime-library/reference/fesetexceptflag2.md)   
 [feholdexcept](../../c-runtime-library/reference/feholdexcept2.md)   
 [fetestexcept](../../c-runtime-library/reference/fetestexcept1.md)   
 [feupdateenv](../../c-runtime-library/reference/feupdateenv.md)