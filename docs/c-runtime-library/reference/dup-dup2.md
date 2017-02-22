---
title: "_dup, _dup2 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_dup"
  - "_dup2"
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
  - "_dup2"
  - "_dup"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_dup (funzione)"
  - "_dup2 (funzione)"
  - "dup (funzione)"
  - "dup2 (funzione)"
  - "handle di file [C++], duplicazione"
  - "handle di file [C++], riassegnazione"
ms.assetid: 4d07e92c-0d76-4832-a770-dfec0e7a0cfa
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# _dup, _dup2
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Crea un secondo descrittore del file per un file aperto \(`_dup`\), o riassegna un descrittore del file \(`_dup2`\).  
  
## Sintassi  
  
```  
int _dup(   
   int fd   
);  
int _dup2(   
   int fd1,  
   int fd2   
);  
```  
  
#### Parametri  
 `fd`, `fd1`  
 Descrittori del file che fanno riferimento al file aperto.  
  
 `fd2`  
 Un descrittore del file.  
  
## Valore restituito  
 `_dup` restituisce un nuovo descrittore del file.  `_dup2` restituisce 0 per indicare la riuscita.  Se si verifica un errore, ogni funzione termina con –1 e imposta `errno` su `EBADF` se il descrittore del file non è valido o `EMFILE` se non esistono descrittori di file disponibili.  Nel caso di un descrittore di file non valido, la funzione richiama il gestore del parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  
  
 Per ulteriori informazioni su questi e altri codici restituiti, vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 Le funzioni `_dup2` e `_dup` associano ad un secondo descrittore del file un file aperto.  Tali funzioni possono essere utilizzate per associare un descrittore di file predefinito, come quello per `stdout`, con un file diverso.  Le operazioni su file possono essere eseguite utilizzando qualsiasi descrittore del file.  Il tipo di accesso consentito per un file non viene influenzato dalla creazione di un nuovo descrittore.  `_dup` restituisce il descrittore del file disponibile per il file specificato.  `_dup2` impone `fd2` per fare riferimento allo stesso file `fd1`.  Se `fd2` è associato ad un file aperto al momento della chiamata, verrà chiuso.  
  
 Sia `_dup` che `_dup2` accettano descrittori di file come parametri.  Per passare un flusso `(FILE *)` su una di queste funzioni, utilizzare [\_fileno](../../c-runtime-library/reference/fileno.md).  La routine `fileno` restituisce il descrittore del file attualmente associato al flusso specificato.  Di seguito viene illustrato come associare `stderr` \(definito come `FILE` `*` in Stdio.h\) con un descrittore del file:  
  
```  
int cstderr = _dup( _fileno( stderr ));  
```  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_dup`|\<io.h\>|  
|`_dup2`|\<io.h\>|  
  
 La console non è supportata nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Gli handle del flusso standard associati alla console,`stdin`, `stdout` e `stderr`, devono essere reindirizzati prima di poter utilizzare le funzioni di runtime del linguaggio C nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_dup.c  
// This program uses the variable old to save  
// the original stdout. It then opens a new file named  
// DataFile and forces stdout to refer to it. Finally, it  
// restores stdout to its original state.  
//  
  
#include <io.h>  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   int old;  
   FILE *DataFile;  
  
   old = _dup( 1 );   // "old" now refers to "stdout"   
                      // Note:  file descriptor 1 == "stdout"   
   if( old == -1 )  
   {  
      perror( "_dup( 1 ) failure" );  
      exit( 1 );  
   }  
   _write( old, "This goes to stdout first\n", 26 );  
   if( fopen_s( &DataFile, "data", "w" ) != 0 )  
   {  
      puts( "Can't open file 'data'\n" );  
      exit( 1 );  
   }  
  
   // stdout now refers to file "data"   
   if( -1 == _dup2( _fileno( DataFile ), 1 ) )  
   {  
      perror( "Can't _dup2 stdout" );  
      exit( 1 );  
   }  
   puts( "This goes to file 'data'\n" );  
  
   // Flush stdout stream buffer so it goes to correct file   
   fflush( stdout );  
   fclose( DataFile );  
  
   // Restore original stdout   
   _dup2( old, 1 );  
   puts( "This goes to stdout\n" );  
   puts( "The file 'data' contains:" );  
   _flushall();  
   system( "type data" );  
}  
```  
  
  **Questo va prima su stdout**  
**Questo va su stdout**  
**I dati del file contengono:**  
**Questo va archiviare i dati**   
## Vedere anche  
 [I\/O a basso livello](../../c-runtime-library/low-level-i-o.md)   
 [\_close](../../c-runtime-library/reference/close.md)   
 [\_creat, \_wcreat](../../c-runtime-library/reference/creat-wcreat.md)   
 [\_open, \_wopen](../../c-runtime-library/reference/open-wopen.md)