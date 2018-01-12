---
title: feupdateenv | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname: feupdateenv
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
- feupdateenv
- fenv/feupdateenv
dev_langs: C++
helpviewer_keywords: feupdateenv function
ms.assetid: 3d170042-dfd5-4e4f-a55f-038cf2296cc9
caps.latest.revision: "3"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c84e829876282a43fb9a8a17713a612e387f5216
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="feupdateenv"></a>feupdateenv
Salva le eccezioni a virgola mobile attualmente generate, ripristina lo stato dell'ambiente a virgola mobile specificato e genera quindi le eccezioni a virgola mobile salvate.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int feupdateenv(  
   const fenv_t* penv  
);  
```  
  
### <a name="parameters"></a>Parametri  
 `penv`  
 Puntatore a un oggetto `fenv_t` che contiene un ambiente a virgola mobile impostato da una chiamata a [fegetenv](fegetenv1.md) o a [feholdexcept](feholdexcept2.md). È anche possibile specificare l'ambiente a virgola mobile di avvio predefinito tramite la macro FE_DFL_ENV.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce 0 se tutte le operazioni sono state completate correttamente. In caso contrario, viene restituito un valore diverso da zero.  
  
## <a name="remarks"></a>Note  
 La funzione `feupdateenv` esegue più azioni. Archivia prima i flag di stato delle eccezioni a virgola mobile attualmente generati in un'archiviazione automatica. Quindi imposta l'ambiente a virgola mobile corrente dal valore archiviato nell'oggetto `fenv_t` a cui punta `penv`. Se `penv` non è FE_DFL_ENV oppure non punta a un oggetto `fenv_t` valido, il successivo comportamento non è definito. Infine, `feupdateenv` genera le eccezioni a virgola mobile archiviate localmente.  
  
 Per usare questa funzione, è necessario disattivare le ottimizzazioni a virgola mobile che potrebbero impedire l'accesso tramite la direttiva `#pragma fenv_access(on)` prima della chiamata. Per altre informazioni, vedere [fenv_access](../../preprocessor/fenv-access.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione C|Intestazione C++|  
|--------------|--------------|------------------|  
|`feupdateenv`|\<fenv.h>|\<cfenv>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [fegetenv](../../c-runtime-library/reference/fegetenv1.md)   
 [feclearexcept](../../c-runtime-library/reference/feclearexcept1.md)   
 [feholdexcept](../../c-runtime-library/reference/feholdexcept2.md)   
 [fesetexceptflag](../../c-runtime-library/reference/fesetexceptflag2.md)