---
title: fesetexceptflag2 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname: fesetexceptflag
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
- fesetexceptflag
- fenv/fesetexceptflag
dev_langs: C++
helpviewer_keywords: fesetexceptflag function
ms.assetid: 2f7dad77-9e54-4097-a3e3-35176ace4de5
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: b23c60333bee887366e11f6da29a73e940a36561
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fesetexceptflag"></a>fesetexceptflag
Imposta i flag di stato a virgola mobile specificati nell'ambiente corrente a virgola mobile.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int fesetexceptflag(  
     const fexcept_t *pstatus,  
     int excepts  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `pstatus`  
 Puntatore a un oggetto `fexcept_t` che contiene i valori a cui impostare i flag di stato delle eccezioni. L'oggetto può essere impostato da una precedente chiamata a [fegetexceptflag](fegetexceptflag2.md).  
  
 `excepts`  
 Flag di stato delle eccezioni a virgola mobile da impostare.  
  
## <a name="return-value"></a>Valore restituito  
 Se tutti i flag di stato delle eccezioni specificati sono impostati correttamente, restituisce 0. In caso contrario, viene restituito un valore diverso da zero.  
  
## <a name="remarks"></a>Note  
 La funzione `fesetexceptflag` imposta lo stato dei flag di stato delle eccezioni a virgola mobile specificato da `excepts` sui valori corrispondenti impostati nell'oggetto `fexcept_t` a cui punta `pstatus`.  Non genera l'eccezione. Il puntatore `pstatus` deve puntare a un oggetto `fexcept_t` valido oppure il comportamento successivo non è definito. La funzione `fesetexceptflag` supporta questi valori di macro di eccezioni in `excepts`, definite in \<fenv.h>:  
  
|Macro di eccezioni|Descrizione|  
|---------------------|-----------------|  
|FE_DIVBYZERO|Si è verificato un errore di singolarità o polo in un'operazione precedente a virgola mobile. È stato creato un valore di infinità.|  
|FE_INEXACT|La funzione è stata forzata ad arrotondare il risultato archiviato di un'operazione precedente a virgola mobile.|  
|FE_INVALID|Si è verificato un errore di dominio in un'operazione precedente a virgola mobile.|  
|FE_OVERFLOW|Si è verificato un errore di intervallo. Un risultato dell'operazione precedente a virgola mobile era troppo grande per essere rappresentato.|  
|FE_UNDERFLOW|Un risultato dell'operazione precedente a virgola mobile era troppo piccolo per essere rappresentato con la massima precisione. È stato creato un valore denormalizzato.|  
|FE_ALLEXCEPT|OR bit per bit di tutte le eccezioni a virgola mobile supportate.|  
  
 L'argomento `excepts` può essere zero, una delle macro di eccezioni a virgola mobile supportate oppure OR bit per bit di due o più macro. L'effetto di qualsiasi altro valore di argomento non è definito.  
  
 Per usare questa funzione, è necessario disattivare le ottimizzazioni a virgola mobile che potrebbero impedire l'accesso tramite la direttiva `#pragma fenv_access(on)` prima della chiamata. Per altre informazioni, vedere [fenv_access](../../preprocessor/fenv-access.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione C|Intestazione C++|  
|--------------|--------------|------------------|  
|`fesetexceptflag`|\<fenv.h>|\<cfenv>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [fegetexceptflag](../../c-runtime-library/reference/fegetexceptflag2.md)