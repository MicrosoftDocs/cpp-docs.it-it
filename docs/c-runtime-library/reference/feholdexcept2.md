---
title: feholdexcept2 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname: feholdexcept
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
- feholdexcept
- fenv/feholdexcept
dev_langs: C++
helpviewer_keywords: feholdexcept function
ms.assetid: 88e512ae-b5d8-452c-afe9-c824cd3ef1d8
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: b1455f3b963c2d9faf7c2e96a2d6684e0e412ef8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="feholdexcept"></a>feholdexcept
Salva l'ambiente a virgola mobile corrente nell'oggetto specificato, cancella i flag di stato a virgola mobile e, se possibile, inserisce l'ambiente a virgola mobile in modalità senza interruzioni.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int feholdexcept(  
   fenv_t *penv  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `penv`  
 Puntatore a un oggetto `fenv_t` per contenere una copia dell'ambiente a virgola mobile.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce zero se e solo se la funzione è in grado di attivare correttamente la gestione delle eccezioni a virgola mobile non significative.  
  
## <a name="remarks"></a>Note  
 La funzione `feholdexcept` viene usata per archiviare lo stato dell'ambiente a virgola mobile corrente nell'oggetto `fenv_t` a cui punta `penv` e per impostare l'ambiente per non interrompere l'esecuzione in corrispondenza di eccezioni a virgola mobile. Questa attività è nota come modalità senza interruzioni.  Questa modalità continua fino a quando l'ambiente viene ripristinato tramite [fesetenv](fesetenv1.md) o [feupdateenv](../../c-runtime-library/reference/feupdateenv.md).  
  
 È possibile usare questa funzione all'inizio di una subroutine che deve nascondere uno o più eccezioni a virgola mobile dal chiamante. Per segnalare un'eccezione, è possibile eliminare semplicemente le eccezioni non volute tramite [feclearexcept](../../c-runtime-library/reference/feclearexcept1.md) e quindi terminare la modalità senza interruzioni con una chiamata a `feupdateenv`.  
  
 Per usare questa funzione, è necessario disattivare le ottimizzazioni a virgola mobile che potrebbero impedire l'accesso tramite la direttiva `#pragma fenv_access(on)` prima della chiamata. Per altre informazioni, vedere [fenv_access](../../preprocessor/fenv-access.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione C|Intestazione C++|  
|--------------|--------------|------------------|  
|`feholdexcept`|\<fenv.h>|\<cfenv>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)  (Riferimento alfabetico alle funzioni)  
 [feclearexcept](../../c-runtime-library/reference/feclearexcept1.md)   
 [fesetenv](fesetenv1.md)   
 [feupdateenv](../../c-runtime-library/reference/feupdateenv.md)