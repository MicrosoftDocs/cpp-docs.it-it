---
description: 'Altre informazioni su: eccezioni (C/C++)'
title: Codici di eccezione per il caricamento di DLL (C/C++)
ms.date: 11/19/2019
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
ms.openlocfilehash: 53ae6ab9a21309159b29a96e58d077f45fe30e12
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97200845"
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

I codici di eccezione generati sono i valori VcppException (ERROR_SEVERITY_ERROR, ERROR_MOD_NOT_FOUND) e VcppException (ERROR_SEVERITY_ERROR ERROR_PROC_NOT_FOUND) standard. L'eccezione passa un puntatore a una struttura **DelayLoadInfo** nel valore LPDWORD che può essere recuperato da **GetExceptionInformation** nel campo [EXCEPTION_RECORD](/windows/win32/api/winnt/ns-winnt-exception_record) structure, ExceptionInformation [0].

Inoltre, se i bit non corretti sono impostati nel campo grAttrs, viene generata l'eccezione ERROR_INVALID_PARAMETER. Questa eccezione è, per tutte le finalità e, fatale.

Per ulteriori informazioni, vedere [struttura e definizioni di costanti](structure-and-constant-definitions.md) .

## <a name="see-also"></a>Vedi anche

[Gestione e notifica degli errori](error-handling-and-notification.md)
