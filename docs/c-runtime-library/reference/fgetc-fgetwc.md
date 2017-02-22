---
title: "fgetc, fgetwc | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "fgetwc"
  - "fgetc"
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
  - "_fgettc"
  - "fgetwc"
  - "fgetc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_fgettc (funzione)"
  - "caratteri, lettura"
  - "fgetc (funzione)"
  - "fgettc (funzione)"
  - "fgetwc (funzione)"
  - "lettura di caratteri da flussi"
  - "flussi, lettura di caratteri"
ms.assetid: 13348b7b-dc86-421c-9d6c-611ca79c8338
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 18
---
# fgetc, fgetwc
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Leggere un carattere da un flusso.  
  
## Sintassi  
  
```  
int fgetc(   
   FILE *stream   
);  
wint_t fgetwc(   
   FILE *stream   
);  
```  
  
#### Parametri  
 `stream`  
 Puntatore alla struttura `FILE`.  
  
## Valore restituito  
 `fgetc` restituisce il carattere letto come un `int` o restituisce `EOF` per indicare un errore o EOF.  `fgetwc` restituisce, come un [wint\_t](../../c-runtime-library/standard-types.md), il carattere di tipo esteso che corrisponde al carattere di lettura o restituisce `WEOF` per indicare un errore o EOF.  Per entrambe le funzioni, utilizzare `feof` o `ferror` per distinguere un errore da una condizione di EOF.  Se avviene un errore di lettura, l'indicatore di errore per il flusso viene impostato.  Se `stream` è `NULL`, `fgetc` e `fgetwc` invocano il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni impostano `errno` a `EINVAL` e restituiscono `EOF`.  
  
## Note  
 Ognuna di queste funzioni legge un singolo carattere nella posizione corrente del file associato a `stream`.  La funzione quindi incrementa il puntatore del file collegato \(se definito\) per indicare il carattere successivo.  Se il flusso è alla fine del file, l'indicatore EOF del flusso viene impostato.  
  
 `fgetc` equivale a `getc`, ma viene implementato solo come funzione, anziché come una funzione e macro.  
  
 `fgetwc` è la versione a caratteri estesi di `fgetc`; legge `c` come carattere multibyte o un carattere esteso a seconda di come `stream` viene aperto se in modalità testo o in modalità binario.  
  
 Le versioni con il suffisso `_nolock` sono identiche ma non sono protette da interferenze da parte di altri thread.  
  
 Per ulteriori informazioni sui caratteri di tipo "wide" e i caratteri multibyte di elaborazione in modo binario e testo, vedere [Flusso I\/O Unicode in modalità binario e del testo](../../c-runtime-library/unicode-stream-i-o-in-text-and-binary-modes.md).  
  
### Mapping di routine a Testo generico  
  
|TCHAR.H routine|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_fgettc`|`fgetc`|`fgetc`|`fgetwc`|  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`fgetc`|\<stdio.h\>|  
|`fgetwc`|\<stdio.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_fgetc.c  
// This program uses getc to read the first  
// 80 input characters (or until the end of input)  
// and place them into a string named buffer.  
  
#include <stdio.h>  
#include <stdlib.h>  
  
int main( void )  
{  
   FILE *stream;  
   char buffer[81];  
   int  i, ch;  
  
   // Open file to read line from:  
   fopen_s( &stream, "crt_fgetc.txt", "r" );  
   if( stream == NULL )  
      exit( 0 );  
  
   // Read in first 80 characters and place them in "buffer":   
   ch = fgetc( stream );  
   for( i=0; (i < 80 ) && ( feof( stream ) == 0 ); i++ )  
   {  
      buffer[i] = (char)ch;  
      ch = fgetc( stream );  
   }  
  
   // Add null to end string   
   buffer[i] = '\0';  
   printf( "%s\n", buffer );  
   fclose( stream );  
}  
```  
  
## Input: crt\_fgetc.txt  
  
```  
Line one.  
Line two.  
```  
  
### Output  
  
```  
Line one.  
Line two.  
```  
  
## Equivalente .NET Framework  
  
-   [System::IO::StreamReader::Read](https://msdn.microsoft.com/en-us/library/system.io.streamreader.read.aspx)  
  
-   [System::Console::Read](https://msdn.microsoft.com/en-us/library/system.console.read.aspx)  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fputc, fputwc](../../c-runtime-library/reference/fputc-fputwc.md)   
 [getc, getwc](../../c-runtime-library/reference/getc-getwc.md)