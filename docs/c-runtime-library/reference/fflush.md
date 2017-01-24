---
title: "fflush | Microsoft Docs"
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
  - "fflush"
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
  - "fflush"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "fflush (funzione)"
  - "svuotamento"
  - "flussi, svuotamento"
ms.assetid: 8bbc753f-dc74-4e77-b563-74da2835e92b
caps.latest.revision: 18
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# fflush
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Svuota un flusso.  
  
## Sintassi  
  
```  
int fflush(   
   FILE *stream   
);  
```  
  
#### Parametri  
 `stream`  
 Puntatore alla struttura `FILE`.  
  
## Valore restituito  
 `fflush` restituisce 0 se il buffer è stato svuotato correttamente.  Il valore 0 viene restituito anche nei casi in cui il flusso specificato non presenta buffer o è aperto in sola lettura.  Un valore restituito `EOF` indica un errore.  
  
> [!NOTE]
>  Se `fflush` restituisce `EOF`, i dati possono venire persi a causa di un errore di scrittura.  Quando si installa un gestore di errori critici, è consigliabile disattivare la memorizzazione nel buffer con la funzione `setvbuf` o utilizzare le routine di I\/O di basso livello come `_open`, `_close` e `_write` anziché le funzioni del flusso di I\/O.  
  
## Note  
 La funzione `fflush` svuota un flusso.  Se il file associato a `stream` viene aperto per l'output, `fflush` scrive in questo file il contenuto del buffer associato al flusso.  Se il flusso viene aperto per l'input, `fflush` elimina il contenuto del buffer.  `fflush` annulla l'effetto di qualsiasi chiamata precedente a `ungetc` sullo `stream`.  Inoltre, `fflush(NULL)` svuota tutti i flussi aperti per l'output.  Il flusso rimane aperta dopo la chiamata.  `fflush` non ha effetto su un flusso privo di buffer.  
  
 I buffer sono normalmente gestiti dal sistema operativo, il quale determina il momento ottimale per scrivere automaticamente i dati sul disco: quando un buffer è pieno, quando un flusso viene chiuso, o quando un programma termina normalmente senza chiudere il flusso.  La funzionalità di commit su disco della libreria di run\-time consente di assicurare che i dati critici vengano scritti direttamente su disco anziché nei buffer del sistema operativo.  Senza riscrivere un programma esistente, è possibile abilitare questa funzionalità collegando i file oggetto del programma a COMMODE.OBJ.  Nel file eseguibile risultante, le chiamate a `_flushall` scrivono il contenuto di qualsiasi buffer sul disco.  Solo `_flushall` e `fflush` sono interessati da COMMODE.OBJ.  
  
 Per informazioni sul controllo della funzionalità del commit da disco, consultare [Flusso I\/O](../../c-runtime-library/stream-i-o.md), [fopen](../../c-runtime-library/reference/fopen-wfopen.md) e [\_fdopen](../../c-runtime-library/reference/fdopen-wfdopen.md).  
  
 Questa funzione blocca il thread chiamante quindi è thread\-safe.  Per una versione non bloccante, vedere `_fflush_nolock`.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`fflush`|\<stdio.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
```  
// crt_fflush.c  
#include <stdio.h>  
#include <conio.h>  
  
int main( void )  
{  
   int integer;  
   char string[81];  
  
   // Read each word as a string.  
   printf( "Enter a sentence of four words with scanf: " );  
   for( integer = 0; integer < 4; integer++ )  
   {  
      scanf_s( "%s", string, sizeof(string) );        
      printf( "%s\n", string );  
   }  
  
   // You must flush the input buffer before using gets.   
   // fflush on input stream is an extension to the C standard   
   fflush( stdin );     
   printf( "Enter the same sentence with gets: " );  
   gets_s( string, sizeof(string) );  
   printf( "%s\n", string );  
}  
```  
  
  **`This is a test This is a test` `This is a test This is a test`Enter a sentence of four words with scanf: This is a test**  
**This**  
**is**  
**a**  
**test**  
**Enter the same sentence with gets: This is a test**  
**This is a test**   
## Equivalente .NET Framework  
 [System::IO::FileStream::Flush](https://msdn.microsoft.com/en-us/library/2bw4h516.aspx)  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fclose, \_fcloseall](../../c-runtime-library/reference/fclose-fcloseall.md)   
 [\_flushall](../../c-runtime-library/reference/flushall.md)   
 [setvbuf](../../c-runtime-library/reference/setvbuf.md)