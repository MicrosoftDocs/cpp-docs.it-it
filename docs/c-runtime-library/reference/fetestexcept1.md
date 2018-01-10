---
title: fetestexcept1 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname: fetestexcept
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
- fetestexcept
- fenv/fetestexcept
dev_langs: C++
helpviewer_keywords: fetestexept function
ms.assetid: ca4dc43f-5573-440d-bc19-ead7571b13dc
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 78eb884950e2175815caf2ac645dc0e70c262566
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fetestexcept"></a>fetestexcept
Determina quali flag di stato delle eccezioni a virgola mobile specificati sono attualmente impostati.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int fetestexcept(  
   int excepts  
);  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `excepts`  
 OR bit per bit dei flag di stato a virgola mobile da testare.  
  
## <a name="return-value"></a>Valore restituito  
 Se l'esito è positivo, restituisce una maschera di bit che contiene OR bit per bit delle macro di eccezioni a virgola mobile che corrispondono ai flag di stato delle eccezioni attualmente impostati. Restituisce 0 se non è impostata nessuna eccezione.  
  
## <a name="remarks"></a>Note  
 Usare la funzione fetestexcept per determinare le eccezioni generate da un'operazione a virgola mobile. Usare il parametro `excepts` per specificare i flag di stato delle eccezioni da testare. La funzione `fetestexcept` usa le macro delle eccezioni definite in \<fenv.h> di `excepts` e il valore restituito:  
  
|Macro di eccezioni|Descrizione|  
|---------------------|-----------------|  
|FE_DIVBYZERO|Si è verificato un errore di singolarità o polo in un'operazione precedente a virgola mobile. È stato creato un valore di infinità.|  
|FE_INEXACT|La funzione è stata forzata ad arrotondare il risultato archiviato di un'operazione precedente a virgola mobile.|  
|FE_INVALID|Si è verificato un errore di dominio in un'operazione precedente a virgola mobile.|  
|FE_OVERFLOW|Si è verificato un errore di intervallo. Un risultato dell'operazione precedente a virgola mobile era troppo grande per essere rappresentato.|  
|FE_UNDERFLOW|Un risultato dell'operazione precedente a virgola mobile era troppo piccolo per essere rappresentato con la massima precisione. È stato creato un valore denormalizzato.|  
|FE_ALLEXCEPT|OR bit per bit di tutte le eccezioni a virgola mobile supportate.|  
  
 L'argomento `excepts` specificato può essere 0, una delle macro di eccezioni a virgola mobile supportata o OR bit per bit di due o più macro. L'effetto di qualsiasi altro valore dell'argomento `excepts` non è definito.  
  
 Per usare questa funzione, è necessario disattivare le ottimizzazioni a virgola mobile che potrebbero impedire l'accesso tramite la direttiva `#pragma fenv_access(on)` prima della chiamata. Per altre informazioni, vedere [fenv_access](../../preprocessor/fenv-access.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione C|Intestazione C++|  
|--------------|--------------|------------------|  
|`fetestexcept`|\<fenv.h>|\<cfenv>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)  (Riferimento alfabetico alle funzioni)  
 [feclearexcept](../../c-runtime-library/reference/feclearexcept1.md)   
 [feraiseexcept](../../c-runtime-library/reference/feraiseexcept.md)