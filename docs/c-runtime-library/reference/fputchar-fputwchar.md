---
title: "_fputchar, _fputwchar | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_fputchar"
  - "_fputwchar"
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
  - "fputtchar"
  - "_fputwchar"
  - "fputwchar"
  - "_fputtchar"
  - "fputchar"
  - "_fputchar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_fputchar (funzione)"
  - "_fputtchar (funzione)"
  - "_fputwchar (funzione)"
  - "fputchar (funzione)"
  - "fputtchar (funzione)"
  - "fputwchar (funzione)"
  - "output standard, scrittura"
ms.assetid: b92ff600-a924-4f2b-b0e7-3097ee31bdff
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# _fputchar, _fputwchar
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Scrive un carattere su `stdout`.  
  
## Sintassi  
  
```  
int _fputchar(  
   int c   
);  
wint_t _fputwchar(  
   wchar_t c   
);  
```  
  
#### Parametri  
 `c`  
 Carattere da scrivere.  
  
## Valore restituito  
 Ognuna di queste funzioni restituisce il carattere scritto.  Per `_fputchar`, un valore restituito di `EOF` indica un errore.  Per `_fputwchar`, un valore restituito di `WEOF` indica un errore.  Se la c è `NULL`, queste funzioni generano un'eccezione del parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni ritornano `EOF`\(o`WEOF`\) e impostano `errno` su `EINVAL`.  
  
 Per ulteriori informazioni su questi e altri codici, vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 Entrambe le funzioni scrivono il singolo carattere `c` su `stdout` e fanno avanzare l'indicatore in base alle proprie esigenze.  `_fputchar` è equivalente a `fputc(``stdout )`.  È anche equivalente a `putchar`, ma viene implementato solo come funzione, anziché come una funzione e macro.  A differenza `fputc` e `putchar`, queste funzioni non sono compatibili con lo standard ANSI.  
  
### Mapping di routine su testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_fputtchar`|`_fputchar`|`_fputchar`|`_fputwchar`|  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`_fputchar`|\<stdio.h\>|  
|`_fputwchar`|\<stdio.h\> o \<wchar.h\>|  
  
 La console non è supportata nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Gli handle del flusso standard associati alla console,`stdin`, `stdout` e `stderr`, devono essere reindirizzati prima di poter utilizzare le funzioni di runtime del linguaggio C nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_fputchar.c  
// This program uses _fputchar  
// to send a character array to stdout.  
  
#include <stdio.h>  
  
int main( void )  
{  
    char strptr[] = "This is a test of _fputchar!!\n";  
    char *p = NULL;  
  
    // Print line to stream using _fputchar.   
    p = strptr;  
    while( (*p != '\0') && _fputchar( *(p++) ) != EOF )  
      ;  
}  
```  
  
  **Si tratta di un test di\_fputchar\!\!**   
## Equivalente .NET Framework  
  
-   [System::IO::StreamWriter::Write](https://msdn.microsoft.com/en-us/library/system.io.streamwriter.write.aspx)  
  
-   [System::Console::Write](https://msdn.microsoft.com/en-us/library/system.console.write.aspx)  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fgetc, fgetwc](../../c-runtime-library/reference/fgetc-fgetwc.md)   
 [putc, putwc](../../c-runtime-library/reference/putc-putwc.md)