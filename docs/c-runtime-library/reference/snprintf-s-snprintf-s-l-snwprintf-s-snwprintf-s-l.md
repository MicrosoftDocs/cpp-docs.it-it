---
title: "_snprintf_s, _snprintf_s_l, _snwprintf_s, _snwprintf_s_l | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_snprintf_s"
  - "_snprintf_s_l"
  - "_snwprintf_s"
  - "_snwprintf_s_l"
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
  - "_snwprintf_s_l"
  - "_sntprintf_s_l"
  - "snprintf_s_l"
  - "_snprintf_s_l"
  - "_sntprintf_s"
  - "_snprintf_s"
  - "snprintf_s"
  - "_snwprintf_s"
  - "snwprintf_s_l"
  - "snwprintf_s"
  - "sntprintf_s"
  - "sntprintf_s_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_snprintf_s (funzione)"
  - "_snprintf_s_l (funzione)"
  - "_sntprintf_s (funzione)"
  - "_sntprintf_s_l (funzione)"
  - "_snwprintf_s (funzione)"
  - "_snwprintf_s_l (funzione)"
  - "testo formattato [C++]"
  - "snprintf_s (funzione)"
  - "snprintf_s_l (funzione)"
  - "sntprintf_s (funzione)"
  - "sntprintf_s_l (funzione)"
  - "snwprintf_s (funzione)"
  - "snwprintf_s_l (funzione)"
ms.assetid: 9336ab86-13e5-4a29-a3cd-074adfee6891
caps.latest.revision: 32
caps.handback.revision: 32
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _snprintf_s, _snprintf_s_l, _snwprintf_s, _snwprintf_s_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Scrive dati formattati in una stringa. Queste sono versioni di [snprintf, \_snprintf, \_snprintf\_l, \_snwprintf, \_snwprintf\_l](../../c-runtime-library/reference/snprintf-snprintf-snprintf-l-snwprintf-snwprintf-l.md) con miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
int _snprintf_s(  
   char *buffer,  
   size_t sizeOfBuffer,  
   size_t count,  
   const char *format [,  
   argument] ...   
);  
int _snprintf_s_l(  
   char *buffer,  
   size_t sizeOfBuffer,  
   size_t count,  
   const char *format,  
   locale_t locale [,  
   argument] ...   
);  
int _snwprintf_s(  
   wchar_t *buffer,  
   size_t sizeOfBuffer,  
   size_t count,  
   const wchar_t *format [,  
   argument] ...   
);  
int _snwprintf_s_l(  
   wchar_t *buffer,  
   size_t sizeOfBuffer,  
   size_t count,  
   const wchar_t *format,  
   locale_t locale [,  
   argument] ...   
);  
template <size_t size>  
int _snprintf_s(  
   char (&buffer)[size],  
   size_t count,  
   const char *format [,  
   argument] ...   
); // C++ only  
template <size_t size>  
int _snwprintf_s(  
   wchar_t (&buffer)[size],  
   size_t count,  
   const wchar_t *format [,  
   argument] ...   
); // C++ only  
```  
  
#### Parametri  
 `buffer`  
 Percorso di archiviazione per l'output.  
  
 `sizeOfBuffer`  
 Le dimensioni di archiviazione per l'output. Dimensione in `bytes` per `_snprintf_s` o dimensioni in `words` per `_snwprintf_s`.  
  
 `Count`  
 Numero massimo di caratteri da archiviare, o [\_TRUNCATE](../../c-runtime-library/truncate.md).  
  
 `format`  
 Stringa di controllo del formato.  
  
 `argument`  
 Argomenti facoltativi.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## Valore restituito  
 `_snprintf_s` Restituisce il numero di caratteri archiviati in `buffer`, senza contare il carattere di terminazione null.`_snwprintf_s` restituisce il numero di caratteri "wide" archiviati in `buffer`, senza contare il carattere "wide" Null finale.  
  
 Se l'archiviazione necessaria per archiviare i dati e un carattere di terminazione null supera `sizeOfBuffer`, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione continua dopo il gestore di parametro non valido, queste funzioni impostano `buffer` su una stringa vuota, impostare `errno` a `ERANGE`, e restituiscono \-1.  
  
 Se `buffer` o `format` è un `NULL` puntatore, o se `count` è minore o uguale a zero, viene richiamato il gestore di parametro non valido. Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono \-1.  
  
 Per informazioni su questi e altri codici di errore, vedere [\_doserrno, errno, \_sys\_errlist e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 Il `_snprintf_s` funzione formatta e Archivia `count` o meno caratteri `buffer` e aggiunge un carattere di terminazione null. Ogni argomento \(se presente\) viene convertita e restituita in base alla specifica del formato corrispondente in `format`. La formattazione è coerenza con il `printf` famiglia di funzioni, vedere [Sintassi per la specifica del formato: funzioni printf wprintf](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md). Se la copia avviene tra stringhe che si sovrappongono, il comportamento non è definito.  
  
 Se `count` è [\_TRUNCATE](../../c-runtime-library/truncate.md), quindi `_snprintf_s` scrive la maggior parte della stringa come adattare `buffer` lasciando spazio per un terminazione null. Se l'intera stringa \(con terminazione null\) rientra `buffer`, quindi `_snprintf_s` restituisce il numero di caratteri scritti \(escluso il carattere di terminazione null\); in caso contrario, `_snprintf_s` restituisce \-1 per indicare che il troncamento si è verificato.  
  
> [!IMPORTANT]
>  Assicurarsi che `format` non sia una stringa definita dall'utente.  
  
 `_snwprintf_s` è una versione a caratteri "wide" di `_snprintf_s`. Gli argomenti puntatori per `_snwprintf_s` sono stringhe a caratteri "wide". Il rilevamento degli errori di codifica in `_snwprintf_s` potrebbe essere diverso da quello in `_snprintf_s`.`_snwprintf_s`, ad esempio `swprintf_s`, scrive l'output a una stringa anziché a una destinazione di tipo `FILE`.  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche ad eccezione per il fatto che utilizzano il parametro delle impostazioni locali passato al posto di quelle del thread corrente.  
  
 In C\+\+ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente \(eliminando la necessità di specificare un argomento di dimensione\) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_sntprintf_s`|`_snprintf_s`|`_snprintf_s`|`_snwprintf_s`|  
|`_sntprintf_s_l`|`_snprintf_s_l`|`_snprintf_s_l`|`_snwprintf_s_l`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_snprintf_s`, `_snprintf_s_l`|\<stdio.h\>|  
|`_snwprintf_s`, `_snwprintf_s_l`|\<stdio.h\> o \<wchar.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_snprintf_s.cpp  
// compile with: /MTd  
  
// These #defines enable secure template overloads  
// (see last part of Examples() below)  
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 1   
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT 1  
  
#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <crtdbg.h>  // For _CrtSetReportMode  
#include <errno.h>  
  
// This example uses a 10-byte destination buffer.  
  
int snprintf_s_tester( const char * fmt, int x, size_t count )  
{  
   char dest[10];  
  
   printf( "\n" );  
  
   if ( count == _TRUNCATE )  
      printf( "%zd-byte buffer; truncation semantics\n",  
               _countof(dest) );  
   else  
      printf( "count = %zd; %zd-byte buffer\n",  
               count, _countof(dest) );  
  
   int ret = _snprintf_s( dest, _countof(dest), count, fmt, x );  
  
   printf( "    new contents of dest: '%s'\n", dest );  
  
   return ret;  
}  
  
void Examples()  
{  
   // formatted output string is 9 characters long: "<<<123>>>"  
   snprintf_s_tester( "<<<%d>>>", 121, 8 );  
   snprintf_s_tester( "<<<%d>>>", 121, 9 );  
   snprintf_s_tester( "<<<%d>>>", 121, 10 );  
  
   printf( "\nDestination buffer too small:\n" );  
  
   snprintf_s_tester( "<<<%d>>>", 1221, 10 );  
  
   printf( "\nTruncation examples:\n" );  
  
   int ret = snprintf_s_tester( "<<<%d>>>", 1221, _TRUNCATE );  
   printf( "    truncation %s occur\n", ret == -1 ? "did"  
                                                  : "did not" );  
  
   ret = snprintf_s_tester( "<<<%d>>>", 121, _TRUNCATE );  
   printf( "    truncation %s occur\n", ret == -1 ? "did"  
                                                  : "did not" );  
   printf( "\nSecure template overload example:\n" );  
  
   char dest[10];  
   _snprintf( dest, 10, "<<<%d>>>", 12321 );  
   // With secure template overloads enabled (see #defines  
   // at top of file), the preceding line is replaced by  
   //    _snprintf_s( dest, _countof(dest), 10, "<<<%d>>>", 12345 );  
   // Instead of causing a buffer overrun, _snprintf_s invokes  
   // the invalid parameter handler.  
   // If secure template overloads were disabled, _snprintf would  
   // write 10 characters and overrun the dest buffer.  
   printf( "    new contents of dest: '%s'\n", dest );  
}  
  
void myInvalidParameterHandler(  
   const wchar_t* expression,  
   const wchar_t* function,   
   const wchar_t* file,   
   unsigned int line,   
   uintptr_t pReserved)  
{  
   wprintf(L"Invalid parameter handler invoked: %s\n", expression);  
}  
  
int main( void )  
{  
   _invalid_parameter_handler oldHandler, newHandler;  
  
   newHandler = myInvalidParameterHandler;  
   oldHandler = _set_invalid_parameter_handler(newHandler);  
   // Disable the message box for assertions.  
   _CrtSetReportMode(_CRT_ASSERT, 0);  
  
   Examples();  
}  
```  
  
```Output  
  
Count = 8; contenuto del nuovo buffer di 10 byte di destinazione: ' <<< 121 >> ' count = 9. contenuto del nuovo buffer di 10 byte di destinazione: '<<< 121 >>> ' count = 10; contenuto del nuovo buffer di 10 byte di destinazione: '<<< 121 >>> ' buffer di destinazione troppo piccolo: conteggio = 10; gestore di parametro non valido del buffer di 10 byte richiamata: ("Buffer troppo piccolo", 0) del nuovo contenuto di destinazione: ' esempi di troncamento: buffer di 10 byte; nuovo contenuto semantica troncamento della destinazione: ' <<< 1221 >> ' troncamento si è verificato il buffer di 10 byte; nuovo contenuto semantica troncamento della destinazione: '<<< 121 >>> ' troncamento non si è verificato esempio overload di modelli sicuri: richiamato gestore di parametro non valido: ("Buffer troppo piccolo", 0) del nuovo contenuto di destinazione: '  
```  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [sprintf, \_sprintf\_l, swprintf, \_swprintf\_l, \_\_swprintf\_l](../../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)   
 [fprintf, \_fprintf\_l, fwprintf, \_fwprintf\_l](../../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md)   
 [printf, \_printf\_l, wprintf, \_wprintf\_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [scanf, \_scanf\_l, wscanf, \_wscanf\_l](../../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md)   
 [sscanf, \_sscanf\_l, swscanf, \_swscanf\_l](../../c-runtime-library/reference/sscanf-sscanf-l-swscanf-swscanf-l.md)   
 [Funzioni vprintf](../../c-runtime-library/vprintf-functions.md)