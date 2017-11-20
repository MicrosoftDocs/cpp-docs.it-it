---
title: strcoll, wcscoll, _mbscoll, _strcoll_l, _wcscoll_l, _mbscoll_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- wcscoll
- _mbscoll
- _mbscoll_l
- strcoll
- _strcoll_l
- _wcscoll_l
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
- wcscoll
- _mbscoll
- _tcscoll
- _ftcscoll
dev_langs: C++
helpviewer_keywords:
- code pages, using for string comparisons
- mbscoll function
- wcscoll_l function
- ftcscoll function
- wcscoll function
- _strcoll_l function
- tcscoll function
- _ftcscoll function
- _tcscoll function
- _wcscoll_l function
- _mbscoll function
- strcoll_l function
- strcoll functions
- strings [C++], comparing by code page
ms.assetid: 900a7540-c7ec-4c2f-b292-7a85f63e3fe8
caps.latest.revision: "20"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: ecb29e00a4baa5bd1ad36fe47bade09a8cc7f56f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="strcoll-wcscoll-mbscoll-strcolll-wcscolll-mbscolll"></a>strcoll, wcscoll, _mbscoll, _strcoll_l, _wcscoll_l, _mbscoll_l
Esegue il confronto di stringhe usando le impostazioni locali correnti o una categoria di stato di conversione LC_COLLATE specificata.  
  
> [!IMPORTANT]
>  `_mbscoll` e `_mbscoll_l` non possono essere usati nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 `string1`, `string2`  
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
  
 Ognuna di queste funzioni restituisce `_NLSCMPERROR` in caso di errore. Per usare `_NLSCMPERROR`, includere STRING.H o MBSTRING.H. `wcscoll` può non riuscire se `string1` o `string2` è NULL contiene codici di caratteri wide che sono al di fuori del dominio della sequenza di ordinamento. Quando si verifica un errore, `wcscoll` può impostare `errno` su `EINVAL`. Per controllare se è presente un errore in una chiamata a `wcscoll`, impostare `errno` su 0 e quindi controllare `errno` dopo aver chiamato `wcscoll`.  
  
## <a name="remarks"></a>Note  
 Ognuna di queste funzioni esegue un confronto con distinzione tra maiuscole e minuscole di `string1` e `string2` in base alla tabella codici in uso. Usare queste funzioni solo quando esiste una differenza nella tabella codici corrente tra l'ordine del set di caratteri e l'ordine lessicografico dei caratteri e quando questa differenza è di particolare interesse per il confronto fra stringhe.  
  
 Tutte queste funzioni convalidano i relativi parametri. Se `string1` o `string2` è un puntatore Null o se `count` è maggiore di `INT_MAX`, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono `_NLSCMPERROR` e impostano `errno` su `EINVAL`.  
  
 Il confronto delle due stringhe è un'operazione che dipende dalle impostazioni locali, dato che ogni set di impostazioni locali prevede regole diverse per l'ordinamento dei caratteri. Le versioni di queste funzioni senza il suffisso `_l` usano le impostazioni locali del thread corrente per questo comportamento dipendente dalle impostazioni locali. Le versioni con il suffisso `_l` sono identiche ma usano le impostazioni locali passate in un parametro invece delle impostazioni locali correnti. Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcscoll`|`strcoll`|`_mbscoll`|`wcscoll`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`strcoll`|\<string.h>|  
|`wcscoll`|\<wchar.h>, \<string.h>|  
|`_mbscoll`, `_mbscoll_l`|\<mbstring.h>|  
|`_strcoll_l`|\<string.h>|  
|`_wcscoll_l`|\<wchar.h>, \<string.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazioni locali](../../c-runtime-library/locale.md)   
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