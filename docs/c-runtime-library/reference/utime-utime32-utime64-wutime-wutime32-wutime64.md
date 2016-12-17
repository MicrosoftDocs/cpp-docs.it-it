---
title: "_utime, _utime32, _utime64, _wutime, _wutime32, _wutime64 | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_utime64"
  - "_utime"
  - "_wutime"
  - "_wutime64"
  - "_wutime32"
  - "_utime32"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-time-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_tutime"
  - "_utime64"
  - "wutime"
  - "utime32"
  - "wutime64"
  - "_utime"
  - "wutime32"
  - "_wutime"
  - "utime"
  - "utime64"
  - "_wutime64"
  - "_utime32"
  - "_tutime64"
  - "_wutime32"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "tutime (funzione)"
  - "utime32 (funzione)"
  - "utime64 (funzione)"
  - "_utime (funzione)"
  - "_tutime32 (funzione)"
  - "ora [C++], modifica del file"
  - "wutime (funzione)"
  - "_wutime (funzione)"
  - "_wutime32 (funzione)"
  - "_tutime64 (funzione)"
  - "_tutime (funzione)"
  - "file [C++], ora di modifica"
  - "_wutime64 (funzione)"
  - "_utime32 (funzione)"
  - "utime (funzione)"
  - "_utime64 (funzione)"
  - "wutime64 (funzione)"
  - "wutime32 (funzione)"
  - "tutime64 (funzione)"
  - "tutime32 (funzione)"
ms.assetid: 8d482d40-19b9-4591-bfee-5d7f601d1a9e
caps.latest.revision: 16
caps.handback.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _utime, _utime32, _utime64, _wutime, _wutime32, _wutime64
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Impostare l'ora di modifica di file.  
  
## Sintassi  
  
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
  
#### Parametri  
 `filename`  
 Puntatore a una stringa che contiene il percorso o nome file.  
  
 `times`  
 Puntatore ai valori di tempo di archiviazione.  
  
## Valore restituito  
 Ognuna di queste funzioni restituisce 0 se è stata modificata l'ora di modifica dei file. Un valore restituito di –1 indica un errore. Se viene passato un parametro non valido, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono \-1 e `errno` è impostata su uno dei valori seguenti:  
  
 `EACCES`  
 Percorso Specifica directory o file di sola lettura  
  
 `EINVAL`  
 Non valido `times` argomento  
  
 `EMFILE`  
 Troppi file aperti \(il file deve essere aperto per modificare l'ora di modifica\)  
  
 `ENOENT`  
 Percorso o nome file non trovato  
  
 Vedere [doserrno, errno, sys\_errlist e sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) per ulteriori informazioni su questi e altri codici restituiti.  
  
 Se la data di modifica dopo la mezzanotte dell'1 gennaio 1970 e data di fine della funzione utilizzata, la data può essere modificata per un file.`_utime` e `_wutime` utilizzano un valore di ora a 64 bit, pertanto la data di fine è 23:59:59, 31 dicembre 3000 UTC. Se `_USE_32BIT_TIME_T` è definito per forzare il comportamento precedente, la data di fine è 23:59:59 18 gennaio 2038 UTC.`_utime32` o `_wutime32` utilizzare un tipo di tempo a 32 bit indipendentemente dal fatto che `_USE_32BIT_TIME_T` è definito e hanno sempre la data di fine precedente.`_utime64` o `_wutime64` utilizzare sempre il tipo in fase di 64 bit, pertanto queste funzioni supportano sempre la data di fine successiva.  
  
## Note  
 Il `_utime` funzione imposta l'ora di modifica per il file specificato da `filename`*.* Il processo deve disporre dell'accesso in scrittura al file per modificare l'ora. Nel sistema operativo Windows, è possibile modificare il tempo di accesso e l'ora di modifica nel `_utimbuf` struttura. Se `times` è un `NULL` puntatore, l'ora di modifica è impostata sull'ora locale corrente. In caso contrario, `times` deve puntare a una struttura di tipo `_utimbuf`, definito in SYS\\UTIME. H.  
  
 Il `_utimbuf` struttura archivia i tempi di accesso e modifica di file utilizzati da `_utime` per modificare le date di modifica dei file. La struttura contiene i campi seguenti, che sono entrambi di tipo `time_t`:  
  
 `actime`  
 Tempo di accesso ai file  
  
 `modtime`  
 Ora della modifica di file  
  
 Versioni specifiche del `_utimbuf` struttura \(`_utimebuf32` e `__utimbuf64`\) vengono definiti utilizzando le versioni a 32 bit e 64 bit del tipo di tempo. Che vengono utilizzati nelle versioni a 32 bit e 64 bit specifiche di questa funzione.`_utimbuf` stesso per impostazione predefinita viene utilizzato un tipo di tempo a 64 bit a meno che non `_USE_32BIT_TIME_T` è definito.  
  
 `_utime` è identico a `_futime` ad eccezione del fatto che il `filename` argomento di `_utime` è un nome di file o un percorso di un file, anziché un descrittore del file di un file aperto.  
  
 `_wutime` è una versione a caratteri wide di `_utime`; l'argomento `filename` in `_wutime` è una stringa di caratteri wide. A parte ciò, queste funzioni si comportano in modo identico.  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tutime`|`_utime`|`_utime`|`_wutime`|  
|`_tutime32`|`_utime32`|`_utime32`|`_wutime32`|  
|`_tutime64`|`_utime64`|`_utime64`|`_wutime64`|  
  
## Requisiti  
  
|Routine|Intestazioni obbligatorie|Intestazioni facoltative|  
|-------------|-------------------------------|------------------------------|  
|`_utime`, `_utime32`, `_utime64`|\< sys\/utime.h \>|\<errno.h\>|  
|`_utime64`|\< sys\/utime.h \>|\<errno.h\>|  
|`_wutime`|\< utime.h \> o \< WCHAR. h \>|\<errno.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
 Questo programma utilizza `_utime` per impostare l'ora di modifica dei file all'ora corrente.  
  
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
  
## Esempio di output  
  
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
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Gestione dell'ora](../../c-runtime-library/time-management.md)   
 [asctime, \_wasctime](../../c-runtime-library/reference/asctime-wasctime.md)   
 [ctime, \_ctime32, \_ctime64, \_wctime, \_wctime32, \_wctime64](../../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)   
 [\_fstat, \_fstat32, \_fstat64, \_fstati64, \_fstat32i64, \_fstat64i32](../../c-runtime-library/reference/fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md)   
 [\_ftime, \_ftime32, \_ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md)   
 [\_futime, \_futime32, \_futime64](../../c-runtime-library/reference/futime-futime32-futime64.md)   
 [gmtime, \_gmtime32, \_gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)   
 [localtime, \_localtime32, \_localtime64](../../c-runtime-library/reference/localtime-localtime32-localtime64.md)   
 [Funzioni \_stat, \_wstat](../../c-runtime-library/reference/stat-functions.md)   
 [time, \_time32, \_time64](../../c-runtime-library/reference/time-time32-time64.md)