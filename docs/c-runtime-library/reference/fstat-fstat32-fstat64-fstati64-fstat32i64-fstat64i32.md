---
title: "_fstat, _fstat32, _fstat64, _fstati64, _fstat32i64, _fstat64i32 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_fstat32"
  - "_fstat64"
  - "_fstati64"
  - "_fstat"
  - "_fstat64i32"
  - "_fstat32i64"
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
  - "api-ms-win-crt-filesystem-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_fstat32i64"
  - "fstat"
  - "fstat64i32"
  - "_fstat64"
  - "_fstati64"
  - "fstat64"
  - "_fstat32"
  - "fstat32i64"
  - "fstati64"
  - "_fstat"
  - "fstat32"
  - "_fstat64i32"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_fstat64 (funzione)"
  - "fstati64 (funzione)"
  - "_fstat64i32 (funzione)"
  - "_fstat32i64 (funzione)"
  - "_fstat32 (funzione)"
  - "informazioni sui file"
  - "fstat64i32 (funzione)"
  - "fstat32 (funzione)"
  - "fstat (funzione)"
  - "fstat64 (funzione)"
  - "_fstat (funzione)"
  - "_fstati64 (funzione)"
  - "fstat32i64 (funzione)"
ms.assetid: 088f5e7a-9636-4cf7-ab8e-e28d2aa4280a
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 23
---
# _fstat, _fstat32, _fstat64, _fstati64, _fstat32i64, _fstat64i32
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene informazioni su un file aperto.  
  
## Sintassi  
  
```  
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
  
#### Parametri  
 `fd`  
 Descrittore di file del file aperto.  
  
 `buffer`  
 Puntatore alla struttura per archiviare i risultati.  
  
## Valore restituito  
 Restituisce 0 se si ottengono le informazioni sullo stato dei file. Un valore restituito di –1 indica un errore. Se il descrittore del file non è valido o `buffer` è `NULL`, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `errno` è impostato su `EBADF`, nel caso di un descrittore di file non valido o a `EINVAL`, se `buffer` è `NULL`.  
  
## Note  
 Il `_fstat` funzione Ottiene informazioni sul file aperto associato `fd` e lo archivia nella struttura a cui puntata `buffer`. Il `_stat` struttura, definita in SYS\\Stat.h, contiene i campi seguenti.  
  
 `st_atime`  
 Ora dell'ultimo accesso al file.  
  
 `st_ctime`  
 Ora di creazione del file.  
  
 `st_dev`  
 Se un dispositivo, `fd`; in caso contrario, 0.  
  
 `st_mode`  
 Maschera di bit per informazioni sulla modalità di file. Il `_S_IFCHR` bit viene impostato se `fd` fa riferimento a un dispositivo. Il `_S_IFREG` bit viene impostato se `fd` fa riferimento a un file normale. I bit di lettura\/scrittura vengono impostati in base alla modalità di autorizzazione del file.`_S_IFCHR` e altre costanti sono definite in SYS\\Stat.h.  
  
 `st_mtime`  
 Ora dell'ultima modifica del file.  
  
 `st_nlink`  
 Sempre 1 nel file system non NTFS.  
  
 `st_rdev`  
 Se un dispositivo, `fd`; in caso contrario, 0.  
  
 `st_size`  
 Dimensioni del file in byte.  
  
 Se `fd` fa riferimento a un dispositivo, il `st_atime`, `st_ctime`, `st_mtime`, e `st_size` i campi non sono significativi.  
  
 Poiché Stat.h utilizza il [dev\_t](../../c-runtime-library/standard-types.md) digitare, definito in Types.h, è necessario includere Types.h prima Stat.h nel codice.  
  
 `_fstat64`, che utilizza il `__stat64` struttura, consente le date di creazione di file può essere espresso backup tramite 23:59:59, 31 dicembre 3000 UTC; mentre le altre funzioni rappresentano solo una data tramite 23:59:59 18 gennaio 2038 UTC. Mezzanotte del 1 gennaio 1970, è il limite inferiore dell'intervallo di date per tutte queste funzioni.  
  
 Le variazioni di queste funzioni supportano tipi in fase di 32 bit o 64 bit e le lunghezze di file a 32 bit o 64 bit. Il primo suffisso numerico \(`32` o `64`\) indica le dimensioni del tipo time usato; il secondo suffisso è `i32` o `i64`, che indica se le dimensioni del file sono rappresentate come intero a 32 bit o 64 bit.  
  
 `_fstat` equivale a `_fstat64i32`, e `struct``_stat` contiene l'ora a 64 bit. Ciò è vero, a meno che `_USE_32BIT_TIME_T` è definito, nel qual caso è attivo, il comportamento precedente `_fstat` utilizza un tempo a 32 bit, e `struct``_stat` contiene l'ora a 32 bit. Lo stesso vale per `_fstati64`.  
  
### Variazioni tipo time e tipo lunghezza file di \_stat  
  
|Funzioni|\_USE\_32BIT\_TIME\_T definito?|Tipo time|Tipo lunghezza file|  
|--------------|-------------------------------------|---------------|-------------------------|  
|`_fstat`|Non definito|64 bit|32 bit|  
|`_fstat`|Definito|32 bit|32 bit|  
|`_fstat32`|Non interessato dalla definizione macro|32 bit|32 bit|  
|`_fstat64`|Non interessato dalla definizione macro|64 bit|64 bit|  
|`_fstati64`|Non definito|64 bit|64 bit|  
|`_fstati64`|Definito|32 bit|64 bit|  
|`_fstat32i64`|Non interessato dalla definizione macro|32 bit|64 bit|  
|`_fstat64i32`|Non interessato dalla definizione macro|64 bit|32 bit|  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`_fstat`|\< sys\/stat.h \> e \< sys\/types.h \>|  
|`_fstat32`|\< sys\/stat.h \> e \< sys\/types.h \>|  
|`_fstat64`|\< sys\/stat.h \> e \< sys\/types.h \>|  
|`_fstati64`|\< sys\/stat.h \> e \< sys\/types.h \>|  
|`_fstat32i64`|\< sys\/stat.h \> e \< sys\/types.h \>|  
|`_fstat64i32`|\< sys\/stat.h \> e \< sys\/types.h \>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
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
Dimensione del file: modifica 16: mer maggio 07 25:15:11 2003  
```  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [\_access, \_waccess](../../c-runtime-library/reference/access-waccess.md)   
 [\_chmod, \_wchmod](../../c-runtime-library/reference/chmod-wchmod.md)   
 [\_filelength, \_filelengthi64](../../c-runtime-library/reference/filelength-filelengthi64.md)   
 [Funzioni \_stat, \_wstat](../../c-runtime-library/reference/stat-functions.md)