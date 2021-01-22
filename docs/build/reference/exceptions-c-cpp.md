---
description: 'Altre informazioni su: eccezioni di caricamento ritardato (C/C++)'
title: Codici di eccezione per caricamento ritardato DLL
ms.date: 01/19/2021
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
ms.openlocfilehash: 214d8514baba7b180b8d838af8a6b6c0543cc1ce
ms.sourcegitcommit: 3d9cfde85df33002e3b3d7f3509ff6a8dc4c0a21
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/21/2021
ms.locfileid: "98667182"
---
# <a name="dll-delay-load-exception-codes"></a>Codici di eccezione per caricamento ritardato DLL

Quando si verificano errori, è possibile generare due codici di eccezione strutturati:

- Per un `LoadLibrary` errore

- Per un `GetProcAddress` errore

Di seguito è illustrata la macro delle informazioni sull'eccezione:

```C
//
// Exception information
//
#define FACILITY_VISUALCPP  ((LONG)0x6d)
#define VcppException(sev,err)  ((sev) | (FACILITY_VISUALCPP<<16) | err)
```

I codici di eccezione generati sono i `VcppException(ERROR_SEVERITY_ERROR, ERROR_MOD_NOT_FOUND)` valori standard e `VcppException(ERROR_SEVERITY_ERROR, ERROR_PROC_NOT_FOUND)` . L'eccezione passa un puntatore a una `DelayLoadInfo` struttura nel `LPDWORD` valore che può essere recuperato dalla `GetExceptionInformation` [`EXCEPTION_RECORD`](/windows/win32/api/winnt/ns-winnt-exception_record) struttura, nel `ExceptionInformation[0]` campo.

Inoltre, se nel campo sono impostati bit non corretti `grAttrs` , `ERROR_INVALID_PARAMETER` viene generata l'eccezione. Questa eccezione è, per tutte le finalità e, fatale.

Per altre informazioni, vedere [struttura e definizioni di costanti](structure-and-constant-definitions.md).

## <a name="see-also"></a>Vedi anche

[Gestione e notifica degli errori](error-handling-and-notification.md)
