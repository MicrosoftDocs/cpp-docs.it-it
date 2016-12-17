---
title: "fputs, fputws | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "fputs"
  - "fputws"
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
  - "fputs"
  - "fputws"
  - "_fputts"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_fputts (funzione)"
  - "fputs (funzione)"
  - "fputts (funzione)"
  - "fputws (funzione)"
  - "flussi, scrittura di stringhe"
ms.assetid: d48c82b8-aa17-4830-8c7d-30442ddbb326
caps.latest.revision: 18
caps.handback.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# fputs, fputws
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Scrive una stringa in un flusso.  
  
## Sintassi  
  
```  
int fputs(   
   const char *str,  
   FILE *stream   
);  
int fputws(   
   const wchar_t *str,  
   FILE *stream   
);  
```  
  
#### Parametri  
 `str`  
 Stringa di output.  
  
 `stream`  
 Puntatore alla struttura `FILE`.  
  
## Valore restituito  
 Ognuna di queste funzioni restituisce un valore negativo in caso di successo.  In caso di errore, `fputs` e `fputws` restituiscono `EOF`.  Se `str` o `stream` è un puntatore null, queste funzioni richiamano un gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e quindi `fputs` restituisce `EOF`, e `fputws` restituisce `WEOF`.  
  
 Vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) per ulteriori informazioni su questi, e altri, codici di errore.  
  
## Note  
 Ognuna di queste funzioni copia `str` nell'output `stream` alla posizione corrente.  `fputws` copia rispettivamente l'argomento a caratteri wide `str` in `stream` come una stringa di caratteri multibyte o una stringa di caratteri estesi a seconda di come lo `stream` venga aperto rispettivamente, in modalità di testo oppure in modalità binaria.  Nemmeno una funzione copia il carattere di terminazione null.  
  
 Queste due funzioni si comportano in modo identico se il flusso viene aperto in modalità ANSI.  `fputs` non supporta attualmente l'output in un flusso UNICODE.  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_fputts`|`fputs`|`fputs`|`fputws`|  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`fputs`|\<stdio.h\>|  
|`fputws`|\<stdio.h\> o \<wchar.h\>|  
  
 La console non è supportata nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Gli handle del flusso standard associati alla console,`stdin`, `stdout` e `stderr`, devono essere reindirizzati prima di poter utilizzare le funzioni di runtime del linguaggio C nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_fputs.c  
// This program uses fputs to write  
// a single line to the stdout stream.  
  
#include <stdio.h>  
  
int main( void )  
{  
   fputs( "Hello world from fputs.\n", stdout );  
}  
```  
  
  **Hello world from fputs.**   
## Equivalente .NET Framework  
 [System::IO::StreamWriter::Write](https://msdn.microsoft.com/en-us/library/system.io.streamwriter.write.aspx)  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fgets, fgetws](../../c-runtime-library/reference/fgets-fgetws.md)   
 [gets, \_getws](../../c-runtime-library/gets-getws.md)   
 [puts, \_putws](../../c-runtime-library/reference/puts-putws.md)