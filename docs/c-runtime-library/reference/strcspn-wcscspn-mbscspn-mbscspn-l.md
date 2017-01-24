---
title: "strcspn, wcscspn, _mbscspn, _mbscspn_l | Microsoft Docs"
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
  - "_mbscspn_l"
  - "wcscspn"
  - "_mbscspn"
  - "strcspn"
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
  - "strcspn"
  - "_mbscspn"
  - "wcscspn"
  - "_ftcscspn"
  - "_tcscspn"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_ftcscspn (funzione)"
  - "_mbscspn (funzione)"
  - "_mbscspn_l (funzione)"
  - "_tcscspn (funzione)"
  - "ftcscspn (funzione)"
  - "mbscspn (funzione)"
  - "mbscspn_l (funzione)"
  - "strcspn (funzione)"
  - "stringhe [C++], ricerca"
  - "tcscspn (funzione)"
  - "wcscspn (funzione)"
ms.assetid: f73f51dd-b533-4e46-ba29-d05c553708a6
caps.latest.revision: 24
caps.handback.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# strcspn, wcscspn, _mbscspn, _mbscspn_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce l'indice della prima occorrenza in una stringa di un carattere che appartiene a un set di caratteri.  
  
> [!IMPORTANT]
>  `_mbschr` e `_mbschr_l`non possono essere utilizzate nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
size_t strcspn(  
   const char *str,  
   const char *strCharSet   
);  
size_t wcscspn(  
   const wchar_t *str,  
   const wchar_t *strCharSet   
);  
size_t _mbscspn(  
   const unsigned char *str,  
   const unsigned char *strCharSet   
);  
size_t _mbscspn_l(  
   const unsigned char *str,  
   const unsigned char *strCharSet,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `str`  
 Stringa cercata con terminazione null.  
  
 `strCharSet`  
 Set di caratteri con terminazione null.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Queste funzioni restituiscono l'indice del primo carattere in `str` in `strCharSet`.  Se nessuno dei caratteri in `str` è in `strCharSet`, il valore restituito è la lunghezza di `str`.  
  
 Nessun valore restituito è riservato per indicare un errore.  
  
## Note  
 `wcscspn` e `_mbscspn` sono versioni a caratteri di tipo "wide" e di caratteri multibyte di `strcspn`.  Gli argomenti di `wcscspn` sono stringhe di caratteri di tipo "wide", quelli di `_mbscspn` sono stringhe di caratteri multibyte.  
  
 `_mbscspn` convalida i suoi parametri.  Se `str` o `strCharSet` è un puntatore null, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione restituisce 0 e imposta `errno` su `EINVAL`.  `strcspn` e `wcscspn` non convalidano i relativi parametri.  Altrimenti queste tre funzioni si comportano in modo identico.  
  
 Il valore di output è interessato dall'impostazione dell'impostazione di categoria `LC_CTYPE` delle impostazioni locali; vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md) per ulteriori informazioni.  Le versioni di queste funzioni senza il suffisso `_l` utilizzano le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali; le versioni con il suffisso `_l` sono identiche, ad eccezione del fatto che utilizzano il parametro delle impostazioni locali che viene passato.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcscspn`|`strcspn`|`_mbscspn`|`wcscspn`|  
|`n/a`|`n/a`|`_mbscspn_l`|`n/a`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`strcspn`|\<string.h\>|  
|`wcscspn`|\<string.h\> o \<wchar.h\>|  
|`_mbscspn`, `_mbscspn_l`|\<mbstring.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_strcspn.c  
  
#include <string.h>  
#include <stdio.h>  
  
void test( const char * str, const char * strCharSet )  
{  
   int pos = strcspn( str, strCharSet );  
   printf( "strcspn( \"%s\", \"%s\" ) = %d\n", str, strCharSet, pos );      
}  
  
int main( void )  
{  
   test( "xyzbxz", "abc" );  
   test( "xyzbxz", "xyz" );  
   test( "xyzbxz", "no match" );  
   test( "xyzbxz", "" );  
   test( "", "abc" );  
   test( "", "" );  
}  
```  
  
  **strcspn\( "xyzbxz", "abc" \) \= 3**  
**strcspn\( "xyzbxz", "xyz" \) \= 0**  
**strcspn\( "xyzbxz", "no match" \) \= 6**  
**strcspn\( "xyzbxz", "" \) \= 6**  
**strcspn\( "", "abc" \) \= 0**  
**strcspn\( "", "" \) \= 0**   
## Equivalente .NET Framework  
 [System::String::Substring](https://msdn.microsoft.com/en-us/library/system.string.substring.aspx)  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [strncat, \_strncat\_l, wcsncat, \_wcsncat\_l, \_mbsncat, \_mbsncat\_l](../../c-runtime-library/reference/strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)   
 [strncmp, wcsncmp, \_mbsncmp, \_mbsncmp\_l](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)   
 [strncpy, \_strncpy\_l, wcsncpy, \_wcsncpy\_l, \_mbsncpy, \_mbsncpy\_l](../../c-runtime-library/reference/strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)   
 [\_strnicmp, \_wcsnicmp, \_mbsnicmp, \_strnicmp\_l, \_wcsnicmp\_l, \_mbsnicmp\_l](../../c-runtime-library/reference/strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)   
 [strrchr, wcsrchr, \_mbsrchr, \_mbsrchr\_l](../../c-runtime-library/reference/strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)   
 [strspn, wcsspn, \_mbsspn, \_mbsspn\_l](../../c-runtime-library/reference/strspn-wcsspn-mbsspn-mbsspn-l.md)