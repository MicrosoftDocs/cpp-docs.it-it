---
description: 'Altre informazioni su: _get_tzname'
title: _get_tzname
ms.date: 4/2/2020
api_name:
- _get_tzname
- _o__get_tzname
api_location:
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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _get_tzname
- get_tzname
helpviewer_keywords:
- _get_tzname function
- time zones
- get_tzname function
ms.assetid: df0065ff-095f-4237-832c-2fe9ab913875
ms.openlocfilehash: b98a068d6f2d2643df43078c5a274fd761ac8e95
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97338956"
---
# <a name="_get_tzname"></a>_get_tzname

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
Lunghezza della stringa di *timeZoneName* che include un carattere di terminazione null.

*timeZoneName*<br/>
Indirizzo di una stringa di caratteri per la rappresentazione del nome del fuso orario o del nome del fuso orario dell'ora legale (DST), a seconda dell' *Indice*.

*sizeInBytes*<br/>
Dimensioni in byte della stringa di caratteri *timeZoneName* .

*index*<br/>
Indice di uno dei due nomi di fuso orario da recuperare.

|*index*|Contenuto di *timeZoneName*|*timeZoneName* (valore predefinito)|
|-|-|-|
|0|Nome del fuso orario|"PST"|
|1|Nome del fuso orario dell'ora legale|"PDT"|
|> 1 o < 0|**errno** impostato su **EINVAL**|non modificato|

A meno che i valori non vengano modificati in modo esplicito in fase di esecuzione, i valori predefiniti sono rispettivamente "PST" e "PDT".

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo, in caso contrario un valore di tipo **errno** .

Se *timeZoneName* è **null** o *sizeInBytes* è zero o minore di zero (ma non entrambi), viene richiamato un gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione imposta **errno** su **EINVAL** e restituisce **EINVAL**.

### <a name="error-conditions"></a>Condizioni di errore

|*pReturnValue*|*timeZoneName*|*sizeInBytes*|*index*|Valore restituito|Contenuto di *timeZoneName*|
|--------------------|--------------------|-------------------|-------------|------------------|--------------------------------|
|Dimensioni del nome del fuso orario|**NULL**|0|0 o 1|0|non modificato|
|Dimensioni del nome del fuso orario|any|> 0|0 o 1|0|Nome del fuso orario|
|non modificato|**NULL**|> 0|any|**EINVAL**|non modificato|
|non modificato|any|zero|any|**EINVAL**|non modificato|
|non modificato|any|> 0|> 1|**EINVAL**|non modificato|

## <a name="remarks"></a>Commenti

La funzione **_get_tzname** recupera la rappresentazione in forma di stringa di caratteri del nome del fuso orario corrente o del nome del fuso orario dell'ora legale (DST) nell'indirizzo di *timeZoneName* , a seconda del valore di indice, insieme alle dimensioni della stringa in *pReturnValue*. Se *timeZoneName* è **null** e *sizeInBytes* è zero, la dimensione della stringa necessaria per conservare il fuso orario specificato e un null di terminazione in byte viene restituita in *pReturnValue*. I valori di indice devono essere 0 per il fuso orario standard o 1 per il fuso orario dell'ora legale; tutti gli altri valori dell' *Indice* hanno risultati indeterminati.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="example"></a>Esempio

In questo esempio viene chiamato **_get_tzname** per ottenere la dimensione del buffer richiesta per visualizzare il nome del fuso orario dell'ora legale corrente, allocare un buffer di tale dimensione, chiamare di nuovo **_get_tzname** per caricare il nome nel buffer e stamparlo nella console.

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

Per altre informazioni, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[Gestione del tempo](../../c-runtime-library/time-management.md)<br/>
[errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)<br/>
[_get_daylight](get-daylight.md)<br/>
[_get_dstbias](get-dstbias.md)<br/>
[_get_timezone](get-timezone.md)<br/>
