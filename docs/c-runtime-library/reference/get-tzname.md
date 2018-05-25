---
title: _get_tzname | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _get_tzname
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
- _get_tzname
- get_tzname
dev_langs:
- C++
helpviewer_keywords:
- _get_tzname function
- time zones
- get_tzname function
ms.assetid: df0065ff-095f-4237-832c-2fe9ab913875
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a4b49aa404dda6234382ae461459dece64e5996d
ms.sourcegitcommit: 6e3cf8df676d59119ce88bf5321d063cf479108c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/22/2018
---
# <a name="gettzname"></a>_get_tzname

Recupera la rappresentazione in forma di stringa di caratteri del nome del fuso orario o del nome del fuso orario dell'ora legale.

## <a name="syntax"></a>Sintassi

```C
errno_t _get_tzname(
    size_t* pReturnValue,
    char* timeZoneName,
    size_t sizeInBytes,
    int index
);
```

### <a name="parameters"></a>Parametri

*pReturnValue*<br/>
La lunghezza della stringa *timeZoneName* incluso un terminatore null.

*timeZoneName*<br/>
L'indirizzo di una stringa di caratteri per rappresentare il nome del fuso orario o il nome della zona ora solare legale (DST), a seconda *indice*.

*sizeInBytes*<br/>
Le dimensioni del *timeZoneName* stringa in byte di caratteri.

*index*<br/>
Indice di uno dei due nomi di fuso orario da recuperare.

## <a name="return-value"></a>Valore restituito

Zero se ha esito positivo, in caso contrario, un **errno** tipo valore.

Se entrambi *timeZoneName* viene **NULL**, o *sizeInBytes* è uguale a zero o inferiore a zero (ma non entrambi), viene richiamato un gestore di parametri non validi, come descritto in [ Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta **errno** alla **EINVAL** e restituisce **EINVAL**.

### <a name="error-conditions"></a>Condizioni di errore

|*pReturnValue*|*timeZoneName*|*sizeInBytes*|*index*|Valore restituito|Contenuto di *timeZoneName*|
|--------------------|--------------------|-------------------|-------------|------------------|--------------------------------|
|Dimensioni del nome del fuso orario|**NULL**|0|0 o 1|0|non modificato|
|Dimensioni del nome del fuso orario|qualsiasi|> 0|0 o 1|0|Nome del fuso orario|
|non modificato|**NULL**|> 0|qualsiasi|**EINVAL**|non modificato|
|non modificato|qualsiasi|zero|qualsiasi|**EINVAL**|non modificato|
|non modificato|qualsiasi|> 0|> 1|**EINVAL**|non modificato|

## <a name="remarks"></a>Note

Il **get_tzname** funzione recupera la rappresentazione di stringa di caratteri del nome del fuso orario o il nome della zona ora solare legale (DST) nell'indirizzo di *timeZoneName* a seconda dell'indice valore, insieme alla dimensione della stringa in *pReturnValue*. Se *timeZoneName* viene **NULL** e *sizeInBytes* è zero, solo la dimensione della stringa di una volta zona in byte viene restituito in *pReturnValue*. I valori index devono essere 0 per il fuso orario standard o 1 per il fuso orario dell'ora legale. Per qualsiasi altro valore di index i risultati saranno indeterminati.

### <a name="index-values"></a>Valori di index

|*index*|Contenuto di *timeZoneName*|*timeZoneName* il valore predefinito|
|-------------|--------------------------------|----------------------------------|
|0|Nome del fuso orario|"PST"|
|1|Nome del fuso orario dell'ora legale|"PDT"|
|> 1 o < 0|**errno** impostato su **EINVAL**|non modificato|

A meno che i valori non vengano modificati in modo esplicito in fase di esecuzione, i valori predefiniti sono rispettivamente "PST" e "PDT".  Le dimensioni di queste matrici di caratteri sono gestite dai **TZNAME_MAX** valore.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_get_tzname**|\<time.h>|

Per altre informazioni, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Gestione dell'ora](../../c-runtime-library/time-management.md)<br/>
[errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)<br/>
[_get_daylight](get-daylight.md)<br/>
[_get_dstbias](get-dstbias.md)<br/>
[_get_timezone](get-timezone.md)<br/>
[TZNAME_MAX](../../c-runtime-library/tzname-max.md)<br/>
