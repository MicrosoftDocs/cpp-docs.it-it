---
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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: 50f1f6e4320e3ef905b4eda67ba1d458a5b1df08
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81344881"
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

*pReturnValue (Valore restituito)*<br/>
Lunghezza della stringa di *time-oneName* che include un carattere di terminazione null.

*Nome fuso orario*<br/>
L'indirizzo di una stringa di caratteri per la rappresentazione del nome del fuso orario o del nome del fuso orario (DST) dell'ora legale, a seconda *dell'indice*.

*sizeInBytes*<br/>
Dimensione della stringa di caratteri *time-oneName* in byte.

*Indice*<br/>
Indice di uno dei due nomi di fuso orario da recuperare.

|*Indice*|Contenuto *dell'oggetto time-oneName*|Valore predefinito *di time-oneName*|
|-|-|-|
|0|Nome del fuso orario|"PST"|
|1|Nome del fuso orario dell'ora legale|"PDT"|
|> 1 o < 0|**errno** impostato su **EINVAL**|non modificato|

A meno che i valori non vengano modificati in modo esplicito in fase di esecuzione, i valori predefiniti sono rispettivamente "PST" e "PDT".

## <a name="return-value"></a>Valore restituito

zero se ha esito positivo, in caso contrario un valore di tipo **errno.**

Se uno dei *valori time-oneName* è **NULL**o *sizeInBytes* è zero o minore di zero (ma non di entrambi), viene richiamato un gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione imposta **errno** su **EINVAL** e restituisce **EINVAL**.

### <a name="error-conditions"></a>Condizioni di errore

|*pReturnValue (Valore restituito)*|*Nome fuso orario*|*sizeInBytes*|*Indice*|Valore restituito|Contenuto *dell'oggetto time-oneName*|
|--------------------|--------------------|-------------------|-------------|------------------|--------------------------------|
|Dimensioni del nome del fuso orario|**Null**|0|0 o 1|0|non modificato|
|Dimensioni del nome del fuso orario|any|> 0|0 o 1|0|Nome del fuso orario|
|non modificato|**Null**|> 0|any|**Einval**|non modificato|
|non modificato|any|zero|any|**Einval**|non modificato|
|non modificato|any|> 0|> 1|**Einval**|non modificato|

## <a name="remarks"></a>Osservazioni

La funzione **_get_tzname** recupera la rappresentazione di stringa di caratteri del nome del fuso orario corrente o del nome del fuso orario standard (DST) dell'ora legale nell'indirizzo di *time-oneName* a seconda del valore di indice, insieme alla dimensione della stringa in *pReturnValue*. Se *time-oneName* è **NULL** e *sizeInBytes* è zero, la dimensione della stringa necessaria per contenere il fuso orario specificato e un valore null di terminazione in byte viene restituito in *pReturnValue*. I valori di indice devono essere 0 per il fuso orario standard o 1 per il fuso orario standard dell'ora legale. qualsiasi altro valore di *indice* ha risultati indeterminati.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="example"></a>Esempio

In questo esempio **viene chiamato _get_tzname** ottenere la dimensione del buffer necessaria per visualizzare il nome del fuso orario standard di Daylight corrente, alloca un buffer di tale dimensione, chiama _get_tzname di **nuovo** per caricare il nome nel buffer e lo stampa nella console.

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

## <a name="see-also"></a>Vedere anche

[Gestione del tempo](../../c-runtime-library/time-management.md)<br/>
[errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)<br/>
[_get_daylight](get-daylight.md)<br/>
[_get_dstbias](get-dstbias.md)<br/>
[_get_timezone](get-timezone.md)<br/>
