---
title: "setvbuf | Microsoft Docs"
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
  - "setvbuf"
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
  - "setvbuf"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "controllo della memorizzazione nel buffer del flusso"
  - "setvbuf (funzione)"
  - "memorizzazione nel buffer del flusso"
ms.assetid: 6aa5aa37-3408-4fa0-992f-87f9f9c4baea
caps.latest.revision: 16
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# setvbuf
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Controlla il buffering del flusso e la dimensione del buffer.  
  
## Sintassi  
  
```  
int setvbuf(  
   FILE *stream,  
   char *buffer,  
   int mode,  
   size_t size   
);  
```  
  
#### Parametri  
 `stream`  
 Puntatore alla struttura `FILE`.  
  
 `buffer`  
 Buffer allocato dall'utente.  
  
 `mode`  
 Modalità di buffering.  
  
 `size`  
 Dimensioni del buffer in byte.  Intervallo valido: 2 \<\= `size` \<\= INT\_MAX \(2147483647\).  Internamente, il valore fornito per `size` viene arrotondato per difetto al multiplo di 2 più vicino.  
  
## Valore restituito  
 Restituisce 0 in caso di esito positivo.  
  
 Se `stream` è `NULL`, o se `mode` o `size` non è all'interno di una modifica valida, il gestore di parametro non valido viene richiamato, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, questa funzione restituisce \-1 ed imposta `errno` a `EINVAL`.  
  
 Per ulteriori informazioni su questi, e altri, codici di errore vedere [\_doserrno, errno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) .  
  
## Note  
 La funzione `setvbuf` consente al programma di controllare sia il buffer che la dimensione del buffer per `stream`.  `stream` deve fare riferimento ad un file aperto non sottoposto ad un'operazione di I\/O da quando è stato aperto.  La matrice puntata da `buffer` viene utilizzata come il buffer, a meno che non sia `NULL`, nel qual caso `setvbuf` utilizza un buffer allocato automaticamente della lunghezza di `size`\/2 \* 2 byte.  
  
 La modalità deve essere `_IOFBF`, `_IOLBF`, o `_IONBF`.  Se `mode` è `_IOFBF` o `_IOLBF`, quindi `size` viene utilizzato come la dimensione del buffer.  Se `mode` è `_IONBF`, il flusso è privo di buffer e `size` e `buffer` vengono ignorati.  I valori per `mode` e i relativi significati sono:  
  
 `_IOFBF`  
 Buffer completo; ovvero `buffer` viene utilizzato come il buffer e `size` viene utilizzato come la dimensione del buffer.  Se `buffer` è `NULL`, viene utilizzato automaticamente un buffer di lunghezza `size` byte.  
  
 `_IOLBF`  
 Per alcuni sistemi, questo fornisce la linea di buffering.  Tuttavia, per Win32, il comportamento sarà uguale a `_IOFBF` \- Buffer Completo.  
  
 `_IONBF`  
 Nessun buffer viene utilizzato, indipendentemente da `buffer` o da `size`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`setvbuf`|\<stdio.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```  
// crt_setvbuf.c  
// This program opens two streams: stream1  
// and stream2. It then uses setvbuf to give stream1 a  
// user-defined buffer of 1024 bytes and stream2 no buffer.  
//  
  
#include <stdio.h>  
  
int main( void )  
{  
   char buf[1024];  
   FILE *stream1, *stream2;  
  
   if( fopen_s( &stream1, "data1", "a" ) == 0 &&  
       fopen_s( &stream2, "data2", "w" ) == 0 )  
   {  
      if( setvbuf( stream1, buf, _IOFBF, sizeof( buf ) ) != 0 )  
         printf( "Incorrect type or size of buffer for stream1\n" );  
      else  
         printf( "'stream1' now has a buffer of 1024 bytes\n" );  
      if( setvbuf( stream2, NULL, _IONBF, 0 ) != 0 )  
         printf( "Incorrect type or size of buffer for stream2\n" );  
      else  
         printf( "'stream2' now has no buffer\n" );  
      _fcloseall();  
   }  
}  
```  
  
  **'stream1' now has a buffer of 1024 bytes**  
**'stream2' now has no buffer**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fclose, \_fcloseall](../../c-runtime-library/reference/fclose-fcloseall.md)   
 [fflush](../../c-runtime-library/reference/fflush.md)   
 [fopen, \_wfopen](../../c-runtime-library/reference/fopen-wfopen.md)   
 [setbuf](../../c-runtime-library/reference/setbuf.md)