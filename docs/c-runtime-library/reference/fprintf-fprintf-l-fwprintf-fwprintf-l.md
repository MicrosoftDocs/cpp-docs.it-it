---
title: "fprintf, _fprintf_l, fwprintf, _fwprintf_l | Microsoft Docs"
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
  - "fwprintf"
  - "fprintf"
  - "_fprintf_l"
  - "_fwprintf_l"
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
  - "fprintf"
  - "fwprintf"
  - "_ftprintf"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_fwprintf_l (funzione)"
  - "fprintf (funzione)"
  - "fprintf_l (funzione)"
  - "_fprintf_l (funzione)"
  - "_ftprintf (funzione)"
  - "fwprintf (funzione)"
  - "ftprintf_l (funzione)"
  - "ftprintf (funzione)"
  - "_ftprintf_l (funzione)"
  - "stampare dati formattati in flussi"
  - "fwprintf_l (funzione)"
ms.assetid: 34a87e1c-6e4d-4d48-a611-58314dd4dc4b
caps.latest.revision: 24
caps.handback.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# fprintf, _fprintf_l, fwprintf, _fwprintf_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Stampare dati formattati in un flusso.  Sono disponibili versioni più sicure di queste funzioni. Vedere [fprintf\_s, \_fprintf\_s\_l, fwprintf\_s, \_fwprintf\_s\_l](../../c-runtime-library/reference/fprintf-s-fprintf-s-l-fwprintf-s-fwprintf-s-l.md).  
  
## Sintassi  
  
```  
int fprintf(   
   FILE *stream,  
   const char *format [,  
   argument ]...  
);  
int _fprintf_l(   
   FILE *stream,  
   const char *format,  
   locale_t locale [,  
   argument ]...  
);  
int fwprintf(   
   FILE *stream,  
   const wchar_t *format [,  
   argument ]...  
);  
int _fwprintf_l(   
   FILE *stream,  
   const wchar_t *format,  
   locale_t locale [,  
   argument ]...  
);  
```  
  
#### Parametri  
 `stream`  
 Puntatore alla struttura `FILE`.  
  
 `format`  
 Stringa di controllo del formato.  
  
 `argument`  
 Argomenti facoltativi.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 `fprintf` restituisce il numero di byte scritti.  `fwprintf` restituisce il numero di caratteri di tipo "wide" scritti.  Ognuna di queste funzioni restituisce un valore negativo quando si verifica un errore di output.  Se il `stream` o `format` è `NULL`, queste funzioni richiamano il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione restituisce \-1 e imposta `errno` a `EINVAL`.  Non viene controllato che la stringa di formato abbia dei caratteri di formattazione validi, come invece accade con `fprintf_s` o `fwprintf_s`.  
  
 Vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) per ulteriori informazioni su questi, e altri, codici di errore.  
  
## Note  
 `fprintf` formatta e visualizza una stringa di caratteri e di valori nello `stream`di output*.* Ogni funzione `argument` \(se presente\) viene convertita e restituita in base al formato specificato in `format`*.* Per `fprintf`, l'argomento `format` ha la stessa sintassi e la stessa funzione che ha in `printf`.  
  
 `fwprintf` è una versione a caratteri di tipo "wide" di `fprintf`; in `fwprintf`, `format` è una stringa di caratteri di tipo "wide".  Queste funzioni si comportano in modo identico se il flusso viene aperto in modalità ANSI.  `fprintf` non supporta attualmente l'output in un flusso UNICODE.  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche ad eccezione per il fatto che utilizzano il parametro delle impostazioni locali passato al posto di quelle del thread corrente.  
  
> [!IMPORTANT]
>  Assicurarsi che `format` non sia una stringa definita dall'utente.  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_ftprintf`|`fprintf`|`fprintf`|`fwprintf`|  
|`_ftprintf_l`|`_fprintf_l`|`_fprintf_l`|`_fwprintf_l`|  
  
 Per ulteriori informazioni, vedere [Specifiche di formato](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`fprintf`, `_fprintf_l`|\<stdio.h\>|  
|`fwprintf`, `_fwprintf_l`|\<stdio.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
```  
// crt_fprintf.c  
/* This program uses fprintf to format various  
 * data and print it to the file named FPRINTF.OUT. It  
 * then displays FPRINTF.OUT on the screen using the system  
 * function to invoke the operating-system TYPE command.  
 */  
  
#include <stdio.h>  
#include <process.h>  
  
FILE *stream;  
  
int main( void )  
{  
   int    i = 10;  
   double fp = 1.5;  
   char   s[] = "this is a string";  
   char   c = '\n';  
  
   fopen_s( &stream, "fprintf.out", "w" );  
   fprintf( stream, "%s%c", s, c );  
   fprintf( stream, "%d\n", i );  
   fprintf( stream, "%f\n", fp );  
   fclose( stream );  
   system( "type fprintf.out" );  
}  
```  
  
  **questa è una stringa**  
**10**  
**1.500000**   
## Equivalente .NET Framework  
 [System::IO::StreamWriter::Write](https://msdn.microsoft.com/en-us/library/system.io.streamwriter.write.aspx)  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [\_cprintf, \_cprintf\_l, \_cwprintf, \_cwprintf\_l](../../c-runtime-library/reference/cprintf-cprintf-l-cwprintf-cwprintf-l.md)   
 [fscanf, \_fscanf\_l, fwscanf, \_fwscanf\_l](../../c-runtime-library/reference/fscanf-fscanf-l-fwscanf-fwscanf-l.md)   
 [sprintf, \_sprintf\_l, swprintf, \_swprintf\_l, \_\_swprintf\_l](../../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)   
 [Sintassi per la specifica del formato: funzioni printf wprintf](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md)