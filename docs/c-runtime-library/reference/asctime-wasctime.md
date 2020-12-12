---
description: 'Altre informazioni su: asctime, _wasctime'
title: asctime, _wasctime
ms.date: 4/2/2020
api_name:
- _wasctime
- asctime
- _o__wasctime
- _o_asctime
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
- _tasctime
- asctime
- _wasctime
helpviewer_keywords:
- asctime function
- tasctime function
- wasctime function
- _tasctime function
- _wasctime function
- time structure conversion
- time, converting
ms.assetid: 974f1727-10ff-4ed4-8cac-2eb2d681f576
ms.openlocfilehash: 3ae075481b364af01bfa75f1cc29423de9fcdbf1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97260800"
---
# <a name="asctime-_wasctime"></a>asctime, _wasctime

Converte una struttura Time **TM** in una stringa di caratteri. Sono disponibili versioni più sicure di queste funzioni. Vedere [asctime_s, _wasctime_s](asctime-s-wasctime-s.md).

## <a name="syntax"></a>Sintassi

```C
char *asctime(
   const struct tm *timeptr
);
wchar_t *_wasctime(
   const struct tm *timeptr
);
```

### <a name="parameters"></a>Parametri

*timeptr*<br/>
Struttura di data e ora.

## <a name="return-value"></a>Valore restituito

**asctime** restituisce un puntatore al risultato della stringa di caratteri; **_wasctime** restituisce un puntatore al risultato della stringa di caratteri wide. Non vengono restituiti valori di errore.

## <a name="remarks"></a>Commenti

Sono disponibili versioni più sicure di queste funzioni. Vedere [asctime_s, _wasctime_s](asctime-s-wasctime-s.md).

La funzione **asctime** converte un'ora archiviata come una struttura in una stringa di caratteri. Il valore *timeptr* viene in genere ottenuto da una chiamata a **gmtime** o **localtime**, che restituiscono entrambi un puntatore a una struttura **TM** , definita in time. H.

|membro timeptr|Valore|
|--------------------|-----------|
|**tm_hour**|Ore dalla mezzanotte (0-23)|
|**tm_isdst**|Positivo se è in vigore l'ora legale. 0 se l'ora legale non è in vigore. Negativo se lo stato dell'ora legale è sconosciuto. La libreria di runtime C presuppone le regole relative agli Stati Uniti per implementare il calcolo dell'ora legale (DST).|
|**tm_mday**|Giorno del mese (1-31)|
|**tm_min**|Minuti dopo l'ora (0-59)|
|**tm_mon**|Mese (0-11; Gennaio = 0)|
|**tm_sec**|Secondi dopo il minuto (0-59)|
|**tm_wday**|Giorno della settimana (0-6; Domenica = 0)|
|**tm_yday**|Giorno dell'anno (0-365; 1 gennaio = 0)|
|**tm_year**|Anno (anno corrente meno 1900)|

La stringa di caratteri convertita viene anche regolata in base alle impostazioni di fuso orario locale. Vedere le funzioni [time](time-time32-time64.md), [_ftime](ftime-ftime32-ftime64.md) e [localtime](localtime-localtime32-localtime64.md) per informazioni sulla configurazione dell'ora locale e la funzione [_tzset](tzset.md) per informazioni sulla definizione delle variabili di ambiente e globali del fuso orario.

Il risultato della stringa prodotto da **asctime** contiene esattamente 26 caratteri e ha il formato `Wed Jan 02 02:03:55 1980\n\0` . Viene usato un formato 24 ore. Tutti i campi hanno una larghezza costante. Il carattere di nuova riga e il carattere null occupano le ultime due posizioni della stringa. **asctime** usa un singolo buffer allocato in modo statico per memorizzare la stringa restituita. Ogni chiamata a questa funzione elimina definitivamente il risultato della chiamata precedente.

**_wasctime** è una versione a caratteri wide di **asctime**. **_wasctime** e **asctime** si comportano in modo identico.

Queste funzioni convalidano i relativi parametri. Se *timeptr* è un puntatore null o se contiene valori non compresi nell'intervallo, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce **null** e imposta **errno** su **EINVAL**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mapping"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tasctime**|**asctime**|**asctime**|**_wasctime**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**asctime**|\<time.h>|
|**_wasctime**|\<time.h> o \<wchar.h>|

## <a name="example"></a>Esempio

Questo programma posiziona l'ora di sistema nel valore long integer **ACLOCK**, lo converte nella struttura **newTime** e quindi lo converte in formato stringa per l'output, usando la funzione **asctime** .

```C
// crt_asctime.c
// compile with: /W3

#include <time.h>
#include <stdio.h>

int main( void )
{
    struct tm   *newTime;
    time_t      szClock;

    // Get time in seconds
    time( &szClock );

    // Convert time to struct tm form
    newTime = localtime( &szClock );

    // Print local time as a string.
    printf_s( "Current date and time: %s", asctime( newTime ) ); // C4996
    // Note: asctime is deprecated; consider using asctime_s instead
}
```

```Output
Current date and time: Sun Feb 03 11:38:58 2002
```

## <a name="see-also"></a>Vedi anche

[Gestione del tempo](../../c-runtime-library/time-management.md)<br/>
[ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)<br/>
[_ftime, _ftime32, _ftime64](ftime-ftime32-ftime64.md)<br/>
[gmtime, _gmtime32, _gmtime64](gmtime-gmtime32-gmtime64.md)<br/>
[localtime, _localtime32, _localtime64](localtime-localtime32-localtime64.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
[_tzset](tzset.md)<br/>
[asctime_s, _wasctime_s](asctime-s-wasctime-s.md)<br/>
