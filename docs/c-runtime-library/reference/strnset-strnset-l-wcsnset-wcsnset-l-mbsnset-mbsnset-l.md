---
title: "_strnset, _strnset_l, _wcsnset, _wcsnset_l, _mbsnset, _mbsnset_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_mbsnset"
  - "_strnset"
  - "_mbsnset_l"
  - "_wcsnset_l"
  - "_wcsnset"
  - "_strnset_l"
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
  - "_tcsncset_l"
  - "mbsnset_l"
  - "_tcsnset_l"
  - "_fstrnset"
  - "_wcsnset_l"
  - "_ftcsnset"
  - "wcsnset_l"
  - "_mbsnset_l"
  - "_strnset"
  - "_tcsnset"
  - "_strnset_l"
  - "mbsnset"
  - "strnset_l"
  - "_mbsnset"
  - "_wcsnset"
  - "_tcsncset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_fstrnset (funzione)"
  - "_ftcsnset (funzione)"
  - "_mbsnset (funzione)"
  - "_mbsnset_l (funzione)"
  - "_strnset (funzione)"
  - "_strnset_l (funzione)"
  - "_tcsncset (funzione)"
  - "_tcsncset_l (funzione)"
  - "_tcsnset (funzione)"
  - "_tcsnset_l (funzione)"
  - "_wcsnset (funzione)"
  - "_wcsnset_l (funzione)"
  - "caratteri [C++], inizializzazione in formati"
  - "fstrnset (funzione)"
  - "ftcsnset (funzione)"
  - "inizializzazione di caratteri"
  - "mbsnset (funzione)"
  - "mbsnset_l (funzione)"
  - "stringhe [C++], inizializzazione"
  - "strnset_l (funzione)"
  - "tcsncset (funzione)"
  - "tcsnset (funzione)"
  - "tcsnset_l (funzione)"
  - "wcsnset_l (funzione)"
ms.assetid: 3f306489-5763-48e5-b939-aefee7c94ef5
caps.latest.revision: 31
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 31
---
# _strnset, _strnset_l, _wcsnset, _wcsnset_l, _mbsnset, _mbsnset_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Inizializza i caratteri di una stringa con un carattere specifico.  Esistono versioni più sicure di queste funzioni; vedere [\_strnset\_s, \_strnset\_s\_l, \_wcsnset\_s, \_wcsnset\_s\_l, \_mbsnset\_s, \_mbsnset\_s\_l](../../c-runtime-library/reference/strnset-s-strnset-s-l-wcsnset-s-wcsnset-s-l-mbsnset-s-mbsnset-s-l.md).  
  
> [!IMPORTANT]
>  `_mbsnset` e `_mbsnset_l` non possono essere utilizzate nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
char *_strnset(  
   char *str,  
   int c,  
   size_t count   
);  
char *_strnset_l(  
   char *str,  
   int c,  
   size_t count,  
   locale_t locale  
);  
wchar_t *_wcsnset(  
   wchar_t *str,  
   wchar_t c,  
   size_t count   
);  
wchar_t *_wcsnset_l(  
   wchar_t *str,  
   wchar_t c,  
   size_t count,  
   _locale_t locale  
);  
unsigned char *_mbsnset(  
   unsigned char *str,  
   unsigned int c,  
   size_t count   
);  
unsigned char *_mbsnset_l(  
   unsigned char *str,  
   unsigned int c,  
   size_t count,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `str`  
 Stringa da modificare.  
  
 `c`  
 Impostazione del carattere.  
  
 `count`  
 Numero di caratteri da impostare.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Restituisce un puntatore alla stringa modificata.  
  
## Note  
 La funzione `_strnset` imposta, al massimo, i primi `count` caratteri di `str` a `c` \(convertiti in `char`\).  Se `count` è maggiore della lunghezza di `str`, la lunghezza di `str` viene utilizzata al posto di `count`.  
  
 `_wcsnset` e `_mbsnset` sono versioni a caratteri di tipo "wide" e di caratteri multibyte di `_strnset`.  Gli argomenti della stringa e il valore restituito da `_wcsnset` sono stringhe di caratteri di tipo "wide", quelli di `_mbsnset` sono stringhe di caratteri multibyte.  Altrimenti queste tre funzioni si comportano in modo identico.  
  
 `_mbsnset` convalida i suoi parametri; se `str` è un puntatore null, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md) .  Se l'esecuzione può continuare, `_mbsnset` ritorna NULL e imposta `errno` a `EINVAL`.  `_strnset` e `_wcsnset` non convalidano i relativi parametri.  
  
 Il valore di output è interessato dall'impostazione di categoria `LC_CTYPE` delle impostazioni locali; vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md) per ulteriori informazioni.  Le versioni di queste funzioni senza il suffisso `_l` utilizzano le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali; le versioni con il suffisso`_l` sono identiche, ad eccezione del fatto che utilizzano il parametro delle impostazioni locali che viene passato.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcsnset`|`_strnset`|`_mbsnbset`|`_wcsnset`|  
|`_tcsnset_l`|`_strnset_l`|`_mbsnbset_l`|`_wcsnset_l`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_strnset`|\<string.h\>|  
|`_strnset_l`|\<tchar.h\>|  
|`_wcsnset`|\<string.h\> o \<wchar.h\>|  
|`_wcsnset_l`|\<tchar.h\>|  
|`_mbsnset`, `_mbsnset_l`|\<mbstring.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_strnset.c  
// compile with: /W3  
#include <string.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char string[15] = "This is a test";  
   /* Set not more than 4 characters of string to be *'s */  
   printf( "Before: %s\n", string );  
   _strnset( string, '*', 4 ); // C4996  
   // Note: _strnset is deprecated; consider using _strnset_s  
   printf( "After:  %s\n", string );  
}  
```  
  
  **Prima: Questo è un test**  
**Dopo: \*\*\*\* è un test**   
## Equivalente .NET Framework  
 [System::String::Replace](https://msdn.microsoft.com/en-us/library/system.string.replace.aspx)  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [strcat, wcscat, \_mbscat](../../c-runtime-library/reference/strcat-wcscat-mbscat.md)   
 [strcmp, wcscmp, \_mbscmp](../../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)   
 [strcpy, wcscpy, \_mbscpy](../../c-runtime-library/reference/strcpy-wcscpy-mbscpy.md)   
 [\_strset, \_strset\_l, \_wcsset, \_wcsset\_l, \_mbsset, \_mbsset\_l](../../c-runtime-library/reference/strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)