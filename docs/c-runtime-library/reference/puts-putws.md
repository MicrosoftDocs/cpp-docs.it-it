---
title: "puts, _putws | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_putws"
  - "puts"
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
  - "_putts"
  - "_putws"
  - "puts"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_putts (funzione)"
  - "_putws (funzione)"
  - "puts (funzione)"
  - "putts (funzione)"
  - "putws (funzione)"
  - "output standard, scrittura"
  - "stringhe [C++], scrittura"
ms.assetid: 32dada12-ed45-40ac-be06-3feeced9ecd6
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# puts, _putws
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Scrive una stringa in **stdout**.  
  
## Sintassi  
  
```  
  
      int puts(  
   const char *str   
);  
int _putws(  
   const wchar_t *str   
);  
```  
  
#### Parametri  
 `str`  
 Stringa di output.  
  
## Valore restituito  
 Restituisce un valore non negativo se ha esito positivo.  Se `puts` fallisce, restituisce `EOF`; se `_putws` fallisce, restituisce **WEOF**.  Se `str` è un puntatore a null, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, le funzioni impostano `errno` a `EINVAL` e restituiscono `EOF` o **WEOF**.  
  
 Per ulteriori informazioni su questi, e altri, codici di errore vedere [\_doserrno, errno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) .  
  
## Note  
 La funzione `puts` scrive `str` nel flusso di output standard **stdout**, sostituendo il carattere di terminazione null della stringa \("\\0"\) con un carattere di nuova riga \("\\n"\) nel flusso di output.  
  
 `_putws` è la versione a caratteri estesi di `puts`; se il flusso viene aperto in modalità ANSI, le due funzioni si comportano in modo identico.  `puts` non supporta attualmente l'output in un flusso UNICODE.  
  
 In Windows 2000 e versioni successive, **\_putwch** scrive caratteri unicode utilizzando l'impostazione corrente di CONSOLE LOCALE.  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_putts`|`puts`|`puts`|`_putws`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`puts`|\<stdio.h\>|  
|`_putws`|\<stdio.h\>|  
  
 La console non è supportata nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Gli handle del flusso standard associati alla console,`stdin`, `stdout` e `stderr`, devono essere reindirizzati prima di poter utilizzare le funzioni di runtime del linguaggio C nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```  
// crt_puts.c  
/* This program uses puts to write a string to stdout.  
 */  
  
#include <stdio.h>  
  
int main( void )  
{  
   puts( "Hello world from puts!" );  
}  
```  
  
## Output  
  
```  
Hello world from puts!  
```  
  
## Equivalente .NET Framework  
 [System::Console::Write](https://msdn.microsoft.com/en-us/library/system.console.write.aspx)  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fputs, fputws](../../c-runtime-library/reference/fputs-fputws.md)   
 [fgets, fgetws](../../c-runtime-library/reference/fgets-fgetws.md)