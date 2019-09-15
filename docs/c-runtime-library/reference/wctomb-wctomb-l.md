---
title: wctomb, _wctomb_l
ms.date: 11/04/2016
api_name:
- _wctomb_l
- wctomb
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
- ntoskrnl.exe
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- wctomb
helpviewer_keywords:
- string conversion, wide characters
- wide characters, converting
- _wctomb_l function
- wctomb function
- wctomb_l function
- characters, converting
- string conversion, multibyte character strings
ms.assetid: 4a543f0e-5516-4d81-8ff2-3c5206f02ed5
ms.openlocfilehash: 195105618c75bd2a3a493f169fca4c2d3d4ebd62
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70944995"
---
# <a name="wctomb-_wctomb_l"></a>wctomb, _wctomb_l

Converte un carattere wide nel carattere multibyte corrispondente. Sono disponibili versioni più sicure di queste funzioni. Vedere [wctomb_s, _wctomb_s_l](wctomb-s-wctomb-s-l.md).

## <a name="syntax"></a>Sintassi

```C
int wctomb(
   char *mbchar,
   wchar_t wchar
);
int _wctomb_l(
   char *mbchar,
   wchar_t wchar,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*mbchar*<br/>
Indirizzo di un carattere multibyte.

*wchar*<br/>
Carattere wide.

## <a name="return-value"></a>Valore restituito

Se **wctomb** converte il carattere wide in un carattere multibyte, restituisce il numero di byte (che non è mai maggiore di **MB_CUR_MAX**) nel carattere wide. Se *WCHAR* è il carattere null Wide (L'\ 0'), **wctomb** restituisce 1. Se il puntatore di destinazione *mbchar* è **null**, **wctomb** restituisce 0. Se la conversione non è possibile nelle impostazioni locali correnti, **wctomb** restituisce-1 e **errno** viene impostato su **EILSEQ**.

## <a name="remarks"></a>Note

La funzione **wctomb** converte il relativo argomento *WCHAR* nel carattere multibyte corrispondente e archivia il risultato in *mbchar*. È possibile chiamare la funzione da qualsiasi punto in un qualsiasi programma. **wctomb** usa le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali; **_wctomb_l** è identico a **wctomb** con la differenza che usa le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

**wctomb** convalida i relativi parametri. Se *mbchar* è **null**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** viene impostato su **EINVAL** e la funzione restituisce-1.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**wctomb**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Questo programma illustra il comportamento della funzione wctomb.

```cpp
// crt_wctomb.cpp
// compile with: /W3
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
   int i;
   wchar_t wc = L'a';
   char *pmb = (char *)malloc( MB_CUR_MAX );

   printf( "Convert a wide character:\n" );
   i = wctomb( pmb, wc ); // C4996
   // Note: wctomb is deprecated; consider using wctomb_s
   printf( "   Characters converted: %u\n", i );
   printf( "   Multibyte character: %.1s\n\n", pmb );
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
[WideCharToMultiByte](/windows/win32/api/stringapiset/nf-stringapiset-widechartomultibyte)<br/>
