---
title: Funzioni obsolete | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp
- devlang-cpp
ms.topic: conceptual
f1_keywords:
- is_wctype
- _loaddll
- _unloaddll
- _getdllprocaddr
- _seterrormode
- _beep
- _sleep
- _getsystime
- corecrt_wctype/is_wctype
- process/_loaddll
- process/_unloaddll
- process/_getdllprocaddr
- stdlib/_seterrormode
- stdlib/_beep
- stdlib/_sleep
- time/_getsystime
- time/_setsystime
dev_langs:
- C++
helpviewer_keywords:
- obsolete functions
- _beep function
- _sleep function
- _seterrormode function
ms.assetid: 8e14c2d4-1481-4240-8586-47eb43db02b0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8dc0a477051171ad0a96124a894039c966724c6c
ms.sourcegitcommit: a738519aa491a493a8f213971354356c0e6a5f3a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/05/2018
ms.locfileid: "48820533"
---
# <a name="obsolete-functions"></a>Funzioni obsolete

Alcune funzioni di libreria sono obsolete e hanno equivalenti più recenti. Si consiglia di sostituire queste funzioni con le versioni aggiornate. Altre funzioni obsolete sono state rimosse da CRT. Questo argomento elenca le funzioni deprecate come obsolete e le funzioni rimosse in specifiche versioni di Visual Studio.

## <a name="deprecated-as-obsolete-in-visual-studio-2015"></a>Funzione deprecata come obsoleta in Visual Studio 2015

|Funzione obsoleta|Alternativa|
|-----------------------|-----------------|
|`is_wctype`|[iswctype](../c-runtime-library/reference/isctype-iswctype-isctype-l-iswctype-l.md)|
|`_loaddll`|[LoadLibrary](https://msdn.microsoft.com/library/windows/desktop/ms684175\(v=vs.85\).aspx), [LoadLibraryEx](/windows/desktop/api/libloaderapi/nf-libloaderapi-loadlibraryexa)o [LoadPackagedLibrary](/windows/desktop/api/winbase/nf-winbase-loadpackagedlibrary)|
|`_unloaddll`|[FreeLibrary](https://msdn.microsoft.com/library/windows/desktop/ms683152\(v=vs.85\).aspx)|
|`_getdllprocaddr`|[GetProcAddress](../build/getprocaddress.md)|
|`_seterrormode`|[SetErrorMode](https://msdn.microsoft.com/library/windows/desktop/ms680621\(v=vs.85\).aspx)|
|`_beep`|[Beep](https://msdn.microsoft.com/library/windows/desktop/ms679277\(v=vs.85\).aspx)|
|`_sleep`|[Sleep](/windows/desktop/api/synchapi/nf-synchapi-sleep)|
|`_getsystime`|[GetLocalTime](https://msdn.microsoft.com/library/windows/desktop/ms724338\(v=vs.85\).aspx)|
|`_setsystime`|[SetLocalTime](https://msdn.microsoft.com/library/windows/desktop/ms724936\(v=vs.85\).aspx)|

## <a name="removed-from-the-crt-in-visual-studio-2015"></a>Funzione rimossa da CRT in Visual Studio 2015

|Funzione obsoleta|Alternativa|
|-----------------------|-----------------|
|[_cgets, _cgetws](../c-runtime-library/cgets-cgetws.md)|[_cgets_s, _cgetws_s](../c-runtime-library/reference/cgets-s-cgetws-s.md)|
|[gets, _getws](../c-runtime-library/gets-getws.md)|[gets_s, _getws_s](../c-runtime-library/reference/gets-s-getws-s.md)|
|[_get_output_format](../c-runtime-library/get-output-format.md)|nessuno|
|[_heapadd](../c-runtime-library/heapadd.md)|nessuno|
|[_heapset](../c-runtime-library/heapset.md)|nessuno|
|[inp, inpw](../c-runtime-library/inp-inpw.md)|nessuno|
|[_inp, _inpw, _inpd](../c-runtime-library/inp-inpw-inpd.md)|nessuno|
|[outp, outpw](../c-runtime-library/outp-outpw.md)|nessuno|
|[_outp, _outpw, _outpd](../c-runtime-library/outp-outpw-outpd.md)|nessuno|
|[_set_output_format](../c-runtime-library/set-output-format.md)|nessuno|

## <a name="removed-from-the-crt-in-earlier-versions-of-visual-studio"></a>Funzione rimossa da CRT nelle versioni precedenti di Visual Studio

[_lock](../c-runtime-library/lock.md)

[_unlock](../c-runtime-library/unlock.md)