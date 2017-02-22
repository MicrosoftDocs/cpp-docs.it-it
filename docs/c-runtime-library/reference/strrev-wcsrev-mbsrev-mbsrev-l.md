---
title: "_strrev, _wcsrev, _mbsrev, _mbsrev_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_wcsrev"
  - "_mbsrev"
  - "_strrev"
  - "_mbsrev_l"
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
  - "_strrev"
  - "_ftcsrev"
  - "_tcsrev"
  - "mbsrev"
  - "mbsrev_l"
  - "_wcsrev_fstrrev"
  - "_mbsrev"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_ftcsrev (funzione)"
  - "_mbsrev (funzione)"
  - "_mbsrev_l (funzione)"
  - "_strrev (funzione)"
  - "_tcsrev (funzione)"
  - "_wcsrev (funzione)"
  - "caratteri [C++], inversione dell'ordine"
  - "caratteri [C++], cambio"
  - "ftcsrev (funzione)"
  - "mbsrev (funzione)"
  - "mbsrev_l (funzione)"
  - "inversione di caratteri in stringhe"
  - "stringhe [C++], inversione"
  - "strrev (funzione)"
  - "tcsrev (funzione)"
  - "wcsrev (funzione)"
ms.assetid: 87863e89-4fa0-421c-af48-25d8516fe72f
caps.latest.revision: 25
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 25
---
# _strrev, _wcsrev, _mbsrev, _mbsrev_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Inverte i caratteri di una stringa.  
  
> [!IMPORTANT]
>  `_mbsrev` e `_mbsrev_l` non possono essere utilizzate nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
char *_strrev(  
   char *str   
);  
wchar_t *_wcsrev(  
   wchar_t *str   
);  
unsigned char *_mbsrev(  
   unsigned char *str   
);  
unsigned char *_mbsrev_l(  
   unsigned char *str,  
   _locale_t locale   
);  
```  
  
#### Parametri  
 `str`  
 Stringa con terminazione null da invertire.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Restituisce un puntatore alla stringa modificata.  Nessun valore restituito è riservato per indicare un errore.  
  
## Note  
 La funzione `_strrev` inverte l'ordine dei caratteri in `string`.  Il carattere di terminazione null rimane sul posto.  `_wcsrev` e `_mbsrev` sono versioni a caratteri di tipo "wide" e di caratteri multibyte di `_strrev`.  Gli argomenti e il valore restituito di `_wcsrev` sono stringhe di caratteri di tipo "wide", quelli di `_mbsrev` sono stringhe di caratteri multibyte.  Per `_mbsrev`, l'ordine di byte in ogni carattere multibyte in `string` non viene modificato.  Altrimenti queste tre funzioni si comportano in modo identico.  
  
 `_mbsrev` convalida i suoi parametri.  Se `string1` o `string2` è un puntatore null, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, `_mbsrev` ritorna `NULL` e imposta `errno` a `EINVAL`.  `_strrev` e `_wcsrev` non convalidano i relativi parametri.  
  
 Il valore di output è interessato dall'impostazione dell'impostazione della categoria `LC_CTYPE` delle impostazioni locali. Vedere [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md) per ulteriori informazioni.  Le versioni di queste funzioni sono identiche, eccetto una non avente il suffisso `_l` che usa le impostazioni locali e l'altra che invece possiede il suffisso `_l` usa i parametri locali passati.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
> [!IMPORTANT]
>  Queste funzioni potrebbero essere vulnerabili a rischi di sovraccarico del buffer.  I sovraccarichi del buffer possono essere utilizzati per gli attacchi di sistema perché possono causare un'elevazione dei privilegi non autorizzata.  Per ulteriori informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcsrev`|`_strrev`|`_mbsrev`|`_wcsrev`|  
|**n\/d**|**n\/d**|`_mbsrev_l`|**n\/d**|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_strrev`|\<string.h\>|  
|`_wcsrev`|\<string.h\> o \<wchar.h\>|  
|`_mbsrev`, `_mbsrev_l`|\<mbstring.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_strrev.c  
// This program checks a string to see  
// whether it is a palindrome: that is, whether  
// it reads the same forward and backward.  
//  
  
#include <string.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char* string = "Able was I ere I saw Elba";  
   int result;  
  
   // Reverse string and compare (ignore case):  
   result = _stricmp( string, _strrev( _strdup( string ) ) );  
   if( result == 0 )  
      printf( "The string \"%s\" is a palindrome\n", string );  
   else  
      printf( "The string \"%s\" is not a palindrome\n", string );  
}  
```  
  
  **La stringa "Able was I ere I saw Elba" è un palindromo**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [strcpy, wcscpy, \_mbscpy](../../c-runtime-library/reference/strcpy-wcscpy-mbscpy.md)   
 [\_strset, \_strset\_l, \_wcsset, \_wcsset\_l, \_mbsset, \_mbsset\_l](../../c-runtime-library/reference/strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)