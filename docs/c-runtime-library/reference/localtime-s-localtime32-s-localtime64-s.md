---
title: localtime_s, _localtime32_s, _localtime64_s | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _localtime64_s
- _localtime32_s
- localtime_s
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
- _localtime32_s
- localtime32_s
- localtime_s
- localtime64_s
- _localtime64_s
dev_langs:
- C++
helpviewer_keywords:
- _localtime64_s function
- localtime32_s function
- _localtime32_s function
- localtime64_s function
- time, converting values
- localtime_s function
ms.assetid: 842d1dc7-d6f8-41d3-b340-108d4b90df54
caps.latest.revision: 23
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a4ebb496e0d3c98a27799c55245a59af66518198
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="localtimes-localtime32s-localtime64s"></a>localtime_s, _localtime32_s, _localtime64_s

Converte un **time_t** tempo valore a un **tm** struttura e corregge per il fuso orario locale. Queste sono versioni di [localtime, _localtime32, _localtime64](localtime-localtime32-localtime64.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t localtime_s(
   struct tm* tmDest,
   const time_t *sourceTime
);
errno_t _localtime32_s(
   struct tm* tmDest,
   const time32_t *sourceTime
);
errno_t _localtime64_s(
   struct tm* tmDest,
   const _time64_t *sourceTime
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

|*tmDest*|*sourceTime*|Valore restituito|Valore *tmDest*|Richiama il gestore di parametri non validi|
|-----------|------------|------------------|--------------------|---------------------------------------|
|**NULL**|qualsiasi|**EINVAL**|Non modificato|Yes|
|Non **NULL** (punta a valide per la memoria)|**NULL**|**EINVAL**|Tutti i campi impostati su -1|Yes|
|Non **NULL** (punta a valide per la memoria)|minore di 0 o maggiore di **_MAX__TIME64_T**|**EINVAL**|Tutti i campi impostati su -1|No|

Nel caso delle prime due condizioni di errore viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** alla **EINVAL** e restituire **EINVAL**.

## <a name="remarks"></a>Note

Il **_localtime32_s** funzione converte un'ora archiviata come una [time_t](../../c-runtime-library/standard-types.md) valore e archivia il risultato in una struttura di tipo [tm](../../c-runtime-library/standard-types.md). Il **lungo** valore *sourceTime* rappresenta i secondi trascorsi dalla mezzanotte (00: 00:00), 1 ° gennaio 1970, UTC. Questo valore viene in genere ottenuto dal [ora](time-time32-time64.md) (funzione).

**_localtime32_s** corregge per il fuso orario locale se l'utente imposta prima la variabile di ambiente globali **TZ**. Quando si **TZ** è impostata, tre altre variabili di ambiente (**TimeZone**, **Daylight**, e **tzname**) vengono impostati automaticamente anche. Se il **TZ** variabile non è impostata, **localtime32_s** tenta di usare le informazioni sul fuso orario specificati nell'applicazione Data/ora nel Pannello di controllo. Se non è possibile ottenere queste informazioni, viene usato il valore PST8PDT per impostazione predefinita, che indica il fuso orario Pacifico (Stati Uniti). Vedere [_tzset](tzset.md) per una descrizione di queste variabili. **Fuso orario** è un'estensione Microsoft e non fa parte della definizione dello standard ANSI del **localtime**.

> [!NOTE]
> L'ambiente di destinazione deve provare a determinare se è in vigore l'ora legale.

**_localtime64_s**, che usa la **__time64_t** struttura, consente date relativamente a 23:59:59, 18 gennaio 3001, ora UTC (coordinated universal time), mentre **_localtime32_s** rappresenta le date a 23:59:59 18 gennaio 2038, ore UTC.

**localtime_s** è una funzione inline che restituisce **_localtime64_s**, e **time_t** equivale a **__time64_t**. Se è necessario forzare il compilatore a interpretare **time_t** come precedente 32 bit **time_t**, è possibile definire **_USE_32BIT_TIME_T**. Questo determinerebbe **localtime_s** restituisca **_localtime32_s**. Questa operazione non è consigliabile perché potrebbero verificarsi errori per l'applicazione dopo il 18 gennaio 2038 e l'uso non è consentito in piattaforme a 64 bit.

I campi del tipo di struttura [tm](../../c-runtime-library/standard-types.md) archiviare i valori seguenti, ognuno dei quali è un **int**.

|Campo|Descrizione|
|-|-|
|**tm_sec**|Secondi dopo minuto (0 - 59).|
|**tm_min**|Minuti dopo l'ora (0 - 59).|
|**tm_hour**|Ore da mezzanotte (0 - 23).|
|**tm_mday**|Giorno del mese (1-31).|
|**tm_mon**|Mese (0 - 11; Gennaio = 0).|
|**tm_year**|Anno (anno corrente meno 1900).|
|**tm_wday**|Giorno della settimana (0 - 6. Domenica = 0).|
|**tm_yday**|Giorno dell'anno (0 - 365; Il 1 ° gennaio = 0).|
|**tm_isdst**|Valore positivo se è in vigore l'ora legale. 0 se l'ora legale non è in vigore. Valore negativo se lo stato dell'ora legale è sconosciuto.|

Se il **TZ** variabile di ambiente viene impostata, la libreria di run-time di C si presuppone che le regole appropriate negli Stati Uniti per implementare il calcolo dell'ora legale (DST).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione C obbligatoria|Intestazione C++ obbligatoria|
|-------------|---------------------|-|
|**localtime_s**, **_localtime32_s**, **_localtime64_s**|\<time.h>|\<CTime > o \<Time. h >|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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

[Gestione dell'ora](../../c-runtime-library/time-management.md)<br/>
[asctime_s, _wasctime_s](asctime-s-wasctime-s.md)<br/>
[ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)<br/>
[_ftime, _ftime32, _ftime64](ftime-ftime32-ftime64.md)<br/>
[gmtime_s, _gmtime32_s, _gmtime64_s](gmtime-s-gmtime32-s-gmtime64-s.md)<br/>
[localtime, _localtime32, _localtime64](localtime-localtime32-localtime64.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
[_tzset](tzset.md)<br/>
