---
title: gmtime_s, _gmtime32_s, _gmtime64_s
ms.date: 11/04/2016
apiname:
- _gmtime32_s
- gmtime_s
- _gmtime64_s
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
- _gmtime_s
- gmtime64_s
- gmtime32_s
- _gmtime64_s
- gmtime_s
- _gmtime32_s
helpviewer_keywords:
- gmtime_s function
- gmtime32_s function
- time functions
- gmtime64_s function
- _gmtime64_s function
- time structure conversion
- _gmtime_s function
- _gmtime32_s function
ms.assetid: 261c7df0-2b0c-44ba-ba61-cb83efaec60f
ms.openlocfilehash: 8225fed21ca9dc67440a4af5dcf43b2ad5cfdffb
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62157448"
---
# <a name="gmtimes-gmtime32s-gmtime64s"></a>gmtime_s, _gmtime32_s, _gmtime64_s

Converte un valore di tempo in un **tm** struttura. Queste sono versioni di [_gmtime32, _gmtime64](gmtime-gmtime32-gmtime64.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t gmtime_s(
   struct tm* tmDest,
   const __time_t* sourceTime
);
errno_t _gmtime32_s(
   struct tm* tmDest,
   const __time32_t* sourceTime
);
errno_t _gmtime64_s(
   struct tm* tmDest,
   const __time64_t* sourceTime
);
```

### <a name="parameters"></a>Parametri

*tmDest*<br/>
Puntatore a un [tm](../../c-runtime-library/standard-types.md) struttura. I campi della struttura restituita contengono il valore valutato del *timer* argomento in formato UTC anziché nell'ora locale.

*sourceTime*<br/>
Puntatore all'ora archiviata. L'ora è rappresentata come secondi trascorsi dalla mezzanotte (00.00.00) del 1 gennaio 1970 nel formato UTC (Coordinated Universal Time).

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo. Il valore restituito è un codice di errore se si verifica un errore. I codici di errore sono definiti in Errno.h. Per un elenco di questi errori, vedere [errno](../../c-runtime-library/errno-constants.md).

### <a name="error-conditions"></a>Condizioni di errore

|*tmDest*|*sourceTime*|INVIO|Valore in *tmDest*|
|-----------|------------|------------|--------------------|
|**NULL**|qualsiasi|**EINVAL**|Non modificato.|
|Non **NULL** (punta alla memoria valida)|**NULL**|**EINVAL**|Tutti i campi impostati su -1.|
|Non **NULL**|< 0|**EINVAL**|Tutti i campi impostati su -1.|

Nel caso delle prime due condizioni di errore viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** al **EINVAL** e restituiti **EINVAL**.

## <a name="remarks"></a>Note

Il **_gmtime32_s** funzione suddivide la *sourceTime* valore e archiviarlo in una struttura di tipo **tm**, definita in time. h. L'indirizzo della struttura viene passato *tmDest*. Il valore di *sourceTime* viene in genere ottenuto da una chiamata ai [ora](time-time32-time64.md) (funzione).

> [!NOTE]
> L'ambiente di destinazione deve provare a determinare se è in vigore l'ora legale. La libreria di runtime C presuppone l'uso delle regole relative agli Stati Uniti per implementare il calcolo dell'ora legale.

Ognuno dei campi della struttura è di tipo **int**, come illustrato nella tabella seguente.

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
|**tm_isdst**|Sempre 0 per **gmtime_s**.|

**_gmtime64_s**, che usa la **__time64_t** struttura, consente le date di esprimere backup tramite 23:59:59, 31 dicembre 3000 UTC, mentre **gmtime32_s** rappresenta solo le date tramite : 23.59.59 del 18 gennaio 2038, UTC. La mezzanotte del 1 gennaio 1970 è il limite inferiore dell'intervallo di date per entrambe queste funzioni.

**gmtime_s** è una funzione inline equivalente a **_gmtime64_s** e **time_t** equivale a **__time64_t**. Se è necessario forzare il compilatore a interpretare **time_t** come il vecchio 32 bit **time_t**, è possibile definire **_USE_32BIT_TIME_T**. In questo modo **gmtime_s** essere allineata a **_gmtime32_s**. Questa operazione non è consigliabile perché potrebbero verificarsi errori per l'applicazione dopo il 18 gennaio 2038 e l'uso non è consentito in piattaforme a 64 bit.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione C obbligatoria|Intestazione C++ obbligatoria|
|-------------|---------------------|-|
|**gmtime_s**, **_gmtime32_s**, **_gmtime64_s**|\<time.h>|\<CTime > o \<Time. h >|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_gmtime64_s.c
// This program uses _gmtime64_s to convert a 64-bit
// integer representation of coordinated universal time
// to a structure named newtime, then uses asctime_s to
// convert this structure to an output string.

#include <time.h>
#include <stdio.h>

int main( void )
{
   struct tm newtime;
   __int64 ltime;
   char buf[26];
   errno_t err;

   _time64( &ltime );

   // Obtain coordinated universal time:
   err = _gmtime64_s( &newtime, &ltime );
   if (err)
   {
      printf("Invalid Argument to _gmtime64_s.");
   }

   // Convert to an ASCII representation
   err = asctime_s(buf, 26, &newtime);
   if (err)
   {
      printf("Invalid Argument to asctime_s.");
   }

   printf( "Coordinated universal time is %s\n",
           buf );
}
```

```Output
Coordinated universal time is Fri Apr 25 20:12:33 2003
```

## <a name="see-also"></a>Vedere anche

[Gestione dell'ora](../../c-runtime-library/time-management.md)<br/>
[asctime_s, _wasctime_s](asctime-s-wasctime-s.md)<br/>
[ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)<br/>
[_ftime, _ftime32, _ftime64](ftime-ftime32-ftime64.md)<br/>
[gmtime, _gmtime32, _gmtime64](gmtime-gmtime32-gmtime64.md)<br/>
[localtime_s, _localtime32_s, _localtime64_s](localtime-s-localtime32-s-localtime64-s.md)<br/>
[_mkgmtime, _mkgmtime32, _mkgmtime64](mkgmtime-mkgmtime32-mkgmtime64.md)<br/>
[mktime, _mktime32, _mktime64](mktime-mktime32-mktime64.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
