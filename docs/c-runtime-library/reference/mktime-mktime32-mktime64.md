---
title: mktime, _mktime32, _mktime64
ms.date: 11/04/2016
apiname:
- _mktime32
- mktime
- _mktime64
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
- mktime
- _mktime64
helpviewer_keywords:
- _mktime32 function
- mktime function
- time functions
- mktime64 function
- converting times
- mktime32 function
- _mktime64 function
- time, converting
ms.assetid: 284ed5d4-7064-48a2-bd50-15effdae32cf
ms.openlocfilehash: 8e9524249d6c90323bdcfc0b92ecf2dad281c79b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50499905"
---
# <a name="mktime-mktime32-mktime64"></a>mktime, _mktime32, _mktime64

Converte l'ora locale in un valore di calendario.

## <a name="syntax"></a>Sintassi

```C
time_t mktime(
   struct tm *timeptr
);
__time32_t _mktime32(
   struct tm *timeptr
);
__time64_t _mktime64(
   struct tm *timeptr
);
```

### <a name="parameters"></a>Parametri

*timeptr*<br/>
Puntatore alla struttura temporale. Vedere [asctime](asctime-wasctime.md).

## <a name="return-value"></a>Valore restituito

**_mktime32** restituisce l'ora di calendario specificata codificata come valore di tipo [time_t](../../c-runtime-library/standard-types.md). Se *timeptr* fa riferimento a una data precedente alla mezzanotte del 1 gennaio 1970, oppure se non è possibile rappresentare l'ora di calendario, **_mktime32** restituisce -1 eseguire il cast al tipo **time_t**. Quando si usa **_mktime32** e, se *timeptr* fa riferimento a una data successiva: 23.59.59 del 18 gennaio 2038, Coordinated Universal Time (UTC), verrà restituito -1 eseguire il cast al tipo **time_t**.

**_mktime64** restituirà -1 eseguire il cast al tipo **__time64_t** se *timeptr* fa riferimento a una data successiva alle 23:59:59, 31 dicembre 3000, UTC.

## <a name="remarks"></a>Note

Il **mktime**, **_mktime32** e **_mktime64** funzioni convertono la struttura temporale fornita (possibilmente incompleta) a cui punta *timeptr*in una struttura completamente definita con valori normalizzati, quindi la converte in un **time_t** valore ora di calendario. L'ora convertita ha la stessa codifica usata per i valori restituiti dalla funzione [time](time-time32-time64.md). I valori originali del **tm_wday** e **tm_yday** componenti del *timeptr* struttura vengono ignorati e i valori originali degli altri componenti non sono limitati ai relativi intervalli normali.

**mktime** è una funzione inline equivalente a **_mktime64**, a meno che non **_USE_32BIT_TIME_T** è definito, nel qual caso è equivalente a **_mktime32** .

Dopo una regolazione dell'ora UTC, **_mktime32** gestisce le date dalla mezzanotte del 1 gennaio 1970 alle: 23.59.59 del 18 gennaio 2038, UTC. **_mktime64** gestisce le date dalla mezzanotte del 1 ° gennaio 1970 e 23:59:59, 31 dicembre 3000. Questa regolazione può, queste funzioni restituiscono -1 (eseguire il cast **time_t**, **__time32_t** oppure **__time64_t**) anche se la data specificata si trova nell'intervallo. Ad esempio, se ci si trova a Il Cairo, Egitto, che è due ore avanti rispetto a UTC, verranno innanzitutto sottratte due ore dalla data specificata in *timeptr*. Ciò potrebbe causare l'uscita della data specificata dall'intervallo consentito.

Queste funzioni possono essere usate per convalidare e compilare una struttura tm. Se ha esito positivo, queste funzioni impostano i valori della **tm_wday** e **tm_yday** come appropriato e impostano gli altri componenti per rappresentare l'ora di calendario specificata, ma con i relativi valori forzato alla normale intervalli. Il valore finale della **tm_mday** non è impostata fino **tm_mon** e **tm_year** sono determinate. Quando si specifica un **tm** struttura temporale, impostare il **tm_isdst** campo:

- Zero (0) per indicare che è attiva l'ora solare.

- Un valore maggiore di 0 per indicare che è attiva l'ora legale.

- Un valore minore di zero per fare in modo che il codice della libreria di runtime del linguaggio C calcoli se è attiva l'ora legale o l'ora solare.

La libreria di runtime C determinerà le impostazioni relative al comportamento dell'ora legale in base alla variabile di ambiente [TZ](tzset.md). Se **TZ** non è impostata, la chiamata API Win32 [GetTimeZoneInformation](/windows/desktop/api/timezoneapi/nf-timezoneapi-gettimezoneinformation) viene usato per ottenere informazioni sull'ora dell'ora legale dal sistema operativo. Se anche questo metodo non riesce, la libreria presupporrà l'uso delle regole relative agli Stati Uniti per implementare il calcolo dell'ora legale. **tm_isdst** è un campo obbligatorio. Se non impostato, il relativo valore resta non definito e il valore restituito da queste funzioni è imprevedibile. Se *timeptr* punta a un **tm** struttura restituita da una precedente chiamata a [asctime](asctime-wasctime.md), [gmtime](gmtime-gmtime32-gmtime64.md), o [localtime](localtime-localtime32-localtime64.md) (o varianti di queste funzioni), il **tm_isdst** campo contiene il valore corretto.

Si noti che **gmtime** e **localtime** (e **_gmtime32**, **_gmtime64**, **_localtime32**, e **_localtime64**) usano un singolo buffer per ogni thread per la conversione. Se si fornisce questo buffer a **mktime**, **_mktime32** oppure **_mktime64**, i contenuti precedenti verranno eliminati.

Queste funzioni convalidano il proprio parametro. Se *timeptr* è un puntatore Null, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, le funzioni restituiscono -1 e impostare **errno** al **EINVAL**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**mktime**|\<time.h>|
|**_mktime32**|\<time.h>|
|**_mktime64**|\<time.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

```C
// crt_mktime.c
/* The example takes a number of days
* as input and returns the time, the current
* date, and the specified number of days.
*/

#include <time.h>
#include <stdio.h>

int main( void )
{
   struct tm  when;
   __time64_t now, result;
   int        days;
   char       buff[80];

   time( &now );
   _localtime64_s( &when, &now );
   asctime_s( buff, sizeof(buff), &when );
   printf( "Current time is %s\n", buff );
   days = 20;
   when.tm_mday = when.tm_mday + days;
   if( (result = mktime( &when )) != (time_t)-1 ) {
      asctime_s( buff, sizeof(buff), &when );
      printf( "In %d days the time will be %s\n", days, buff );
   } else
      perror( "mktime failed" );
}
```

### <a name="sample-output"></a>Esempio di output

```Output
Current time is Fri Apr 25 13:34:07 2003

In 20 days the time will be Thu May 15 13:34:07 2003
```

## <a name="see-also"></a>Vedere anche

[Gestione dell'ora](../../c-runtime-library/time-management.md)<br/>
[asctime, _wasctime](asctime-wasctime.md)<br/>
[gmtime, _gmtime32, _gmtime64](gmtime-gmtime32-gmtime64.md)<br/>
[localtime, _localtime32, _localtime64](localtime-localtime32-localtime64.md)<br/>
[_mkgmtime, _mkgmtime32, _mkgmtime64](mkgmtime-mkgmtime32-mkgmtime64.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
