---
title: "strrchr, wcsrchr, _mbsrchr, _mbsrchr_l | Microsoft Docs"
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
  - "strrchr"
  - "wcsrchr"
  - "_mbsrchr"
  - "_mbsrchr_l"
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
  - "_tcsrchr"
  - "_ftcsrchr"
  - "strrchr"
  - "wcsrchr"
  - "_mbsrchr"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_ftcsrchr (funzione)"
  - "_mbsrchr (funzione)"
  - "_mbsrchr_l (funzione)"
  - "_tcsrchr (funzione)"
  - "caratteri [C++], analisi"
  - "ftcsrchr (funzione)"
  - "mbsrchr (funzione)"
  - "mbsrchr_l (funzione)"
  - "analisi di stringhe"
  - "stringhe [C++], eseguire un'analisi"
  - "strrchr (funzione)"
  - "tcsrchr (funzione)"
  - "wcsrchr (funzione)"
ms.assetid: 75cf2664-758e-49bb-bf6b-8a139cd474d2
caps.latest.revision: 28
caps.handback.revision: 28
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# strrchr, wcsrchr, _mbsrchr, _mbsrchr_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Analizza una stringa per l'ultima occorrenza di un carattere.  
  
> [!IMPORTANT]
>  `_mbsrchr` e `_mbsrchr_l` non possono essere utilizzate nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
char *strrchr(  
   const char *str,  
   int c   
); // C only  
char *strrchr(  
   char *str,  
   int c   
); // C++ only  
const char *strrchr(  
   const char *str,  
   int c   
); // C++ only  
wchar_t *wcsrchr(  
   const wchar_t *str,  
   wchar_t c   
); // C only  
wchar_t *wcsrchr(  
   wchar_t *str,  
   wchar_t c   
); // C++ only  
const wchar_t *wcsrchr(  
   const wchar_t *str,  
   wchar_t c   
); // C++ only  
unsigned char *_mbsrchr(  
   const unsigned char *str,  
   unsigned int c   
); // C only  
unsigned char *_mbsrchr(  
   unsigned char *str,  
   unsigned int c   
); // C++ only  
const unsigned char *_mbsrchr(  
   const unsigned char *str,  
   unsigned int c   
); // C++ only  
unsigned char *_mbsrchr_l(  
   const unsigned char *str,  
   unsigned int c,  
   _locale_t locale  
); // C only  
unsigned char *_mbsrchr_l(  
   unsigned char *str,  
   unsigned int c,  
   _locale_t locale  
); // C++ only  
const unsigned char *_mbsrchr_l(  
   const unsigned char *str,  
   unsigned int c,  
   _locale_t locale  
); // C++ only  
```  
  
#### Parametri  
 `str`  
 Stringa da cercare con terminazione null.  
  
 `c`  
 Carattere da localizzare.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Restituisce un puntatore all'ultima occorrenza di `c` in `str`, o `NULL` se `c` non viene trovato.  
  
## Note  
 La funzione `strrchr` ricerca l'ultima occorrenza di `c` \(convertito in `char`\) in `str`.  La ricerca include il carattere di terminazione null.  
  
 `wcsrchr` e `_mbsrchr` sono versioni a caratteri di tipo "wide" e di caratteri multibyte di `strrchr`.  Gli argomenti e il valore restituito di `wcsrchr` sono stringhe di caratteri di tipo "wide", quelli di `_mbsrchr` sono stringhe di caratteri multibyte.  
  
 In C, queste funzioni accettano un puntatore `const` come primo argomento.  In C\+\+, sono disponibili due overload.  L'overload che accetta un puntatore a `const` restituisce un puntatore a `const`; la versione che accetta un puntatore a un non\-`const` non restituisce un puntatore a un non\-`const`.  La macro \_CONST\_CORRECT\_OVERLOADS è definito se è entrambe le versioni `const` e non\-`const` di queste funzioni sono disponibili.  Se è necessario che entrambi gli overload C\+\+ abbiano il comportamento non\-`const`, definire il simbolo \_CONST\_RETURN.  
  
 `_mbsrchr` convalida i suoi parametri.  Se `str` è `NULL`, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, `errno` è settato a `EINVAL` e `_mbsrchr` restituisce 0.  `strrchr` e `wcsrchr` non convalidano i relativi parametri.  Altrimenti queste tre funzioni si comportano in modo identico.  
  
 Il valore di output è interessato dall'impostazione di categoria `LC_CTYPE` delle impostazioni locali; per ulteriori informazioni vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md).  Le versioni di queste funzioni senza il suffisso `_l` utilizzano le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali; le versioni con il suffisso `_l` sono identiche, ad eccezione del fatto che utilizzano il parametro delle impostazioni locali che viene passato.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcsrchr`|`strrchr`|`_mbsrchr`|`wcsrchr`|  
|**n\/d**|**n\/d**|`_mbsrchr_l`|**n\/d**|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`strrchr`|\<string.h\>|  
|`wcsrchr`|\<string.h\> o \<wchar.h\>|  
|`_mbsrchr`, `_mbsrchr_l`|\<mbstring.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
 Per un esempio di utilizzo di `strrchr`, vedere [strchr](../../c-runtime-library/reference/strchr-wcschr-mbschr-mbschr-l.md).  
  
## Equivalente .NET Framework  
 [System::String::LastIndexOf](https://msdn.microsoft.com/en-us/library/system.string.lastindexof.aspx)  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [strchr, wcschr, \_mbschr, \_mbschr\_l](../../c-runtime-library/reference/strchr-wcschr-mbschr-mbschr-l.md)   
 [strcspn, wcscspn, \_mbscspn, \_mbscspn\_l](../../c-runtime-library/reference/strcspn-wcscspn-mbscspn-mbscspn-l.md)   
 [\_strnicmp, \_wcsnicmp, \_mbsnicmp, \_strnicmp\_l, \_wcsnicmp\_l, \_mbsnicmp\_l](../../c-runtime-library/reference/strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)   
 [strpbrk, wcspbrk, \_mbspbrk, \_mbspbrk\_l](../../c-runtime-library/reference/strpbrk-wcspbrk-mbspbrk-mbspbrk-l.md)   
 [strspn, wcsspn, \_mbsspn, \_mbsspn\_l](../../c-runtime-library/reference/strspn-wcsspn-mbsspn-mbsspn-l.md)