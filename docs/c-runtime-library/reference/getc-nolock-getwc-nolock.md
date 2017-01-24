---
title: "_getc_nolock, _getwc_nolock | Microsoft Docs"
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
  - "_getc_nolock"
  - "_getwc_nolock"
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
  - "getc_nolock"
  - "_gettc_nolock"
  - "_getc_nolock"
  - "getwc_nolock"
  - "gettc_nolock"
  - "_getwc_nolock"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_getc_nolock (funzione)"
  - "_gettc_nolock (funzione)"
  - "_getwc_nolock (funzione)"
  - "caratteri, lettura"
  - "getc_nolock (funzione)"
  - "gettc_nolock (funzione)"
  - "getwc_nolock (funzione)"
  - "lettura di caratteri da flussi"
  - "flussi, lettura di caratteri"
ms.assetid: eb37b272-e177-41c9-b077-12ce7ffd3b88
caps.latest.revision: 16
caps.handback.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _getc_nolock, _getwc_nolock
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Legge un carattere da un flusso.  
  
## Sintassi  
  
```  
int _getc_nolock(   
   FILE *stream   
);  
wint_t _getwc_nolock(   
   FILE *stream   
);  
```  
  
#### Parametri  
 `stream`  
 Flusso di input.  
  
## Valore restituito  
 Vedere [getc, getwc](../../c-runtime-library/reference/getc-getwc.md).  
  
## Note  
 Queste funzioni sono identiche a `getc` e a `getwc` ma non bloccano il thread chiamante.  Potrebbero essere più veloci perché non comportano un sovraccarico che blocca altri thread.  Utilizzare queste funzioni solo in contesti thread\-safe come applicazioni a thread singolo o dove l'ambito chiamante già gestisce l'isolamento del thread.  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_gettc_nolock`|`getc_nolock`|`getc_nolock`|`getwc_nolock`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`getc_nolock`|\<stdio.h\>|  
|`getwc_nolock`|\<stdio.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_getc_nolock.c  
// Use getc to read a line from a file.  
  
#include <stdio.h>  
  
int main()  
{  
    char buffer[81];  
    int i, ch;  
    FILE* fp;  
  
    // Read a single line from the file "crt_getc_nolock.txt".  
    fopen_s(&fp, "crt_getc_nolock.txt", "r");  
    if (!fp)  
    {  
       printf("Failed to open file crt_getc_nolock.txt.\n");  
       exit(1);  
    }  
  
    for (i = 0; (i < 80) && ((ch = getc(fp)) != EOF)  
                         && (ch != '\n'); i++)  
    {  
        buffer[i] = (char) ch;  
    }  
  
    // Terminate string with a null character   
    buffer[i] = '\0';  
    printf( "Input was: %s\n", buffer);  
  
    fclose(fp);  
}  
```  
  
## Input: crt\_getc\_nolock.txt  
  
```  
Line the first.  
Line the second.  
```  
  
### Output  
  
```  
Input was: Line the first.  
```  
  
## Equivalente .NET Framework  
  
-   [System::IO::StreamReader::Read](https://msdn.microsoft.com/en-us/library/system.io.streamreader.read.aspx)  
  
-   [System::Console::Read](https://msdn.microsoft.com/en-us/library/system.console.read.aspx)  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fgetc, fgetwc](../../c-runtime-library/reference/fgetc-fgetwc.md)   
 [\_getch, \_getwch](../../c-runtime-library/reference/getch-getwch.md)   
 [putc, putwc](../../c-runtime-library/reference/putc-putwc.md)   
 [ungetc, ungetwc](../../c-runtime-library/reference/ungetc-ungetwc.md)