---
title: mbstowcs, _mbstowcs_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- mbstowcs
- _mbstowcs_l
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
- mbstowcs
dev_langs:
- C++
helpviewer_keywords:
- _mbstowcs_l function
- mbstowcs_l function
- mbstowcs function
ms.assetid: 96696b27-e068-4eeb-8006-3f7a0546ae6d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d179e53967817bb622074987e3309e159547e819
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43218105"
---
# <a name="mbstowcs-mbstowcsl"></a>mbstowcs, _mbstowcs_l

Converte una sequenza di caratteri multibyte in una sequenza di caratteri wide corrispondente. Sono disponibili versioni più sicure di queste funzioni. Vedere [mbstowcs_s, _mbstowcs_s_l](mbstowcs-s-mbstowcs-s-l.md).

## <a name="syntax"></a>Sintassi

```C
size_t mbstowcs(
   wchar_t *wcstr,
   const char *mbstr,
   size_t count
);
size_t _mbstowcs_l(
   wchar_t *wcstr,
   const char *mbstr,
   size_t count,
   _locale_t locale
);
template <size_t size>
size_t mbstowcs(
   wchar_t (&wcstr)[size],
   const char *mbstr,
   size_t count
); // C++ only
template <size_t size>
size_t _mbstowcs_l(
   wchar_t (&wcstr)[size],
   const char *mbstr,
   size_t count,
   _locale_t locale
); // C++ only
```

### <a name="parameters"></a>Parametri

*wcstr*<br/>
Indirizzo di una sequenza di caratteri wide.

*mbstr*<br/>
Indirizzo di una sequenza di caratteri multibyte con terminazione Null.

*count*<br/>
Numero massimo di caratteri multibyte da convertire.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Se **mbstowcs** converte correttamente la stringa di origine, restituisce il numero di caratteri multibyte convertiti. Se il *wcstr* l'argomento è **NULL**, la funzione restituisce le dimensioni richieste (in caratteri "wide") della stringa di destinazione. Se **mbstowcs** rileva un carattere multibyte non valido, restituisce -1. Se il valore restituito sarà *conteggio*, la stringa di caratteri "wide" non è con terminazione null.

> [!IMPORTANT]
> Assicurarsi che *wcstr* e *mbstr* non si sovrappongano e che *conteggio* rispecchi correttamente il numero di caratteri multibyte da convertire.

## <a name="remarks"></a>Note

Il **mbstowcs** funzione converte fino a un numero massimo di *conteggio* caratteri multibyte a cui fa riferimento *mbstr* in una stringa di caratteri wide corrispondenti che sono determinato dalle impostazioni locali correnti. Archivia la stringa di caratteri wide risultante nell'indirizzo rappresentato da *wcstr*. Il risultato è simile a una serie di chiamate a [mbtowc](mbtowc-mbtowc-l.md). Se **mbstowcs** rileva il carattere di null a byte singolo ('\0') prima o quando *conteggio* si verifica, la funzione converte il carattere null di un carattere null di caratteri "wide" (L '\0') e si arresta. Pertanto la stringa di caratteri wide in *wcstr* sono con terminazione null solo se viene rilevato un carattere null durante la conversione. Se le sequenze a cui punta *wcstr* e *mbstr* si sovrappongono, il comportamento sarà indefinito.

Se il *wcstr* l'argomento è **NULL**, **mbstowcs** restituisce il numero di caratteri wide risultanti dalla conversione, senza includere un carattere di terminazione null. La stringa di origine deve avere terminazione Null perché venga restituito il valore corretto. Se è necessario che la stringa di caratteri wide risultante abbia terminazione Null, aggiungere un carattere di terminazione Null al valore restituito.

Se il *mbstr* l'argomento è **NULL**, o se *count* è > **INT_MAX**, viene richiamato il gestore di parametri non validi, come descritto in [ Convalida dei parametri](../../c-runtime-library/parameter-validation.md) . Se l'esecuzione può continuare, errno è impostato su **EINVAL** e la funzione restituisce -1.

**mbstowcs** Usa le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali. **mbstowcs_l** è identica, ma usa le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

In C++ queste funzioni presentano overload di modello che richiamano le relative controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**mbstowcs**|\<stdlib.h>|
|**_mbstowcs_l**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_mbstowcs.c
// compile with: /W3
// illustrates the behavior of the mbstowcs function

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main( void )
{
    size_t size;
    int nChar = 2; // number of characters to convert
    int requiredSize;

    unsigned char    *pmbnull  = NULL;
    unsigned char    *pmbhello = NULL;
    char* localeInfo;

    wchar_t *pwchello = L"\x3042\x3043"; // 2 Hiragana characters
    wchar_t *pwc;

    /* Enable the Japanese locale and codepage */
    localeInfo = setlocale(LC_ALL, "Japanese_Japan.932");
    printf("Locale information set to %s\n", localeInfo);

    printf( "Convert to multibyte string:\n" );

    requiredSize = wcstombs( NULL, pwchello, 0); // C4996
    // Note: wcstombs is deprecated; consider using wcstombs_s
    printf("   Required Size: %d\n", requiredSize);

    /* Add one to leave room for the null terminator. */
    pmbhello = (unsigned char *)malloc( requiredSize + 1);
    if (! pmbhello)
    {
        printf("Memory allocation failure.\n");
        return 1;
    }
    size = wcstombs( pmbhello, pwchello, requiredSize + 1); // C4996
    // Note: wcstombs is deprecated; consider using wcstombs_s
    if (size == (size_t) (-1))
    {
        printf("Couldn't convert string. Code page 932 may"
                " not be available.\n");
        return 1;
    }
    printf( "   Number of bytes written to multibyte string: %u\n",
            (unsigned int) size );
    printf( "   Hex values of the" );
    printf( " multibyte characters: %#.2x %#.2x %#.2x %#.2x\n",
            pmbhello[0], pmbhello[1], pmbhello[2], pmbhello[3] );
    printf( "   Codepage 932 uses 0x81 to 0x9f as lead bytes.\n\n");

    printf( "Convert back to wide-character string:\n" );

    /* Assume we don't know the length of the multibyte string.
     Get the required size in characters, and allocate enough space. */

    requiredSize = mbstowcs(NULL, pmbhello, 0); // C4996
    /* Add one to leave room for the null terminator */
    pwc = (wchar_t *)malloc( (requiredSize + 1) * sizeof( wchar_t ));
    if (! pwc)
    {
        printf("Memory allocation failure.\n");
        return 1;
    }
    size = mbstowcs( pwc, pmbhello, requiredSize + 1); // C4996
    if (size == (size_t) (-1))
    {
       printf("Couldn't convert string--invalid multibyte character.\n");
    }
    printf( "   Characters converted: %u\n", (unsigned int)size );
    printf( "   Hex value of first 2" );
    printf( " wide characters: %#.4x %#.4x\n\n", pwc[0], pwc[1] );
    free(pwc);
    free(pmbhello);
}
```

```Output
Locale information set to Japanese_Japan.932
Convert to multibyte string:
   Required Size: 4
   Number of bytes written to multibyte string: 4
   Hex values of the  multibyte characters: 0x82 0xa0 0x82 0xa1
   Codepage 932 uses 0x81 to 0x9f as lead bytes.

Convert back to wide-character string:
   Characters converted: 2
   Hex value of first 2 wide characters: 0x3042 0x3043
```

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[_mbclen, mblen, _mblen_l](mbclen-mblen-mblen-l.md)<br/>
[mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md)<br/>
[wcstombs, _wcstombs_l](wcstombs-wcstombs-l.md)<br/>
[wctomb, _wctomb_l](wctomb-wctomb-l.md)<br/>
[MultiByteToWideChar](/windows/desktop/api/stringapiset/nf-stringapiset-multibytetowidechar)<br/>
