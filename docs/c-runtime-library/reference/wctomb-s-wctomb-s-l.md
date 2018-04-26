---
title: wctomb_s, _wctomb_s_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _wctomb_s_l
- wctomb_s
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
- api-ms-win-crt-convert-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- wctomb_s
- _wctomb_s_l
dev_langs:
- C++
helpviewer_keywords:
- wctomb_s function
- wctomb_s_l function
- string conversion, wide characters
- wide characters, converting
- _wctomb_s_l function
- characters, converting
- string conversion, multibyte character strings
ms.assetid: 7e94a888-deed-4dbd-b5e9-d4a0455538b8
caps.latest.revision: 18
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7812eeb234676b84d9f6e8077c895e958dd45281
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="wctombs-wctombsl"></a>wctomb_s, _wctomb_s_l

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

*pRetValue*<br/>
Numero di byte o un codice che indica il risultato.

*mbchar*<br/>
Indirizzo di un carattere multibyte.

*sizeInBytes*<br/>
Dimensione del buffer *mbchar*.

*wchar*<br/>
Carattere wide.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo, un codice di errore in caso di esito negativo.

Condizioni di errore

|*mbchar*|*sizeInBytes*|Valore restituito|*pRetValue*|
|--------------|-------------------|------------------|-----------------|
|**NULL**|>0|**EINVAL**|non modificato|
|qualsiasi|>**INT_MAX**|**EINVAL**|non modificato|
|qualsiasi|troppo piccolo|**EINVAL**|non modificato|

Se si verifica una delle condizioni di errore precedenti, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **wctomb** restituisce **EINVAL** e imposta **errno** a **EINVAL**.

## <a name="remarks"></a>Note

Il **wctomb_s** funzione converte relativo *wchar* argomento nel carattere multibyte corrispondente e archivia il risultato al *mbchar*. È possibile chiamare la funzione da qualsiasi punto in un qualsiasi programma.

Se **wctomb_s** converte il carattere "wide" a un carattere multibyte, tale client inserisce il numero di byte (che non è mai maggiore **MB_CUR_MAX**) in caratteri "wide" in integer a cui puntato *pRetValue*. Se *wchar* è il carattere null di caratteri wide (L '\0'), **wctomb_s** riempie *pRetValue* con 1. Se l'indicatore di misura di destinazione *mbchar* è NULL, **wctomb_s** inserisce 0 nel *pRetValue*. Se la conversione non è possibile che in impostazioni locali correnti, **wctomb_s** Inserisce -1 in *pRetValue*.

**wctomb_s** Usa le impostazioni locali correnti per le informazioni dipendente dalle impostazioni locali; **wctomb_s_l** è identica ad eccezione del fatto che usa le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**wctomb_s**|\<stdlib.h>|
|**_wctomb_s_l**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Questo programma viene illustrato il comportamento del **wctomb** (funzione).

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

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[_mbclen, mblen, _mblen_l](mbclen-mblen-mblen-l.md)<br/>
[mbstowcs, _mbstowcs_l](mbstowcs-mbstowcs-l.md)<br/>
[mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md)<br/>
[wcstombs, _wcstombs_l](wcstombs-wcstombs-l.md)<br/>
[WideCharToMultiByte](http://msdn.microsoft.com/library/windows/desktop/dd374130)<br/>
