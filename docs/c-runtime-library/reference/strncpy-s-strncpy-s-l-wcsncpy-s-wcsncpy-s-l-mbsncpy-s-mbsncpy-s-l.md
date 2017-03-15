---
title: "strncpy_s, _strncpy_s_l, wcsncpy_s, _wcsncpy_s_l, _mbsncpy_s, _mbsncpy_s_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_mbsncpy_s_l"
  - "wcsncpy_s"
  - "_strncpy_s_l"
  - "strncpy_s"
  - "_mbsncpy_s"
  - "_wcsncpy_s_l"
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
  - "api-ms-win-crt-multibyte-l1-1-0.dll"
  - "api-ms-win-crt-string-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_tcsncpy_s"
  - "_wcsncpy_s_l"
  - "strncpy_s"
  - "_strncpy_s_l"
  - "wcsncpy_s"
  - "_tcsncpy_s_l"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_mbsnbcpy_s (funzione)"
  - "_mbsnbcpy_s_l (funzione)"
  - "_strncpy_s_l (funzione)"
  - "_tcsncpy_s (funzione)"
  - "_tcsncpy_s_l (funzione)"
  - "_wcsncpy_s_l (funzione)"
  - "copia di stringhe"
  - "mbsncpy_s (funzione)"
  - "mbsncpy_s_l (funzione)"
  - "stringhe [C++], copia"
  - "strncpy_s (funzione)"
  - "strncpy_s_l (funzione)"
  - "wcsncpy_s (funzione)"
  - "wcsncpy_s_l (funzione)"
ms.assetid: a971c800-94d1-4d88-92f3-a2fe236a4546
caps.latest.revision: 47
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 47
---
# strncpy_s, _strncpy_s_l, wcsncpy_s, _wcsncpy_s_l, _mbsncpy_s, _mbsncpy_s_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Copia i caratteri di una stringa in un'altra.  Queste versioni di [strncpy, \_strncpy\_l, wcsncpy, \_wcsncpy\_l, \_mbsncpy, \_mbsncpy\_l](../../c-runtime-library/reference/strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md) contengono i miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
> [!IMPORTANT]
>  `_mbsncpy_s` e `_mbsncpy_s_l` non possono essere utilizzate nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
errno_t strncpy_s(  
   char *strDest,  
   size_t numberOfElements,  
   const char *strSource,  
   size_t count  
);  
errno_t _strncpy_s_l(  
   char *strDest,  
   size_t numberOfElements,  
   const char *strSource,  
   size_t count,  
   _locale_t locale  
);  
errno_t wcsncpy_s(  
   wchar_t *strDest,  
   size_t numberOfElements,  
   const wchar_t *strSource,  
   size_t count   
);  
errno_t _wcsncpy_s_l(  
   wchar_t *strDest,  
   size_t numberOfElements,  
   const wchar_t *strSource,  
   size_t count,  
   _locale_t locale  
);  
errno_t _mbsncpy_s(  
   unsigned char *strDest,  
   size_t numberOfElements,  
   const unsigned char *strSource,  
   size_t count   
);  
errno_t _mbsncpy_s_l(  
   unsigned char *strDest,  
   size_t numberOfElements,  
   const unsigned char *strSource,  
   size_t count,  
   locale_t locale  
);  
template <size_t size>  
errno_t strncpy_s(  
   char (&strDest)[size],  
   const char *strSource,  
   size_t count  
); // C++ only  
template <size_t size>  
errno_t _strncpy_s_l(  
   char (&strDest)[size],  
   const char *strSource,  
   size_t count,  
   _locale_t locale  
); // C++ only  
template <size_t size>  
errno_t wcsncpy_s(  
   wchar_t (&strDest)[size],  
   const wchar_t *strSource,  
   size_t count   
); // C++ only  
template <size_t size>  
errno_t _wcsncpy_s_l(  
   wchar_t (&strDest)[size],  
   const wchar_t *strSource,  
   size_t count,  
   _locale_t locale  
); // C++ only  
template <size_t size>  
errno_t _mbsncpy_s(  
   unsigned char (&strDest)[size],  
   const unsigned char *strSource,  
   size_t count   
); // C++ only  
template <size_t size>  
errno_t _mbsncpy_s_l(  
   unsigned char (&strDest)[size],  
   const unsigned char *strSource,  
   size_t count,  
   locale_t locale  
); // C++ only  
```  
  
#### Parametri  
 `strDest`  
 Stringa destinazione.  
  
 `numberOfElements`  
 La dimensione della stringa destinazione, in caratteri.  
  
 `strSource`  
 Stringa di origine.  
  
 `count`  
 Il numero di caratteri da copiare, o [\_TRUNCATE](../../c-runtime-library/truncate.md).  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Zero in caso di successo, `STRUNCATE` se si verifica un troncamento o un codice di errore altrimenti.  
  
### Condizioni di errore  
  
|`strDest`|`numberOfElements`|`strSource`|Valore restituito|Contenuto di `strDest`.|  
|---------------|------------------------|-----------------|-----------------------|-----------------------------|  
|`NULL`|any|any|`EINVAL`|non modificato|  
|any|any|`NULL`|`EINVAL`|`strDest`\[0\] impostato su 0|  
|any|0|any|`EINVAL`|non modificato|  
|non `NULL`|troppo piccolo|any|`ERANGE`|`strDest`\[0\] impostato su 0|  
  
## Note  
 Queste funzioni provano a copiare i primi `D` caratteri di `strSource` in `strDest`, dove `D` è minore di `count` e la lunghezza di `strSource`.  Se questi `D` caratteri possono essere inclusi in `strDest` \(la cui dimensione è data da `numberOfElements`\) e rimane abbastanza spazio per un carattere di terminazione null, allora questi caratteri vengono copiati e alla fine viene aggiunto un carattere di terminazione null; altrimenti a `strDest`\[0\] viene assegnato il carattere null e viene invocato l'handler per parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  
  
 Si verifica un'eccezione al paragrafo precedente.  Se `count` è `_TRUNCATE`, allora vengono copiati i caratteri di `strSource` in `strDest` finché c'è spazio, fino a lasciare lo spazio necessario per il carattere di terminazione null che viene sempre accodato.  
  
 Di seguito è riportato un esempio:  
  
 `char dst[5];`  
  
 `strncpy_s(dst, 5, "a long string", 5);`  
  
 indica che viene chiesto `strncpy_s` di copiare cinque caratteri in un buffer di cinque byte; ciò non lascerebbe lo spazio per il terminatore null, quindi `strncpy_s` azzera la stringa e invoca l'handler dei parametri non validi.  
  
 Se il troncamento è necessario, utilizzare `_TRUNCATE` o \(`size` – 1\):  
  
 `strncpy_s(dst, 5, "a long string", _TRUNCATE);`  
  
 `strncpy_s(dst, 5, "a long string", 4);`  
  
 Si noti che a differenza di `strncpy`, se `count` è maggiore della lunghezza di `strSource`, la stringa di destinazione non viene completata con caratteri null fino alla lunghezza `count`.  
  
 Il comportamento di `strncpy_s` non è definito se le stringhe di origine e di destinazione si sovrappongono.  
  
 Se `strDest` o `strSource` è `NULL`, o `numberOfElements` è 0, viene invocato l'handler dei parametri non validi.  Se l'esecuzione può continuare, la funzione restituisce `EINVAL` e imposta `errno` su `EINVAL`.  
  
 `wcsncpy_s` e `_mbsncpy_s` sono versioni a caratteri di tipo "wide" e di caratteri multibyte di `strncpy_s`.  Gli argomenti e i valori restituiti da `wcsncpy_s` e `mbsncpy_s`variano di conseguenza.  Queste sei funzioni si comportano in modo identico.  
  
 Il valore di output è interessato dall'impostazione dell'impostazione di categoria `LC_CTYPE` delle impostazioni locali; vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md) per ulteriori informazioni.  Le versioni di queste funzioni senza il suffisso `_l` utilizzano le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali; le versioni con il suffisso `_l` sono identiche, ad eccezione del fatto che utilizzano il parametro delle impostazioni locali che viene passato.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 In C\+\+, l'utilizzo di queste funzioni è semplificato dagli overload dei modelli; gli overload possono dedurre la lunghezza del buffer automaticamente \(che elimina la necessità di specificare un argomento di dimensione\) e possono sostituire automaticamente le funzioni precedenti, quelle non sicure alle più recenti e le controparti sicure.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
 La versione di debug di queste funzioni per prima cosa riempiono il buffer con il valore 0xFD.  Per disattivare questo comportamento, utilizzare [\_CrtSetDebugFillThreshold](../../c-runtime-library/reference/crtsetdebugfillthreshold.md).  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcsncpy_s`|`strncpy_s`|`_mbsnbcpy_s`|`wcsncpy_s`|  
|`_tcsncpy_s_l`|`_strncpy_s_l`|`_mbsnbcpy_s_l`|`_wcsncpy_s_l`|  
  
> [!NOTE]
>  \_strncpy\_s\_l, `_wcsncpy_s_l` e `_mbsncpy_s_l` non dipendono delle impostazioni locali e vengono forniti solo per `_tcsncpy_s_l` e non possono essere chiamati direttamente.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`strncpy_s`, `_strncpy_s_l`|\<string.h\>|  
|`wcsncpy_s`, `_wcsncpy_s_l`|\<string.h\> o \<wchar.h\>|  
|`_mbsncpy_s`, `_mbsncpy_s_l`|\<mbstring.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_strncpy_s_1.cpp  
// compile with: /MTd  
  
// these #defines enable secure template overloads  
// (see last part of Examples() below)  
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 1   
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT 1  
  
#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <crtdbg.h>  // For _CrtSetReportMode  
#include <errno.h>  
  
// This example uses a 10-byte destination buffer.  
  
errno_t strncpy_s_tester( const char * src,  
                          int count )  
{  
   char dest[10];  
  
   printf( "\n" );  
  
   if ( count == _TRUNCATE )  
      printf( "Copying '%s' to %d-byte buffer dest with truncation semantics\n",  
               src, _countof(dest) );  
   else  
      printf( "Copying %d chars of '%s' to %d-byte buffer dest\n",  
              count, src, _countof(dest) );  
  
   errno_t err = strncpy_s( dest, _countof(dest), src, count );  
  
   printf( "    new contents of dest: '%s'\n", dest );  
  
   return err;  
}  
  
void Examples()  
{  
   strncpy_s_tester( "howdy", 4 );  
   strncpy_s_tester( "howdy", 5 );  
   strncpy_s_tester( "howdy", 6 );  
  
   printf( "\nDestination buffer too small:\n" );  
   strncpy_s_tester( "Hi there!!", 10 );  
  
   printf( "\nTruncation examples:\n" );  
  
   errno_t err = strncpy_s_tester( "How do you do?", _TRUNCATE );  
   printf( "    truncation %s occur\n", err == STRUNCATE ? "did"  
                                                       : "did not" );  
  
   err = strncpy_s_tester( "Howdy.", _TRUNCATE );  
   printf( "    truncation %s occur\n", err == STRUNCATE ? "did"  
                                                       : "did not" );  
  
   printf( "\nSecure template overload example:\n" );  
  
   char dest[10];  
   strncpy( dest, "very very very long", 15 );  
   // With secure template overloads enabled (see #defines at  
   // top of file), the preceding line is replaced by  
   //    strncpy_s( dest, _countof(dest), "very very very long", 15 );  
   // Instead of causing a buffer overrun, strncpy_s invokes  
   // the invalid parameter handler.  
   // If secure template overloads were disabled, strncpy would  
   // copy 15 characters and overrun the dest buffer.  
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
  
  **Copying 4 chars of 'howdy' to 10\-byte buffer dest**  
 **nuovi contenuti di dest: 'howd'**  
**Copia 5 chars di 'howdy' nel buffer dest di 10\-byte**  
 **new contents of dest: 'howdy'**  
**Copying 6 chars of 'howdy' to 10\-byte buffer dest**  
 **new contents of dest: 'howdy'**  
**Destination buffer too small:**  
**Copying 10 chars of 'Hi there\!\!' to 10\-byte buffer dest**  
**Invalid parameter handler invoked: \(L"Buffer is too small" && 0\)**  
 **new contents of dest: ''**  
**Truncation examples:**  
**Copying 'How do you do?' to 10\-byte buffer dest with truncation semantics**  
 **new contents of dest: 'How do yo'**  
 **truncation did occur**  
**Copying 'Howdy.' to 10\-byte buffer dest with truncation semantics**  
 **new contents of dest: 'Howdy.'**  
 **truncation did not occur**  
**Secure template overload example:**  
**Invalid parameter handler invoked: \(L"Buffer is too small" && 0\)**  
 **new contents of dest: ''**   
## Esempio  
  
```  
// crt_strncpy_s_2.c  
// contrasts strncpy and strncpy_s  
  
#include <stdio.h>  
#include <stdlib.h>  
  
int main( void )  
{  
   char a[20] = "test";  
   char s[20];  
  
   // simple strncpy usage:  
  
   strcpy_s( s, 20, "dogs like cats" );  
   printf( "Original string:\n   '%s'\n", s );  
  
   // Here we can't use strncpy_s since we don't   
   // want null termination  
   strncpy( s, "mice", 4 );  
   printf( "After strncpy (no null-termination):\n   '%s'\n", s );  
   strncpy( s+5, "love", 4 );  
   printf( "After strncpy into middle of string:\n   '%s'\n", s );  
  
   // If we use strncpy_s, the string is terminated   
   strncpy_s( s, _countof(s), "mice", 4 );  
   printf( "After strncpy_s (with null-termination):\n   '%s'\n", s );  
  
}  
```  
  
  **Original string:**  
 **'dogs like cats'**  
**After strncpy \(no null\-termination\):**  
 **'mice like cats'**  
**After strncpy into middle of string:**  
 **'mice love cats'**  
**After strncpy\_s \(with null\-termination\):**  
 **'mice'**   
## Equivalente .NET Framework  
 [System::String::Copy](https://msdn.microsoft.com/en-us/library/system.string.copy.aspx)  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [\_mbsnbcpy, \_mbsnbcpy\_l](../../c-runtime-library/reference/mbsnbcpy-mbsnbcpy-l.md)   
 [strcat\_s, wcscat\_s, \_mbscat\_s](../../c-runtime-library/reference/strcat-s-wcscat-s-mbscat-s.md)   
 [strcmp, wcscmp, \_mbscmp](../../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)   
 [strcpy\_s, wcscpy\_s, \_mbscpy\_s](../../c-runtime-library/reference/strcpy-s-wcscpy-s-mbscpy-s.md)   
 [strncat\_s, \_strncat\_s\_l, wcsncat\_s, \_wcsncat\_s\_l, \_mbsncat\_s, \_mbsncat\_s\_l](../../c-runtime-library/reference/strncat-s-strncat-s-l-wcsncat-s-wcsncat-s-l-mbsncat-s-mbsncat-s-l.md)   
 [strncmp, wcsncmp, \_mbsncmp, \_mbsncmp\_l](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)   
 [\_strnicmp, \_wcsnicmp, \_mbsnicmp, \_strnicmp\_l, \_wcsnicmp\_l, \_mbsnicmp\_l](../../c-runtime-library/reference/strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)   
 [strrchr, wcsrchr, \_mbsrchr, \_mbsrchr\_l](../../c-runtime-library/reference/strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)   
 [\_strset, \_strset\_l, \_wcsset, \_wcsset\_l, \_mbsset, \_mbsset\_l](../../c-runtime-library/reference/strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)   
 [strspn, wcsspn, \_mbsspn, \_mbsspn\_l](../../c-runtime-library/reference/strspn-wcsspn-mbsspn-mbsspn-l.md)