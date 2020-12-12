---
description: 'Altre informazioni su: _strupr_s, _strupr_s_l, _mbsupr_s, _mbsupr_s_l, _wcsupr_s, _wcsupr_s_l'
title: _strupr_s, _strupr_s_l, _mbsupr_s, _mbsupr_s_l, _wcsupr_s, _wcsupr_s_l
ms.date: 4/2/2020
api_name:
- _strupr_s
- _strupr_s_l
- _mbsupr_s
- _wcsupr_s_l
- _mbsupr_s_l
- _wcsupr_s
- _o__mbsupr_s
- _o__mbsupr_s_l
- _o__strupr_s
- _o__strupr_s_l
- _o__wcsupr_s
- _o__wcsupr_s_l
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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- strupr_s
- mbsupr_s
- wcsupr_s
- _mbsupr_s_l
- mbsupr_s_l
- wcsupr_s_l
- _wcsupr_s
- _tcsupr_s_l
- _mbsupr_s
- _tcsupr_s
- strupr_s_l
- _wcsupr_s_l
- _strupr_s
- _strupr_s_l
helpviewer_keywords:
- mbsupr_s_l function
- strupr_s_l function
- _wcsupr_s_l function
- _tcsupr_s_l function
- mbsupr_s function
- _wcsupr_s function
- uppercase, converting strings to
- tcsupr_s function
- string conversion [C++], case
- strupr_s function
- wcsupr_s_l function
- _mbsupr_s function
- _mbsupr_s_l function
- _strupr_s_l function
- tcsupr_s_l function
- strings [C++], case
- converting case, CRT functions
- _tcsupr_s function
- strings [C++], converting case
- _strupr_s function
- wcsupr_s function
ms.assetid: 82d3a273-9f6f-4a26-9560-919d891e4581
ms.openlocfilehash: ce4c55aac91f9537febde1bfb2eb196cc0dba501
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97117237"
---
# <a name="_strupr_s-_strupr_s_l-_mbsupr_s-_mbsupr_s_l-_wcsupr_s-_wcsupr_s_l"></a>_strupr_s, _strupr_s_l, _mbsupr_s, _mbsupr_s_l, _wcsupr_s, _wcsupr_s_l

Converte una stringa in maiuscolo, usando le impostazioni locali correnti o le impostazioni locali specificate passate. Queste versioni di [_strupr, _strupr_l, _mbsupr, _mbsupr_l, _wcsupr_l, _wcsupr](strupr-strupr-l-mbsupr-mbsupr-l-wcsupr-l-wcsupr.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

> [!IMPORTANT]
> non è possibile usare **_mbsupr_s** e **_mbsupr_s_l** nelle applicazioni eseguite nel Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
errno_t _strupr_s(
   char *str,
   size_t numberOfElements
);
errno_t _wcsupr_s(
   wchar_t * str,
   size_t numberOfElements
);
errno_t _strupr_s_l(
   char * str,
   size_t numberOfElements,
   _locale_t locale
);
errno_t _wcsupr_s_l(
   wchar_t * str,
   size_t numberOfElements,
   _locale_t locale
);
errno_t _mbsupr_s(
   unsigned char *str,
   size_t numberOfElements
);
errno_t _mbsupr_s_l(
   unsigned char *str,
   size_t numberOfElements,
   _locale_t locale
);
template <size_t size>
errno_t _strupr_s(
   char (&str)[size]
); // C++ only
template <size_t size>
errno_t _wcsupr_s(
   wchar_t (&str)[size]
); // C++ only
template <size_t size>
errno_t _strupr_s_l(
   char (&str)[size],
   _locale_t locale
); // C++ only
template <size_t size>
errno_t _wcsupr_s_l(
   wchar_t (&str)[size],
   _locale_t locale
); // C++ only
template <size_t size>
errno_t _mbsupr_s(
   unsigned char (&str)[size]
); // C++ only
template <size_t size>
errno_t _mbsupr_s_l(
   unsigned char (&str)[size],
   _locale_t locale
); // C++ only
```

### <a name="parameters"></a>Parametri

*str*<br/>
Stringa da convertire in lettere maiuscole.

*numberOfElements*<br/>
Dimensioni del buffer.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo. Un codice di errore diverso da zero in caso di esito negativo.

Queste funzioni convalidano i relativi parametri. Se *Str* è un puntatore **null** , viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md) . Se l'esecuzione può continuare, le funzioni restituiscono **EINVAL** e impostano **errno** su **EINVAL**. Se *NumberOfElements* è minore della lunghezza della stringa, le funzioni restituiscono **ERANGE** e impostano **errno** su **ERANGE**.

## <a name="remarks"></a>Commenti

La funzione **_strupr_s** converte, sul posto, ogni lettera minuscola in *Str* in maiuscolo. **_wcsupr_s** è la versione a caratteri wide di **_strupr_s**. **_mbsupr_s** è la versione a caratteri multibyte di **_strupr_s**.

La conversione è determinata dall'impostazione della categoria **LC_CTYPE** delle impostazioni locali. Gli altri caratteri non sono interessati. Per ulteriori informazioni su **LC_CTYPE**, vedere [setlocale](setlocale-wsetlocale.md). Le versioni di queste funzioni senza il suffisso **_L** usano le impostazioni locali correnti; le visioni con il suffisso **_L** sono identiche, ad eccezione del fatto che usano le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

Le versioni della libreria di debug di queste funzioni riempiono innanzitutto il buffer con 0xFE. Per disabilitare questo comportamento, usare [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcsupr_s**|**_strupr_s**|**_mbsupr_s**|**_wcsupr_s**|
|**_tcsupr_s_l**|**_strupr_s_l**|**_mbsupr_s_l**|**_wcsupr_s_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_strupr_s**, **_strupr_s_l**|\<string.h>|
|**_wcsupr_s**, **_wcsupr_s_l**, **_mbsupr_s**, **_mbsupr_s_l**|\<string.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [_strlwr_s, _strlwr_s_l, _mbslwr_s, _mbslwr_s_l, _wcslwr_s, _wcslwr_s_l](strlwr-s-strlwr-s-l-mbslwr-s-mbslwr-s-l-wcslwr-s-wcslwr-s-l.md).

## <a name="see-also"></a>Vedi anche

[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione delle sequenze di Multibyte-Character](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[Manipolazione di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[_strlwr_s, _strlwr_s_l, _mbslwr_s, _mbslwr_s_l, _wcslwr_s, _wcslwr_s_l](strlwr-s-strlwr-s-l-mbslwr-s-mbslwr-s-l-wcslwr-s-wcslwr-s-l.md)<br/>
