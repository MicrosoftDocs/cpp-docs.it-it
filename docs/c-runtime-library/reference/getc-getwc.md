---
title: "getc, getwc | Microsoft Docs"
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
  - "getwc"
  - "getc"
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
  - "_gettc"
  - "getwc"
  - "_gettchar"
  - "getc"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_gettc (funzione)"
  - "caratteri, lettura"
  - "getc (funzione)"
  - "gettc (funzione)"
  - "getwc (funzione)"
  - "getwchar (funzione)"
  - "lettura di caratteri da flussi"
  - "flussi, lettura di caratteri"
ms.assetid: 354ef514-d0c7-404b-92f5-995f6a834bb3
caps.latest.revision: 18
caps.handback.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# getc, getwc
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Leggere un carattere da un flusso.  
  
## Sintassi  
  
```  
int getc(   
   FILE *stream   
);  
wint_t getwc(   
   FILE *stream   
);  
```  
  
#### Parametri  
 `stream`  
 Flusso di input.  
  
## Valore restituito  
 Restituisce il carattere letto.  Per indicare un errore di lettura o uno stato di fine file, `getc` ritorna `EOF`, e `getwc` ritorna `WEOF`.  Per `getc`, utilizzare `ferror` o `feof` per controllare la presenza di un errore o di uno stato di fine file.  Se `stream` è `NULL`, `getc` e `getwc` invocano il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni restituiscono `EOF` \(o `WEOF` per`getwc`\) e impostano `errno` a `EINVAL`.  
  
 Vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) per ulteriori informazioni su questi, e altri, codici di errore.  
  
## Note  
 Ogni routine legge un singolo carattere da un file alla posizione corrente e incrementa il puntatore del file associato \(se definito\) per indicare il carattere successivo.  Il file è associato all'oggetto `stream`.  
  
 Queste funzioni bloccano il thread chiamante e sono pertanto thread\-safe.  Per una versione non bloccante, vedere [\_getc\_nolock, \_getwc\_nolock](../../c-runtime-library/reference/getc-nolock-getwc-nolock.md).  
  
 I commenti di routine specifiche seguenti.  
  
|Routine|Osservazioni|  
|-------------|------------------|  
|`getc`|Equivale a `fgetc`, ma implementato come funzione e come macro.|  
|`getwc`|Versione a caratteri estesi di `getc`.  Legge un carattere multibyte o un caratteri estesi in base a se `stream` viene aperto in modalità testo o in modalità binaria.|  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_gettc`|`getc`|`getc`|`getwc`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`getc`|\<stdio.h\>|  
|`getwc`|\<stdio.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
```  
// crt_getc.c  
// Use getc to read a line from a file.  
  
#include <stdio.h>  
  
int main()  
{  
    char buffer[81];  
    int i, ch;  
    FILE* fp;  
  
    // Read a single line from the file "crt_getc.txt".   
  
    fopen_s(&fp, "crt_getc.txt", "r");  
    if (!fp)  
    {  
       printf("Failed to open file crt_getc.txt.\n");  
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
  
## Input: crt\_getc.txt  
  
```  
Line one.  
Line two.  
```  
  
### Output  
  
```  
Input was: Line one.  
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