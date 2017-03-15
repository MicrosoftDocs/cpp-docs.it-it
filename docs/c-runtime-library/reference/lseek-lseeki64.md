---
title: "_lseek, _lseeki64 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_lseeki64"
  - "_lseek"
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
  - "_lseeki64"
  - "_lseek"
  - "lseeki64"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_lseek (funzione)"
  - "_lseeki64 (funzione)"
  - "puntatori a file [C++], spostamento"
  - "lseek (funzione)"
  - "lseeki64 (funzione)"
  - "posizionare i puntatori a file"
ms.assetid: aba8a768-d40e-48c3-b38e-473dbd782f93
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# _lseek, _lseeki64
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Sposta un puntatore del file nella posizione specificata.  
  
## Sintassi  
  
```  
  
      long _lseek(  
   int fd,  
   long offset,  
   int origin   
);  
__int64 _lseeki64(  
   int fd,  
   __int64 offset,  
   int origin   
);  
```  
  
#### Parametri  
 `fd`  
 Il descrittore del file che fa riferimento a un file aperto.  
  
 *offset*  
 Numero di byte *dall'origine*.  
  
 *origine*  
 Posizione iniziale.  
  
## Valore restituito  
 `_lseek` restituisce l'offset, in byte, della nuova posizione all'inizio del file.  `_lseeki64` restituisce l'offset in un integer a 64 bit.  La funzione restituisce \-1L per indicare un errore.  Se viene passato un parametro non valido, ad esempio si immette un descrittore del file, oppure il valore di *origine* non è valido o la posizione specificata *dall'offset* viene prima dell'inizio del file, il gestore di parametro non valido non viene richiamato, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni impostano `errno` a `EBADF` e restituiscono \-1L.  Nei dispositivi incapaci di effettuare un ricerca \(come ad esempio le stampanti\), il valore restituito è indefinito.  
  
 Per ulteriori informazioni su questi e altri codici, vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 La funzione `_lseek` sposta il puntatore del file associato a `fd` in una nuova posizione *offset* byte dall'*origin*.  L'operazione successiva nel file si trova nella nuova posizione.  L'argomento *origine* deve essere una delle costanti, definite in Stdio.h.  
  
 `SEEK_SET`  
 Inizio del file.  
  
 `SEEK_CUR`  
 La posizione corrente del puntatore del file.  
  
 `SEEK_END`  
 Fine del file.  
  
 È possibile utilizzare `_lseek` per riposizionare il puntatore in un file o oltre la fine del file.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_lseek`|\<io.h\>|  
|`_lseeki64`|\<io.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```  
// crt_lseek.c  
/* This program first opens a file named lseek.txt.  
 * It then uses _lseek to find the beginning of the file,  
 * to find the current position in the file, and to find  
 * the end of the file.  
 */  
  
#include <io.h>  
#include <fcntl.h>  
#include <stdlib.h>  
#include <stdio.h>  
#include <share.h>  
  
int main( void )  
{  
   int fh;  
   long pos;               /* Position of file pointer */  
   char buffer[10];  
  
   _sopen_s( &fh, "crt_lseek.c_input", _O_RDONLY, _SH_DENYNO, 0 );  
  
   /* Seek the beginning of the file: */  
   pos = _lseek( fh, 0L, SEEK_SET );  
   if( pos == -1L )  
      perror( "_lseek to beginning failed" );  
   else  
      printf( "Position for beginning of file seek = %ld\n", pos );  
  
   /* Move file pointer a little */  
    _read( fh, buffer, 10 );  
  
   /* Find current position: */  
   pos = _lseek( fh, 0L, SEEK_CUR );  
   if( pos == -1L )  
      perror( "_lseek to current position failed" );  
   else  
      printf( "Position for current position seek = %ld\n", pos );  
  
   /* Set the end of the file: */  
   pos = _lseek( fh, 0L, SEEK_END );  
   if( pos == -1L )  
      perror( "_lseek to end failed" );  
   else  
      printf( "Position for end of file seek = %ld\n", pos );  
  
   _close( fh );  
}  
```  
  
## Input: crt\_lseek.c\_input  
  
```  
Line one.  
Line two.  
Line three.  
Line four.  
Line five.  
```  
  
## Output  
  
```  
Position for beginning of file seek = 0  
Position for current position seek = 10  
Position for end of file seek = 57  
```  
  
## Vedere anche  
 [I\/O a basso livello](../../c-runtime-library/low-level-i-o.md)   
 [fseek, \_fseeki64](../../c-runtime-library/reference/fseek-fseeki64.md)   
 [\_tell, \_telli64](../../c-runtime-library/reference/tell-telli64.md)