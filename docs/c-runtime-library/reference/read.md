---
title: "_read | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_read"
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
  - "_read"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_read (funzione)"
  - "dati [C++], lettura"
  - "dati [CRT]"
  - "file [C++], lettura"
  - "read (funzione)"
  - "lettura di dati [C++]"
ms.assetid: 2ce9c433-57ad-47fe-9ac1-4a7d4c883d30
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# _read
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Legge i dati da un file.  
  
## Sintassi  
  
```  
  
      int _read(  
   int fd,  
   void *buffer,  
   unsigned int count   
);  
```  
  
#### Parametri  
 `fd`  
 Il descrittore del file che fa riferimento al file aperto.  
  
 *buffer*  
 Percorso di archiviazione per i dati.  
  
 *count*  
 Numero massimo di byte.  
  
## Valore restituito  
 \_**read** restituisce il numero di byte letti, che può essere meno di *count* se nel file vi sono meno di *count* byte rimanenti o se il file è stato aperto in modalità testo, nel qual caso ogni coppia ritorno a capo\-avanzamento riga \(CR\-LF\) viene sostituita con un singolo carattere di avanzamento riga.  Solo il carattere di avanzamento riga è incluso il valore restituito.  La sostituzione non influisce sul puntatore del file.  
  
 Se la funzione tenta di leggere la fine di un file, restituisce 0.  Se `fd` non è valido, il file non è aperto in lettura, oppure il file è bloccato, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione restituisce \-1 e imposta `errno` a `EBADF`.  
  
 Se *buffer* è **NULL**, viene invocato l'handler di parametro non valido.  Se all'esecuzione è permesso continuare, la funzione restituisce \-1 e `errno` viene impostato a `EINVAL`.  
  
 Per ulteriori informazioni su questo e altri codici restituiti, vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 La funzione di `_read` legge un massimo di *count* byte nel *buffer* dal file associato a `fd`.  L'operazione di lettura comincia dalla posizione corrente del puntatore del file associato al file specificato.  Dopo l'operazione di lettura, il puntatore del file punta al carattere non letto seguente.  
  
 Se il file è stato aperto in modalità testo, la lettura termina quando `_read` incontra un carattere CTRL\+Z, che viene considerato come un indicatore di fine file.  Utilizzare [\_lseek](../../c-runtime-library/reference/lseek-lseeki64.md) per rimuovere l'indicatore di fine file.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_read`|\<io.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```  
// crt_read.c  
/* This program opens a file named crt_read.txt  
 * and tries to read 60,000 bytes from  
 * that file using _read. It then displays the  
 * actual number of bytes read.  
 */  
  
#include <fcntl.h>      /* Needed only for _O_RDWR definition */  
#include <io.h>  
#include <stdlib.h>  
#include <stdio.h>  
#include <share.h>  
  
char buffer[60000];  
  
int main( void )  
{  
   int fh;  
   unsigned int nbytes = 60000, bytesread;  
  
   /* Open file for input: */  
   if( _sopen_s( &fh, "crt_read.txt", _O_RDONLY, _SH_DENYNO, 0 ) )  
   {  
      perror( "open failed on input file" );  
      exit( 1 );  
   }  
  
   /* Read in input: */  
   if( ( bytesread = _read( fh, buffer, nbytes ) ) <= 0 )  
      perror( "Problem reading file" );  
   else  
      printf( "Read %u bytes from file\n", bytesread );  
  
   _close( fh );  
}  
```  
  
## Input: crt\_read.txt  
  
```  
Line one.  
Line two.  
```  
  
## Output  
  
```  
Read 19 bytes from file  
```  
  
## Vedere anche  
 [I\/O a basso livello](../../c-runtime-library/low-level-i-o.md)   
 [\_creat, \_wcreat](../../c-runtime-library/reference/creat-wcreat.md)   
 [fread](../../c-runtime-library/reference/fread.md)   
 [\_open, \_wopen](../../c-runtime-library/reference/open-wopen.md)   
 [\_write](../../c-runtime-library/reference/write.md)