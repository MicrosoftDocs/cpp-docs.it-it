---
title: _utime, _utime32, _utime64, _wutime, _wutime32, _wutime64 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
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
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f94c67fe75f5675192dbd0f306d8eef0aace70f5
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="utime-utime32-utime64-wutime-wutime32-wutime64"></a>_utime, _utime32, _utime64, _wutime, _wutime32, _wutime64
Imposta l'ora di modifica del file.  
  
## <a name="syntax"></a>Sintassi  
  
```  
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
  
#### <a name="parameters"></a>Parametri  
 `filename`  
 Puntatore a una stringa contenente il percorso o il nome del file.  
  
 `times`  
 Puntatore ai valori di ora archiviati.  
  
## <a name="return-value"></a>Valore restituito  
 Ognuna di queste funzioni restituisce 0 se l'ora di modifica del file è cambiata. Il valore restituito-1 indica un errore. Se viene passato un parametro non valido, viene richiamato il gestire di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono -1 e `errno` viene impostato su uno dei valori seguenti:  
  
 `EACCES`  
 Il percorso specifica una directory o un file di sola lettura  
  
 `EINVAL`  
 Argomento `times` non valido  
  
 `EMFILE`  
 Troppi file aperti (il file deve essere aperto per modificarne l'ora di modifica)  
  
 `ENOENT`  
 Percorso o nome del file non trovato  
  
 Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 La data può essere modificata per un file, se la data di modifica è successiva alla mezzanotte del 1 gennaio 1970 e precedente alla data di fine della funzione usata. `_utime` e `_wutime` usano un valore di ora a 64 bit, quindi la data di fine corrisponde alle 23.59.59 del 31 dicembre 3000, UTC. Se si definisce `_USE_32BIT_TIME_T` per forzare il comportamento precedente, la data di fine corrisponde alle 23.59.59 del 18 gennaio 2038, UTC. Le funzioni `_utime32` o `_wutime32` usano un tipo di ora a 32 bit indipendentemente dal fatto che sia definito `_USE_32BIT_TIME_T` e la data di fine è sempre quella precedente. Le funzioni `_utime64` o `_wutime64` usano sempre il tipo di ora a 64 bit e pertanto supportano sempre la data di fine successiva.  
  
## <a name="remarks"></a>Note  
 La funzione `_utime` imposta l'ora di modifica per il file specificato da `filename`*.* Il processo deve disporre dell'accesso in scrittura al file per poter modificare l'ora. Nel sistema operativo Windows, è possibile modificare l'ora di accesso e l'ora di modifica nella struttura `_utimbuf`. Se `times` è un puntatore `NULL`, l'ora di modifica è impostata sull'ora locale corrente. In caso contrario, `times` deve puntare a una struttura di tipo `_utimbuf`, definita in SYS\UTIME. H.  
  
 La struttura `_utimbuf` archivia le ore di accesso e modifica dei file usate da `_utime` per modificare le date di modifica dei file. La struttura contiene i campi seguenti, entrambi di tipo `time_t`:  
  
 `actime`  
 Ora di accesso al file  
  
 `modtime`  
 Ora di modifica del file  
  
 Vengono definite versioni specifiche della struttura `_utimbuf` (`_utimebuf32` e `__utimbuf64`) usando le versioni a 32 bit e 64 bit del tipo di ora. Queste strutture vengono usate nelle versioni a 32 bit e 64 bit specifiche di questa funzione. La struttura `_utimbuf` stessa usa un tipo di ora a 64 bit per impostazione predefinita, a meno che non venga definito `_USE_32BIT_TIME_T`.  
  
 La funzione `_utime` è identica a `_futime`, ad eccezione del fatto che l'argomento `filename` di `_utime` è un nome di file o un percorso di un file, invece di un descrittore del file di un file aperto.  
  
 `_wutime` è una versione a caratteri wide di `_utime`; l'argomento `filename` in `_wutime` è una stringa di caratteri wide. A parte ciò, queste funzioni si comportano in modo identico.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tutime`|`_utime`|`_utime`|`_wutime`|  
|`_tutime32`|`_utime32`|`_utime32`|`_wutime32`|  
|`_tutime64`|`_utime64`|`_utime64`|`_wutime64`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazioni obbligatorie|Intestazioni facoltative|  
|-------------|----------------------|----------------------|  
|`_utime`, `_utime32`, `_utime64`|\<sys/utime.h>|\<errno.h>|  
|`_utime64`|\<sys/utime.h>|\<errno.h>|  
|`_wutime`|\<utime.h> o \<wchar.h>|\<errno.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
 Questo programma usa `_utime` per impostare l'ora di modifica dei file sull'ora corrente.  
  
```  
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
  
## <a name="sample-output"></a>Esempio di output  
  
```  
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
 [Gestione del tempo](../../c-runtime-library/time-management.md)   
 [asctime, _wasctime](../../c-runtime-library/reference/asctime-wasctime.md)   
 [ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](../../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)   
 [_fstat, _fstat32, _fstat64, _fstati64, _fstat32i64, _fstat64i32](../../c-runtime-library/reference/fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md)   
 [_ftime, _ftime32, _ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md)   
 [_futime, _futime32, _futime64](../../c-runtime-library/reference/futime-futime32-futime64.md)   
 [gmtime, _gmtime32, _gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)   
 [localtime, _localtime32, _localtime64](../../c-runtime-library/reference/localtime-localtime32-localtime64.md)   
 [Funzioni _stat, _wstat](../../c-runtime-library/reference/stat-functions.md)   
 [time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)