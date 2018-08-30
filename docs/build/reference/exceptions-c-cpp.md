---
title: Eccezioni (C/C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 40a3a9e1cf1384603d6b7d95fa5960e951f932ef
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43216883"
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
  
 I codici di eccezione generati sono gli standard VcppException (ERROR_SEVERITY_ERROR, ERROR_MOD_NOT_FOUND) e i valori di VcppException (ERROR_SEVERITY_ERROR, ERROR_PROC_NOT_FOUND). L'eccezione passa un puntatore a un **DelayLoadInfo** struttura nel valore LPDWORD che può essere recuperato dalla **GetExceptionInformation** nel [EXCEPTION_RECORD](/windows/desktop/api/winnt/ns-winnt-_exception_record) struttura, campo ExceptionInformation [0].  
  
 Inoltre, se il bit corretto vengono impostati nel campo grAttrs, l'eccezione ERROR_INVALID_PARAMETER viene generata. Questa eccezione è, a tutti gli effetti, irreversibile.  
  
 Visualizzare [struttura e definizioni costanti](../../build/reference/structure-and-constant-definitions.md) per altre informazioni.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione e notifica degli errori](../../build/reference/error-handling-and-notification.md)