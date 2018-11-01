---
title: _strtime_s, _wstrtime_s
ms.date: 11/04/2016
apiname:
- _wstrtime_s
- _strtime_s
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
- _wstrtime_s
- strtime_s
- wstrtime_s
- _strtime_s
helpviewer_keywords:
- wstrtime_s function
- copying time to buffers
- strtime_s function
- _wstrtime_s function
- time, copying
- _strtime_s function
ms.assetid: 42acf013-c334-485d-b610-84c0af8a46ec
ms.openlocfilehash: 579c4a99b52c66bd14cea947eaa1f301cc1127e1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50642364"
---
# <a name="strtimes-wstrtimes"></a>_strtime_s, _wstrtime_s

Copia l'ora corrente in un buffer. Queste sono versioni di [_strtime, _wstrtime](strtime-wstrtime.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t _strtime_s(
   char *buffer,
   size_t numberOfElements
);
errno_t _wstrtime_s(
   wchar_t *buffer,
   size_t numberOfElements
);
template <size_t size>
errno_t _strtime_s(
   char (&buffer)[size]
); // C++ only
template <size_t size>
errno_t _wstrtime_s(
   wchar_t (&buffer)[size]
); // C++ only
```

### <a name="parameters"></a>Parametri

*buffer*<br/>
Buffer con una lunghezza di almeno 10 byte in cui verrà scritta l'ora.

*numberOfElements*<br/>
Dimensione del buffer.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo.

Se si verifica una condizione di errore, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Il valore restituito è un codice di errore se si verifica un errore. I codici di errore sono definiti in ERRNO.H. Vedere la tabella seguente per gli errori esatti generati da questa funzione. Per altre informazioni sui codici di errore, vedere [Costanti errno](../../c-runtime-library/errno-constants.md).

### <a name="error-conditions"></a>Condizioni di errore

|*buffer*|*numberOfElements*|INVIO|Contenuto di *buffer*|
|--------------|------------------------|------------|--------------------------|
|**NULL**|(qualsiasi)|**EINVAL**|Non modificato|
|Non **NULL** (che punta a un buffer valido)|0|**EINVAL**|Non modificato|
|Non **NULL** (che punta a un buffer valido)|0 < dimensioni < 9|**EINVAL**|Stringa vuota|
|Non **NULL** (che punta a un buffer valido)|Dimensioni > 9|0|Ora corrente, formattata come specificato nella sezione Note|

## <a name="security-issues"></a>Problemi relativi alla sicurezza

Passando un valore non valido non -**NULL** valore per il buffer causerà una violazione di accesso se il *numberOfElements* parametro è maggiore di 9.

Passaggio di un valore per *numberOfElements* maggiore determinerà le dimensioni effettive del buffer di sovraccarico del buffer.

## <a name="remarks"></a>Note

Queste funzioni forniscono versioni più sicure di [strtime](strtime-wstrtime.md) e [wstrtime](strtime-wstrtime.md). Il **strtime_s** funzione di copia l'ora locale corrente nel buffer a cui punta *timestr*. L'ora è formattata come **hh.mm.ss** in cui **hh** corrisponde a due cifre che rappresenta l'ora nella notazione 24 ore, **mm** sono due cifre che rappresentano i minuti trascorsi dopo l'ora e i **ss** corrisponde a due cifre che rappresentano i secondi. Ad esempio, la stringa **18:23:44** rappresenta 23 minuti e 44 secondi dopo i 6 PM Il buffer deve avere una lunghezza di almeno 9 byte. Le dimensioni effettive sono specificate dal secondo parametro.

**wstrtime** è una versione a caratteri wide di **strtime**; l'argomento e il valore restituito **wstrtime** sono stringhe a caratteri wide. A parte ciò, queste funzioni si comportano in modo identico.

In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

### <a name="generic-text-routine-mapping"></a>Mapping di routine di testo generico:

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tstrtime_s**|**_strtime_s**|**_strtime_s**|**_wstrtime_s**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_strtime_s**|\<time.h>|
|**_wstrtime_s**|\<time.h> or \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// strtime_s.c

#include <time.h>
#include <stdio.h>

int main()
{
    char tmpbuf[9];
    errno_t err;

    // Set time zone from TZ environment variable. If TZ is not set,
    // the operating system is queried to obtain the default value
    // for the variable.
    //
    _tzset();

    // Display operating system-style date and time.
    err = _strtime_s( tmpbuf, 9 );
    if (err)
    {
       printf("_strdate_s failed due to an invalid argument.");
      exit(1);
    }
    printf( "OS time:\t\t\t\t%s\n", tmpbuf );
    err = _strdate_s( tmpbuf, 9 );
    if (err)
    {
       printf("_strdate_s failed due to an invalid argument.");
       exit(1);
    }
    printf( "OS date:\t\t\t\t%s\n", tmpbuf );

}
```

```Output
OS time:            14:37:49
OS date:            04/25/03
```

## <a name="see-also"></a>Vedere anche

[Gestione dell'ora](../../c-runtime-library/time-management.md)<br/>
[asctime_s, _wasctime_s](asctime-s-wasctime-s.md)<br/>
[ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s](ctime-s-ctime32-s-ctime64-s-wctime-s-wctime32-s-wctime64-s.md)<br/>
[gmtime_s, _gmtime32_s, _gmtime64_s](gmtime-s-gmtime32-s-gmtime64-s.md)<br/>
[localtime_s, _localtime32_s, _localtime64_s](localtime-s-localtime32-s-localtime64-s.md)<br/>
[mktime, _mktime32, _mktime64](mktime-mktime32-mktime64.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
[_tzset](tzset.md)<br/>
