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
ms.openlocfilehash: c45b69f84a0aec159ed59a480e9358f27c8e85e2
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69500999"
---
# <a name="mktime-_mktime32-_mktime64"></a>mktime, _mktime32, _mktime64

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

**_mktime32** restituisce l'ora di calendario specificata codificata come valore di tipo [time_t](../../c-runtime-library/standard-types.md). Se *timeptr* fa riferimento a una data precedente alla mezzanotte del 1 ° gennaio 1970 o se non è possibile rappresentare l'ora del calendario, **_mktime32** restituisce il cast-1 al tipo **time_t**. Quando si usa **_mktime32** e se *timeptr* fa riferimento a una data successiva 23:59:59 del 18 gennaio 2038, ora UTC (Coordinated Universal Time), verrà restituito il cast di-1 al tipo **time_t**.

**_mktime64** restituirà-1 con cast al tipo **__time64_t** se *timeptr* fa riferimento a una data successiva 23:59:59, 31 dicembre 3000, UTC.

## <a name="remarks"></a>Note

Le funzioni **mktime**, **_mktime32** e **_mktime64** convertono la struttura temporale fornita (probabilmente incompleta) a cui punta *timeptr* in una struttura completamente definita con valori normalizzati, quindi la converte in un **time_t** valore dell'ora del calendario. L'ora convertita ha la stessa codifica usata per i valori restituiti dalla funzione [time](time-time32-time64.md). I valori originali dei componenti **tm_wday** e **tm_yday** della struttura *timeptr* vengono ignorati e i valori originali degli altri componenti non sono limitati ai relativi intervalli normali.

**mktime** è una funzione inline equivalente a **_mktime64**, a meno che non sia stato definito **_USE_32BIT_TIME_T** , nel qual caso è equivalente a **_mktime32**.

Dopo la regolazione dell'ora UTC, **_mktime32** gestisce le date dalla mezzanotte del 1 gennaio 1970 al 23:59:59 del 18 gennaio 2038, ora UTC. **_mktime64** gestisce le date dalla mezzanotte del 1 gennaio 1970 al 23:59:59, 31 dicembre 3000. Questa modifica può causare la restituzione di queste funzioni-1 (cast a **time_t**, **__time32_t** o **__time64_t**) anche se la data specificata rientra nell'intervallo. Ad esempio, se ci si trova a Il Cairo, Egitto, che è due ore avanti rispetto a UTC, verranno innanzitutto sottratte due ore dalla data specificata in *timeptr*. Ciò potrebbe causare l'uscita della data specificata dall'intervallo consentito.

Queste funzioni possono essere usate per convalidare e compilare una struttura tm. In caso di esito positivo, queste funzioni impostano i valori di **tm_wday** e **tm_yday** come appropriato e impostano gli altri componenti in modo da rappresentare la data di calendario specificata, ma con i relativi valori forzati negli intervalli normali. Il valore finale di **tm_mday** non viene impostato fino a quando non vengono determinati **tm_mon** e **tm_year** . Quando si specifica un'ora di struttura **TM** , impostare il campo **tm_isdst** su:

- Zero (0) per indicare che è attiva l'ora solare.

- Un valore maggiore di 0 per indicare che è attiva l'ora legale.

- Un valore minore di zero per fare in modo che il codice della libreria di runtime del linguaggio C calcoli se è attiva l'ora legale o l'ora solare.

La libreria di runtime C determinerà le impostazioni relative al comportamento dell'ora legale in base alla variabile di ambiente [TZ](tzset.md). Se **TZ** non è impostato, viene usata la chiamata API Win32 [GetTimeZoneInformation](/windows/win32/api/timezoneapi/nf-timezoneapi-gettimezoneinformation) per ottenere le informazioni sull'ora legale dal sistema operativo. Se anche questo metodo non riesce, la libreria presupporrà l'uso delle regole relative agli Stati Uniti per implementare il calcolo dell'ora legale. **tm_isdst** è un campo obbligatorio. Se non impostato, il relativo valore resta non definito e il valore restituito da queste funzioni è imprevedibile. Se *timeptr* punta a una struttura **TM** restituita da una precedente chiamata [a asctime](asctime-wasctime.md), [gmtime](gmtime-gmtime32-gmtime64.md)o [localtime](localtime-localtime32-localtime64.md) (o varianti di queste funzioni), il campo **tm_isdst** contiene il valore corretto.

Si noti che **gmtime** e **localtime** ( **e _gmtime32**, **_gmtime64**, **_localtime32**e **_localtime64**) usano un singolo buffer per thread per la conversione. Se si fornisce questo buffer a **mktime**, **_mktime32** o **_mktime64**, il contenuto precedente viene eliminato definitivamente.

Queste funzioni convalidano il proprio parametro. Se *timeptr* è un puntatore Null, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, le funzioni restituiscono-1 e impostano **errno** su **EINVAL**.

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
