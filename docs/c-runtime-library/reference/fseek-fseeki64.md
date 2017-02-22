---
title: "fseek, _fseeki64 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_fseeki64"
  - "fseek"
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
apitype: "DLLExport"
f1_keywords: 
  - "fseek"
  - "_fseeki64"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_fseeki64 (funzione)"
  - "puntatori a file [C++]"
  - "puntatori a file [C++], spostamento"
  - "fseek (funzione)"
  - "fseeki64 (funzione)"
  - "posizionare i puntatori a file"
ms.assetid: f6bb1f8b-891c-426e-9e14-0e7e5c62df70
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 23
---
# fseek, _fseeki64
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Sposta il puntatore del file in una posizione specificata.  
  
## Sintassi  
  
```  
int fseek(   
   FILE *stream,  
   long offset,  
   int origin   
);  
int _fseeki64(   
   FILE *stream,  
   __int64 offset,  
   int origin   
);  
```  
  
#### Parametri  
 `stream`  
 Puntatore alla struttura `FILE`.  
  
 `offset`  
 Numero di byte da `origin`.  
  
 `origin`  
 Posizione iniziale.  
  
## Valore restituito  
 Se ha esito positivo, `fseek` e `_fseeki64` restituisce 0.  In caso contrario, restituisce un valore diverso da zero.  Nei dispositivi incapaci di posizionarsi, il valore restituito è indefinito.  Se `stream` è un puntatore null, o se `origin` non è uno dei valori consentiti descritti di seguito, `fseek` e `_fseeki64` richiamano il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono \-1.  
  
## Note  
 Le funzioni `fseek` e `_fseeki64` spostano il puntatore del file \(se presente\) associato a `stream` in una nuova posizione che è l'`offset` in byte da `origin`*.* L'operazione seguente nel flusso ha luogo nella nuova posizione.  In un flusso aperto per l'aggiornamento, l'operazione successiva può essere una lettura o una scrittura.  L'argomento origine deve essere una delle costanti, definite in STDIO.H.  
  
 `SEEK_CUR`  
 Posizione corrente del puntatore del file.  
  
 `SEEK_END`  
 Fine del file.  
  
 `SEEK_SET`  
 Inizio del file.  
  
 È possibile utilizzare `fseek` e `_fseeki64` per riposizionare il puntatore in una qualsiasi posizione di un file.  Il puntatore può essere posizionato oltre la fine del file.  `fseek` e `_fseeki64`rimuovono l'indicatore di fine file e annullano l'effetto di tutte le chiamate precedenti di `ungetc` sullo `stream`.  
  
 Quando un file viene aperto per aggiungere dati, la posizione corrente del file è determinata dall'ultima operazione di I\/O, non da dove si desidera occorra la successiva operazione di scrittura.  Se non si è verificata alcuna operazione di I\/O in un file aperto per l'aggiunta di dati, la posizione del file corrisponde all'inizio del file.  
  
 Per i flussi aperti in modalità testo, `fseek` e `_fseeki64`dispongono di un utilizzo limitato, poiché le traslazioni di ritorno a capo e avanzamento riga possono far si che `fseek` e `_fseeki64` producano risultati inaspettati.  Le uniche operazioni che `fseek` e `_fseeki64` garantiscono per i flussi aperti in modalità testo sono:  
  
-   Ricercare con un offset di 0 rispetto a uno qualsiasi dei valori di origine.  
  
-   Ricercare dall'inizio del file con un valore di offset restituito da una chiamata a `ftell` quando si utilizza `fseek` o `_ftelli64`quandosi utilizza`_fseeki64`.  
  
 Anche in modalità di testo, CTRL\+Z viene interpretato come carattere di fine file in input.  Nei file aperti per la lettura\/scrittura tramite `fopen` e in tutte le routine correlate, verifica la presenza della combinazione CTRL\+Z alla fine del file e la rimuove, se possibile.  Questa operazione viene eseguita perché utilizzare la combinazione di `fseek` e `ftell`o`_fseeki64` e `_ftelli64`, per spostarsi all'interno di un file che termina con CTRL\+Z può causare un comportamento non appropriato di `fseek` o `_fseeki64` in prossimità della fine del file.  
  
 Quando il CRT apre un file che inizia con un Byte Order Mark \(BOM\), il puntatore del file viene posizionato dopo il BOM \(ovvero nella parte iniziale del contenuto attuale del file\).  Se è necessario eseguire `fseek` all'inizio del file, utilizzare `ftell` per ottenere la posizione iniziale e eseguire `fseek` su questo valore anziché su 0.  
  
 Questa funzione viene bloccato da altri thread durante l'esecuzione quindi è thread\-safe.  Per una versione non bloccante, vedere [\_fseek\_nolock, \_fseeki64\_nolock](../../c-runtime-library/reference/fseek-nolock-fseeki64-nolock.md).  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`fseek`|\<stdio.h\>|  
|`_fseeki64`|\<stdio.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
```  
// crt_fseek.c  
// This program opens the file FSEEK.OUT and  
// moves the pointer to the file's beginning.  
  
#include <stdio.h>  
  
int main( void )  
{  
   FILE *stream;  
   char line[81];  
   int  result;  
  
   if ( fopen_s( &stream, "fseek.out", "w+" ) != 0 )  
   {  
      printf( "The file fseek.out was not opened\n" );  
      return -1;  
   }  
   fprintf( stream, "The fseek begins here: "  
                    "This is the file 'fseek.out'.\n" );  
   result = fseek( stream, 23L, SEEK_SET);  
   if( result )  
      perror( "Fseek failed" );  
   else  
   {  
      printf( "File pointer is set to middle of first line.\n" );  
      fgets( line, 80, stream );  
      printf( "%s", line );  
    }  
   fclose( stream );  
}  
```  
  
  **File pointer is set to middle of first line.**  
**This is the file 'fseek.out'.**   
## Equivalente .NET Framework  
  
-   [System::IO::FileStream::Position](https://msdn.microsoft.com/en-us/library/system.io.filestream.position.aspx)  
  
-   [System::IO::FileStream::Seek](https://msdn.microsoft.com/en-us/library/system.io.filestream.seek.aspx)  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fopen, \_wfopen](../../c-runtime-library/reference/fopen-wfopen.md)   
 [ftell, \_ftelli64](../../c-runtime-library/reference/ftell-ftelli64.md)   
 [\_lseek, \_lseeki64](../../c-runtime-library/reference/lseek-lseeki64.md)   
 [rewind](../../c-runtime-library/reference/rewind.md)