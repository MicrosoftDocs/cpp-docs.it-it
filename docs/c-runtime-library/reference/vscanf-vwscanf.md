---
title: "vscanf, vwscanf | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "vscanf"
  - "vwscanf"
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
  - "vscanf"
  - "vwscanf"
  - "_vtscanf"
dev_langs: 
  - "C++"
ms.assetid: d1df595b-11bc-4682-9441-a92616301e3b
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# vscanf, vwscanf
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Legge i dati formattatati dal flusso di input standard.  Sono disponibili versioni più sicure di questa funzione; vedere [vscanf\_s, vwscanf\_s](../../c-runtime-library/reference/vscanf-s-vwscanf-s.md).  
  
## Sintassi  
  
```  
int vscanf(  
   const char *format,  
   va_list arglist  
);  
int vwscanf(  
   const wchar_t *format,  
   va_list arglist  
);  
  
```  
  
#### Parametri  
 `format`  
 Stringa di controllo del formato.  
  
 `arglist`  
 Elenco di argomenti variabili.  
  
## Valore restituito  
 Restituisce il numero di campi che vengono convertiti correttamente e assegnati; nel valore restituito non sono inclusi i campi che sono stati letti, ma non assegnati.  Un valore restituito pari a 0 indica che nessun campo è stato assegnato.  
  
 Se `format` è un `NULL` puntatore null, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni restituiscono `EOF` e impostano `errno` su `EINVAL`.  
  
 Per informazioni su questi e altri codici di errore, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 La funzione `vscanf` legge i dati dal flusso di input standard `stdin` e scrive i dati nelle posizioni fornite dall'elenco di argomenti `arglist`.  Ogni argomento dell'elenco deve essere un puntatore a una variabile di un tipo che corrisponde a un identificatore del tipo in `format`.  Se la copia avviene tra stringhe che si sovrappongono, il comportamento non è definito.  
  
> [!IMPORTANT]
>  Quando si utilizza `vscanf` per leggere una stringa, specificare sempre una larghezza per il formato `%s`, ad esempio `"%32s"` anziché `"%s"`\); in caso contrario, l'input in un formato inappropriato può comportare un sovraccarico del buffer.  In alternativa, è possibile utilizzare [vscanf\_s, vwscanf\_s](../../c-runtime-library/reference/vscanf-s-vwscanf-s.md) o [fgets](../../c-runtime-library/reference/fgets-fgetws.md).  
  
 `vwscanf` è una versione a caratteri estesi di `vscanf`; l'argomento `format` in `vwscanf` è una stringa di caratteri estesi.  `vwscanf` e `vscanf` si comportano in modo identico se il flusso viene aperto in modalità ANSI.  `vscanf` non supporta l'input da un flusso di UNICODE.  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_vtscanf`|`vscanf`|`vscanf`|`vwscanf`|  
  
 Per ulteriori informazioni, vedere [Campi per la specifica di formato: funzioni scanf e wscanf](../../c-runtime-library/format-specification-fields-scanf-and-wscanf-functions.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`vscanf`|\<stdio.h\>|  
|`vwscanf`|\<stdio.h\> o \<wchar.h\>|  
  
 La console non è supportata nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Gli handle del flusso standard associati alla console,`stdin`, `stdout` e `stderr`, devono essere reindirizzati prima di poter utilizzare le funzioni di runtime del linguaggio C nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_vscanf.c  
// compile with: /W3  
// This program uses the vscanf and vwscanf functions  
// to read formatted input.  
  
#include <stdio.h>  
#include <stdarg.h>  
  
int call_vscanf(char *format, ...)  
{  
    int result;  
    va_list arglist;  
    va_start(arglist, format);  
    result = vscanf(format, arglist);  
    va_end(arglist);  
    return result;  
}  
  
int call_vwscanf(wchar_t *format, ...)  
{  
    int result;  
    va_list arglist;  
    va_start(arglist, format);  
    result = vwscanf(format, arglist);  
    va_end(arglist);  
    return result;  
}  
  
int main( void )  
{  
    int   i, result;  
    float fp;  
    char  c, s[81];  
    wchar_t wc, ws[81];  
    result = call_vscanf( "%d %f %c %C %80s %80S", &i, &fp, &c, &wc, s, ws );  
    printf( "The number of fields input is %d\n", result );  
    printf( "The contents are: %d %f %c %C %s %S\n", i, fp, c, wc, s, ws);  
    result = call_vwscanf( L"%d %f %hc %lc %80S %80ls", &i, &fp, &c, &wc, s, ws );  
    wprintf( L"The number of fields input is %d\n", result );  
    wprintf( L"The contents are: %d %f %C %c %hs %s\n", i, fp, c, wc, s, ws);  
}  
  
```  
  
  **`71 98,6 di caratteri byte h z 36 92,3 di caratteri wide y n`Il numero di input dei campi è 6**  
**Il contenuto è: 71 98,599998 di caratteri byte h z**  
**Il numero dell'input di campi è 6.**  
**Il contenuto è: 36 92,300003 di caratteri wide y n**   
## Equivalente .NET Framework  
  
-   [System::Console::Read](https://msdn.microsoft.com/en-us/library/system.console.read.aspx)  
  
-   [System::Console::ReadLine](https://msdn.microsoft.com/en-us/library/system.console.readline.aspx)  
  
-   Vedere anche i metodi `Parse`, come [System::Double::Parse](https://msdn.microsoft.com/en-us/library/system.double.parse.aspx).  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [fscanf, \_fscanf\_l, fwscanf, \_fwscanf\_l](../../c-runtime-library/reference/fscanf-fscanf-l-fwscanf-fwscanf-l.md)   
 [printf, \_printf\_l, wprintf, \_wprintf\_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [sprintf, \_sprintf\_l, swprintf, \_swprintf\_l, \_\_swprintf\_l](../../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)   
 [sscanf, \_sscanf\_l, swscanf, \_swscanf\_l](../../c-runtime-library/reference/sscanf-sscanf-l-swscanf-swscanf-l.md)   
 [vscanf\_s, vwscanf\_s](../../c-runtime-library/reference/vscanf-s-vwscanf-s.md)