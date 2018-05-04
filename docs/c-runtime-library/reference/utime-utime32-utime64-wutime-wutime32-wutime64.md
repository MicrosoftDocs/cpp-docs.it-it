---
title: _utime, _utime32, _utime64, _wutime, _wutime32, _wutime64 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _utime64
- _utime
- _wutime
- _wutime64
- _wutime32
- _utime32
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
- _tutime
- _utime64
- wutime
- utime32
- wutime64
- _utime
- wutime32
- _wutime
- utime
- utime64
- _wutime64
- _utime32
- _tutime64
- _wutime32
dev_langs:
- C++
helpviewer_keywords:
- tutime function
- utime32 function
- utime64 function
- _utime function
- _tutime32 function
- time [C++], file modification
- wutime function
- _wutime function
- _wutime32 function
- _tutime64 function
- _tutime function
- files [C++], modification time
- _wutime64 function
- _utime32 function
- utime function
- _utime64 function
- wutime64 function
- wutime32 function
- tutime64 function
- tutime32 function
ms.assetid: 8d482d40-19b9-4591-bfee-5d7f601d1a9e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cd8737d6391ea1effd50e967008520b2d77707e6
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="utime-utime32-utime64-wutime-wutime32-wutime64"></a>_utime, _utime32, _utime64, _wutime, _wutime32, _wutime64

Imposta l'ora di modifica del file.

## <a name="syntax"></a>Sintassi

```C
int _utime(
   const char *filename,
   struct _utimbuf *times
);
int _utime32(
   const char *filename,
   struct __utimbuf32 *times
);
int _utime64(
   const char *filename,
   struct __utimbuf64 *times
);
int _wutime(
   const wchar_t *filename,
   struct _utimbuf *times
);
int _wutime32(
   const wchar_t *filename,
   struct __utimbuf32 *times
);
int _wutime64(
   const wchar_t *filename,
   struct __utimbuf64 *times
);
```

### <a name="parameters"></a>Parametri

*filename*<br/>
Puntatore a una stringa contenente il percorso o il nome del file.

*Volte*<br/>
Puntatore ai valori di ora archiviati.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce 0 se l'ora di modifica del file è cambiata. Il valore restituito-1 indica un errore. Se viene passato un parametro non valido, viene richiamato il gestire di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono -1 e **errno** è impostata su uno dei valori seguenti:

|Valore errno|Condizione|
|-|-|
**EACCES**|Il percorso specifica una directory o un file di sola lettura
**EINVAL**|Non valido *volte* argomento
**EMFILE**|Troppi file aperti (il file deve essere aperto per modificarne l'ora di modifica)
**ENOENT**|Percorso o nome del file non trovato

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

La data può essere modificata per un file, se la data di modifica è successiva alla mezzanotte del 1 gennaio 1970 e precedente alla data di fine della funzione usata. **utime** e **wutime** usare un valore di ora a 64 bit, pertanto la data di fine è 23:59:59, 31 dicembre 3000 UTC. Se **_USE_32BIT_TIME_T** è definito per forzare il comportamento precedente, la data di fine è 23:59:59 18 gennaio 2038, UTC. **_utime32** oppure **_wutime32** usano un tipo time a 32 bit indipendentemente dal fatto che **_USE_32BIT_TIME_T** è definito e producono sempre la data di fine precedente. **_utime64** oppure **_wutime64** utilizzare sempre il tipo time a 64 bit, in modo da queste funzioni supportano sempre la data di fine successiva.

## <a name="remarks"></a>Note

Il **utime** funzione imposta l'ora di modifica per il file specificato da *filename * *.* Il processo deve disporre dell'accesso in scrittura al file per poter modificare l'ora. Nel sistema operativo Windows, è possibile modificare il tempo di accesso e l'ora di modifica nel **utimbuf** struttura. Se *volte* è un **NULL** puntatore, l'ora di modifica è impostata sull'ora locale corrente. In caso contrario, *volte* deve puntare a una struttura di tipo **utimbuf**, definito in SYS\UTIME. H.

Il **utimbuf** struttura archivia tempi di accesso e modifica di file utilizzati dal **utime** per cambiare le date di modifica dei file. La struttura contiene i campi seguenti, che sono entrambi di tipo **time_t**:

|Campo||
|-|-|
**actime**|Ora di accesso al file
**modtime**|Ora di modifica del file

Versioni specifiche del **utimbuf** struttura (**_utimebuf32** e **__utimbuf64**) vengono definiti utilizzando le versioni a 32 e 64 bit di tipo time. Queste strutture vengono usate nelle versioni a 32 bit e 64 bit specifiche di questa funzione. **utimbuf** automaticamente per impostazione predefinita viene utilizzato un tipo time a 64 bit, a meno che **_USE_32BIT_TIME_T** è definito.

**utime** è identica a **futime** ad eccezione del fatto che il *filename* argomento del **utime** è un nome di file o un percorso a un file, anziché a un descrittore del file di un Aprire il file.

**wutime** è una versione a caratteri "wide" **utime**; il *filename* argomento **wutime** è una stringa di caratteri "wide". A parte ciò, queste funzioni si comportano in modo identico.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tutime**|**_utime**|**_utime**|**_wutime**|
|**_tutime32**|**_utime32**|**_utime32**|**_wutime32**|
|**_tutime64**|**_utime64**|**_utime64**|**_wutime64**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazioni obbligatorie|Intestazioni facoltative|
|-------------|----------------------|----------------------|
|**utime**, **_utime32**, **_utime64**|\<sys/utime.h>|\<errno.h>|
|**_utime64**|\<sys/utime.h>|\<errno.h>|
|**_wutime**|\<utime.h> o \<wchar.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Questo programma utilizza **utime** per impostare l'ora di modifica dei file all'ora corrente.

```C
// crt_utime.c
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/utime.h>
#include <time.h>

int main( void )
{
   struct tm tma = {0}, tmm = {0};
   struct _utimbuf ut;

   // Fill out the accessed time structure
   tma.tm_hour = 12;
   tma.tm_isdst = 0;
   tma.tm_mday = 15;
   tma.tm_min = 0;
   tma.tm_mon = 0;
   tma.tm_sec = 0;
   tma.tm_year = 103;

   // Fill out the modified time structure
   tmm.tm_hour = 12;
   tmm.tm_isdst = 0;
   tmm.tm_mday = 15;
   tmm.tm_min = 0;
   tmm.tm_mon = 0;
   tmm.tm_sec = 0;
   tmm.tm_year = 102;

   // Convert tm to time_t
   ut.actime = mktime(&tma);
   ut.modtime = mktime(&tmm);

   // Show file time before and after
   system( "dir crt_utime.c" );
   if( _utime( "crt_utime.c", &ut ) == -1 )
      perror( "_utime failed\n" );
   else
      printf( "File time modified\n" );
   system( "dir crt_utime.c" );
}
```

### <a name="sample-output"></a>Esempio di output

```Output
Volume in drive C has no label.
Volume Serial Number is 9CAC-DE74

Directory of C:\test

01/09/2003  05:38 PM               935 crt_utime.c
               1 File(s)            935 bytes
               0 Dir(s)  20,742,955,008 bytes free
File time modified
Volume in drive C has no label.
Volume Serial Number is 9CAC-DE74

Directory of C:\test

01/15/2002  12:00 PM               935 crt_utime.c
               1 File(s)            935 bytes
               0 Dir(s)  20,742,955,008 bytes free
```

## <a name="see-also"></a>Vedere anche

[Gestione dell'ora](../../c-runtime-library/time-management.md)<br/>
[asctime, _wasctime](asctime-wasctime.md)<br/>
[ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)<br/>
[_fstat, _fstat32, _fstat64, _fstati64, _fstat32i64, _fstat64i32](fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md)<br/>
[_ftime, _ftime32, _ftime64](ftime-ftime32-ftime64.md)<br/>
[_futime, _futime32, _futime64](futime-futime32-futime64.md)<br/>
[gmtime, _gmtime32, _gmtime64](gmtime-gmtime32-gmtime64.md)<br/>
[localtime, _localtime32, _localtime64](localtime-localtime32-localtime64.md)<br/>
[Funzioni _stat, _wstat](stat-functions.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
