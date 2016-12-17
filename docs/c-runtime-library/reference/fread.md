---
title: "fread | Microsoft Docs"
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
  - "fread"
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
  - "fread"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "dati [C++], lettura dal flusso di input"
  - "fread (funzione)"
  - "lettura di dati [C++], flussi di input"
  - "flussi [C++], lettura di dati"
ms.assetid: 9a3c1538-93dd-455e-ae48-77c1e23c53f0
caps.latest.revision: 17
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# fread
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Legge i dati da un flusso.  
  
## Sintassi  
  
```  
size_t fread(   
   void *buffer,  
   size_t size,  
   size_t count,  
   FILE *stream   
);  
```  
  
#### Parametri  
 `buffer`  
 Percorso di archiviazione per i dati.  
  
 `size`  
 Dimensione dell'elemento in byte.  
  
 `count`  
 Numero massimo di elementi da leggere.  
  
 `stream`  
 Puntatore alla struttura `FILE`.  
  
## Valore restituito  
 `fread` restituisce il numero di elementi attualmente letti, che può essere inferiore a `count` se si verifica un errore o se la fine del file viene rilevata prima di raggiungere `count`*.* Utilizzare la funzione `ferror` o `feof` per distinguere un errore di lettura da uno stato di fine file.  Se `size` o `count` è 0, `fread` restituisce 0 e il contenuto del buffer resta invariato.  Se `stream` o `buffer` sono un puntatore null, `fread` richiama il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione imposta `errno` a `EINVAL` e restituisce 0 .  
  
 Vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) per ulteriori informazioni su questi, e altri, codici di errore.  
  
## Note  
 La funzione `fread` legge il `count` degli oggetti di `size` byte dall'input `stream` e li memorizza in `buffer`*.* Il puntatore del file associato allo `stream` \(se presente\) viene incrementato del numero di byte effettivamente letti.  Se il flusso specificato viene aperto in modalità testo, le coppie di avanzamento riga di ritorno vengono sostituite con i singoli caratteri di avanzamento riga.  La sostituzione non ha effetto sul puntatore del file o il valore restituito.  La posizione del puntatore del file è indeterminata se si verifica un errore.  Non può essere specificato il valore di un elemento parzialmente letto.  
  
 Questa funzione viene bloccata da altri thread.  Se è necessaria una versione non bloccante, utilizzare `_fread_nolock`.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`fread`|\<stdio.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
```  
// crt_fread.c  
// This program opens a file named FREAD.OUT and  
// writes 25 characters to the file. It then tries to open  
// FREAD.OUT and read in 25 characters. If the attempt succeeds,  
// the program displays the number of actual items read.  
  
#include <stdio.h>  
  
int main( void )  
{  
   FILE *stream;  
   char list[30];  
   int  i, numread, numwritten;  
  
   // Open file in text mode:  
   if( fopen_s( &stream, "fread.out", "w+t" ) == 0 )  
   {  
      for ( i = 0; i < 25; i++ )  
         list[i] = (char)('z' - i);  
      // Write 25 characters to stream   
      numwritten = fwrite( list, sizeof( char ), 25, stream );  
      printf( "Wrote %d items\n", numwritten );  
      fclose( stream );  
  
   }  
   else  
      printf( "Problem opening the file\n" );  
  
   if( fopen_s( &stream, "fread.out", "r+t" ) == 0 )  
   {  
      // Attempt to read in 25 characters   
      numread = fread( list, sizeof( char ), 25, stream );  
      printf( "Number of items read = %d\n", numread );  
      printf( "Contents of buffer = %.25s\n", list );  
      fclose( stream );  
   }  
   else  
      printf( "File could not be opened\n" );  
}  
```  
  
  **Ha scritto 25 elementi**  
**Numero di elementi letti \= 25**  
**Contenuto del buffer \= zyxwvutsrqponmlkjihgfedcb**   
## Equivalente .NET Framework  
 [System::IO::FileStream::Read](https://msdn.microsoft.com/en-us/library/system.io.filestream.read.aspx)  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fwrite](../../c-runtime-library/reference/fwrite.md)   
 [\_read](../../c-runtime-library/reference/read.md)