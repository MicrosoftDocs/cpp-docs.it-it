---
title: _strupr, _strupr_l, _mbsupr, _mbsupr_l, _wcsupr_l, _wcsupr
ms.date: 4/2/2020
api_name:
- _mbsupr_l
- _mbsupr
- _strupr_l
- _wcsupr
- _wcsupr_l
- _strupr
- _o__mbsupr
- _o__mbsupr_l
- _o__strupr
- _o__strupr_l
- _o__wcsupr
- _o__wcsupr_l
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
- ntoskrnl.exe
- ucrtbase.dll
- api-ms-win-crt-multibyte-l1-1-0.dll
- api-ms-win-crt-string-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _mbsupr
- _ftcsupr
- mbsupr
- _tcsupr
- strupr_l
- _fstrupr
- _strupr
- mbsupr_l
- _wcsupr
helpviewer_keywords:
- tcsupr_l function
- mbsupr function
- strupr function
- uppercase, converting strings to
- wcsupr function
- _wcsupr function
- string conversion [C++], case
- ftcsupr function
- _ftcsupr function
- _wcsupr_l function
- wcsupr_l function
- strings [C++], case
- tcsupr function
- _tcsupr_l function
- _fstrupr function
- _strupr_l function
- _mbsupr_l function
- converting case, CRT functions
- fstrupr function
- mbsupr_l function
- strupr_l function
- _strupr function
- _mbsupr function
- _tcsupr function
- strings [C++], converting case
ms.assetid: caac8f16-c233-41b6-91ce-575ec7061b77
ms.openlocfilehash: 5127c6f0be6375585be3b321788ba04a91364e57
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81362888"
---
# <a name="_strupr-_strupr_l-_mbsupr-_mbsupr_l-_wcsupr_l-_wcsupr"></a>_strupr, _strupr_l, _mbsupr, _mbsupr_l, _wcsupr_l, _wcsupr

Converte una stringa in lettere maiuscole. Sono disponibili versioni più sicure di queste funzioni. Vedere [_strupr_s, _strupr_s_l, _mbsupr_s, _mbsupr_s_l, _wcsupr_s, _wcsupr_s_l](strupr-s-strupr-s-l-mbsupr-s-mbsupr-s-l-wcsupr-s-wcsupr-s-l.md).

> [!IMPORTANT]
> **_mbsupr** e **_mbsupr_l** non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
char *_strupr(
   char *str
);
wchar_t *_wcsupr(
   wchar_t *str
);
unsigned char *_mbsupr(
   unsigned char *str
);
char *_strupr_l(
   char *str,
   _locale_t locale
);
wchar_t *_wcsupr_l(
   wchar_t *str,
   _locale_t locale
);
unsigned char *_mbsupr_l(
   unsigned char *str,
   _locale_t locale
);
template <size_t size>
char *_strupr(
   char (&str)[size]
); // C++ only
template <size_t size>
wchar_t *_wcsupr(
   wchar_t (&str)[size]
); // C++ only
template <size_t size>
unsigned char *_mbsupr(
   unsigned char (&str)[size]
); // C++ only
template <size_t size>
char *_strupr_l(
   char (&str)[size],
   _locale_t locale
); // C++ only
template <size_t size>
wchar_t *_wcsupr_l(
   wchar_t (&str)[size],
   _locale_t locale
); // C++ only
template <size_t size>
unsigned char *_mbsupr_l(
   unsigned char (&str)[size],
   _locale_t locale
); // C++ only
```

### <a name="parameters"></a>Parametri

*Str*<br/>
Stringa da convertire in lettere maiuscole.

*Impostazioni internazionali*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla stringa modificata. Dato che la modifica viene eseguita sul posto, il puntatore restituito è uguale al puntatore passato come argomento di input. Nessun valore restituito è riservato per indicare un errore.

## <a name="remarks"></a>Osservazioni

La funzione **_strupr** converte, sul posto, ogni lettera minuscola in *str* in maiuscolo. La conversione è determinata dall'impostazione della categoria **LC_CTYPE** delle impostazioni locali. Gli altri caratteri non sono interessati. Per ulteriori informazioni su **LC_CTYPE**, vedere [setlocale](setlocale-wsetlocale.md). Le versioni di queste funzioni senza il suffisso **_l** utilizzano le impostazioni locali correnti; le versioni con il **suffisso _l** sono identiche, ad eccezione del fatto che utilizzano le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

**_wcsupr** e **_mbsupr** sono versioni a caratteri wide e a caratteri multibyte di **_strupr**. L'argomento e il valore restituito di **_wcsupr** sono stringhe di caratteri wide; quelli di **_mbsupr** sono stringhe di caratteri multibyte. A parte ciò, queste tre funzioni si comportano in modo identico.

Se *str* è un puntatore null, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md) . Se l'esecuzione può continuare, queste funzioni restituiscono la stringa originale e impostano **errno** su **EINVAL**.

In C++ queste funzioni presentano overload di modello che richiamano le relative controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcsupr**|**_strupr**|**_mbsupr**|**_wcsupr**|
|**_tcsupr_l**|**_strupr_l**|**_mbsupr_l**|**_wcsupr_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_strupr**, **_strupr_l**|\<string.h>|
|**_wcsupr** **, _wcsupr_l**|\<string.h> o \<wchar.h>|
|**_mbsupr** **, _mbsupr_l**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [_strlwr](strlwr-wcslwr-mbslwr-strlwr-l-wcslwr-l-mbslwr-l.md).

## <a name="see-also"></a>Vedere anche

[Impostazioni internazionali](../../c-runtime-library/locale.md)<br/>
[Manipolazione delle stringheString Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[_strlwr, _wcslwr, _mbslwr, _strlwr_l, _wcslwr_l, _mbslwr_l](strlwr-wcslwr-mbslwr-strlwr-l-wcslwr-l-mbslwr-l.md)<br/>
