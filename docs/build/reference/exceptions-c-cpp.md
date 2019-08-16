---
title: Eccezioni (C/C++)
ms.date: 11/04/2016
f1_keywords:
- ERROR_MOD_NOT_FOUND
- vcppException
- ERROR_SEVERITY_ERROR
helpviewer_keywords:
- vcppException
- C++ exception handling, delayed loading of DLLs
- delayed loading of DLLs, exceptions
- ERROR_SEVERITY_ERROR exception
- ERROR_MOD_NOT_FOUND exception
ms.assetid: c03be05d-1c39-4f35-84cf-00c9af3bae9a
ms.openlocfilehash: 360acba73278902cc40d10fd975011488742a7a2
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69492924"
---
# <a name="exceptions-cc"></a>Eccezioni (C/C++)

Quando vengono rilevati errori, è possibile generare due codici di eccezione:

- Per un errore **LoadLibrary**

- Per un errore **GetProcAddress**

Di seguito sono riportate le informazioni sull'eccezione:

```
//
// Exception information
//
#define FACILITY_VISUALCPP  ((LONG)0x6d)
#define VcppException(sev,err)  ((sev) | (FACILITY_VISUALCPP<<16) | err)
```

I codici di eccezione generati sono i valori VcppException (ERROR_SEVERITY_ERROR, ERROR_MOD_NOT_FOUND) e VcppException (ERROR_SEVERITY_ERROR, ERROR_PROC_NOT_FOUND) standard. L'eccezione passa un puntatore a una struttura **DelayLoadInfo** nel valore LPDWORD che può essere recuperato da **GetExceptionInformation** nella struttura [EXCEPTION_RECORD](/windows/win32/api/winnt/ns-winnt-exception_record) , ExceptionInformation [0] campo.

Inoltre, se i bit non corretti sono impostati nel campo grAttrs, viene generata l'eccezione ERROR_INVALID_PARAMETER. Questa eccezione è, per tutte le finalità e, fatale.

Per ulteriori informazioni, vedere [struttura e definizioni di costanti](structure-and-constant-definitions.md) .

## <a name="see-also"></a>Vedere anche

[Gestione e notifica degli errori](error-handling-and-notification.md)
