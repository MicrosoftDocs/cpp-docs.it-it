---
title: "_eof | Microsoft Docs"
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
  - "_eof"
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
  - "_eof"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_eof (funzione)"
  - "fine file"
  - "fine file, verifica per"
  - "eof (funzione)"
  - "file [C++], fine"
  - "test, fine file"
ms.assetid: 265703f4-d07e-4005-abf3-b1d0cdd9e0b0
caps.latest.revision: 14
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _eof
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Controlla se si è raggiunta la fine del file \(EOF\).  
  
## Sintassi  
  
```  
int _eof(   
   int fd   
);  
```  
  
#### Parametri  
 `fd`  
 Il descrittore del file che fa riferimento al file aperto.  
  
## Valore restituito  
 `_eof` restituisce 1 se la posizione corrente è fine del file, oppure 0 se non lo è.  Un valore di ritorno pari a –1 indica un errore; in questo caso, il gestore di parametro non valido viene richiamato, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se si consente all'esecuzione di continuare, `errno` viene impostato a `EBADF`, che indica un descrittore di file non valido.  
  
## Note  
 La funzione `_eof` determina se la fine del file associato a `fd` è stata raggiunta.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|Intestazione facoltativa|  
|--------------|-------------------------------|------------------------------|  
|`_eof`|\<io.h\>|\<errno.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_eof.c  
// This program reads data from a file  
// ten bytes at a time until the end of the  
// file is reached or an error is encountered.  
//  
#include <io.h>  
#include <fcntl.h>  
#include <stdio.h>  
#include <stdlib.h>  
#include <share.h>  
  
int main( void )  
{  
   int  fh, count, total = 0;  
   char buf[10];  
   if( _sopen_s( &fh, "crt_eof.txt", _O_RDONLY, _SH_DENYNO, 0 ) )  
   {  
        perror( "Open failed");  
        exit( 1 );  
   }  
   // Cycle until end of file reached:   
   while( !_eof( fh ) )  
   {  
      // Attempt to read in 10 bytes:   
      if( (count = _read( fh, buf, 10 )) == -1 )  
      {  
         perror( "Read error" );  
         break;  
      }  
      // Total actual bytes read   
      total += count;  
   }  
   printf( "Number of bytes read = %d\n", total );  
   _close( fh );  
}  
```  
  
## Input: crt\_eof.txt  
  
```  
This file contains some text.  
```  
  
### Output  
  
```  
Number of bytes read = 29  
```  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Gestione degli errori](../../c-runtime-library/error-handling-crt.md)   
 [I\/O a basso livello](../../c-runtime-library/low-level-i-o.md)   
 [clearerr](../../c-runtime-library/reference/clearerr.md)   
 [feof](../../c-runtime-library/reference/feof.md)   
 [ferror](../../c-runtime-library/reference/ferror.md)   
 [perror, \_wperror](../../c-runtime-library/reference/perror-wperror.md)