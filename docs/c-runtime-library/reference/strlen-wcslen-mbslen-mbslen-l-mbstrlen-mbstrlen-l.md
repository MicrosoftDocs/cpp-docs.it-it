---
title: "strlen, wcslen, _mbslen, _mbslen_l, _mbstrlen, _mbstrlen_l | Microsoft Docs"
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
  - "_mbslen"
  - "_mbslen_l"
  - "_mbstrlen"
  - "wcslen"
  - "_mbstrlen_l"
  - "strlen"
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
  - "_mbstrlen"
  - "wcslen"
  - "_tcslen"
  - "_ftcslen"
  - "strlen"
  - "_mbslen"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_ftcslen (funzione)"
  - "_mbslen (funzione)"
  - "_mbslen_l (funzione)"
  - "_mbstrlen (funzione)"
  - "_mbstrlen_l (funzione)"
  - "_tcslen (funzione)"
  - "ftcslen (funzione)"
  - "lunghezze, stringhe"
  - "mbslen (funzione)"
  - "mbslen_l (funzione)"
  - "mbstrlen (funzione)"
  - "mbstrlen_l (funzione)"
  - "lunghezza della stringa, recupero"
  - "stringhe [C++], recupero della lunghezza"
  - "strlen (funzione)"
  - "tcslen (funzione)"
  - "wcslen (funzione)"
ms.assetid: 16462f2a-1e0f-4eb3-be55-bf1c83f374c2
caps.latest.revision: 32
caps.handback.revision: 30
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# strlen, wcslen, _mbslen, _mbslen_l, _mbstrlen, _mbstrlen_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene la lunghezza di una stringa, usando le impostazioni locali correnti o le impostazioni locali specificate.  Sono disponibili versioni più sicure di queste funzioni. Vedere [strnlen, strnlen\_s, wcsnlen, wcsnlen\_s, \_mbsnlen, \_mbsnlen\_l, \_mbstrnlen, \_mbstrnlen\_l](../../c-runtime-library/reference/strnlen-strnlen-s.md)  
  
> [!IMPORTANT]
>  Non è possibile usare `_mbslen`, `_mbslen_l`, `_mbstrlen` e `_mbstrlen_l` in applicazioni eseguite in Windows Runtime.  Per altre informazioni, vedere l'argomento relativo alle [funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
size_t strlen(    const char *str ); size_t wcslen(    const wchar_t *str  ); size_t _mbslen(    const unsigned char *str  ); size_t _mbslen_l(    const unsigned char *str,    _locale_t locale ); size_t _mbstrlen(    const char *str ); size_t _mbstrlen_l(    const char *str,    _locale_t locale );  
```  
  
#### Parametri  
 `str`  
 Stringa con terminazione Null.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## Valore restituito  
 Ognuna di queste funzioni restituisce il numero di caratteri in `str`, escluso il `NULL` terminale.  Non è riservato alcun valore per indicare un errore, ad eccezione di `_mbstrlen` e `_mbstrlen_l`, che restituiscono `((size_t)(-1))` se la stringa contiene un carattere multibyte non valido.  
  
## Note  
 `strlen` interpreta la stringa come stringa di caratteri a byte singolo. Il valore restituito sarà quindi sempre uguale al numero di byte, anche se la stringa contiene caratteri multibyte.  `wcslen` è una versione a caratteri wide di `strlen`. L'argomento di `wcslen` è una stringa a caratteri wide e il conteggio di caratteri è espresso in caratteri wide \(a due byte\).  In caso contrario, `wcslen` e `strlen` si comportano in modo identico.  
  
 **Nota sulla sicurezza** Queste funzioni possono incorrere in una minaccia potenziale dovuta a un problema di sovraccarico del buffer.  I problemi di sovraccarico del buffer sono usati spesso come metodo di attacco di sistema e provocano un'elevazione dei privilegi non autorizzata.  Per altre informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcslen`|`strlen`|`strlen`|`wcslen`|  
|`_tcsclen`|`strlen`|`_mbslen`|`wcslen`|  
|`_tcsclen_l`|`strlen`|`_mbslen_l`|`wcslen`|  
  
 `_mbslen` e `_mbslen_l` restituiscono il numero di caratteri multibyte in una stringa a caratteri multibyte, ma non testano la validità dei caratteri multibyte.  `_mbstrlen` e `_mbstrlen_l` testano la validità dei caratteri multibyte e riconoscono le sequenze di caratteri multibyte.  Se la stringa passata a `_mbstrlen` o `_mbstrlen_l` contiene un carattere multibyte non valido per la tabella codici, la funzione restituirà \-1 e imposterà `errno` su `EILSEQ`.  
  
 Il valore di output è interessato dalla configurazione dell'impostazione della categoria `LC_CTYPE` delle impostazioni locali. Per altre informazioni, vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md).  Le versioni di queste funzioni senza il suffisso `_l` usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. Le versioni con il suffisso `_l` sono identiche ma usano il parametro passato relativo alle impostazioni locali.  Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`strlen`|\<string.h\>|  
|`wcslen`|\<string.h\> o \<wchar.h\>|  
|`_mbslen`, `_mbslen_l`|\<mbstring.h\>|  
|`_mbstrlen`, `_mbstrlen_l`|\<stdlib.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_strlen.c  
// Determine the length of a string. For the multi-byte character  
// example to work correctly, the Japanese language support for  
// non-Unicode programs must be enabled by the operating system.  
  
#include <string.h>  
#include <locale.h>  
  
int main()  
{  
   char* str1 = "Count.";  
   wchar_t* wstr1 = L"Count.";  
   char * mbstr1;  
   char * locale_string;  
  
   // strlen gives the length of single-byte character string  
   printf("Length of '%s' : %d\n", str1, strlen(str1) );  
  
   // wstrlen gives the length of a wide character string  
   wprintf(L"Length of '%s' : %d\n", wstr1, wcslen(wstr1) );  
  
   // A multibyte string: [A] [B] [C] [katakana A] [D] [\0]  
   // in Code Page 932. For this example to work correctly,  
   // the Japanese language support must be enabled by the  
   // operating system.  
   mbstr1 = "ABC" "\x83\x40" "D";  
  
   locale_string = setlocale(LC_CTYPE, "Japanese_Japan");  
  
   if (locale_string == NULL)  
   {  
      printf("Japanese locale not enabled. Exiting.\n");  
      exit(1);  
   }  
   else  
   {  
      printf("Locale set to %s\n", locale_string);  
   }  
  
   // _mbslen will recognize the Japanese multibyte character if the  
   // current locale used by the operating system is Japanese  
   printf("Length of '%s' : %d\n", mbstr1, _mbslen(mbstr1) );  
  
   // _mbstrlen will recognize the Japanese multibyte character  
   // since the CRT locale is set to Japanese even if the OS locale  
   // isnot.   
   printf("Length of '%s' : %d\n", mbstr1, _mbstrlen(mbstr1) );  
   printf("Bytes in '%s' : %d\n", mbstr1, strlen(mbstr1) );     
  
}  
```  
  
  **Length of 'Count.' : 6 Length of 'Count.' : 6 Length of 'ABCァD' : 5**  
**Length of 'ABCァD' : 5**  
**Bytes in 'ABCァD' : 6**   
## Equivalente .NET Framework  
 [System::String::Length](https://msdn.microsoft.com/en-us/library/system.string.length.aspx)  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [strcat, wcscat, \_mbscat](../../c-runtime-library/reference/strcat-wcscat-mbscat.md)   
 [strcmp, wcscmp, \_mbscmp](../../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)   
 [Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)   
 [strcpy, wcscpy, \_mbscpy](../../c-runtime-library/reference/strcpy-wcscpy-mbscpy.md)   
 [strrchr, wcsrchr, \_mbsrchr, \_mbsrchr\_l](../../c-runtime-library/reference/strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)   
 [\_strset, \_strset\_l, \_wcsset, \_wcsset\_l, \_mbsset, \_mbsset\_l](../../c-runtime-library/reference/strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)   
 [strspn, wcsspn, \_mbsspn, \_mbsspn\_l](../../c-runtime-library/reference/strspn-wcsspn-mbsspn-mbsspn-l.md)