---
title: _utime, _utime32, _utime64, _wutime, _wutime32, _wutime64
ms.date: 4/2/2020
api_name:
- _utime64
- _utime
- _wutime
- _wutime64
- _wutime32
- _utime32
- _o__utime32
- _o__utime64
- _o__wutime32
- _o__wutime64
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
ms.openlocfilehash: dbff557cd116eb1df44f015b17716408c8dc54c2
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82912135"
---
# <a name="_utime-_utime32-_utime64-_wutime-_wutime32-_wutime64"></a>_utime, _utime32, _utime64, _wutime, _wutime32, _wutime64

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

*volte*<br/>
Puntatore ai valori di ora archiviati.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce 0 se l'ora di modifica del file è cambiata. Un valore restituito di-1 indica un errore. Se viene passato un parametro non valido, viene richiamato il gestire di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono-1 e **errno** viene impostato su uno dei valori seguenti:

|Valore errno|Condizione|
|-|-|
| **EACCES** | Il percorso specifica una directory o un file di sola lettura |
| **EINVAL** | Argomento *Times* non valido |
| **EMFILE** | Troppi file aperti (il file deve essere aperto per modificarne l'ora di modifica) |
| **ENOENT** | Percorso o nome del file non trovato |

Per altre informazioni su questo e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

La data può essere modificata per un file, se la data di modifica è successiva alla mezzanotte del 1 gennaio 1970 e precedente alla data di fine della funzione usata. **_utime** e **_wutime** utilizzano un valore di ora a 64 bit, quindi la data di fine è 23:59:59, 31 dicembre 3000, UTC. Se **_USE_32BIT_TIME_T** viene definito per forzare il comportamento precedente, la data di fine è 23:59:59 del 18 gennaio 2038, UTC. **_utime32** o **_wutime32** utilizzano un tipo di ora a 32 bit, indipendentemente dal fatto che **_USE_32BIT_TIME_T** sia definito e che dispongano sempre della data di fine precedente. **_utime64** o **_wutime64** utilizzano sempre il tipo di ora a 64 bit, in modo che queste funzioni supportino sempre la data di fine successiva.

## <a name="remarks"></a>Osservazioni

La funzione **_utime** imposta l'ora di modifica per il file specificato da *filename*. Il processo deve disporre dell'accesso in scrittura al file per poter modificare l'ora. Nel sistema operativo Windows è possibile modificare l'ora di accesso e l'ora di modifica nella struttura del **_utimbuf** . Se *Times* è un puntatore **null** , l'ora di modifica viene impostata sull'ora locale corrente. In caso contrario, gli *orari* devono puntare a una struttura di tipo **_utimbuf**, definita in SYS\UTIME. H.

La struttura di **_utimbuf** archivia le ore di accesso e modifica dei file usate da **_utime** per modificare le date di modifica dei file. La struttura presenta i campi seguenti, entrambi di tipo **time_t**:

| Campo |   |
|-------|---|
| **actime** | Ora di accesso al file |
| **modtime** | Ora di modifica del file |

Le versioni specifiche della struttura **_utimbuf** (**_utimebuf32** e **__utimbuf64**) vengono definite utilizzando le versioni a 32 bit e 64 bit del tipo time. Queste strutture vengono usate nelle versioni a 32 bit e 64 bit specifiche di questa funzione. **_utimbuf** per impostazione predefinita utilizza un tipo di ora a 64 bit a meno che non sia stato definito **_USE_32BIT_TIME_T** .

**_utime** è identico a **_futime** ad eccezione del fatto che l'argomento *filename* di **_utime** è un nome file o un percorso di un file, anziché un descrittore di file di un file aperto.

**_wutime** è una versione a caratteri wide di **_utime**; l'argomento *filename* per **_wutime** è una stringa di caratteri wide. A parte ciò, queste funzioni si comportano in modo identico.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tutime**|**_utime**|**_utime**|**_wutime**|
|**_tutime32**|**_utime32**|**_utime32**|**_wutime32**|
|**_tutime64**|**_utime64**|**_utime64**|**_wutime64**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazioni obbligatorie|Intestazioni facoltative|
|-------------|----------------------|----------------------|
|**_utime**, **_utime32**, **_utime64**|\<sys/utime.h>|\<errno.h>|
|**_utime64**|\<sys/utime.h>|\<errno.h>|
|**_wutime**|\<utime.h> o \<wchar.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Questo programma usa **_utime** per impostare l'ora di modifica del file sull'ora corrente.

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

### <a name="sample-output"></a>Output di esempio

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

[Gestione del tempo](../../c-runtime-library/time-management.md)<br/>
[asctime, _wasctime](asctime-wasctime.md)<br/>
[ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)<br/>
[_fstat, _fstat32, _fstat64, _fstati64, _fstat32i64, _fstat64i32](fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md)<br/>
[_ftime, _ftime32, _ftime64](ftime-ftime32-ftime64.md)<br/>
[_futime, _futime32, _futime64](futime-futime32-futime64.md)<br/>
[gmtime, _gmtime32, _gmtime64](gmtime-gmtime32-gmtime64.md)<br/>
[localtime, _localtime32, _localtime64](localtime-localtime32-localtime64.md)<br/>
[Funzioni _stat, _wstat](stat-functions.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
