---
title: "_fgetchar, _fgetwchar | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_fgetchar"
  - "_fgetwchar"
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
  - "fgetwchar"
  - "_fgettchar"
  - "_fgetchar"
  - "_fgetwchar"
  - "fgettchar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_fgetchar (funzione)"
  - "_fgettchar (funzione)"
  - "_fgetwchar (funzione)"
  - "fgetchar (funzione)"
  - "fgettchar (funzione)"
  - "fgetwchar (funzione)"
  - "input standard, lettura"
ms.assetid: 8bce874c-701a-41a3-b1b2-feff266fb5b9
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# _fgetchar, _fgetwchar
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Legge un carattere da `stdin`.  
  
## Sintassi  
  
```  
int _fgetchar( void );  
wint_t _fgetwchar( void );  
```  
  
## Valore restituito  
 `_fgetchar` restituisce il carattere letto come un `int` o restituisce `EOF` per indicare un errore o la fine del file.  **\_**`fgetwchar` restituisce, come un [wint\_t](../../c-runtime-library/standard-types.md), il carattere wide che corrisponde al carattere letto o ritorna `WEOF` per indicare un errore o la fine del file.  Per entrambe le funzioni, utilizzare `feof` o `ferror` per distinguere un errore da una condizione di EOF.  
  
## Note  
 Queste funzioni leggono un singolo carattere da `stdin`.  La funzione quindi incrementa il puntatore del file collegato \(se definito\) per indicare il carattere successivo.  Se il flusso è alla fine del file, l'indicatore EOF del flusso viene impostato.  
  
 `_fgetchar` è equivalente a `fgetc( stdin )`.  È anche equivalente a `getchar`, ma viene implementato solo come funzione, anziché come una funzione e una macro.  `_fgetwchar` è la versione a caratteri di tipo "wide" di `_fgetchar`.  
  
 Queste funzioni non sono compatibili con lo standard ANSI.  
  
### Mapping di routine su testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_fgettchar`|`_fgetchar`|`_fgetchar`|`_fgetwchar`|  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`_fgetchar`|\<stdio.h\>|  
|`_fgetwchar`|\<stdio.h\> o \<wchar.h\>|  
  
 La console non è supportata nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Gli handle del flusso standard associati alla console,`stdin`, `stdout` e `stderr`, devono essere reindirizzati prima di poter utilizzare le funzioni di runtime del linguaggio C nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_fgetchar.c  
// This program uses _fgetchar to read the first  
// 80 input characters (or until the end of input)  
// and place them into a string named buffer.  
//  
  
#include <stdio.h>  
#include <stdlib.h>  
  
int main( void )  
{  
   char buffer[81];  
   int  i, ch;  
  
   // Read in first 80 characters and place them in "buffer":  
   ch = _fgetchar();  
   for( i=0; (i < 80 ) && ( feof( stdin ) == 0 ); i++ )  
   {  
      buffer[i] = (char)ch;  
      ch = _fgetchar();  
   }  
  
   // Add null to end string   
   buffer[i] = '\0';  
   printf( "%s\n", buffer );  
}  
```  
  
  **`Riga uno. Riga due.`Riga uno.**  
**Riga due.**   
## Equivalente .NET Framework  
  
-   [System::IO::StreamReader::Read](https://msdn.microsoft.com/en-us/library/system.io.streamreader.read.aspx)  
  
-   [System::Console::Read](https://msdn.microsoft.com/en-us/library/system.console.read.aspx)  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fputc, fputwc](../../c-runtime-library/reference/fputc-fputwc.md)   
 [getc, getwc](../../c-runtime-library/reference/getc-getwc.md)