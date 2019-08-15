---
title: wcstombs, _wcstombs_l
ms.date: 11/04/2016
apiname:
- wcstombs
- _wcstombs_l
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
- ntoskrnl.exe
apitype: DLLExport
f1_keywords:
- wcstombs
- _wcstombs_l
helpviewer_keywords:
- _wcstombs_l function
- wcstombs function
- string conversion, wide characters
- wide characters, converting
- wcstombs_l function
- characters, converting
- string conversion, multibyte character strings
ms.assetid: 91234252-9ea1-423a-af99-e9d0ce4a40e3
ms.openlocfilehash: b5ee2a0e5636e9c1d1f3fc204b2b6cbf8b733d45
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69498989"
---
# <a name="wcstombs-_wcstombs_l"></a>wcstombs, _wcstombs_l

Converte una sequenza di caratteri wide in una sequenza di caratteri multibyte corrispondente. Sono disponibili versioni più sicure di queste funzioni. Vedere [wcstombs_s, _wcstombs_s_l](wcstombs-s-wcstombs-s-l.md).

## <a name="syntax"></a>Sintassi

```C
size_t wcstombs(
   char *mbstr,
   const wchar_t *wcstr,
   size_t count
);
size_t _wcstombs_l(
   char *mbstr,
   const wchar_t *wcstr,
   size_t count,
   _locale_t locale
);
template <size_t size>
size_t wcstombs(
   char (&mbstr)[size],
   const wchar_t *wcstr,
   size_t count
); // C++ only
template <size_t size>
size_t _wcstombs_l(
   char (&mbstr)[size],
   const wchar_t *wcstr,
   size_t count,
   _locale_t locale
); // C++ only
```

### <a name="parameters"></a>Parametri

*mbstr*<br/>
Indirizzo di una sequenza di caratteri multibyte.

*wcstr*<br/>
Indirizzo di una sequenza di caratteri wide.

*count*<br/>
Numero massimo di byte che possono essere archiviati nella stringa di output multibyte.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Se **wcstombs** converte correttamente la stringa multibyte, restituisce il numero di byte scritti nella stringa di output multibyte, escluso il valore null di terminazione (se presente). Se l'argomento *mbstr* è **null**, **wcstombs** restituisce la dimensione richiesta in byte della stringa di destinazione. Se **wcstombs** rileva un carattere wide, non può essere convertito in un carattere multibyte, restituisce il cast-1 al tipo **size_t** e imposta **errno** su **EILSEQ**.

## <a name="remarks"></a>Note

La funzione **wcstombs** converte la stringa di caratteri wide a cui punta *wcstr* nei caratteri multibyte corrispondenti e archivia i risultati nella matrice *mbstr* . Il parametro *count* indica il numero massimo di byte che possono essere archiviati nella stringa di output multibyte, ovvero la dimensione di *mbstr*. In generale, non è possibile sapere quanti byte saranno necessari durante la conversione di stringa di caratteri wide. Alcuni caratteri wide richiederanno un solo byte nella stringa di output, altri due. Se sono presenti due byte nella stringa di output multibyte per ogni carattere wide nella stringa di input (incluso il carattere wide null), il risultato sarà sicuramente appropriato.

Se **wcstombs** rileva il carattere null Wide (L'\ 0') prima o quando si verifica il *conteggio* , lo converte in uno 0 a 8 bit e si arresta. Quindi, la stringa di caratteri multibyte in *mbstr* è con terminazione null solo se **wcstombs** rileva un carattere null a caratteri wide durante la conversione. Se le sequenze a cui puntano *wcstr* e *mbstr* si sovrappongono, il comportamento di **wcstombs** non è definito.

Se l'argomento *mbstr* è **null**, **wcstombs** restituisce la dimensione richiesta in byte della stringa di destinazione.

**wcstombs** convalida i relativi parametri. Se *wcstr* è **null**o se *count* è maggiore di **INT_MAX**, questa funzione richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md) . Se l'esecuzione può continuare, la funzione imposta **errno** su **EINVAL** e restituisce-1.

**wcstombs** usa le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali; **_wcstombs_l** è identico, ad eccezione del fatto che usa le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

In C++ queste funzioni presentano overload di modello che richiamano le relative controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**wcstombs**|\<stdlib.h>|
|**_wcstombs_l**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Questo programma illustra il comportamento della funzione **wcstombs** .

```C
// crt_wcstombs.c
// compile with: /W3
// This example demonstrates the use
// of wcstombs, which converts a string
// of wide characters to a string of
// multibyte characters.

#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 100

int main( void )
{
    size_t  count;
    char    *pMBBuffer = (char *)malloc( BUFFER_SIZE );
    wchar_t *pWCBuffer = L"Hello, world.";

    printf("Convert wide-character string:\n" );

    count = wcstombs(pMBBuffer, pWCBuffer, BUFFER_SIZE ); // C4996
    // Note: wcstombs is deprecated; consider using wcstombs_s instead
    printf("   Characters converted: %u\n",
            count );
    printf("    Multibyte character: %s\n\n",
           pMBBuffer );

    free(pMBBuffer);
}
```

```Output
Convert wide-character string:
   Characters converted: 13
    Multibyte character: Hello, world.
```

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[_mbclen, mblen, _mblen_l](mbclen-mblen-mblen-l.md)<br/>
[mbstowcs, _mbstowcs_l](mbstowcs-mbstowcs-l.md)<br/>
[mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md)<br/>
[wctomb, _wctomb_l](wctomb-wctomb-l.md)<br/>
[WideCharToMultiByte](/windows/win32/api/stringapiset/nf-stringapiset-widechartomultibyte)<br/>
