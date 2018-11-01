---
title: wcrtomb
ms.date: 11/04/2016
apiname:
- wcrtomb
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
- wcrtomb
helpviewer_keywords:
- wide characters, converting
- wcrtomb function
- multibyte characters
- characters, converting
ms.assetid: 717f1b21-2705-4b7f-b6d0-82adc5224340
ms.openlocfilehash: a5fad3f41c7ed459a1af3fae7c6a5a85c867d5ad
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50659251"
---
# <a name="wcrtomb"></a>wcrtomb

Converte un carattere wide nella relativa rappresentazione di caratteri multibyte. È disponibile una versione più sicura di questa funzione. Vedere [wcrtomb_s](wcrtomb-s.md).

## <a name="syntax"></a>Sintassi

```C
size_t wcrtomb(
   char *mbchar,
   wchar_t wchar,
   mbstate_t *mbstate
);
template <size_t size>
size_t wcrtomb(
   char (&mbchar)[size],
   wchar_t wchar,
   mbstate_t *mbstate
); // C++ only
```

### <a name="parameters"></a>Parametri

*mbchar*<br/>
Carattere multibyte convertito risultante.

*wchar*<br/>
Carattere wide da convertire.

*mbstate*<br/>
Un puntatore a un **mbstate_t** oggetto.

## <a name="return-value"></a>Valore restituito

Restituisce il numero di byte necessari per rappresentare il carattere multibyte convertito. In caso contrario restituisce -1 se si verifica un errore.

## <a name="remarks"></a>Note

Il **wcrtomb** funzione converte un carattere wide, a partire dallo stato di conversione specificato contenuto in *mbstate*, dal valore contenuto nel *wchar*, nel indirizzo rappresentato da *mbchar*. Il valore restituito è il numero di byte necessari per rappresentare il carattere multibyte corrispondente, ma non restituirà più **MB_CUR_MAX** byte.

Se *mbstate* è null, interna **mbstate_t** che contiene lo stato di conversione dell'oggetto *mbchar* viene usato. Se la sequenza di caratteri *wchar* non ha un multibyte corrispondente rappresentazione in caratteri, viene restituito -1 e il **errno** è impostata su **EILSEQ**.

Il **wcrtomb** la funzione differisce da [wctomb, wctomb_l](wctomb-wctomb-l.md) dalla relativa possibilità di essere riavviata. Cui è archiviato lo stato di conversione *mbstate* per le chiamate successive alle stesse o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili. Ad esempio, un'applicazione deve usare **wcsrlen** invece **wcsnlen**, se una chiamata successiva a **wcsrtombs** sono state utilizzate al posto di **wcstombs**.

In C++, per questa funzione è disponibile un overload del modello che richiama le relative controparti sicure più recenti. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

## <a name="exceptions"></a>Eccezioni

Il **wcrtomb** funzione è multithread-safe finché nessuna funzione nel thread corrente chiami **setlocale** durante l'esecuzione di questa funzione e mentre il *mbstate* è null.

## <a name="example"></a>Esempio

```C
// crt_wcrtomb.c
// compile with: /W3
// This program converts a wide character
// to its corresponding multibyte character.

#include <string.h>
#include <stdio.h>
#include <wchar.h>

int main( void )
{
    size_t      sizeOfCovertion = 0;
    mbstate_t   mbstate;
    char        mbStr = 0;
    wchar_t*    wcStr = L"Q";

    // Reset to initial conversion state
    memset(&mbstate, 0, sizeof(mbstate));

    sizeOfCovertion = wcrtomb(&mbStr, *wcStr, &mbstate); // C4996
    // Note: wcrtomb is deprecated; consider using wcrtomb_s instead
    if (sizeOfCovertion > 0)
    {
        printf("The corresponding wide character \"");
        wprintf(L"%s\"", wcStr);
        printf(" was converted to the \"%c\" ", mbStr);
        printf("multibyte character.\n");
    }
    else
    {
        printf("No corresponding multibyte character "
               "was found.\n");
    }
}
```

```Output
The corresponding wide character "Q" was converted to the "Q" multibyte character.
```

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**wcrtomb**|\<wchar.h>|

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[mbsinit](mbsinit.md)<br/>
