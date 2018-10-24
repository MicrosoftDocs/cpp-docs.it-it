---
title: _get_tzname | Microsoft Docs
ms.custom: ''
ms.date: 10/22/2018
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
ms.openlocfilehash: d773d5d98466963ef621cc3fa7bc5ab8b4acc40a
ms.sourcegitcommit: c045c3a7e9f2c7e3e0de5b7f9513e41d8b6d19b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2018
ms.locfileid: "49990308"
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
La lunghezza della stringa *timeZoneName* incluso un carattere di terminazione null.

*timeZoneName*<br/>
L'indirizzo di una stringa di caratteri per la rappresentazione del nome del fuso orario o il nome del fuso orario ora legale (DST), a seconda *indice*.

*sizeInBytes*<br/>
Le dimensioni dei *timeZoneName* stringa in byte di caratteri.

*index*<br/>
Indice di uno dei due nomi di fuso orario da recuperare.

|*index*|Contenuto di *timeZoneName*|*timeZoneName* il valore predefinito|
|-|-|-|
|0|Nome del fuso orario|"PST"|
|1|Nome del fuso orario dell'ora legale|"PDT"|
|> 1 o < 0|**errno** impostato su **EINVAL**|non modificato|

A meno che i valori non vengano modificati in modo esplicito in fase di esecuzione, i valori predefiniti sono rispettivamente "PST" e "PDT".

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo, in caso contrario, un **errno** tipo valore.

Se uno dei due *timeZoneName* viene **NULL**, o *sizeInBytes* è uguale a zero o minore di zero (ma non entrambi), viene richiamato un gestore di parametri non validi, come descritto in [ Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta **errno** al **EINVAL** e restituisce **EINVAL**.

### <a name="error-conditions"></a>Condizioni di errore

|*pReturnValue*|*timeZoneName*|*sizeInBytes*|*index*|Valore restituito|Contenuto di *timeZoneName*|
|--------------------|--------------------|-------------------|-------------|------------------|--------------------------------|
|Dimensioni del nome del fuso orario|**NULL**|0|0 o 1|0|non modificato|
|Dimensioni del nome del fuso orario|qualsiasi|> 0|0 o 1|0|Nome del fuso orario|
|non modificato|**NULL**|> 0|qualsiasi|**EINVAL**|non modificato|
|non modificato|qualsiasi|zero|qualsiasi|**EINVAL**|non modificato|
|non modificato|qualsiasi|> 0|> 1|**EINVAL**|non modificato|

## <a name="remarks"></a>Note

Il **get_tzname** funzione recupera la rappresentazione di stringa di caratteri del nome del fuso orario corrente o il nome del fuso orario ora legale (DST) nell'indirizzo di *timeZoneName* a seconda di valore, insieme alle dimensioni della stringa nell'indice *pReturnValue*. Se *timeZoneName* viene **NULL** e *sizeInBytes* è zero, le dimensioni della stringa deve contenere il fuso orario specificato e un carattere di terminazione null in byte viene restituito nel *pReturnValue*. I valori di indice devono essere 0 per il fuso orario standard o 1 per l'ora legale fuso orario ora solare; qualsiasi altro valore di *indice* hanno risultati saranno indeterminati.

## <a name="example"></a>Esempio

Questo esempio viene chiamato **get_tzname** per ottenere la dimensione del buffer necessarie per visualizzare il nome del fuso orario ora legale corrente, alloca un buffer della dimensione, le chiamate **get_tzname** nuovamente a caricare il nome di nel buffer e lo stampa nella console.

```C
// crt_get_tzname.c
// Compile by using: cl /W4 crt_get_tzname.c
#include <stdio.h>
#include <time.h>
#include <malloc.h>

enum TZINDEX {
    STD,
    DST
};

int main()
{
    size_t tznameSize = 0;
    char * tznameBuffer = NULL;

    // Get the size of buffer required to hold DST time zone name
    if (_get_tzname(&tznameSize, NULL, 0, DST))
        return 1;    // Return an error value if it failed

    // Allocate a buffer for the name
    if (NULL == (tznameBuffer = (char *)(malloc(tznameSize))))
        return 2;    // Return an error value if it failed

    // Load the name in the buffer
    if (_get_tzname(&tznameSize, tznameBuffer, tznameSize, DST))
        return 3;    // Return an error value if it failed

    printf_s("The current Daylight standard time zone name is %s.\n", tznameBuffer);
    return 0;
}
```

### <a name="output"></a>Output

```Output
The current Daylight standard time zone name is PDT.
```

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
