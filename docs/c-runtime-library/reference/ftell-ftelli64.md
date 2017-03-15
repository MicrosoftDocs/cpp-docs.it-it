---
title: "ftell, _ftelli64 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_ftelli64"
  - "ftell"
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
  - "_ftelli64"
  - "ftell"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_ftelli64 (funzione)"
  - "puntatori a file [C++]"
  - "puntatori a file [C++], recupero posizione corrente"
  - "ftell (funzione)"
  - "ftelli64 (funzione)"
ms.assetid: 40149cd8-65f2-42ff-b70c-68e3e918cdd7
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# ftell, _ftelli64
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene la posizione corrente del puntatore del file.  
  
## Sintassi  
  
```  
long ftell(   
   FILE *stream   
);  
__int64 _ftelli64(   
   FILE *stream   
);  
```  
  
#### Parametri  
 `stream`  
 Struttura di destinazione `FILE`.  
  
## Valore restituito  
 `ftell` e `_ftelli64` restituiscono la posizione corrente del file.  È possibile che il valore restituito da `ftell` e da `_ftelli64` non rifletta l'offset di byte fisico per i flussi aperti in modalità testo, poiché la modalità testo provoca la conversione tra il ritorno a capo e l'avanzamento di riga.  Utilizzare `ftell` con `fseek`o`_ftelli64`con`_fseeki64` per ritornare correttamente alle posizioni dei file.  Se si verifica un errore, `ftell`e`_ftelli64` richiamano il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se si consente all'esecuzione di continuare, queste funzioni restituiscono \-1L e impostano il valore di `errno` a una di due costanti, definite in ERRNO.H.  Il significato della costante `EBADF` è che l'argomento di `stream` non è un valore di puntatore di file valido o non fa riferimento a un file aperto.  `EINVAL` significa che un argomento `stream` non valido è stato passato alla funzione.  Nei dispositivi incapaci di ricercare \(come ad esempio terminali e stampanti\) oppure quando `stream` non fa riferimento a un file aperto, il valore restituito non è definito.  
  
 Vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) per ulteriori informazioni su questi, e altri, codici restituiti.  
  
## Note  
 Le funzioni `ftell` e `_ftelli64`recuperano la posizione corrente del puntatore di file \(se presente\) associato a `stream`*.* La posizione è espressa come un offset relativo all'inizio del flusso.  
  
 Si noti che quando un file viene aperto per aggiungere dati, la posizione corrente del file è determinata dall'ultima operazione di I\/O, non da dove si desidera occorra la successiva operazione di scrittura.  Ad esempio, se un file è aperto per un'operazione di append e l'ultima operazione è stata una lettura, il percorso del file è il punto in cui l'operazione di lettura seguente comincerebbe, non quello in cui inizierebbe al prossima operazione di scrittura. \(Quando un file viene aperto per un operazione di append, la posizione del file viene spostata alla fine del file prima di qualsiasi operazione di scrittura.\) Se non si è verificata alcuna operazione di I\/O in un file aperto per l'aggiunta di dati, la posizione del file corrisponde all'inizio del file.  
  
 In modalità di testo, CTRL\+Z viene interpretato come carattere di fine file in input.  Nei file aperti per la lettura\/scrittura tramite `fopen` e in tutte le routine correlate, verifica la presenza della combinazione CTRL\+Z alla fine del file e la rimuove, se possibile.  Questa operazione viene eseguita perché utilizzare la combinazione di `ftell` e `fseek` o `_ftelli64` e `_fseeki64`, per spostarsi all'interno di un file che termina con CTRL\+Z può causare un comportamento non appropriato di `ftell` o `_ftelli64` in prossimità della fine del file.  
  
 Questa funzione viene bloccato dal thread chiamante durante l'esecuzione quindi è thread\-safe.  Per una versione non bloccante, vedere `_ftell_nolock`.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|Intestazioni facoltative|  
|--------------|-------------------------------|------------------------------|  
|`ftell`|\<stdio.h\>|\<errno.h\>|  
|`_ftelli64`|\<stdio.h\>|\<errno.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
```  
// crt_ftell.c  
// This program opens a file named CRT_FTELL.C  
// for reading and tries to read 100 characters. It  
// then uses ftell to determine the position of the  
// file pointer and displays this position.  
  
#include <stdio.h>  
  
FILE *stream;  
  
int main( void )  
{  
   long position;  
   char list[100];  
   if( fopen_s( &stream, "crt_ftell.c", "rb" ) == 0 )  
   {  
      // Move the pointer by reading data:   
      fread( list, sizeof( char ), 100, stream );  
      // Get position after read:   
      position = ftell( stream );  
      printf( "Position after trying to read 100 bytes: %ld\n",  
              position );  
      fclose( stream );  
   }  
}  
```  
  
  **Position after trying to read 100 bytes: 100**   
## Equivalente .NET Framework  
 [System::IO::FileStream::Position](https://msdn.microsoft.com/en-us/library/system.io.filestream.position.aspx)  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fopen, \_wfopen](../../c-runtime-library/reference/fopen-wfopen.md)   
 [fgetpos](../../c-runtime-library/reference/fgetpos.md)   
 [fseek, \_fseeki64](../../c-runtime-library/reference/fseek-fseeki64.md)   
 [\_lseek, \_lseeki64](../../c-runtime-library/reference/lseek-lseeki64.md)