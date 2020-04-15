---
title: wctomb_s, _wctomb_s_l
ms.date: 4/2/2020
api_name:
- _wctomb_s_l
- wctomb_s
- _o__wctomb_s_l
- _o_wctomb_s
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
- api-ms-win-crt-convert-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- wctomb_s
- _wctomb_s_l
helpviewer_keywords:
- wctomb_s function
- wctomb_s_l function
- string conversion, wide characters
- wide characters, converting
- _wctomb_s_l function
- characters, converting
- string conversion, multibyte character strings
ms.assetid: 7e94a888-deed-4dbd-b5e9-d4a0455538b8
ms.openlocfilehash: 1ddc9a991f28c4a2ea491f3ddd04d78f6345e255
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367243"
---
# <a name="wctomb_s-_wctomb_s_l"></a>wctomb_s, _wctomb_s_l

Converte un carattere wide nel carattere multibyte corrispondente. Questa è una versione di [wctomb, _wctomb_l](wctomb-wctomb-l.md) che include miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t wctomb_s(
   int *pRetValue,
   char *mbchar,
   size_t sizeInBytes,
   wchar_t wchar
);
errno_t _wctomb_s_l(
   int *pRetValue,
   char *mbchar,
   size_t sizeInBytes,
   wchar_t wchar,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*pRetValore*<br/>
Numero di byte o un codice che indica il risultato.

*mbchar (in questo mbchar)*<br/>
Indirizzo di un carattere multibyte.

*sizeInBytes*<br/>
Dimensione del buffer *mbchar*.

*Wchar*<br/>
Carattere wide.

*Impostazioni internazionali*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo, un codice di errore in caso di esito negativo.

Condizioni di errore

|*mbchar (in questo mbchar)*|*sizeInBytes*|Valore restituito|*pRetValore*|
|--------------|-------------------|------------------|-----------------|
|**Null**|>0|**Einval**|non modificato|
|any|>**INT_MAX**|**Einval**|non modificato|
|any|troppo piccolo|**Einval**|non modificato|

Se si verifica una delle condizioni di errore precedenti, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **wctomb** restituisce **EINVAL** e imposta **errno** su **EINVAL**.

## <a name="remarks"></a>Osservazioni

La funzione **wctomb_s** converte il relativo argomento *wchar* nel carattere multibyte corrispondente e archivia il risultato in *formato mbchar*. È possibile chiamare la funzione da qualsiasi punto in un qualsiasi programma.

Se **wctomb_s** converte il carattere wide in un carattere multibyte, inserisce il numero di byte (che non è mai maggiore di **MB_CUR_MAX**) nel carattere integer a cui punta *pRetValue*. Se *wchar* è il carattere null carattere wide (L'0'), **wctomb_s** riempie *pRetValue* con 1. Se il puntatore di destinazione *mbchar* è **NULL**, **wctomb_s** inserisce 0 in *pRetValue*. Se la conversione non è possibile nelle impostazioni locali correnti, **wctomb_s** inserisce -1 in *pRetValue*.

**wctomb_s** utilizza le impostazioni locali correnti per le informazioni dipendenti dalle impostazioni locali. **_wctomb_s_l** è identica, ad eccezione del fatto che utilizza invece le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**wctomb_s**|\<stdlib.h>|
|**_wctomb_s_l**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Questo programma illustra il comportamento della funzione **wctomb.**

```cpp
// crt_wctomb_s.cpp
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
    int i;
    wchar_t wc = L'a';
    char *pmb = (char *)malloc( MB_CUR_MAX );

    printf_s( "Convert a wide character:\n" );
    wctomb_s( &i, pmb, MB_CUR_MAX, wc );
    printf_s( "   Characters converted: %u\n", i );
    printf_s( "   Multibyte character: %.1s\n\n", pmb );
}
```

```Output
Convert a wide character:
   Characters converted: 1
   Multibyte character: a
```

## <a name="see-also"></a>Vedere anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni internazionali](../../c-runtime-library/locale.md)<br/>
[_mbclen, mblen, _mblen_l](mbclen-mblen-mblen-l.md)<br/>
[mbstowcs, _mbstowcs_l](mbstowcs-mbstowcs-l.md)<br/>
[mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md)<br/>
[wcstombs, _wcstombs_l](wcstombs-wcstombs-l.md)<br/>
[WideCharToMultiByte](/windows/win32/api/stringapiset/nf-stringapiset-widechartomultibyte)<br/>
