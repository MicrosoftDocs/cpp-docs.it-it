---
title: _stat, _stat32, _stat64, _stati64, _stat32i64, _stat64i32, _wstat, _wstat32, _wstat64, _wstati64, _wstat32i64, _wstat64i32
ms.date: 4/2/2020
api_name:
- _wstat64
- _stati64
- _stat32
- _stat32i64
- _stat
- _wstati64
- _wstat32
- _wstat64i32
- _wstat
- _stat64
- _stat64i32
- _wstat32i64
- _o__stat32
- _o__stat32i64
- _o__stat64
- _o__stat64i32
- _o__wstat32
- _o__wstat32i64
- _o__wstat64
- _o__wstat64i32
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
- tstat32
- tstat
- _tstat64i32
- tstati64
- _wstat64
- _wstat32
- wstati64
- tstat64
- _stati64
- _wstat
- wstat64i32
- stat32i64
- tstat32i64
- _tstat
- _wstati64
- _tstati64
- _wstat32i64
- wstat32
- _wstat64i32
- _stat
- _tstat32
- stat64i32
- wstat64
- stat
- _stat32i64
- _stat32
- stati64
- wstat
- _stat64i32
- stat32
- _tstat32i64
- tstat64i32
- _tstat64
- _stat64
- stat/_stat
- stat/_stat32
- stat/_stat64
- stat/_stati64
- stat/_stat32i64
- stat/_stat64i32
- stat/_wstat
- stat/_wstat32
- stat/_wstat64
- stat/_wstati64
- stat/_wstat32i64
- stat/_wstat64i32
helpviewer_keywords:
- files [C++], status information
- _stat function
- _wstat function
- _stat64i32 function
- tstat function
- _tstat64i32 function
- _stati64 function
- _stat64 function
- tstati64 function
- wstati64 function
- wstat64 function
- _wstat64i32 function
- _tstat32i64 function
- _stat32i64 function
- stat function
- status of files
- _tstat32 function
- tstat64 function
- _wstat64 function
- _tstat function
- _stat32 function
- wstat function
- _wstat32i64 function
- _tstati64 function
- _wstat32 function
- stat64 function
- stati64 function
- _wstati64 function
- _tstat64 function
- files [C++], getting status information
ms.assetid: 99a75ae6-ff26-47ad-af70-5ea7e17226a5
ms.openlocfilehash: 32a96a93eb8a18e366ac7a075b414dbca732fb61
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81355407"
---
# <a name="_stat-_stat32-_stat64-_stati64-_stat32i64-_stat64i32-_wstat-_wstat32-_wstat64-_wstati64-_wstat32i64-_wstat64i32"></a>_stat, _stat32, _stat64, _stati64, _stat32i64, _stat64i32, _wstat, _wstat32, _wstat64, _wstati64, _wstat32i64, _wstat64i32

Ottenere informazioni sullo stato di un file.

## <a name="syntax"></a>Sintassi

```C
int _stat(
   const char *path,
   struct _stat *buffer
);
int _stat32(
   const char *path,
   struct __stat32 *buffer
);
int _stat64(
   const char *path,
   struct __stat64 *buffer
);
int _stati64(
   const char *path,
   struct _stati64 *buffer
);
int _stat32i64(
   const char *path,
   struct _stat32i64 *buffer
);
int _stat64i32(
   const char *path,
   struct _stat64i32 *buffer
);
int _wstat(
   const wchar_t *path,
   struct _stat *buffer
);
int _wstat32(
   const wchar_t *path,
   struct __stat32 *buffer
);
int _wstat64(
   const wchar_t *path,
   struct __stat64 *buffer
);
int _wstati64(
   const wchar_t *path,
   struct _stati64 *buffer
);
int _wstat32i64(
   const wchar_t *path,
   struct _stat32i64 *buffer
);
int _wstat64i32(
   const wchar_t *path,
   struct _stat64i32 *buffer
);
```

### <a name="parameters"></a>Parametri

*Percorso*<br/>
Puntatore a una stringa contenente il percorso del file o directory esistente.

*buffer*<br/>
Puntatore alla struttura che archivia i risultati.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce 0 se si ottengono le informazioni sullo stato dei file. Un valore restituito di -1 indica un errore, nel qual caso **errno** è impostato su **ENOENT**, che indica che il nome del file o il percorso non è stato trovato. Un valore restituito di **EINVAL** indica un parametro non valido. **errno** è anche impostato su **EINVAL** in questo caso.

Per ulteriori informazioni su questo e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr.](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)

L'indicatore di data in un file può essere rappresentato se è successivo alla mezzanotte del 1 gennaio 1970 e prima delle 23:59:59, 31 dicembre 3000, UTC, a meno che non si utilizzi **_stat32** o **_wstat32**o se si abbia definito **_USE_32BIT_TIME_T**, nel qual caso la data può essere rappresentata solo fino alle 23:59:59 18 gennaio 2038.

## <a name="remarks"></a>Osservazioni

La funzione **_stat** ottiene informazioni sul file o sulla directory specificata da *path* e le archivia nella struttura a cui punta *buffer*. **_stat** gestisce automaticamente gli argomenti di stringa di caratteri multibyte in base alle esigenze, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici multibyte attualmente in uso.

**_wstat** è una versione a caratteri wide di **_stat**; l'argomento *path* di **_wstat** è una stringa di caratteri wide. **_wstat** e **_stat** si comportano in modo identico, ad eccezione del fatto che **_wstat** non gestisce le stringhe di caratteri multibyte.

Le variazioni di queste funzioni supportano tipi time a 32 o 64 bit e lunghezze di file a 32 o a 64 bit. Il primo suffisso numerico (**32** o **64**) indica la dimensione del tipo di tempo utilizzato; il secondo suffisso è **i32** o **i64**, che indica se la dimensione del file è rappresentata come intero a 32 bit o a 64 bit.

**_stat** è equivalente a **_stat64i32**e **_stat** **struct** contiene un'ora a 64 bit. Questo è vero a meno che non sia definito **_USE_32BIT_TIME_T,** nel qual caso il comportamento precedente è attivo; **_stat** utilizza un tempo a 32 bit e **_stat** **struct** contiene un'ora a 32 bit. Lo stesso vale per **_stati64**.

> [!NOTE]
> **_wstat** non funziona con i collegamenti simbolici di Windows Vista. In questi casi, **_wstat** segnalerà sempre una dimensione del file pari a 0. **_stat** funziona correttamente con i collegamenti simbolici.

Questa funzione convalida i relativi parametri. Se *path* o *buffer* è **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="time-type-and-file-length-type-variations-of-_stat"></a>Variazioni tipo time e tipo lunghezza file di _stat

|Funzioni|_USE_32BIT_TIME_T definito?|Tipo time|Tipo lunghezza file|
|---------------|------------------------------------|---------------|----------------------|
|**_stat**, **_wstat**|Non definito|64 bit|32 bit|
|**_stat**, **_wstat**|Definito|32 bit|32 bit|
|**_stat32**, **_wstat32**|Non interessato dalla definizione macro|32 bit|32 bit|
|**_stat64**, **_wstat64**|Non interessato dalla definizione macro|64 bit|64 bit|
|**_stati64**, **_wstati64**|Non definito|64 bit|64 bit|
|**_stati64**, **_wstati64**|Definito|32 bit|64 bit|
|**_stat32i64** **_wstat32i64**|Non interessato dalla definizione macro|32 bit|64 bit|
|**_stat64i32**, **_wstat64i32**|Non interessato dalla definizione macro|64 bit|32 bit|

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tstat**|**_stat**|**_stat**|**_wstat**|
|**_tstat64**|**_stat64**|**_stat64**|**_wstat64**|
|**_tstati64**|**_stati64**|**_stati64**|**_wstati64**|
|**_tstat32i64**|**_stat32i64**|**_stat32i64**|**_wstat32i64**|
|**_tstat64i32**|**_stat64i32**|**_stat64i32**|**_wstat64i32**|

La struttura **_stat,** definita in SYS-STAT. H, include i seguenti campi.

|Campo||
|-|-|
| **st_gid** | Identificatore numerico del gruppo cui appartiene il file (specifico di UNIX). Questo campo sarà sempre zero nei sistemi Windows. Un file reindirizzato viene classificato come file di Windows. |
| **st_atime** | Ora dell'ultimo accesso del file. Valido su NTFS, ma non nelle unità disco formattate come FAT. |
| **st_ctime** | Ora di creazione del file. Valido su NTFS, ma non nelle unità disco formattate come FAT. |
| **st_dev** | Numero dell'unità del disco contenente il file (uguale **a st_rdev**). |
| **st_ino** | Numero del nodo di informazioni **(inode**) per il file (specifico DI UNIX). Nei file system UNIX, **l'inode** descrive gli indicatori di data e ora, le autorizzazioni e il contenuto del file. Quando i file sono collegati in modo rigido tra loro, condividono lo stesso **inode**. **L'inode**, e quindi **st_ino**, non ha alcun significato nei file system FAT, HPFS o NTFS. |
| **st_mode** | Maschera di bit per informazioni sulla modalità di file. Il **bit _S_IFDIR** viene impostato se *path* specifica una directory; **l'_S_IFREG** bit viene impostato se *path* specifica un file ordinario o un dispositivo. I bit di lettura/scrittura dell'utente sono impostati in base alla modalità di autorizzazione del file; i bit di esecuzione utente sono impostati secondo l'estensione. |
| **st_mtime** | Ora dell'ultima modifica del file. |
| **st_nlink** | Sempre 1 nel file system non NTFS. |
| **st_rdev** | Numero di unità del disco contenente il file (uguale **a st_dev**). |
| **st_size** | Dimensione del file in byte; un numero intero a 64 bit per le varianti con il suffisso **i64.** |
| **st_uid** | Identificatore numerico dell'utente proprietario del file (specifico di UNIX). Questo campo sarà sempre zero nei sistemi Windows. Un file reindirizzato viene classificato come file di Windows. |

Se *path* fa riferimento a un dispositivo, i **campi st_size**, vari campi ora, **st_dev**e **st_rdev** nella struttura **_stat** sono privi di significato. Dal momento che STAT.H usa il tipo [dev_t](../../c-runtime-library/standard-types.md) definito in TYPES.H, è necessario includere TYPES.H prima di STAT.H nel codice.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazioni facoltative|
|-------------|---------------------|----------------------|
|**_stat**, **_stat32**, **_stat64**, **_stati64**, **_stat32i64**, **_stat64i32**|\<sys/types.h> seguito da \<sys/stat.h>|\<errno.h>|
|**_wstat**, **_wstat32**, **_wstat64**, **_wstati64**, **_wstat32i64** **_wstat64i32**|\<sys/types.h> seguito da \<sys/stat.h> o \<wchar.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_stat.c
// This program uses the _stat function to
// report information about the file named crt_stat.c.

#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <errno.h>

int main( void )
{
   struct _stat buf;
   int result;
   char timebuf[26];
   char* filename = "crt_stat.c";
   errno_t err;

   // Get data associated with "crt_stat.c":
   result = _stat( filename, &buf );

   // Check if statistics are valid:
   if( result != 0 )
   {
      perror( "Problem getting information" );
      switch (errno)
      {
         case ENOENT:
           printf("File %s not found.\n", filename);
           break;
         case EINVAL:
           printf("Invalid parameter to _stat.\n");
           break;
         default:
           /* Should never be reached. */
           printf("Unexpected error in _stat.\n");
      }
   }
   else
   {
      // Output some of the statistics:
      printf( "File size     : %ld\n", buf.st_size );
      printf( "Drive         : %c:\n", buf.st_dev + 'A' );
      err = ctime_s(timebuf, 26, &buf.st_mtime);
      if (err)
      {
         printf("Invalid arguments to ctime_s.");
         exit(1);
      }
      printf( "Time modified : %s", timebuf );
   }
}
```

```Output
File size     : 732
Drive         : C:
Time modified : Thu Feb 07 14:39:36 2002
```

## <a name="see-also"></a>Vedere anche

[Gestione dei file](../../c-runtime-library/file-handling.md)<br/>
[_access, _waccess](access-waccess.md)<br/>
[_fstat, _fstat32, _fstat64, _fstati64, _fstat32i64, _fstat64i32](fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md)<br/>
[_getmbcp](getmbcp.md)<br/>
[_setmbcp](setmbcp.md)<br/>
