---
title: _RTC_SetErrorFunc | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _RTC_SetErrorFunc
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
dev_langs:
- C++
helpviewer_keywords:
- RTC_SetErrorFunc function
- _RTC_SetErrorFunc function
ms.assetid: b2292722-0d83-4092-83df-3d5b19880666
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f288a54f6260584fb30a52d427396f583afacdbb
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="rtcseterrorfunc"></a>_RTC_SetErrorFunc

Definisce una funzione come gestore per la segnalazione dei controlli degli errori di runtime (RTC). Questa funzione è obsoleta. Utilizzare **RTC_SetErrorFuncW** invece.

## <a name="syntax"></a>Sintassi

```C
_RTC_error_fn _RTC_SetErrorFunc(
   _RTC_error_fn function
);
```

### <a name="parameters"></a>Parametri

*function*<br/>
L'indirizzo della funzione che gestirà i controlli degli errori di runtime.

## <a name="return-value"></a>Valore restituito

La funzione di errore definita in precedenza. Se non esiste una funzione definita in precedenza, restituisce NULL.

## <a name="remarks"></a>Note

Non utilizzare questa funzione; In alternativa, usare **RTC_SetErrorFuncW**. Viene mantenuta solo per compatibilità con le versioni precedenti.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_RTC_SetErrorFunc**|\<rtcapi.h>|

Per altre informazioni, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[_CrtDbgReport, _CrtDbgReportW](crtdbgreport-crtdbgreportw.md)<br/>
[Controllo degli errori di runtime](../../c-runtime-library/run-time-error-checking.md)<br/>
