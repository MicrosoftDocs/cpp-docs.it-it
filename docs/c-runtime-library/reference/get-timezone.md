---
title: _get_timezone | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _get_timezone
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
- api-ms-win-crt-time-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _get_timezone
- get_timezone
dev_langs:
- C++
helpviewer_keywords:
- time zones
- get_timezone function
- _get_timezone function
ms.assetid: 30ab0838-0ae9-4a2f-bfe6-a49ee443b21e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 111cbff00d1f6119fbd806cc5fc3d14c28a7d7c1
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="gettimezone"></a>_get_timezone

Recupera la differenza in secondi tra l'ora UTC (Universal Coordinated Time) e l'ora locale.

## <a name="syntax"></a>Sintassi

```C
error_t _get_timezone(
    long* seconds
);
```

### <a name="parameters"></a>Parametri

*Secondi*<br/>
La differenza in secondi tra l'ora UTC e l'ora locale.

## <a name="return-value"></a>Valore restituito

Zero se ha esito positivo oppure un **errno** valore se si verifica un errore.

## <a name="remarks"></a>Note

Il **get_timezone** funzione recupera la differenza in secondi tra l'ora UTC e l'ora locale come valore integer. Il valore predefinito è 28.800 secondi per l'ora solare Pacifico (otto ore in meno rispetto all'ora UTC).

Se *secondi* viene **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta **errno** alla **EINVAL** e restituisce **EINVAL**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_get_timezone**|\<time.h>|

Per altre informazioni, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Gestione dell'ora](../../c-runtime-library/time-management.md)<br/>
[errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)<br/>
[_get_daylight](get-daylight.md)<br/>
[_get_dstbias](get-dstbias.md)<br/>
[_get_tzname](get-tzname.md)<br/>
