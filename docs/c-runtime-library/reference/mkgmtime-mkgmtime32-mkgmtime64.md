---
title: _mkgmtime, _mkgmtime32, _mkgmtime64
description: Descrive le funzioni della libreria di runtime _mkgmtime, _mkgmtime32 e _mkgmtime64 C e fornisce esempi su come usarli.
ms.date: 4/2/2020
api_name:
- _mkgmtime32
- _mkgmtime64
- _mkgmtime
- _o__mkgmtime32
- _o__mkgmtime64
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
- _mkgmtime64
- mkgmtime32
- _mkgmtime32
- mkgmtime
- mkgmtime64
- _mkgmtime
helpviewer_keywords:
- mkgmtime32 function
- time functions
- mkgmtime function
- _mkgmtime function
- converting times
- mkgmtime64 function
- _mkgmtime64 function
- _mkgmtime32 function
- time, converting
ms.assetid: b4ca2b67-e198-4f43-b3e2-e8ad6bd01867
ms.openlocfilehash: 4b20073a2022c7da59a5e224a04051901b7b8a4f
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82914647"
---
# <a name="_mkgmtime-_mkgmtime32-_mkgmtime64"></a>_mkgmtime, _mkgmtime32, _mkgmtime64

Converte un'ora UTC rappresentata da uno **struct** **TM** in un'ora UTC rappresentata da un tipo di **time_t** .

## <a name="syntax"></a>Sintassi

```C
time_t _mkgmtime(
   struct tm* timeptr
);
__time32_t _mkgmtime32(
   struct tm* timeptr
);
__time64_t _mkgmtime64(
   struct tm* timeptr
);
```

### <a name="parameters"></a>Parametri

*timeptr*\
Puntatore all'ora UTC come **struct** **TM** da convertire.

## <a name="return-value"></a>Valore restituito

Quantità di tipo **__time32_t** o **__time64_t** che rappresenta il numero di secondi trascorsi dalla mezzanotte del 1 gennaio 1970, nel formato UTC (Coordinated Universal Time). Se la data non è compresa nell'intervallo (vedere la sezione Osservazioni) o se l'input non può essere interpretato come un tempo valido, il valore restituito è-1.

## <a name="remarks"></a>Osservazioni

Le funzioni **_mkgmtime32** e **_mkgmtime64** convertono un'ora UTC in un tipo **__time32_t** o **__time64_t** che rappresenta l'ora in formato UTC. Per convertire un'ora locale in ora UTC, utilizzare **mktime**, **_mktime32**e **_mktime64** .

**_mkgmtime** è una funzione inline che restituisce **_mkgmtime64**e **time_t** equivale a **__time64_t**. Se è necessario forzare il compilatore a interpretare **time_t** come la precedente **time_t**a 32 bit, è possibile definire **_USE_32BIT_TIME_T**. Questa operazione non è consigliata perché l'applicazione potrebbe non riuscire dopo il 18 gennaio 2038, l'intervallo massimo di un **time_t**a 32 bit. Non è consentito su piattaforme a 64 bit.

La struttura dell'ora passata viene modificata come segue, nello stesso modo in cui viene modificata dalle funzioni **_mktime** : i campi **tm_wday** e **tm_yday** sono impostati su nuovi valori in base ai valori di **tm_mday** e **tm_year**. Poiché si presuppone che l'ora sia UTC, il campo **tm_isdst** viene ignorato.

L'intervallo della funzione **_mkgmtime32** è dalla mezzanotte del 1 gennaio 1970, dall'ora utc al 23:59:59 gennaio 18, 2038, UTC. L'intervallo di **_mkgmtime64** è dalla mezzanotte del 1 gennaio 1970, dall'utc al 23:59:59, dal 31 dicembre 3000, dall'ora UTC. Una data non compresa nell'intervallo restituisce un valore restituito pari a-1. L'intervallo di **_mkgmtime** dipende dall'eventuale definizione di **_USE_32BIT_TIME_T** . Quando non è definito, che corrisponde all'impostazione predefinita, l'intervallo è uguale a quello **_mkgmtime64**. In caso contrario, l'intervallo è limitato all'intervallo di **_mkgmtime32**a 32 bit.

Sia **gmtime** che **localtime** usano un buffer statico comune per la conversione. Se si fornisce questo buffer per **_mkgmtime**, il contenuto precedente viene eliminato definitivamente.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="examples"></a>Esempi

```C
// crt_mkgmtime.c
#include <stdio.h>
#include <time.h>

int main()
{
    struct tm t1, t2;
    time_t now, mytime, gmtime;
    char buff[30];

    time( & now );

    _localtime64_s( &t1, &now );
    _gmtime64_s( &t2, &now );

    mytime = mktime(&t1);
    gmtime = _mkgmtime(&t2);

    printf("Seconds since midnight, January 1, 1970\n");
    printf("My time: %I64d\nGM time (UTC): %I64d\n\n", mytime, gmtime);

    /* Use asctime_s to display these times. */

    _localtime64_s( &t1, &mytime );
    asctime_s( buff, sizeof(buff), &t1 );
    printf( "Local Time: %s\n", buff );

    _gmtime64_s( &t2, &gmtime );
    asctime_s( buff, sizeof(buff), &t2 );
    printf( "Greenwich Mean Time: %s\n", buff );

}
```

```Output
Seconds since midnight, January 1, 1970
My time: 1171588492
GM time (UTC): 1171588492

Local Time: Thu Feb 15 17:14:52 2007

Greenwich Mean Time: Fri Feb 16 01:14:52 2007
```

Nell'esempio seguente viene illustrato il modo in cui la struttura incompleta viene compilata **_mkgmtime**. Calcola i valori sia per il giorno della settimana che per l'anno.

```C
// crt_mkgmtime2.c
#include <stdio.h>
#include <time.h>
#include <memory.h>

int main()
{
    struct tm t1, t2;
    time_t gmtime;
    char buff[30];

    memset(&t1, 0, sizeof(struct tm));
    memset(&t2, 0, sizeof(struct tm));

    t1.tm_mon = 1;
    t1.tm_isdst = 0;
    t1.tm_year = 103;
    t1.tm_mday = 12;

    // The day of the week and year will be incorrect in the output here.
    asctime_s( buff, sizeof(buff), &t1);
    printf("Before calling _mkgmtime, t1 = %s t.tm_yday = %d\n",
            buff, t1.tm_yday );

    gmtime = _mkgmtime(&t1);

    // The correct day of the week and year were determined.
    asctime_s( buff, sizeof(buff), &t1);
    printf("After calling _mkgmtime, t1 = %s t.tm_yday = %d\n",
            buff, t1.tm_yday );

}
```

```Output
Before calling _mkgmtime, t1 = Sun Feb 12 00:00:00 2003
t.tm_yday = 0
After calling _mkgmtime, t1 = Wed Feb 12 00:00:00 2003
t.tm_yday = 42
```

## <a name="see-also"></a>Vedere anche

[Gestione del tempo](../../c-runtime-library/time-management.md)\
[asctime, _wasctime](asctime-wasctime.md)\
[asctime_s, _wasctime_s](asctime-s-wasctime-s.md)\
[gmtime, _gmtime32, _gmtime64](gmtime-gmtime32-gmtime64.md)\
[gmtime_s, _gmtime32_s, _gmtime64_s](gmtime-s-gmtime32-s-gmtime64-s.md)\
[localtime_s, _localtime32_s, _localtime64_s](localtime-s-localtime32-s-localtime64-s.md)\
[mktime, _mktime32, _mktime64](mktime-mktime32-mktime64.md)\
[time, _time32, _time64](time-time32-time64.md)
