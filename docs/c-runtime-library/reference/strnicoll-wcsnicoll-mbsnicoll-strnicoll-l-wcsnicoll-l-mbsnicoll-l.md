---
title: "_strnicoll, _wcsnicoll, _mbsnicoll, _strnicoll_l, _wcsnicoll_l, _mbsnicoll_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_mbsnicoll_l"
  - "_mbsnicoll"
  - "_wcsnicoll_l"
  - "_strnicoll"
  - "_strnicoll_l"
  - "_wcsnicoll"
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
  - "wcshicoll_l"
  - "_ftcsncicoll"
  - "strnicoll_l"
  - "_wcsnicoll"
  - "mbsnicoll_l"
  - "_strnicoll"
  - "mbsnicoll"
  - "_ftcsnicoll"
  - "wcsnicoll"
  - "_tcsnicoll"
  - "_mbsnicoll"
  - "strinicoll"
  - "_tcsncicoll"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_ftcsncicoll (funzione)"
  - "_ftcsnicoll (funzione)"
  - "_mbsnicoll (funzione)"
  - "_mbsnicoll_l (funzione)"
  - "_strnicoll (funzione)"
  - "_strnicoll_l (funzione)"
  - "_tcsncicoll (funzione)"
  - "_tcsnicoll (funzione)"
  - "_wcsnicoll (funzione)"
  - "_wcsnicoll_l (funzione)"
  - "tabelle codici, utilizzo per confronti tra stringhe"
  - "ftcsncicoll (funzione)"
  - "ftcsnicoll (funzione)"
  - "mbsnicoll (funzione)"
  - "mbsnicoll_l (funzione)"
  - "stringhe [C++], confronto per tabella codici"
  - "strnicoll (funzione)"
  - "strnicoll_l (funzione)"
  - "tcsncicoll (funzione)"
  - "tcsnicoll (funzione)"
  - "wcsnicoll (funzione)"
  - "wcsnicoll_l (funzione)"
ms.assetid: abf0c569-725b-428d-9ff2-924f430104b4
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 21
---
# _strnicoll, _wcsnicoll, _mbsnicoll, _strnicoll_l, _wcsnicoll_l, _mbsnicoll_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Confronto di stringhe utilizzando informazioni specifiche delle impostazioni locali.  
  
> [!IMPORTANT]
>  `_mbsnicoll` e `_mbsnicoll_l` non possono essere utilizzate nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
int _strnicoll(  
   const char *string1,  
   const char *string2,  
   size_t count   
);  
int _wcsnicoll(  
   const wchar_t *string1,  
   const wchar_t *string2 ,  
   size_t count   
);  
int _mbsnicoll(  
   const unsigned char *string1,  
   const unsigned char *string2,  
   size_t count   
);  
int _strnicoll_l(  
   const char *string1,  
   const char *string2,  
   size_t count,  
   _locale_t locale  
);  
int _wcsnicoll_l(  
   const wchar_t *string1,  
   const wchar_t *string2 ,  
   size_t count,  
   _locale_t locale  
);  
int _mbsnicoll_l(  
   const unsigned char *string1,  
   const unsigned char *string2,  
   size_t count,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `string1, string2`  
 Stringhe che terminazione null da confrontare.  
  
 `count`  
 Numero di caratteri da confrontare.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Ognuna di queste funzioni restituisce un valore che indica la relazione fra le sottostringhe di `string1` e `string2`*,* come segue.  
  
|Valore restituito|Relazione di stringa1 e stringa2|  
|-----------------------|--------------------------------------|  
|\< 0|`string1` minore di `string2`|  
|0|`string1` uguale a `string2`|  
|\> 0|`string1` è maggiore di `string2`|  
  
 Ognuna di queste funzioni restituisce `_NLSCMPERROR`.  Per utilizzare `_NLSCMPERROR`, includere STRING.H o MBSTRING.H.  `_wcsnicoll` può non riuscire se `string1` o `string2` contiene codici a caratteri "wide" al di fuori del dominio della sequenza di ordinamento.  Quando si verifica un errore, `_wcsnicoll` può impostare `errno` a `EINVAL`.  Per verificare un errore in una chiamata a `_wcsnicoll`, impostare `errno` a 0 e quindi verificare `errno` dopo aver chiamato `_wcsnicoll`**.**  
  
## Note  
 Ognuna di queste funzioni esegue un confronto senza distinzione tra maiuscole e minuscole dei primi caratteri `count` in `string1` e `string2` in base alla tabella codici.  Queste funzioni devono essere utilizzate solo quando esiste una differenza nella tabella codici tra l'ordine del set di caratteri e l'ordine dei caratteri lessicografici, questa differenza è particolarmente interessante per il confronto fra stringhe.  Le versioni di queste funzioni senza il suffisso `_l` utilizzano le impostazioni locali correnti e la tabella codici corrente.  Invece, le versioni con il suffisso `_l` sono identiche ma utilizzano le impostazioni locali che gli sono state passate.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Tutte queste funzioni convalidano i relativi parametri.  Se `string1` o `string2` è un puntatore null, o se è maggiore di `INT_MAX`, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni restituiscono `_NLSCMPERROR` e impostano `errno` su `EINVAL`**.**  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcsncicoll`|`_strnicoll`|`_mbsnbicoll`|`_wcsnicoll`|  
|`_tcsnicoll`|`_strnicoll`|[\_mbsnbicoll](../../c-runtime-library/reference/mbsnbcoll-mbsnbcoll-l-mbsnbicoll-mbsnbicoll-l.md)|`_wcsnicoll`|  
|`_tcsnicoll_l`|`_strnicoll_l`|`_mbsnbicoll_l`|`_wcsnicoll_l`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_strnicoll`, `_strnicoll_l`|\<string.h\>|  
|`_wcsnicoll`, `_wcsnicoll_l`|\<wchar.h\> o \<string.h\>|  
|`_mbsnicoll`, `_mbsnicoll_l`|\<mbstring.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 [System::String::Compare](https://msdn.microsoft.com/en-us/library/system.string.compare.aspx)  
  
## Vedere anche  
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)   
 [localeconv](../../c-runtime-library/reference/localeconv.md)   
 [\_mbsnbcoll, \_mbsnbcoll\_l, \_mbsnbicoll, \_mbsnbicoll\_l](../../c-runtime-library/reference/mbsnbcoll-mbsnbcoll-l-mbsnbicoll-mbsnbicoll-l.md)   
 [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [strcmp, wcscmp, \_mbscmp](../../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)   
 [\_stricmp, \_wcsicmp, \_mbsicmp, \_stricmp\_l, \_wcsicmp\_l, \_mbsicmp\_l](../../c-runtime-library/reference/stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md)   
 [strncmp, wcsncmp, \_mbsncmp, \_mbsncmp\_l](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)   
 [\_strnicmp, \_wcsnicmp, \_mbsnicmp, \_strnicmp\_l, \_wcsnicmp\_l, \_mbsnicmp\_l](../../c-runtime-library/reference/strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)   
 [strxfrm, wcsxfrm, \_strxfrm\_l, \_wcsxfrm\_l](../../c-runtime-library/reference/strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)