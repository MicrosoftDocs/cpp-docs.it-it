---
title: "_tell, _telli64 | Microsoft Docs"
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
  - "_telli64"
  - "_tell"
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
  - "tell"
  - "telli64"
  - "_telli64"
  - "_tell"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_tell (funzione)"
  - "_telli64 (funzione)"
  - "puntatori a file [C++]"
  - "puntatori a file [C++], recupero"
  - "tell (funzione)"
  - "telli64 (funzione)"
ms.assetid: 1500e8f9-8fec-4253-9eec-ec66125dfc9b
caps.latest.revision: 14
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _tell, _telli64
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene la posizione del puntatore del file.  
  
## Sintassi  
  
```  
long _tell(  
   int handle  
);  
__int64 _telli64(  
   int handle   
);  
```  
  
#### Parametri  
 `handle`  
 Descrittore del file che fa riferimento al file aperto.  
  
## Valore restituito  
 La posizione corrente del puntatore del file.  Nei dispositivi incapaci di posizionarsi, il valore restituito è indefinito.  
  
 Un valore restituito pari a –1 indica un errore.  Se `handle` è un descrittore di file non valido, il gestore di parametri non validi viene invocato, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni impostano `errno` a `EBADF` e restituiscono \-1.  
  
 Vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) per ulteriori informazioni su questo, e altri, codici restituiti.  
  
## Note  
 La funzione `_tell` ottiene la posizione corrente del puntatore del file \(se presente\) associato all'argomento `handle`.  La posizione è espressa come numero di byte dall'inizio del file.  Per la funzione `_telli64`, questo valore è espresso come Integer a 64 bit.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_tell`, `_telli64`|\<io.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_tell.c  
// This program uses _tell to tell the  
// file pointer position after a file read.  
//  
  
#include <io.h>  
#include <stdio.h>  
#include <fcntl.h>  
#include <share.h>  
#include <string.h>  
  
int main( void )  
{  
   int  fh;  
   char buffer[500];  
  
   if ( _sopen_s( &fh, "crt_tell.txt", _O_RDONLY, _SH_DENYNO, 0) )  
   {  
      char buff[50];  
      _strerror_s( buff, sizeof(buff), NULL );  
      printf( buff );  
      exit( -1 );  
   }  
  
   if( _read( fh, buffer, 500 ) > 0 )  
      printf( "Current file position is: %d\n", _tell( fh ) );  
   _close( fh );  
}  
```  
  
## Input: crt\_tell.txt  
  
```  
Line one.  
Line two.  
```  
  
### Output  
  
```  
Current file position is: 20  
```  
  
## Vedere anche  
 [I\/O a basso livello](../../c-runtime-library/low-level-i-o.md)   
 [ftell, \_ftelli64](../../c-runtime-library/reference/ftell-ftelli64.md)   
 [\_lseek, \_lseeki64](../../c-runtime-library/reference/lseek-lseeki64.md)