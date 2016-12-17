---
title: "fgets, fgetws | Microsoft Docs"
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
  - "fgets"
  - "fgetws"
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
  - "_fgetts"
  - "fgetws"
  - "fgets"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_fgetts (funzione)"
  - "fgets (funzione)"
  - "fgetts (funzione)"
  - "fgetws (funzione)"
  - "flussi, recupero di stringhe"
  - "flussi, lettura"
ms.assetid: ad549bb5-df98-4ccd-a53f-95114e60c4fc
caps.latest.revision: 15
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# fgets, fgetws
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene una stringa da un flusso.  
  
## Sintassi  
  
```  
char *fgets(   
   char *str,  
   int n,  
   FILE *stream   
);  
wchar_t *fgetws(   
   wchar_t *str,  
   int n,  
   FILE *stream   
);  
```  
  
#### Parametri  
 `str`  
 Percorso di archiviazione per i dati.  
  
 `n`  
 Numero massimo di caratteri da leggere.  
  
 `stream`  
 Puntatore alla struttura `FILE`.  
  
## Valore restituito  
 Ognuna di queste funzioni restituisce `str`.  `NULL` viene restituito per indicare un errore o una condizione di fine file.  Usa `feof` o `ferror` per determinare se si è verificato un errore.  Se `str` o `stream` è un puntatore null, o `n` è minore o uguale a zero, questa funzione invoca il gestore del parametro non valido. come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e la funzione restituisce `NULL`.  
  
 Vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) per ulteriori informazioni su questi, e altri, codici di errore.  
  
## Note  
 La funzione `fgets` legge una stringa dall'argomento di input di `stream` e la memorizza in `str`.  `fgets` legge caratteri dalla posizione corrente del flusso e include il primo carattere di una nuova riga, alla fine del flusso, o fino a che il numero di caratteri letti è uguale a `n` \- 1, che si verifica per primo.  Il risultato memorizzato in `str` viene accodato con un carattere null.  Il carattere di nuova riga, se letto, è incluso nella stringa.  
  
 `fgetws` è una versione a caratteri di tipo "wide" di `fgets`.  
  
 `fgetws` legge rispettivamente l'argomento a caratteri wide `str` in `stream` come una stringa di caratteri multibyte o una stringa di caratteri estesi a seconda di come lo venga aperto rispettivamente, in modalità di testo oppure in modalità binaria.  Per ulteriori informazioni sull'utilizzo delle modalità binaria e testo in formato Unicode e in stream\-I\/O multibyte, vedere [Text and Binary Mode File I\/O](../../c-runtime-library/text-and-binary-mode-file-i-o.md) e [Unicode Stream I\/O in Text and Binary Modes](../../c-runtime-library/unicode-stream-i-o-in-text-and-binary-modes.md).  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_fgetts`|`fgets`|`fgets`|`fgetws`|  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`fgets`|\<stdio.h\>|  
|`fgetws`|\<stdio.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
```  
// crt_fgets.c  
// This program uses fgets to display  
// a line from a file on the screen.  
//  
  
#include <stdio.h>  
  
int main( void )  
{  
   FILE *stream;  
   char line[100];  
  
   if( fopen_s( &stream, "crt_fgets.txt", "r" ) == 0 )  
   {  
      if( fgets( line, 100, stream ) == NULL)  
         printf( "fgets error\n" );  
      else  
         printf( "%s", line);  
      fclose( stream );  
   }  
}  
```  
  
## Input: crt\_fgets.txt  
  
```  
Line one.  
Line two.  
```  
  
### Output  
  
```  
Line one.  
```  
  
## Equivalente .NET Framework  
  
-   [System::IO::StreamReader::ReadLine](https://msdn.microsoft.com/en-us/library/system.io.streamreader.readline.aspx)  
  
-   [System::IO::TextReader::ReadBlock](https://msdn.microsoft.com/en-us/library/system.io.textreader.readblock.aspx)  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fputs, fputws](../../c-runtime-library/reference/fputs-fputws.md)   
 [gets, \_getws](../../c-runtime-library/gets-getws.md)   
 [puts, \_putws](../../c-runtime-library/reference/puts-putws.md)