---
title: wctob
ms.date: 11/04/2016
apiname:
- wctob
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
- wctob
helpviewer_keywords:
- wide characters, converting
- wctob function
- characters, converting
ms.assetid: 46aec98b-c2f2-4e9d-9d89-7db99ba8a9a6
ms.openlocfilehash: 9c977bc204f4c9428a4aae09300269b1ed82d53e
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69498959"
---
# <a name="wctob"></a>wctob

Determina se un carattere wide corrisponde a un carattere multibyte e restituisce la sua rappresentazione in caratteri multibyte.

## <a name="syntax"></a>Sintassi

```C
int wctob(
   wint_t wchar
);
```

### <a name="parameters"></a>Parametri

*wchar*<br/>
Valore da convertire.

## <a name="return-value"></a>Valore restituito

Se **wctob** converte correttamente un carattere wide, restituisce la rappresentazione in caratteri multibyte solo se il carattere multibyte è lungo esattamente un byte. Se **wctob** rileva un carattere wide, non può essere convertito in un carattere multibyte o il carattere multibyte non è lungo esattamente un byte, restituisce-1.

## <a name="remarks"></a>Note

La funzione **wctob** converte un carattere wide contenuto in *WCHAR* nel carattere multibyte corrispondente passato dal valore restituito **int** , se il carattere multibyte è lungo esattamente un byte.

Se **wctob** ha avuto esito negativo e non è stato trovato alcun carattere multibyte corrispondente, la funzione imposta **errno** su **EILSEQ** e restituisce-1.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**wctob**|\<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Questo programma illustra il comportamento della funzione **wcstombs** .

```C
// crt_wctob.c
#include <stdio.h>
#include <wchar.h>

int main( void )
{
    int     bChar = 0;
    wint_t  wChar = 0;

    // Set the corresponding wide character to exactly one byte.
    wChar = (wint_t)'A';

    bChar = wctob( wChar );
    if (bChar == WEOF)
    {
        printf( "No corresponding multibyte character was found.\n");
    }
    else
    {
        printf( "Determined the corresponding multibyte character to"
                " be \"%c\".\n", bChar);
    }
}
```

```Output
Determined the corresponding multibyte character to be "A".
```

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[_mbclen, mblen, _mblen_l](mbclen-mblen-mblen-l.md)<br/>
[mbstowcs, _mbstowcs_l](mbstowcs-mbstowcs-l.md)<br/>
[mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md)<br/>
[wctomb, _wctomb_l](wctomb-wctomb-l.md)<br/>
[WideCharToMultiByte](/windows/win32/api/stringapiset/nf-stringapiset-widechartomultibyte)<br/>
