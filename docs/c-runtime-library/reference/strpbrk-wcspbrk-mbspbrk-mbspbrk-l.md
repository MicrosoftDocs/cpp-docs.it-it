---
title: "strpbrk, wcspbrk, _mbspbrk, _mbspbrk_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_mbspbrk"
  - "wcspbrk"
  - "_mbspbrk_l"
  - "strpbrk"
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
  - "_fstrpbrk"
  - "_mbspbrk"
  - "strpbrk"
  - "_tcspbrk"
  - "_ftcspbrk"
  - "wcspbrk"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_fstrpbrk (funzione)"
  - "_ftcspbrk (funzione)"
  - "_mbspbrk (funzione)"
  - "_mbspbrk_l (funzione)"
  - "_tcspbrk (funzione)"
  - "set di caratteri [C++], analisi di stringhe per la ricerca di caratteri"
  - "caratteri [C++], analisi di stringhe"
  - "fstrpbrk (funzione)"
  - "ftcspbrk (funzione)"
  - "mbspbrk (funzione)"
  - "mbspbrk_l (funzione)"
  - "stringhe [C++], eseguire un'analisi"
  - "strpbrk (funzione)"
  - "tcspbrk (funzione)"
  - "wcspbrk (funzione)"
ms.assetid: 80b504f7-a167-4dde-97ad-4ae3000dc810
caps.latest.revision: 30
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 30
---
# strpbrk, wcspbrk, _mbspbrk, _mbspbrk_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Analizza le stringhe per caratteri nei set di caratteri specificati.  
  
> [!IMPORTANT]
>  `_mbspbrk` e `_mbspbrk_l` non possono essere utilizzate nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
char *strpbrk(  
   const char *str,  
   const char *strCharSet   
); // C only  
char *strpbrk(  
   char *str,  
   const char *strCharSet   
); // C++ only  
const char *strpbrk(  
   const char *str,  
   const char *strCharSet   
); // C++ only  
wchar_t *wcspbrk(  
   const wchar_t *str,  
   const wchar_t *strCharSet   
); // C only  
wchar_t *wcspbrk(  
   wchar_t *str,  
   const wchar_t *strCharSet   
); // C++ only  
const wchar_t *wcspbrk(  
   const wchar_t *str,  
   const wchar_t *strCharSet   
); // C++ only  
unsigned char *_mbspbrk(  
   const unsigned char *str,  
   const unsigned char *strCharSet   
); // C only  
unsigned char *_mbspbrk(  
   unsigned char *str,  
   const unsigned char *strCharSet   
); // C++ only  
const unsigned char *_mbspbrk(  
   const unsigned char *str,  
   const unsigned char *strCharSet   
); // C++ only  
unsigned char *_mbspbrk_l(  
   const unsigned char *str,  
   const unsigned char *strCharSet,  
   _locale_t locale  
); // C only  
unsigned char *_mbspbrk_l(  
   unsigned char *str,  
   const unsigned char *strCharSet,  
   _locale_t locale  
); // C++ only  
const unsigned char *_mbspbrk_l(  
   const unsigned char *str,  
   const unsigned char* strCharSet,  
   _locale_t locale  
); // C++ only  
```  
  
#### Parametri  
 `str`  
 Terminazione null, stringa cercata.  
  
 `strCharSet`  
 Set di caratteri con terminazione null.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Restituisce un puntatore alla prima occorrenza di ogni carattere di `strCharSet` in `str`, o un puntatore `NULL` se due argomenti di tipo stringa non hanno caratteri in comune.  
  
## Note  
 La funzione `strpbrk` restituisce un puntatore alla prima occorrenza di un carattere in `str` appartenente al set di caratteri in `strCharSet`.  La ricerca non include il carattere di terminazione null.  
  
 `wcspbrk` e `_mbspbrk` sono versioni a caratteri di tipo "wide" e di caratteri multibyte di `strpbrk`.  Gli argomenti e il valore restituito di `wcspbrk` sono stringhe di caratteri di tipo "wide", quelli di `_mbspbrk` sono stringhe di caratteri multibyte.  
  
 `_mbspbrk` convalida i suoi parametri.  Se `str` o `strCharSet` è `NULL`, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, `_mbspbrk` ritorna `NULL` e imposta `errno` a `EINVAL`.  `strpbrk` e `wcspbrk` non convalidano i relativi parametri.  Altrimenti queste tre funzioni si comportano in modo identico.  
  
 `_mbspbrk` è simile a `_mbscspn` con la differenza che `_mbspbrk` restituisce un puntatore anziché un valore di tipo [size\_t](../../c-runtime-library/standard-types.md).  
  
 In C, queste funzioni accettano un puntatore `const` come primo argomento.  In C\+\+, sono disponibili due overload.  L'overload che accetta un puntatore a `const` restituisce un puntatore a `const`; la versione che accetta un puntatore a un non\-`const` non restituisce un puntatore a un non\-`const`.  La macro \_CONST\_CORRECT\_OVERLOADS è definito se è entrambe le versioni `const` e non\-`const` di queste funzioni sono disponibili.  Se è necessario che entrambi gli overload C\+\+ abbiano il comportamento non\-`const`, definire il simbolo \_CONST\_RETURN.  
  
 Il valore di output è interessato dall'impostazione di categoria `LC_CTYPE` delle impostazioni locali; per ulteriori informazioni, vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md).  Le versioni di queste funzioni senza il suffisso `_l` utilizzano le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali; la versione con il suffisso `_l` è identica, ad eccezione del fatto che utilizzano il parametro delle impostazioni locali che viene passato.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcspbrk`|`strpbrk`|`_mbspbrk`|`wcspbrk`|  
|**n\/d**|**n\/d**|`_mbspbrk_l`|**n\/d**|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`strpbrk`|\<string.h\>|  
|`wcspbrk`|\<string.h\> o \<wchar.h\>|  
|`_mbspbrk`, `_mbspbrk_l`|\<mbstring.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_strpbrk.c  
  
#include <string.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char string[100] = "The 3 men and 2 boys ate 5 pigs\n";  
   char *result = NULL;  
  
   // Return pointer to first digit in "string".  
   printf( "1: %s\n", string );  
   result = strpbrk( string, "0123456789" );  
   printf( "2: %s\n", result++ );  
   result = strpbrk( result, "0123456789" );  
   printf( "3: %s\n", result++ );  
   result = strpbrk( result, "0123456789" );  
   printf( "4: %s\n", result );  
}  
```  
  
  **1: I 3 uomini e i 2 ragazzi hanno mangiato 5 maiali**  
**2: 3 uomini e 2 ragazzi hanno mangiato 5 maiali**  
**3: 2 ragazzi hanno mangiato 5 maiali**  
**4: 5 maiali**   
## Equivalente .NET Framework  
 [System::String::IndexOfAny](https://msdn.microsoft.com/en-us/library/system.string.indexofany.aspx)  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [strcspn, wcscspn, \_mbscspn, \_mbscspn\_l](../../c-runtime-library/reference/strcspn-wcscspn-mbscspn-mbscspn-l.md)   
 [strchr, wcschr, \_mbschr, \_mbschr\_l](../../c-runtime-library/reference/strchr-wcschr-mbschr-mbschr-l.md)   
 [strrchr, wcsrchr, \_mbsrchr, \_mbsrchr\_l](../../c-runtime-library/reference/strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)