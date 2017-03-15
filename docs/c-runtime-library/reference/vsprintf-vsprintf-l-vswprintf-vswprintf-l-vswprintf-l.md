---
title: "vsprintf, _vsprintf_l, vswprintf, _vswprintf_l, __vswprintf_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_vswprintf_l"
  - "_vsprintf_l"
  - "vsprintf"
  - "vswprintf"
  - "__vswprintf_l"
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
  - "vstprintf"
  - "vswprintf"
  - "_vstprintf"
  - "vsprintf"
  - "__vswprintf_l"
  - "_vsprintf_l"
  - "_vswprintf_l"
  - "vswprintf_l"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__vswprintf_l (funzione)"
  - "_vsprintf_l (funzione)"
  - "_vstprintf (funzione)"
  - "_vstprintf_l (funzione)"
  - "_vswprintf_l (funzione)"
  - "sovraccarichi del buffer"
  - "buffer, evitare i sovraccarichi"
  - "buffer, sovraccarichi del buffer"
  - "testo formattato"
  - "vsprintf (funzione)"
  - "vsprintf_l (funzione)"
  - "vstprintf (funzione)"
  - "vstprintf_l (funzione)"
  - "vswprintf (funzione)"
  - "vswprintf_l (funzione)"
ms.assetid: b8ef1c0d-58f9-4a18-841a-f1a989e1c29b
caps.latest.revision: 32
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 32
---
# vsprintf, _vsprintf_l, vswprintf, _vswprintf_l, __vswprintf_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Scrivere l'output formattato utilizzando un puntatore a un elenco di argomenti.  Sono disponibili versioni più sicure di queste funzioni; vedere [vsprintf\_s, \_vsprintf\_s\_l, vswprintf\_s, \_vswprintf\_s\_l](../../c-runtime-library/reference/vsprintf-s-vsprintf-s-l-vswprintf-s-vswprintf-s-l.md).  
  
## Sintassi  
  
```  
int vsprintf(  
   char *buffer,  
   const char *format,  
   va_list argptr   
);   
int _vsprintf_l(  
   char *buffer,  
   const char *format,  
   locale_t locale,  
   va_list argptr   
);   
int vswprintf(  
   wchar_t *buffer,  
   size_t count,  
   const wchar_t *format,  
   va_list argptr   
);  
int _vswprintf_l(  
   wchar_t *buffer,  
   size_t count,  
   const wchar_t *format,  
   locale_t locale,  
   va_list argptr   
);  
int __vswprintf_l(  
   wchar_t *buffer,  
   const wchar_t *format,  
   locale_t locale,  
   va_list argptr   
);  
template <size_t size>  
int vsprintf(  
   char (&buffer)[size],  
   const char *format,  
   va_list argptr   
); // C++ only  
template <size_t size>  
int _vsprintf_l(  
   char (&buffer)[size],  
   const char *format,  
   locale_t locale,  
   va_list argptr   
); // C++ only  
template <size_t size>  
int vswprintf(  
   wchar_t (&buffer)[size],  
   const wchar_t *format,  
   va_list argptr   
); // C++ only  
template <size_t size>  
int _vswprintf_l(  
   wchar_t (&buffer)[size],  
   const wchar_t *format,  
   locale_t locale,  
   va_list argptr   
); // C++ only  
```  
  
#### Parametri  
 `buffer`  
 Percorso di archiviazione per l'output.  
  
 `count`  
 Numero massimo di caratteri da archiviare, nella versione `UNICODE` per questa funzione.  
  
 `format`  
 Specifica di formato,  
  
 `argptr`  
 Puntatore all'elenco di argomenti.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 `vsprintf` e `vswprintf` restituiscono il numero di caratteri scritti, escluso il carattere di terminazione null, o un valore negativo se un errore di output viene visualizzato.  Se `buffer` o `format` è un puntatore null, queste funzioni richiamano un gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione restituisce \-1 e imposta `errno` su `EINVAL`.  
  
 Per ulteriori informazioni su questi, e altri, codici di errore vedere [\_doserrno, errno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) .  
  
## Note  
 Ognuna di queste funzioni accetta un puntatore ad un elenco di argomenti, quindi formatta e scrive i dati specificati nella locazione di memoria indicata da `buffer`.  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche ad eccezione per il fatto che utilizzano il parametro delle impostazioni locali passato in ingresso invece di utilizzare quelle del thread corrente.  
  
> [!IMPORTANT]
>  Con l'utilizzo di `vsprintf` qui non è possibile limitare il numero di caratteri scritti, ovvero il codice che utilizza questa funzione è soggetto a sovraccarichi del buffer.  Utilizzare invece [\_vsnprintf](../../c-runtime-library/reference/vsnprintf-vsnprintf-vsnprintf-l-vsnwprintf-vsnwprintf-l.md), oppure chiamare [\_vscprintf](../../c-runtime-library/reference/vscprintf-vscprintf-l-vscwprintf-vscwprintf-l.md) per determinare la quantità di un buffer necessaria.  Inoltre, assicurarsi che `format` non sia una stringa definita dall'utente.  Per ulteriori informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
 `vswprintf` è conforme allo standard ISO C, che richiede il secondo parametro, `count`, di tipo `size_t`.  Per definire un comportamento precedente non standard, definire `_CRT_NON_CONFORMING_SWPRINTFS.` il comportamento precedente non può trovarsi in una versione futura, il codice deve essere modificato per utilizzare il nuovo comportamento conforme.  
  
 In C\+\+, queste funzioni presentano overload dei modelli che richiamano le relative controparti sicure e più recenti.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_vstprintf`|`vsprintf`|`vsprintf`|`vswprintf`|  
|`_vstprintf_l`|`_vsprintf_l`|`_vsprintf_l`|`_vswprintf_l`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazioni facoltative|  
|-------------|-------------------------------|------------------------------|  
|`vsprintf`, `_vsprintf_l`|\<stdio.h\> e \<stdarg.h\>|\<varargs.h\>\*|  
|`vswprintf`, `_vswprintf_l`|\<stdio.h\> o \<wchar.h\>, e \<stdarg.h\>|\<varargs.h\>\*|  
  
 \* Necessario per la compatibilità con UNIX V.  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
```  
// crt_vsprintf.c  
// compile with: /W3  
// This program uses vsprintf to write to a buffer.  
// The size of the buffer is determined by _vscprintf.  
  
#include <stdlib.h>  
#include <stdio.h>  
#include <stdarg.h>  
  
void test( char * format, ... )  
{  
    va_list args;  
    int     len;  
    char    *buffer;  
  
    // retrieve the variable arguments  
    va_start( args, format );  
  
    len = _vscprintf( format, args ) // _vscprintf doesn't count  
                                + 1; // terminating '\0'  
  
    buffer = (char*)malloc( len * sizeof(char) );  
  
    vsprintf( buffer, format, args ); // C4996  
    // Note: vsprintf is deprecated; consider using vsprintf_s instead  
    puts( buffer );  
  
    free( buffer );  
}  
  
int main( void )  
{  
   test( "%d %c %d", 123, '<', 456 );  
   test( "%s", "This is a string" );  
}  
```  
  
  **123 \< 456**  
**Questa è una stringa**   
## Equivalente .NET Framework  
 [System::String::Format](https://msdn.microsoft.com/en-us/library/system.string.format.aspx)  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [Funzioni vprintf](../../c-runtime-library/vprintf-functions.md)   
 [Sintassi per la specifica del formato: funzioni printf wprintf](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md)   
 [fprintf, \_fprintf\_l, fwprintf, \_fwprintf\_l](../../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md)   
 [printf, \_printf\_l, wprintf, \_wprintf\_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [sprintf, \_sprintf\_l, swprintf, \_swprintf\_l, \_\_swprintf\_l](../../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)   
 [va\_arg, va\_copy, va\_end, va\_start](../../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md)