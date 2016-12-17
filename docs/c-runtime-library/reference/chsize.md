---
title: "_chsize | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_chsize"
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
  - "api-ms-win-crt-stdio-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_chsize"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_chsize (funzione)"
  - "chsize (funzione)"
  - "file [C++], modifica delle dimensioni"
  - "dimensione"
  - "dimensione, modifica file"
ms.assetid: b3e881c5-7b27-4837-a3d4-c51591ab10ff
caps.latest.revision: 21
caps.handback.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _chsize
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Cambia la dimensione di un file.  È disponibile una versione più sicura; consultare [\_chsize\_s](../../c-runtime-library/reference/chsize-s.md).  
  
## Sintassi  
  
```  
int _chsize(   
   int fd,  
   long size   
);  
```  
  
#### Parametri  
 `fd`  
 Il descrittore del file che fa riferimento a un file aperto.  
  
 `size`  
 Nuova lunghezza del file in byte.  
  
## Valore restituito  
 `_chsize` restituisce il valore 0 se le dimensioni del file vengono correttamente modificate.  Un valore diverso da \-1 indica un errore: `errno` viene settato su `EACCES` se il file specificato è bloccato in accesso, su `EBADF` se il file specificato è in sola lettura o se il descrittore non è valido, su `ENOSPC` se non vi è spazio disponibile sul dispositivo o `EINVAL` se `size` è minore di zero.  
  
 Vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) per ulteriori informazioni su questi, e altri, codici restituiti.  
  
## Note  
 La funzione `_chsize` estende o tronca il file associato con `fd` alla lunghezza specificata da `size`.  Il file deve essere aperto in una modalità che consente di scrivere.  I caratteri null \('\\0'\) vengono aggiunti se il file viene esteso.  Se il file viene troncato, tutti i dati dalla fine del file ridotto alla lunghezza originale del file verranno persi.  
  
 Questa funzione convalida i parametri.  Se `size` è minore di zero o `fd` è un descrittore del file non valido, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|-------------------------------|------------------------------|  
|`_chsize`|\<io.h\>|\<errno.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_chsize.c  
// This program uses _filelength to report the size  
// of a file before and after modifying it with _chsize.  
  
#include <io.h>  
#include <fcntl.h>  
#include <sys/types.h>  
#include <sys/stat.h>  
#include <stdio.h>  
#include <share.h>  
  
int main( void )  
{  
   int fh, result;  
   unsigned int nbytes = BUFSIZ;  
  
   // Open a file   
   if( _sopen_s( &fh, "data", _O_RDWR | _O_CREAT, _SH_DENYNO,  
                 _S_IREAD | _S_IWRITE ) == 0 )  
   {  
      printf( "File length before: %ld\n", _filelength( fh ) );  
      if( ( result = _chsize( fh, 329678 ) ) == 0 )  
         printf( "Size successfully changed\n" );  
      else  
         printf( "Problem in changing the size\n" );  
      printf( "File length after:  %ld\n", _filelength( fh ) );  
      _close( fh );  
   }  
}  
```  
  
  **File length before: 0**  
**Size successfully changed**  
**File length after:  329678**   
## Equivalente .NET Framework  
  
-   [System::IO::Stream::SetLength](https://msdn.microsoft.com/en-us/library/system.io.stream.setlength.aspx)  
  
-   [System::IO::FileStream::SetLength](https://msdn.microsoft.com/en-us/library/system.io.filestream.setlength.aspx)  
  
## Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [\_close](../../c-runtime-library/reference/close.md)   
 [\_sopen, \_wsopen](../../c-runtime-library/reference/sopen-wsopen.md)   
 [\_open, \_wopen](../../c-runtime-library/reference/open-wopen.md)