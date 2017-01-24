---
title: "_stricoll, _wcsicoll, _mbsicoll, _stricoll_l, _wcsicoll_l, _mbsicoll_l | Microsoft Docs"
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
  - "_mbsicoll_l"
  - "_stricoll_l"
  - "_mbsicoll"
  - "_wcsicoll_l"
  - "_wcsicoll"
  - "_stricoll"
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
  - "stricoll"
  - "_stricoll"
  - "_wcsicoll"
  - "mbsicoll_l"
  - "_mbsicoll"
  - "_ftcsicoll"
  - "wcsicoll_l"
  - "_tcsicoll"
  - "mbsicoll"
  - "stricoll_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_ftcsicoll (funzione)"
  - "_mbsicoll (funzione)"
  - "_mbsicoll_l (funzione)"
  - "_stricoll (funzione)"
  - "_stricoll_l (funzione)"
  - "_tcsicoll (funzione)"
  - "_wcsicoll (funzione)"
  - "tabelle codici, utilizzo per confronti tra stringhe"
  - "ftcsicoll (funzione)"
  - "mbsicoll (funzione)"
  - "mbsicoll_l (funzione)"
  - "stricoll (funzione)"
  - "stricoll_l (funzione)"
  - "confronto tra stringhe [C++], specifici delle impostazioni cultura"
  - "stringhe [C++], confronto per tabella codici"
  - "tcsicoll (funzione)"
ms.assetid: 8ec93016-5a49-49d2-930f-721566661d82
caps.latest.revision: 22
caps.handback.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _stricoll, _wcsicoll, _mbsicoll, _stricoll_l, _wcsicoll_l, _mbsicoll_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Confronto di stringhe utilizzando informazioni specifiche delle impostazioni locali.  
  
> [!IMPORTANT]
>  `_mbsicoll` e `_mbsicoll_l` non possono essere utilizzate nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
int _stricoll(  
   const char *string1,  
   const char *string2   
);  
int _wcsicoll(  
   const wchar_t *string1,  
   const wchar_t *string2   
);  
int _mbsicoll(  
   const unsigned char *string1,  
   const unsigned char *string2   
);  
int _stricoll_l(  
   const char *string1,  
   const char *string2,  
   _locale_t locale  
);  
int _wcsicoll_l(  
   const wchar_t *string1,  
   const wchar_t *string2,  
   _locale_t locale  
);  
int _mbsicoll_l(  
   const unsigned char *string1,  
   const unsigned char *string2,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `string1, string2`  
 Stringhe che terminano con null da confrontare.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Ognuna di queste funzioni restituisce un valore che indica la relazione tra `string1` e `string2`*,* come segue.  
  
|Valore restituito|Relazione di stringa1 e stringa2|  
|-----------------------|--------------------------------------|  
|\< 0|`string1` minore di `string2`|  
|0|`string1` uguale a `string2`|  
|\> 0|`string1` è maggiore di `string2`|  
|`_NLSCMPERROR`|si è verificato un errore.|  
  
 Ognuna di queste funzioni restituisce `_NLSCMPERROR`.  Per utilizzare `_NLSCMPERROR`, includere `STRING.H` o `MBSTRING.H`.  `_wcsicoll` può non riuscire se `string1` o `string2` contiene codici a caratteri "wide" al di fuori del dominio della sequenza di ordinamento.  Quando si verifica un errore, `_wcsicoll` può impostare `errno` a `EINVAL`.  Per verificare un errore in una chiamata a `_wcsicoll`, impostare `errno` a 0 e quindi verificare `errno` dopo aver chiamato `_wcsicoll`.  
  
## Note  
 Ognuna di queste funzioni attualmente esegue un confronto senza distinzione tra maiuscole e minuscole di `string1` e `string2` in base alla tabella codici attualmente utilizzata.  Queste funzioni devono essere utilizzate solo quando esiste una differenza tra l'ordine del set di caratteri e l'ordine dei caratteri lessicografico nella tabella codici corrente, questa differenza è particolarmente interessante per il confronto di stringhe.  
  
 `_stricmp` si distingue da `_stricoll` in quanto il confronto `_stricmp` è influenzato da `LC_CTYPE`, mentre il confronto `_stricoll` si basa sulle categorie `LC_CTYPE` e `LC_COLLATE` delle impostazioni locali.  Per ulteriori informazioni sulla categoria `LC_COLLATE`, vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md) e [Categorie locali](../../c-runtime-library/locale-categories.md).  Le versioni di queste funzioni senza il suffisso `_l` utilizzano le impostazioni locali correnti; le versioni con il suffisso `_l` sono identiche salvo ad eccezione del fatto che utilizzano le impostazioni locali passate.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Tutte queste funzioni convalidano i relativi parametri.  Se `string1` o `string2` sono puntatori `NULL`, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni restituiscono `_NLSCMPERROR` e impostano `errno` su `EINVAL`.  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcsicoll`|`_stricoll`|`_mbsicoll`|`_wcsicoll`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_stricoll`, `_stricoll_l`|\<string.h\>|  
|`_wcsicoll`, `_wcsicoll_l`|\<wchar.h\>, \<string.h\>|  
|`_mbsicoll`, `_mbsicoll_l`|\<mbstring.h\>|  
  
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