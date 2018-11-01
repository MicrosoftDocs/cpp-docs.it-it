---
title: localtime, _localtime32, _localtime64
ms.date: 11/04/2016
apiname:
- _localtime64
- _localtime32
- localtime
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
- localtime64
- _localtime64
- localtime32
- localtime
- _localtime32
helpviewer_keywords:
- localtime32 function
- _localtime32 function
- _localtime64 function
- localtime64 function
- localtime function
- time, converting values
ms.assetid: 4260ec3d-43ee-4538-b998-402a282bb9b8
ms.openlocfilehash: d34a45ff20cb74d61a8eb189282bfdce4d8954ae
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50629970"
---
# <a name="localtime-localtime32-localtime64"></a>localtime, _localtime32, _localtime64

Converte un valore di ora e lo corregge per il fuso orario locale. Sono disponibili versioni più sicure di queste funzioni. Vedere [localtime_s, _localtime32_s, _localtime64_s](localtime-s-localtime32-s-localtime64-s.md).

## <a name="syntax"></a>Sintassi

```C
struct tm *localtime( const time_t *sourceTime );
struct tm *_localtime32( const __time32_t *sourceTime );
struct tm *_localtime64( const __time64_t *sourceTime );
```

### <a name="parameters"></a>Parametri

*sourceTime*<br/>
Puntatore all'ora archiviata.

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore al risultato della struttura, o **NULL** se la data passata alla funzione è:

- Prima di mezzanotte dell'1 gennaio 1970.

- Dopo aver 03:14:07, 19 gennaio 2038, UTC (tramite **_time32** e **time32_t**).

- Dopo il 23:59:59, 31 dicembre 3000, UTC (tramite **_time64** e **__time64_t**).

**_localtime64**, che usa la **__time64_t** struttura, consente di esprimere backup tramite 23:59:59, 31 dicembre 3000, UTC (UTC), le date mentre **_localtime32** rappresenta le date fino: 23.59.59 del 18 gennaio 2038, UTC.

**LocalTime** è una funzione inline equivalente a **_localtime64**, e **time_t** equivale a **__time64_t**. Se è necessario forzare il compilatore a interpretare **time_t** come il vecchio 32 bit **time_t**, è possibile definire **_USE_32BIT_TIME_T**. In questo modo **localtime** restituisca **_localtime32**. Questa operazione non è consigliabile perché potrebbero verificarsi errori per l'applicazione dopo il 18 gennaio 2038 e l'uso non è consentito in piattaforme a 64 bit.

I campi del tipo di struttura [tm](../../c-runtime-library/standard-types.md) archiviano i valori seguenti, ognuno dei quali è un **int**:

|Campo|Descrizione|
|-|-|
|**tm_sec**|Secondi dopo il minuto (0 - 59).|
|**tm_min**|Minuti dopo l'ora (0 - 59).|
|**tm_hour**|Ore dalla mezzanotte (0 - 23).|
|**tm_mday**|Giorno del mese (1-31).|
|**tm_mon**|Mese (0 - 11; Gennaio = 0).|
|**tm_year**|Anno (anno corrente meno 1900).|
|**tm_wday**|Giorno della settimana (0 - 6; Domenica = 0).|
|**tm_yday**|Giorno dell'anno (0 - 365; Il 1 ° gennaio = 0).|
|**tm_isdst**|Valore positivo se è in vigore l'ora legale. 0 se l'ora legale non è in vigore. Valore negativo se lo stato dell'ora legale è sconosciuto.|

Se il **TZ** variabile di ambiente viene impostata, la libreria di runtime C presuppone l'uso delle regole relative agli Stati Uniti per implementare il calcolo del – ora legale (DST).

## <a name="remarks"></a>Note

Il **localtime** funzione converte un'ora archiviata come una [time_t](../../c-runtime-library/standard-types.md) valore e archivia il risultato in una struttura di tipo [tm](../../c-runtime-library/standard-types.md). Il **lungo** valore *sourceTime* rappresenta i secondi trascorsi dalla mezzanotte (00: 00:00), 1 gennaio 1970, UTC. Questo valore viene in genere ottenuto dal [ora](time-time32-time64.md) (funzione).

Entrambe le versioni a 32 e 64 bit di [gmtime](gmtime-gmtime32-gmtime64.md), [mktime](mktime-mktime32-mktime64.md), [mkgmtime](mkgmtime-mkgmtime32-mkgmtime64.md), e **localtime** usano una singola **tm** struttura per ogni thread per la conversione. Ogni chiamata a una di queste routine elimina definitivamente i risultati della chiamata precedente.

**LocalTime** lo corregge per il fuso orario locale se l'utente imposta innanzitutto la variabile di ambiente globali **TZ**. Quando **TZ** è impostata, tre altre variabili di ambiente (**TimeZone**, **Daylight**, e **tzname**) vengono automaticamente impostate anche. Se il **TZ** variabile non è impostata, **localtime** tenta di usare le informazioni sul fuso orario specificate nell'applicazione Data/ora nel Pannello di controllo. Se non è possibile ottenere queste informazioni, viene usato il valore PST8PDT per impostazione predefinita, che indica il fuso orario Pacifico (Stati Uniti). Vedere [_tzset](tzset.md) per una descrizione di queste variabili. **TZ** è un'estensione Microsoft e non fa parte della definizione dello standard ANSI dei **localtime**.

> [!NOTE]
> L'ambiente di destinazione deve provare a determinare se è in vigore l'ora legale.

Queste funzioni convalidano i relativi parametri. Se *sourceTime* è un puntatore null, o se il *sourceTime* valore è negativo, queste funzioni richiamano un gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md) . Se l'esecuzione può continuare, le funzioni restituiscono **NULL** e impostare **errno** al **EINVAL**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione C obbligatoria|Intestazione C++ obbligatoria|
|-------------|---------------------|-|
|**LocalTime**, **_localtime32**, **_localtime64**|\<time.h>|\<CTime > o \<Time. h >|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_localtime.cpp
// compile with: /W3
// This program uses _time64 to get the current time
// and then uses localtime64() to convert this time to a structure
// representing the local time. The program converts the result
// from a 24-hour clock to a 12-hour clock and determines the
// proper extension (AM or PM).

#include <stdio.h>
#include <string.h>
#include <time.h>

int main( void )
{
    struct tm *newtime;
    char am_pm[] = "AM";
    __time64_t long_time;

    _time64( &long_time );             // Get time as 64-bit integer.
                                       // Convert to local time.
    newtime = _localtime64( &long_time ); // C4996
    // Note: _localtime64 deprecated; consider _localetime64_s

    if( newtime->tm_hour > 12 )        // Set up extension.
        strcpy_s( am_pm, sizeof(am_pm), "PM" );
    if( newtime->tm_hour > 12 )        // Convert from 24-hour
        newtime->tm_hour -= 12;        //   to 12-hour clock.
    if( newtime->tm_hour == 0 )        // Set hour to 12 if midnight.
        newtime->tm_hour = 12;

    char buff[30];
    asctime_s( buff, sizeof(buff), newtime );
    printf( "%.19s %s\n", buff, am_pm );
}
```

```Output
Tue Feb 12 10:05:58 AM
```

## <a name="see-also"></a>Vedere anche

[Gestione dell'ora](../../c-runtime-library/time-management.md)<br/>
[asctime, _wasctime](asctime-wasctime.md)<br/>
[ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)<br/>
[_ftime, _ftime32, _ftime64](ftime-ftime32-ftime64.md)<br/>
[gmtime, _gmtime32, _gmtime64](gmtime-gmtime32-gmtime64.md)<br/>
[localtime_s, _localtime32_s, _localtime64_s](localtime-s-localtime32-s-localtime64-s.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
[_tzset](tzset.md)<br/>
