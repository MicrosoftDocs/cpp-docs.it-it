---
title: _strnicoll, _wcsnicoll, _mbsnicoll, _strnicoll_l, _wcsnicoll_l, _mbsnicoll_l
ms.date: 4/2/2020
api_name:
- _mbsnicoll_l
- _mbsnicoll
- _wcsnicoll_l
- _strnicoll
- _strnicoll_l
- _wcsnicoll
- _o__mbsnicoll
- _o__mbsnicoll_l
- _o__strnicoll
- _o__strnicoll_l
- _o__wcsnicoll
- _o__wcsnicoll_l
api_location:
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
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- wcshicoll_l
- _ftcsncicoll
- strnicoll_l
- _wcsnicoll
- mbsnicoll_l
- _strnicoll
- mbsnicoll
- _ftcsnicoll
- wcsnicoll
- _tcsnicoll
- _mbsnicoll
- strinicoll
- _tcsncicoll
helpviewer_keywords:
- code pages, using for string comparisons
- ftcsncicoll function
- mbsnicoll_l function
- _ftcsnicoll function
- mbsnicoll function
- _tcsnicoll function
- _wcsnicoll_l function
- _mbsnicoll function
- tcsncicoll function
- strnicoll function
- _ftcsncicoll function
- wcsnicoll_l function
- _mbsnicoll_l function
- _tcsncicoll function
- strnicoll_l function
- wcsnicoll function
- _strnicoll_l function
- _wcsnicoll function
- ftcsnicoll function
- strings [C++], comparing by code page
- tcsnicoll function
- _strnicoll function
ms.assetid: abf0c569-725b-428d-9ff2-924f430104b4
ms.openlocfilehash: ef609ddecfcdd9834d32cac696f9ba334a60c1a9
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364811"
---
# <a name="_strnicoll-_wcsnicoll-_mbsnicoll-_strnicoll_l-_wcsnicoll_l-_mbsnicoll_l"></a>_strnicoll, _wcsnicoll, _mbsnicoll, _strnicoll_l, _wcsnicoll_l, _mbsnicoll_l

Le stringhe vengono confrontate usando informazioni specifiche delle impostazioni locali.

> [!IMPORTANT]
> **_mbsnicoll** e **_mbsnicoll_l** non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
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

### <a name="parameters"></a>Parametri

*stringa1*, *stringa2*<br/>
Stringhe con terminazione Null da confrontare.

*count*<br/>
Numero di caratteri da confrontare.

*Impostazioni internazionali*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce un valore che indica la relazione delle sottostringhe di *string1* e *string2*, come indicato di seguito.

|Valore restituito|Relazione di stringa1 e stringa2|
|------------------|----------------------------------------|
|< 0|*string1* minore di *string2*|
|0|*stringa1* identica a *stringa2*|
|> 0|*string1* maggiore di *string2*|

Ognuna di queste funzioni restituisce **_NLSCMPERROR**. Per utilizzare **_NLSCMPERROR**, includere entrambi i file STRING. H o MBSTRING. H. **_wcsnicoll** può avere esito negativo se *string1* o *string2* contiene codici a caratteri wide all'esterno del dominio della sequenza di confronto. Quando si verifica un errore, **_wcsnicoll** possibile impostare **errno** su **EINVAL**. Per verificare la presenza di un errore in una chiamata a **_wcsnicoll**, impostare **errno** su 0 e quindi controllare **errno** dopo aver chiamato **_wcsnicoll**.

## <a name="remarks"></a>Osservazioni

Ognuna di queste funzioni esegue un confronto senza distinzione tra maiuscole e minuscole dei primi caratteri di *conteggio* in *string1* e *string2* in base alla tabella codici. Usare queste funzioni solo quando esiste una differenza nella tabella codici tra l'ordine del set di caratteri e l'ordine lessicografico dei caratteri e quando questa differenza è di particolare interesse per il confronto fra stringhe. Le versioni di queste funzioni senza il suffisso **_l** utilizzano le impostazioni locali e la tabella codici correnti. Le versioni con **il** _l suffisso sono identiche, ad eccezione del fatto che usano invece le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Tutte queste funzioni convalidano i relativi parametri. Se *string1* o *string2* è un puntatore null o se count è maggiore di **INT_MAX**, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md) . Se l'esecuzione può continuare, queste funzioni restituiscono **_NLSCMPERROR** e impostano **errno** su **EINVAL**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcsncicoll**|**_strnicoll**|**_mbsnbicoll**|**_wcsnicoll**|
|**_tcsnicoll**|**_strnicoll**|[_mbsnbicoll](mbsnbcoll-mbsnbcoll-l-mbsnbicoll-mbsnbicoll-l.md)|**_wcsnicoll**|
|**_tcsnicoll_l**|**_strnicoll_l**|**_mbsnbicoll_l**|**_wcsnicoll_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_strnicoll**, **_strnicoll_l**|\<string.h>|
|**_wcsnicoll**, **_wcsnicoll_l**|\<wchar.h> o \<string.h>|
|**_mbsnicoll**, **_mbsnicoll_l**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Impostazioni internazionali](../../c-runtime-library/locale.md)<br/>
[Manipolazione delle stringheString Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)<br/>
[localeconv](localeconv.md)<br/>
[_mbsnbcoll, _mbsnbcoll_l, _mbsnbicoll, _mbsnbicoll_l](mbsnbcoll-mbsnbcoll-l-mbsnbicoll-mbsnbicoll-l.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
[strcmp, wcscmp, _mbscmp](strcmp-wcscmp-mbscmp.md)<br/>
[_stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l](stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md)<br/>
[strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)<br/>
[_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)<br/>
[strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)<br/>
