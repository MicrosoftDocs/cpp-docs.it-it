---
title: _snprintf_s, _snprintf_s_l, _snwprintf_s, _snwprintf_s_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _snprintf_s
- _snprintf_s_l
- _snwprintf_s
- _snwprintf_s_l
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
apitype: DLLExport
f1_keywords:
- _snwprintf_s_l
- _sntprintf_s_l
- snprintf_s_l
- _snprintf_s_l
- _sntprintf_s
- _snprintf_s
- snprintf_s
- _snwprintf_s
- snwprintf_s_l
- snwprintf_s
- sntprintf_s
- sntprintf_s_l
dev_langs:
- C++
helpviewer_keywords:
- _snprintf_s_l function
- _snwprintf_s_l function
- _sntprintf_s_l function
- snwprintf_s_l function
- snprintf_s function
- _snprintf_s function
- snprintf_s_l function
- _sntprintf_s function
- sntprintf_s_l function
- sntprintf_s function
- snwprintf_s function
- _snwprintf_s function
- formatted text [C++]
ms.assetid: 9336ab86-13e5-4a29-a3cd-074adfee6891
caps.latest.revision: 32
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 5daa64e8a0e96cf00c75f6a797429baec5ac8180
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="snprintfs-snprintfsl-snwprintfs-snwprintfsl"></a>_snprintf_s, _snprintf_s_l, _snwprintf_s, _snwprintf_s_l
Scrive dati formattati in una stringa. Queste sono versioni di [snprintf, _snprintf, _snprintf_l, _snwprintf, _snwprintf_l](../../c-runtime-library/reference/snprintf-snprintf-snprintf-l-snwprintf-snwprintf-l.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 `buffer`  
 Percorso di archiviazione per l'output.  
  
 `sizeOfBuffer`  
 Dimensioni dl percorso di archiviazione per l'output. Dimensioni in `bytes` per `_snprintf_s` o in `words` per `_snwprintf_s`.  
  
 `Count`  
 Numero massimo di caratteri da archiviare o [_TRUNCATE](../../c-runtime-library/truncate.md).  
  
 `format`  
 Stringa di controllo del formato.  
  
 `argument`  
 Argomenti facoltativi.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 `_snprintf_s` restituisce il numero di caratteri archiviati in `buffer`, senza contare il carattere Null di terminazione. `_snwprintf_s` restituisce il numero di caratteri "wide" archiviati in `buffer`, senza contare il carattere "wide" Null finale.  
  
 Se lo spazio di archiviazione necessario per archiviare i dati e un carattere Null di terminazione supera `sizeOfBuffer`, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione continua dopo il gestore di parametri non validi, queste funzioni impostano `buffer` su una stringa vuota, impostano `errno` su `ERANGE` e restituiscono -1.  
  
 Se `buffer` o `format` è un puntatore `NULL` o se `count` è minore o uguale a zero, viene richiamato il gestore di parametri non validi. Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono -1.  
  
 Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 La funzione `_snprintf_s` formatta e archivia `count` o un numero inferiore di caratteri in `buffer` e aggiunge un carattere di terminazione Null. Ogni argomento (se presente) viene convertito e restituito in base alla specifica di formato corrispondente in `format`. La formattazione è coerente con la famiglia di funzioni `printf`. Vedere [Sintassi per la specifica del formato: funzioni printf e wprintf](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md). Se la copia avviene tra stringhe che si sovrappongono, il comportamento non è definito.  
  
 Se `count` è [_TRUNCATE](../../c-runtime-library/truncate.md), `_snprintf_s` scrive la parte della stringa che rientra in `buffer` lasciando spazio per un carattere Null di terminazione. Se l'intera stringa (con terminazione Null) rientra in `buffer`, `_snprintf_s` restituisce il numero di caratteri scritti (escluso il carattere Null di terminazione). In caso contrario, `_snprintf_s` restituisce -1 per indicare che è stato eseguito il troncamento.  
  
> [!IMPORTANT]
>  Assicurarsi che `format` non sia una stringa definita dall'utente.  
  
 `_snwprintf_s` è una versione a caratteri "wide" di `_snprintf_s`. Gli argomenti puntatori per `_snwprintf_s` sono stringhe a caratteri "wide". Il rilevamento degli errori di codifica in `_snwprintf_s` potrebbe essere diverso da quello in `_snprintf_s`. `_snwprintf_s`, proprio come `swprintf_s`, scrive l'output in una stringa anziché in una destinazione di tipo `FILE`.  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche ad eccezione per il fatto che utilizzano il parametro delle impostazioni locali passato al posto di quelle del thread corrente.  
  
 In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_sntprintf_s`|`_snprintf_s`|`_snprintf_s`|`_snwprintf_s`|  
|`_sntprintf_s_l`|`_snprintf_s_l`|`_snprintf_s_l`|`_snwprintf_s_l`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_snprintf_s`, `_snprintf_s_l`|\<stdio.h>|  
|`_snwprintf_s`, `_snwprintf_s_l`|\<stdio.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
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
  
count = 8; 10-byte buffer  
    new contents of dest: '<<<121>>'  
  
count = 9; 10-byte buffer  
    new contents of dest: '<<<121>>>'  
  
count = 10; 10-byte buffer  
    new contents of dest: '<<<121>>>'  
  
Destination buffer too small:  
  
count = 10; 10-byte buffer  
Invalid parameter handler invoked: ("Buffer too small", 0)  
    new contents of dest: ''  
  
Truncation examples:  
  
10-byte buffer; truncation semantics  
    new contents of dest: '<<<1221>>'  
    truncation did occur  
  
10-byte buffer; truncation semantics  
    new contents of dest: '<<<121>>>'  
    truncation did not occur  
  
Secure template overload example:  
Invalid parameter handler invoked: ("Buffer too small", 0)  
    new contents of dest: ''  
```  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](../../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)   
 [fprintf, _fprintf_l, fwprintf, _fwprintf_l](../../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md)   
 [printf, _printf_l, wprintf, _wprintf_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [scanf, _scanf_l, wscanf, _wscanf_l](../../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md)   
 [sscanf, _sscanf_l, swscanf, _swscanf_l](../../c-runtime-library/reference/sscanf-sscanf-l-swscanf-swscanf-l.md)   
 [Funzioni vprintf](../../c-runtime-library/vprintf-functions.md)
