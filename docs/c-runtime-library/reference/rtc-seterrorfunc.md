---
title: _RTC_SetErrorFunc | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: _RTC_SetErrorFunc
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
apitype: DLLExport
f1_keywords:
- RTC_SetErrorFunc
- _RTC_SetErrorFunc
dev_langs: C++
helpviewer_keywords:
- RTC_SetErrorFunc function
- _RTC_SetErrorFunc function
ms.assetid: b2292722-0d83-4092-83df-3d5b19880666
caps.latest.revision: "13"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: fa6d2e05668eac7909cb7805c5843ee6584b941f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="rtcseterrorfunc"></a>_RTC_SetErrorFunc
Definisce una funzione come gestore per la segnalazione dei controlli degli errori di runtime (RTC). Questa funzione è deprecata. In alternativa, usare `_RTC_SetErrorFuncW` .  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      _RTC_error_fn _RTC_SetErrorFunc(  
   _RTC_error_fn function   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 *function*  
 L'indirizzo della funzione che gestirà i controlli degli errori di runtime.  
  
## <a name="return-value"></a>Valore restituito  
 La funzione di errore definita in precedenza. Se non esiste una funzione definita in precedenza, restituisce NULL.  
  
## <a name="remarks"></a>Note  
 Non usare questa funzione; in alternativa, usare `_RTC_SetErrorFuncW`. Viene mantenuta solo per compatibilità con le versioni precedenti.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_RTC_SetErrorFunc`|\<rtcapi.h>|  
  
 Per altre informazioni, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="see-also"></a>Vedere anche  
 [_CrtDbgReport, _CrtDbgReportW](../../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md)   
 [Controllo degli errori di runtime](../../c-runtime-library/run-time-error-checking.md)