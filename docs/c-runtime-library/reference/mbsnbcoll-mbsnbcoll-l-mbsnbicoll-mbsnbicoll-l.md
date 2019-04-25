---
title: _mbsnbcoll, _mbsnbcoll_l, _mbsnbicoll, _mbsnbicoll_l
ms.date: 11/04/2016
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
ms.openlocfilehash: c18faa3c93969a683b3ee3ef58dd02e1c1ae61f4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62156720"
---
# <a name="mbsnbcoll-mbsnbcolll-mbsnbicoll-mbsnbicolll"></a>_mbsnbcoll, _mbsnbcoll_l, _mbsnbicoll, _mbsnbicoll_l

Confronta *n* byte di due stringhe di caratteri multibyte usando informazioni della tabella codici multibyte.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
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

### <a name="parameters"></a>Parametri

*string1*, *string2*<br/>
Stringhe da confrontare.

*count*<br/>
Numero di byte da confrontare.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Il valore restituito indica la relazione delle sottostringhe di *string1* e *string2*.

|Valore restituito|Descrizione|
|------------------|-----------------|
|< 0|*String1* sottostringa minore *string2* sottostringa.|
|0|*String1* identica alla sottostringa *string2* sottostringa.|
|> 0|*String1* sottostringa maggiore *string2* sottostringa.|

Se *string1* oppure *string2* viene **NULL** oppure *conteggio* è maggiore di **INT_MAX**, non valido viene richiamato il gestore di parametro, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono **_NLSCMPERROR** e impostare **errno** al **EINVAL**. Per utilizzare **_NLSCMPERROR**, includere String. h o Mbstring. h.

## <a name="remarks"></a>Note

Ognuna di queste funzioni collaziona, al massimo i primi *conteggio* byte *string1* e *string2* e restituisce un valore che indica la relazione tra l'oggetto risultante le sottostringhe della *string1* e *string2*. Se il byte finale nella sottostringa di lunghezza *string1* oppure *string2* è un byte iniziale, non è incluso nel confronto; queste funzioni confrontano solo i caratteri completati nelle sottostringhe. **mbsnbicoll** è una versione di maiuscole e minuscole **mbsnbcoll**. Ad esempio [mbsnbcmp](mbsnbcmp-mbsnbcmp-l.md) e [mbsnbicmp](mbsnbicmp-mbsnbicmp-l.md), **mbsnbcoll** e **mbsnbicoll** collate le due stringhe di caratteri multibyte in base al ordine lessicografico specificato dalla [codici](../../c-runtime-library/code-pages.md) attualmente in uso.

Per alcune tabelle codici e i set di caratteri corrispondenti, l'ordine dei caratteri nel set di caratteri può differire dall'ordine lessicografico dei caratteri. Ciò non è vero nelle impostazioni locali "C". L'ordine dei caratteri nel set di caratteri ASCII è lo stesso dell'ordine lessicografico dei caratteri. In alcune tabelle codici europee, tuttavia, il carattere "a" (valore 0x61) precede il carattere "ä" (valore 0xE4) nel set di caratteri, ma il carattere "ä" precede lessicograficamente il carattere "a". Per eseguire un confronto lessicografico delle stringhe di byte in questo caso, usare **mbsnbcoll** invece **mbsnbcmp**; per controllare solo per l'uguaglianza di stringhe, usare **mbsnbcmp**.

Poiché il **coll** funzioni collaziona stringhe a livello lessicografico per il confronto, mentre il **cmp** funzioni testano semplicemente l'uguaglianza delle stringhe, il **coll** funzioni sono molto più lento rispetto al relativo **cmp** versioni. Pertanto, il **coll** funzioni devono essere utilizzate solo quando è presente una differenza nella tabella codici corrente tra l'ordine del set di caratteri e l'ordine lessicografico dei caratteri e questa differenza è di particolare interesse per il confronto.

La configurazione dell'impostazione della categoria **LC_CTYPE** delle impostazioni locali influisce sul valore di output. Per altre informazioni, vedere [setlocale](setlocale-wsetlocale.md). Le versioni di queste funzioni senza il suffisso **_l** usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. Le versioni con il suffisso **_l** sono identiche, ma usano il parametro passato alle impostazioni locali. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tcsncoll**|[_strncoll](strncoll-wcsncoll-mbsncoll-strncoll-l-wcsncoll-l-mbsncoll-l.md)|**_mbsnbcoll**|[_wcsncoll](strncoll-wcsncoll-mbsncoll-strncoll-l-wcsncoll-l-mbsncoll-l.md)|
|**_tcsncoll_l**|[_strncoll, _wcsncoll, _mbsncoll, _strncoll_l, _wcsncoll_l, _mbsncoll_l](strncoll-wcsncoll-mbsncoll-strncoll-l-wcsncoll-l-mbsncoll-l.md)|**_mbsnbcoll_l**|[_wcsncoll_l](strncoll-wcsncoll-mbsncoll-strncoll-l-wcsncoll-l-mbsncoll-l.md)|
|**_tcsnicoll**|[_strnicoll](strnicoll-wcsnicoll-mbsnicoll-strnicoll-l-wcsnicoll-l-mbsnicoll-l.md)|**_mbsnbicoll**|[_wcsnicoll](strnicoll-wcsnicoll-mbsnicoll-strnicoll-l-wcsnicoll-l-mbsnicoll-l.md)|
|**_tcsnicoll_l**|[_strnicoll_l](strnicoll-wcsnicoll-mbsnicoll-strnicoll-l-wcsnicoll-l-mbsnicoll-l.md)|**_mbsnbicoll_l**|[_wcsnicoll_l](strnicoll-wcsnicoll-mbsnicoll-strnicoll-l-wcsnicoll-l-mbsnicoll-l.md)|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_mbsnbcoll**|\<mbstring.h>|
|**_mbsnbcoll_l**|\<mbstring.h>|
|**_mbsnbicoll**|\<mbstring.h>|
|**_mbsnbicoll_l**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[_mbsnbcat, _mbsnbcat_l](mbsnbcat-mbsnbcat-l.md)<br/>
[_mbsnbcmp, _mbsnbcmp_l](mbsnbcmp-mbsnbcmp-l.md)<br/>
[_mbsnbicmp, _mbsnbicmp_l](mbsnbicmp-mbsnbicmp-l.md)<br/>
[Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)<br/>
[strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)<br/>
[_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)<br/>
