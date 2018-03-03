---
title: Eccezioni (C/C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ERROR_MOD_NOT_FOUND
- vcppException
- ERROR_SEVERITY_ERROR
dev_langs:
- C++
helpviewer_keywords:
- vcppException
- C++ exception handling, delayed loading of DLLs
- delayed loading of DLLs, exceptions
- ERROR_SEVERITY_ERROR exception
- ERROR_MOD_NOT_FOUND exception
ms.assetid: c03be05d-1c39-4f35-84cf-00c9af3bae9a
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 635e2b1406e9919425a396b6f49fe8eb6efd81eb
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="exceptions-cc"></a>Eccezioni (C/C++)
Due codici di eccezione possono essere generati quando vengono rilevati errori:  
  
-   Per un **LoadLibrary** errore  
  
-   Per un **GetProcAddress** errore  
  
 Ecco le informazioni sull'eccezione:  
  
```  
//  
// Exception information  
//  
#define FACILITY_VISUALCPP  ((LONG)0x6d)  
#define VcppException(sev,err)  ((sev) | (FACILITY_VISUALCPP<<16) | err)  
```  
  
 I codici di eccezione generati sono standard VcppException (ERROR_SEVERITY_ERROR, ERROR_MOD_NOT_FOUND) e i valori VcppException (ERROR_SEVERITY_ERROR, ERROR_PROC_NOT_FOUND). L'eccezione passa un puntatore a un **DelayLoadInfo** struttura nel valore LPDWORD che può essere recuperato da **GetExceptionInformation** nel [EXCEPTION_RECORD](http://msdn.microsoft.com/library/windows/desktop/aa363082) struttura, campo ExceptionInformation [0].  
  
 Inoltre, se il bit corretto vengono impostati nel campo grAttrs, l'eccezione ERROR_INVALID_PARAMETER viene generata. Questa eccezione è, a tutti gli effetti, irreversibile.  
  
 Vedere [struttura e definizioni di costanti](../../build/reference/structure-and-constant-definitions.md) per ulteriori informazioni.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione e notifica degli errori](../../build/reference/error-handling-and-notification.md)