---
title: wcstombs, _wcstombs_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
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
apitype: DLLExport
f1_keywords:
- wcstombs
- _wcstombs_l
dev_langs:
- C++
helpviewer_keywords:
- _wcstombs_l function
- wcstombs function
- string conversion, wide characters
- wide characters, converting
- wcstombs_l function
- characters, converting
- string conversion, multibyte character strings
ms.assetid: 91234252-9ea1-423a-af99-e9d0ce4a40e3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: facc4855d1e36965eff7af70c5cb48f8fb77d419
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="wcstombs-wcstombsl"></a>wcstombs, _wcstombs_l

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

Se **wcstombs** converte correttamente la stringa multibyte, restituisce il numero di byte scritti nella stringa multibyte di output, escluso l'interruzione del **NULL** (se presente). Se il *mbstr* argomento **NULL**, **wcstombs** restituisce le dimensioni necessarie in byte della stringa di destinazione. Se **wcstombs** rileva un carattere "wide" non è possibile convertire un carattere multibyte, restituisce -1 cast al tipo **size_t** e imposta **errno** a **EILSEQ** .

## <a name="remarks"></a>Note

Il **wcstombs** funzione converte la stringa di caratteri wide a cui puntata *wcstr* per i caratteri multibyte corrispondente e archivia i risultati nel *mbstr* matrice. Il *conteggio* parametro indica il numero massimo di byte che possono essere archiviati nella stringa di output multibyte (vale a dire, il valore pari *mbstr*). In generale, non è possibile sapere quanti byte saranno necessari durante la conversione di stringa di caratteri wide. Alcuni caratteri wide richiederanno un solo byte nella stringa di output, altri due. Se sono presenti due byte nella stringa multibyte di output per ogni carattere "wide" nella stringa di input (incluso il carattere "wide" **NULL**), il risultato è garantito per adattarla.

Se **wcstombs** rileva il carattere null di caratteri wide (L '\0') prima o quando *conteggio* si verifica, lo converte in un 0 a 8 bit, quindi si arresta. Di conseguenza, la stringa di caratteri multibyte in *mbstr* è con terminazione null solo se **wcstombs** rileva un carattere null di caratteri "wide" durante la conversione. Se le sequenze a cui punta *wcstr* e *mbstr* si sovrappongono, il comportamento di **wcstombs** è definito.

Se il *mbstr* argomento **NULL**, **wcstombs** restituisce le dimensioni necessarie in byte della stringa di destinazione.

**wcstombs** convalida i propri parametri. Se *wcstr* viene **NULL**, o se *conteggio* è maggiore di **INT_MAX**, questa funzione richiama il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md) . Se l'esecuzione può continuare, la funzione imposta **errno** alla **EINVAL** e restituisce -1.

**wcstombs** utilizza le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali; **wcstombs_l** è identica ad eccezione del fatto che usa le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

In C++ queste funzioni presentano overload di modello che richiamano le relative controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**wcstombs**|\<stdlib.h>|
|**_wcstombs_l**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Questo programma viene illustrato il comportamento del **wcstombs** (funzione).

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
[WideCharToMultiByte](http://msdn.microsoft.com/library/windows/desktop/dd374130)<br/>
