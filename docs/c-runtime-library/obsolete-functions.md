---
title: Funzioni obsolete | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
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
dev_langs: C++
helpviewer_keywords:
- obsolete functions
- _beep function
- _sleep function
- _seterrormode function
ms.assetid: 8e14c2d4-1481-4240-8586-47eb43db02b0
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 8a8811703234f2c4e23dab6ad2b99b1aae316c04
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="obsolete-functions"></a>Funzioni obsolete
Alcune funzioni di libreria sono obsolete e hanno equivalenti più recenti. Si consiglia di sostituire queste funzioni con le versioni aggiornate. Altre funzioni obsolete sono state rimosse da CRT. Questo argomento elenca le funzioni deprecate come obsolete e le funzioni rimosse in specifiche versioni di Visual Studio.  
  
## <a name="deprecated-as-obsolete-in-visual-studio-2015"></a>Funzione deprecata come obsoleta in Visual Studio 2015  
  
|Funzione obsoleta|Alternativa|  
|-----------------------|-----------------|  
|`is_wctype`|[iswctype](../c-runtime-library/reference/isctype-iswctype-isctype-l-iswctype-l.md)|  
|`_loaddll`|[LoadLibrary](http://go.microsoft.com/fwlink/p/?LinkID=259187), [LoadLibraryEx](http://go.microsoft.com/fwlink/p/?LinkID=236091)o [LoadPackagedLibrary](https://msdn.microsoft.com/library/windows/desktop/hh447159\(v=vs.85\).aspx)|  
|`_unloaddll`|[FreeLibrary](http://go.microsoft.com/fwlink/p/?LinkID=259188)|  
|`_getdllprocaddr`|[GetProcAddress](../build/getprocaddress.md)|  
|`_seterrormode`|[SetErrorMode](http://go.microsoft.com/fwlink/p/?LinkID=255242)|  
|`_beep`|[Beep](https://msdn.microsoft.com/library/windows/desktop/ms679277\(v=vs.85\).aspx)|  
|`_sleep`|[Sleep](https://msdn.microsoft.com/library/windows/desktop/ms686298\(v=vs.85\).aspx)|  
|`_getsystime`|[GetLocalTime](https://msdn.microsoft.com/library/windows/desktop/ms724338\(v=vs.85\).aspx)|  
|`_setsystime`|[SetLocalTime](https://msdn.microsoft.com/library/windows/desktop/ms724936\(v=vs.85\).aspx)|  
  
## <a name="removed-from-the-crt-in-visual-studio-2015"></a>Funzione rimossa da CRT in Visual Studio 2015  
  
|Funzione obsoleta|Alternativa|  
|-----------------------|-----------------|  
|[_cgets, _cgetws](../c-runtime-library/cgets-cgetws.md)|[_cgets_s, _cgetws_s](../c-runtime-library/reference/cgets-s-cgetws-s.md)|  
|[gets, _getws](../c-runtime-library/gets-getws.md)|[gets_s, _getws_s](../c-runtime-library/reference/gets-s-getws-s.md)|  
|[_get_output_format](../c-runtime-library/get-output-format.md)|Nessuno|  
|[_heapadd](../c-runtime-library/heapadd.md)|Nessuno|  
|[_heapset](../c-runtime-library/heapset.md)|Nessuno|  
|[inp, inpw](../c-runtime-library/inp-inpw.md)|Nessuno|  
|[_inp, _inpw, _inpd](../c-runtime-library/inp-inpw-inpd.md)|Nessuno|  
|[outp, outpw](../c-runtime-library/outp-outpw.md)|Nessuno|  
|[_outp, _outpw, _outpd](../c-runtime-library/outp-outpw-outpd.md)|Nessuno|  
|[_set_output_format](../c-runtime-library/set-output-format.md)|Nessuno|  
  
## <a name="removed-from-the-crt-in-earlier-versions-of-visual-studio"></a>Funzione rimossa da CRT nelle versioni precedenti di Visual Studio  
 [_lock](../c-runtime-library/lock.md)  
  
 [_unlock](../c-runtime-library/unlock.md)