---
title: "_locking | Microsoft Docs"
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
  - "_locking"
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
  - "_locking"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_locking (funzione)"
  - "byte [C++], blocco di file"
  - "file [C++], blocco"
  - "file [C++], blocco di byte"
  - "locking (funzione)"
ms.assetid: 099aaac1-d4ca-4827-aed6-24dff9844150
caps.latest.revision: 19
caps.handback.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _locking
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Blocca o sblocca i byte di un file.  
  
## Sintassi  
  
```  
  
      int _locking(  
   int fd,  
   int mode,  
   long nbytes   
);  
```  
  
#### Parametri  
 `fd`  
 Descrittore di file  
  
 *mode*  
 Azione di blocco da eseguire.  
  
 *nbytes*  
 Numero di byte da bloccare.  
  
## Valore restituito  
 `_locking` restituisce 0 in caso di esito positivo.  Un valore restituito pari a –1 indica un errore, in questo caso [errno](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) viene impostato su uno dei seguenti valori.  
  
 `EACCES`  
 Violazione di blocco \(file già bloccato o sbloccato\).  
  
 `EBADF`  
 Descrittore di file non valido.  
  
 `EDEADLOCK`  
 Violazione di blocco.  Restituito quando viene specificato il flag `_LK_RLCK` o `_LK_LOCK` e non è stato possibile bloccare il file dopo 10 tentativi.  
  
 `EINVAL`  
 È stato fornito un argomento non valido a `_locking`.  
  
 Se l'errore è causato da un parametro non valido, ad esempio un descrittore di file non valido, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  
  
## Note  
 La funzione `_locking` blocca o sblocca *nbytes* byte del file a cui fa riferimento `fd`.  Il blocco dei byte in un file impedisce l'accesso a questi byte da parte di altri processi.  Tutte le operazioni di blocco e sblocco iniziano dalla posizione corrente del puntatore a file e continuano per i seguenti *nbytes* byte.  È possibile bloccare byte oltre la fine del file.  
  
 *mode* deve essere una delle seguenti costanti manifesto, definite in Locking.h.  
  
 `_LK_LOCK`  
 Blocca i byte specificati.  Se i byte non possono essere bloccati, il programma tenterà di bloccarli nuovamente dopo 1 secondo.  Se, dopo 10 tentativi, i byte non possono essere bloccati, la costante restituisce un errore.  
  
 `_LK_NBLCK`  
 Blocca i byte specificati.  Se i byte non possono essere bloccati, la costante restituisce un errore.  
  
 `_LK_NBRLCK`  
 Uguale a `_LK_NBLCK`.  
  
 `_LK_RLCK`  
 Uguale a `_LK_LOCK`.  
  
 `_LK_UNLCK`  
 Sblocca i byte specificati, che devono essere stati bloccati precedentemente.  
  
 Più aree di un file che non si sovrappongono possono essere bloccate.  Un'area che viene sbloccata deve essere stata bloccata precedentemente.  `_locking` non esegue il merge delle aree adiacenti; se due aree bloccate sono adiacenti, ogni area deve essere sbloccata separatamente.  Le aree dovrebbero essere bloccate solo brevemente e dovrebbero essere sbloccate prima di chiudere un file o prima di uscire dal programma.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|-------------------------------|------------------------------|  
|`_locking`|\<io.h\> and \<sys\/locking.h\>|\<errno.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```  
// crt_locking.c  
/* This program opens a file with sharing. It locks  
 * some bytes before reading them, then unlocks them. Note that the  
 * program works correctly only if the file exists.  
 */  
  
#include <sys/types.h>  
#include <sys/stat.h>  
#include <sys/locking.h>  
#include <share.h>  
#include <fcntl.h>  
#include <stdio.h>  
#include <stdlib.h>  
#include <io.h>  
  
int main( void )  
{  
   int  fh, numread;  
   char buffer[40];  
  
   /* Quit if can't open file or system doesn't   
    * support sharing.   
    */  
   errno_t err = _sopen_s( &fh, "crt_locking.txt", _O_RDONLY, _SH_DENYNO,   
                          _S_IREAD | _S_IWRITE );  
   printf( "%d %d\n", err, fh );  
   if( err != 0 )  
      exit( 1 );  
  
   /* Lock some bytes and read them. Then unlock. */  
   if( _locking( fh, LK_NBLCK, 30L ) != -1 )  
   {  
      long lseek_ret;  
      printf( "No one can change these bytes while I'm reading them\n" );  
      numread = _read( fh, buffer, 30 );  
      buffer[30] = '\0';  
      printf( "%d bytes read: %.30s\n", numread, buffer );  
      lseek_ret = _lseek( fh, 0L, SEEK_SET );  
      _locking( fh, LK_UNLCK, 30L );  
      printf( "Now I'm done. Do what you will with them\n" );  
   }  
   else  
      perror( "Locking failed\n" );  
  
   _close( fh );  
}  
```  
  
## Input: crt\_locking.txt  
  
```  
The first thirty bytes of this file will be locked.  
```  
  
## Esempio di output  
  
```  
No one can change these bytes while I'm reading them  
30 bytes read: The first thirty bytes of this  
Now I'm done. Do what you will with them  
```  
  
## Equivalente .NET Framework  
 [System::IO::FileStream::Lock](https://msdn.microsoft.com/en-us/library/system.io.filestream.lock.aspx)  
  
## Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [\_creat, \_wcreat](../../c-runtime-library/reference/creat-wcreat.md)   
 [\_open, \_wopen](../../c-runtime-library/reference/open-wopen.md)