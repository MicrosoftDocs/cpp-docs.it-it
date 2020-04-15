---
title: _mbsnbcpy_s, _mbsnbcpy_s_l
ms.date: 4/2/2020
api_name:
- _mbsnbcpy_s_l
- _mbsnbcpy_s
- _o__mbsnbcpy_s
- _o__mbsnbcpy_s_l
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
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- mbsnbcpy_s_l
- _mbsnbcpy_s
- mbsnbcpy_s
- _mbsnbcpy_s_l
helpviewer_keywords:
- _mbsnbcpy_s function
- tcsncpy_s function
- mbsnbcpy_s_l function
- _tcsncpy_s_l function
- mbsnbcpy_s function
- tcsncpy_s_l function
- _mbsnbcpy_s_l function
- _tcsncpy_s function
ms.assetid: dfff64ab-fe6f-49c4-99ba-75014e2b0cd6
ms.openlocfilehash: d3c4a07ffb5ed4040a4bb99ee354e01f0d62f42a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81340672"
---
# <a name="_mbsnbcpy_s-_mbsnbcpy_s_l"></a>_mbsnbcpy_s, _mbsnbcpy_s_l

Copia **n** byte di una stringa in una stringa di destinazione. Queste versioni di [_mbsnbcpy, _mbsnbcpy_l](mbsnbcpy-mbsnbcpy-l.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
errno_t _mbsnbcpy_s(
   unsigned char * strDest,
   size_t sizeInBytes,
   const unsigned char * strSource,
   size_t count
);
errno_t _mbsnbcpy_s_l(
   unsigned char * strDest,
   size_t sizeInBytes,
   const unsigned char * strSource,
   size_t count,
   _locale_t locale
);
template <size_t size>
errno_t _mbsnbcpy_s(
   unsigned char (&strDest)[size],
   const unsigned char * strSource,
   size_t count
); // C++ only
template <size_t size>
errno_t _mbsnbcpy_s_l(
   unsigned char (&strDest)[size],
   const unsigned char * strSource,
   size_t count,
   _locale_t locale
); // C++ only
```

### <a name="parameters"></a>Parametri

*strDest*<br/>
Destinazione per la stringa di caratteri da copiare.

*sizeInBytes*<br/>
Dimensioni del buffer di destinazione.

*Strsource*<br/>
Stringa di caratteri da copiare.

*count*<br/>
Numero di byte da copiare.

*Impostazioni internazionali*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

zero se ha esito positivo; **EINVAL** se è stato passato un parametro non valido.

## <a name="remarks"></a>Osservazioni

La funzione **_mbsnbcpy_s** copia i byte *di count* da *strSource* a *strDest*. Se *count* supera la dimensione di *strDest*, una delle stringhe di input è un puntatore null o *sizeInBytes* o *count* è 0, la funzione richiama il gestore di parametri non validi come descritto in Convalida [dei parametri](../../c-runtime-library/parameter-validation.md) . Se l'esecuzione può continuare, la funzione restituisce **EINVAL**. Se le stringhe di origine e di destinazione si sovrappongono, il comportamento di **_mbsnbcpy_s** non è definito.

La configurazione dell'impostazione della categoria **LC_CTYPE** delle impostazioni locali influisce sul valore di output. Per altre informazioni, vedere [setlocale](setlocale-wsetlocale.md). Le versioni di queste funzioni senza il suffisso **_l** usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. Le versioni con il suffisso **_l** sono identiche, ma usano il parametro passato alle impostazioni locali. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

> [!NOTE]
> A differenza della versione non sicura di questa funzione, **_mbsnbcpy_s** non esegue alcuna spaziatura interna null e sempre null termina la stringa.

In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

Le versioni della libreria di debug di queste funzioni riempiono innanzitutto il buffer con 0xFE. Per disabilitare questo comportamento, usare [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tcsncpy_s**|**_strncpy_s**|**_mbsnbcpy_s**|**_wcsncpy_s**|
|**_tcsncpy_s_l**|**_strncpy_s_l**|**_mbsnbcpy_s_l**|**_wcsncpy_s_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_mbsnbcpy_s**|\<mbstring.h>|
|**_mbsnbcpy_s_l**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Manipolazione delle stringheString Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[_mbsnbcat, _mbsnbcat_l](mbsnbcat-mbsnbcat-l.md)<br/>
[_mbsnbcmp, _mbsnbcmp_l](mbsnbcmp-mbsnbcmp-l.md)<br/>
[_strncnt, _wcsncnt, _mbsnbcnt, _mbsnbcnt_l, _mbsnccnt, _mbsnccnt_l](strncnt-wcsncnt-mbsnbcnt-mbsnbcnt-l-mbsnccnt-mbsnccnt-l.md)<br/>
[_mbsnbicmp, _mbsnbicmp_l](mbsnbicmp-mbsnbicmp-l.md)<br/>
[_mbsnbset, _mbsnbset_l](mbsnbset-mbsnbset-l.md)<br/>
[strncpy, _strncpy_l, wcsncpy, _wcsncpy_l, _mbsncpy, _mbsncpy_l](strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)<br/>
