---
title: fegetenv1 | Microsoft Docs
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
- fetegenv
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
- fegetenv
- fenv/fegetenv
dev_langs:
- C++
helpviewer_keywords:
- fetegenv function
ms.assetid: 68962421-6978-4b27-8e4c-ad1577830cf6
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 025b934ec6a2d9bc98d46cabbd13b93e263cd777
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="fegetenv"></a>fegetenv
Archivia l'ambiente a virgola mobile corrente nell'oggetto specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int fegetenv(  
   fenv_t *penv  
);  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `penv`  
 Puntatore a un oggetto `fenv_t` che contiene i valori correnti dell'ambiente a virgola mobile.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce 0 se l'ambiente a virgola mobile è stato archiviato correttamente in `penv`. In caso contrario, viene restituito un valore diverso da zero.  
  
## <a name="remarks"></a>Note  
 La funzione `fegetenv` consente di archiviare l'ambiente a virgola mobile corrente nell'oggetto a cui punta `penv`. L'ambiente a virgola mobile è il set di flag dello stato e le modalità di controllo che influiscono sui calcoli a virgola mobile. Ciò include la direzione della modalità di arrotondamento e i flag di stato delle eccezioni a virgola mobile.  Se `penv` non fa riferimento a un oggetto valido `fenv_t`, il successivo comportamento non è definito.  
  
 Per usare questa funzione, è necessario disattivare le ottimizzazioni a virgola mobile che potrebbero impedire l'accesso tramite la direttiva `#pragma fenv_access(on)` prima della chiamata. Per altre informazioni, vedere [fenv_access](../../preprocessor/fenv-access.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione C|Intestazione C++|  
|--------------|--------------|------------------|  
|`fegetenv`|\<fenv.h>|\<cfenv>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)  (Riferimento alfabetico alle funzioni)  
 [fesetenv](../../c-runtime-library/reference/fesetenv1.md)