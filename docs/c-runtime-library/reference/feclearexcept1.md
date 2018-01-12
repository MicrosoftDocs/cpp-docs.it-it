---
title: feclearexcept1 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname: feclearexcept
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
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- feclearexcept
- fenv/feclearexcept
dev_langs: C++
helpviewer_keywords: feclearexcept function
ms.assetid: ef419da3-c248-4432-b53c-8e7a475d9533
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 327c2b70a1c5afd26953f830217d0a9c05e4d4e6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="feclearexcept"></a>feclearexcept
Prova a cancellare i flag di eccezione a virgola mobile specificati dall'argomento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int feclearexcept(  
   int excepts  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `excepts`  
 Flag di stato delle eccezioni da cancellare.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce zero se `excepts` è zero, oppure se sono state cancellate in maniera corretta tutte le eccezioni specificate. In caso contrario, viene restituito un valore diverso da zero.  
  
## <a name="remarks"></a>Note  
 La funzione `feclearexcept` prova a cancellare i flag di stato delle eccezioni a virgola mobile specificati da `excepts`. La funzione supporta queste macro di eccezioni, definite in fenv.h:  
  
|Macro di eccezioni|Descrizione|  
|---------------------|-----------------|  
|FE_DIVBYZERO|Si è verificato un errore di singolarità o polo in un'operazione precedente a virgola mobile. È stato creato un valore di infinità.|  
|FE_INEXACT|La funzione è stata forzata ad arrotondare il risultato archiviato di un'operazione precedente a virgola mobile.|  
|FE_INVALID|Si è verificato un errore di dominio in un'operazione precedente a virgola mobile.|  
|FE_OVERFLOW|Si è verificato un errore di intervallo. Un risultato dell'operazione precedente a virgola mobile era troppo grande per essere rappresentato.|  
|FE_UNDERFLOW|Un risultato dell'operazione precedente a virgola mobile era troppo piccolo per essere rappresentato con la massima precisione. È stato creato un valore denormalizzato.|  
|FE_ALLEXCEPT|OR bit per bit di tutte le eccezioni a virgola mobile supportate.|  
  
 L'argomento `excepts` può essere zero oppure OR bit per bit di uno o più macro di eccezioni supportate. Il risultato di qualsiasi altro valore di argomento non è definito.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione C|Intestazione C++|  
|--------------|--------------|------------------|  
|`feclearexcept`|\<fenv.h>|\<cfenv>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)  (Riferimento alfabetico alle funzioni)  
 [fetestexcept](../../c-runtime-library/reference/fetestexcept1.md)