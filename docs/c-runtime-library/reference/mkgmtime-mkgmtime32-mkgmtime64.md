---
title: _mkgmtime, _mkgmtime32, _mkgmtime64
ms.date: 11/04/2016
apiname:
- _mkgmtime32
- _mkgmtime64
- _mkgmtime
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
ms.openlocfilehash: 65d96d79a45e05e4b371315c0612ed086f6ea2a0
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62156499"
---
# <a name="mkgmtime-mkgmtime32-mkgmtime64"></a>_mkgmtime, _mkgmtime32, _mkgmtime64

Converte un'ora UTC rappresentata da un **struct** **tm** a un'ora UTC rappresentata da una **time_t** tipo.

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

*timeptr*<br/>
Un puntatore all'ora UTC come un **struct** **tm** da convertire.

## <a name="return-value"></a>Valore restituito

Una quantità di tipo **__time32_t** oppure **__time64_t** che rappresenta il numero di secondi trascorsi dalla mezzanotte del 1 gennaio 1970, nel formato Coordinated Universal Time (UTC). Se la data è compreso nell'intervallo (vedere la sezione Osservazioni) o l'input non può essere interpretato come un'ora valida, il valore restituito è -1.

## <a name="remarks"></a>Note

Il **_mkgmtime32** e **_mkgmtime64** funzioni convertono un'ora UTC per un **__time32_t** oppure **__time64_t** tipo che rappresenta l'ora in ORA UTC. Per convertire un'ora locale in ora UTC, usare **mktime**, **_mktime32**, e **_mktime64** invece.

**mkgmtime** è una funzione inline che restituisca **_mkgmtime64**, e **time_t** equivale a **__time64_t**. Se è necessario forzare il compilatore a interpretare **time_t** come il vecchio 32 bit **time_t**, è possibile definire **_USE_32BIT_TIME_T**. Questa operazione è sconsigliata perché l'applicazione potrebbe non riuscire dopo il 18 gennaio 2038 (intervallo massimo di 32 bit **time_t**), e non è consentito affatto su piattaforme a 64 bit.

La struttura dell'ora passata verrà modificata come segue, allo stesso modo quando vengono modificati con il **_mktime** funzioni: il **tm_wday** e **tm_yday** i campi vengono impostati su nuovi i valori in basano ai valori della **tm_mday** e **tm_year**. Quando si specifica un **tm** struttura temporale, impostare il **tm_isdst** campo:

- Zero (0) per indicare che è attiva l'ora solare.

- Un valore maggiore di 0 per indicare che è attiva l'ora legale.

- Un valore minore di zero per fare in modo che il codice della libreria di runtime del linguaggio C calcoli se è attiva l'ora legale o l'ora solare.

La libreria di runtime C usa la variabile di ambiente TZ per determinare l'ora legale corretta. Se la variabile TZ non è impostata, viene eseguita una query nel sistema operativo per ottenere il comportamento corretto per l'ora legale regionale. **tm_isdst** è un campo obbligatorio. Se non impostato, il relativo valore non è definito e il valore restituito da **mktime** è imprevedibile.

L'intervallo del **_mkgmtime32** funzione è dalla mezzanotte del 1 gennaio 1970 UTC a: 23.59.59 del 18 gennaio 2038, UTC. L'intervallo di **_mkgmtime64** va da mezzanotte del 1 gennaio 1970, UTC a 23:59:59, 31 dicembre 3000, UTC. Una data di out-of-range restituisce un valore restituito-1. L'intervallo di **mkgmtime** dipende dal fatto che **_USE_32BIT_TIME_T** è definito. Se non è definito (impostazione predefinita) l'intervallo è quello di **_mkgmtime64**; in caso contrario, l'intervallo è limitato a 32 bit compreso tra **_mkgmtime32**.

Si noti che **gmtime** e **localtime** usano un singolo buffer allocato in modo statico per la conversione. Se si fornisce questo buffer a **mkgmtime**, i contenuti precedenti verranno eliminati.

## <a name="example"></a>Esempio

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

### <a name="sample-output"></a>Esempio di output

```Output
Seconds since midnight, January 1, 1970
My time: 1171588492
GM time (UTC): 1171588492

Local Time: Thu Feb 15 17:14:52 2007

Greenwich Mean Time: Fri Feb 16 01:14:52 2007
```

L'esempio seguente mostra come viene compilata la struttura incompleta con i valori calcolati del giorno della settimana e del giorno dell'anno.

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

### <a name="output"></a>Output

```Output
Before calling _mkgmtime, t1 = Sun Feb 12 00:00:00 2003
t.tm_yday = 0
After calling _mkgmtime, t1 = Wed Feb 12 00:00:00 2003
t.tm_yday = 42
```

## <a name="see-also"></a>Vedere anche

[Gestione dell'ora](../../c-runtime-library/time-management.md)<br/>
[asctime, _wasctime](asctime-wasctime.md)<br/>
[asctime_s, _wasctime_s](asctime-s-wasctime-s.md)<br/>
[gmtime, _gmtime32, _gmtime64](gmtime-gmtime32-gmtime64.md)<br/>
[gmtime_s, _gmtime32_s, _gmtime64_s](gmtime-s-gmtime32-s-gmtime64-s.md)<br/>
[localtime_s, _localtime32_s, _localtime64_s](localtime-s-localtime32-s-localtime64-s.md)<br/>
[mktime, _mktime32, _mktime64](mktime-mktime32-mktime64.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
