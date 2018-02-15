---
title: _stricoll, _wcsicoll, _mbsicoll, _stricoll_l, _wcsicoll_l, _mbsicoll_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _mbsicoll_l
- _stricoll_l
- _mbsicoll
- _wcsicoll_l
- _wcsicoll
- _stricoll
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-multibyte-l1-1-0.dll
- api-ms-win-crt-string-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- stricoll
- _stricoll
- _wcsicoll
- mbsicoll_l
- _mbsicoll
- _ftcsicoll
- wcsicoll_l
- _tcsicoll
- mbsicoll
- stricoll_l
dev_langs:
- C++
helpviewer_keywords:
- code pages, using for string comparisons
- _ftcsicoll function
- _mbsicoll_l function
- _mbsicoll function
- mbsicoll function
- stricoll function
- tcsicoll function
- string comparison [C++], culture-specific
- _tcsicoll function
- _stricoll function
- _stricoll_l function
- _wcsicoll function
- mbsicoll_l function
- stricoll_l function
- strings [C++], comparing by code page
- ftcsicoll function
ms.assetid: 8ec93016-5a49-49d2-930f-721566661d82
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 56f045d7f06740287f7e7e59efcf89db3fefeb59
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="stricoll-wcsicoll-mbsicoll-stricolll-wcsicolll-mbsicolll"></a>_stricoll, _wcsicoll, _mbsicoll, _stricoll_l, _wcsicoll_l, _mbsicoll_l
Le stringhe vengono confrontate usando informazioni specifiche delle impostazioni locali.  
  
> [!IMPORTANT]
>  `_mbsicoll` e `_mbsicoll_l` non possono essere usati nelle applicazioni eseguite in Windows Runtime. Per ulteriori informazioni, vedere [funzioni CRT non supportate nelle App Universal Windows Platform](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 `string1, string2`  
 Stringhe che terminano con Null da confrontare.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 Ognuna di queste funzioni restituisce un valore che indica la relazione di `string1` a `string2`, come indicato di seguito.  
  
|Valore restituito|Relazione di stringa1 e stringa2|  
|------------------|----------------------------------------|  
|< 0|`string1` minore di `string2`|  
|0|`string1` uguale a `string2`|  
|> 0|`string1` maggiore di `string2`|  
|`_NLSCMPERROR`|Si è verificato un errore.|  
  
 Ognuna di queste funzioni restituisce `_NLSCMPERROR`. Per usare `_NLSCMPERROR`, includere `STRING.H` o `MBSTRING.H`. `_wcsicoll` può non riuscire se `string1` o `string2` contiene codici di caratteri wide che sono al di fuori del dominio della sequenza di ordinamento. Quando si verifica un errore, `_wcsicoll` può impostare `errno` su `EINVAL`. Per controllare se è presente un errore in una chiamata a `_wcsicoll`, impostare `errno` su 0 e quindi controllare `errno` dopo aver chiamato `_wcsicoll`.  
  
## <a name="remarks"></a>Note  
 Ognuna di queste funzioni esegue un confronto senza distinzione tra maiuscole e minuscole di `string1` e `string2` in base alla tabella codici in uso. Usare queste funzioni solo quando esiste una differenza nella tabella codici corrente tra l'ordine del set di caratteri e l'ordine lessicografico dei caratteri e quando questa differenza è di particolare interesse per il confronto fra stringhe.  
  
 `_stricmp` è diversa da `_stricoll` in quanto il confronto `_stricmp` viene eseguito in base a `LC_CTYPE`, mentre il confronto `_stricoll` è basato sulle categorie `LC_CTYPE` e `LC_COLLATE` delle impostazioni locali. Per altre informazioni sulla categoria `LC_COLLATE`, vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md) e [Categorie di impostazioni locali](../../c-runtime-library/locale-categories.md). Le versioni di queste funzioni senza il suffisso `_l` usano le impostazioni locali correnti. Le versioni con il suffisso `_l` sono identiche ma usano le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).  
  
 Tutte queste funzioni convalidano i relativi parametri. Se `string1` o `string2` sono puntatori `NULL`, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono `_NLSCMPERROR` e impostano `errno` su `EINVAL`.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcsicoll`|`_stricoll`|`_mbsicoll`|`_wcsicoll`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_stricoll`, `_stricoll_l`|\<string.h>|  
|`_wcsicoll`, `_wcsicoll_l`|\<wchar.h>, \<string.h>|  
|`_mbsicoll`, `_mbsicoll_l`|\<mbstring.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Locale](../../c-runtime-library/locale.md)  (Impostazioni locali)  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)   
 [localeconv](../../c-runtime-library/reference/localeconv.md)   
 [_mbsnbcoll, _mbsnbcoll_l, _mbsnbicoll, _mbsnbicoll_l](../../c-runtime-library/reference/mbsnbcoll-mbsnbcoll-l-mbsnbicoll-mbsnbicoll-l.md)   
 [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [strcmp, wcscmp, _mbscmp](../../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)   
 [_stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l](../../c-runtime-library/reference/stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md)   
 [strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)   
 [_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](../../c-runtime-library/reference/strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)   
 [strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](../../c-runtime-library/reference/strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)