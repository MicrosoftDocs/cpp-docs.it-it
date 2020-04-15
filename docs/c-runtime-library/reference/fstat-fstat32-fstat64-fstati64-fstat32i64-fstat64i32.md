---
title: _fstat, _fstat32, _fstat64, _fstati64, _fstat32i64, _fstat64i32
ms.date: 4/2/2020
api_name:
- _fstat32
- _fstat64
- _fstati64
- _fstat
- _fstat64i32
- _fstat32i64
- _o__fstat32
- _o__fstat32i64
- _o__fstat64
- _o__fstat64i32
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
- api-ms-win-crt-filesystem-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _fstat32i64
- fstat
- fstat64i32
- _fstat64
- _fstati64
- fstat64
- _fstat32
- fstat32i64
- fstati64
- _fstat
- fstat32
- _fstat64i32
helpviewer_keywords:
- _fstat64 function
- fstati64 function
- _fstat64i32 function
- _fstat32i64 function
- _fstat32 function
- file information
- fstat64i32 function
- fstat32 function
- fstat function
- fstat64 function
- _fstat function
- _fstati64 function
- fstat32i64 function
ms.assetid: 088f5e7a-9636-4cf7-ab8e-e28d2aa4280a
ms.openlocfilehash: 02d297fec2ada545a8b693abacfecc7981149dae
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81345676"
---
# <a name="_fstat-_fstat32-_fstat64-_fstati64-_fstat32i64-_fstat64i32"></a>_fstat, _fstat32, _fstat64, _fstati64, _fstat32i64, _fstat64i32

Ottiene informazioni su un file aperto.

## <a name="syntax"></a>Sintassi

```C
int _fstat(
   int fd,
   struct _stat *buffer
);
int _fstat32(
   int fd,
   struct __stat32 *buffer
);
int _fstat64(
   int fd,
   struct __stat64 *buffer
);
int _fstati64(
   int fd,
   struct _stati64 *buffer
);
int _fstat32i64(
   int fd,
   struct _stat32i64 *buffer
);
int _fstat64i32(
   int fd,
   struct _stat64i32 *buffer
);
```

### <a name="parameters"></a>Parametri

*Fd*<br/>
Descrittore di file del file aperto.

*buffer*<br/>
Puntatore alla struttura per l'archiviazione dei risultati.

## <a name="return-value"></a>Valore restituito

Restituisce 0 se si ottengono le informazioni sullo stato dei file. Un valore restituito di -1 indica un errore. Se il descrittore di file non è valido o *il buffer* è **NULL**, viene richiamato il gestore di parametri non validi, come descritto in Convalida [dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostato su **EBADF**, nel caso di un descrittore di file non valido, o **su EINVAL**, se *buffer* è **NULL**.

## <a name="remarks"></a>Osservazioni

La funzione **_fstat** ottiene informazioni sul file aperto associato a *fd* e le archivia nella struttura a cui punta *buffer*. La struttura **_stat,** definita in SYS-Stat.h, contiene i campi riportati di seguito.

|Campo|Significato|
|-|-|
| **st_atime** | Ora dell'ultimo accesso al file. |
| **st_ctime** | Ora di creazione del file. |
| **st_dev** | Se un dispositivo, *fd*; in caso contrario 0. |
| **st_mode** | Maschera di bit per informazioni sulla modalità di file. Il **bit _S_IFCHR** viene impostato se *fd* fa riferimento a un dispositivo. Il **bit _S_IFREG** viene impostato se *fd* si riferisce a un file ordinario. I bit di lettura/scrittura vengono impostati in base alla modalità di autorizzazione del file. **_S_IFCHR** e altre costanti sono definite in SYS. |
| **st_mtime** | Ora dell'ultima modifica del file. |
| **st_nlink** | Sempre 1 nel file system non NTFS. |
| **st_rdev** | Se un dispositivo, *fd*; in caso contrario 0. |
| **st_size** | Dimensioni del file, in byte. |

Se *fd* fa riferimento a un dispositivo, i campi **st_atime**, **st_ctime**, **st_mtime**e **st_size** non sono significativi.

Dato che Stat.h usa il tipo [dev_t](../../c-runtime-library/standard-types.md) definito in Types.h, è necessario includere Types.h prima di Stat.h nel codice.

**_fstat64**, che utilizza la struttura **__stat64,** consente di esprimere le date di creazione dei file fino alle 23:59:59, 31 dicembre 3000 UTC; mentre le altre funzioni rappresentano solo le date fino alle 23:59:59 del 18 gennaio 2038 UTC. La mezzanotte del 1 gennaio 1970 è il limite inferiore dell'intervallo di date per tutte queste funzioni.

Le variazioni di queste funzioni supportano tipi time a 32 o 64 bit e lunghezze di file a 32 o a 64 bit. Il primo suffisso numerico (**32** o **64**) indica la dimensione del tipo di tempo utilizzato; il secondo suffisso è **i32** o **i64**, che indica se la dimensione del file è rappresentata come intero a 32 bit o a 64 bit.

**_fstat** è equivalente a **_fstat64i32**e **_stat** **struct** contiene un'ora a 64 bit. Questo è vero a meno che non sia definito **_USE_32BIT_TIME_T,** nel qual caso il comportamento precedente è attivo; **_fstat** utilizza un'ora a 32 bit e **_stat** **struct** contiene un'ora a 32 bit. Lo stesso vale per **_fstati64**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="time-type-and-file-length-type-variations-of-_stat"></a>Variazioni tipo time e tipo lunghezza file di _stat

|Funzioni|_USE_32BIT_TIME_T definito?|Tipo time|Tipo lunghezza file|
|---------------|------------------------------------|---------------|----------------------|
|**_fstat**|Non definito|64 bit|32 bit|
|**_fstat**|Definito|32 bit|32 bit|
|**_fstat32**|Non interessato dalla definizione macro|32 bit|32 bit|
|**_fstat64**|Non interessato dalla definizione macro|64 bit|64 bit|
|**_fstati64**|Non definito|64 bit|64 bit|
|**_fstati64**|Definito|32 bit|64 bit|
|**_fstat32i64**|Non interessato dalla definizione macro|32 bit|64 bit|
|**_fstat64i32**|Non interessato dalla definizione macro|64 bit|32 bit|

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**_fstat**|\<sys/stat.h> e \<sys/types.h>|
|**_fstat32**|\<sys/stat.h> e \<sys/types.h>|
|**_fstat64**|\<sys/stat.h> e \<sys/types.h>|
|**_fstati64**|\<sys/stat.h> e \<sys/types.h>|
|**_fstat32i64**|\<sys/stat.h> e \<sys/types.h>|
|**_fstat64i32**|\<sys/stat.h> e \<sys/types.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_fstat.c
// This program uses _fstat to report
// the size of a file named F_STAT.OUT.

#include <io.h>
#include <fcntl.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <share.h>

int main( void )
{
   struct _stat buf;
   int fd, result;
   char buffer[] = "A line to output";
   char timebuf[26];
   errno_t err;

   _sopen_s( &fd,
             "f_stat.out",
             _O_CREAT | _O_WRONLY | _O_TRUNC,
             _SH_DENYNO,
             _S_IREAD | _S_IWRITE );
   if( fd != -1 )
      _write( fd, buffer, strlen( buffer ) );

   // Get data associated with "fd":
   result = _fstat( fd, &buf );

   // Check if statistics are valid:
   if( result != 0 )
   {
      if (errno == EBADF)
        printf( "Bad file descriptor.\n" );
      else if (errno == EINVAL)
        printf( "Invalid argument to _fstat.\n" );
   }
   else
   {
      printf( "File size     : %ld\n", buf.st_size );
      err = ctime_s(timebuf, 26, &buf.st_mtime);
      if (err)
      {
         printf("Invalid argument to ctime_s.");
         exit(1);
      }
      printf( "Time modified : %s", timebuf );
   }
   _close( fd );
}
```

```Output
File size     : 16
Time modified : Wed May 07 15:25:11 2003
```

## <a name="see-also"></a>Vedere anche

[Gestione dei file](../../c-runtime-library/file-handling.md)<br/>
[_access, _waccess](access-waccess.md)<br/>
[_chmod, _wchmod](chmod-wchmod.md)<br/>
[_filelength, _filelengthi64](filelength-filelengthi64.md)<br/>
[Funzioni _stat, _wstat](stat-functions.md)<br/>
