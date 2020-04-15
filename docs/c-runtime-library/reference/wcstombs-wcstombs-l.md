---
title: wcstombs, _wcstombs_l
ms.date: 4/2/2020
api_name:
- wcstombs
- _wcstombs_l
- _o__wcstombs_l
- _o_wcstombs
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
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
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
ms.openlocfilehash: fb95c6d73a3979a39995b9104a76fc42ca9e8535
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366717"
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

*mbstr (intalltore*<br/>
Indirizzo di una sequenza di caratteri multibyte.

*Wcstr*<br/>
Indirizzo di una sequenza di caratteri wide.

*count*<br/>
Numero massimo di byte che possono essere archiviati nella stringa di output multibyte.

*Impostazioni internazionali*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Se **wcstombs** converte correttamente la stringa multibyte, restituisce il numero di byte scritti nella stringa di output multibyte, escludendo il carattere di terminazione null (se presente). Se l'argomento *mbstr* è **NULL**, **wcstombs** restituisce la dimensione richiesta in byte della stringa di destinazione. Se **wcstombs** rileva un carattere wide non può convertire in un carattere multibyte, restituisce -1 cast al tipo **size_t** e imposta **errno** su **EILSEQ**.

## <a name="remarks"></a>Osservazioni

La funzione **wcstombs** converte la stringa di caratteri wide a cui punta *wcstr* nei caratteri multibyte corrispondenti e archivia i risultati nella matrice *mbstr.* Il parametro *count* indica il numero massimo di byte che è possibile archiviare nella stringa di output multibyte, ovvero la dimensione di *mbstr*. In generale, non è possibile sapere quanti byte saranno necessari durante la conversione di stringa di caratteri wide. Alcuni caratteri wide richiederanno un solo byte nella stringa di output, altri due. Se sono presenti due byte nella stringa di output multibyte per ogni carattere wide nella stringa di input (incluso il carattere wide null), il risultato è garantito per adattarsi.

Se **wcstombs** rileva il carattere null carattere wide (L'0') prima o quando si verifica *count,* lo converte in uno 0 a 8 bit e si arresta. Di conseguenza, la stringa di caratteri multibyte in *mbstr* è con terminazione null solo se **wcstombs** rileva un carattere null carattere wide durante la conversione. Se le sequenze a cui punta *wcstr* e *mbstr* si sovrappongono, il comportamento di **wcstombs** non è definito.

Se l'argomento *mbstr* è **NULL**, **wcstombs** restituisce la dimensione richiesta in byte della stringa di destinazione.

**wcstombs** convalida i parametri. Se *wcstr* è **NULL**o se *count* è maggiore di **INT_MAX**, questa funzione richiama il gestore di parametri non validi, come descritto in Convalida [dei parametri](../../c-runtime-library/parameter-validation.md) . Se l'esecuzione può continuare, la funzione imposta **errno** su **EINVAL** e restituisce -1.

**wcstombs** utilizza le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali; **_wcstombs_l** è identico, ad eccezione del fatto che utilizza invece le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

In C++ queste funzioni presentano overload di modello che richiamano le relative controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**wcstombs**|\<stdlib.h>|
|**_wcstombs_l**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Questo programma illustra il comportamento della funzione **wcstombs.**

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

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni internazionali](../../c-runtime-library/locale.md)<br/>
[_mbclen, mblen, _mblen_l](mbclen-mblen-mblen-l.md)<br/>
[mbstowcs, _mbstowcs_l](mbstowcs-mbstowcs-l.md)<br/>
[mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md)<br/>
[wctomb, _wctomb_l](wctomb-wctomb-l.md)<br/>
[WideCharToMultiByte](/windows/win32/api/stringapiset/nf-stringapiset-widechartomultibyte)<br/>
