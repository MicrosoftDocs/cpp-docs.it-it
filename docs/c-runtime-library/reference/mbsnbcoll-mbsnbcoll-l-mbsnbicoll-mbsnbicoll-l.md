---
title: _mbsnbcoll, _mbsnbcoll_l, _mbsnbicoll, _mbsnbicoll_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _mbsnbicoll_l
- _mbsnbcoll_l
- _mbsnbcoll
- _mbsnbicoll
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
apitype: DLLExport
f1_keywords:
- mbsnbicoll
- mbsnbcoll
- mbsnbicoll_l
- _mbsnbcoll
- _mbsnbicoll
- _ftcsnicoll
- _ftcsncoll
- mbsnbcoll_l
dev_langs:
- C++
helpviewer_keywords:
- _mbsnbcoll_l function
- mbsnbcoll_l function
- _mbsnbcoll function
- _tcsnicoll function
- mbsnbcoll function
- mbsnbicoll_l function
- mbsnbicoll function
- _tcsncoll function
- _mbsnbicoll function
- _mbsnbicoll_l function
- tcsncoll function
- tcsnicoll function
ms.assetid: d139ed63-ccba-4458-baa2-61cbcef03e94
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0e2c83f9c5d6ccc39b9eadda8f561c63ff91117f
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="mbsnbcoll-mbsnbcolll-mbsnbicoll-mbsnbicolll"></a>_mbsnbcoll, _mbsnbcoll_l, _mbsnbicoll, _mbsnbicoll_l
Confronta `n` byte di due stringhe di caratteri multibyte usando le informazioni della tabella codici multibyte.  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per ulteriori informazioni, vedere [funzioni CRT non supportate nelle App Universal Windows Platform](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _mbsnbcoll(  
   const unsigned char *string1,  
   const unsigned char *string2,  
   size_t count   
);  
int _mbsnbcoll_l(  
   const unsigned char *string1,  
   const unsigned char *string2,  
   size_t count,  
   _locale_t locale  
);  
int _mbsnbicoll(  
   const unsigned char *string1,  
   const unsigned char *string2,  
   size_t count   
);  
int _mbsnbicoll_l(  
   const unsigned char *string1,  
   const unsigned char *string2,  
   size_t count,  
   _locale_t locale  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `string1, string2`  
 Stringhe da confrontare.  
  
 `count`  
 Numero di byte da confrontare.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 Il valore restituito indica la relazione delle sottostringhe di `string1` e `string2`.  
  
|Valore restituito|Descrizione|  
|------------------|-----------------|  
|< 0|La sottostringa di `string1` è minore della sottostringa di `string2`.|  
|0|La sottostringa di `string1` è identica alla sottostringa di `string2`.|  
|> 0|La sottostringa di `string1` è maggiore della sottostringa di `string2`.|  
  
 Se `string1` o `string2` è `NULL` oppure `count` è maggiore di `INT_MAX`, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono `_NLSCMPERROR` e impostano `errno` su `EINVAL`. Per usare `_NLSCMPERROR`, includere String.h o Mbstring.h.  
  
## <a name="remarks"></a>Note  
 Ognuna di queste funzioni collaziona, al massimo, i primi `count` byte in `string1` e `string2`, quindi restituisce un valore che indica la relazione tra le sottostringhe risultanti di `string1` e `string2`. Se il byte finale nella sottostringa di `string1` o `string2` è un byte di apertura, non viene incluso nel confronto. Queste funzioni confrontano solo i caratteri completati nelle sottostringhe. `_mbsnbicoll` è una versione di `_mbsnbcoll` che non fa distinzione tra maiuscole e minuscole. Come `_mbsnbcmp` e `_mbsnbicmp`, `_mbsnbcoll` e `_mbsnbicoll` collazionano le due stringhe di caratteri multibyte in base all'ordine lessicografico specificato dalla [tabella codici](../../c-runtime-library/code-pages.md) multibyte in uso.  
  
 Per alcune tabelle codici e i set di caratteri corrispondenti, l'ordine dei caratteri nel set di caratteri può differire dall'ordine lessicografico dei caratteri. Ciò non è vero nelle impostazioni locali "C". L'ordine dei caratteri nel set di caratteri ASCII è lo stesso dell'ordine lessicografico dei caratteri. In alcune tabelle codici europee, tuttavia, il carattere "a" (valore 0x61) precede il carattere "ä" (valore 0xE4) nel set di caratteri, ma il carattere "ä" precede lessicograficamente il carattere "a". Per eseguire un confronto lessicografico delle stringhe in base ai byte in questo caso, usare `_mbsnbcoll` anziché `_mbsnbcmp`. Per controllare solo l'uguaglianza delle stringhe, usare `_mbsnbcmp`.  
  
 Dato che le funzioni `coll` collazionano le stringhe a livello lessicografico per il confronto, mentre le funzioni `cmp` testano semplicemente le stringhe per verificarne l'uguaglianza, le funzioni `coll` sono molto più lente delle versioni `cmp` corrispondenti. È quindi consigliabile usare le funzioni `coll` solo quando esiste una differenza nella tabella codici corrente tra l'ordine del set di caratteri e l'ordine lessicografico dei caratteri e quando questa differenza è di particolare interesse per il confronto.  
  
 La configurazione dell'impostazione della categoria `LC_CTYPE` delle impostazioni locali influisce sul valore di output. Per altre informazioni, vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md). Le versioni di queste funzioni senza il suffisso `_l` usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. Le versioni con il suffisso `_l` sono identiche ma usano il parametro passato relativo alle impostazioni locali. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tcsncoll`|[_strncoll](../../c-runtime-library/reference/strncoll-wcsncoll-mbsncoll-strncoll-l-wcsncoll-l-mbsncoll-l.md)|`_mbsnbcoll`|[_wcsncoll](../../c-runtime-library/reference/strncoll-wcsncoll-mbsncoll-strncoll-l-wcsncoll-l-mbsncoll-l.md)|  
|`_tcsncoll_l`|[_strncoll, _wcsncoll, _mbsncoll, _strncoll_l, _wcsncoll_l, _mbsncoll_l](../../c-runtime-library/reference/strncoll-wcsncoll-mbsncoll-strncoll-l-wcsncoll-l-mbsncoll-l.md)|`_mbsnbcoll_l`|[_wcsncoll_l](../../c-runtime-library/reference/strncoll-wcsncoll-mbsncoll-strncoll-l-wcsncoll-l-mbsncoll-l.md)|  
|`_tcsnicoll`|[_strnicoll](../../c-runtime-library/reference/strnicoll-wcsnicoll-mbsnicoll-strnicoll-l-wcsnicoll-l-mbsnicoll-l.md)|`_mbsnbicoll`|[_wcsnicoll](../../c-runtime-library/reference/strnicoll-wcsnicoll-mbsnicoll-strnicoll-l-wcsnicoll-l-mbsnicoll-l.md)|  
|`_tcsnicoll_l`|[_strnicoll_l](../../c-runtime-library/reference/strnicoll-wcsnicoll-mbsnicoll-strnicoll-l-wcsnicoll-l-mbsnicoll-l.md)|`_mbsnbicoll_l`|[_wcsnicoll_l](../../c-runtime-library/reference/strnicoll-wcsnicoll-mbsnicoll-strnicoll-l-wcsnicoll-l-mbsnicoll-l.md)|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_mbsnbcoll`|\<mbstring.h>|  
|`_mbsnbcoll_l`|\<mbstring.h>|  
|`_mbsnbicoll`|\<mbstring.h>|  
|`_mbsnbicoll_l`|\<mbstring.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [_mbsnbcat, _mbsnbcat_l](../../c-runtime-library/reference/mbsnbcat-mbsnbcat-l.md)   
 [_mbsnbcmp, _mbsnbcmp_l](../../c-runtime-library/reference/mbsnbcmp-mbsnbcmp-l.md)   
 [_mbsnbicmp, _mbsnbicmp_l](../../c-runtime-library/reference/mbsnbicmp-mbsnbicmp-l.md)   
 [Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)   
 [strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)   
 [_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](../../c-runtime-library/reference/strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)