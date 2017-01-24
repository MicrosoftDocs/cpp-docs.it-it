---
title: "_fprintf_p, _fprintf_p_l, _fwprintf_p, _fwprintf_p_l | Microsoft Docs"
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
  - "_fwprintf_p"
  - "_fprintf_p_l"
  - "_fwprintf_p_l"
  - "_fprintf_p"
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
  - "_fprintf_p"
  - "_ftprintf_p"
  - "fwprintf_p"
  - "_fwprintf_p"
  - "fprintf_p"
  - "ftprintf_p"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_fprintf_p (funzione)"
  - "_fprintf_p_l (funzione)"
  - "_ftprintf_p (funzione)"
  - "_ftprintf_p_l (funzione)"
  - "_fwprintf_p (funzione)"
  - "_fwprintf_p_l (funzione)"
  - "fprintf_p (funzione)"
  - "fprintf_p_l (funzione)"
  - "ftprintf_p (funzione)"
  - "ftprintf_p_l (funzione)"
  - "fwprintf_p (funzione)"
  - "fwprintf_p_l (funzione)"
  - "stampa [C++], dati formattati in flussi"
  - "flussi, stampa di dati formattati"
ms.assetid: 46b082e1-45ba-4383-9ee4-97015aa50bc6
caps.latest.revision: 20
caps.handback.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _fprintf_p, _fprintf_p_l, _fwprintf_p, _fwprintf_p_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Stampa dati formattati in un flusso.  
  
## Sintassi  
  
```  
int _fprintf_p(   
   FILE *stream,  
   const char *format [,  
   argument ]...  
);  
int _fprintf_p_l(   
   FILE *stream,  
   const char *format,  
   locale_t locale [,  
   argument ]...  
);  
int _fwprintf_p(   
   FILE *stream,  
   const wchar_t *format [,  
   argument ]...  
);  
int _fwprintf_p_l(   
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
 `_fprintf_p` e `_fwprintf_p` restituiscono il numero di caratteri scritto oppure restituiscono un valore negativo quando si verifica un errore di output.  
  
## Note  
 `_fprintf_p` formatta e visualizza una stringa di caratteri e di valori nello `stream`di output.  Ogni funzione `argument` \(se presente\) viene convertita e restituita in base al formato specificato in `format`.  Per `_fprintf_p`, l'argomento `format` ha la stessa sintassi e la stessa funzione che ha in `_printf_p`.  Queste funzioni supportano i parametri posizionali, pertanto l'ordine dei parametri utilizzati dalla stringa di formato può essere modificato.  Per ulteriori informazioni sui parametri posizionali, vedere [Parametri posizionali printf\_p](../../c-runtime-library/printf-p-positional-parameters.md).  
  
 `_fwprintf_p` è una versione a caratteri di tipo "wide" di `_fprintf_p`; in `_fwprintf_p`, `format` è una stringa di caratteri di tipo "wide".  Queste funzioni si comportano in modo identico se il flusso viene aperto in modalità ANSI.  `_fprintf_p` non supporta attualmente l'output in un flusso UNICODE.  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche ad eccezione che utilizzano il parametro delle impostazioni locali passato in ingresso invece di utilizzare le impostazioni locali correnti.  
  
> [!IMPORTANT]
>  Assicurarsi che `format` non sia una stringa definita dall'utente.  
  
 Come le versioni non sicure \(vedere [fprintf, \_fprintf\_l, fwprintf, \_fwprintf\_l](../../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md)\), queste funzioni convalidano i relativi parametri e richiamano il gestore del parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md), se `stream` o `format` è un puntatore null o se ci sono identificatori di formattazione sconosciuti o mal formati.  Se l'esecuzione può continuare, la funzione restituisce \-1 e imposta `errno` a `EINVAL`.  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_ftprintf_p`|`_fprintf_p`|`_fprintf_p`|`_fwprintf_p`|  
|`_ftprintf_p_l`|`_fprintf_p_l`|`_fprintf_p_l`|`_fwprintf_p_l`|  
  
 Per ulteriori informazioni, vedere [Specifiche di formato](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`_fprintf_p`, `_fprintf_p_l`|\<stdio.h\>|  
|`_fwprintf_p`, `_fwprintf_p_l`|\<stdio.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_fprintf_p.c  
// This program uses _fprintf_p to format various  
// data and print it to the file named FPRINTF_P.OUT. It  
// then displays FPRINTF_P.OUT on the screen using the system  
// function to invoke the operating-system TYPE command.  
//   
  
#include <stdio.h>  
#include <process.h>  
  
int main( void )  
{  
    FILE    *stream = NULL;  
    int     i = 10;  
    double  fp = 1.5;  
    char    s[] = "this is a string";  
    char    c = '\n';  
  
    // Open the file  
    if ( fopen_s( &stream, "fprintf_p.out", "w" ) == 0)  
    {  
        // Format and print data  
        _fprintf_p( stream, "%2$s%1$c", c, s );  
        _fprintf_p( stream, "%d\n", i );  
        _fprintf_p( stream, "%f\n", fp );  
  
        // Close the file  
        fclose( stream );  
    }  
  
    // Verify our data  
    system( "type fprintf_p.out" );  
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
 [Parametri posizionali printf\_p](../../c-runtime-library/printf-p-positional-parameters.md)   
 [\_cprintf\_p, \_cprintf\_p\_l, \_cwprintf\_p, \_cwprintf\_p\_l](../../c-runtime-library/reference/cprintf-p-cprintf-p-l-cwprintf-p-cwprintf-p-l.md)   
 [\_cprintf\_s, \_cprintf\_s\_l, \_cwprintf\_s, \_cwprintf\_s\_l](../../c-runtime-library/reference/cprintf-s-cprintf-s-l-cwprintf-s-cwprintf-s-l.md)   
 [Parametri posizionali printf\_p](../../c-runtime-library/printf-p-positional-parameters.md)   
 [fscanf\_s, \_fscanf\_s\_l, fwscanf\_s, \_fwscanf\_s\_l](../../c-runtime-library/reference/fscanf-s-fscanf-s-l-fwscanf-s-fwscanf-s-l.md)