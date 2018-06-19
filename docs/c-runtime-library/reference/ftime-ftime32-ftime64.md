---
title: _ftime, _ftime32, _ftime64 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _ftime64
- _ftime
- _ftime32
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
- _ftime32
- _ftime
- _ftime64
- ftime64
- ftime
- ftime32
dev_langs:
- C++
helpviewer_keywords:
- ftime64 function
- _ftime64 function
- current time
- _ftime function
- ftime function
- _ftime32 function
- ftime32 function
- time, getting current
ms.assetid: 96bc464c-3bcd-41d5-a212-8bbd836b814a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9fd388e2963a0e28389fbf7cc2c4bd146ac9b61e
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32401438"
---
# <a name="ftime-ftime32-ftime64"></a>_ftime, _ftime32, _ftime64

Ottiene l'ora corrente. Sono disponibili versioni più sicure di queste funzioni. Vedere [_ftime_s, _ftime32_s, _ftime64_s](ftime-s-ftime32-s-ftime64-s.md).

## <a name="syntax"></a>Sintassi

```C
void _ftime( struct _timeb *timeptr );
void _ftime32( struct __timeb32 *timeptr );
void _ftime64( struct __timeb64 *timeptr );
```

### <a name="parameters"></a>Parametri

*timeptr* puntatore a un **timeb**, **__timeb32**, o **__timeb64** struttura.

## <a name="remarks"></a>Note

Il **ftime** funzione Ottiene l'ora locale corrente e lo archivia nella struttura a cui puntata *timeptr*. Il **timeb**, **__timeb32**, e **__timeb64** strutture vengono definite \<sys\\timeb.h >. Le strutture contengono quattro valori, elencati nella tabella seguente.

|Campo|Descrizione|
|-|-|
|**dstflag**|Diverso da zero se l'ora legale è in vigore per il fuso orario locale. (Vedere [tzset](tzset.md) per una spiegazione del modo in cui viene determinata l'ora legale.)|
|**millitm**|Frazione di secondo in millisecondi.|
|**time**|Ora in secondi trascorsi dalla mezzanotte (00.00.00) del 1 gennaio 1970 nel formato UTC (Coordinated Universal Time).|
|**timezone**|La differenza in minuti, in direzione ovest, tra l'ora UTC e l'ora locale. Il valore di **fuso orario** è impostato il valore della variabile globale **TimeZone** (vedere **tzset**).|

Il **_ftime64** funzione, che usa il **__timeb64** struttura, consente le date di creazione di file relativamente a 23:59:59, 31 dicembre 3000 UTC; mentre **_ftime32**rappresenta solo le date a 23:59:59 18 gennaio 2038, ore UTC. La mezzanotte del 1 gennaio 1970 è il limite inferiore dell'intervallo di date per tutte queste funzioni.

Il **ftime** funzione equivale a **_ftime64**, e **timeb** contiene un'ora a 64 bit, a meno che non **_USE_32BIT_TIME_T** è definito, in qual caso il comportamento precedente è attiva; **ftime** utilizza un tempo a 32 bit e **timeb** contiene un'ora a 32 bit.

**ftime** convalida i propri parametri. Se passato come un puntatore null *timeptr*, la funzione richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta **errno** alla **EINVAL**.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**_ftime**|\<sys/types.h> e \<sys/timeb.h>|
|**_ftime32**|\<sys/types.h> e \<sys/timeb.h>|
|**_ftime64**|\<sys/types.h> e \<sys/timeb.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_ftime.c
// compile with: /W3
// This program uses _ftime to obtain the current
// time and then stores this time in timebuffer.

#include <stdio.h>
#include <sys/timeb.h>
#include <time.h>

int main( void )
{
   struct _timeb timebuffer;
   char timeline[26];
   errno_t err;
   time_t time1;
   unsigned short millitm1;
   short timezone1;
   short dstflag1;

   _ftime( &timebuffer ); // C4996
   // Note: _ftime is deprecated; consider using _ftime_s instead

   time1 = timebuffer.time;
   millitm1 = timebuffer.millitm;
   timezone1 = timebuffer.timezone;
   dstflag1 = timebuffer.dstflag;

   printf( "Seconds since midnight, January 1, 1970 (UTC): %I64d\n",
   time1);
   printf( "Milliseconds: %d\n", millitm1);
   printf( "Minutes between UTC and local time: %d\n", timezone1);
   printf( "Daylight savings time flag (1 means Daylight time is in "
           "effect): %d\n", dstflag1);

   err = ctime_s( timeline, 26, & ( timebuffer.time ) );
   if (err)
   {
       printf("Invalid argument to ctime_s. ");
   }
   printf( "The time is %.19s.%hu %s", timeline, timebuffer.millitm,
           &timeline[20] );
}
```

```Output
Seconds since midnight, January 1, 1970 (UTC): 1051553334
Milliseconds: 230
Minutes between UTC and local time: 480
Daylight savings time flag (1 means Daylight time is in effect): 1
The time is Mon Apr 28 11:08:54.230 2003
```

## <a name="see-also"></a>Vedere anche

[Gestione dell'ora](../../c-runtime-library/time-management.md)<br/>
[asctime, _wasctime](asctime-wasctime.md)<br/>
[ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)<br/>
[gmtime, _gmtime32, _gmtime64](gmtime-gmtime32-gmtime64.md)<br/>
[localtime, _localtime32, _localtime64](localtime-localtime32-localtime64.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
