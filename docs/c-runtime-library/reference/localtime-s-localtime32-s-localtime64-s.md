---
description: 'Altre informazioni su: localtime_s, _localtime32_s, _localtime64_s'
title: localtime_s, _localtime32_s, _localtime64_s
ms.date: 4/2/2020
api_name:
- _localtime64_s
- _localtime32_s
- localtime_s
- _o__localtime32_s
- _o__localtime64_s
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
- _localtime32_s
- localtime32_s
- localtime_s
- localtime64_s
- _localtime64_s
helpviewer_keywords:
- _localtime64_s function
- localtime32_s function
- _localtime32_s function
- localtime64_s function
- time, converting values
- localtime_s function
ms.assetid: 842d1dc7-d6f8-41d3-b340-108d4b90df54
ms.openlocfilehash: 856ab5610d176e3a5b2b928bda36154dd071fea5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97198817"
---
# <a name="localtime_s-_localtime32_s-_localtime64_s"></a>localtime_s, _localtime32_s, _localtime64_s

Converte un valore di **time_t** ora in una struttura **TM** e corregge il fuso orario locale. Queste sono versioni di [localtime, _localtime32, _localtime64](localtime-localtime32-localtime64.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t localtime_s(
   struct tm* const tmDest,
   time_t const* const sourceTime
);
errno_t _localtime32_s(
   struct tm* tmDest,
   __time32_t const* sourceTime
);
errno_t _localtime64_s(
   struct tm* tmDest,
   __time64_t const* sourceTime
);
```

### <a name="parameters"></a>Parametri

*tmDest*<br/>
Puntatore alla struttura dell'ora da compilare.

*sourceTime*<br/>
Puntatore all'ora archiviata.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo. Il valore restituito è un codice di errore se si verifica un errore. I codici di errore sono definiti in Errno.h. Per un elenco di questi errori, vedere [errno](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

### <a name="error-conditions"></a>Condizioni di errore

|*tmDest*|*sourceTime*|Valore restituito|Valore in *tmDest*|Richiama il gestore di parametri non validi|
|-----------|------------|------------------|--------------------|---------------------------------------|
|**NULL**|any|**EINVAL**|Non modificato|Sì|
|Not **null** (punta alla memoria valida)|**NULL**|**EINVAL**|Tutti i campi impostati su -1|Sì|
|Not **null** (punta alla memoria valida)|minore di 0 o maggiore di **_MAX__TIME64_T**|**EINVAL**|Tutti i campi impostati su -1|No|

Nel caso delle prime due condizioni di errore viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** su **EINVAL** e restituiscono **EINVAL**.

## <a name="remarks"></a>Commenti

La funzione **localtime_s** converte un'ora archiviata come valore [time_t](../../c-runtime-library/standard-types.md) e archivia il risultato in una struttura di tipo [TM](../../c-runtime-library/standard-types.md). Il  valore time_t *sourceTime* rappresenta i secondi trascorsi dalla mezzanotte (00:00:00) del 1 gennaio 1970, UTC. Questo valore viene in genere ottenuto dalla funzione [Time](time-time32-time64.md) .

**localtime_s** corregge il fuso orario locale se l'utente imposta prima la variabile di ambiente globale **TZ**. Quando **TZ** è impostato, vengono impostate automaticamente anche altre tre variabili di ambiente (**_timezone**, **_daylight** e **_tzname**). Se la variabile **TZ** non è impostata, **localtime_s** tenta di usare le informazioni sul fuso orario specificate nell'applicazione data/ora nel pannello di controllo. Se non è possibile ottenere queste informazioni, viene usato il valore PST8PDT per impostazione predefinita, che indica il fuso orario Pacifico (Stati Uniti). Vedere [_tzset](tzset.md) per una descrizione di queste variabili. **TZ** è un'estensione Microsoft e non fa parte della definizione standard ANSI di **localtime**.

> [!NOTE]
> L'ambiente di destinazione deve provare a determinare se è in vigore l'ora legale.

**_localtime64_s**, che usa la struttura **__time64_t** , consente di esprimere le date fino a 23:59:59, 18 gennaio 3001, UTC (Coordinated Universal time), mentre **_localtime32_s** rappresenta le date fino al 23:59:59 18 gennaio 2038, UTC.

**localtime_s** è una funzione inline che restituisce **_localtime64_s** e **time_t** equivale a **__time64_t**. Se è necessario forzare il compilatore a interpretare **time_t** come la precedente **time_t** a 32 bit, è possibile definire **_USE_32BIT_TIME_T**. In questo modo **localtime_s** restituirà **_localtime32_s**. Questa operazione non è consigliabile perché potrebbero verificarsi errori per l'applicazione dopo il 18 gennaio 2038 e l'uso non è consentito in piattaforme a 64 bit.

I campi del tipo di struttura [TM](../../c-runtime-library/standard-types.md) archiviano i valori seguenti, ognuno dei quali è un **`int`** .

|Campo|Description|
|-|-|
|**tm_sec**|Secondi dopo il minuto (0-59).|
|**tm_min**|Minuti dopo l'ora (0-59).|
|**tm_hour**|Ore dalla mezzanotte (0-23).|
|**tm_mday**|Giorno del mese (1-31).|
|**tm_mon**|Mese (0-11; Gennaio = 0).|
|**tm_year**|Anno (anno corrente meno 1900).|
|**tm_wday**|Giorno della settimana (0-6; Domenica = 0).|
|**tm_yday**|Giorno dell'anno (0-365; 1 gennaio = 0).|
|**tm_isdst**|Valore positivo se è in vigore l'ora legale. 0 se l'ora legale non è in vigore. Valore negativo se lo stato dell'ora legale è sconosciuto.|

Se la variabile di ambiente **TZ** è impostata, la libreria di runtime C presuppone le regole appropriate per l'Stati Uniti per l'implementazione del calcolo dell'ora legale (DST).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione C obbligatoria|Intestazione C++ obbligatoria|
|-------------|---------------------|-|
|**localtime_s**, **_localtime32_s**, **_localtime64_s**|\<time.h>|\<ctime> o \<time.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_localtime_s.c
// This program uses _time64 to get the current time
// and then uses _localtime64_s() to convert this time to a structure
// representing the local time. The program converts the result
// from a 24-hour clock to a 12-hour clock and determines the
// proper extension (AM or PM).

#include <stdio.h>
#include <string.h>
#include <time.h>

int main( void )
{
    struct tm newtime;
    char am_pm[] = "AM";
    __time64_t long_time;
    char timebuf[26];
    errno_t err;

    // Get time as 64-bit integer.
    _time64( &long_time );
    // Convert to local time.
    err = _localtime64_s( &newtime, &long_time );
    if (err)
    {
        printf("Invalid argument to _localtime64_s.");
        exit(1);
    }
    if( newtime.tm_hour > 12 )        // Set up extension.
        strcpy_s( am_pm, sizeof(am_pm), "PM" );
    if( newtime.tm_hour > 12 )        // Convert from 24-hour
        newtime.tm_hour -= 12;        // to 12-hour clock.
    if( newtime.tm_hour == 0 )        // Set hour to 12 if midnight.
        newtime.tm_hour = 12;

    // Convert to an ASCII representation.
    err = asctime_s(timebuf, 26, &newtime);
    if (err)
    {
        printf("Invalid argument to asctime_s.");
        exit(1);
    }
    printf( "%.19s %s\n", timebuf, am_pm );
}
```

```Output
Fri Apr 25 01:19:27 PM
```

## <a name="see-also"></a>Vedere anche

[Gestione del tempo](../../c-runtime-library/time-management.md)<br/>
[asctime_s, _wasctime_s](asctime-s-wasctime-s.md)<br/>
[ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)<br/>
[_ftime, _ftime32, _ftime64](ftime-ftime32-ftime64.md)<br/>
[gmtime_s, _gmtime32_s, _gmtime64_s](gmtime-s-gmtime32-s-gmtime64-s.md)<br/>
[localtime, _localtime32, _localtime64](localtime-localtime32-localtime64.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
[_tzset](tzset.md)<br/>
