---
title: gmtime, _gmtime32, _gmtime64
ms.date: 11/04/2016
apiname:
- _gmtime32
- gmtime
- _gmtime64
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
- gmtime
- _gmtime32
- _gmtime64
helpviewer_keywords:
- gmtime32 function
- _gmtime64 function
- gmtime function
- time functions
- _gmtime32 function
- gmtime64 function
- time structure conversion
ms.assetid: 315501f3-477e-475d-a414-ef100ee0db27
ms.openlocfilehash: 4f32da5920a0cb892619195207d6501a4b1fd874
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50480002"
---
# <a name="gmtime-gmtime32-gmtime64"></a>gmtime, _gmtime32, _gmtime64

Converte un **time_t** ora valore a un **tm** struttura. Sono disponibili versioni più sicure di queste funzioni. Vedere [gmtime_s, _gmtime32_s, _gmtime64_s](gmtime-s-gmtime32-s-gmtime64-s.md).

## <a name="syntax"></a>Sintassi

```C
struct tm *gmtime( const time_t *sourceTime );
struct tm *_gmtime32( const __time32_t *sourceTime );
struct tm *_gmtime64( const __time64_t *sourceTime );
```

### <a name="parameters"></a>Parametri

*sourceTime*<br/>
Puntatore all'ora archiviata. L'ora è rappresentata come secondi trascorsi dalla mezzanotte (00.00.00) del 1 gennaio 1970 nel formato UTC (Coordinated Universal Time).

## <a name="return-value"></a>Valore restituito

Puntatore a una struttura di tipo [tm](../../c-runtime-library/standard-types.md). I campi della struttura restituita contengono il valore valutato del *sourceTime* argomento in formato UTC anziché nell'ora locale. Ognuno dei campi della struttura è di tipo **int**, come indicato di seguito:

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
|**tm_isdst**|Sempre 0 per **gmtime**.|

Entrambe le versioni a 32 e 64 bit di **gmtime**, [mktime](mktime-mktime32-mktime64.md), [mkgmtime](mkgmtime-mkgmtime32-mkgmtime64.md), e [localtime](localtime-localtime32-localtime64.md) tutti utilizzano in genere **tm**  struttura per ogni thread per la conversione. Ogni chiamata a una di queste funzioni elimina il risultato di una chiamata precedente. Se *sourceTime* rappresenta una data precedente alla mezzanotte del 1 gennaio 1970 **gmtime** restituisce **NULL**. Non vi è restituzione di errori.

**_gmtime64**, che usa la **__time64_t** struttura, abilita le date di esprimere backup tramite 23:59:59, 31 dicembre 3000 UTC, mentre **_gmtime32** rappresenta solo le date e 23:59:59 18 gennaio 2038, UTC. La mezzanotte del 1 gennaio 1970 è il limite inferiore dell'intervallo di date per entrambe le funzioni.

**gmtime** è una funzione inline che restituisca **_gmtime64**, e **time_t** equivale a **__time64_t** a meno che non **_USE_32BIT_TIME_ T** è definito. Se è necessario forzare il compilatore a interpretare **time_t** come il vecchio 32 bit **time_t**, è possibile definire **_USE_32BIT_TIME_T**, ma questo modo **gmtime** essere allineata a **_gmtime32** e **time_t** deve essere definita come **__time32_t**. Questa operazione non è consigliabile perché non è consentita nelle piattaforme a 64 bit e in ogni caso potrebbero verificarsi errori per l'applicazione dopo il 18 gennaio 2038.

Queste funzioni convalidano i relativi parametri. Se *sourceTime* è un puntatore null, o se il *sourceTime* valore è negativo, queste funzioni richiamano un gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md) . Se l'esecuzione può continuare, le funzioni restituiscono **NULL** e impostare **errno** al **EINVAL**.

## <a name="remarks"></a>Note

Il **_gmtime32** funzione suddivide il *sourceTime* valore e archiviarlo in una struttura di allocata statica di tipo **tm**, definito nel tempo. H. Il valore di *sourceTime* è in genere ottenuto da una chiamata per il [ora](time-time32-time64.md) (funzione).

> [!NOTE]
> Nella maggior parte dei casi l'ambiente di destinazione tenta di determinare se è in vigore l'ora legale. La libreria di runtime C presuppone l'uso delle regole relative agli Stati Uniti per implementare il calcolo dell'ora legale.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione C obbligatoria|Intestazione C++ obbligatoria|
|-------------|---------------------|-|
|**gmtime**, **_gmtime32**, **_gmtime64**|\<time.h>|\<CTime > o \<Time. h >|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_gmtime.c
// compile with: /W3
// This program uses _gmtime64 to convert a long-
// integer representation of coordinated universal time
// to a structure named newtime, then uses asctime to
// convert this structure to an output string.

#include <time.h>
#include <stdio.h>

int main( void )
{
   struct tm *newtime;
   __int64 ltime;
   char buff[80];

   _time64( &ltime );

   // Obtain coordinated universal time:
   newtime = _gmtime64( &ltime ); // C4996
   // Note: _gmtime64 is deprecated; consider using _gmtime64_s
   asctime_s( buff, sizeof(buff), newtime );
   printf( "Coordinated universal time is %s\n", buff );
}
```

```Output
Coordinated universal time is Tue Feb 12 23:11:31 2002
```

## <a name="see-also"></a>Vedere anche

[Gestione dell'ora](../../c-runtime-library/time-management.md)<br/>
[asctime, _wasctime](asctime-wasctime.md)<br/>
[ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)<br/>
[_ftime, _ftime32, _ftime64](ftime-ftime32-ftime64.md)<br/>
[gmtime_s, _gmtime32_s, _gmtime64_s](gmtime-s-gmtime32-s-gmtime64-s.md)<br/>
[localtime, _localtime32, _localtime64](localtime-localtime32-localtime64.md)<br/>
[_mkgmtime, _mkgmtime32, _mkgmtime64](mkgmtime-mkgmtime32-mkgmtime64.md)<br/>
[mktime, _mktime32, _mktime64](mktime-mktime32-mktime64.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
