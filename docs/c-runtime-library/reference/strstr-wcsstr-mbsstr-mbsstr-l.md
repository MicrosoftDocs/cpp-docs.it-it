---
title: "strstr, wcsstr, _mbsstr, _mbsstr_l | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_mbsstr"
  - "wcsstr"
  - "_mbsstr_l"
  - "strstr"
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
apitype: "DLLExport"
f1_keywords: 
  - "_fstrstr"
  - "_ftcsstr"
  - "strstr"
  - "wcsstr"
  - "_mbsstr"
  - "_tcsstr"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_fstrstr (funzione)"
  - "_ftcsstr (funzione)"
  - "_mbsstr (funzione)"
  - "_mbsstr_l (funzione)"
  - "_tcsstr (funzione)"
  - "fstrstr (funzione)"
  - "ftcsstr (funzione)"
  - "mbsstr (funzione)"
  - "mbsstr_l (funzione)"
  - "stringhe [C++], ricerca"
  - "strstr (funzione)"
  - "sottostringhe, ricerca"
  - "tcsstr (funzione)"
  - "wcsstr (funzione)"
ms.assetid: 03d70c3f-2473-45cb-a5f8-b35beeb2748a
caps.latest.revision: 32
caps.handback.revision: 30
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# strstr, wcsstr, _mbsstr, _mbsstr_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce un puntatore alla prima occorrenza di una stringa ricercata in una stringa.  
  
> [!IMPORTANT]
>  `_mbsstr` e `_mbsstr_l` non possono essere utilizzate nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
char *strstr(  
   const char *str,  
   const char *strSearch   
); // C only  
char *strstr(  
   char *str,  
   const char *strSearch   
); // C++ only  
const char *strstr(  
   const char *str,  
   const char *strSearch   
); // C++ only  
wchar_t *wcsstr(  
   const wchar_t *str,  
   const wchar_t *strSearch   
); // C only  
wchar_t *wcsstr(  
   wchar_t *str,  
   const wchar_t *strSearch   
); // C++ only  
const wchar_t *wcsstr(  
   const wchar_t *str,  
   const wchar_t *strSearch   
); // C++ only  
unsigned char *_mbsstr(  
   const unsigned char *str,  
   const unsigned char *strSearch   
); // C only  
unsigned char *_mbsstr(  
   unsigned char *str,  
   const unsigned char *strSearch   
); // C++ only  
const unsigned char *_mbsstr(  
   const unsigned char *str,  
   const unsigned char *strSearch   
); // C++ only  
unsigned char *_mbsstr_l(  
   const unsigned char *str,  
   const unsigned char *strSearch,  
   _locale_t locale  
); // C only  
unsigned char *_mbsstr_l(  
   unsigned char *str,  
   const unsigned char *strSearch,  
   _locale_t locale  
); // C++ only  
const unsigned char *_mbsstr_l(  
   const unsigned char *str,  
   const unsigned char *strSearch,  
   _locale_t locale  
); // C++ only  
```  
  
#### Parametri  
 `str`  
 Stringa da cercare con terminazione null.  
  
 `strSearch`  
 Stringa da cercare con terminazione null.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Restituisce un puntatore alla prima occorrenza `strSearch` in `str`, o `NULL` se `strSearch` non compare in `str`.  Se `strSearch` punta a una stringa di lunghezza zero, la funzione restituisce `str`.  
  
## Note  
 La funzione `strstr` restituisce un puntatore alla prima occorrenza di `strSearch` in `str`.  La ricerca non include il carattere di terminazione null.  `wcsstr` è la versione con caratteri wide di `strstr` e `_mbsstr` è la versione a caratteri multibyte.  Gli argomenti e il valore restituito di `wcsstr` sono stringhe di caratteri di tipo "wide", quelli di `_mbsstr` sono stringhe di caratteri multibyte.  `_mbsstr` convalida i suoi parametri.  Se `str` o `strSearch` è `NULL`, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se all'esecuzione è consentito continuare, `_mbsstr` imposta `errno` al valore `EINVAL` e restituisce 0.  `strstr` e `wcsstr` non convalidano i relativi parametri.  Altrimenti queste tre funzioni si comportano in modo identico.  
  
> [!IMPORTANT]
>  Queste funzioni potrebbero causare una minaccia da un problema di sovraccarico del buffer.  I problemi di sovraccarico del buffer possono essere utilizzati per attaccare un sistema perché possono consentire l'esecuzione di codice arbitrario, con un conseguente innalzamento ingiustificato dei privilegi.  Per ulteriori informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
 In C, queste funzioni accettano un puntatore `const` come primo argomento.  In C\+\+, sono disponibili due overload.  L'overload che accetta un puntatore a `const` restituisce un puntatore a `const`; la versione che accetta un puntatore a un non\-`const` non restituisce un puntatore a un non\-`const`.  La macro \_CONST\_CORRECT\_OVERLOADS è definito se è entrambe le versioni `const` e non\-`const` di queste funzioni sono disponibili.  Se è necessario che entrambi gli overload C\+\+ abbiano il comportamento non\-`const`, definire il simbolo \_CONST\_RETURN.  
  
 Il valore di output è interessato dall'impostazione della categoria locale `LC_CTYPE`. Consultare [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md) per ulteriori informazioni.  Le versioni di queste funzioni che non hanno il suffisso `_l` utilizzano le impostazioni locali correnti per il comportamento dipendente di tutte le impostazioni locali; le versioni che hanno il suffisso `_l` sono identiche, con la differenza che utilizzano il parametro delle impostazioni locali che viene passato.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcsstr`|`strstr`|`_mbsstr`|`wcsstr`|  
|**n\/d**|**n\/d**|`_mbsstr_l`|**n\/d**|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`strstr`|\<string.h\>|  
|`wcsstr`|\<string.h\> o \<wchar.h\>|  
|`_mbsstr`, `_mbsstr_l`|\<mbstring.h\>|  
  
 Per ulteriori informazioni sul flusso, consultare [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_strstr.c  
  
#include <string.h>  
#include <stdio.h>  
  
char str[] =    "lazy";  
char string[] = "The quick brown dog jumps over the lazy fox";  
char fmt1[] =   "         1         2         3         4         5";  
char fmt2[] =   "12345678901234567890123456789012345678901234567890";  
  
int main( void )  
{  
   char *pdest;  
   int  result;  
   printf( "String to be searched:\n   %s\n", string );  
   printf( "   %s\n   %s\n\n", fmt1, fmt2 );  
   pdest = strstr( string, str );  
   result = (int)(pdest - string + 1);  
   if ( pdest != NULL )  
      printf( "%s found at position %d\n", str, result );  
   else  
      printf( "%s not found\n", str );  
}  
```  
  
  **String to be searched:**  
 **The quick brown dog jumps over the lazy fox**  
 **1         2         3         4         5**  
 **12345678901234567890123456789012345678901234567890**  
**lazy found at position 36**   
## Equivalente .NET Framework  
 [System::String::IndexOf](https://msdn.microsoft.com/en-us/library/system.string.indexof.aspx)  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [strcspn, wcscspn, \_mbscspn, \_mbscspn\_l](../../c-runtime-library/reference/strcspn-wcscspn-mbscspn-mbscspn-l.md)   
 [strcmp, wcscmp, \_mbscmp](../../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)   
 [strpbrk, wcspbrk, \_mbspbrk, \_mbspbrk\_l](../../c-runtime-library/reference/strpbrk-wcspbrk-mbspbrk-mbspbrk-l.md)   
 [strrchr, wcsrchr, \_mbsrchr, \_mbsrchr\_l](../../c-runtime-library/reference/strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)   
 [strspn, wcsspn, \_mbsspn, \_mbsspn\_l](../../c-runtime-library/reference/strspn-wcsspn-mbsspn-mbsspn-l.md)   
 [basic\_string::find](../Topic/basic_string::find.md)