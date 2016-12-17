---
title: "strcoll, wcscoll, _mbscoll, _strcoll_l, _wcscoll_l, _mbscoll_l | Microsoft Docs"
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
  - "wcscoll"
  - "_mbscoll"
  - "_mbscoll_l"
  - "strcoll"
  - "_strcoll_l"
  - "_wcscoll_l"
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
  - "wcscoll"
  - "_mbscoll"
  - "_tcscoll"
  - "_ftcscoll"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "tabelle codici, uso per confronti tra stringhe"
  - "mbscoll (funzione)"
  - "wcscoll_l (funzione)"
  - "ftcscoll (funzione)"
  - "wcscoll (funzione)"
  - "_strcoll_l (funzione)"
  - "tcscoll (funzione)"
  - "_ftcscoll (funzione)"
  - "_tcscoll (funzione)"
  - "_wcscoll_l (funzione)"
  - "_mbscoll (funzione)"
  - "strcoll_l (funzione)"
  - "strcoll (funzioni)"
  - "stringhe [C++], confronto per tabella codici"
ms.assetid: 900a7540-c7ec-4c2f-b292-7a85f63e3fe8
caps.latest.revision: 20
caps.handback.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# strcoll, wcscoll, _mbscoll, _strcoll_l, _wcscoll_l, _mbscoll_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Confronto di stringhe utilizzando le impostazioni locali correnti oppure specificando una categoria LC\_COLLATE di conversione dello stato.  
  
> [!IMPORTANT]
>  `_mbscoll` e `_mbscoll_l` non possono essere utilizzate nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
int strcoll(  
   const char *string1,  
   const char *string2   
);  
int wcscoll(  
   const wchar_t *string1,  
   const wchar_t *string2   
);  
int _mbscoll(  
   const unsigned char *string1,  
   const unsigned char *string2   
);  
int _strcoll_l(  
   const char *string1,  
   const char *string2,  
   _locale_t locale   
);  
int wcscoll_l(  
   const wchar_t *string1,  
   const wchar_t *string2,  
   _locale_t locale   
);  
int _mbscoll_l(  
   const unsigned char *string1,  
   const unsigned char *string2,  
   _locale_t locale   
);  
```  
  
#### Parametri  
 `string1`, `string2`  
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
  
 Ognuna di queste funzioni restituisce `_NLSCMPERROR` su un errore.  Per utilizzare `_NLSCMPERROR`, includere STRING.H o MBSTRING.H.  `wcscoll` può non riuscire se `string1` o `string2` è NULL oppure contiene codici a caratteri "wide" al di fuori del dominio della sequenza di ordinamento.  Quando si verifica un errore, `wcscoll` può impostare `errno` a `EINVAL`.  Per verificare un errore in una chiamata a `wcscoll`, impostare `errno` a 0 e quindi verificare `errno` dopo aver chiamato `wcscoll`.  
  
## Note  
 Ognuna di queste funzioni esegue un confronto senza distinzione tra maiuscole e minuscole di `string1` e `string2` in base alla tabella dei codici attualmente utilizzata.  Queste funzioni devono essere utilizzate solo quando esiste una differenza nella tabella codici corrente tra l'ordine del set di caratteri e l'ordine dei caratteri lessicografici, questa differenza è particolarmente interessante per il confronto di stringhe.  
  
 Tutte queste funzioni convalidano i relativi parametri.  Se `string1` o `string2` è un puntatore null, o se `count` è maggiore di `INT_MAX`, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni restituiscono `_NLSCMPERROR` e impostano `errno` su `EINVAL`.  
  
 Il confronto tra le due stringhe è un'operazione dipendente dalle impostazioni locali poiché ogni impostazione locale ha regole differenti per ordinare i caratteri.  Le versioni di queste funzioni senza il suffisso `_l` utilizzano le impostazioni locali della thread corrente per questo comportamento dipendente dalle impostazioni locali; le versioni con il suffisso `_l` sono identiche alla corrispondenti funzioni senza il suffisso, con la differenza che utilizzano le impostazioni locali passate come parametro anziché le impostazioni locali correnti.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcscoll`|`strcoll`|`_mbscoll`|`wcscoll`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`strcoll`|\<string.h\>|  
|`wcscoll`|\<wchar.h\>, \<string.h\>|  
|`_mbscoll`, `_mbscoll_l`|\<mbstring.h\>|  
|`_strcoll_l`|\<string.h\>|  
|`_wcscoll_l`|\<wchar.h\>, \<string.h\>|  
  
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